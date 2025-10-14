// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKREQUESTCONTACT_HPP_
#define ALIBABACLOUD_MODELS_BOOKREQUESTCONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookRequestContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookRequestContact& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(first_name, firstName_);
      DARABONBA_PTR_TO_JSON(last_name, lastName_);
      DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_TO_JSON(mobile_phone_num, mobilePhoneNum_);
    };
    friend void from_json(const Darabonba::Json& j, BookRequestContact& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(first_name, firstName_);
      DARABONBA_PTR_FROM_JSON(last_name, lastName_);
      DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
      DARABONBA_PTR_FROM_JSON(mobile_phone_num, mobilePhoneNum_);
    };
    BookRequestContact() = default ;
    BookRequestContact(const BookRequestContact &) = default ;
    BookRequestContact(BookRequestContact &&) = default ;
    BookRequestContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookRequestContact() = default ;
    BookRequestContact& operator=(const BookRequestContact &) = default ;
    BookRequestContact& operator=(BookRequestContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->firstName_ == nullptr && return this->lastName_ == nullptr && return this->mobileCountryCode_ == nullptr && return this->mobilePhoneNum_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline BookRequestContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // firstName Field Functions 
    bool hasFirstName() const { return this->firstName_ != nullptr;};
    void deleteFirstName() { this->firstName_ = nullptr;};
    inline string firstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
    inline BookRequestContact& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


    // lastName Field Functions 
    bool hasLastName() const { return this->lastName_ != nullptr;};
    void deleteLastName() { this->lastName_ = nullptr;};
    inline string lastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
    inline BookRequestContact& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


    // mobileCountryCode Field Functions 
    bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
    void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
    inline string mobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
    inline BookRequestContact& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


    // mobilePhoneNum Field Functions 
    bool hasMobilePhoneNum() const { return this->mobilePhoneNum_ != nullptr;};
    void deleteMobilePhoneNum() { this->mobilePhoneNum_ = nullptr;};
    inline string mobilePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNum_, "") };
    inline BookRequestContact& setMobilePhoneNum(string mobilePhoneNum) { DARABONBA_PTR_SET_VALUE(mobilePhoneNum_, mobilePhoneNum) };


  protected:
    // email address
    std::shared_ptr<string> email_ = nullptr;
    // first name
    std::shared_ptr<string> firstName_ = nullptr;
    // last name
    std::shared_ptr<string> lastName_ = nullptr;
    // country code
    std::shared_ptr<string> mobileCountryCode_ = nullptr;
    // mobile phone number
    std::shared_ptr<string> mobilePhoneNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
