// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTRESPONSEBODYCONTACTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTRESPONSEBODYCONTACTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListContactResponseBodyContactList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactResponseBodyContactList& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailStatus, emailStatus_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(MobileStatus, mobileStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactResponseBodyContactList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailStatus, emailStatus_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(MobileStatus, mobileStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    ListContactResponseBodyContactList() = default ;
    ListContactResponseBodyContactList(const ListContactResponseBodyContactList &) = default ;
    ListContactResponseBodyContactList(ListContactResponseBodyContactList &&) = default ;
    ListContactResponseBodyContactList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactResponseBodyContactList() = default ;
    ListContactResponseBodyContactList& operator=(const ListContactResponseBodyContactList &) = default ;
    ListContactResponseBodyContactList& operator=(ListContactResponseBodyContactList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->email_ == nullptr && return this->emailStatus_ == nullptr && return this->mobile_ == nullptr && return this->mobileStatus_ == nullptr && return this->name_ == nullptr
        && return this->webhooks_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline ListContactResponseBodyContactList& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListContactResponseBodyContactList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailStatus Field Functions 
    bool hasEmailStatus() const { return this->emailStatus_ != nullptr;};
    void deleteEmailStatus() { this->emailStatus_ = nullptr;};
    inline int32_t emailStatus() const { DARABONBA_PTR_GET_DEFAULT(emailStatus_, 0) };
    inline ListContactResponseBodyContactList& setEmailStatus(int32_t emailStatus) { DARABONBA_PTR_SET_VALUE(emailStatus_, emailStatus) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListContactResponseBodyContactList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mobileStatus Field Functions 
    bool hasMobileStatus() const { return this->mobileStatus_ != nullptr;};
    void deleteMobileStatus() { this->mobileStatus_ = nullptr;};
    inline int32_t mobileStatus() const { DARABONBA_PTR_GET_DEFAULT(mobileStatus_, 0) };
    inline ListContactResponseBodyContactList& setMobileStatus(int32_t mobileStatus) { DARABONBA_PTR_SET_VALUE(mobileStatus_, mobileStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListContactResponseBodyContactList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline string webhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
    inline ListContactResponseBodyContactList& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


  protected:
    // The ID of the contact.
    std::shared_ptr<int64_t> contactId_ = nullptr;
    // The email address of the contact.
    std::shared_ptr<string> email_ = nullptr;
    // Indicates whether the email address passed the verification.
    std::shared_ptr<int32_t> emailStatus_ = nullptr;
    // The phone number.
    std::shared_ptr<string> mobile_ = nullptr;
    // Indicates whether the phone number was verified.
    std::shared_ptr<int32_t> mobileStatus_ = nullptr;
    // The name of the contact.
    std::shared_ptr<string> name_ = nullptr;
    // The webhook URL of the chatbot.
    std::shared_ptr<string> webhooks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
