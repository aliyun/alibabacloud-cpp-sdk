// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCELOGFIELDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCELOGFIELDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyResourceLogFieldConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStrategy, logDeliveryStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyResourceLogFieldConfigRequest() = default ;
    ModifyResourceLogFieldConfigRequest(const ModifyResourceLogFieldConfigRequest &) = default ;
    ModifyResourceLogFieldConfigRequest(ModifyResourceLogFieldConfigRequest &&) = default ;
    ModifyResourceLogFieldConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceLogFieldConfigRequest() = default ;
    ModifyResourceLogFieldConfigRequest& operator=(const ModifyResourceLogFieldConfigRequest &) = default ;
    ModifyResourceLogFieldConfigRequest& operator=(ModifyResourceLogFieldConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryType_ == nullptr
        && return this->extendConfig_ == nullptr && return this->fieldList_ == nullptr && return this->instanceId_ == nullptr && return this->logDeliveryStrategy_ == nullptr && return this->regionId_ == nullptr
        && return this->resource_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline ModifyResourceLogFieldConfigRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // extendConfig Field Functions 
    bool hasExtendConfig() const { return this->extendConfig_ != nullptr;};
    void deleteExtendConfig() { this->extendConfig_ = nullptr;};
    inline string extendConfig() const { DARABONBA_PTR_GET_DEFAULT(extendConfig_, "") };
    inline ModifyResourceLogFieldConfigRequest& setExtendConfig(string extendConfig) { DARABONBA_PTR_SET_VALUE(extendConfig_, extendConfig) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline string fieldList() const { DARABONBA_PTR_GET_DEFAULT(fieldList_, "") };
    inline ModifyResourceLogFieldConfigRequest& setFieldList(string fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyResourceLogFieldConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logDeliveryStrategy Field Functions 
    bool hasLogDeliveryStrategy() const { return this->logDeliveryStrategy_ != nullptr;};
    void deleteLogDeliveryStrategy() { this->logDeliveryStrategy_ = nullptr;};
    inline string logDeliveryStrategy() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStrategy_, "") };
    inline ModifyResourceLogFieldConfigRequest& setLogDeliveryStrategy(string logDeliveryStrategy) { DARABONBA_PTR_SET_VALUE(logDeliveryStrategy_, logDeliveryStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyResourceLogFieldConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyResourceLogFieldConfigRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyResourceLogFieldConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deliveryType_ = nullptr;
    std::shared_ptr<string> extendConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fieldList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> logDeliveryStrategy_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
