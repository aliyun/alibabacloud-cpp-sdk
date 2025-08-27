// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTOCCUPANTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTOCCUPANTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCreateRequestOccupantInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateRequestOccupantInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(card_no, cardNo_);
      DARABONBA_PTR_TO_JSON(card_type, cardType_);
      DARABONBA_PTR_TO_JSON(customer_type, customerType_);
      DARABONBA_PTR_TO_JSON(department_id, departmentId_);
      DARABONBA_PTR_TO_JSON(department_name, departmentName_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(employee_type, employeeType_);
      DARABONBA_PTR_TO_JSON(first_name, firstName_);
      DARABONBA_PTR_TO_JSON(last_name, lastName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(room_no, roomNo_);
      DARABONBA_PTR_TO_JSON(staff_no, staffNo_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateRequestOccupantInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(card_no, cardNo_);
      DARABONBA_PTR_FROM_JSON(card_type, cardType_);
      DARABONBA_PTR_FROM_JSON(customer_type, customerType_);
      DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
      DARABONBA_PTR_FROM_JSON(department_name, departmentName_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(employee_type, employeeType_);
      DARABONBA_PTR_FROM_JSON(first_name, firstName_);
      DARABONBA_PTR_FROM_JSON(last_name, lastName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
      DARABONBA_PTR_FROM_JSON(staff_no, staffNo_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    HotelOrderCreateRequestOccupantInfoList() = default ;
    HotelOrderCreateRequestOccupantInfoList(const HotelOrderCreateRequestOccupantInfoList &) = default ;
    HotelOrderCreateRequestOccupantInfoList(HotelOrderCreateRequestOccupantInfoList &&) = default ;
    HotelOrderCreateRequestOccupantInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateRequestOccupantInfoList() = default ;
    HotelOrderCreateRequestOccupantInfoList& operator=(const HotelOrderCreateRequestOccupantInfoList &) = default ;
    HotelOrderCreateRequestOccupantInfoList& operator=(HotelOrderCreateRequestOccupantInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardNo_ != nullptr
        && this->cardType_ != nullptr && this->customerType_ != nullptr && this->departmentId_ != nullptr && this->departmentName_ != nullptr && this->email_ != nullptr
        && this->employeeType_ != nullptr && this->firstName_ != nullptr && this->lastName_ != nullptr && this->name_ != nullptr && this->phone_ != nullptr
        && this->roomNo_ != nullptr && this->staffNo_ != nullptr && this->userType_ != nullptr; };
    // cardNo Field Functions 
    bool hasCardNo() const { return this->cardNo_ != nullptr;};
    void deleteCardNo() { this->cardNo_ = nullptr;};
    inline string cardNo() const { DARABONBA_PTR_GET_DEFAULT(cardNo_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setCardNo(string cardNo) { DARABONBA_PTR_SET_VALUE(cardNo_, cardNo) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline int32_t cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
    inline HotelOrderCreateRequestOccupantInfoList& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // customerType Field Functions 
    bool hasCustomerType() const { return this->customerType_ != nullptr;};
    void deleteCustomerType() { this->customerType_ = nullptr;};
    inline int32_t customerType() const { DARABONBA_PTR_GET_DEFAULT(customerType_, 0) };
    inline HotelOrderCreateRequestOccupantInfoList& setCustomerType(int32_t customerType) { DARABONBA_PTR_SET_VALUE(customerType_, customerType) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // employeeType Field Functions 
    bool hasEmployeeType() const { return this->employeeType_ != nullptr;};
    void deleteEmployeeType() { this->employeeType_ = nullptr;};
    inline int32_t employeeType() const { DARABONBA_PTR_GET_DEFAULT(employeeType_, 0) };
    inline HotelOrderCreateRequestOccupantInfoList& setEmployeeType(int32_t employeeType) { DARABONBA_PTR_SET_VALUE(employeeType_, employeeType) };


    // firstName Field Functions 
    bool hasFirstName() const { return this->firstName_ != nullptr;};
    void deleteFirstName() { this->firstName_ = nullptr;};
    inline string firstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


    // lastName Field Functions 
    bool hasLastName() const { return this->lastName_ != nullptr;};
    void deleteLastName() { this->lastName_ = nullptr;};
    inline string lastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline int32_t roomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
    inline HotelOrderCreateRequestOccupantInfoList& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // staffNo Field Functions 
    bool hasStaffNo() const { return this->staffNo_ != nullptr;};
    void deleteStaffNo() { this->staffNo_ = nullptr;};
    inline string staffNo() const { DARABONBA_PTR_GET_DEFAULT(staffNo_, "") };
    inline HotelOrderCreateRequestOccupantInfoList& setStaffNo(string staffNo) { DARABONBA_PTR_SET_VALUE(staffNo_, staffNo) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline HotelOrderCreateRequestOccupantInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> cardNo_ = nullptr;
    std::shared_ptr<int32_t> cardType_ = nullptr;
    std::shared_ptr<int32_t> customerType_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> departmentName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int32_t> employeeType_ = nullptr;
    std::shared_ptr<string> firstName_ = nullptr;
    std::shared_ptr<string> lastName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<int32_t> roomNo_ = nullptr;
    std::shared_ptr<string> staffNo_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
