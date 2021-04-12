-Agence de presse(id_agence,nom, adresse,type(type d'agence) ,liste_journalists)  
*-journaliste_salarié(date_embauche,salaire) extends journaliste independant(nom,-prenom,area_of_expertise,nationalité,pays_de service)*  
*-abonnement(nom,type,forfait)*  
*-abonné(durée,abonnement) extends client()  
-office(date_d'ouvertoure) extends agence de presse  
-mtériel()  
*-article_de_presse(id,titre,theme)*  
*-sujet d'actualité(global or local,theme,date)*  
-support(id support)  
-depeche_multimedia()  
-papier() 
-radio()  
-televiseur()  
-client(nom,adresse,type_client +contacter())  
-[partie finance]  