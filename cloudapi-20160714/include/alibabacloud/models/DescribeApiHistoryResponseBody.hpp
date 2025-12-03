// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyBackendConfig.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyConstantParameters.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyCustomSystemParameters.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyErrorCodeSamples.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyOpenIdConnectConfig.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyRequestConfig.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyRequestParameters.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyResultDescriptions.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceConfig.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceParameters.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceParametersMap.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodySystemParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_TO_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_TO_JSON(CustomSystemParameters, customSystemParameters_);
      DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_TO_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_TO_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_TO_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_TO_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_TO_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_TO_JSON(ResultDescriptions, resultDescriptions_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_TO_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(WebSocketApiType, webSocketApiType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_FROM_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_FROM_JSON(CustomSystemParameters, customSystemParameters_);
      DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_FROM_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_FROM_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_FROM_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_FROM_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_FROM_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_FROM_JSON(ResultDescriptions, resultDescriptions_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_FROM_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(WebSocketApiType, webSocketApiType_);
    };
    DescribeApiHistoryResponseBody() = default ;
    DescribeApiHistoryResponseBody(const DescribeApiHistoryResponseBody &) = default ;
    DescribeApiHistoryResponseBody(DescribeApiHistoryResponseBody &&) = default ;
    DescribeApiHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBody() = default ;
    DescribeApiHistoryResponseBody& operator=(const DescribeApiHistoryResponseBody &) = default ;
    DescribeApiHistoryResponseBody& operator=(DescribeApiHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowSignatureMethod_ == nullptr
        && return this->apiId_ == nullptr && return this->apiName_ == nullptr && return this->appCodeAuthType_ == nullptr && return this->authType_ == nullptr && return this->backendConfig_ == nullptr
        && return this->backendEnable_ == nullptr && return this->constantParameters_ == nullptr && return this->customSystemParameters_ == nullptr && return this->deployedTime_ == nullptr && return this->description_ == nullptr
        && return this->disableInternet_ == nullptr && return this->errorCodeSamples_ == nullptr && return this->failResultSample_ == nullptr && return this->forceNonceCheck_ == nullptr && return this->groupId_ == nullptr
        && return this->groupName_ == nullptr && return this->historyVersion_ == nullptr && return this->openIdConnectConfig_ == nullptr && return this->regionId_ == nullptr && return this->requestConfig_ == nullptr
        && return this->requestId_ == nullptr && return this->requestParameters_ == nullptr && return this->resultBodyModel_ == nullptr && return this->resultDescriptions_ == nullptr && return this->resultSample_ == nullptr
        && return this->resultType_ == nullptr && return this->serviceConfig_ == nullptr && return this->serviceParameters_ == nullptr && return this->serviceParametersMap_ == nullptr && return this->stageName_ == nullptr
        && return this->status_ == nullptr && return this->systemParameters_ == nullptr && return this->visibility_ == nullptr && return this->webSocketApiType_ == nullptr; };
    // allowSignatureMethod Field Functions 
    bool hasAllowSignatureMethod() const { return this->allowSignatureMethod_ != nullptr;};
    void deleteAllowSignatureMethod() { this->allowSignatureMethod_ = nullptr;};
    inline string allowSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(allowSignatureMethod_, "") };
    inline DescribeApiHistoryResponseBody& setAllowSignatureMethod(string allowSignatureMethod) { DARABONBA_PTR_SET_VALUE(allowSignatureMethod_, allowSignatureMethod) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiHistoryResponseBody& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiHistoryResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appCodeAuthType Field Functions 
    bool hasAppCodeAuthType() const { return this->appCodeAuthType_ != nullptr;};
    void deleteAppCodeAuthType() { this->appCodeAuthType_ = nullptr;};
    inline string appCodeAuthType() const { DARABONBA_PTR_GET_DEFAULT(appCodeAuthType_, "") };
    inline DescribeApiHistoryResponseBody& setAppCodeAuthType(string appCodeAuthType) { DARABONBA_PTR_SET_VALUE(appCodeAuthType_, appCodeAuthType) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeApiHistoryResponseBody& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, DescribeApiHistoryResponseBodyBackendConfig) };
    inline DescribeApiHistoryResponseBodyBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, DescribeApiHistoryResponseBodyBackendConfig) };
    inline DescribeApiHistoryResponseBody& setBackendConfig(const DescribeApiHistoryResponseBodyBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline DescribeApiHistoryResponseBody& setBackendConfig(DescribeApiHistoryResponseBodyBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // backendEnable Field Functions 
    bool hasBackendEnable() const { return this->backendEnable_ != nullptr;};
    void deleteBackendEnable() { this->backendEnable_ = nullptr;};
    inline bool backendEnable() const { DARABONBA_PTR_GET_DEFAULT(backendEnable_, false) };
    inline DescribeApiHistoryResponseBody& setBackendEnable(bool backendEnable) { DARABONBA_PTR_SET_VALUE(backendEnable_, backendEnable) };


    // constantParameters Field Functions 
    bool hasConstantParameters() const { return this->constantParameters_ != nullptr;};
    void deleteConstantParameters() { this->constantParameters_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyConstantParameters & constantParameters() const { DARABONBA_PTR_GET_CONST(constantParameters_, DescribeApiHistoryResponseBodyConstantParameters) };
    inline DescribeApiHistoryResponseBodyConstantParameters constantParameters() { DARABONBA_PTR_GET(constantParameters_, DescribeApiHistoryResponseBodyConstantParameters) };
    inline DescribeApiHistoryResponseBody& setConstantParameters(const DescribeApiHistoryResponseBodyConstantParameters & constantParameters) { DARABONBA_PTR_SET_VALUE(constantParameters_, constantParameters) };
    inline DescribeApiHistoryResponseBody& setConstantParameters(DescribeApiHistoryResponseBodyConstantParameters && constantParameters) { DARABONBA_PTR_SET_RVALUE(constantParameters_, constantParameters) };


    // customSystemParameters Field Functions 
    bool hasCustomSystemParameters() const { return this->customSystemParameters_ != nullptr;};
    void deleteCustomSystemParameters() { this->customSystemParameters_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyCustomSystemParameters & customSystemParameters() const { DARABONBA_PTR_GET_CONST(customSystemParameters_, DescribeApiHistoryResponseBodyCustomSystemParameters) };
    inline DescribeApiHistoryResponseBodyCustomSystemParameters customSystemParameters() { DARABONBA_PTR_GET(customSystemParameters_, DescribeApiHistoryResponseBodyCustomSystemParameters) };
    inline DescribeApiHistoryResponseBody& setCustomSystemParameters(const DescribeApiHistoryResponseBodyCustomSystemParameters & customSystemParameters) { DARABONBA_PTR_SET_VALUE(customSystemParameters_, customSystemParameters) };
    inline DescribeApiHistoryResponseBody& setCustomSystemParameters(DescribeApiHistoryResponseBodyCustomSystemParameters && customSystemParameters) { DARABONBA_PTR_SET_RVALUE(customSystemParameters_, customSystemParameters) };


    // deployedTime Field Functions 
    bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
    void deleteDeployedTime() { this->deployedTime_ = nullptr;};
    inline string deployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
    inline DescribeApiHistoryResponseBody& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiHistoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool disableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline DescribeApiHistoryResponseBody& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyErrorCodeSamples & errorCodeSamples() const { DARABONBA_PTR_GET_CONST(errorCodeSamples_, DescribeApiHistoryResponseBodyErrorCodeSamples) };
    inline DescribeApiHistoryResponseBodyErrorCodeSamples errorCodeSamples() { DARABONBA_PTR_GET(errorCodeSamples_, DescribeApiHistoryResponseBodyErrorCodeSamples) };
    inline DescribeApiHistoryResponseBody& setErrorCodeSamples(const DescribeApiHistoryResponseBodyErrorCodeSamples & errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };
    inline DescribeApiHistoryResponseBody& setErrorCodeSamples(DescribeApiHistoryResponseBodyErrorCodeSamples && errorCodeSamples) { DARABONBA_PTR_SET_RVALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string failResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline DescribeApiHistoryResponseBody& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool forceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline DescribeApiHistoryResponseBody& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiHistoryResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiHistoryResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // historyVersion Field Functions 
    bool hasHistoryVersion() const { return this->historyVersion_ != nullptr;};
    void deleteHistoryVersion() { this->historyVersion_ = nullptr;};
    inline string historyVersion() const { DARABONBA_PTR_GET_DEFAULT(historyVersion_, "") };
    inline DescribeApiHistoryResponseBody& setHistoryVersion(string historyVersion) { DARABONBA_PTR_SET_VALUE(historyVersion_, historyVersion) };


    // openIdConnectConfig Field Functions 
    bool hasOpenIdConnectConfig() const { return this->openIdConnectConfig_ != nullptr;};
    void deleteOpenIdConnectConfig() { this->openIdConnectConfig_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyOpenIdConnectConfig & openIdConnectConfig() const { DARABONBA_PTR_GET_CONST(openIdConnectConfig_, DescribeApiHistoryResponseBodyOpenIdConnectConfig) };
    inline DescribeApiHistoryResponseBodyOpenIdConnectConfig openIdConnectConfig() { DARABONBA_PTR_GET(openIdConnectConfig_, DescribeApiHistoryResponseBodyOpenIdConnectConfig) };
    inline DescribeApiHistoryResponseBody& setOpenIdConnectConfig(const DescribeApiHistoryResponseBodyOpenIdConnectConfig & openIdConnectConfig) { DARABONBA_PTR_SET_VALUE(openIdConnectConfig_, openIdConnectConfig) };
    inline DescribeApiHistoryResponseBody& setOpenIdConnectConfig(DescribeApiHistoryResponseBodyOpenIdConnectConfig && openIdConnectConfig) { DARABONBA_PTR_SET_RVALUE(openIdConnectConfig_, openIdConnectConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiHistoryResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestConfig Field Functions 
    bool hasRequestConfig() const { return this->requestConfig_ != nullptr;};
    void deleteRequestConfig() { this->requestConfig_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyRequestConfig & requestConfig() const { DARABONBA_PTR_GET_CONST(requestConfig_, DescribeApiHistoryResponseBodyRequestConfig) };
    inline DescribeApiHistoryResponseBodyRequestConfig requestConfig() { DARABONBA_PTR_GET(requestConfig_, DescribeApiHistoryResponseBodyRequestConfig) };
    inline DescribeApiHistoryResponseBody& setRequestConfig(const DescribeApiHistoryResponseBodyRequestConfig & requestConfig) { DARABONBA_PTR_SET_VALUE(requestConfig_, requestConfig) };
    inline DescribeApiHistoryResponseBody& setRequestConfig(DescribeApiHistoryResponseBodyRequestConfig && requestConfig) { DARABONBA_PTR_SET_RVALUE(requestConfig_, requestConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyRequestParameters & requestParameters() const { DARABONBA_PTR_GET_CONST(requestParameters_, DescribeApiHistoryResponseBodyRequestParameters) };
    inline DescribeApiHistoryResponseBodyRequestParameters requestParameters() { DARABONBA_PTR_GET(requestParameters_, DescribeApiHistoryResponseBodyRequestParameters) };
    inline DescribeApiHistoryResponseBody& setRequestParameters(const DescribeApiHistoryResponseBodyRequestParameters & requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };
    inline DescribeApiHistoryResponseBody& setRequestParameters(DescribeApiHistoryResponseBodyRequestParameters && requestParameters) { DARABONBA_PTR_SET_RVALUE(requestParameters_, requestParameters) };


    // resultBodyModel Field Functions 
    bool hasResultBodyModel() const { return this->resultBodyModel_ != nullptr;};
    void deleteResultBodyModel() { this->resultBodyModel_ = nullptr;};
    inline string resultBodyModel() const { DARABONBA_PTR_GET_DEFAULT(resultBodyModel_, "") };
    inline DescribeApiHistoryResponseBody& setResultBodyModel(string resultBodyModel) { DARABONBA_PTR_SET_VALUE(resultBodyModel_, resultBodyModel) };


    // resultDescriptions Field Functions 
    bool hasResultDescriptions() const { return this->resultDescriptions_ != nullptr;};
    void deleteResultDescriptions() { this->resultDescriptions_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyResultDescriptions & resultDescriptions() const { DARABONBA_PTR_GET_CONST(resultDescriptions_, DescribeApiHistoryResponseBodyResultDescriptions) };
    inline DescribeApiHistoryResponseBodyResultDescriptions resultDescriptions() { DARABONBA_PTR_GET(resultDescriptions_, DescribeApiHistoryResponseBodyResultDescriptions) };
    inline DescribeApiHistoryResponseBody& setResultDescriptions(const DescribeApiHistoryResponseBodyResultDescriptions & resultDescriptions) { DARABONBA_PTR_SET_VALUE(resultDescriptions_, resultDescriptions) };
    inline DescribeApiHistoryResponseBody& setResultDescriptions(DescribeApiHistoryResponseBodyResultDescriptions && resultDescriptions) { DARABONBA_PTR_SET_RVALUE(resultDescriptions_, resultDescriptions) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string resultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline DescribeApiHistoryResponseBody& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline DescribeApiHistoryResponseBody& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyServiceConfig & serviceConfig() const { DARABONBA_PTR_GET_CONST(serviceConfig_, DescribeApiHistoryResponseBodyServiceConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig serviceConfig() { DARABONBA_PTR_GET(serviceConfig_, DescribeApiHistoryResponseBodyServiceConfig) };
    inline DescribeApiHistoryResponseBody& setServiceConfig(const DescribeApiHistoryResponseBodyServiceConfig & serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };
    inline DescribeApiHistoryResponseBody& setServiceConfig(DescribeApiHistoryResponseBodyServiceConfig && serviceConfig) { DARABONBA_PTR_SET_RVALUE(serviceConfig_, serviceConfig) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyServiceParameters & serviceParameters() const { DARABONBA_PTR_GET_CONST(serviceParameters_, DescribeApiHistoryResponseBodyServiceParameters) };
    inline DescribeApiHistoryResponseBodyServiceParameters serviceParameters() { DARABONBA_PTR_GET(serviceParameters_, DescribeApiHistoryResponseBodyServiceParameters) };
    inline DescribeApiHistoryResponseBody& setServiceParameters(const DescribeApiHistoryResponseBodyServiceParameters & serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };
    inline DescribeApiHistoryResponseBody& setServiceParameters(DescribeApiHistoryResponseBodyServiceParameters && serviceParameters) { DARABONBA_PTR_SET_RVALUE(serviceParameters_, serviceParameters) };


    // serviceParametersMap Field Functions 
    bool hasServiceParametersMap() const { return this->serviceParametersMap_ != nullptr;};
    void deleteServiceParametersMap() { this->serviceParametersMap_ = nullptr;};
    inline const DescribeApiHistoryResponseBodyServiceParametersMap & serviceParametersMap() const { DARABONBA_PTR_GET_CONST(serviceParametersMap_, DescribeApiHistoryResponseBodyServiceParametersMap) };
    inline DescribeApiHistoryResponseBodyServiceParametersMap serviceParametersMap() { DARABONBA_PTR_GET(serviceParametersMap_, DescribeApiHistoryResponseBodyServiceParametersMap) };
    inline DescribeApiHistoryResponseBody& setServiceParametersMap(const DescribeApiHistoryResponseBodyServiceParametersMap & serviceParametersMap) { DARABONBA_PTR_SET_VALUE(serviceParametersMap_, serviceParametersMap) };
    inline DescribeApiHistoryResponseBody& setServiceParametersMap(DescribeApiHistoryResponseBodyServiceParametersMap && serviceParametersMap) { DARABONBA_PTR_SET_RVALUE(serviceParametersMap_, serviceParametersMap) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApiHistoryResponseBody& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApiHistoryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemParameters Field Functions 
    bool hasSystemParameters() const { return this->systemParameters_ != nullptr;};
    void deleteSystemParameters() { this->systemParameters_ = nullptr;};
    inline const DescribeApiHistoryResponseBodySystemParameters & systemParameters() const { DARABONBA_PTR_GET_CONST(systemParameters_, DescribeApiHistoryResponseBodySystemParameters) };
    inline DescribeApiHistoryResponseBodySystemParameters systemParameters() { DARABONBA_PTR_GET(systemParameters_, DescribeApiHistoryResponseBodySystemParameters) };
    inline DescribeApiHistoryResponseBody& setSystemParameters(const DescribeApiHistoryResponseBodySystemParameters & systemParameters) { DARABONBA_PTR_SET_VALUE(systemParameters_, systemParameters) };
    inline DescribeApiHistoryResponseBody& setSystemParameters(DescribeApiHistoryResponseBodySystemParameters && systemParameters) { DARABONBA_PTR_SET_RVALUE(systemParameters_, systemParameters) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApiHistoryResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // webSocketApiType Field Functions 
    bool hasWebSocketApiType() const { return this->webSocketApiType_ != nullptr;};
    void deleteWebSocketApiType() { this->webSocketApiType_ = nullptr;};
    inline string webSocketApiType() const { DARABONBA_PTR_GET_DEFAULT(webSocketApiType_, "") };
    inline DescribeApiHistoryResponseBody& setWebSocketApiType(string webSocketApiType) { DARABONBA_PTR_SET_VALUE(webSocketApiType_, webSocketApiType) };


  protected:
    // If **AuthType** is set to **APP**, this value must be passed to specify the signature algorithm. If you do not specify a value, HmacSHA256 is used by default. Valid values:
    // 
    // *   HmacSHA256
    // *   HmacSHA1,HmacSHA256
    std::shared_ptr<string> allowSignatureMethod_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The AppCode authentication type supported. Valid values:
    // 
    // *   DEFAULT: supported after being made available in Alibaba Cloud Marketplace
    // *   DISABLE: not supported.
    // *   HEADER : supported only in the Header parameter
    // *   HEADER_QUERY : supported in the Header or Query parameter.
    std::shared_ptr<string> appCodeAuthType_ = nullptr;
    // The security authentication method of the API. Valid values:
    // 
    // *   **APP: Only authorized applications can call the API.**
    // 
    // *   **ANONYMOUS: The API can be anonymously called. In this mode, you must take note of the following rules:**
    // 
    //     *   All users who have obtained the API service information can call this API. API Gateway does not authenticate callers and cannot set user-specific throttling policies. If you make this API public, set API-specific throttling policies.
    std::shared_ptr<string> authType_ = nullptr;
    // Backend configurations
    std::shared_ptr<DescribeApiHistoryResponseBodyBackendConfig> backendConfig_ = nullptr;
    // Specifies whether to enable backend services.
    std::shared_ptr<bool> backendEnable_ = nullptr;
    // The constant parameters.
    std::shared_ptr<DescribeApiHistoryResponseBodyConstantParameters> constantParameters_ = nullptr;
    // The custom system parameters.
    std::shared_ptr<DescribeApiHistoryResponseBodyCustomSystemParameters> customSystemParameters_ = nullptr;
    // The publishing time (UTC) of the API.
    std::shared_ptr<string> deployedTime_ = nullptr;
    // The description of the API.
    std::shared_ptr<string> description_ = nullptr;
    // *   Specifies whether to set **DisableInternet** to **true** to limit API calls to within the VPC.
    // *   If you set **DisableInternet** to **false**, the limit is lifted. The default value is false when you create an API.
    std::shared_ptr<bool> disableInternet_ = nullptr;
    // The sample error codes returned by the backend service.
    // 
    // For more information, see [ErrorCodeSample](https://help.aliyun.com/document_detail/44392.html).
    std::shared_ptr<DescribeApiHistoryResponseBodyErrorCodeSamples> errorCodeSamples_ = nullptr;
    // The sample error response from the backend service.
    std::shared_ptr<string> failResultSample_ = nullptr;
    // *   Specifies whether to set **ForceNonceCheck** to **true** to force the check of X-Ca-Nonce during the request. This is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent replay attacks.
    // *   If you set **ForceNonceCheck** to **false**, the check is not performed. The default value is false when you create an API.
    std::shared_ptr<bool> forceNonceCheck_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The historical version number.
    std::shared_ptr<string> historyVersion_ = nullptr;
    // The configuration items of the third-party OpenID Connect authentication method.
    std::shared_ptr<DescribeApiHistoryResponseBodyOpenIdConnectConfig> openIdConnectConfig_ = nullptr;
    // The region where the API is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The configuration items of API requests sent by the consumer to API Gateway.
    // 
    // For more information, see [RequestConfig](https://help.aliyun.com/document_detail/43985.html).
    std::shared_ptr<DescribeApiHistoryResponseBodyRequestConfig> requestConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The parameters of API requests sent by the consumer to API Gateway.
    // 
    // For more information, see [RequestParameter](https://help.aliyun.com/document_detail/43986.html).
    std::shared_ptr<DescribeApiHistoryResponseBodyRequestParameters> requestParameters_ = nullptr;
    // The return description of the API.
    std::shared_ptr<string> resultBodyModel_ = nullptr;
    // The return description of the API.
    std::shared_ptr<DescribeApiHistoryResponseBodyResultDescriptions> resultDescriptions_ = nullptr;
    // The sample response.
    std::shared_ptr<string> resultSample_ = nullptr;
    // The type of the data to return.
    std::shared_ptr<string> resultType_ = nullptr;
    // The information about a backend service call.
    std::shared_ptr<DescribeApiHistoryResponseBodyServiceConfig> serviceConfig_ = nullptr;
    // The parameters of API requests sent by API Gateway to the backend service.
    // 
    // For more information, see [ServiceParameter](https://help.aliyun.com/document_detail/43988.html).
    std::shared_ptr<DescribeApiHistoryResponseBodyServiceParameters> serviceParameters_ = nullptr;
    // The mappings between parameters of requests sent by the consumer to API Gateway and parameters of requests sent by API Gateway to the backend service.
    // 
    // For more information, see [ServiceParameterMap](https://help.aliyun.com/document_detail/43989.html).
    std::shared_ptr<DescribeApiHistoryResponseBodyServiceParametersMap> serviceParametersMap_ = nullptr;
    // The environment in which the API is requested. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the pre-release environment
    // *   **TEST**: the test environment
    std::shared_ptr<string> stageName_ = nullptr;
    // The invocation status of the API.
    std::shared_ptr<string> status_ = nullptr;
    // The common parameters of the APIs, in JSON format.
    std::shared_ptr<DescribeApiHistoryResponseBodySystemParameters> systemParameters_ = nullptr;
    // Specifies whether to make the API public. Valid values:
    // 
    // *   **PUBLIC**: Make the API public. If you set this parameter to PUBLIC, this API is displayed on the APIs page for all users after the API is published to the production environment.
    // *   **PRIVATE**: Make the API private. Private APIs are not displayed in the Alibaba Cloud Marketplace after the API group to which they belong is made available.
    std::shared_ptr<string> visibility_ = nullptr;
    // The type of the two-way communication API. Valid values:
    // 
    // *   **COMMON**: general APIs
    // *   **REGISTER**: registered APIs
    // *   **UNREGISTER**: unregistered APIs
    // *   **NOTIFY**: downstream notification
    std::shared_ptr<string> webSocketApiType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
