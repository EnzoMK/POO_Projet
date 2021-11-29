#include "CLserviceGestionStatistique.h"
#include "CLcad.h"

NS_Comp_Svc::CLserviceGestionStatistique::CLserviceGestionStatistique(void)
{
    this->oCad = gcnew NS_Comp_Data::CLcad();
    this->oMappStatistique = gcnew NS_Comp_Mappage::CLmappStatistique();
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_Panier_moyen(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_Panier_moyen();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_Chiffre_affaire_mois(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_Chiffre_affaire_mois();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_Produits_seuil(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_Produits_seuil();
    return this->oCad->getRows(sql, dataTableName);
}
    
System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_Montant_achat_clients(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_Montant_achat_clients();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_10_articles_plus_vendus(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_10_articles_plus_vendus();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_10_articles_moins_vendus(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_10_articles_moins_vendus();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_Valeur_commerciale_stock(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_Valeur_commerciale_stock();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_Variations_val_commerce(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_Variations_val_commerce();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceGestionStatistique::Afficher_Valeur_Achat_Stock(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->oMappStatistique->Select_Valeur_Achat_Stock();
    return this->oCad->getRows(sql, dataTableName);
}