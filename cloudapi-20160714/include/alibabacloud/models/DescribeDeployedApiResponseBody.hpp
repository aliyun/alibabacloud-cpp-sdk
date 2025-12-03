// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyConstantParameters.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyCustomSystemParameters.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyErrorCodeSamples.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyOpenIdConnectConfig.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyRequestConfig.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyRequestParameters.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyResultDescriptions.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceConfig.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceParameters.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceParametersMap.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodySystemParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
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
      DARABONBA_PTR_TO_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
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
      DARABONBA_PTR_FROM_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    DescribeDeployedApiResponseBody() = default ;
    DescribeDeployedApiResponseBody(const DescribeDeployedApiResponseBody &) = default ;
    DescribeDeployedApiResponseBody(DescribeDeployedApiResponseBody &&) = default ;
    DescribeDeployedApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBody() = default ;
    DescribeDeployedApiResponseBody& operator=(const DescribeDeployedApiResponseBody &) = default ;
    DescribeDeployedApiResponseBody& operator=(DescribeDeployedApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowSignatureMethod_ == nullptr
        && return this->apiId_ == nullptr && return this->apiName_ == nullptr && return this->authType_ == nullptr && return this->constantParameters_ == nullptr && return this->customSystemParameters_ == nullptr
        && return this->deployedTime_ == nullptr && return this->description_ == nullptr && return this->disableInternet_ == nullptr && return this->errorCodeSamples_ == nullptr && return this->failResultSample_ == nullptr
        && return this->forceNonceCheck_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->openIdConnectConfig_ == nullptr && return this->regionId_ == nullptr
        && return this->requestConfig_ == nullptr && return this->requestId_ == nullptr && return this->requestParameters_ == nullptr && return this->resultBodyModel_ == nullptr && return this->resultDescriptions_ == nullptr
        && return this->resultSample_ == nullptr && return this->resultType_ == nullptr && return this->serviceConfig_ == nullptr && return this->serviceParameters_ == nullptr && return this->serviceParametersMap_ == nullptr
        && return this->stageName_ == nullptr && return this->systemParameters_ == nullptr && return this->visibility_ == nullptr; };
    // allowSignatureMethod Field Functions 
    bool hasAllowSignatureMethod() const { return this->allowSignatureMethod_ != nullptr;};
    void deleteAllowSignatureMethod() { this->allowSignatureMethod_ = nullptr;};
    inline string allowSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(allowSignatureMethod_, "") };
    inline DescribeDeployedApiResponseBody& setAllowSignatureMethod(string allowSignatureMethod) { DARABONBA_PTR_SET_VALUE(allowSignatureMethod_, allowSignatureMethod) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeDeployedApiResponseBody& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeDeployedApiResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeDeployedApiResponseBody& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // constantParameters Field Functions 
    bool hasConstantParameters() const { return this->constantParameters_ != nullptr;};
    void deleteConstantParameters() { this->constantParameters_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyConstantParameters & constantParameters() const { DARABONBA_PTR_GET_CONST(constantParameters_, DescribeDeployedApiResponseBodyConstantParameters) };
    inline DescribeDeployedApiResponseBodyConstantParameters constantParameters() { DARABONBA_PTR_GET(constantParameters_, DescribeDeployedApiResponseBodyConstantParameters) };
    inline DescribeDeployedApiResponseBody& setConstantParameters(const DescribeDeployedApiResponseBodyConstantParameters & constantParameters) { DARABONBA_PTR_SET_VALUE(constantParameters_, constantParameters) };
    inline DescribeDeployedApiResponseBody& setConstantParameters(DescribeDeployedApiResponseBodyConstantParameters && constantParameters) { DARABONBA_PTR_SET_RVALUE(constantParameters_, constantParameters) };


    // customSystemParameters Field Functions 
    bool hasCustomSystemParameters() const { return this->customSystemParameters_ != nullptr;};
    void deleteCustomSystemParameters() { this->customSystemParameters_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyCustomSystemParameters & customSystemParameters() const { DARABONBA_PTR_GET_CONST(customSystemParameters_, DescribeDeployedApiResponseBodyCustomSystemParameters) };
    inline DescribeDeployedApiResponseBodyCustomSystemParameters customSystemParameters() { DARABONBA_PTR_GET(customSystemParameters_, DescribeDeployedApiResponseBodyCustomSystemParameters) };
    inline DescribeDeployedApiResponseBody& setCustomSystemParameters(const DescribeDeployedApiResponseBodyCustomSystemParameters & customSystemParameters) { DARABONBA_PTR_SET_VALUE(customSystemParameters_, customSystemParameters) };
    inline DescribeDeployedApiResponseBody& setCustomSystemParameters(DescribeDeployedApiResponseBodyCustomSystemParameters && customSystemParameters) { DARABONBA_PTR_SET_RVALUE(customSystemParameters_, customSystemParameters) };


    // deployedTime Field Functions 
    bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
    void deleteDeployedTime() { this->deployedTime_ = nullptr;};
    inline string deployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
    inline DescribeDeployedApiResponseBody& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDeployedApiResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool disableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline DescribeDeployedApiResponseBody& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyErrorCodeSamples & errorCodeSamples() const { DARABONBA_PTR_GET_CONST(errorCodeSamples_, DescribeDeployedApiResponseBodyErrorCodeSamples) };
    inline DescribeDeployedApiResponseBodyErrorCodeSamples errorCodeSamples() { DARABONBA_PTR_GET(errorCodeSamples_, DescribeDeployedApiResponseBodyErrorCodeSamples) };
    inline DescribeDeployedApiResponseBody& setErrorCodeSamples(const DescribeDeployedApiResponseBodyErrorCodeSamples & errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };
    inline DescribeDeployedApiResponseBody& setErrorCodeSamples(DescribeDeployedApiResponseBodyErrorCodeSamples && errorCodeSamples) { DARABONBA_PTR_SET_RVALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string failResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline DescribeDeployedApiResponseBody& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool forceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline DescribeDeployedApiResponseBody& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDeployedApiResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDeployedApiResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // openIdConnectConfig Field Functions 
    bool hasOpenIdConnectConfig() const { return this->openIdConnectConfig_ != nullptr;};
    void deleteOpenIdConnectConfig() { this->openIdConnectConfig_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyOpenIdConnectConfig & openIdConnectConfig() const { DARABONBA_PTR_GET_CONST(openIdConnectConfig_, DescribeDeployedApiResponseBodyOpenIdConnectConfig) };
    inline DescribeDeployedApiResponseBodyOpenIdConnectConfig openIdConnectConfig() { DARABONBA_PTR_GET(openIdConnectConfig_, DescribeDeployedApiResponseBodyOpenIdConnectConfig) };
    inline DescribeDeployedApiResponseBody& setOpenIdConnectConfig(const DescribeDeployedApiResponseBodyOpenIdConnectConfig & openIdConnectConfig) { DARABONBA_PTR_SET_VALUE(openIdConnectConfig_, openIdConnectConfig) };
    inline DescribeDeployedApiResponseBody& setOpenIdConnectConfig(DescribeDeployedApiResponseBodyOpenIdConnectConfig && openIdConnectConfig) { DARABONBA_PTR_SET_RVALUE(openIdConnectConfig_, openIdConnectConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDeployedApiResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestConfig Field Functions 
    bool hasRequestConfig() const { return this->requestConfig_ != nullptr;};
    void deleteRequestConfig() { this->requestConfig_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyRequestConfig & requestConfig() const { DARABONBA_PTR_GET_CONST(requestConfig_, DescribeDeployedApiResponseBodyRequestConfig) };
    inline DescribeDeployedApiResponseBodyRequestConfig requestConfig() { DARABONBA_PTR_GET(requestConfig_, DescribeDeployedApiResponseBodyRequestConfig) };
    inline DescribeDeployedApiResponseBody& setRequestConfig(const DescribeDeployedApiResponseBodyRequestConfig & requestConfig) { DARABONBA_PTR_SET_VALUE(requestConfig_, requestConfig) };
    inline DescribeDeployedApiResponseBody& setRequestConfig(DescribeDeployedApiResponseBodyRequestConfig && requestConfig) { DARABONBA_PTR_SET_RVALUE(requestConfig_, requestConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeployedApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyRequestParameters & requestParameters() const { DARABONBA_PTR_GET_CONST(requestParameters_, DescribeDeployedApiResponseBodyRequestParameters) };
    inline DescribeDeployedApiResponseBodyRequestParameters requestParameters() { DARABONBA_PTR_GET(requestParameters_, DescribeDeployedApiResponseBodyRequestParameters) };
    inline DescribeDeployedApiResponseBody& setRequestParameters(const DescribeDeployedApiResponseBodyRequestParameters & requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };
    inline DescribeDeployedApiResponseBody& setRequestParameters(DescribeDeployedApiResponseBodyRequestParameters && requestParameters) { DARABONBA_PTR_SET_RVALUE(requestParameters_, requestParameters) };


    // resultBodyModel Field Functions 
    bool hasResultBodyModel() const { return this->resultBodyModel_ != nullptr;};
    void deleteResultBodyModel() { this->resultBodyModel_ = nullptr;};
    inline string resultBodyModel() const { DARABONBA_PTR_GET_DEFAULT(resultBodyModel_, "") };
    inline DescribeDeployedApiResponseBody& setResultBodyModel(string resultBodyModel) { DARABONBA_PTR_SET_VALUE(resultBodyModel_, resultBodyModel) };


    // resultDescriptions Field Functions 
    bool hasResultDescriptions() const { return this->resultDescriptions_ != nullptr;};
    void deleteResultDescriptions() { this->resultDescriptions_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyResultDescriptions & resultDescriptions() const { DARABONBA_PTR_GET_CONST(resultDescriptions_, DescribeDeployedApiResponseBodyResultDescriptions) };
    inline DescribeDeployedApiResponseBodyResultDescriptions resultDescriptions() { DARABONBA_PTR_GET(resultDescriptions_, DescribeDeployedApiResponseBodyResultDescriptions) };
    inline DescribeDeployedApiResponseBody& setResultDescriptions(const DescribeDeployedApiResponseBodyResultDescriptions & resultDescriptions) { DARABONBA_PTR_SET_VALUE(resultDescriptions_, resultDescriptions) };
    inline DescribeDeployedApiResponseBody& setResultDescriptions(DescribeDeployedApiResponseBodyResultDescriptions && resultDescriptions) { DARABONBA_PTR_SET_RVALUE(resultDescriptions_, resultDescriptions) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string resultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline DescribeDeployedApiResponseBody& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline DescribeDeployedApiResponseBody& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyServiceConfig & serviceConfig() const { DARABONBA_PTR_GET_CONST(serviceConfig_, DescribeDeployedApiResponseBodyServiceConfig) };
    inline DescribeDeployedApiResponseBodyServiceConfig serviceConfig() { DARABONBA_PTR_GET(serviceConfig_, DescribeDeployedApiResponseBodyServiceConfig) };
    inline DescribeDeployedApiResponseBody& setServiceConfig(const DescribeDeployedApiResponseBodyServiceConfig & serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };
    inline DescribeDeployedApiResponseBody& setServiceConfig(DescribeDeployedApiResponseBodyServiceConfig && serviceConfig) { DARABONBA_PTR_SET_RVALUE(serviceConfig_, serviceConfig) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyServiceParameters & serviceParameters() const { DARABONBA_PTR_GET_CONST(serviceParameters_, DescribeDeployedApiResponseBodyServiceParameters) };
    inline DescribeDeployedApiResponseBodyServiceParameters serviceParameters() { DARABONBA_PTR_GET(serviceParameters_, DescribeDeployedApiResponseBodyServiceParameters) };
    inline DescribeDeployedApiResponseBody& setServiceParameters(const DescribeDeployedApiResponseBodyServiceParameters & serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };
    inline DescribeDeployedApiResponseBody& setServiceParameters(DescribeDeployedApiResponseBodyServiceParameters && serviceParameters) { DARABONBA_PTR_SET_RVALUE(serviceParameters_, serviceParameters) };


    // serviceParametersMap Field Functions 
    bool hasServiceParametersMap() const { return this->serviceParametersMap_ != nullptr;};
    void deleteServiceParametersMap() { this->serviceParametersMap_ = nullptr;};
    inline const DescribeDeployedApiResponseBodyServiceParametersMap & serviceParametersMap() const { DARABONBA_PTR_GET_CONST(serviceParametersMap_, DescribeDeployedApiResponseBodyServiceParametersMap) };
    inline DescribeDeployedApiResponseBodyServiceParametersMap serviceParametersMap() { DARABONBA_PTR_GET(serviceParametersMap_, DescribeDeployedApiResponseBodyServiceParametersMap) };
    inline DescribeDeployedApiResponseBody& setServiceParametersMap(const DescribeDeployedApiResponseBodyServiceParametersMap & serviceParametersMap) { DARABONBA_PTR_SET_VALUE(serviceParametersMap_, serviceParametersMap) };
    inline DescribeDeployedApiResponseBody& setServiceParametersMap(DescribeDeployedApiResponseBodyServiceParametersMap && serviceParametersMap) { DARABONBA_PTR_SET_RVALUE(serviceParametersMap_, serviceParametersMap) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeDeployedApiResponseBody& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // systemParameters Field Functions 
    bool hasSystemParameters() const { return this->systemParameters_ != nullptr;};
    void deleteSystemParameters() { this->systemParameters_ = nullptr;};
    inline const DescribeDeployedApiResponseBodySystemParameters & systemParameters() const { DARABONBA_PTR_GET_CONST(systemParameters_, DescribeDeployedApiResponseBodySystemParameters) };
    inline DescribeDeployedApiResponseBodySystemParameters systemParameters() { DARABONBA_PTR_GET(systemParameters_, DescribeDeployedApiResponseBodySystemParameters) };
    inline DescribeDeployedApiResponseBody& setSystemParameters(const DescribeDeployedApiResponseBodySystemParameters & systemParameters) { DARABONBA_PTR_SET_VALUE(systemParameters_, systemParameters) };
    inline DescribeDeployedApiResponseBody& setSystemParameters(DescribeDeployedApiResponseBodySystemParameters && systemParameters) { DARABONBA_PTR_SET_RVALUE(systemParameters_, systemParameters) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeDeployedApiResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The signature method used by the client. Valid values:
    // 
    // *   HmacSHA256
    // *   HmacSHA1,HmacSHA256
    std::shared_ptr<string> allowSignatureMethod_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API
    std::shared_ptr<string> apiName_ = nullptr;
    // The security authentication method of the API. Valid values:
    // 
    // *   **APP: Only authorized applications can call the API.**
    // 
    // *   **ANONYMOUS: The API can be anonymously called. In this mode, you must take note of the following rules:**
    // 
    //     *   All users who have obtained the API service information can call this API. API Gateway does not authenticate callers and cannot set user-specific throttling policies. If you make this API public, set API-specific throttling policies.
    std::shared_ptr<string> authType_ = nullptr;
    // The constant parameters.
    std::shared_ptr<DescribeDeployedApiResponseBodyConstantParameters> constantParameters_ = nullptr;
    // The custom system parameters.
    std::shared_ptr<DescribeDeployedApiResponseBodyCustomSystemParameters> customSystemParameters_ = nullptr;
    // The deployment time. Format: yyyy-mm-ddhh:mm:ss.
    std::shared_ptr<string> deployedTime_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // *   Specifies whether to set DisableInternet to **true** to limit API calls to within the VPC.
    // *   If you set DisableInternet to **false**, the limit is lifted.
    // 
    // >  If you do not set this parameter, the original value is not modified.
    std::shared_ptr<bool> disableInternet_ = nullptr;
    // The sample error codes returned by the backend service.
    // 
    // For more information, see [ErrorCodeSample](https://help.aliyun.com/document_detail/44392.html).
    std::shared_ptr<DescribeDeployedApiResponseBodyErrorCodeSamples> errorCodeSamples_ = nullptr;
    // The sample error response from the backend service.
    std::shared_ptr<string> failResultSample_ = nullptr;
    // *   Specifies whether to set **ForceNonceCheck** to **true** to force the check of X-Ca-Nonce during the request. This is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent replay attacks.
    // *   If you set **ForceNonceCheck** to **false**, the check is not performed. The default value is false when you create an API.
    std::shared_ptr<bool> forceNonceCheck_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The configuration items of the third-party OpenID Connect authentication method.
    std::shared_ptr<DescribeDeployedApiResponseBodyOpenIdConnectConfig> openIdConnectConfig_ = nullptr;
    // The region to which the API group belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Configuration items of API requests sent by the consumer to API Gateway.
    // 
    // For more information, see [RequestConfig](https://help.aliyun.com/document_detail/43985.html).
    std::shared_ptr<DescribeDeployedApiResponseBodyRequestConfig> requestConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The parameters of API requests sent by the consumer to API Gateway.
    // 
    // For more information, see [RequestParameter](https://help.aliyun.com/document_detail/43986.html).
    std::shared_ptr<DescribeDeployedApiResponseBodyRequestParameters> requestParameters_ = nullptr;
    // The return description of the API.
    std::shared_ptr<string> resultBodyModel_ = nullptr;
    // The return description of the API.
    std::shared_ptr<DescribeDeployedApiResponseBodyResultDescriptions> resultDescriptions_ = nullptr;
    // The sample response from the backend service.
    std::shared_ptr<string> resultSample_ = nullptr;
    // The format of the response from the backend service. Valid values: JSON, TEXT, BINARY, XML, and HTML. Default value: JSON.
    std::shared_ptr<string> resultType_ = nullptr;
    // The configuration items of API requests sent by API Gateway to the backend service.
    // 
    // For more information, see [ServiceConfig](https://help.aliyun.com/document_detail/43987.html).
    std::shared_ptr<DescribeDeployedApiResponseBodyServiceConfig> serviceConfig_ = nullptr;
    // The parameters of API requests sent by API Gateway to the backend service.
    // 
    // For more information, see [ServiceParameter](https://help.aliyun.com/document_detail/43988.html).
    std::shared_ptr<DescribeDeployedApiResponseBodyServiceParameters> serviceParameters_ = nullptr;
    // The mappings between parameters of requests sent by the consumer to API Gateway and parameters of requests sent by API Gateway to the backend service.
    // 
    // For more information, see [ServiceParameterMap](https://help.aliyun.com/document_detail/43989.html).
    std::shared_ptr<DescribeDeployedApiResponseBodyServiceParametersMap> serviceParametersMap_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **PRE: the pre-release environment**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
    // System parameters
    std::shared_ptr<DescribeDeployedApiResponseBodySystemParameters> systemParameters_ = nullptr;
    // Specifies whether to make the API public. Valid values:
    // 
    // *   **PUBLIC**: Make the API public. If you set this parameter to PUBLIC, this API is displayed on the APIs page for all users after the API is published to the production environment.**
    // *   **PRIVATE**: Make the API private. Private APIs are not displayed in the Alibaba Cloud Marketplace after the API group to which they belong is made available.
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
