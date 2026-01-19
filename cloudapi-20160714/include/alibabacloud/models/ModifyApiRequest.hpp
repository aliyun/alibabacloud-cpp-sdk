// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_TO_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_TO_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_TO_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_TO_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_TO_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_TO_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_TO_JSON(ResultDescriptions, resultDescriptions_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_TO_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_TO_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(WebSocketApiType, webSocketApiType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_FROM_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_FROM_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_FROM_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_FROM_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_FROM_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_FROM_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_FROM_JSON(ResultDescriptions, resultDescriptions_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_FROM_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_FROM_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(WebSocketApiType, webSocketApiType_);
    };
    ModifyApiRequest() = default ;
    ModifyApiRequest(const ModifyApiRequest &) = default ;
    ModifyApiRequest(ModifyApiRequest &&) = default ;
    ModifyApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiRequest() = default ;
    ModifyApiRequest& operator=(const ModifyApiRequest &) = default ;
    ModifyApiRequest& operator=(ModifyApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowSignatureMethod_ == nullptr
        && this->apiId_ == nullptr && this->apiName_ == nullptr && this->appCodeAuthType_ == nullptr && this->authType_ == nullptr && this->backendEnable_ == nullptr
        && this->backendId_ == nullptr && this->constantParameters_ == nullptr && this->description_ == nullptr && this->disableInternet_ == nullptr && this->errorCodeSamples_ == nullptr
        && this->failResultSample_ == nullptr && this->forceNonceCheck_ == nullptr && this->groupId_ == nullptr && this->openIdConnectConfig_ == nullptr && this->requestConfig_ == nullptr
        && this->requestParameters_ == nullptr && this->resultBodyModel_ == nullptr && this->resultDescriptions_ == nullptr && this->resultSample_ == nullptr && this->resultType_ == nullptr
        && this->securityToken_ == nullptr && this->serviceConfig_ == nullptr && this->serviceParameters_ == nullptr && this->serviceParametersMap_ == nullptr && this->systemParameters_ == nullptr
        && this->visibility_ == nullptr && this->webSocketApiType_ == nullptr; };
    // allowSignatureMethod Field Functions 
    bool hasAllowSignatureMethod() const { return this->allowSignatureMethod_ != nullptr;};
    void deleteAllowSignatureMethod() { this->allowSignatureMethod_ = nullptr;};
    inline string getAllowSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(allowSignatureMethod_, "") };
    inline ModifyApiRequest& setAllowSignatureMethod(string allowSignatureMethod) { DARABONBA_PTR_SET_VALUE(allowSignatureMethod_, allowSignatureMethod) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ModifyApiRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ModifyApiRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appCodeAuthType Field Functions 
    bool hasAppCodeAuthType() const { return this->appCodeAuthType_ != nullptr;};
    void deleteAppCodeAuthType() { this->appCodeAuthType_ = nullptr;};
    inline string getAppCodeAuthType() const { DARABONBA_PTR_GET_DEFAULT(appCodeAuthType_, "") };
    inline ModifyApiRequest& setAppCodeAuthType(string appCodeAuthType) { DARABONBA_PTR_SET_VALUE(appCodeAuthType_, appCodeAuthType) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ModifyApiRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // backendEnable Field Functions 
    bool hasBackendEnable() const { return this->backendEnable_ != nullptr;};
    void deleteBackendEnable() { this->backendEnable_ = nullptr;};
    inline bool getBackendEnable() const { DARABONBA_PTR_GET_DEFAULT(backendEnable_, false) };
    inline ModifyApiRequest& setBackendEnable(bool backendEnable) { DARABONBA_PTR_SET_VALUE(backendEnable_, backendEnable) };


    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string getBackendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline ModifyApiRequest& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // constantParameters Field Functions 
    bool hasConstantParameters() const { return this->constantParameters_ != nullptr;};
    void deleteConstantParameters() { this->constantParameters_ = nullptr;};
    inline string getConstantParameters() const { DARABONBA_PTR_GET_DEFAULT(constantParameters_, "") };
    inline ModifyApiRequest& setConstantParameters(string constantParameters) { DARABONBA_PTR_SET_VALUE(constantParameters_, constantParameters) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool getDisableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline ModifyApiRequest& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline string getErrorCodeSamples() const { DARABONBA_PTR_GET_DEFAULT(errorCodeSamples_, "") };
    inline ModifyApiRequest& setErrorCodeSamples(string errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string getFailResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline ModifyApiRequest& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool getForceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline ModifyApiRequest& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyApiRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // openIdConnectConfig Field Functions 
    bool hasOpenIdConnectConfig() const { return this->openIdConnectConfig_ != nullptr;};
    void deleteOpenIdConnectConfig() { this->openIdConnectConfig_ = nullptr;};
    inline string getOpenIdConnectConfig() const { DARABONBA_PTR_GET_DEFAULT(openIdConnectConfig_, "") };
    inline ModifyApiRequest& setOpenIdConnectConfig(string openIdConnectConfig) { DARABONBA_PTR_SET_VALUE(openIdConnectConfig_, openIdConnectConfig) };


    // requestConfig Field Functions 
    bool hasRequestConfig() const { return this->requestConfig_ != nullptr;};
    void deleteRequestConfig() { this->requestConfig_ = nullptr;};
    inline string getRequestConfig() const { DARABONBA_PTR_GET_DEFAULT(requestConfig_, "") };
    inline ModifyApiRequest& setRequestConfig(string requestConfig) { DARABONBA_PTR_SET_VALUE(requestConfig_, requestConfig) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline string getRequestParameters() const { DARABONBA_PTR_GET_DEFAULT(requestParameters_, "") };
    inline ModifyApiRequest& setRequestParameters(string requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };


    // resultBodyModel Field Functions 
    bool hasResultBodyModel() const { return this->resultBodyModel_ != nullptr;};
    void deleteResultBodyModel() { this->resultBodyModel_ = nullptr;};
    inline string getResultBodyModel() const { DARABONBA_PTR_GET_DEFAULT(resultBodyModel_, "") };
    inline ModifyApiRequest& setResultBodyModel(string resultBodyModel) { DARABONBA_PTR_SET_VALUE(resultBodyModel_, resultBodyModel) };


    // resultDescriptions Field Functions 
    bool hasResultDescriptions() const { return this->resultDescriptions_ != nullptr;};
    void deleteResultDescriptions() { this->resultDescriptions_ = nullptr;};
    inline string getResultDescriptions() const { DARABONBA_PTR_GET_DEFAULT(resultDescriptions_, "") };
    inline ModifyApiRequest& setResultDescriptions(string resultDescriptions) { DARABONBA_PTR_SET_VALUE(resultDescriptions_, resultDescriptions) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string getResultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline ModifyApiRequest& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline ModifyApiRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyApiRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline string getServiceConfig() const { DARABONBA_PTR_GET_DEFAULT(serviceConfig_, "") };
    inline ModifyApiRequest& setServiceConfig(string serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ModifyApiRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


    // serviceParametersMap Field Functions 
    bool hasServiceParametersMap() const { return this->serviceParametersMap_ != nullptr;};
    void deleteServiceParametersMap() { this->serviceParametersMap_ = nullptr;};
    inline string getServiceParametersMap() const { DARABONBA_PTR_GET_DEFAULT(serviceParametersMap_, "") };
    inline ModifyApiRequest& setServiceParametersMap(string serviceParametersMap) { DARABONBA_PTR_SET_VALUE(serviceParametersMap_, serviceParametersMap) };


    // systemParameters Field Functions 
    bool hasSystemParameters() const { return this->systemParameters_ != nullptr;};
    void deleteSystemParameters() { this->systemParameters_ = nullptr;};
    inline string getSystemParameters() const { DARABONBA_PTR_GET_DEFAULT(systemParameters_, "") };
    inline ModifyApiRequest& setSystemParameters(string systemParameters) { DARABONBA_PTR_SET_VALUE(systemParameters_, systemParameters) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline ModifyApiRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // webSocketApiType Field Functions 
    bool hasWebSocketApiType() const { return this->webSocketApiType_ != nullptr;};
    void deleteWebSocketApiType() { this->webSocketApiType_ = nullptr;};
    inline string getWebSocketApiType() const { DARABONBA_PTR_GET_DEFAULT(webSocketApiType_, "") };
    inline ModifyApiRequest& setWebSocketApiType(string webSocketApiType) { DARABONBA_PTR_SET_VALUE(webSocketApiType_, webSocketApiType) };


  protected:
    // The type of the two-way communication API. Valid values:
    // 
    // *   **COMMON**: general APIs
    // *   **REGISTER**: registered APIs
    // *   **UNREGISTER**: unregistered APIs
    // *   **NOTIFY**: downstream notification
    shared_ptr<string> allowSignatureMethod_ {};
    // The ID of the API.
    // 
    // This parameter is required.
    shared_ptr<string> apiId_ {};
    // The name of the API. The name must be unique within the API group. The name must be 4 to 50 characters in length. It must start with a letter and can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> apiName_ {};
    // The ID of the backend service.
    shared_ptr<string> appCodeAuthType_ {};
    // The configuration items of API requests sent by the consumer to API Gateway.
    shared_ptr<string> authType_ {};
    // Configuration Mode
    shared_ptr<bool> backendEnable_ {};
    // Specifies whether to enable backend services.
    shared_ptr<string> backendId_ {};
    shared_ptr<string> constantParameters_ {};
    // The description of the API. The description can be up to 180 characters in length.
    shared_ptr<string> description_ {};
    // The AppCode authentication type supported. Valid values:
    // 
    // *   DEFAULT: supported after being made available in Alibaba Cloud Marketplace
    // *   DISABLE: not supported
    // *   HEADER : supported only in the Header parameter
    // *   HEADER_QUERY: supported in the Header or Query parameter
    shared_ptr<bool> disableInternet_ {};
    shared_ptr<string> errorCodeSamples_ {};
    shared_ptr<string> failResultSample_ {};
    // *   Specifies whether to set DisableInternet to **true** to limit API calls to within the VPC.
    // *   If you set DisableInternet to **false**, the limit if lifted.
    // 
    // >  If you do not set this parameter, the original value is used.
    shared_ptr<bool> forceNonceCheck_ {};
    // The ID of the API group.
    shared_ptr<string> groupId_ {};
    // The client-side request signature method of the API. Valid values:
    // 
    // *   HmacSHA256
    // *   HmacSHA1,HmacSHA256
    shared_ptr<string> openIdConnectConfig_ {};
    // The configuration items of API requests sent by API Gateway to the backend service.
    // 
    // This parameter is required.
    shared_ptr<string> requestConfig_ {};
    shared_ptr<string> requestParameters_ {};
    // *   Specifies whether to set **ForceNonceCheck** to **true** to force the check of X-Ca-Nonce during the request. This is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent replay attacks.
    // *   If you set **ForceNonceCheck** to **false**, the check is not performed. If you do not set this parameter, the original value is used.
    shared_ptr<string> resultBodyModel_ {};
    shared_ptr<string> resultDescriptions_ {};
    shared_ptr<string> resultSample_ {};
    // The sample response from the backend service.
    shared_ptr<string> resultType_ {};
    shared_ptr<string> securityToken_ {};
    // The parameters of API requests sent by the consumer to API Gateway.
    // 
    // This parameter is required.
    shared_ptr<string> serviceConfig_ {};
    shared_ptr<string> serviceParameters_ {};
    shared_ptr<string> serviceParametersMap_ {};
    shared_ptr<string> systemParameters_ {};
    // Specifies whether the API is public. Valid values:
    // 
    // *   **PUBLIC**: Make the API public. If you set this parameter to PUBLIC, this API is displayed on the APIs page for all users after the API is published to the production environment.
    // *   **PRIVATE**: Make the API private. Private APIs are not displayed in the Alibaba Cloud Marketplace after the API group to which they belong is made available.
    // 
    // This parameter is required.
    shared_ptr<string> visibility_ {};
    // The returned description of the API.
    shared_ptr<string> webSocketApiType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
