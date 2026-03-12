// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECONTACTTEMPLATECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECONTACTTEMPLATECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveContactTemplateCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveContactTemplateCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveContactTemplateCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveContactTemplateCredentialRequest() = default ;
    SaveContactTemplateCredentialRequest(const SaveContactTemplateCredentialRequest &) = default ;
    SaveContactTemplateCredentialRequest(SaveContactTemplateCredentialRequest &&) = default ;
    SaveContactTemplateCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveContactTemplateCredentialRequest() = default ;
    SaveContactTemplateCredentialRequest& operator=(const SaveContactTemplateCredentialRequest &) = default ;
    SaveContactTemplateCredentialRequest& operator=(SaveContactTemplateCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactTemplateId_ == nullptr
        && this->credential_ == nullptr && this->credentialNo_ == nullptr && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline int64_t getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, 0L) };
    inline SaveContactTemplateCredentialRequest& setContactTemplateId(int64_t contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline string getCredential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
    inline SaveContactTemplateCredentialRequest& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


    // credentialNo Field Functions 
    bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
    void deleteCredentialNo() { this->credentialNo_ = nullptr;};
    inline string getCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
    inline SaveContactTemplateCredentialRequest& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveContactTemplateCredentialRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveContactTemplateCredentialRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> contactTemplateId_ {};
    // This parameter is required.
    shared_ptr<string> credential_ {};
    // This parameter is required.
    shared_ptr<string> credentialNo_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
