// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayAuthDetailResponseBodyDataExternalAuthZ.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayAuthDetailResponseBodyDataResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayAuthDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_TO_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_TO_JSON(ExternalAuthZ, externalAuthZ_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Jwks, jwks_);
      DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RedirectUrl, redirectUrl_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(ScopesList, scopesList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Sub, sub_);
      DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
      DARABONBA_PTR_TO_JSON(TokenNamePrefix, tokenNamePrefix_);
      DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthResourceConfig, authResourceConfig_);
      DARABONBA_PTR_FROM_JSON(AuthResourceMode, authResourceMode_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(CookieDomain, cookieDomain_);
      DARABONBA_PTR_FROM_JSON(ExternalAuthZ, externalAuthZ_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Jwks, jwks_);
      DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RedirectUrl, redirectUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(ScopesList, scopesList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Sub, sub_);
      DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
      DARABONBA_PTR_FROM_JSON(TokenNamePrefix, tokenNamePrefix_);
      DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetGatewayAuthDetailResponseBodyData() = default ;
    GetGatewayAuthDetailResponseBodyData(const GetGatewayAuthDetailResponseBodyData &) = default ;
    GetGatewayAuthDetailResponseBodyData(GetGatewayAuthDetailResponseBodyData &&) = default ;
    GetGatewayAuthDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthDetailResponseBodyData() = default ;
    GetGatewayAuthDetailResponseBodyData& operator=(const GetGatewayAuthDetailResponseBodyData &) = default ;
    GetGatewayAuthDetailResponseBodyData& operator=(GetGatewayAuthDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authResourceConfig_ != nullptr
        && this->authResourceMode_ != nullptr && this->clientId_ != nullptr && this->clientSecret_ != nullptr && this->cookieDomain_ != nullptr && this->externalAuthZ_ != nullptr
        && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->isWhite_ != nullptr && this->issuer_ != nullptr && this->jwks_ != nullptr && this->loginUrl_ != nullptr && this->name_ != nullptr
        && this->redirectUrl_ != nullptr && this->resourceList_ != nullptr && this->scopesList_ != nullptr && this->status_ != nullptr && this->sub_ != nullptr
        && this->tokenName_ != nullptr && this->tokenNamePrefix_ != nullptr && this->tokenPass_ != nullptr && this->tokenPosition_ != nullptr && this->type_ != nullptr; };
    // authResourceConfig Field Functions 
    bool hasAuthResourceConfig() const { return this->authResourceConfig_ != nullptr;};
    void deleteAuthResourceConfig() { this->authResourceConfig_ = nullptr;};
    inline string authResourceConfig() const { DARABONBA_PTR_GET_DEFAULT(authResourceConfig_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setAuthResourceConfig(string authResourceConfig) { DARABONBA_PTR_SET_VALUE(authResourceConfig_, authResourceConfig) };


    // authResourceMode Field Functions 
    bool hasAuthResourceMode() const { return this->authResourceMode_ != nullptr;};
    void deleteAuthResourceMode() { this->authResourceMode_ = nullptr;};
    inline int32_t authResourceMode() const { DARABONBA_PTR_GET_DEFAULT(authResourceMode_, 0) };
    inline GetGatewayAuthDetailResponseBodyData& setAuthResourceMode(int32_t authResourceMode) { DARABONBA_PTR_SET_VALUE(authResourceMode_, authResourceMode) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // cookieDomain Field Functions 
    bool hasCookieDomain() const { return this->cookieDomain_ != nullptr;};
    void deleteCookieDomain() { this->cookieDomain_ = nullptr;};
    inline string cookieDomain() const { DARABONBA_PTR_GET_DEFAULT(cookieDomain_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setCookieDomain(string cookieDomain) { DARABONBA_PTR_SET_VALUE(cookieDomain_, cookieDomain) };


    // externalAuthZ Field Functions 
    bool hasExternalAuthZ() const { return this->externalAuthZ_ != nullptr;};
    void deleteExternalAuthZ() { this->externalAuthZ_ = nullptr;};
    inline const Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZ & externalAuthZ() const { DARABONBA_PTR_GET_CONST(externalAuthZ_, Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZ) };
    inline Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZ externalAuthZ() { DARABONBA_PTR_GET(externalAuthZ_, Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZ) };
    inline GetGatewayAuthDetailResponseBodyData& setExternalAuthZ(const Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZ & externalAuthZ) { DARABONBA_PTR_SET_VALUE(externalAuthZ_, externalAuthZ) };
    inline GetGatewayAuthDetailResponseBodyData& setExternalAuthZ(Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZ && externalAuthZ) { DARABONBA_PTR_SET_RVALUE(externalAuthZ_, externalAuthZ) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GetGatewayAuthDetailResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayAuthDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool isWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline GetGatewayAuthDetailResponseBodyData& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string jwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string loginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // redirectUrl Field Functions 
    bool hasRedirectUrl() const { return this->redirectUrl_ != nullptr;};
    void deleteRedirectUrl() { this->redirectUrl_ = nullptr;};
    inline string redirectUrl() const { DARABONBA_PTR_GET_DEFAULT(redirectUrl_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setRedirectUrl(string redirectUrl) { DARABONBA_PTR_SET_VALUE(redirectUrl_, redirectUrl) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::GetGatewayAuthDetailResponseBodyDataResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::GetGatewayAuthDetailResponseBodyDataResourceList>) };
    inline vector<Models::GetGatewayAuthDetailResponseBodyDataResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::GetGatewayAuthDetailResponseBodyDataResourceList>) };
    inline GetGatewayAuthDetailResponseBodyData& setResourceList(const vector<Models::GetGatewayAuthDetailResponseBodyDataResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline GetGatewayAuthDetailResponseBodyData& setResourceList(vector<Models::GetGatewayAuthDetailResponseBodyDataResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // scopesList Field Functions 
    bool hasScopesList() const { return this->scopesList_ != nullptr;};
    void deleteScopesList() { this->scopesList_ = nullptr;};
    inline string scopesList() const { DARABONBA_PTR_GET_DEFAULT(scopesList_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setScopesList(string scopesList) { DARABONBA_PTR_SET_VALUE(scopesList_, scopesList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline GetGatewayAuthDetailResponseBodyData& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline string sub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


    // tokenName Field Functions 
    bool hasTokenName() const { return this->tokenName_ != nullptr;};
    void deleteTokenName() { this->tokenName_ = nullptr;};
    inline string tokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


    // tokenNamePrefix Field Functions 
    bool hasTokenNamePrefix() const { return this->tokenNamePrefix_ != nullptr;};
    void deleteTokenNamePrefix() { this->tokenNamePrefix_ = nullptr;};
    inline string tokenNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenNamePrefix_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setTokenNamePrefix(string tokenNamePrefix) { DARABONBA_PTR_SET_VALUE(tokenNamePrefix_, tokenNamePrefix) };


    // tokenPass Field Functions 
    bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
    void deleteTokenPass() { this->tokenPass_ = nullptr;};
    inline bool tokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
    inline GetGatewayAuthDetailResponseBodyData& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


    // tokenPosition Field Functions 
    bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
    void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
    inline string tokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetGatewayAuthDetailResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> authResourceConfig_ = nullptr;
    std::shared_ptr<int32_t> authResourceMode_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientSecret_ = nullptr;
    std::shared_ptr<string> cookieDomain_ = nullptr;
    std::shared_ptr<Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZ> externalAuthZ_ = nullptr;
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> isWhite_ = nullptr;
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<string> jwks_ = nullptr;
    std::shared_ptr<string> loginUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> redirectUrl_ = nullptr;
    std::shared_ptr<vector<Models::GetGatewayAuthDetailResponseBodyDataResourceList>> resourceList_ = nullptr;
    std::shared_ptr<string> scopesList_ = nullptr;
    std::shared_ptr<bool> status_ = nullptr;
    std::shared_ptr<string> sub_ = nullptr;
    std::shared_ptr<string> tokenName_ = nullptr;
    std::shared_ptr<string> tokenNamePrefix_ = nullptr;
    std::shared_ptr<bool> tokenPass_ = nullptr;
    std::shared_ptr<string> tokenPosition_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
