// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLISTPASSENGER_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLISTPASSENGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataAncillaryItemDetailListPassenger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(credential, credential_);
      DARABONBA_PTR_TO_JSON(first_name, firstName_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(last_name, lastName_);
      DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
      DARABONBA_PTR_TO_JSON(nationality, nationality_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(credential, credential_);
      DARABONBA_PTR_FROM_JSON(first_name, firstName_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(last_name, lastName_);
      DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
      DARABONBA_PTR_FROM_JSON(nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    OrderDetailResponseBodyDataAncillaryItemDetailListPassenger() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListPassenger(const OrderDetailResponseBodyDataAncillaryItemDetailListPassenger &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListPassenger(OrderDetailResponseBodyDataAncillaryItemDetailListPassenger &&) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListPassenger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataAncillaryItemDetailListPassenger() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& operator=(const OrderDetailResponseBodyDataAncillaryItemDetailListPassenger &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& operator=(OrderDetailResponseBodyDataAncillaryItemDetailListPassenger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->birthday_ == nullptr
        && return this->credential_ == nullptr && return this->firstName_ == nullptr && return this->gender_ == nullptr && return this->lastName_ == nullptr && return this->mobileCountryCode_ == nullptr
        && return this->mobilePhoneNumber_ == nullptr && return this->nationality_ == nullptr && return this->type_ == nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential & credential() const { DARABONBA_PTR_GET_CONST(credential_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential) };
    inline Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential credential() { DARABONBA_PTR_GET(credential_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setCredential(const Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setCredential(Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    // firstName Field Functions 
    bool hasFirstName() const { return this->firstName_ != nullptr;};
    void deleteFirstName() { this->firstName_ = nullptr;};
    inline string firstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline int32_t gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // lastName Field Functions 
    bool hasLastName() const { return this->lastName_ != nullptr;};
    void deleteLastName() { this->lastName_ = nullptr;};
    inline string lastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string mobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // mobilePhoneNumber Field Functions 
    bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
    void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
    inline string mobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailListPassenger& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // date of birth (yyyyMMdd)
    std::shared_ptr<string> birthday_ = nullptr;
    // travel document
    std::shared_ptr<Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassengerCredential> credential_ = nullptr;
    // first name
    std::shared_ptr<string> firstName_ = nullptr;
    // gender 0: male; 1: female
    std::shared_ptr<int32_t> gender_ = nullptr;
    // last name
    std::shared_ptr<string> lastName_ = nullptr;
    // country code for mobile phone number
    std::shared_ptr<string> mobileCountryCode_ = nullptr;
    // mobile phone number
    std::shared_ptr<string> mobilePhoneNumber_ = nullptr;
    // nationality
    std::shared_ptr<string> nationality_ = nullptr;
    // passenger type 0: adult; 1: child; 8: infant
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
