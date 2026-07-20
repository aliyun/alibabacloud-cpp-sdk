// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailStatus, emailStatus_);
      DARABONBA_PTR_TO_JSON(IdCard, idCard_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(MobileStatus, mobileStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailStatus, emailStatus_);
      DARABONBA_PTR_FROM_JSON(IdCard, idCard_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(MobileStatus, mobileStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    GetContactResponseBody() = default ;
    GetContactResponseBody(const GetContactResponseBody &) = default ;
    GetContactResponseBody(GetContactResponseBody &&) = default ;
    GetContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactResponseBody() = default ;
    GetContactResponseBody& operator=(const GetContactResponseBody &) = default ;
    GetContactResponseBody& operator=(GetContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->email_ == nullptr && this->emailStatus_ == nullptr && this->idCard_ == nullptr && this->mobile_ == nullptr && this->mobileStatus_ == nullptr
        && this->name_ == nullptr && this->requestId_ == nullptr && this->webhooks_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline GetContactResponseBody& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetContactResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailStatus Field Functions 
    bool hasEmailStatus() const { return this->emailStatus_ != nullptr;};
    void deleteEmailStatus() { this->emailStatus_ = nullptr;};
    inline int32_t getEmailStatus() const { DARABONBA_PTR_GET_DEFAULT(emailStatus_, 0) };
    inline GetContactResponseBody& setEmailStatus(int32_t emailStatus) { DARABONBA_PTR_SET_VALUE(emailStatus_, emailStatus) };


    // idCard Field Functions 
    bool hasIdCard() const { return this->idCard_ != nullptr;};
    void deleteIdCard() { this->idCard_ = nullptr;};
    inline string getIdCard() const { DARABONBA_PTR_GET_DEFAULT(idCard_, "") };
    inline GetContactResponseBody& setIdCard(string idCard) { DARABONBA_PTR_SET_VALUE(idCard_, idCard) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetContactResponseBody& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mobileStatus Field Functions 
    bool hasMobileStatus() const { return this->mobileStatus_ != nullptr;};
    void deleteMobileStatus() { this->mobileStatus_ = nullptr;};
    inline int32_t getMobileStatus() const { DARABONBA_PTR_GET_DEFAULT(mobileStatus_, 0) };
    inline GetContactResponseBody& setMobileStatus(int32_t mobileStatus) { DARABONBA_PTR_SET_VALUE(mobileStatus_, mobileStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetContactResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline string getWebhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
    inline GetContactResponseBody& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


  protected:
    // The contact ID.
    shared_ptr<int64_t> contactId_ {};
    // The email address of the contact.
    shared_ptr<string> email_ {};
    // Indicates whether the email address is verified.
    shared_ptr<int32_t> emailStatus_ {};
    // The ID card number of the contact. This parameter is required for the CFCA certificate brand and is not required for other brands.
    shared_ptr<string> idCard_ {};
    // The phone number of the contact.
    shared_ptr<string> mobile_ {};
    // Indicates whether the phone number is verified.
    shared_ptr<int32_t> mobileStatus_ {};
    // The name of the certificate contact.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The webhook URLs of DingTalk, WeCom, or Lark chatbots. The value is a string in list format.
    shared_ptr<string> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
