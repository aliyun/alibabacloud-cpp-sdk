// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINNAMECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINNAMECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveTaskForSubmittingDomainNameCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForSubmittingDomainNameCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Credential, credential_);
      DARABONBA_PTR_TO_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForSubmittingDomainNameCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Credential, credential_);
      DARABONBA_PTR_FROM_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveTaskForSubmittingDomainNameCredentialRequest() = default ;
    SaveTaskForSubmittingDomainNameCredentialRequest(const SaveTaskForSubmittingDomainNameCredentialRequest &) = default ;
    SaveTaskForSubmittingDomainNameCredentialRequest(SaveTaskForSubmittingDomainNameCredentialRequest &&) = default ;
    SaveTaskForSubmittingDomainNameCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForSubmittingDomainNameCredentialRequest() = default ;
    SaveTaskForSubmittingDomainNameCredentialRequest& operator=(const SaveTaskForSubmittingDomainNameCredentialRequest &) = default ;
    SaveTaskForSubmittingDomainNameCredentialRequest& operator=(SaveTaskForSubmittingDomainNameCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credential_ == nullptr
        && this->credentialNo_ == nullptr && this->credentialType_ == nullptr && this->domainName_ == nullptr && this->lang_ == nullptr && this->saleId_ == nullptr
        && this->userClientIp_ == nullptr; };
    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline string getCredential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialRequest& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


    // credentialNo Field Functions 
    bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
    void deleteCredentialNo() { this->credentialNo_ = nullptr;};
    inline string getCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialRequest& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialRequest& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> credential_ {};
    // This parameter is required.
    shared_ptr<string> credentialNo_ {};
    shared_ptr<string> credentialType_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> saleId_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
