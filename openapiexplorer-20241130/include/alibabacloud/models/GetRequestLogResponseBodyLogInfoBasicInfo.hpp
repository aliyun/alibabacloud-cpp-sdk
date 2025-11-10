// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoBasicInfoApiDoc.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoBasicInfoProductName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBodyLogInfoBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBodyLogInfoBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_PTR_TO_JSON(apiDoc, apiDoc_);
      DARABONBA_PTR_TO_JSON(apiStyle, apiStyle_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(gatewayProcessTime, gatewayProcessTime_);
      DARABONBA_PTR_TO_JSON(httpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(logRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestDuration, requestDuration_);
      DARABONBA_PTR_TO_JSON(sdkRequestTime, sdkRequestTime_);
      DARABONBA_PTR_TO_JSON(throttlingResult, throttlingResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBodyLogInfoBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_PTR_FROM_JSON(apiDoc, apiDoc_);
      DARABONBA_PTR_FROM_JSON(apiStyle, apiStyle_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(gatewayProcessTime, gatewayProcessTime_);
      DARABONBA_PTR_FROM_JSON(httpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(logRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestDuration, requestDuration_);
      DARABONBA_PTR_FROM_JSON(sdkRequestTime, sdkRequestTime_);
      DARABONBA_PTR_FROM_JSON(throttlingResult, throttlingResult_);
    };
    GetRequestLogResponseBodyLogInfoBasicInfo() = default ;
    GetRequestLogResponseBodyLogInfoBasicInfo(const GetRequestLogResponseBodyLogInfoBasicInfo &) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfo(GetRequestLogResponseBodyLogInfoBasicInfo &&) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBodyLogInfoBasicInfo() = default ;
    GetRequestLogResponseBodyLogInfoBasicInfo& operator=(const GetRequestLogResponseBodyLogInfoBasicInfo &) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfo& operator=(GetRequestLogResponseBodyLogInfoBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->api_ == nullptr && return this->apiDoc_ == nullptr && return this->apiStyle_ == nullptr && return this->apiVersion_ == nullptr && return this->endpoint_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->gatewayProcessTime_ == nullptr && return this->httpMethod_ == nullptr && return this->httpStatusCode_ == nullptr
        && return this->logRequestId_ == nullptr && return this->product_ == nullptr && return this->productName_ == nullptr && return this->regionId_ == nullptr && return this->requestDuration_ == nullptr
        && return this->sdkRequestTime_ == nullptr && return this->throttlingResult_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const Models::GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, Models::GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail) };
    inline Models::GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, Models::GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail) };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setAccessDeniedDetail(const Models::GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setAccessDeniedDetail(Models::GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiDoc Field Functions 
    bool hasApiDoc() const { return this->apiDoc_ != nullptr;};
    void deleteApiDoc() { this->apiDoc_ = nullptr;};
    inline const Models::GetRequestLogResponseBodyLogInfoBasicInfoApiDoc & apiDoc() const { DARABONBA_PTR_GET_CONST(apiDoc_, Models::GetRequestLogResponseBodyLogInfoBasicInfoApiDoc) };
    inline Models::GetRequestLogResponseBodyLogInfoBasicInfoApiDoc apiDoc() { DARABONBA_PTR_GET(apiDoc_, Models::GetRequestLogResponseBodyLogInfoBasicInfoApiDoc) };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setApiDoc(const Models::GetRequestLogResponseBodyLogInfoBasicInfoApiDoc & apiDoc) { DARABONBA_PTR_SET_VALUE(apiDoc_, apiDoc) };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setApiDoc(Models::GetRequestLogResponseBodyLogInfoBasicInfoApiDoc && apiDoc) { DARABONBA_PTR_SET_RVALUE(apiDoc_, apiDoc) };


    // apiStyle Field Functions 
    bool hasApiStyle() const { return this->apiStyle_ != nullptr;};
    void deleteApiStyle() { this->apiStyle_ = nullptr;};
    inline string apiStyle() const { DARABONBA_PTR_GET_DEFAULT(apiStyle_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setApiStyle(string apiStyle) { DARABONBA_PTR_SET_VALUE(apiStyle_, apiStyle) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gatewayProcessTime Field Functions 
    bool hasGatewayProcessTime() const { return this->gatewayProcessTime_ != nullptr;};
    void deleteGatewayProcessTime() { this->gatewayProcessTime_ = nullptr;};
    inline string gatewayProcessTime() const { DARABONBA_PTR_GET_DEFAULT(gatewayProcessTime_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setGatewayProcessTime(string gatewayProcessTime) { DARABONBA_PTR_SET_VALUE(gatewayProcessTime_, gatewayProcessTime) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string logRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline const Models::GetRequestLogResponseBodyLogInfoBasicInfoProductName & productName() const { DARABONBA_PTR_GET_CONST(productName_, Models::GetRequestLogResponseBodyLogInfoBasicInfoProductName) };
    inline Models::GetRequestLogResponseBodyLogInfoBasicInfoProductName productName() { DARABONBA_PTR_GET(productName_, Models::GetRequestLogResponseBodyLogInfoBasicInfoProductName) };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setProductName(const Models::GetRequestLogResponseBodyLogInfoBasicInfoProductName & productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setProductName(Models::GetRequestLogResponseBodyLogInfoBasicInfoProductName && productName) { DARABONBA_PTR_SET_RVALUE(productName_, productName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestDuration Field Functions 
    bool hasRequestDuration() const { return this->requestDuration_ != nullptr;};
    void deleteRequestDuration() { this->requestDuration_ = nullptr;};
    inline string requestDuration() const { DARABONBA_PTR_GET_DEFAULT(requestDuration_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setRequestDuration(string requestDuration) { DARABONBA_PTR_SET_VALUE(requestDuration_, requestDuration) };


    // sdkRequestTime Field Functions 
    bool hasSdkRequestTime() const { return this->sdkRequestTime_ != nullptr;};
    void deleteSdkRequestTime() { this->sdkRequestTime_ = nullptr;};
    inline string sdkRequestTime() const { DARABONBA_PTR_GET_DEFAULT(sdkRequestTime_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setSdkRequestTime(string sdkRequestTime) { DARABONBA_PTR_SET_VALUE(sdkRequestTime_, sdkRequestTime) };


    // throttlingResult Field Functions 
    bool hasThrottlingResult() const { return this->throttlingResult_ != nullptr;};
    void deleteThrottlingResult() { this->throttlingResult_ = nullptr;};
    inline string throttlingResult() const { DARABONBA_PTR_GET_DEFAULT(throttlingResult_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfo& setThrottlingResult(string throttlingResult) { DARABONBA_PTR_SET_VALUE(throttlingResult_, throttlingResult) };


  protected:
    // The error message returned if the operator does not have the required permissions. This parameter is available only if an authentication error is reported for the request ID.
    std::shared_ptr<Models::GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> api_ = nullptr;
    // The information about the API documentation.
    std::shared_ptr<Models::GetRequestLogResponseBodyLogInfoBasicInfoApiDoc> apiDoc_ = nullptr;
    // The API style. Valid values: roa and rpc.
    std::shared_ptr<string> apiStyle_ = nullptr;
    // The version of the API.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // The endpoint of the service region.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The error code in the log. This parameter is left empty if no error is reported in the API call.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message in the log. This parameter is left empty if no error is reported in the API call.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the gateway receives the request. Indicate the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> gatewayProcessTime_ = nullptr;
    // The HTTP request method. Valid values: GET, PUT, and POST.
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The HTTP status code in the log.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> logRequestId_ = nullptr;
    // The product code.
    std::shared_ptr<string> product_ = nullptr;
    // The product name, which includes the Chinese name and English name.
    std::shared_ptr<Models::GetRequestLogResponseBodyLogInfoBasicInfoProductName> productName_ = nullptr;
    // The service region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The duration from when the gateway receives the request to when the client receives a response. Unit: milliseconds.
    std::shared_ptr<string> requestDuration_ = nullptr;
    // The time when the request is initiated. Indicate the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> sdkRequestTime_ = nullptr;
    // The throttling result. Valid values: FC.PASS: The task is not blocked by throttling. FC.DENY: The task is blocked by throttling.
    std::shared_ptr<string> throttlingResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
