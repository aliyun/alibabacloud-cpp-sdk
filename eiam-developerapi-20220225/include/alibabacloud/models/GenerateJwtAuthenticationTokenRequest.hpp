// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEJWTAUTHENTICATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEJWTAUTHENTICATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateJwtAuthenticationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateJwtAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(audiences, audiences_);
      DARABONBA_PTR_TO_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_ANY_TO_JSON(customClaims, customClaims_);
      DARABONBA_PTR_TO_JSON(expiration, expiration_);
      DARABONBA_PTR_TO_JSON(includeDerivedShortToken, includeDerivedShortToken_);
      DARABONBA_PTR_TO_JSON(issuer, issuer_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateJwtAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(audiences, audiences_);
      DARABONBA_PTR_FROM_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_ANY_FROM_JSON(customClaims, customClaims_);
      DARABONBA_PTR_FROM_JSON(expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(includeDerivedShortToken, includeDerivedShortToken_);
      DARABONBA_PTR_FROM_JSON(issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
    };
    GenerateJwtAuthenticationTokenRequest() = default ;
    GenerateJwtAuthenticationTokenRequest(const GenerateJwtAuthenticationTokenRequest &) = default ;
    GenerateJwtAuthenticationTokenRequest(GenerateJwtAuthenticationTokenRequest &&) = default ;
    GenerateJwtAuthenticationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateJwtAuthenticationTokenRequest() = default ;
    GenerateJwtAuthenticationTokenRequest& operator=(const GenerateJwtAuthenticationTokenRequest &) = default ;
    GenerateJwtAuthenticationTokenRequest& operator=(GenerateJwtAuthenticationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audiences_ == nullptr
        && this->credentialProviderIdentifier_ == nullptr && this->customClaims_ == nullptr && this->expiration_ == nullptr && this->includeDerivedShortToken_ == nullptr && this->issuer_ == nullptr
        && this->subject_ == nullptr; };
    // audiences Field Functions 
    bool hasAudiences() const { return this->audiences_ != nullptr;};
    void deleteAudiences() { this->audiences_ = nullptr;};
    inline const vector<string> & getAudiences() const { DARABONBA_PTR_GET_CONST(audiences_, vector<string>) };
    inline vector<string> getAudiences() { DARABONBA_PTR_GET(audiences_, vector<string>) };
    inline GenerateJwtAuthenticationTokenRequest& setAudiences(const vector<string> & audiences) { DARABONBA_PTR_SET_VALUE(audiences_, audiences) };
    inline GenerateJwtAuthenticationTokenRequest& setAudiences(vector<string> && audiences) { DARABONBA_PTR_SET_RVALUE(audiences_, audiences) };


    // credentialProviderIdentifier Field Functions 
    bool hasCredentialProviderIdentifier() const { return this->credentialProviderIdentifier_ != nullptr;};
    void deleteCredentialProviderIdentifier() { this->credentialProviderIdentifier_ = nullptr;};
    inline string getCredentialProviderIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderIdentifier_, "") };
    inline GenerateJwtAuthenticationTokenRequest& setCredentialProviderIdentifier(string credentialProviderIdentifier) { DARABONBA_PTR_SET_VALUE(credentialProviderIdentifier_, credentialProviderIdentifier) };


    // customClaims Field Functions 
    bool hasCustomClaims() const { return this->customClaims_ != nullptr;};
    void deleteCustomClaims() { this->customClaims_ = nullptr;};
    inline     const Darabonba::Json & getCustomClaims() const { DARABONBA_GET(customClaims_) };
    Darabonba::Json & getCustomClaims() { DARABONBA_GET(customClaims_) };
    inline GenerateJwtAuthenticationTokenRequest& setCustomClaims(const Darabonba::Json & customClaims) { DARABONBA_SET_VALUE(customClaims_, customClaims) };
    inline GenerateJwtAuthenticationTokenRequest& setCustomClaims(Darabonba::Json && customClaims) { DARABONBA_SET_RVALUE(customClaims_, customClaims) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int32_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0) };
    inline GenerateJwtAuthenticationTokenRequest& setExpiration(int32_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // includeDerivedShortToken Field Functions 
    bool hasIncludeDerivedShortToken() const { return this->includeDerivedShortToken_ != nullptr;};
    void deleteIncludeDerivedShortToken() { this->includeDerivedShortToken_ = nullptr;};
    inline bool getIncludeDerivedShortToken() const { DARABONBA_PTR_GET_DEFAULT(includeDerivedShortToken_, false) };
    inline GenerateJwtAuthenticationTokenRequest& setIncludeDerivedShortToken(bool includeDerivedShortToken) { DARABONBA_PTR_SET_VALUE(includeDerivedShortToken_, includeDerivedShortToken) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GenerateJwtAuthenticationTokenRequest& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline GenerateJwtAuthenticationTokenRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> audiences_ {};
    // This parameter is required.
    shared_ptr<string> credentialProviderIdentifier_ {};
    Darabonba::Json customClaims_ {};
    shared_ptr<int32_t> expiration_ {};
    shared_ptr<bool> includeDerivedShortToken_ {};
    shared_ptr<string> issuer_ {};
    // This parameter is required.
    shared_ptr<string> subject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
