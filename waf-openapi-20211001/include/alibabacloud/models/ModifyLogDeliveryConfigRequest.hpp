// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGDELIVERYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGDELIVERYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyLogDeliveryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLogDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryDetail, deliveryDetail_);
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLogDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryDetail, deliveryDetail_);
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyLogDeliveryConfigRequest() = default ;
    ModifyLogDeliveryConfigRequest(const ModifyLogDeliveryConfigRequest &) = default ;
    ModifyLogDeliveryConfigRequest(ModifyLogDeliveryConfigRequest &&) = default ;
    ModifyLogDeliveryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLogDeliveryConfigRequest() = default ;
    ModifyLogDeliveryConfigRequest& operator=(const ModifyLogDeliveryConfigRequest &) = default ;
    ModifyLogDeliveryConfigRequest& operator=(ModifyLogDeliveryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryDetail_ == nullptr
        && return this->deliveryName_ == nullptr && return this->deliveryType_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // deliveryDetail Field Functions 
    bool hasDeliveryDetail() const { return this->deliveryDetail_ != nullptr;};
    void deleteDeliveryDetail() { this->deliveryDetail_ = nullptr;};
    inline string deliveryDetail() const { DARABONBA_PTR_GET_DEFAULT(deliveryDetail_, "") };
    inline ModifyLogDeliveryConfigRequest& setDeliveryDetail(string deliveryDetail) { DARABONBA_PTR_SET_VALUE(deliveryDetail_, deliveryDetail) };


    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string deliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline ModifyLogDeliveryConfigRequest& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline ModifyLogDeliveryConfigRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyLogDeliveryConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLogDeliveryConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyLogDeliveryConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The content of the log delivery configuration. Set the value to a JSON string that contains multiple parameters.
    // 
    // >  This parameter is the same as the **DeliveryDetail** parameter of the **CreateLogDeliveryConfig** operation. For more information, see **Parameter description for log delivery configuration** of the [CreateLogDeliveryConfig](~~CreateLogDeliveryConfig~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryDetail_ = nullptr;
    // The name of the log delivery configuration that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryName_ = nullptr;
    // The type of the log delivery configuration that you want to modify. Valid values:
    // 
    // *   **syslog**: Logs are delivered to a syslog service.
    // *   **kafka**: Logs are delivered to a Kafka service.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryType_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
