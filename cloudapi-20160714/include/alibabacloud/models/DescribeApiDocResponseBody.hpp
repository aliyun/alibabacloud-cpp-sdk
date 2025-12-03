// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiDocResponseBodyErrorCodeSamples.hpp>
#include <alibabacloud/models/DescribeApiDocResponseBodyRequestConfig.hpp>
#include <alibabacloud/models/DescribeApiDocResponseBodyRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiDocResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiDocResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_TO_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_TO_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_TO_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiDocResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_FROM_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_FROM_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_FROM_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    DescribeApiDocResponseBody() = default ;
    DescribeApiDocResponseBody(const DescribeApiDocResponseBody &) = default ;
    DescribeApiDocResponseBody(DescribeApiDocResponseBody &&) = default ;
    DescribeApiDocResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiDocResponseBody() = default ;
    DescribeApiDocResponseBody& operator=(const DescribeApiDocResponseBody &) = default ;
    DescribeApiDocResponseBody& operator=(DescribeApiDocResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->authType_ == nullptr && return this->deployedTime_ == nullptr && return this->description_ == nullptr && return this->disableInternet_ == nullptr
        && return this->errorCodeSamples_ == nullptr && return this->failResultSample_ == nullptr && return this->forceNonceCheck_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->regionId_ == nullptr && return this->requestConfig_ == nullptr && return this->requestId_ == nullptr && return this->requestParameters_ == nullptr && return this->resultSample_ == nullptr
        && return this->resultType_ == nullptr && return this->stageName_ == nullptr && return this->visibility_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiDocResponseBody& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiDocResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeApiDocResponseBody& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // deployedTime Field Functions 
    bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
    void deleteDeployedTime() { this->deployedTime_ = nullptr;};
    inline string deployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
    inline DescribeApiDocResponseBody& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiDocResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool disableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline DescribeApiDocResponseBody& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline const DescribeApiDocResponseBodyErrorCodeSamples & errorCodeSamples() const { DARABONBA_PTR_GET_CONST(errorCodeSamples_, DescribeApiDocResponseBodyErrorCodeSamples) };
    inline DescribeApiDocResponseBodyErrorCodeSamples errorCodeSamples() { DARABONBA_PTR_GET(errorCodeSamples_, DescribeApiDocResponseBodyErrorCodeSamples) };
    inline DescribeApiDocResponseBody& setErrorCodeSamples(const DescribeApiDocResponseBodyErrorCodeSamples & errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };
    inline DescribeApiDocResponseBody& setErrorCodeSamples(DescribeApiDocResponseBodyErrorCodeSamples && errorCodeSamples) { DARABONBA_PTR_SET_RVALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string failResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline DescribeApiDocResponseBody& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool forceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline DescribeApiDocResponseBody& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiDocResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiDocResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiDocResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestConfig Field Functions 
    bool hasRequestConfig() const { return this->requestConfig_ != nullptr;};
    void deleteRequestConfig() { this->requestConfig_ = nullptr;};
    inline const DescribeApiDocResponseBodyRequestConfig & requestConfig() const { DARABONBA_PTR_GET_CONST(requestConfig_, DescribeApiDocResponseBodyRequestConfig) };
    inline DescribeApiDocResponseBodyRequestConfig requestConfig() { DARABONBA_PTR_GET(requestConfig_, DescribeApiDocResponseBodyRequestConfig) };
    inline DescribeApiDocResponseBody& setRequestConfig(const DescribeApiDocResponseBodyRequestConfig & requestConfig) { DARABONBA_PTR_SET_VALUE(requestConfig_, requestConfig) };
    inline DescribeApiDocResponseBody& setRequestConfig(DescribeApiDocResponseBodyRequestConfig && requestConfig) { DARABONBA_PTR_SET_RVALUE(requestConfig_, requestConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiDocResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline const DescribeApiDocResponseBodyRequestParameters & requestParameters() const { DARABONBA_PTR_GET_CONST(requestParameters_, DescribeApiDocResponseBodyRequestParameters) };
    inline DescribeApiDocResponseBodyRequestParameters requestParameters() { DARABONBA_PTR_GET(requestParameters_, DescribeApiDocResponseBodyRequestParameters) };
    inline DescribeApiDocResponseBody& setRequestParameters(const DescribeApiDocResponseBodyRequestParameters & requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };
    inline DescribeApiDocResponseBody& setRequestParameters(DescribeApiDocResponseBodyRequestParameters && requestParameters) { DARABONBA_PTR_SET_RVALUE(requestParameters_, requestParameters) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string resultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline DescribeApiDocResponseBody& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline DescribeApiDocResponseBody& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApiDocResponseBody& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApiDocResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API
    std::shared_ptr<string> apiName_ = nullptr;
    // The security authentication method. Valid values: APP, ANONYMOUS, and APPOPENID, indicating respectively Alibaba Cloud application authentication, anonymous authentication, and third-party OpenID Connect account authentication.
    std::shared_ptr<string> authType_ = nullptr;
    // The publishing time.
    std::shared_ptr<string> deployedTime_ = nullptr;
    // The API description.
    std::shared_ptr<string> description_ = nullptr;
    // *   Specifies whether to set **DisableInternet** to **true** to limit API calls to within the VPC.
    // *   If you set **DisableInternet** to **false**, the limit is lifted. The default value is false when you create an API.
    std::shared_ptr<bool> disableInternet_ = nullptr;
    // The sample error codes returned by the backend service.
    std::shared_ptr<DescribeApiDocResponseBodyErrorCodeSamples> errorCodeSamples_ = nullptr;
    // The sample error response from the backend service.
    std::shared_ptr<string> failResultSample_ = nullptr;
    // *   Specifies whether to set **ForceNonceCheck** to **true** to force the check of X-Ca-Nonce during the request. This is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent replay attacks.
    // *   If you set **ForceNonceCheck** to **false**, the check is not performed. The default value is false when you create an API.
    std::shared_ptr<bool> forceNonceCheck_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The region ID of the API group.
    std::shared_ptr<string> regionId_ = nullptr;
    // The returned API frontend definition. It is an array consisting of RequestConfig data.
    std::shared_ptr<DescribeApiDocResponseBodyRequestConfig> requestConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned frontend input parameters in the API. It is an array consisting of RequestParameter data.
    std::shared_ptr<DescribeApiDocResponseBodyRequestParameters> requestParameters_ = nullptr;
    // The sample response.
    std::shared_ptr<string> resultSample_ = nullptr;
    // The return value type.
    std::shared_ptr<string> resultType_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
    // Indicates whether the API is public. Valid values: PUBLIC and PRIVATE.
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
