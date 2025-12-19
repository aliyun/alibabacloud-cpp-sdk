// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOAUTH2TOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOAUTH2TOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetResourceOAuth2TokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOAuth2TokenRequest& obj) { 
      DARABONBA_ANY_TO_JSON(CustomParameters, customParameters_);
      DARABONBA_PTR_TO_JSON(CustomState, customState_);
      DARABONBA_PTR_TO_JSON(ForceAuthentication, forceAuthentication_);
      DARABONBA_PTR_TO_JSON(OAuth2Flow, OAuth2Flow_);
      DARABONBA_PTR_TO_JSON(ResourceCredentialProviderName, resourceCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(ResourceOAuth2ReturnURL, resourceOAuth2ReturnURL_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_TO_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOAuth2TokenRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(CustomParameters, customParameters_);
      DARABONBA_PTR_FROM_JSON(CustomState, customState_);
      DARABONBA_PTR_FROM_JSON(ForceAuthentication, forceAuthentication_);
      DARABONBA_PTR_FROM_JSON(OAuth2Flow, OAuth2Flow_);
      DARABONBA_PTR_FROM_JSON(ResourceCredentialProviderName, resourceCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(ResourceOAuth2ReturnURL, resourceOAuth2ReturnURL_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_FROM_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    GetResourceOAuth2TokenRequest() = default ;
    GetResourceOAuth2TokenRequest(const GetResourceOAuth2TokenRequest &) = default ;
    GetResourceOAuth2TokenRequest(GetResourceOAuth2TokenRequest &&) = default ;
    GetResourceOAuth2TokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOAuth2TokenRequest() = default ;
    GetResourceOAuth2TokenRequest& operator=(const GetResourceOAuth2TokenRequest &) = default ;
    GetResourceOAuth2TokenRequest& operator=(GetResourceOAuth2TokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customParameters_ == nullptr
        && return this->customState_ == nullptr && return this->forceAuthentication_ == nullptr && return this->OAuth2Flow_ == nullptr && return this->resourceCredentialProviderName_ == nullptr && return this->resourceOAuth2ReturnURL_ == nullptr
        && return this->scopes_ == nullptr && return this->sessionURI_ == nullptr && return this->workloadAccessToken_ == nullptr; };
    // customParameters Field Functions 
    bool hasCustomParameters() const { return this->customParameters_ != nullptr;};
    void deleteCustomParameters() { this->customParameters_ = nullptr;};
    inline     const Darabonba::Json & customParameters() const { DARABONBA_GET(customParameters_) };
    Darabonba::Json & customParameters() { DARABONBA_GET(customParameters_) };
    inline GetResourceOAuth2TokenRequest& setCustomParameters(const Darabonba::Json & customParameters) { DARABONBA_SET_VALUE(customParameters_, customParameters) };
    inline GetResourceOAuth2TokenRequest& setCustomParameters(Darabonba::Json & customParameters) { DARABONBA_SET_RVALUE(customParameters_, customParameters) };


    // customState Field Functions 
    bool hasCustomState() const { return this->customState_ != nullptr;};
    void deleteCustomState() { this->customState_ = nullptr;};
    inline string customState() const { DARABONBA_PTR_GET_DEFAULT(customState_, "") };
    inline GetResourceOAuth2TokenRequest& setCustomState(string customState) { DARABONBA_PTR_SET_VALUE(customState_, customState) };


    // forceAuthentication Field Functions 
    bool hasForceAuthentication() const { return this->forceAuthentication_ != nullptr;};
    void deleteForceAuthentication() { this->forceAuthentication_ = nullptr;};
    inline bool forceAuthentication() const { DARABONBA_PTR_GET_DEFAULT(forceAuthentication_, false) };
    inline GetResourceOAuth2TokenRequest& setForceAuthentication(bool forceAuthentication) { DARABONBA_PTR_SET_VALUE(forceAuthentication_, forceAuthentication) };


    // OAuth2Flow Field Functions 
    bool hasOAuth2Flow() const { return this->OAuth2Flow_ != nullptr;};
    void deleteOAuth2Flow() { this->OAuth2Flow_ = nullptr;};
    inline string OAuth2Flow() const { DARABONBA_PTR_GET_DEFAULT(OAuth2Flow_, "") };
    inline GetResourceOAuth2TokenRequest& setOAuth2Flow(string OAuth2Flow) { DARABONBA_PTR_SET_VALUE(OAuth2Flow_, OAuth2Flow) };


    // resourceCredentialProviderName Field Functions 
    bool hasResourceCredentialProviderName() const { return this->resourceCredentialProviderName_ != nullptr;};
    void deleteResourceCredentialProviderName() { this->resourceCredentialProviderName_ = nullptr;};
    inline string resourceCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(resourceCredentialProviderName_, "") };
    inline GetResourceOAuth2TokenRequest& setResourceCredentialProviderName(string resourceCredentialProviderName) { DARABONBA_PTR_SET_VALUE(resourceCredentialProviderName_, resourceCredentialProviderName) };


    // resourceOAuth2ReturnURL Field Functions 
    bool hasResourceOAuth2ReturnURL() const { return this->resourceOAuth2ReturnURL_ != nullptr;};
    void deleteResourceOAuth2ReturnURL() { this->resourceOAuth2ReturnURL_ = nullptr;};
    inline string resourceOAuth2ReturnURL() const { DARABONBA_PTR_GET_DEFAULT(resourceOAuth2ReturnURL_, "") };
    inline GetResourceOAuth2TokenRequest& setResourceOAuth2ReturnURL(string resourceOAuth2ReturnURL) { DARABONBA_PTR_SET_VALUE(resourceOAuth2ReturnURL_, resourceOAuth2ReturnURL) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> scopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline GetResourceOAuth2TokenRequest& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline GetResourceOAuth2TokenRequest& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // sessionURI Field Functions 
    bool hasSessionURI() const { return this->sessionURI_ != nullptr;};
    void deleteSessionURI() { this->sessionURI_ = nullptr;};
    inline string sessionURI() const { DARABONBA_PTR_GET_DEFAULT(sessionURI_, "") };
    inline GetResourceOAuth2TokenRequest& setSessionURI(string sessionURI) { DARABONBA_PTR_SET_VALUE(sessionURI_, sessionURI) };


    // workloadAccessToken Field Functions 
    bool hasWorkloadAccessToken() const { return this->workloadAccessToken_ != nullptr;};
    void deleteWorkloadAccessToken() { this->workloadAccessToken_ = nullptr;};
    inline string workloadAccessToken() const { DARABONBA_PTR_GET_DEFAULT(workloadAccessToken_, "") };
    inline GetResourceOAuth2TokenRequest& setWorkloadAccessToken(string workloadAccessToken) { DARABONBA_PTR_SET_VALUE(workloadAccessToken_, workloadAccessToken) };


  protected:
    Darabonba::Json customParameters_ = nullptr;
    std::shared_ptr<string> customState_ = nullptr;
    std::shared_ptr<bool> forceAuthentication_ = nullptr;
    std::shared_ptr<string> OAuth2Flow_ = nullptr;
    std::shared_ptr<string> resourceCredentialProviderName_ = nullptr;
    std::shared_ptr<string> resourceOAuth2ReturnURL_ = nullptr;
    std::shared_ptr<vector<string>> scopes_ = nullptr;
    std::shared_ptr<string> sessionURI_ = nullptr;
    std::shared_ptr<string> workloadAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
