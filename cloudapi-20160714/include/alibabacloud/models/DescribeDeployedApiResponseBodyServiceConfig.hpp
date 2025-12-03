// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceConfigMockHeaders.hpp>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceConfigVpcConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_TO_JSON(Mock, mock_);
      DARABONBA_PTR_TO_JSON(MockHeaders, mockHeaders_);
      DARABONBA_PTR_TO_JSON(MockResult, mockResult_);
      DARABONBA_PTR_TO_JSON(MockStatusCode, mockStatusCode_);
      DARABONBA_PTR_TO_JSON(ServiceAddress, serviceAddress_);
      DARABONBA_PTR_TO_JSON(ServiceHttpMethod, serviceHttpMethod_);
      DARABONBA_PTR_TO_JSON(ServicePath, servicePath_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_TO_JSON(ServiceVpcEnable, serviceVpcEnable_);
      DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_FROM_JSON(Mock, mock_);
      DARABONBA_PTR_FROM_JSON(MockHeaders, mockHeaders_);
      DARABONBA_PTR_FROM_JSON(MockResult, mockResult_);
      DARABONBA_PTR_FROM_JSON(MockStatusCode, mockStatusCode_);
      DARABONBA_PTR_FROM_JSON(ServiceAddress, serviceAddress_);
      DARABONBA_PTR_FROM_JSON(ServiceHttpMethod, serviceHttpMethod_);
      DARABONBA_PTR_FROM_JSON(ServicePath, servicePath_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_FROM_JSON(ServiceVpcEnable, serviceVpcEnable_);
      DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeDeployedApiResponseBodyServiceConfig() = default ;
    DescribeDeployedApiResponseBodyServiceConfig(const DescribeDeployedApiResponseBodyServiceConfig &) = default ;
    DescribeDeployedApiResponseBodyServiceConfig(DescribeDeployedApiResponseBodyServiceConfig &&) = default ;
    DescribeDeployedApiResponseBodyServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyServiceConfig() = default ;
    DescribeDeployedApiResponseBodyServiceConfig& operator=(const DescribeDeployedApiResponseBodyServiceConfig &) = default ;
    DescribeDeployedApiResponseBodyServiceConfig& operator=(DescribeDeployedApiResponseBodyServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionComputeConfig_ == nullptr
        && return this->mock_ == nullptr && return this->mockHeaders_ == nullptr && return this->mockResult_ == nullptr && return this->mockStatusCode_ == nullptr && return this->serviceAddress_ == nullptr
        && return this->serviceHttpMethod_ == nullptr && return this->servicePath_ == nullptr && return this->serviceProtocol_ == nullptr && return this->serviceTimeout_ == nullptr && return this->serviceVpcEnable_ == nullptr
        && return this->vpcConfig_ == nullptr && return this->vpcId_ == nullptr; };
    // functionComputeConfig Field Functions 
    bool hasFunctionComputeConfig() const { return this->functionComputeConfig_ != nullptr;};
    void deleteFunctionComputeConfig() { this->functionComputeConfig_ = nullptr;};
    inline const Models::DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig & functionComputeConfig() const { DARABONBA_PTR_GET_CONST(functionComputeConfig_, Models::DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig) };
    inline Models::DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig functionComputeConfig() { DARABONBA_PTR_GET(functionComputeConfig_, Models::DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setFunctionComputeConfig(const Models::DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig & functionComputeConfig) { DARABONBA_PTR_SET_VALUE(functionComputeConfig_, functionComputeConfig) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setFunctionComputeConfig(Models::DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig && functionComputeConfig) { DARABONBA_PTR_SET_RVALUE(functionComputeConfig_, functionComputeConfig) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline string mock() const { DARABONBA_PTR_GET_DEFAULT(mock_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setMock(string mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };


    // mockHeaders Field Functions 
    bool hasMockHeaders() const { return this->mockHeaders_ != nullptr;};
    void deleteMockHeaders() { this->mockHeaders_ = nullptr;};
    inline const Models::DescribeDeployedApiResponseBodyServiceConfigMockHeaders & mockHeaders() const { DARABONBA_PTR_GET_CONST(mockHeaders_, Models::DescribeDeployedApiResponseBodyServiceConfigMockHeaders) };
    inline Models::DescribeDeployedApiResponseBodyServiceConfigMockHeaders mockHeaders() { DARABONBA_PTR_GET(mockHeaders_, Models::DescribeDeployedApiResponseBodyServiceConfigMockHeaders) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setMockHeaders(const Models::DescribeDeployedApiResponseBodyServiceConfigMockHeaders & mockHeaders) { DARABONBA_PTR_SET_VALUE(mockHeaders_, mockHeaders) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setMockHeaders(Models::DescribeDeployedApiResponseBodyServiceConfigMockHeaders && mockHeaders) { DARABONBA_PTR_SET_RVALUE(mockHeaders_, mockHeaders) };


    // mockResult Field Functions 
    bool hasMockResult() const { return this->mockResult_ != nullptr;};
    void deleteMockResult() { this->mockResult_ = nullptr;};
    inline string mockResult() const { DARABONBA_PTR_GET_DEFAULT(mockResult_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setMockResult(string mockResult) { DARABONBA_PTR_SET_VALUE(mockResult_, mockResult) };


    // mockStatusCode Field Functions 
    bool hasMockStatusCode() const { return this->mockStatusCode_ != nullptr;};
    void deleteMockStatusCode() { this->mockStatusCode_ = nullptr;};
    inline int32_t mockStatusCode() const { DARABONBA_PTR_GET_DEFAULT(mockStatusCode_, 0) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setMockStatusCode(int32_t mockStatusCode) { DARABONBA_PTR_SET_VALUE(mockStatusCode_, mockStatusCode) };


    // serviceAddress Field Functions 
    bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
    void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
    inline string serviceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


    // serviceHttpMethod Field Functions 
    bool hasServiceHttpMethod() const { return this->serviceHttpMethod_ != nullptr;};
    void deleteServiceHttpMethod() { this->serviceHttpMethod_ = nullptr;};
    inline string serviceHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(serviceHttpMethod_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setServiceHttpMethod(string serviceHttpMethod) { DARABONBA_PTR_SET_VALUE(serviceHttpMethod_, serviceHttpMethod) };


    // servicePath Field Functions 
    bool hasServicePath() const { return this->servicePath_ != nullptr;};
    void deleteServicePath() { this->servicePath_ = nullptr;};
    inline string servicePath() const { DARABONBA_PTR_GET_DEFAULT(servicePath_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setServicePath(string servicePath) { DARABONBA_PTR_SET_VALUE(servicePath_, servicePath) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // serviceTimeout Field Functions 
    bool hasServiceTimeout() const { return this->serviceTimeout_ != nullptr;};
    void deleteServiceTimeout() { this->serviceTimeout_ = nullptr;};
    inline int32_t serviceTimeout() const { DARABONBA_PTR_GET_DEFAULT(serviceTimeout_, 0) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setServiceTimeout(int32_t serviceTimeout) { DARABONBA_PTR_SET_VALUE(serviceTimeout_, serviceTimeout) };


    // serviceVpcEnable Field Functions 
    bool hasServiceVpcEnable() const { return this->serviceVpcEnable_ != nullptr;};
    void deleteServiceVpcEnable() { this->serviceVpcEnable_ = nullptr;};
    inline string serviceVpcEnable() const { DARABONBA_PTR_GET_DEFAULT(serviceVpcEnable_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setServiceVpcEnable(string serviceVpcEnable) { DARABONBA_PTR_SET_VALUE(serviceVpcEnable_, serviceVpcEnable) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const Models::DescribeDeployedApiResponseBodyServiceConfigVpcConfig & vpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, Models::DescribeDeployedApiResponseBodyServiceConfigVpcConfig) };
    inline Models::DescribeDeployedApiResponseBodyServiceConfigVpcConfig vpcConfig() { DARABONBA_PTR_GET(vpcConfig_, Models::DescribeDeployedApiResponseBodyServiceConfigVpcConfig) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setVpcConfig(const Models::DescribeDeployedApiResponseBodyServiceConfigVpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline DescribeDeployedApiResponseBodyServiceConfig& setVpcConfig(Models::DescribeDeployedApiResponseBodyServiceConfigVpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDeployedApiResponseBodyServiceConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Backend configuration items when the backend service is Function Compute
    std::shared_ptr<Models::DescribeDeployedApiResponseBodyServiceConfigFunctionComputeConfig> functionComputeConfig_ = nullptr;
    // Specifies whether to enable the Mock mode. Valid values:
    // 
    // *   **TRUE: The Mock mode is enabled.**
    // *   **FALSE: The Mock mode is not enabled.
    std::shared_ptr<string> mock_ = nullptr;
    // The simulated Headers.
    std::shared_ptr<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeaders> mockHeaders_ = nullptr;
    // The result returned when the Mock mode is enabled.
    std::shared_ptr<string> mockResult_ = nullptr;
    // The status code returned for service mocking.
    std::shared_ptr<int32_t> mockStatusCode_ = nullptr;
    // The URL used to call the back-end service. If the complete back-end service URL is `http://api.a.com:8080/object/add?key1=value1&key2=value2`, the value of ServiceAddress is **http://api.a.com:8080**.``
    std::shared_ptr<string> serviceAddress_ = nullptr;
    // The HTTP method used to call a backend service. Valid values: GET, POST, DELETE, PUT, HEADER, TRACE, PATCH, CONNECT, and OPTIONS.
    std::shared_ptr<string> serviceHttpMethod_ = nullptr;
    std::shared_ptr<string> servicePath_ = nullptr;
    // The backend service protocol. Currently, only HTTP, HTTPS, and FunctionCompute are supported.
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    // The timeout period of the backend service, in millisecond.
    std::shared_ptr<int32_t> serviceTimeout_ = nullptr;
    // Specifies whether to enable the VPC channel. Valid values:
    // 
    // *   **TRUE**: The VPC channel is enabled. You must create the corresponding VPC access authorization before you can enable a VPC channel.
    // *   **FALSE**: The VPC channel is not enabled.
    std::shared_ptr<string> serviceVpcEnable_ = nullptr;
    // Configuration items related to VPC channels
    std::shared_ptr<Models::DescribeDeployedApiResponseBodyServiceConfigVpcConfig> vpcConfig_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
