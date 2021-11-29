#include "CLmappStatistique.h"


System::String^ NS_Comp_Mappage::CLmappStatistique::Select_Panier_moyen(void)
{
    return "";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_Chiffre_affaire_mois(void)
{
    return "SELECT SUM(montant_paiement) FROM Paiement WHERE date_solde_paiement = ‘decembre’ GROUP BY montant_paiement;";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_Produits_seuil(void)
{
    return "SELECT designation FROM Articles WHERE seuil_reapprovisionement>quantite_stock;";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_Montant_achat_clients(void)
{
    return "SELECT montant_TTC FROM commande group by ID_client;";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_10_articles_plus_vendus(void)
{
    return "SELECT designation (10) FROM Articles ORDER BY  (Select quantite_article from Contenir WHERE Contenir.Reference_article = Articles.Reference_article);";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_10_articles_moins_vendus(void)
{
    return "SELECT designation (10) FROM Articles ORDER BY  (Select quantite_article from Contenir WHERE Contenir.Reference_article = Articles.Reference_article);";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_Valeur_commerciale_stock(void)
{
    return "SELECT SUM(prix_article_HT*quantite_stock*taux_TVA) FROM Articles;";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_Variations_val_commerce(void)
{
    return "";
}

System::String^ NS_Comp_Mappage::CLmappStatistique::Select_Valeur_Achat_Stock(void)
{
    return "SELECT SUM(prix_article_HT*quantite_stock) FROM Articles;";
}
