namespace NS_Comp_Mappage
{
    ref class CLmappStatistique
    {
    public:
        System::String^ Select_Panier_moyen(void);
        System::String^ Select_Chiffre_affaire_mois(void);
        System::String^ Select_Produits_seuil(void);
        System::String^ Select_Montant_achat_clients(void);
        System::String^ Select_10_articles_plus_vendus(void);
        System::String^ Select_10_articles_moins_vendus(void);
        System::String^ Select_Valeur_commerciale_stock(void);
        System::String^ Select_Variations_val_commerce(void);
        System::String^ Select_Valeur_Achat_Stock(void);
    };
}