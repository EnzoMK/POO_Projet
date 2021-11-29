#pragma once

#include "CLcad.h"
#include "CLmappStatistique.h"

using namespace System::Data;
namespace NS_Comp_Svc

{
    ref class CLserviceGestionStatistique
    {
    private:
        NS_Comp_Data::CLcad^ oCad;
        NS_Comp_Mappage::CLmappStatistique^ oMappStatistique;
    public:
        CLserviceGestionStatistique(void);
        System::Data::DataSet^ Afficher_Panier_moyen(System::String^);
        System::Data::DataSet^ Afficher_Chiffre_affaire_mois(System::String^);
        System::Data::DataSet^ Afficher_Produits_seuil(System::String^);
        System::Data::DataSet^ Afficher_Montant_achat_clients(System::String^);
        System::Data::DataSet^ Afficher_10_articles_plus_vendus(System::String^);
        System::Data::DataSet^ Afficher_10_articles_moins_vendus(System::String^);
        System::Data::DataSet^ Afficher_Valeur_commerciale_stock(System::String^);
        System::Data::DataSet^ Afficher_Variations_val_commerce(System::String^);
        System::Data::DataSet^ Afficher_Valeur_Achat_Stock(System::String^);
        
    };
}