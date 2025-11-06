// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINREALNAMEVERIFICATIONBYIDENTITYCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINREALNAMEVERIFICATIONBYIDENTITYCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest() = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &) = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest(SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &&) = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest() = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& operator=(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &) = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& operator=(SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->identityCredential_ == nullptr && return this->identityCredentialNo_ == nullptr && return this->identityCredentialType_ == nullptr && return this->lang_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & domainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> domainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // identityCredential Field Functions 
    bool hasIdentityCredential() const { return this->identityCredential_ != nullptr;};
    void deleteIdentityCredential() { this->identityCredential_ = nullptr;};
    inline string identityCredential() const { DARABONBA_PTR_GET_DEFAULT(identityCredential_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& setIdentityCredential(string identityCredential) { DARABONBA_PTR_SET_VALUE(identityCredential_, identityCredential) };


    // identityCredentialNo Field Functions 
    bool hasIdentityCredentialNo() const { return this->identityCredentialNo_ != nullptr;};
    void deleteIdentityCredentialNo() { this->identityCredentialNo_ = nullptr;};
    inline string identityCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialNo_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& setIdentityCredentialNo(string identityCredentialNo) { DARABONBA_PTR_SET_VALUE(identityCredentialNo_, identityCredentialNo) };


    // identityCredentialType Field Functions 
    bool hasIdentityCredentialType() const { return this->identityCredentialType_ != nullptr;};
    void deleteIdentityCredentialType() { this->identityCredentialType_ = nullptr;};
    inline string identityCredentialType() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialType_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& setIdentityCredentialType(string identityCredentialType) { DARABONBA_PTR_SET_VALUE(identityCredentialType_, identityCredentialType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identityCredential_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identityCredentialNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identityCredentialType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
