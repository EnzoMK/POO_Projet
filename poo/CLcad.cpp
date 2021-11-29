#include "CLcad.h"

NS_Comp_Data::CLcad::CLcad(void)
{
    //récupére chaine de conneccttion
    this->sCnx = "Data Source = DESKTOP-G3977MM;Initial Catalog = DB_P6;User ID = CNX_P6; Password=guigui9999";

    this->sSql = "Rien";

    //creer un objet de type connection
    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    //creer une commande qui va contenir une instruction sql lié a l'objet connexion
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    //Object qui fait la liaison entre la bdd et l'application
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    //commande utiliser de type text
    this->oCmd->CommandType = System::Data::CommandType::Text;
}

//Methode pour  récuperer les informations lors d'un select    ( requete; resulat)
System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    //Supprime les enregistrement deja ^resent
    this->oDs->Clear();
    //Variable sSql = la requete sql donnée
    this->sSql = sSql;
    //Commande text = a la requete sql donnée
    this->oCmd->CommandText = this->sSql;
    //On dit que c la commande oCmd qui va être executer
    this->oDA->SelectCommand = this->oCmd;
    //open/execute sur la connextion , mettre les données oDs dans fill en les Nomant grace a datatablename puis pour finir sa va faire une close sur la connexion 
    this->oDA->Fill(this->oDs, sDataTableName);

    //return l'object dataset() qui contient les données (table et enregistrement)
    return this->oDs;
}
//insert delete uptdate
void NS_Comp_Data::CLcad::actionRows(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
    //ouvre la connextion
    this->oCnx->Open();
    //executer la commande
    this->oCmd->ExecuteNonQuery();
    //fermer la connexion 
    this->oCnx->Close();
}