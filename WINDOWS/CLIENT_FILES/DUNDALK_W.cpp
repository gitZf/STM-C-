
/* 
 * File:   DUNDALK_W.cpp
 * Author: Zoltan Fuzesi
 * IT Carlow : C00197361
 *
 * Created on January 17, 2018, 8:02 PM
 */

#include "DUNDALK_W.h"

DUNDALK_W::~DUNDALK_W() {
}

DUNDALK_W::DUNDALK_W(const DUNDALK_W& orig) {
}
/*!
 * \brief getBaseCopy function, make deep copy of the object/pointer and Return a new BANK* type object
 * \param objTO is a BANK type pointer for casting
 * \param obj is a BANK* return type
 */
std::shared_ptr<OSTM> DUNDALK_W::getBaseCopy(std::shared_ptr<OSTM> object)
{

    std::shared_ptr<WAREHOUSE> objTO = std::dynamic_pointer_cast<WAREHOUSE>(object);
    std::shared_ptr<WAREHOUSE> obj(new DUNDALK_W(objTO, object->Get_Version(),object->Get_Unique_ID()));
    std::shared_ptr<OSTM> ostm_obj = std::dynamic_pointer_cast<OSTM>(obj);
    return ostm_obj;
}
/*!
 * \brief copy function, make deep copy of the object/pointer
 * \param objTO is a BANK* type object casted back from std::shared_ptr<OSTM>
 * \param objFROM is a BANK* type object casted back from std::shared_ptr<OSTM>
 */
void DUNDALK_W::copy(std::shared_ptr<OSTM> to, std::shared_ptr<OSTM> from){

    std::shared_ptr<DUNDALK_W> objTO = std::dynamic_pointer_cast<DUNDALK_W>(to);
    std::shared_ptr<DUNDALK_W> objFROM = std::dynamic_pointer_cast<DUNDALK_W>(from);
    objTO->_shop_address = objFROM->GetShop_address();
    objTO->_shop_name = objFROM->GetShop_name();
    objTO->_number_of_iphones = objFROM->GetNumber_of_iphones();
    objTO->_number_of_samsung = objFROM->GetNumber_of_samsung();
    objTO->_number_of_sony = objFROM->GetNumber_of_sony();
    objTO->_number_of_huawei = objFROM->GetNumber_of_huawei();
    objTO->_number_of_nokia = objFROM->GetNumber_of_nokia();
    objTO->_number_of_alcatel = objFROM->GetNumber_of_alcatel();
    objTO->Set_Unique_ID(objFROM->Get_Unique_ID());
    objTO->Set_Version(objFROM->Get_Version());
    
   
}
/*!
 * \brief _cast, is use to cast bak the std::shared_ptr<OSTM> to the required type
 */
//std::shared_ptr<DUNDALK_W> DUNDALK_W::_cast(std::shared_ptr<OSTM> _object){
//    
//    return std::static_pointer_cast<DUNDALK_W>(_object);
//}
/*!
 *  \brief toString function, displays the object values in formatted way
 */
void DUNDALK_W::toString()
{
   std::cout << "\n" <<  this->GetShop_name() << "\nUnique ID : " << this->Get_Unique_ID() << "\nShop Name : "  << this->GetShop_name() << "\nShop Address : " << this->GetShop_address() << "\nNo. Iphones : " << this->GetNumber_of_iphones() << "\nNo. Samsung : " << this->GetNumber_of_samsung() << "\nNo. Sony : " << this->GetNumber_of_sony() << "\nNo. Huawei : " << this->GetNumber_of_huawei() << "\nNo. Nokia : " << this->GetNumber_of_nokia() << "\nNo. Alcatel : " << this->GetNumber_of_alcatel() << "\nVersion number : " << this->Get_Version() << std::endl;
}



void DUNDALK_W::SetNumber_of_alcatel(int _number_of_alcatel) {
    this->_number_of_alcatel = _number_of_alcatel;
}

int DUNDALK_W::GetNumber_of_alcatel(){
    return _number_of_alcatel;
}

void DUNDALK_W::SetNumber_of_nokia(int _number_of_nokia) {
    this->_number_of_nokia = _number_of_nokia;
}

int DUNDALK_W::GetNumber_of_nokia(){
    return _number_of_nokia;
}

void DUNDALK_W::SetNumber_of_huawei(int _number_of_huawei) {
    this->_number_of_huawei = _number_of_huawei;
}

int DUNDALK_W::GetNumber_of_huawei(){
    return _number_of_huawei;
}

void DUNDALK_W::SetNumber_of_sony(int _number_of_sony) {
    this->_number_of_sony = _number_of_sony;
}

int DUNDALK_W::GetNumber_of_sony(){
    return _number_of_sony;
}

void DUNDALK_W::SetNumber_of_samsung(int _number_of_samsung) {
    this->_number_of_samsung = _number_of_samsung;
}

int DUNDALK_W::GetNumber_of_samsung(){
    return _number_of_samsung;
}

void DUNDALK_W::SetNumber_of_iphones(int _number_of_iphones) {
    this->_number_of_iphones = _number_of_iphones;
}

int DUNDALK_W::GetNumber_of_iphones(){
    return _number_of_iphones;
}

void DUNDALK_W::SetShop_name(std::string _shop_name) {
    this->_shop_name = _shop_name;
}

std::string DUNDALK_W::GetShop_name(){
    return _shop_name;
}

void DUNDALK_W::SetShop_address(std::string _shop_address) {
    this->_shop_address = _shop_address;
}

std::string DUNDALK_W::GetShop_address(){
    return _shop_address;
}



