// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUESTOCCUPANTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATEREQUESTOCCUPANTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateRequestOccupantInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateRequestOccupantInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(card_no, cardNo_);
      DARABONBA_PTR_TO_JSON(card_type, cardType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(staff_no, staffNo_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateRequestOccupantInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(card_no, cardNo_);
      DARABONBA_PTR_FROM_JSON(card_type, cardType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(staff_no, staffNo_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    HotelOrderPreValidateRequestOccupantInfoList() = default ;
    HotelOrderPreValidateRequestOccupantInfoList(const HotelOrderPreValidateRequestOccupantInfoList &) = default ;
    HotelOrderPreValidateRequestOccupantInfoList(HotelOrderPreValidateRequestOccupantInfoList &&) = default ;
    HotelOrderPreValidateRequestOccupantInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateRequestOccupantInfoList() = default ;
    HotelOrderPreValidateRequestOccupantInfoList& operator=(const HotelOrderPreValidateRequestOccupantInfoList &) = default ;
    HotelOrderPreValidateRequestOccupantInfoList& operator=(HotelOrderPreValidateRequestOccupantInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardNo_ != nullptr
        && this->cardType_ != nullptr && this->name_ != nullptr && this->phone_ != nullptr && this->staffNo_ != nullptr && this->userType_ != nullptr; };
    // cardNo Field Functions 
    bool hasCardNo() const { return this->cardNo_ != nullptr;};
    void deleteCardNo() { this->cardNo_ = nullptr;};
    inline string cardNo() const { DARABONBA_PTR_GET_DEFAULT(cardNo_, "") };
    inline HotelOrderPreValidateRequestOccupantInfoList& setCardNo(string cardNo) { DARABONBA_PTR_SET_VALUE(cardNo_, cardNo) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline int32_t cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
    inline HotelOrderPreValidateRequestOccupantInfoList& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HotelOrderPreValidateRequestOccupantInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline HotelOrderPreValidateRequestOccupantInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // staffNo Field Functions 
    bool hasStaffNo() const { return this->staffNo_ != nullptr;};
    void deleteStaffNo() { this->staffNo_ = nullptr;};
    inline string staffNo() const { DARABONBA_PTR_GET_DEFAULT(staffNo_, "") };
    inline HotelOrderPreValidateRequestOccupantInfoList& setStaffNo(string staffNo) { DARABONBA_PTR_SET_VALUE(staffNo_, staffNo) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline HotelOrderPreValidateRequestOccupantInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> cardNo_ = nullptr;
    std::shared_ptr<int32_t> cardType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> staffNo_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
