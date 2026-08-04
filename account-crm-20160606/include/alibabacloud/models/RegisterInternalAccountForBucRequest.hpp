// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERINTERNALACCOUNTFORBUCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERINTERNALACCOUNTFORBUCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class RegisterInternalAccountForBucRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterInternalAccountForBucRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IsEmailConfirmed, isEmailConfirmed_);
      DARABONBA_PTR_TO_JSON(IsMobileConfirmed, isMobileConfirmed_);
      DARABONBA_PTR_TO_JSON(IsMobileLogin, isMobileLogin_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(NationalityCode, nationalityCode_);
      DARABONBA_PTR_TO_JSON(PlainPassword, plainPassword_);
      DARABONBA_PTR_TO_JSON(PreferredLanguage, preferredLanguage_);
      DARABONBA_PTR_TO_JSON(accountTypeCode, accountTypeCode_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterInternalAccountForBucRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IsEmailConfirmed, isEmailConfirmed_);
      DARABONBA_PTR_FROM_JSON(IsMobileConfirmed, isMobileConfirmed_);
      DARABONBA_PTR_FROM_JSON(IsMobileLogin, isMobileLogin_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(NationalityCode, nationalityCode_);
      DARABONBA_PTR_FROM_JSON(PlainPassword, plainPassword_);
      DARABONBA_PTR_FROM_JSON(PreferredLanguage, preferredLanguage_);
      DARABONBA_PTR_FROM_JSON(accountTypeCode, accountTypeCode_);
    };
    RegisterInternalAccountForBucRequest() = default ;
    RegisterInternalAccountForBucRequest(const RegisterInternalAccountForBucRequest &) = default ;
    RegisterInternalAccountForBucRequest(RegisterInternalAccountForBucRequest &&) = default ;
    RegisterInternalAccountForBucRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterInternalAccountForBucRequest() = default ;
    RegisterInternalAccountForBucRequest& operator=(const RegisterInternalAccountForBucRequest &) = default ;
    RegisterInternalAccountForBucRequest& operator=(RegisterInternalAccountForBucRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bid_ == nullptr
        && this->email_ == nullptr && this->isEmailConfirmed_ == nullptr && this->isMobileConfirmed_ == nullptr && this->isMobileLogin_ == nullptr && this->mobile_ == nullptr
        && this->nationalityCode_ == nullptr && this->plainPassword_ == nullptr && this->preferredLanguage_ == nullptr && this->accountTypeCode_ == nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline RegisterInternalAccountForBucRequest& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline RegisterInternalAccountForBucRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // isEmailConfirmed Field Functions 
    bool hasIsEmailConfirmed() const { return this->isEmailConfirmed_ != nullptr;};
    void deleteIsEmailConfirmed() { this->isEmailConfirmed_ = nullptr;};
    inline bool getIsEmailConfirmed() const { DARABONBA_PTR_GET_DEFAULT(isEmailConfirmed_, false) };
    inline RegisterInternalAccountForBucRequest& setIsEmailConfirmed(bool isEmailConfirmed) { DARABONBA_PTR_SET_VALUE(isEmailConfirmed_, isEmailConfirmed) };


    // isMobileConfirmed Field Functions 
    bool hasIsMobileConfirmed() const { return this->isMobileConfirmed_ != nullptr;};
    void deleteIsMobileConfirmed() { this->isMobileConfirmed_ = nullptr;};
    inline bool getIsMobileConfirmed() const { DARABONBA_PTR_GET_DEFAULT(isMobileConfirmed_, false) };
    inline RegisterInternalAccountForBucRequest& setIsMobileConfirmed(bool isMobileConfirmed) { DARABONBA_PTR_SET_VALUE(isMobileConfirmed_, isMobileConfirmed) };


    // isMobileLogin Field Functions 
    bool hasIsMobileLogin() const { return this->isMobileLogin_ != nullptr;};
    void deleteIsMobileLogin() { this->isMobileLogin_ = nullptr;};
    inline bool getIsMobileLogin() const { DARABONBA_PTR_GET_DEFAULT(isMobileLogin_, false) };
    inline RegisterInternalAccountForBucRequest& setIsMobileLogin(bool isMobileLogin) { DARABONBA_PTR_SET_VALUE(isMobileLogin_, isMobileLogin) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline RegisterInternalAccountForBucRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // nationalityCode Field Functions 
    bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
    void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
    inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
    inline RegisterInternalAccountForBucRequest& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


    // plainPassword Field Functions 
    bool hasPlainPassword() const { return this->plainPassword_ != nullptr;};
    void deletePlainPassword() { this->plainPassword_ = nullptr;};
    inline string getPlainPassword() const { DARABONBA_PTR_GET_DEFAULT(plainPassword_, "") };
    inline RegisterInternalAccountForBucRequest& setPlainPassword(string plainPassword) { DARABONBA_PTR_SET_VALUE(plainPassword_, plainPassword) };


    // preferredLanguage Field Functions 
    bool hasPreferredLanguage() const { return this->preferredLanguage_ != nullptr;};
    void deletePreferredLanguage() { this->preferredLanguage_ = nullptr;};
    inline string getPreferredLanguage() const { DARABONBA_PTR_GET_DEFAULT(preferredLanguage_, "") };
    inline RegisterInternalAccountForBucRequest& setPreferredLanguage(string preferredLanguage) { DARABONBA_PTR_SET_VALUE(preferredLanguage_, preferredLanguage) };


    // accountTypeCode Field Functions 
    bool hasAccountTypeCode() const { return this->accountTypeCode_ != nullptr;};
    void deleteAccountTypeCode() { this->accountTypeCode_ = nullptr;};
    inline string getAccountTypeCode() const { DARABONBA_PTR_GET_DEFAULT(accountTypeCode_, "") };
    inline RegisterInternalAccountForBucRequest& setAccountTypeCode(string accountTypeCode) { DARABONBA_PTR_SET_VALUE(accountTypeCode_, accountTypeCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> bid_ {};
    // This parameter is required.
    shared_ptr<string> email_ {};
    shared_ptr<bool> isEmailConfirmed_ {};
    shared_ptr<bool> isMobileConfirmed_ {};
    shared_ptr<bool> isMobileLogin_ {};
    shared_ptr<string> mobile_ {};
    shared_ptr<string> nationalityCode_ {};
    shared_ptr<string> plainPassword_ {};
    shared_ptr<string> preferredLanguage_ {};
    shared_ptr<string> accountTypeCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
