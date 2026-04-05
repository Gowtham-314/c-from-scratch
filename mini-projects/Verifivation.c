/*
Develop  a  C  program  that  takes  a  unique  identification  input  like  PAN  Number,  AADHAR_Number, 
APAAR_Id, Driving License, Passport and checks it against a set of stored KYC records. Based on the input, 
display  whether  the  individual  is  verified  or  not.
Use  an  appropriate  control  structure  to  handle  multiple
possible ID matches. Assume all Unique identification are of integer type.
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

void wait(int n)
{
    const char *arr[] = {"PAN Number", "AADHAR Number", "APAAR Id", "Driving License", "Passport"};
    if (n >= 1 && n <= 5)
        printf("\n%s Verifying......Under Processing\n", arr[n - 1]);
    else
        printf("\nVerifying......\n");
    Sleep(2000);
}

int main()
{
    int n,user;
    int pan=12580,aadhar=22580,aapar=32580,driving_licence=42580,passport=52580;

    
    printf("Unique Identification Number\n");
    printf("\n1.PAN Number\n2.AADHAR Number\n3.APAAR Id\n4.Driving License\n5.Passport\n");
    printf("\nEnter the Verifying Option: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("\nEnter the PAN Number: \n");
        scanf("%d",&user);
        wait(n);
        if(user==pan)
        printf("\nPAN Number Verified.\n");
        else
        printf("\nPAN Number Unverified.\n");
        break;
    case 2:
        printf("\nEnter the AADHAR Number: \n");
        scanf("%d",&user);
        wait(n);
        if(user==aadhar)
        printf("\nAADHAR Number Verified.\n");
        else
        printf("\nAADHAR Number Unverified.\n");
        break;
    case 3:
        printf("\nEnter the APAAR Id: \n");
        scanf("%d",&user);
        wait(n);
        if(user==aapar)
        printf("\nAPAAR Id Verified.\n");
        else
        printf("\nAPAAR Id Unverified.\n");
        break;
    case 4:
        printf("\nEnter the Driving License Number: \n");
        scanf("%d",&user);
        wait(n);
        if(user==driving_licence)
        printf("\nDriving License Verified.\n");
        else
        printf("\nDriving License Unverified.\n");
        break;
    case 5:
        printf("\nEnter the Passport Number: \n");
        scanf("%d",&user);
        wait(n);
        if(user==passport)
        printf("\nPassport Verified.\n");
        else
        printf("\nPassport Unverified.\n");
        break;
    default:
        wait(n);
        printf("\nInvalid ID Type. Please enter a valid option (1-5).");
        break;
    }
    return 0;
}