// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTCONTACTEDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTCONTACTEDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class AccountContactEditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountContactEditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AsyncEmailVerify, asyncEmailVerify_);
      DARABONBA_PTR_TO_JSON(AsyncMobileVerify, asyncMobileVerify_);
      DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactMobile, contactMobile_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(ContactPosition, contactPosition_);
      DARABONBA_PTR_TO_JSON(EmailCode, emailCode_);
      DARABONBA_PTR_TO_JSON(MobileCode, mobileCode_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(SharedContact, sharedContact_);
    };
    friend void from_json(const Darabonba::Json& j, AccountContactEditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AsyncEmailVerify, asyncEmailVerify_);
      DARABONBA_PTR_FROM_JSON(AsyncMobileVerify, asyncMobileVerify_);
      DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactMobile, contactMobile_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(ContactPosition, contactPosition_);
      DARABONBA_PTR_FROM_JSON(EmailCode, emailCode_);
      DARABONBA_PTR_FROM_JSON(MobileCode, mobileCode_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(SharedContact, sharedContact_);
    };
    AccountContactEditRequest() = default ;
    AccountContactEditRequest(const AccountContactEditRequest &) = default ;
    AccountContactEditRequest(AccountContactEditRequest &&) = default ;
    AccountContactEditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountContactEditRequest() = default ;
    AccountContactEditRequest& operator=(const AccountContactEditRequest &) = default ;
    AccountContactEditRequest& operator=(AccountContactEditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->asyncEmailVerify_ == nullptr && this->asyncMobileVerify_ == nullptr && this->contactEmail_ == nullptr && this->contactId_ == nullptr && this->contactMobile_ == nullptr
        && this->contactName_ == nullptr && this->contactPosition_ == nullptr && this->emailCode_ == nullptr && this->mobileCode_ == nullptr && this->orientedEcId_ == nullptr
        && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->sharedContact_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AccountContactEditRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // asyncEmailVerify Field Functions 
    bool hasAsyncEmailVerify() const { return this->asyncEmailVerify_ != nullptr;};
    void deleteAsyncEmailVerify() { this->asyncEmailVerify_ = nullptr;};
    inline bool getAsyncEmailVerify() const { DARABONBA_PTR_GET_DEFAULT(asyncEmailVerify_, false) };
    inline AccountContactEditRequest& setAsyncEmailVerify(bool asyncEmailVerify) { DARABONBA_PTR_SET_VALUE(asyncEmailVerify_, asyncEmailVerify) };


    // asyncMobileVerify Field Functions 
    bool hasAsyncMobileVerify() const { return this->asyncMobileVerify_ != nullptr;};
    void deleteAsyncMobileVerify() { this->asyncMobileVerify_ = nullptr;};
    inline bool getAsyncMobileVerify() const { DARABONBA_PTR_GET_DEFAULT(asyncMobileVerify_, false) };
    inline AccountContactEditRequest& setAsyncMobileVerify(bool asyncMobileVerify) { DARABONBA_PTR_SET_VALUE(asyncMobileVerify_, asyncMobileVerify) };


    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline AccountContactEditRequest& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline AccountContactEditRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactMobile Field Functions 
    bool hasContactMobile() const { return this->contactMobile_ != nullptr;};
    void deleteContactMobile() { this->contactMobile_ = nullptr;};
    inline string getContactMobile() const { DARABONBA_PTR_GET_DEFAULT(contactMobile_, "") };
    inline AccountContactEditRequest& setContactMobile(string contactMobile) { DARABONBA_PTR_SET_VALUE(contactMobile_, contactMobile) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline AccountContactEditRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contactPosition Field Functions 
    bool hasContactPosition() const { return this->contactPosition_ != nullptr;};
    void deleteContactPosition() { this->contactPosition_ = nullptr;};
    inline string getContactPosition() const { DARABONBA_PTR_GET_DEFAULT(contactPosition_, "") };
    inline AccountContactEditRequest& setContactPosition(string contactPosition) { DARABONBA_PTR_SET_VALUE(contactPosition_, contactPosition) };


    // emailCode Field Functions 
    bool hasEmailCode() const { return this->emailCode_ != nullptr;};
    void deleteEmailCode() { this->emailCode_ = nullptr;};
    inline string getEmailCode() const { DARABONBA_PTR_GET_DEFAULT(emailCode_, "") };
    inline AccountContactEditRequest& setEmailCode(string emailCode) { DARABONBA_PTR_SET_VALUE(emailCode_, emailCode) };


    // mobileCode Field Functions 
    bool hasMobileCode() const { return this->mobileCode_ != nullptr;};
    void deleteMobileCode() { this->mobileCode_ = nullptr;};
    inline string getMobileCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCode_, "") };
    inline AccountContactEditRequest& setMobileCode(string mobileCode) { DARABONBA_PTR_SET_VALUE(mobileCode_, mobileCode) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline AccountContactEditRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline AccountContactEditRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline AccountContactEditRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // sharedContact Field Functions 
    bool hasSharedContact() const { return this->sharedContact_ != nullptr;};
    void deleteSharedContact() { this->sharedContact_ = nullptr;};
    inline bool getSharedContact() const { DARABONBA_PTR_GET_DEFAULT(sharedContact_, false) };
    inline AccountContactEditRequest& setSharedContact(bool sharedContact) { DARABONBA_PTR_SET_VALUE(sharedContact_, sharedContact) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<bool> asyncEmailVerify_ {};
    shared_ptr<bool> asyncMobileVerify_ {};
    shared_ptr<string> contactEmail_ {};
    shared_ptr<int64_t> contactId_ {};
    shared_ptr<string> contactMobile_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> contactPosition_ {};
    shared_ptr<string> emailCode_ {};
    shared_ptr<string> mobileCode_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<bool> sharedContact_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
