// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertContact, alertContact_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertContact, alertContact_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateContactResponseBody() = default ;
    CreateOrUpdateContactResponseBody(const CreateOrUpdateContactResponseBody &) = default ;
    CreateOrUpdateContactResponseBody(CreateOrUpdateContactResponseBody &&) = default ;
    CreateOrUpdateContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateContactResponseBody() = default ;
    CreateOrUpdateContactResponseBody& operator=(const CreateOrUpdateContactResponseBody &) = default ;
    CreateOrUpdateContactResponseBody& operator=(CreateOrUpdateContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertContact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertContact& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(ContactName, contactName_);
        DARABONBA_PTR_TO_JSON(DingRobotUrl, dingRobotUrl_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(IsVerify, isVerify_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(ReissueSendNotice, reissueSendNotice_);
        DARABONBA_PTR_TO_JSON(isEmailVerify, isEmailVerify_);
      };
      friend void from_json(const Darabonba::Json& j, AlertContact& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
        DARABONBA_PTR_FROM_JSON(DingRobotUrl, dingRobotUrl_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(IsVerify, isVerify_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(ReissueSendNotice, reissueSendNotice_);
        DARABONBA_PTR_FROM_JSON(isEmailVerify, isEmailVerify_);
      };
      AlertContact() = default ;
      AlertContact(const AlertContact &) = default ;
      AlertContact(AlertContact &&) = default ;
      AlertContact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertContact() = default ;
      AlertContact& operator=(const AlertContact &) = default ;
      AlertContact& operator=(AlertContact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->contactName_ == nullptr && this->dingRobotUrl_ == nullptr && this->email_ == nullptr && this->isVerify_ == nullptr && this->phone_ == nullptr
        && this->reissueSendNotice_ == nullptr && this->isEmailVerify_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline float getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0.0) };
      inline AlertContact& setContactId(float contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline AlertContact& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // dingRobotUrl Field Functions 
      bool hasDingRobotUrl() const { return this->dingRobotUrl_ != nullptr;};
      void deleteDingRobotUrl() { this->dingRobotUrl_ = nullptr;};
      inline string getDingRobotUrl() const { DARABONBA_PTR_GET_DEFAULT(dingRobotUrl_, "") };
      inline AlertContact& setDingRobotUrl(string dingRobotUrl) { DARABONBA_PTR_SET_VALUE(dingRobotUrl_, dingRobotUrl) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline AlertContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // isVerify Field Functions 
      bool hasIsVerify() const { return this->isVerify_ != nullptr;};
      void deleteIsVerify() { this->isVerify_ = nullptr;};
      inline bool getIsVerify() const { DARABONBA_PTR_GET_DEFAULT(isVerify_, false) };
      inline AlertContact& setIsVerify(bool isVerify) { DARABONBA_PTR_SET_VALUE(isVerify_, isVerify) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline AlertContact& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // reissueSendNotice Field Functions 
      bool hasReissueSendNotice() const { return this->reissueSendNotice_ != nullptr;};
      void deleteReissueSendNotice() { this->reissueSendNotice_ = nullptr;};
      inline int64_t getReissueSendNotice() const { DARABONBA_PTR_GET_DEFAULT(reissueSendNotice_, 0L) };
      inline AlertContact& setReissueSendNotice(int64_t reissueSendNotice) { DARABONBA_PTR_SET_VALUE(reissueSendNotice_, reissueSendNotice) };


      // isEmailVerify Field Functions 
      bool hasIsEmailVerify() const { return this->isEmailVerify_ != nullptr;};
      void deleteIsEmailVerify() { this->isEmailVerify_ = nullptr;};
      inline bool getIsEmailVerify() const { DARABONBA_PTR_GET_DEFAULT(isEmailVerify_, false) };
      inline AlertContact& setIsEmailVerify(bool isEmailVerify) { DARABONBA_PTR_SET_VALUE(isEmailVerify_, isEmailVerify) };


    protected:
      // The ID of the alert contact.
      shared_ptr<float> contactId_ {};
      // The name of the alert contact.
      shared_ptr<string> contactName_ {};
      // The webhook URL of the DingTalk chatbot.
      shared_ptr<string> dingRobotUrl_ {};
      // The email address of the alert contact.
      shared_ptr<string> email_ {};
      // Indicates whether the mobile number was verified. Valid values:
      // 
      // *   `false` (default value): No
      // *   `true`: Yes
      // 
      // You can call the **SendTTSVerifyLink** operation to verify the mobile number of an alert contact. Only verified mobile numbers can be specified in a notification policy to receive phone calls.
      shared_ptr<bool> isVerify_ {};
      // The mobile number of the alert contact.
      shared_ptr<string> phone_ {};
      // The operation that you want to perform if phone calls fail to be answered. Valid values: 0: No operation is performed. 1: A phone call is made again. 2: A text message is sent. 3 (default value): The global default value is used.
      shared_ptr<int64_t> reissueSendNotice_ {};
      // Indicates whether the email address was verified.
      shared_ptr<bool> isEmailVerify_ {};
    };

    virtual bool empty() const override { return this->alertContact_ == nullptr
        && this->requestId_ == nullptr; };
    // alertContact Field Functions 
    bool hasAlertContact() const { return this->alertContact_ != nullptr;};
    void deleteAlertContact() { this->alertContact_ = nullptr;};
    inline const CreateOrUpdateContactResponseBody::AlertContact & getAlertContact() const { DARABONBA_PTR_GET_CONST(alertContact_, CreateOrUpdateContactResponseBody::AlertContact) };
    inline CreateOrUpdateContactResponseBody::AlertContact getAlertContact() { DARABONBA_PTR_GET(alertContact_, CreateOrUpdateContactResponseBody::AlertContact) };
    inline CreateOrUpdateContactResponseBody& setAlertContact(const CreateOrUpdateContactResponseBody::AlertContact & alertContact) { DARABONBA_PTR_SET_VALUE(alertContact_, alertContact) };
    inline CreateOrUpdateContactResponseBody& setAlertContact(CreateOrUpdateContactResponseBody::AlertContact && alertContact) { DARABONBA_PTR_SET_RVALUE(alertContact_, alertContact) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object of the alert contact.
    shared_ptr<CreateOrUpdateContactResponseBody::AlertContact> alertContact_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
