// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSourceRequestK8sSourceConfig.hpp>
#include <alibabacloud/models/CreateSourceRequestNacosSourceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(k8sSourceConfig, k8sSourceConfig_);
      DARABONBA_PTR_TO_JSON(nacosSourceConfig, nacosSourceConfig_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(k8sSourceConfig, k8sSourceConfig_);
      DARABONBA_PTR_FROM_JSON(nacosSourceConfig, nacosSourceConfig_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateSourceRequest() = default ;
    CreateSourceRequest(const CreateSourceRequest &) = default ;
    CreateSourceRequest(CreateSourceRequest &&) = default ;
    CreateSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourceRequest() = default ;
    CreateSourceRequest& operator=(const CreateSourceRequest &) = default ;
    CreateSourceRequest& operator=(CreateSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->k8sSourceConfig_ == nullptr && return this->nacosSourceConfig_ == nullptr && return this->resourceGroupId_ == nullptr && return this->type_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateSourceRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // k8sSourceConfig Field Functions 
    bool hasK8sSourceConfig() const { return this->k8sSourceConfig_ != nullptr;};
    void deleteK8sSourceConfig() { this->k8sSourceConfig_ = nullptr;};
    inline const CreateSourceRequestK8sSourceConfig & k8sSourceConfig() const { DARABONBA_PTR_GET_CONST(k8sSourceConfig_, CreateSourceRequestK8sSourceConfig) };
    inline CreateSourceRequestK8sSourceConfig k8sSourceConfig() { DARABONBA_PTR_GET(k8sSourceConfig_, CreateSourceRequestK8sSourceConfig) };
    inline CreateSourceRequest& setK8sSourceConfig(const CreateSourceRequestK8sSourceConfig & k8sSourceConfig) { DARABONBA_PTR_SET_VALUE(k8sSourceConfig_, k8sSourceConfig) };
    inline CreateSourceRequest& setK8sSourceConfig(CreateSourceRequestK8sSourceConfig && k8sSourceConfig) { DARABONBA_PTR_SET_RVALUE(k8sSourceConfig_, k8sSourceConfig) };


    // nacosSourceConfig Field Functions 
    bool hasNacosSourceConfig() const { return this->nacosSourceConfig_ != nullptr;};
    void deleteNacosSourceConfig() { this->nacosSourceConfig_ = nullptr;};
    inline const CreateSourceRequestNacosSourceConfig & nacosSourceConfig() const { DARABONBA_PTR_GET_CONST(nacosSourceConfig_, CreateSourceRequestNacosSourceConfig) };
    inline CreateSourceRequestNacosSourceConfig nacosSourceConfig() { DARABONBA_PTR_GET(nacosSourceConfig_, CreateSourceRequestNacosSourceConfig) };
    inline CreateSourceRequest& setNacosSourceConfig(const CreateSourceRequestNacosSourceConfig & nacosSourceConfig) { DARABONBA_PTR_SET_VALUE(nacosSourceConfig_, nacosSourceConfig) };
    inline CreateSourceRequest& setNacosSourceConfig(CreateSourceRequestNacosSourceConfig && nacosSourceConfig) { DARABONBA_PTR_SET_RVALUE(nacosSourceConfig_, nacosSourceConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSourceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The gateway instance ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The source configuration when the source type is K8S.
    std::shared_ptr<CreateSourceRequestK8sSourceConfig> k8sSourceConfig_ = nullptr;
    // The source configuration when the source type is MSE_NACOS.
    std::shared_ptr<CreateSourceRequestNacosSourceConfig> nacosSourceConfig_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The source type. Valid values:
    // 
    // *   MSE_NACOS: MSE Nacos
    // *   K8S: Container Service for Kubernetes (ACK)
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
