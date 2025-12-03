// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPICONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPICONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyApiConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(BodyFormat, bodyFormat_);
      DARABONBA_PTR_TO_JSON(BodyModel, bodyModel_);
      DARABONBA_PTR_TO_JSON(ContentTypeCategory, contentTypeCategory_);
      DARABONBA_PTR_TO_JSON(ContentTypeValue, contentTypeValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_TO_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_TO_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_TO_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_TO_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_TO_JSON(HttpConfig, httpConfig_);
      DARABONBA_PTR_TO_JSON(MockConfig, mockConfig_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(OssConfig, ossConfig_);
      DARABONBA_PTR_TO_JSON(PostBodyDescription, postBodyDescription_);
      DARABONBA_PTR_TO_JSON(RequestHttpMethod, requestHttpMethod_);
      DARABONBA_PTR_TO_JSON(RequestMode, requestMode_);
      DARABONBA_PTR_TO_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_TO_JSON(RequestPath, requestPath_);
      DARABONBA_PTR_TO_JSON(RequestProtocol, requestProtocol_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_TO_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_TO_JSON(UseBackendService, useBackendService_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(BodyFormat, bodyFormat_);
      DARABONBA_PTR_FROM_JSON(BodyModel, bodyModel_);
      DARABONBA_PTR_FROM_JSON(ContentTypeCategory, contentTypeCategory_);
      DARABONBA_PTR_FROM_JSON(ContentTypeValue, contentTypeValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_FROM_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_FROM_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_FROM_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_FROM_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_FROM_JSON(HttpConfig, httpConfig_);
      DARABONBA_PTR_FROM_JSON(MockConfig, mockConfig_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(OssConfig, ossConfig_);
      DARABONBA_PTR_FROM_JSON(PostBodyDescription, postBodyDescription_);
      DARABONBA_PTR_FROM_JSON(RequestHttpMethod, requestHttpMethod_);
      DARABONBA_PTR_FROM_JSON(RequestMode, requestMode_);
      DARABONBA_PTR_FROM_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_FROM_JSON(RequestPath, requestPath_);
      DARABONBA_PTR_FROM_JSON(RequestProtocol, requestProtocol_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_FROM_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_FROM_JSON(UseBackendService, useBackendService_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
    };
    ModifyApiConfigurationRequest() = default ;
    ModifyApiConfigurationRequest(const ModifyApiConfigurationRequest &) = default ;
    ModifyApiConfigurationRequest(ModifyApiConfigurationRequest &&) = default ;
    ModifyApiConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiConfigurationRequest() = default ;
    ModifyApiConfigurationRequest& operator=(const ModifyApiConfigurationRequest &) = default ;
    ModifyApiConfigurationRequest& operator=(ModifyApiConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowSignatureMethod_ == nullptr
        && return this->apiId_ == nullptr && return this->apiName_ == nullptr && return this->appCodeAuthType_ == nullptr && return this->authType_ == nullptr && return this->backendName_ == nullptr
        && return this->bodyFormat_ == nullptr && return this->bodyModel_ == nullptr && return this->contentTypeCategory_ == nullptr && return this->contentTypeValue_ == nullptr && return this->description_ == nullptr
        && return this->disableInternet_ == nullptr && return this->errorCodeSamples_ == nullptr && return this->failResultSample_ == nullptr && return this->forceNonceCheck_ == nullptr && return this->functionComputeConfig_ == nullptr
        && return this->httpConfig_ == nullptr && return this->mockConfig_ == nullptr && return this->modelName_ == nullptr && return this->ossConfig_ == nullptr && return this->postBodyDescription_ == nullptr
        && return this->requestHttpMethod_ == nullptr && return this->requestMode_ == nullptr && return this->requestParameters_ == nullptr && return this->requestPath_ == nullptr && return this->requestProtocol_ == nullptr
        && return this->resultSample_ == nullptr && return this->resultType_ == nullptr && return this->securityToken_ == nullptr && return this->serviceParameters_ == nullptr && return this->serviceParametersMap_ == nullptr
        && return this->serviceProtocol_ == nullptr && return this->serviceTimeout_ == nullptr && return this->useBackendService_ == nullptr && return this->visibility_ == nullptr && return this->vpcConfig_ == nullptr; };
    // allowSignatureMethod Field Functions 
    bool hasAllowSignatureMethod() const { return this->allowSignatureMethod_ != nullptr;};
    void deleteAllowSignatureMethod() { this->allowSignatureMethod_ = nullptr;};
    inline string allowSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(allowSignatureMethod_, "") };
    inline ModifyApiConfigurationRequest& setAllowSignatureMethod(string allowSignatureMethod) { DARABONBA_PTR_SET_VALUE(allowSignatureMethod_, allowSignatureMethod) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ModifyApiConfigurationRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ModifyApiConfigurationRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appCodeAuthType Field Functions 
    bool hasAppCodeAuthType() const { return this->appCodeAuthType_ != nullptr;};
    void deleteAppCodeAuthType() { this->appCodeAuthType_ = nullptr;};
    inline string appCodeAuthType() const { DARABONBA_PTR_GET_DEFAULT(appCodeAuthType_, "") };
    inline ModifyApiConfigurationRequest& setAppCodeAuthType(string appCodeAuthType) { DARABONBA_PTR_SET_VALUE(appCodeAuthType_, appCodeAuthType) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ModifyApiConfigurationRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string backendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline ModifyApiConfigurationRequest& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // bodyFormat Field Functions 
    bool hasBodyFormat() const { return this->bodyFormat_ != nullptr;};
    void deleteBodyFormat() { this->bodyFormat_ = nullptr;};
    inline string bodyFormat() const { DARABONBA_PTR_GET_DEFAULT(bodyFormat_, "") };
    inline ModifyApiConfigurationRequest& setBodyFormat(string bodyFormat) { DARABONBA_PTR_SET_VALUE(bodyFormat_, bodyFormat) };


    // bodyModel Field Functions 
    bool hasBodyModel() const { return this->bodyModel_ != nullptr;};
    void deleteBodyModel() { this->bodyModel_ = nullptr;};
    inline string bodyModel() const { DARABONBA_PTR_GET_DEFAULT(bodyModel_, "") };
    inline ModifyApiConfigurationRequest& setBodyModel(string bodyModel) { DARABONBA_PTR_SET_VALUE(bodyModel_, bodyModel) };


    // contentTypeCategory Field Functions 
    bool hasContentTypeCategory() const { return this->contentTypeCategory_ != nullptr;};
    void deleteContentTypeCategory() { this->contentTypeCategory_ = nullptr;};
    inline string contentTypeCategory() const { DARABONBA_PTR_GET_DEFAULT(contentTypeCategory_, "") };
    inline ModifyApiConfigurationRequest& setContentTypeCategory(string contentTypeCategory) { DARABONBA_PTR_SET_VALUE(contentTypeCategory_, contentTypeCategory) };


    // contentTypeValue Field Functions 
    bool hasContentTypeValue() const { return this->contentTypeValue_ != nullptr;};
    void deleteContentTypeValue() { this->contentTypeValue_ = nullptr;};
    inline string contentTypeValue() const { DARABONBA_PTR_GET_DEFAULT(contentTypeValue_, "") };
    inline ModifyApiConfigurationRequest& setContentTypeValue(string contentTypeValue) { DARABONBA_PTR_SET_VALUE(contentTypeValue_, contentTypeValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyApiConfigurationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool disableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline ModifyApiConfigurationRequest& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline string errorCodeSamples() const { DARABONBA_PTR_GET_DEFAULT(errorCodeSamples_, "") };
    inline ModifyApiConfigurationRequest& setErrorCodeSamples(string errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string failResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline ModifyApiConfigurationRequest& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool forceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline ModifyApiConfigurationRequest& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // functionComputeConfig Field Functions 
    bool hasFunctionComputeConfig() const { return this->functionComputeConfig_ != nullptr;};
    void deleteFunctionComputeConfig() { this->functionComputeConfig_ = nullptr;};
    inline string functionComputeConfig() const { DARABONBA_PTR_GET_DEFAULT(functionComputeConfig_, "") };
    inline ModifyApiConfigurationRequest& setFunctionComputeConfig(string functionComputeConfig) { DARABONBA_PTR_SET_VALUE(functionComputeConfig_, functionComputeConfig) };


    // httpConfig Field Functions 
    bool hasHttpConfig() const { return this->httpConfig_ != nullptr;};
    void deleteHttpConfig() { this->httpConfig_ = nullptr;};
    inline string httpConfig() const { DARABONBA_PTR_GET_DEFAULT(httpConfig_, "") };
    inline ModifyApiConfigurationRequest& setHttpConfig(string httpConfig) { DARABONBA_PTR_SET_VALUE(httpConfig_, httpConfig) };


    // mockConfig Field Functions 
    bool hasMockConfig() const { return this->mockConfig_ != nullptr;};
    void deleteMockConfig() { this->mockConfig_ = nullptr;};
    inline string mockConfig() const { DARABONBA_PTR_GET_DEFAULT(mockConfig_, "") };
    inline ModifyApiConfigurationRequest& setMockConfig(string mockConfig) { DARABONBA_PTR_SET_VALUE(mockConfig_, mockConfig) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModifyApiConfigurationRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // ossConfig Field Functions 
    bool hasOssConfig() const { return this->ossConfig_ != nullptr;};
    void deleteOssConfig() { this->ossConfig_ = nullptr;};
    inline string ossConfig() const { DARABONBA_PTR_GET_DEFAULT(ossConfig_, "") };
    inline ModifyApiConfigurationRequest& setOssConfig(string ossConfig) { DARABONBA_PTR_SET_VALUE(ossConfig_, ossConfig) };


    // postBodyDescription Field Functions 
    bool hasPostBodyDescription() const { return this->postBodyDescription_ != nullptr;};
    void deletePostBodyDescription() { this->postBodyDescription_ = nullptr;};
    inline string postBodyDescription() const { DARABONBA_PTR_GET_DEFAULT(postBodyDescription_, "") };
    inline ModifyApiConfigurationRequest& setPostBodyDescription(string postBodyDescription) { DARABONBA_PTR_SET_VALUE(postBodyDescription_, postBodyDescription) };


    // requestHttpMethod Field Functions 
    bool hasRequestHttpMethod() const { return this->requestHttpMethod_ != nullptr;};
    void deleteRequestHttpMethod() { this->requestHttpMethod_ = nullptr;};
    inline string requestHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(requestHttpMethod_, "") };
    inline ModifyApiConfigurationRequest& setRequestHttpMethod(string requestHttpMethod) { DARABONBA_PTR_SET_VALUE(requestHttpMethod_, requestHttpMethod) };


    // requestMode Field Functions 
    bool hasRequestMode() const { return this->requestMode_ != nullptr;};
    void deleteRequestMode() { this->requestMode_ = nullptr;};
    inline string requestMode() const { DARABONBA_PTR_GET_DEFAULT(requestMode_, "") };
    inline ModifyApiConfigurationRequest& setRequestMode(string requestMode) { DARABONBA_PTR_SET_VALUE(requestMode_, requestMode) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline string requestParameters() const { DARABONBA_PTR_GET_DEFAULT(requestParameters_, "") };
    inline ModifyApiConfigurationRequest& setRequestParameters(string requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };


    // requestPath Field Functions 
    bool hasRequestPath() const { return this->requestPath_ != nullptr;};
    void deleteRequestPath() { this->requestPath_ = nullptr;};
    inline string requestPath() const { DARABONBA_PTR_GET_DEFAULT(requestPath_, "") };
    inline ModifyApiConfigurationRequest& setRequestPath(string requestPath) { DARABONBA_PTR_SET_VALUE(requestPath_, requestPath) };


    // requestProtocol Field Functions 
    bool hasRequestProtocol() const { return this->requestProtocol_ != nullptr;};
    void deleteRequestProtocol() { this->requestProtocol_ = nullptr;};
    inline string requestProtocol() const { DARABONBA_PTR_GET_DEFAULT(requestProtocol_, "") };
    inline ModifyApiConfigurationRequest& setRequestProtocol(string requestProtocol) { DARABONBA_PTR_SET_VALUE(requestProtocol_, requestProtocol) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string resultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline ModifyApiConfigurationRequest& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline ModifyApiConfigurationRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyApiConfigurationRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ModifyApiConfigurationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


    // serviceParametersMap Field Functions 
    bool hasServiceParametersMap() const { return this->serviceParametersMap_ != nullptr;};
    void deleteServiceParametersMap() { this->serviceParametersMap_ = nullptr;};
    inline string serviceParametersMap() const { DARABONBA_PTR_GET_DEFAULT(serviceParametersMap_, "") };
    inline ModifyApiConfigurationRequest& setServiceParametersMap(string serviceParametersMap) { DARABONBA_PTR_SET_VALUE(serviceParametersMap_, serviceParametersMap) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline ModifyApiConfigurationRequest& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // serviceTimeout Field Functions 
    bool hasServiceTimeout() const { return this->serviceTimeout_ != nullptr;};
    void deleteServiceTimeout() { this->serviceTimeout_ = nullptr;};
    inline int32_t serviceTimeout() const { DARABONBA_PTR_GET_DEFAULT(serviceTimeout_, 0) };
    inline ModifyApiConfigurationRequest& setServiceTimeout(int32_t serviceTimeout) { DARABONBA_PTR_SET_VALUE(serviceTimeout_, serviceTimeout) };


    // useBackendService Field Functions 
    bool hasUseBackendService() const { return this->useBackendService_ != nullptr;};
    void deleteUseBackendService() { this->useBackendService_ = nullptr;};
    inline bool useBackendService() const { DARABONBA_PTR_GET_DEFAULT(useBackendService_, false) };
    inline ModifyApiConfigurationRequest& setUseBackendService(bool useBackendService) { DARABONBA_PTR_SET_VALUE(useBackendService_, useBackendService) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline ModifyApiConfigurationRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline string vpcConfig() const { DARABONBA_PTR_GET_DEFAULT(vpcConfig_, "") };
    inline ModifyApiConfigurationRequest& setVpcConfig(string vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };


  protected:
    // If the **AuthType** parameter is set to **APP**, you must include this parameter to specify the signature algorithm. If you do not specify a value, HmacSHA256 is used by default. Valid values:
    // 
    // *   HmacSHA256
    // *   HmacSHA1,HmacSHA256
    std::shared_ptr<string> allowSignatureMethod_ = nullptr;
    // The ID of the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // If the **AuthType** parameter is set to **APP**, the valid values are:
    // 
    // *   **DEFAULT**: The default value that is used if no other values are passed. This value indicates that the settings of the group are used.
    // *   **DISABLE**: The authentication is disabled.
    // *   **HEADER**: AppCode can be placed in the Header parameter for authentication.
    // *   **HEADER_QUERY**: AppCode can be placed in the Header or Query parameter for authentication.
    std::shared_ptr<string> appCodeAuthType_ = nullptr;
    // API安全认证类型，目前可以取值：
    // 
    // - **APP**：只允许已授权的APP调用
    // - **ANONYMOUS**：允许匿名调用，设置为允许匿名调用需要注意：
    //      - 任何能够获取该API服务信息的人，都将能够调用该API。网关不会对调用者做身份认证，也无法设置按用户的流量控制，若开放该API请设置好按API的流量控制；
    //      - AppCodeAuthType的值不会生效。
    std::shared_ptr<string> authType_ = nullptr;
    // The name of the backend service. This parameter takes effect only when the UseBackendService parameter is set to TRUE.
    std::shared_ptr<string> backendName_ = nullptr;
    // This parameter takes effect only when the **RequestMode** parameter is set to **MAPPING**.
    // 
    // The format in which data is transmitted to the server for POST and PUT requests. Valid values: **FORM** and **STREAM**. FORM indicates that data is transmitted in the key-value pair format. STREAM indicates that data is transmitted as byte streams.
    std::shared_ptr<string> bodyFormat_ = nullptr;
    // The body model.
    std::shared_ptr<string> bodyModel_ = nullptr;
    // The ContentType configuration of the backend request.
    // 
    // *   DEFAULT: the default configuration in API Gateway
    // *   CUSTOM: a custom configuration
    std::shared_ptr<string> contentTypeCategory_ = nullptr;
    // The value of the ContentType header when the ServiceProtocol parameter is set to HTTP and the ContentTypeCatagory parameter is set to DEFAULT or CUSTOM.
    std::shared_ptr<string> contentTypeValue_ = nullptr;
    // The description of the API.
    std::shared_ptr<string> description_ = nullptr;
    // *   Specifies whether to call the API only in an internal network. If the **DisableInternet** parameter is set to **true**, the API can be called only in an internal network.
    // *   If the **DisableInternet** parameter is set to **false**, the API can be called over the Internet and in an internal network.
    std::shared_ptr<bool> disableInternet_ = nullptr;
    // The sample error codes returned by the backend service.
    // 
    // For more information, see [ErrorCodeSample](https://help.aliyun.com/document_detail/44392.html).
    std::shared_ptr<string> errorCodeSamples_ = nullptr;
    // The sample error response from the backend service. This value is used only to generate documents. It does not affect the returned result.
    std::shared_ptr<string> failResultSample_ = nullptr;
    // *   Specifies whether to forcibly check X-Ca-Nonce. If the **ForceNonceCheck** parameter is set to **true**, X-Ca-Nonce is forcibly checked. X-Ca-Nonce is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent replay attacks.
    // *   If the **ForceNonceCheck** parameter is set to **false**, X-Ca-Nonce is not checked. If you do not modify this parameter when you modify an API, the original value is used.
    std::shared_ptr<bool> forceNonceCheck_ = nullptr;
    // The Function Compute configuration.
    std::shared_ptr<string> functionComputeConfig_ = nullptr;
    // The HTTP configuration.
    std::shared_ptr<string> httpConfig_ = nullptr;
    // The Mock configuration.
    std::shared_ptr<string> mockConfig_ = nullptr;
    // The name of the model.
    std::shared_ptr<string> modelName_ = nullptr;
    // The OSS configuration.
    std::shared_ptr<string> ossConfig_ = nullptr;
    // The description of the request body.
    std::shared_ptr<string> postBodyDescription_ = nullptr;
    // The HTTP method used to make the request. Valid values: GET, POST, DELETE, PUT, HEADER, TRACE, PATCH, CONNECT, and OPTIONS.
    std::shared_ptr<string> requestHttpMethod_ = nullptr;
    // The request mode. Valid values:
    // 
    // *   MAPPING: Parameters are mapped. Unknown parameters are filtered out.
    // *   PASSTHROUGH: Parameters are passed through.
    // *   MAPPING_PASSTHROUGH: Parameters are mapped. Unknown parameters are passed through.
    std::shared_ptr<string> requestMode_ = nullptr;
    // The parameters of API requests sent by the consumer to API Gateway.
    // 
    // For more information, see [RequestParameter](https://help.aliyun.com/document_detail/43986.html).
    std::shared_ptr<string> requestParameters_ = nullptr;
    // The path of the API request. If the complete API URL is `http://api.a.com:8080/object/add?key1=value1&key2=value2`, the path of the API request is `/object/add`.
    std::shared_ptr<string> requestPath_ = nullptr;
    // The protocol type supported by the API. Valid values: HTTP and HTTPS. Separate multiple values with commas (,), such as "HTTP,HTTPS".
    std::shared_ptr<string> requestProtocol_ = nullptr;
    // The sample response from the backend service. This value is used only to generate documents. It does not affect the returned result.
    std::shared_ptr<string> resultSample_ = nullptr;
    // The format of the response from the backend service. Valid values: JSON, TEXT, BINARY, XML, and HTML. This value is used only to generate documents. It does not affect the returned result.
    std::shared_ptr<string> resultType_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The parameters of API requests sent by API Gateway to the backend service.
    // 
    // For more information, see [ServiceParameter](https://help.aliyun.com/document_detail/43988.html).
    std::shared_ptr<string> serviceParameters_ = nullptr;
    // The mappings between parameters of requests sent by the consumer to API Gateway and parameters of requests sent by API Gateway to the backend service.
    // 
    // For more information, see [ServiceParameterMap](https://help.aliyun.com/document_detail/43989.html).
    std::shared_ptr<string> serviceParametersMap_ = nullptr;
    // The protocol that is used to access backend services. Valid values:
    // 
    // *   Http: for backend services that use HTTP or HTTPS
    // *   Vpc: for backend services that use VPC
    // *   FC: for Function Compute
    // *   OSS: for Object Storage Service
    // *   Mock: for backend services that use the Mock mode
    // *   EventBridge: for EventBridge
    // 
    // You must specify the config value for the corresponding backend service.
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    // The timeout period of the backend service. Unit: milliseconds.
    std::shared_ptr<int32_t> serviceTimeout_ = nullptr;
    // Specifies whether to use the information about the created backend service. Valid values:
    // 
    // *   TRUE: uses the information about the created backend service.
    // *   FALSE: uses the information about the custom backend service.
    std::shared_ptr<bool> useBackendService_ = nullptr;
    // Specifies whether to make the API public. Valid values:
    // 
    // *   **PUBLIC:** The API is public. If this parameter is set to PUBLIC, the API is displayed on the APIs page for all users after the API is published to the production environment.
    // *   **PRIVATE:** The API is private. Private APIs are not displayed in the Alibaba Cloud Marketplace after the API group to which they belong is made available.
    std::shared_ptr<string> visibility_ = nullptr;
    // The VPC configuration.
    std::shared_ptr<string> vpcConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
