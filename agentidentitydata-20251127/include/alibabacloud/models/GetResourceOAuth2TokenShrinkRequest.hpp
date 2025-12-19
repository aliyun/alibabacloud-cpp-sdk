// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOAUTH2TOKENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOAUTH2TOKENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetResourceOAuth2TokenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOAuth2TokenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomParameters, customParametersShrink_);
      DARABONBA_PTR_TO_JSON(CustomState, customState_);
      DARABONBA_PTR_TO_JSON(ForceAuthentication, forceAuthentication_);
      DARABONBA_PTR_TO_JSON(OAuth2Flow, OAuth2Flow_);
      DARABONBA_PTR_TO_JSON(ResourceCredentialProviderName, resourceCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(ResourceOAuth2ReturnURL, resourceOAuth2ReturnURL_);
      DARABONBA_PTR_TO_JSON(Scopes, scopesShrink_);
      DARABONBA_PTR_TO_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_TO_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOAuth2TokenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomParameters, customParametersShrink_);
      DARABONBA_PTR_FROM_JSON(CustomState, customState_);
      DARABONBA_PTR_FROM_JSON(ForceAuthentication, forceAuthentication_);
      DARABONBA_PTR_FROM_JSON(OAuth2Flow, OAuth2Flow_);
      DARABONBA_PTR_FROM_JSON(ResourceCredentialProviderName, resourceCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(ResourceOAuth2ReturnURL, resourceOAuth2ReturnURL_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopesShrink_);
      DARABONBA_PTR_FROM_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_FROM_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    GetResourceOAuth2TokenShrinkRequest() = default ;
    GetResourceOAuth2TokenShrinkRequest(const GetResourceOAuth2TokenShrinkRequest &) = default ;
    GetResourceOAuth2TokenShrinkRequest(GetResourceOAuth2TokenShrinkRequest &&) = default ;
    GetResourceOAuth2TokenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOAuth2TokenShrinkRequest() = default ;
    GetResourceOAuth2TokenShrinkRequest& operator=(const GetResourceOAuth2TokenShrinkRequest &) = default ;
    GetResourceOAuth2TokenShrinkRequest& operator=(GetResourceOAuth2TokenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customParametersShrink_ == nullptr
        && return this->customState_ == nullptr && return this->forceAuthentication_ == nullptr && return this->OAuth2Flow_ == nullptr && return this->resourceCredentialProviderName_ == nullptr && return this->resourceOAuth2ReturnURL_ == nullptr
        && return this->scopesShrink_ == nullptr && return this->sessionURI_ == nullptr && return this->workloadAccessToken_ == nullptr; };
    // customParametersShrink Field Functions 
    bool hasCustomParametersShrink() const { return this->customParametersShrink_ != nullptr;};
    void deleteCustomParametersShrink() { this->customParametersShrink_ = nullptr;};
    inline string customParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(customParametersShrink_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setCustomParametersShrink(string customParametersShrink) { DARABONBA_PTR_SET_VALUE(customParametersShrink_, customParametersShrink) };


    // customState Field Functions 
    bool hasCustomState() const { return this->customState_ != nullptr;};
    void deleteCustomState() { this->customState_ = nullptr;};
    inline string customState() const { DARABONBA_PTR_GET_DEFAULT(customState_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setCustomState(string customState) { DARABONBA_PTR_SET_VALUE(customState_, customState) };


    // forceAuthentication Field Functions 
    bool hasForceAuthentication() const { return this->forceAuthentication_ != nullptr;};
    void deleteForceAuthentication() { this->forceAuthentication_ = nullptr;};
    inline bool forceAuthentication() const { DARABONBA_PTR_GET_DEFAULT(forceAuthentication_, false) };
    inline GetResourceOAuth2TokenShrinkRequest& setForceAuthentication(bool forceAuthentication) { DARABONBA_PTR_SET_VALUE(forceAuthentication_, forceAuthentication) };


    // OAuth2Flow Field Functions 
    bool hasOAuth2Flow() const { return this->OAuth2Flow_ != nullptr;};
    void deleteOAuth2Flow() { this->OAuth2Flow_ = nullptr;};
    inline string OAuth2Flow() const { DARABONBA_PTR_GET_DEFAULT(OAuth2Flow_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setOAuth2Flow(string OAuth2Flow) { DARABONBA_PTR_SET_VALUE(OAuth2Flow_, OAuth2Flow) };


    // resourceCredentialProviderName Field Functions 
    bool hasResourceCredentialProviderName() const { return this->resourceCredentialProviderName_ != nullptr;};
    void deleteResourceCredentialProviderName() { this->resourceCredentialProviderName_ = nullptr;};
    inline string resourceCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(resourceCredentialProviderName_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setResourceCredentialProviderName(string resourceCredentialProviderName) { DARABONBA_PTR_SET_VALUE(resourceCredentialProviderName_, resourceCredentialProviderName) };


    // resourceOAuth2ReturnURL Field Functions 
    bool hasResourceOAuth2ReturnURL() const { return this->resourceOAuth2ReturnURL_ != nullptr;};
    void deleteResourceOAuth2ReturnURL() { this->resourceOAuth2ReturnURL_ = nullptr;};
    inline string resourceOAuth2ReturnURL() const { DARABONBA_PTR_GET_DEFAULT(resourceOAuth2ReturnURL_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setResourceOAuth2ReturnURL(string resourceOAuth2ReturnURL) { DARABONBA_PTR_SET_VALUE(resourceOAuth2ReturnURL_, resourceOAuth2ReturnURL) };


    // scopesShrink Field Functions 
    bool hasScopesShrink() const { return this->scopesShrink_ != nullptr;};
    void deleteScopesShrink() { this->scopesShrink_ = nullptr;};
    inline string scopesShrink() const { DARABONBA_PTR_GET_DEFAULT(scopesShrink_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setScopesShrink(string scopesShrink) { DARABONBA_PTR_SET_VALUE(scopesShrink_, scopesShrink) };


    // sessionURI Field Functions 
    bool hasSessionURI() const { return this->sessionURI_ != nullptr;};
    void deleteSessionURI() { this->sessionURI_ = nullptr;};
    inline string sessionURI() const { DARABONBA_PTR_GET_DEFAULT(sessionURI_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setSessionURI(string sessionURI) { DARABONBA_PTR_SET_VALUE(sessionURI_, sessionURI) };


    // workloadAccessToken Field Functions 
    bool hasWorkloadAccessToken() const { return this->workloadAccessToken_ != nullptr;};
    void deleteWorkloadAccessToken() { this->workloadAccessToken_ = nullptr;};
    inline string workloadAccessToken() const { DARABONBA_PTR_GET_DEFAULT(workloadAccessToken_, "") };
    inline GetResourceOAuth2TokenShrinkRequest& setWorkloadAccessToken(string workloadAccessToken) { DARABONBA_PTR_SET_VALUE(workloadAccessToken_, workloadAccessToken) };


  protected:
    std::shared_ptr<string> customParametersShrink_ = nullptr;
    std::shared_ptr<string> customState_ = nullptr;
    std::shared_ptr<bool> forceAuthentication_ = nullptr;
    std::shared_ptr<string> OAuth2Flow_ = nullptr;
    std::shared_ptr<string> resourceCredentialProviderName_ = nullptr;
    std::shared_ptr<string> resourceOAuth2ReturnURL_ = nullptr;
    std::shared_ptr<string> scopesShrink_ = nullptr;
    std::shared_ptr<string> sessionURI_ = nullptr;
    std::shared_ptr<string> workloadAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
