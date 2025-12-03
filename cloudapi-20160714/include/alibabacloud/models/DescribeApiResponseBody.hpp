// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyBackendConfig.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyConstantParameters.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyCustomSystemParameters.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyDeployedInfos.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyErrorCodeSamples.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyOpenIdConnectConfig.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyRequestConfig.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyRequestParameters.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyServiceConfig.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyServiceParameters.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyServiceParametersMap.hpp>
#include <alibabacloud/models/DescribeApiResponseBodySystemParameters.hpp>
#include <alibabacloud/models/DescribeApiResponseBodyTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_TO_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CustomSystemParameters, customSystemParameters_);
      DARABONBA_PTR_TO_JSON(DeployedInfos, deployedInfos_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_TO_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_TO_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_TO_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Mock, mock_);
      DARABONBA_PTR_TO_JSON(MockResult, mockResult_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_TO_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_TO_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_TO_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(WebSocketApiType, webSocketApiType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_FROM_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CustomSystemParameters, customSystemParameters_);
      DARABONBA_PTR_FROM_JSON(DeployedInfos, deployedInfos_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_FROM_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_FROM_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_FROM_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Mock, mock_);
      DARABONBA_PTR_FROM_JSON(MockResult, mockResult_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_FROM_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_FROM_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_FROM_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(WebSocketApiType, webSocketApiType_);
    };
    DescribeApiResponseBody() = default ;
    DescribeApiResponseBody(const DescribeApiResponseBody &) = default ;
    DescribeApiResponseBody(DescribeApiResponseBody &&) = default ;
    DescribeApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBody() = default ;
    DescribeApiResponseBody& operator=(const DescribeApiResponseBody &) = default ;
    DescribeApiResponseBody& operator=(DescribeApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowSignatureMethod_ == nullptr
        && return this->apiId_ == nullptr && return this->apiName_ == nullptr && return this->appCodeAuthType_ == nullptr && return this->authType_ == nullptr && return this->backendConfig_ == nullptr
        && return this->backendEnable_ == nullptr && return this->constantParameters_ == nullptr && return this->createdTime_ == nullptr && return this->customSystemParameters_ == nullptr && return this->deployedInfos_ == nullptr
        && return this->description_ == nullptr && return this->disableInternet_ == nullptr && return this->errorCodeSamples_ == nullptr && return this->failResultSample_ == nullptr && return this->forceNonceCheck_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->mock_ == nullptr && return this->mockResult_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->openIdConnectConfig_ == nullptr && return this->regionId_ == nullptr && return this->requestConfig_ == nullptr && return this->requestId_ == nullptr && return this->requestParameters_ == nullptr
        && return this->resultBodyModel_ == nullptr && return this->resultSample_ == nullptr && return this->resultType_ == nullptr && return this->serviceConfig_ == nullptr && return this->serviceParameters_ == nullptr
        && return this->serviceParametersMap_ == nullptr && return this->systemParameters_ == nullptr && return this->tagList_ == nullptr && return this->visibility_ == nullptr && return this->webSocketApiType_ == nullptr; };
    // allowSignatureMethod Field Functions 
    bool hasAllowSignatureMethod() const { return this->allowSignatureMethod_ != nullptr;};
    void deleteAllowSignatureMethod() { this->allowSignatureMethod_ = nullptr;};
    inline string allowSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(allowSignatureMethod_, "") };
    inline DescribeApiResponseBody& setAllowSignatureMethod(string allowSignatureMethod) { DARABONBA_PTR_SET_VALUE(allowSignatureMethod_, allowSignatureMethod) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiResponseBody& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appCodeAuthType Field Functions 
    bool hasAppCodeAuthType() const { return this->appCodeAuthType_ != nullptr;};
    void deleteAppCodeAuthType() { this->appCodeAuthType_ = nullptr;};
    inline string appCodeAuthType() const { DARABONBA_PTR_GET_DEFAULT(appCodeAuthType_, "") };
    inline DescribeApiResponseBody& setAppCodeAuthType(string appCodeAuthType) { DARABONBA_PTR_SET_VALUE(appCodeAuthType_, appCodeAuthType) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeApiResponseBody& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const DescribeApiResponseBodyBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, DescribeApiResponseBodyBackendConfig) };
    inline DescribeApiResponseBodyBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, DescribeApiResponseBodyBackendConfig) };
    inline DescribeApiResponseBody& setBackendConfig(const DescribeApiResponseBodyBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline DescribeApiResponseBody& setBackendConfig(DescribeApiResponseBodyBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // backendEnable Field Functions 
    bool hasBackendEnable() const { return this->backendEnable_ != nullptr;};
    void deleteBackendEnable() { this->backendEnable_ = nullptr;};
    inline bool backendEnable() const { DARABONBA_PTR_GET_DEFAULT(backendEnable_, false) };
    inline DescribeApiResponseBody& setBackendEnable(bool backendEnable) { DARABONBA_PTR_SET_VALUE(backendEnable_, backendEnable) };


    // constantParameters Field Functions 
    bool hasConstantParameters() const { return this->constantParameters_ != nullptr;};
    void deleteConstantParameters() { this->constantParameters_ = nullptr;};
    inline const DescribeApiResponseBodyConstantParameters & constantParameters() const { DARABONBA_PTR_GET_CONST(constantParameters_, DescribeApiResponseBodyConstantParameters) };
    inline DescribeApiResponseBodyConstantParameters constantParameters() { DARABONBA_PTR_GET(constantParameters_, DescribeApiResponseBodyConstantParameters) };
    inline DescribeApiResponseBody& setConstantParameters(const DescribeApiResponseBodyConstantParameters & constantParameters) { DARABONBA_PTR_SET_VALUE(constantParameters_, constantParameters) };
    inline DescribeApiResponseBody& setConstantParameters(DescribeApiResponseBodyConstantParameters && constantParameters) { DARABONBA_PTR_SET_RVALUE(constantParameters_, constantParameters) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeApiResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // customSystemParameters Field Functions 
    bool hasCustomSystemParameters() const { return this->customSystemParameters_ != nullptr;};
    void deleteCustomSystemParameters() { this->customSystemParameters_ = nullptr;};
    inline const DescribeApiResponseBodyCustomSystemParameters & customSystemParameters() const { DARABONBA_PTR_GET_CONST(customSystemParameters_, DescribeApiResponseBodyCustomSystemParameters) };
    inline DescribeApiResponseBodyCustomSystemParameters customSystemParameters() { DARABONBA_PTR_GET(customSystemParameters_, DescribeApiResponseBodyCustomSystemParameters) };
    inline DescribeApiResponseBody& setCustomSystemParameters(const DescribeApiResponseBodyCustomSystemParameters & customSystemParameters) { DARABONBA_PTR_SET_VALUE(customSystemParameters_, customSystemParameters) };
    inline DescribeApiResponseBody& setCustomSystemParameters(DescribeApiResponseBodyCustomSystemParameters && customSystemParameters) { DARABONBA_PTR_SET_RVALUE(customSystemParameters_, customSystemParameters) };


    // deployedInfos Field Functions 
    bool hasDeployedInfos() const { return this->deployedInfos_ != nullptr;};
    void deleteDeployedInfos() { this->deployedInfos_ = nullptr;};
    inline const DescribeApiResponseBodyDeployedInfos & deployedInfos() const { DARABONBA_PTR_GET_CONST(deployedInfos_, DescribeApiResponseBodyDeployedInfos) };
    inline DescribeApiResponseBodyDeployedInfos deployedInfos() { DARABONBA_PTR_GET(deployedInfos_, DescribeApiResponseBodyDeployedInfos) };
    inline DescribeApiResponseBody& setDeployedInfos(const DescribeApiResponseBodyDeployedInfos & deployedInfos) { DARABONBA_PTR_SET_VALUE(deployedInfos_, deployedInfos) };
    inline DescribeApiResponseBody& setDeployedInfos(DescribeApiResponseBodyDeployedInfos && deployedInfos) { DARABONBA_PTR_SET_RVALUE(deployedInfos_, deployedInfos) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool disableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline DescribeApiResponseBody& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline const DescribeApiResponseBodyErrorCodeSamples & errorCodeSamples() const { DARABONBA_PTR_GET_CONST(errorCodeSamples_, DescribeApiResponseBodyErrorCodeSamples) };
    inline DescribeApiResponseBodyErrorCodeSamples errorCodeSamples() { DARABONBA_PTR_GET(errorCodeSamples_, DescribeApiResponseBodyErrorCodeSamples) };
    inline DescribeApiResponseBody& setErrorCodeSamples(const DescribeApiResponseBodyErrorCodeSamples & errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };
    inline DescribeApiResponseBody& setErrorCodeSamples(DescribeApiResponseBodyErrorCodeSamples && errorCodeSamples) { DARABONBA_PTR_SET_RVALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string failResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline DescribeApiResponseBody& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool forceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline DescribeApiResponseBody& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline string mock() const { DARABONBA_PTR_GET_DEFAULT(mock_, "") };
    inline DescribeApiResponseBody& setMock(string mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };


    // mockResult Field Functions 
    bool hasMockResult() const { return this->mockResult_ != nullptr;};
    void deleteMockResult() { this->mockResult_ = nullptr;};
    inline string mockResult() const { DARABONBA_PTR_GET_DEFAULT(mockResult_, "") };
    inline DescribeApiResponseBody& setMockResult(string mockResult) { DARABONBA_PTR_SET_VALUE(mockResult_, mockResult) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeApiResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // openIdConnectConfig Field Functions 
    bool hasOpenIdConnectConfig() const { return this->openIdConnectConfig_ != nullptr;};
    void deleteOpenIdConnectConfig() { this->openIdConnectConfig_ = nullptr;};
    inline const DescribeApiResponseBodyOpenIdConnectConfig & openIdConnectConfig() const { DARABONBA_PTR_GET_CONST(openIdConnectConfig_, DescribeApiResponseBodyOpenIdConnectConfig) };
    inline DescribeApiResponseBodyOpenIdConnectConfig openIdConnectConfig() { DARABONBA_PTR_GET(openIdConnectConfig_, DescribeApiResponseBodyOpenIdConnectConfig) };
    inline DescribeApiResponseBody& setOpenIdConnectConfig(const DescribeApiResponseBodyOpenIdConnectConfig & openIdConnectConfig) { DARABONBA_PTR_SET_VALUE(openIdConnectConfig_, openIdConnectConfig) };
    inline DescribeApiResponseBody& setOpenIdConnectConfig(DescribeApiResponseBodyOpenIdConnectConfig && openIdConnectConfig) { DARABONBA_PTR_SET_RVALUE(openIdConnectConfig_, openIdConnectConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestConfig Field Functions 
    bool hasRequestConfig() const { return this->requestConfig_ != nullptr;};
    void deleteRequestConfig() { this->requestConfig_ = nullptr;};
    inline const DescribeApiResponseBodyRequestConfig & requestConfig() const { DARABONBA_PTR_GET_CONST(requestConfig_, DescribeApiResponseBodyRequestConfig) };
    inline DescribeApiResponseBodyRequestConfig requestConfig() { DARABONBA_PTR_GET(requestConfig_, DescribeApiResponseBodyRequestConfig) };
    inline DescribeApiResponseBody& setRequestConfig(const DescribeApiResponseBodyRequestConfig & requestConfig) { DARABONBA_PTR_SET_VALUE(requestConfig_, requestConfig) };
    inline DescribeApiResponseBody& setRequestConfig(DescribeApiResponseBodyRequestConfig && requestConfig) { DARABONBA_PTR_SET_RVALUE(requestConfig_, requestConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline const DescribeApiResponseBodyRequestParameters & requestParameters() const { DARABONBA_PTR_GET_CONST(requestParameters_, DescribeApiResponseBodyRequestParameters) };
    inline DescribeApiResponseBodyRequestParameters requestParameters() { DARABONBA_PTR_GET(requestParameters_, DescribeApiResponseBodyRequestParameters) };
    inline DescribeApiResponseBody& setRequestParameters(const DescribeApiResponseBodyRequestParameters & requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };
    inline DescribeApiResponseBody& setRequestParameters(DescribeApiResponseBodyRequestParameters && requestParameters) { DARABONBA_PTR_SET_RVALUE(requestParameters_, requestParameters) };


    // resultBodyModel Field Functions 
    bool hasResultBodyModel() const { return this->resultBodyModel_ != nullptr;};
    void deleteResultBodyModel() { this->resultBodyModel_ = nullptr;};
    inline string resultBodyModel() const { DARABONBA_PTR_GET_DEFAULT(resultBodyModel_, "") };
    inline DescribeApiResponseBody& setResultBodyModel(string resultBodyModel) { DARABONBA_PTR_SET_VALUE(resultBodyModel_, resultBodyModel) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string resultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline DescribeApiResponseBody& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline DescribeApiResponseBody& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline const DescribeApiResponseBodyServiceConfig & serviceConfig() const { DARABONBA_PTR_GET_CONST(serviceConfig_, DescribeApiResponseBodyServiceConfig) };
    inline DescribeApiResponseBodyServiceConfig serviceConfig() { DARABONBA_PTR_GET(serviceConfig_, DescribeApiResponseBodyServiceConfig) };
    inline DescribeApiResponseBody& setServiceConfig(const DescribeApiResponseBodyServiceConfig & serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };
    inline DescribeApiResponseBody& setServiceConfig(DescribeApiResponseBodyServiceConfig && serviceConfig) { DARABONBA_PTR_SET_RVALUE(serviceConfig_, serviceConfig) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline const DescribeApiResponseBodyServiceParameters & serviceParameters() const { DARABONBA_PTR_GET_CONST(serviceParameters_, DescribeApiResponseBodyServiceParameters) };
    inline DescribeApiResponseBodyServiceParameters serviceParameters() { DARABONBA_PTR_GET(serviceParameters_, DescribeApiResponseBodyServiceParameters) };
    inline DescribeApiResponseBody& setServiceParameters(const DescribeApiResponseBodyServiceParameters & serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };
    inline DescribeApiResponseBody& setServiceParameters(DescribeApiResponseBodyServiceParameters && serviceParameters) { DARABONBA_PTR_SET_RVALUE(serviceParameters_, serviceParameters) };


    // serviceParametersMap Field Functions 
    bool hasServiceParametersMap() const { return this->serviceParametersMap_ != nullptr;};
    void deleteServiceParametersMap() { this->serviceParametersMap_ = nullptr;};
    inline const DescribeApiResponseBodyServiceParametersMap & serviceParametersMap() const { DARABONBA_PTR_GET_CONST(serviceParametersMap_, DescribeApiResponseBodyServiceParametersMap) };
    inline DescribeApiResponseBodyServiceParametersMap serviceParametersMap() { DARABONBA_PTR_GET(serviceParametersMap_, DescribeApiResponseBodyServiceParametersMap) };
    inline DescribeApiResponseBody& setServiceParametersMap(const DescribeApiResponseBodyServiceParametersMap & serviceParametersMap) { DARABONBA_PTR_SET_VALUE(serviceParametersMap_, serviceParametersMap) };
    inline DescribeApiResponseBody& setServiceParametersMap(DescribeApiResponseBodyServiceParametersMap && serviceParametersMap) { DARABONBA_PTR_SET_RVALUE(serviceParametersMap_, serviceParametersMap) };


    // systemParameters Field Functions 
    bool hasSystemParameters() const { return this->systemParameters_ != nullptr;};
    void deleteSystemParameters() { this->systemParameters_ = nullptr;};
    inline const DescribeApiResponseBodySystemParameters & systemParameters() const { DARABONBA_PTR_GET_CONST(systemParameters_, DescribeApiResponseBodySystemParameters) };
    inline DescribeApiResponseBodySystemParameters systemParameters() { DARABONBA_PTR_GET(systemParameters_, DescribeApiResponseBodySystemParameters) };
    inline DescribeApiResponseBody& setSystemParameters(const DescribeApiResponseBodySystemParameters & systemParameters) { DARABONBA_PTR_SET_VALUE(systemParameters_, systemParameters) };
    inline DescribeApiResponseBody& setSystemParameters(DescribeApiResponseBodySystemParameters && systemParameters) { DARABONBA_PTR_SET_RVALUE(systemParameters_, systemParameters) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const DescribeApiResponseBodyTagList & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, DescribeApiResponseBodyTagList) };
    inline DescribeApiResponseBodyTagList tagList() { DARABONBA_PTR_GET(tagList_, DescribeApiResponseBodyTagList) };
    inline DescribeApiResponseBody& setTagList(const DescribeApiResponseBodyTagList & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeApiResponseBody& setTagList(DescribeApiResponseBodyTagList && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApiResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // webSocketApiType Field Functions 
    bool hasWebSocketApiType() const { return this->webSocketApiType_ != nullptr;};
    void deleteWebSocketApiType() { this->webSocketApiType_ = nullptr;};
    inline string webSocketApiType() const { DARABONBA_PTR_GET_DEFAULT(webSocketApiType_, "") };
    inline DescribeApiResponseBody& setWebSocketApiType(string webSocketApiType) { DARABONBA_PTR_SET_VALUE(webSocketApiType_, webSocketApiType) };


  protected:
    // If **AuthType** is set to **APP**, this value must be passed to specify the signature algorithm. If you do not specify a value, HmacSHA256 is used by default. Valid values:
    // 
    // *   HmacSHA256
    // *   HmacSHA1,HmacSHA256
    std::shared_ptr<string> allowSignatureMethod_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API, which is unique in the group.
    std::shared_ptr<string> apiName_ = nullptr;
    // If **AuthType** is set to **APP**, the valid values are:
    // 
    // *   **DEFAULT**: The default value that is used if no other values are passed. This value means that the setting of the group is used.
    // *   **DISABLE**: The authentication is disabled.
    // *   **HEADER**: AppCode can be placed in the Header parameter for authentication.
    // *   **HEADER_QUERY**: AppCode can be placed in the Header or Query parameter for authentication.
    std::shared_ptr<string> appCodeAuthType_ = nullptr;
    // The security authentication method of the API. Valid values:
    // 
    // *   **APP**: Only authorized applications can call the API.
    // 
    // *   **ANONYMOUS**: The API can be anonymously called. In this mode, you must take note of the following rules:
    // 
    //     *   All users who have obtained the API service information can call this API. API Gateway does not authenticate callers and cannot set user-specific throttling policies. If you make this API public, set API-specific throttling policies.
    //     *   We recommend that you do not make the API whose security authentication method is ANONYMOUS available in Alibaba Cloud Marketplace because API Gateway cannot meter calls on the caller or limit the number of calls on the API. If you want to make the API group to which the API belongs available in Alibaba Cloud Marketplace, we recommend that you move the API to another group, set its type to PRIVATE, or set its security authentication method to APP.
    // 
    // *   **APPOPENID**: The OpenID Connect account authentication method is used. Only applications authorized by OpenID Connect can call the API. If this method is selected, the OpenIdConnectConfig parameter is required.
    std::shared_ptr<string> authType_ = nullptr;
    // Backend configurations
    std::shared_ptr<DescribeApiResponseBodyBackendConfig> backendConfig_ = nullptr;
    // Specifies whether to enable backend services.
    std::shared_ptr<bool> backendEnable_ = nullptr;
    // System parameters sent by API Gateway to the backend service
    std::shared_ptr<DescribeApiResponseBodyConstantParameters> constantParameters_ = nullptr;
    // The creation time of the API.
    std::shared_ptr<string> createdTime_ = nullptr;
    // Custom system parameters
    std::shared_ptr<DescribeApiResponseBodyCustomSystemParameters> customSystemParameters_ = nullptr;
    // The API publishing status.
    std::shared_ptr<DescribeApiResponseBodyDeployedInfos> deployedInfos_ = nullptr;
    // The description of the API.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to limit API calls to within the VPC. Valid values:
    // 
    // *   **true**: Only API calls from the VPC are supported.
    // *   **false**: API calls from the VPC and Internet are both supported.
    std::shared_ptr<bool> disableInternet_ = nullptr;
    // The sample error codes returned by the backend service.
    std::shared_ptr<DescribeApiResponseBodyErrorCodeSamples> errorCodeSamples_ = nullptr;
    // The sample error response from the backend service.
    std::shared_ptr<string> failResultSample_ = nullptr;
    // Specifies whether to carry the header : X-Ca-Nonce when calling an API. This is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent reply attacks. Valid values:
    // 
    // *   **true**: This field is forcibly checked when an API is requested to prevent replay attacks.
    // *   **false**: This field is not checked.
    std::shared_ptr<bool> forceNonceCheck_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // Specifies whether to enable the Mock mode. Valid values:
    // 
    // *   OPEN: The Mock mode is enabled.
    // *   CLOSED: The Mock mode is not enabled.
    std::shared_ptr<string> mock_ = nullptr;
    // The result returned for service mocking.
    std::shared_ptr<string> mockResult_ = nullptr;
    // The last modification time of the API.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // Configuration items of the third-party OpenID Connect authentication method
    std::shared_ptr<DescribeApiResponseBodyOpenIdConnectConfig> openIdConnectConfig_ = nullptr;
    // The region ID of the API.
    std::shared_ptr<string> regionId_ = nullptr;
    // The configuration items of API requests sent by the consumer to API Gateway.
    std::shared_ptr<DescribeApiResponseBodyRequestConfig> requestConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The parameters of API requests sent by the consumer to API Gateway.
    std::shared_ptr<DescribeApiResponseBodyRequestParameters> requestParameters_ = nullptr;
    // The returned description of the API.
    std::shared_ptr<string> resultBodyModel_ = nullptr;
    // The sample response from the backend service.
    std::shared_ptr<string> resultSample_ = nullptr;
    // The format of the response from the backend service. Valid values: JSON, TEXT, BINARY, XML, and HTML.
    std::shared_ptr<string> resultType_ = nullptr;
    // The configuration items of API requests that API Gateway sends to the backend service.
    std::shared_ptr<DescribeApiResponseBodyServiceConfig> serviceConfig_ = nullptr;
    // The parameters of API requests sent by API Gateway to the backend service.
    std::shared_ptr<DescribeApiResponseBodyServiceParameters> serviceParameters_ = nullptr;
    // The mappings between parameters of requests sent by the consumer to API Gateway and parameters of requests sent by API Gateway to the backend service.
    std::shared_ptr<DescribeApiResponseBodyServiceParametersMap> serviceParametersMap_ = nullptr;
    // System parameters sent by API Gateway to the backend service
    std::shared_ptr<DescribeApiResponseBodySystemParameters> systemParameters_ = nullptr;
    // Tag List.
    std::shared_ptr<DescribeApiResponseBodyTagList> tagList_ = nullptr;
    // Specifies whether to make the API public. Valid values:
    // 
    // *   **PUBLIC**: Make the API public. If you set this parameter to PUBLIC, this API is displayed on the APIs page for all users after the API is published to the production environment.
    // *   **PRIVATE**: Make the API private. Private APIs are not displayed in the Alibaba Cloud Marketplace after the API group to which they belong is made available.
    std::shared_ptr<string> visibility_ = nullptr;
    // The type of the two-way communication API.
    // 
    // *   **COMMON**: common API
    // *   **REGISTER**: registered API
    // *   **UNREGISTER**: unregistered API
    // *   **NOTIFY**: downstream notification API
    std::shared_ptr<string> webSocketApiType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
