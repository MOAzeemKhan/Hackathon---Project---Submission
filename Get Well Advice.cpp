#include <iostream>
#include <bits/stdc++.h>
#include <sys/select.h>
#include <sys/time.h>
#include <unistd.h>
using namespace std;
void appointment()
{
cout<<"\n We are Glad That you Booked An Appointment With us. Appointment details will be soon shared on your registered mobile number\n";

}
struct patient
{
    char name[50];
    int age;
    int height;
    int weight;
    char gender[10];
};
// A Function to generate a unique OTP everytime
string generateOTP(int len)
{
 // All possible characters of my OTP
 string str = "abcdefghijklmnopqrstuvwxyzABCD"
   "EFGHIJKLMNOPQRSTUVWXYZ0123456789";
 int n = str.length();

 // String to hold my OTP
 string OTP;

 for (int i=1; i<=len; i++)
  OTP.push_back(str[rand() % n]);

 return(OTP);
}
void verif()
{
    sleep(3);
    cout<<"\nYour Verification is completed\n";
}
int main ()
{
     cout<<"\t\t\t(*_*)___________________________ H E L L O P A T I E N T ________________________(*_*)"<<endl; 
     cout<<endl<<endl<<endl<<endl;


    long int mnum;
    
    cout<<"\nGood Morning. Please Enter your Mobile Number: ";
    cin>> mnum;
    string S1 = "\nYou Will receive a message on your phone, reply to message with the OTP displayed on the screen\n";
    cout<<S1;
   
    // For different values each time we run the code
    srand(time(NULL));
    // Declare the length of OTP
    int len = 6;
    cout<<"\nYour OTP is: "<<generateOTP(len).c_str()<<endl;
	int ans_1, ans_2;
    sleep(10);
    cout<<"\n------------------Your Verification is completed-------------------------\n";
    sleep(3);
	
 
    patient y;
    cout << "\nEnter your First Name:      ";
    cin>>y.name;
    cout << "\nEnter your Age:             ";
    cin>>y.age;
    cout << "\nEnter your Height (in cms): ";
    cin>>y.height; 
    cout<<"\nEnter your Weight(in Kgs) : ";
    cin>>y.weight;
    cout<<"\nEnter your Gender:          ";
    cin>>y.gender;
    sleep(3);
    cout<<"\n---------------------------Your Details were Successfully Saved---------------------------------\n";
    sleep(3);
    cout<<"\n"<<y.name<<" For what would you like to consult with us?\n";
    cout<<"\n1) General Consultancy\n\n2) Know my test results\n\n3) Know the Status of My Reports\n\n4) Talk to our experienced Medical Team\n\n5) Instanteously Book An appointment in the Nearest Clinic\n\nEnter Your Choice: ";
    cin>>ans_1;
    switch(ans_1)
    {
        case 1:
        {
            sleep(2);
            cout<<"\n1) BMI\n\n2) Age related advise\n\n3) Menopause\n\nEnter Your Choice: ";
            cin>>ans_2;
            switch(ans_2)
            {
                case 1:
                {
                    float bmi,w,h; //w=weight , h=height
                    w = y.weight;
                    h = y.height;
                    bmi=(w*10000)/(h*h);
                    cout<<"Your BMI is : "<<bmi<<endl;
                    if(bmi>25)
                    {
                        cout<<"\n\nYou are Overweight\n\n";
                        cout<<"\n\nYou can lower body fat and get to a healthier weight by exercising at least three times per week. \n\nYou should also follow certain diet habits, such as eating only when you’re hungry, eating mindfully, and choosing a diet that’s rich in whole, unprocessed foods. \n\nYou may also benefit from nutritional counseling. \n\nA dietitian can teach you which foods to eat and how much food you should eat in order to lose weight.\n\n";
                    }
                    else if(bmi<25 && bmi>18.5)
                    {
                        cout<<"\n\nYou are Optimal\n\n";
                    }
                    else
                    {
                        cout<<"\nYou are Underweight\n";
                        cout<<"\n\nIf a person is underweight, there are various healthful weight-gain methods that they can try.\n\nA person can gain weight by following a healthful diet that incorporates nutritious calorie-dense foods. \n";
                        cout<<"\nSome key components of a diet for weight gain may include: \n\nAdding snacks. High-protein and whole-grain carbohydrate snacks can help a person gain weight. \nExamples include peanut butter crackers, protein bars, trail mix, pita chips and hummus, or a handful of almonds.\n";
                        cout<<"\nEating several small meals a day. Sometimes a person may be underweight because they cannot tolerate eating large meals. Instead, a person can eat several small meals throughout the day. \n";
                        cout<<"\nAvoiding empty calories. Eating high-calorie foods may cause a person to gain weight, but they also have excess fats that could affect a person’s heart and blood vessels. A person should avoid foods that are high in sugar and salt.";
                    }
                    break;
                }
                case 2:
                {
                    if(y.age >= 10 && y.age <= 13)
                    {
                        cout<<"\n\n----------------------Food for Children entering their Teenage years---------------------------------\n\n";
                        cout<<y.name<<" Do ypu know that the growth spurt as we move into adolescence age, our body needs plenty of energy and nutrients. \nFor girls, this generally occurs around 10 to 11 years of age. \nFor boys, it occurs later, at around 12 to 13 years.\n";
                        cout<<"\nRecommendations include:\n\nTakeaway and fast foods need to be balanced with nutrient-dense foods such as wholegrain breads and cereals, fruits, legumes, nuts, vegetables, fish and lean meats.\n\n";
                        cout<<"Milk, yoghurt and cheese (mostly reduced fat) should be included to boost calcium intake – this is especially important for growing bones. Cheese should preferably be a lower salt variety. \n\nAdolescent girls should be particularly encouraged to consume milk and milk products.\n\n";
                        break;
                    }
                    else if(y.age > 13 && y.age <= 20)
                    {
                        cout<<"\n\n-----------------------------Older teenagers and young adults------------------------------------\n\n";
                        cout<<y.name<<" Moving away from home, starting work or study, and the changing lifestyle that accompanies the late teens and early 20s can cause dietary changes that are not always beneficial for good health.\n\n";
                        cout<<"Recommendations include:\n\nMake a deliberate effort to be physically active.\n\nLimit alcohol intake.\n\nReduce the amount of fats and salt in the daily diet.";
                        cout<<"\n\nBe careful to include foods rich in iron and calcium.\n\nEstablish healthy eating habits that will be carried on into later life.";
                    
                        break;
                    }
                    else if(y.age >= 50)
                    {
                        cout<<"\n\n-------------------------Food for older people-------------------------\n\n";
                        cout<<y.name<<" Many people eat less as they get older – this can make it harder to make sure your diet has enough variety to include all the nutrition you need.\n\n------------------Recommendations include------------------------\n\n";
                        cout<<"Be as active as possible to encourage your appetite and maintain muscle mass.\n\nRemain healthy with well-balanced eating and regular exercise.\n\nEat foods that are nutrient dense rather than energy dense.";
                        cout<<"If possible, try to spend some time outside each day to boost your vitamin D synthesis for healthy bones.\n\n";
                        cout<<"\n\nLimit foods that are high in energy and low in nutrients such as cakes, sweet biscuits and soft drinks.\n\nChoose foods that are naturally high in fibre to encourage bowel health.";
                        cout<<"\n\nLimit the use of table salt, especially during cooking. \n\nChoose from a wide variety of foods and drink adequate fluids.\n\nShare mealtimes with family and friends.";
                    
                        break;
                    }
                    else
                    {
                        cout<<"\n\n"<<y.name<<" To meet your body’s regular nutritional needs, you should consume:\n\nA wide variety of nutritious foods\n\nWater on a daily basis\n\nEnough kilojoules for energy, with carbohydrates as the preferred source\n\n";
                        cout<<"Essential fatty acids from foods such as oily fish, nuts, avocado";
                        cout<<"\n\nadequate protein for cell maintenance and repair \n\nFat-soluble and water-soluble vitamins\n\nEssential minerals such as iron, calcium and zinc\n\nFoods containing plant-derived phytochemicals, which may protect against heart disease, diabetes, some cancers, arthritis and osteoporosis.";
                        cout<<"\n\nA varied diet that concentrates on fruits, vegetables, wholegrains, legumes, dairy foods and lean meats can meet these basic requirements.";
                        break;
                    }
                }
                case 3:
                {
                    int x, z;
                    char str1[50] = "Female";
                    char str2[50] = "female";
                    x = strcmp(str1, y.gender);
                    z = strcmp(str2, y.gender);
                    if(x == 0 || z == 0)
                    {
                        cout<<"\n\n--------------------------------Food for Menopausal women--------------------------------------\n\n";
                        cout<<y.name<<" thinning of the bones is common in postmenopausal women because of hormone-related changes.\n\n----------------------------Recommendations include-------------------------------------- ";
                        cout<<"\n\nEat foods rich in calcium - such as Milk or, if necessary, take calcium supplements as prescribed by a doctor.\n\nWeight-bearing exercises – such as walking or weight training can strengthen bones and help maintain a healthy body weight.";
                        cout<<"\n\nA high-fibre, low-fat and low-salt diet – a diet high in phytoestrogens has been found to reduce many symptoms of menopause";
                        cout<<"\n\nA variety of wholegrain, nutrient-dense food – wholegrains, legumes and soy-based foods.\n\n";
                    }
                    else
                    {
                        cout<<"\n\nInvalid Input\n\n";
                    }
                    break;
                }
                default:
                {
                    cout<<"\n\nInvalid Input\n\n";
                    break;
                }
            }
            break;
        }
        case 2:
        {
            sleep(2);
            int ans_3;
            cout<<"\nPlease choose the test which you took:";
            string test = "\n\n1)Diabetes Test(Hb1ac)\n2)Blood analysis\n3)Covid Test\n4)Kidney function test";
            cout<<test;
            cout<<"\n\nEnter your choice: ";
            cin>>ans_3;
            switch(ans_3)
            {
                case 1:
                {
                    int val;
                    cout<<"\n\nEnter the Glycosylated Haemoglobin level (without units): ";
                    cin>>val;
                    if(val>=6.5)
                    {
                        if(val >= 8)
                        {
                            char ans;
                            cout<<"\nImmediate Consultancy Required\nBook an Appointment?(y/n)";
                            cin>>ans;
                            appointment();
                            break;
                        }
                        else
                        {
                            cout<<"\n\nYour Sugar is at Ideal Level. Maintaining HbA1c levels to less than 7 percent will reduce the risk of long term complications of Diabetes\n";
                            int ans_4, ans_5;
                            cout<<"\n1) You already know which Type of Diabetes you have\n2) You Have taken the test for first time\nEnter your choice: ";
                            cin>>ans_4;
                            if(ans_4 == 1)
                            {
                                int ans_6;
                                cout<<"\n1) Type I\n2) Type II\n\nEnter your choice: ";
                                cin>>ans_6;
                                if(ans_6 == 1)
                                {
                                    int ans_7;
                                    cout<<"\n1) Some Tips for your Healthy Lifestlye\n2) Book an Appointment with docotor\n\nEnter your choice:";
                                    cin>>ans_7;
                                    if(ans_7 == 1)
                                    {
                                        char ans_8;
                                        cout<<"\n\nFoods to eat for a type 1 diabetic diet include complex carbohydrates such as:\nBrown rice";
                                        cout<<"\n\nWhole wheat,";
                                        cout<<"\nQuinoa,";
                                        cout<<"\nOatmeal,";
                                        cout<<"\nFruits,";
                                        cout<<"\nVegetables,";
                                        cout<<"\nBeans, and";
                                        cout<<"\nLentils.";
                                        cout<<"\n\nFoods to avoid for a type 1 diabetes diet include:";
                                        cout<<"\n\nSodas (both diet and regular),";
                                        cout<<"\nSimple carbohydrates - processed/refined sugars (white bread, pastries, chips, cookies, pastas),";
                                        cout<<"\nTrans fats (anything with the word hydrogenated on the label), and high-fat animal products.";
                                        cout<<"\n\nFor more queries/concerns, Book an Appointment with us\n";
                                        cout<<"\nDo you want To Book an appointment(y/n) ?: ";
                                        cin>>ans_8;
                                        if(ans_8 == 'y' || ans_8 == 'Y')
                                        {
                                            sleep(2);
                                            appointment();
                                            break;
                                        }
                                        else
                                        {
                                            break;
                                        }
                                    }
                                    else if(ans_7 == 2)
                                    {
                                        appointment();
                                        break;
                                    }
                                }
                                else if(ans_6 == 2)
                                {
                                    int ans_7;
                                    cout<<"\n\n1) Some Tips for your Healthy Lifestlye\n\n2) Book an Appointment with docotor\n\nEnter your choice:";
                                    cin>>ans_7;
                                    if(ans_7 == 1)
                                    {
                                        char ans_8;
                                        cout<<"\nNutritious foods that your diet should include:\n \nFruits (apples, oranges, berries, melons, pears, peaches)\n\nVegetables (like broccoli, cauliflower, spinach, cucumbers, zucchini)\n\nWhole grains (quinoa, oats, brown rice, farro)\n\nLegumes (beans, lentils, chickpeas)\n\nNuts (almonds, walnuts, pistachios, macadamia nuts, cashews)\n\nSeeds (chia seeds, pumpkin seeds, flax seeds, hemp seeds)\n\nProtein-rich foods (skinless poultry, seafood, lean cuts of red meat, tofu, tempeh)\n\nHeart-healthy fats (olive oil, avocados, canola oil, sesame oil)\n\nBeverages (water, black coffee, unsweetened tea, vegetable juice)";
                                        cout<<"\n\nHere are some of the foods you should limit with type 2 diabetes:\n\nHigh fat meat (fatty cuts of pork, beef, and lamb, poultry skin, dark meat chicken)\nFull-fat dairy (whole milk, butter, cheese, sour cream)\nSweets (candy, cookies, baked goods, ice cream, desserts)\nSugar-sweetened beverages (juice, soda, sweet tea, sports drinks)\nSweeteners (table sugar, brown sugar, honey, maple syrup, molasses)\nProcessed foods (chips, microwave popcorn, processed meat, convenience meals)\nTrans fats (vegetable shortening, fried foods, dairy-free coffee creamers, partially hydrogenated oil)";
                                        cout<<"\n\nFor more queries/concerns, Book an Appointment with us\n";
                                        cout<<"\nDo you want To Book an appointment(y/n) ?\n";
                                        cin>>ans_8;
                                        if(ans_8 == 'y' || ans_8 == 'Y')
                                        {
                                            appointment();
                                            break;
                                        }
                                    }
                                    else if(ans_7 == 2)
                                    {
                                        appointment();
                                        break;
                                    } 
                                }
                            }
                            else if(ans_4 == 2)
                            {
                                int ans_5;
                                cout<<"\n\nYou are Diabetic\nYou should consult a doctor. We can always give you tips to sustain a healthy life\n\n";
                                cout<<"1) Look at some health tips, which will help you in your journey\n\n2)Book Appointment\n\nEnter your Choice: ";
                                cin>>ans_5;
                                if(ans_5 == 1)
                                {
                                    char ans_8;
                                    cout<<"\n\nChoose healthier fats. \n\nNo more than 25 to 35 percent of your daily calories should come from dietary fats, and less than 7 percent of your daily calories should come from saturated fat. \n\nEat plenty of soluble fiber. \n\nFoods high in soluble fiber help prevent your digestive tract from absorbing cholesterol. These foods include:";
                                    cout<<"\nWhole-grain cereals such as oatmeal and oat bran\nFruits such as apples, bananas, oranges, pears, and prunes\nLegumes such as kidney beans, lentils, chick peas, black-eyed peas, and lima beans";
                                    cout<<"\n\nFor more queries/concerns, Book an Appointment with us\n";
                                    cout<<"\nDo you want To Book an appointment(y/n) ?: ";
                                    cin>>ans_8;
                                    if(ans_8 == 'y' || ans_8 == 'Y')
                                    {
                                        appointment();
                                        break;
                                    }
                                    break;
                                }
                                else if(ans_5 == 2)
                                {
                                    appointment();
                                    break;
                                }
                            }
                        }
                    }
                    else if( val < 5.7)
                    {
                        cout<<"\n\nCongratulations! You are a Healthy Individual\n";
                        cout<<"\n\nSome tips For Healthy Lifestyle are: ";
                        cout<<"\n\nEating the right foods & healthy foods from all the food groups:\nFruits and vegetables\\nWhole grains, such as whole wheat, brown rice, barley, quinoa, and oats\nProteins, such as lean meats, chicken, turkey, fish, eggs, nuts, beans, lentils, and tofu\nNonfat or low-fat dairy, such as milk, yogurt, and cheese";
                        break;
                    }
                    else if(val >= 5.7 && val < 6.5)
                    {
                        int ans_7;
                        cout<<"\n\n1) Some Tips for your Healthy Lifestlye\n\n2) Book an Appointment with docotor\n\nEnter your choice:";
                        cin>>ans_7;
                        if(ans_7 == 1)
                        {
                            cout<<"\n\nPure diabetic Foods that are low on the GI are best for your blood sugar. Incorporate the following items in your diet:\n\nSteel-cut oats (not instant oatmeal)\n\nStone-ground whole wheat bread\n\nnonstarchy vegetables, such as carrots and field greens\n\nBeans\n\nSweet potatoes\nCorn\nPasta (preferably whole wheat)";
                            cout<<"\n\nExamples of high-fiber foods include:\nBeans and Legumes\nFruits and vegetables that have an edible skin\nWhole grain breadsWhole grains, such as quinoa or barley\nWhole grain cereals\nWhole wheat pasta";
                        }
                        break;
                    }
                    else
                    {
                        cout<<"\n\nInvalid Input\n";
                        break;
                    }
                }
                case 4:
                {
                    int x, z, g, h;
                    float cret;
                    char ans_8;
                    char str1[50] = "Female";
                    char str2[50] = "female";
                    char str3[50] = "male";
                    char str4[50] = "Male";
                    x = strcmp(str1, y.gender);
                    z = strcmp(str2, y.gender);
                    g = strcmp(str3, y.gender);
                    h = strcmp(str4, y.gender);
                    cout<<"\n\nEnter the Creatinine value (in mg/dL): ";
                    cin>> cret;
                    if(y.age >= 18 && y.age <= 60)
                    {
                        if((g == 0 || h == 0) && (cret >= 0.9 && cret <= 1.3))
                        {
                            cout<<"\n\nCongratulations!"<<y.name<<", your Creatinine Level is Normal\n\n";
                            break;
                        }
                        else if((x == 0 || z == 0) && (cret >= 0.6 && cret <= 1.1))
                        {
                            cout<<"\n\nCongratulations!"<<y.name<<", your Creatinine Level is Normal\n\n";
                            break;
                        }
                        else
                        {
                            sleep(3);
                            cout<<"\n\nYour serum creatinine levels may be slightly elevated or higher than normal due to following reasons:\n\nA blocked urinary tract\n\nA high-protein diet\n\nDehydration";
                            cout<<"\n\nKidney problems, such as kidney damage or infection\n\nReduced blood flow to the kidneys due to shock, congestive heart failure, or complications of diabetes.\n\n";
                            sleep(3);
                            cout<<"\n\n-----------------------------Tips To Lower Down Your Creatinine--------------------------------\n\n";
                            cout<<"Here are 8 ways to naturally lower your creatinine levels.\n\n1. Don’t take supplements containing creatine\n\n2. Reduce your protein intake\n\n3. Eat more fiber\n\n4. Lower your salt intake\n\n5. Avoid smoking";
                            cout<<"\n\nLimit your alcohol intake\n\n";
                            cout<<"\n\nFor more queries/concerns, Book an Appointment with us\n";
                            cout<<"\nDo you want To Book an appointment(y/n) ?: ";
                            cin>>ans_8;
                            if(ans_8 == 'y' || ans_8 == 'Y')
                            {
                                sleep(2);
                                appointment();
                                break;
                            }
                        }
                    }
                    else
                    {
                        cout<<"\n\n-----------------------------Tips To Keep Your Kidney Safe--------------------------------\n\n";
                        cout<<"1. Be active and fit\n\n2. Control your blood sugar\n\n3. Monitor blood pressure\n\n4. Monitor weight and eat a healthy diet\n\n5. Drink plenty of fluids\n\n";
                        break;
                    }
                    break;
                }
                default:
                {
                    cout<<"\nInvalid Input\n";
                    break;
                }
            }
            break;
        }
        case 3:
        {
            sleep(2);
            int appl;
            cout<<"\nEnter The Application Number: ";
            cin>>appl;
            cout<<"-----------------Checking The Status--------------------\n";
            sleep(3);
            cout<<"\nYour test results will be available by 11AM Tommorrow\n";
            break;
        }
        case 4:
        {
            sleep(3);
            cout<<"\nThanks For Consulting with us, our executive will contact you in next 5 mins\n";
            break;
        }
        case 5:
        {
            int a;
            sleep(2);
            cout<<"\nChoose The Doctor, with whom you want to book an Appointment: \n";
            cout<<"\n1. Cardiologist\n\n2. Dentist\n\n3. ENT specialist\n\n4. Gynaecologist\n\n5. Psychiatrists\n\n6. Neurologist\n\n7. Cardiothoracic surgeon\n\nEnter your Choice: ";
            cin>>a;
            if(a >= 1 && a<=7)
            {
                sleep(3);
                cout<<"\nYou have Successfully Booked An Appointment of 11AM Tommorrow, further details will be shared soon on your phone number";
            }
            break;
        }
    }
    
}
