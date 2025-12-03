// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveryConfig, discoveryConfig_);
      DARABONBA_PTR_TO_JSON(EdasConfig, edasConfig_);
      DARABONBA_PTR_TO_JSON(EventBridgeConfig, eventBridgeConfig_);
      DARABONBA_PTR_TO_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_TO_JSON(HttpTargetHostName, httpTargetHostName_);
      DARABONBA_PTR_TO_JSON(MockConfig, mockConfig_);
      DARABONBA_PTR_TO_JSON(OssConfig, ossConfig_);
      DARABONBA_PTR_TO_JSON(ServiceAddress, serviceAddress_);
      DARABONBA_PTR_TO_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveryConfig, discoveryConfig_);
      DARABONBA_PTR_FROM_JSON(EdasConfig, edasConfig_);
      DARABONBA_PTR_FROM_JSON(EventBridgeConfig, eventBridgeConfig_);
      DARABONBA_PTR_FROM_JSON(FunctionComputeConfig, functionComputeConfig_);
      DARABONBA_PTR_FROM_JSON(HttpTargetHostName, httpTargetHostName_);
      DARABONBA_PTR_FROM_JSON(MockConfig, mockConfig_);
      DARABONBA_PTR_FROM_JSON(OssConfig, ossConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceAddress, serviceAddress_);
      DARABONBA_PTR_FROM_JSON(ServiceTimeout, serviceTimeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveryConfig_ == nullptr
        && return this->edasConfig_ == nullptr && return this->eventBridgeConfig_ == nullptr && return this->functionComputeConfig_ == nullptr && return this->httpTargetHostName_ == nullptr && return this->mockConfig_ == nullptr
        && return this->ossConfig_ == nullptr && return this->serviceAddress_ == nullptr && return this->serviceTimeout_ == nullptr && return this->type_ == nullptr && return this->vpcConfig_ == nullptr; };
    // discoveryConfig Field Functions 
    bool hasDiscoveryConfig() const { return this->discoveryConfig_ != nullptr;};
    void deleteDiscoveryConfig() { this->discoveryConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig & discoveryConfig() const { DARABONBA_PTR_GET_CONST(discoveryConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig discoveryConfig() { DARABONBA_PTR_GET(discoveryConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setDiscoveryConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig & discoveryConfig) { DARABONBA_PTR_SET_VALUE(discoveryConfig_, discoveryConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setDiscoveryConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig && discoveryConfig) { DARABONBA_PTR_SET_RVALUE(discoveryConfig_, discoveryConfig) };


    // edasConfig Field Functions 
    bool hasEdasConfig() const { return this->edasConfig_ != nullptr;};
    void deleteEdasConfig() { this->edasConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig & edasConfig() const { DARABONBA_PTR_GET_CONST(edasConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig edasConfig() { DARABONBA_PTR_GET(edasConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setEdasConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig & edasConfig) { DARABONBA_PTR_SET_VALUE(edasConfig_, edasConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setEdasConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig && edasConfig) { DARABONBA_PTR_SET_RVALUE(edasConfig_, edasConfig) };


    // eventBridgeConfig Field Functions 
    bool hasEventBridgeConfig() const { return this->eventBridgeConfig_ != nullptr;};
    void deleteEventBridgeConfig() { this->eventBridgeConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig & eventBridgeConfig() const { DARABONBA_PTR_GET_CONST(eventBridgeConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig eventBridgeConfig() { DARABONBA_PTR_GET(eventBridgeConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setEventBridgeConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig & eventBridgeConfig) { DARABONBA_PTR_SET_VALUE(eventBridgeConfig_, eventBridgeConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setEventBridgeConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig && eventBridgeConfig) { DARABONBA_PTR_SET_RVALUE(eventBridgeConfig_, eventBridgeConfig) };


    // functionComputeConfig Field Functions 
    bool hasFunctionComputeConfig() const { return this->functionComputeConfig_ != nullptr;};
    void deleteFunctionComputeConfig() { this->functionComputeConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig & functionComputeConfig() const { DARABONBA_PTR_GET_CONST(functionComputeConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig functionComputeConfig() { DARABONBA_PTR_GET(functionComputeConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setFunctionComputeConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig & functionComputeConfig) { DARABONBA_PTR_SET_VALUE(functionComputeConfig_, functionComputeConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setFunctionComputeConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig && functionComputeConfig) { DARABONBA_PTR_SET_RVALUE(functionComputeConfig_, functionComputeConfig) };


    // httpTargetHostName Field Functions 
    bool hasHttpTargetHostName() const { return this->httpTargetHostName_ != nullptr;};
    void deleteHttpTargetHostName() { this->httpTargetHostName_ = nullptr;};
    inline string httpTargetHostName() const { DARABONBA_PTR_GET_DEFAULT(httpTargetHostName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setHttpTargetHostName(string httpTargetHostName) { DARABONBA_PTR_SET_VALUE(httpTargetHostName_, httpTargetHostName) };


    // mockConfig Field Functions 
    bool hasMockConfig() const { return this->mockConfig_ != nullptr;};
    void deleteMockConfig() { this->mockConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig & mockConfig() const { DARABONBA_PTR_GET_CONST(mockConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig mockConfig() { DARABONBA_PTR_GET(mockConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setMockConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig & mockConfig) { DARABONBA_PTR_SET_VALUE(mockConfig_, mockConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setMockConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig && mockConfig) { DARABONBA_PTR_SET_RVALUE(mockConfig_, mockConfig) };


    // ossConfig Field Functions 
    bool hasOssConfig() const { return this->ossConfig_ != nullptr;};
    void deleteOssConfig() { this->ossConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig & ossConfig() const { DARABONBA_PTR_GET_CONST(ossConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig ossConfig() { DARABONBA_PTR_GET(ossConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setOssConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig & ossConfig) { DARABONBA_PTR_SET_VALUE(ossConfig_, ossConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setOssConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig && ossConfig) { DARABONBA_PTR_SET_RVALUE(ossConfig_, ossConfig) };


    // serviceAddress Field Functions 
    bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
    void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
    inline string serviceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


    // serviceTimeout Field Functions 
    bool hasServiceTimeout() const { return this->serviceTimeout_ != nullptr;};
    void deleteServiceTimeout() { this->serviceTimeout_ = nullptr;};
    inline int32_t serviceTimeout() const { DARABONBA_PTR_GET_DEFAULT(serviceTimeout_, 0) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setServiceTimeout(int32_t serviceTimeout) { DARABONBA_PTR_SET_VALUE(serviceTimeout_, serviceTimeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig & vpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig vpcConfig() { DARABONBA_PTR_GET(vpcConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setVpcConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig& setVpcConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    // The information about the backend service when the backend service is of the Service Discovery type.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigDiscoveryConfig> discoveryConfig_ = nullptr;
    // The EDAS configuration.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig> edasConfig_ = nullptr;
    // The information about the backend service whose type is EventBridge.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig> eventBridgeConfig_ = nullptr;
    // The information about the backend service whose type is Function Compute.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig> functionComputeConfig_ = nullptr;
    // The host of the HTTP backend service.
    std::shared_ptr<string> httpTargetHostName_ = nullptr;
    // The information about the backend service when the backend service is of the Mock type.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigMockConfig> mockConfig_ = nullptr;
    // The information about the backend service whose type is Object Storage Service (OSS).
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigOssConfig> ossConfig_ = nullptr;
    // The URL of the backend service.
    std::shared_ptr<string> serviceAddress_ = nullptr;
    // The timeout period of the backend service, in millisecond.
    std::shared_ptr<int32_t> serviceTimeout_ = nullptr;
    // The type of the backend service.
    std::shared_ptr<string> type_ = nullptr;
    // The information about the backend service when the backend service is of the VPC type.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigVpcConfig> vpcConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
