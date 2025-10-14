// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONAUTHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONAUTHINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& obj) { 
      DARABONBA_PTR_TO_JSON(access_key_id, accessKeyId_);
      DARABONBA_PTR_TO_JSON(access_key_secret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(api_action, apiAction_);
      DARABONBA_PTR_TO_JSON(api_version, apiVersion_);
      DARABONBA_PTR_TO_JSON(auth_style, authStyle_);
      DARABONBA_PTR_TO_JSON(client_id, clientId_);
      DARABONBA_PTR_TO_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_TO_JSON(grant_type, grantType_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(service_name, serviceName_);
      DARABONBA_PTR_TO_JSON(session_token, sessionToken_);
      DARABONBA_PTR_TO_JSON(token_url, tokenUrl_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(use_cookie_session_key, useCookieSessionKey_);
      DARABONBA_PTR_TO_JSON(username, username_);
      DARABONBA_PTR_TO_JSON(with_addon_resources, withAddonResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(access_key_id, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(access_key_secret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(api_action, apiAction_);
      DARABONBA_PTR_FROM_JSON(api_version, apiVersion_);
      DARABONBA_PTR_FROM_JSON(auth_style, authStyle_);
      DARABONBA_PTR_FROM_JSON(client_id, clientId_);
      DARABONBA_PTR_FROM_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(grant_type, grantType_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
      DARABONBA_PTR_FROM_JSON(session_token, sessionToken_);
      DARABONBA_PTR_FROM_JSON(token_url, tokenUrl_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(use_cookie_session_key, useCookieSessionKey_);
      DARABONBA_PTR_FROM_JSON(username, username_);
      DARABONBA_PTR_FROM_JSON(with_addon_resources, withAddonResources_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->accessKeySecret_ == nullptr && return this->apiAction_ == nullptr && return this->apiVersion_ == nullptr && return this->authStyle_ == nullptr && return this->clientId_ == nullptr
        && return this->clientSecret_ == nullptr && return this->grantType_ == nullptr && return this->password_ == nullptr && return this->regionId_ == nullptr && return this->scopes_ == nullptr
        && return this->serviceName_ == nullptr && return this->sessionToken_ == nullptr && return this->tokenUrl_ == nullptr && return this->type_ == nullptr && return this->useCookieSessionKey_ == nullptr
        && return this->username_ == nullptr && return this->withAddonResources_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // apiAction Field Functions 
    bool hasApiAction() const { return this->apiAction_ != nullptr;};
    void deleteApiAction() { this->apiAction_ = nullptr;};
    inline string apiAction() const { DARABONBA_PTR_GET_DEFAULT(apiAction_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setApiAction(string apiAction) { DARABONBA_PTR_SET_VALUE(apiAction_, apiAction) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // authStyle Field Functions 
    bool hasAuthStyle() const { return this->authStyle_ != nullptr;};
    void deleteAuthStyle() { this->authStyle_ = nullptr;};
    inline string authStyle() const { DARABONBA_PTR_GET_DEFAULT(authStyle_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setAuthStyle(string authStyle) { DARABONBA_PTR_SET_VALUE(authStyle_, authStyle) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes scopes() { DARABONBA_PTR_GET(scopes_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setScopes(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setScopes(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // sessionToken Field Functions 
    bool hasSessionToken() const { return this->sessionToken_ != nullptr;};
    void deleteSessionToken() { this->sessionToken_ = nullptr;};
    inline string sessionToken() const { DARABONBA_PTR_GET_DEFAULT(sessionToken_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setSessionToken(string sessionToken) { DARABONBA_PTR_SET_VALUE(sessionToken_, sessionToken) };


    // tokenUrl Field Functions 
    bool hasTokenUrl() const { return this->tokenUrl_ != nullptr;};
    void deleteTokenUrl() { this->tokenUrl_ = nullptr;};
    inline string tokenUrl() const { DARABONBA_PTR_GET_DEFAULT(tokenUrl_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setTokenUrl(string tokenUrl) { DARABONBA_PTR_SET_VALUE(tokenUrl_, tokenUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useCookieSessionKey Field Functions 
    bool hasUseCookieSessionKey() const { return this->useCookieSessionKey_ != nullptr;};
    void deleteUseCookieSessionKey() { this->useCookieSessionKey_ = nullptr;};
    inline bool useCookieSessionKey() const { DARABONBA_PTR_GET_DEFAULT(useCookieSessionKey_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setUseCookieSessionKey(bool useCookieSessionKey) { DARABONBA_PTR_SET_VALUE(useCookieSessionKey_, useCookieSessionKey) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // withAddonResources Field Functions 
    bool hasWithAddonResources() const { return this->withAddonResources_ != nullptr;};
    void deleteWithAddonResources() { this->withAddonResources_ = nullptr;};
    inline bool withAddonResources() const { DARABONBA_PTR_GET_DEFAULT(withAddonResources_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo& setWithAddonResources(bool withAddonResources) { DARABONBA_PTR_SET_VALUE(withAddonResources_, withAddonResources) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> apiAction_ = nullptr;
    std::shared_ptr<string> apiVersion_ = nullptr;
    std::shared_ptr<string> authStyle_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientSecret_ = nullptr;
    std::shared_ptr<string> grantType_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfoScopes> scopes_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> sessionToken_ = nullptr;
    std::shared_ptr<string> tokenUrl_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<bool> useCookieSessionKey_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<bool> withAddonResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
