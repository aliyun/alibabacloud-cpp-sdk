// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATACONTACT_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATACONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailResponseBodyDataContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailResponseBodyDataContact& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_TO_JSON(mobile_phone_num, mobilePhoneNum_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailResponseBodyDataContact& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_FROM_JSON(mobile_phone_num, mobilePhoneNum_);
    };
    ChangeDetailResponseBodyDataContact() = default ;
    ChangeDetailResponseBodyDataContact(const ChangeDetailResponseBodyDataContact &) = default ;
    ChangeDetailResponseBodyDataContact(ChangeDetailResponseBodyDataContact &&) = default ;
    ChangeDetailResponseBodyDataContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailResponseBodyDataContact() = default ;
    ChangeDetailResponseBodyDataContact& operator=(const ChangeDetailResponseBodyDataContact &) = default ;
    ChangeDetailResponseBodyDataContact& operator=(ChangeDetailResponseBodyDataContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->mobileCountryCode_ == nullptr && return this->mobilePhoneNum_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ChangeDetailResponseBodyDataContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string mobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline ChangeDetailResponseBodyDataContact& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // mobilePhoneNum Field Functions 
    bool hasMobilePhoneNum() const { return this->mobilePhoneNum_ != nullptr;};
    void deleteMobilePhoneNum() { this->mobilePhoneNum_ = nullptr;};
    inline string mobilePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNum_, "") };
    inline ChangeDetailResponseBodyDataContact& setMobilePhoneNum(string mobilePhoneNum) { DARABONBA_PTR_SET_VALUE(mobilePhoneNum_, mobilePhoneNum) };


  protected:
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> mobileCountryCode_ = nullptr;
    std::shared_ptr<string> mobilePhoneNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
