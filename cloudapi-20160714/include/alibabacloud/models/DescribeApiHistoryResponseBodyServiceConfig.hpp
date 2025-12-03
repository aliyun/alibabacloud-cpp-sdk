// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceConfigMockHeaders.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceConfigOssConfig.hpp>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceConfigVpcConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ContentTypeCatagory, contentTypeCatagory_);
      DARABONBA_PTR_TO_JSON(ContentTypeValue, contentTypeValue_);
      DARABONBA_PTR_TO_JSON(EventBridgeConfig, eventBridgeConfig_);
      DARABONBA_PTR_TO_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_TO_JSON(Mock, mock_);
      DARABONBA_PTR_TO_JSON(MockHeaders, mockHeaders_);
      DARABONBA_PTR_TO_JSON(MockResult, mockResult_);
      DARABONBA_PTR_TO_JSON(MockStatusCode, mockStatusCode_);
      DARABONBA_PTR_TO_JSON(OssConfig, ossConfig_);
      DARABONBA_PTR_TO_JSON(ServiceAddress, serviceAddress_);
      DARABONBA_PTR_TO_JSON(ServiceHttpMethod, serviceHttpMethod_);
      DARABONBA_PTR_TO_JSON(ServicePath, servicePath_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_TO_JSON(ServiceVpcEnable, serviceVpcEnable_);
      DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentTypeCatagory, contentTypeCatagory_);
      DARABONBA_PTR_FROM_JSON(ContentTypeValue, contentTypeValue_);
      DARABONBA_PTR_FROM_JSON(EventBridgeConfig, eventBridgeConfig_);
      DARABONBA_PTR_FROM_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_FROM_JSON(Mock, mock_);
      DARABONBA_PTR_FROM_JSON(MockHeaders, mockHeaders_);
      DARABONBA_PTR_FROM_JSON(MockResult, mockResult_);
      DARABONBA_PTR_FROM_JSON(MockStatusCode, mockStatusCode_);
      DARABONBA_PTR_FROM_JSON(OssConfig, ossConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceAddress, serviceAddress_);
      DARABONBA_PTR_FROM_JSON(ServiceHttpMethod, serviceHttpMethod_);
      DARABONBA_PTR_FROM_JSON(ServicePath, servicePath_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_FROM_JSON(ServiceVpcEnable, serviceVpcEnable_);
      DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeApiHistoryResponseBodyServiceConfig() = default ;
    DescribeApiHistoryResponseBodyServiceConfig(const DescribeApiHistoryResponseBodyServiceConfig &) = default ;
    DescribeApiHistoryResponseBodyServiceConfig(DescribeApiHistoryResponseBodyServiceConfig &&) = default ;
    DescribeApiHistoryResponseBodyServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyServiceConfig() = default ;
    DescribeApiHistoryResponseBodyServiceConfig& operator=(const DescribeApiHistoryResponseBodyServiceConfig &) = default ;
    DescribeApiHistoryResponseBodyServiceConfig& operator=(DescribeApiHistoryResponseBodyServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentTypeCatagory_ == nullptr
        && return this->contentTypeValue_ == nullptr && return this->eventBridgeConfig_ == nullptr && return this->functionComputeConfig_ == nullptr && return this->mock_ == nullptr && return this->mockHeaders_ == nullptr
        && return this->mockResult_ == nullptr && return this->mockStatusCode_ == nullptr && return this->ossConfig_ == nullptr && return this->serviceAddress_ == nullptr && return this->serviceHttpMethod_ == nullptr
        && return this->servicePath_ == nullptr && return this->serviceProtocol_ == nullptr && return this->serviceTimeout_ == nullptr && return this->serviceVpcEnable_ == nullptr && return this->vpcConfig_ == nullptr
        && return this->vpcId_ == nullptr; };
    // contentTypeCatagory Field Functions 
    bool hasContentTypeCatagory() const { return this->contentTypeCatagory_ != nullptr;};
    void deleteContentTypeCatagory() { this->contentTypeCatagory_ = nullptr;};
    inline string contentTypeCatagory() const { DARABONBA_PTR_GET_DEFAULT(contentTypeCatagory_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setContentTypeCatagory(string contentTypeCatagory) { DARABONBA_PTR_SET_VALUE(contentTypeCatagory_, contentTypeCatagory) };


    // contentTypeValue Field Functions 
    bool hasContentTypeValue() const { return this->contentTypeValue_ != nullptr;};
    void deleteContentTypeValue() { this->contentTypeValue_ = nullptr;};
    inline string contentTypeValue() const { DARABONBA_PTR_GET_DEFAULT(contentTypeValue_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setContentTypeValue(string contentTypeValue) { DARABONBA_PTR_SET_VALUE(contentTypeValue_, contentTypeValue) };


    // eventBridgeConfig Field Functions 
    bool hasEventBridgeConfig() const { return this->eventBridgeConfig_ != nullptr;};
    void deleteEventBridgeConfig() { this->eventBridgeConfig_ = nullptr;};
    inline const Models::DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig & eventBridgeConfig() const { DARABONBA_PTR_GET_CONST(eventBridgeConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig) };
    inline Models::DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig eventBridgeConfig() { DARABONBA_PTR_GET(eventBridgeConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setEventBridgeConfig(const Models::DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig & eventBridgeConfig) { DARABONBA_PTR_SET_VALUE(eventBridgeConfig_, eventBridgeConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setEventBridgeConfig(Models::DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig && eventBridgeConfig) { DARABONBA_PTR_SET_RVALUE(eventBridgeConfig_, eventBridgeConfig) };


    // functionComputeConfig Field Functions 
    bool hasFunctionComputeConfig() const { return this->functionComputeConfig_ != nullptr;};
    void deleteFunctionComputeConfig() { this->functionComputeConfig_ = nullptr;};
    inline const Models::DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig & functionComputeConfig() const { DARABONBA_PTR_GET_CONST(functionComputeConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig) };
    inline Models::DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig functionComputeConfig() { DARABONBA_PTR_GET(functionComputeConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setFunctionComputeConfig(const Models::DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig & functionComputeConfig) { DARABONBA_PTR_SET_VALUE(functionComputeConfig_, functionComputeConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setFunctionComputeConfig(Models::DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig && functionComputeConfig) { DARABONBA_PTR_SET_RVALUE(functionComputeConfig_, functionComputeConfig) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline string mock() const { DARABONBA_PTR_GET_DEFAULT(mock_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setMock(string mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };


    // mockHeaders Field Functions 
    bool hasMockHeaders() const { return this->mockHeaders_ != nullptr;};
    void deleteMockHeaders() { this->mockHeaders_ = nullptr;};
    inline const Models::DescribeApiHistoryResponseBodyServiceConfigMockHeaders & mockHeaders() const { DARABONBA_PTR_GET_CONST(mockHeaders_, Models::DescribeApiHistoryResponseBodyServiceConfigMockHeaders) };
    inline Models::DescribeApiHistoryResponseBodyServiceConfigMockHeaders mockHeaders() { DARABONBA_PTR_GET(mockHeaders_, Models::DescribeApiHistoryResponseBodyServiceConfigMockHeaders) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setMockHeaders(const Models::DescribeApiHistoryResponseBodyServiceConfigMockHeaders & mockHeaders) { DARABONBA_PTR_SET_VALUE(mockHeaders_, mockHeaders) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setMockHeaders(Models::DescribeApiHistoryResponseBodyServiceConfigMockHeaders && mockHeaders) { DARABONBA_PTR_SET_RVALUE(mockHeaders_, mockHeaders) };


    // mockResult Field Functions 
    bool hasMockResult() const { return this->mockResult_ != nullptr;};
    void deleteMockResult() { this->mockResult_ = nullptr;};
    inline string mockResult() const { DARABONBA_PTR_GET_DEFAULT(mockResult_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setMockResult(string mockResult) { DARABONBA_PTR_SET_VALUE(mockResult_, mockResult) };


    // mockStatusCode Field Functions 
    bool hasMockStatusCode() const { return this->mockStatusCode_ != nullptr;};
    void deleteMockStatusCode() { this->mockStatusCode_ = nullptr;};
    inline int32_t mockStatusCode() const { DARABONBA_PTR_GET_DEFAULT(mockStatusCode_, 0) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setMockStatusCode(int32_t mockStatusCode) { DARABONBA_PTR_SET_VALUE(mockStatusCode_, mockStatusCode) };


    // ossConfig Field Functions 
    bool hasOssConfig() const { return this->ossConfig_ != nullptr;};
    void deleteOssConfig() { this->ossConfig_ = nullptr;};
    inline const Models::DescribeApiHistoryResponseBodyServiceConfigOssConfig & ossConfig() const { DARABONBA_PTR_GET_CONST(ossConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigOssConfig) };
    inline Models::DescribeApiHistoryResponseBodyServiceConfigOssConfig ossConfig() { DARABONBA_PTR_GET(ossConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigOssConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setOssConfig(const Models::DescribeApiHistoryResponseBodyServiceConfigOssConfig & ossConfig) { DARABONBA_PTR_SET_VALUE(ossConfig_, ossConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setOssConfig(Models::DescribeApiHistoryResponseBodyServiceConfigOssConfig && ossConfig) { DARABONBA_PTR_SET_RVALUE(ossConfig_, ossConfig) };


    // serviceAddress Field Functions 
    bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
    void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
    inline string serviceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


    // serviceHttpMethod Field Functions 
    bool hasServiceHttpMethod() const { return this->serviceHttpMethod_ != nullptr;};
    void deleteServiceHttpMethod() { this->serviceHttpMethod_ = nullptr;};
    inline string serviceHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(serviceHttpMethod_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setServiceHttpMethod(string serviceHttpMethod) { DARABONBA_PTR_SET_VALUE(serviceHttpMethod_, serviceHttpMethod) };


    // servicePath Field Functions 
    bool hasServicePath() const { return this->servicePath_ != nullptr;};
    void deleteServicePath() { this->servicePath_ = nullptr;};
    inline string servicePath() const { DARABONBA_PTR_GET_DEFAULT(servicePath_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setServicePath(string servicePath) { DARABONBA_PTR_SET_VALUE(servicePath_, servicePath) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // serviceTimeout Field Functions 
    bool hasServiceTimeout() const { return this->serviceTimeout_ != nullptr;};
    void deleteServiceTimeout() { this->serviceTimeout_ = nullptr;};
    inline int32_t serviceTimeout() const { DARABONBA_PTR_GET_DEFAULT(serviceTimeout_, 0) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setServiceTimeout(int32_t serviceTimeout) { DARABONBA_PTR_SET_VALUE(serviceTimeout_, serviceTimeout) };


    // serviceVpcEnable Field Functions 
    bool hasServiceVpcEnable() const { return this->serviceVpcEnable_ != nullptr;};
    void deleteServiceVpcEnable() { this->serviceVpcEnable_ = nullptr;};
    inline string serviceVpcEnable() const { DARABONBA_PTR_GET_DEFAULT(serviceVpcEnable_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setServiceVpcEnable(string serviceVpcEnable) { DARABONBA_PTR_SET_VALUE(serviceVpcEnable_, serviceVpcEnable) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const Models::DescribeApiHistoryResponseBodyServiceConfigVpcConfig & vpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigVpcConfig) };
    inline Models::DescribeApiHistoryResponseBodyServiceConfigVpcConfig vpcConfig() { DARABONBA_PTR_GET(vpcConfig_, Models::DescribeApiHistoryResponseBodyServiceConfigVpcConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setVpcConfig(const Models::DescribeApiHistoryResponseBodyServiceConfigVpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline DescribeApiHistoryResponseBodyServiceConfig& setVpcConfig(Models::DescribeApiHistoryResponseBodyServiceConfigVpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeApiHistoryResponseBodyServiceConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ContentType header type used when you call the backend service over HTTP.
    // 
    // *   DEFAULT: the default header type in API Gateway
    // *   CUSTOM: a custom header type
    // *   CLIENT: the ContentType header type of the client
    std::shared_ptr<string> contentTypeCatagory_ = nullptr;
    // The value of the ContentType header when the ServiceProtocol parameter is set to HTTP and the ContentTypeCatagory parameter is set to DEFAULT or CUSTOM.
    std::shared_ptr<string> contentTypeValue_ = nullptr;
    // Configuration items of EventBridge
    std::shared_ptr<Models::DescribeApiHistoryResponseBodyServiceConfigEventBridgeConfig> eventBridgeConfig_ = nullptr;
    // Backend configuration items when the backend service is Function Compute
    std::shared_ptr<Models::DescribeApiHistoryResponseBodyServiceConfigFunctionComputeConfig> functionComputeConfig_ = nullptr;
    // Specifies whether to enable the MOCK mode. Valid values:
    // 
    // *   TRUE: The Mock mode is enabled.
    // *   FALSE: The Mock mode is not enabled.
    std::shared_ptr<string> mock_ = nullptr;
    // The simulated Headers.
    std::shared_ptr<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeaders> mockHeaders_ = nullptr;
    // The result returned when the Mock mode is enabled.
    std::shared_ptr<string> mockResult_ = nullptr;
    // The status code returned for service mocking.
    std::shared_ptr<int32_t> mockStatusCode_ = nullptr;
    // Information when the backend service is OSS
    std::shared_ptr<Models::DescribeApiHistoryResponseBodyServiceConfigOssConfig> ossConfig_ = nullptr;
    // The URL used to call the backend service.
    std::shared_ptr<string> serviceAddress_ = nullptr;
    // The HTTP request method used when calling the backend service. Valid values: PUT, GET, POST, DELETE, PATCH, HEAD, OPTIONS, and ANY.
    std::shared_ptr<string> serviceHttpMethod_ = nullptr;
    // The path used when you call the backend service.
    std::shared_ptr<string> servicePath_ = nullptr;
    // The backend service protocol. Currently, only HTTP, HTTPS, and FunctionCompute are supported.
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    // The timeout period of the backend service, in millisecond.
    std::shared_ptr<int32_t> serviceTimeout_ = nullptr;
    // Specifies whether to enable the VPC channel. Valid values:
    // 
    // *   TRUE: The VPC channel is enabled.
    // *   FALSE: The VPC channel is not enabled.
    // 
    // You must create the corresponding VPC access authorization before you can enable a VPC channel.
    std::shared_ptr<string> serviceVpcEnable_ = nullptr;
    // Configuration items related to VPC channels
    std::shared_ptr<Models::DescribeApiHistoryResponseBodyServiceConfigVpcConfig> vpcConfig_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
