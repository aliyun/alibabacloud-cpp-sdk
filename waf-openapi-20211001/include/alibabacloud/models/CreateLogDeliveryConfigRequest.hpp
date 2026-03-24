// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGDELIVERYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGDELIVERYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateLogDeliveryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryDetail, deliveryDetail_);
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryDetail, deliveryDetail_);
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    CreateLogDeliveryConfigRequest() = default ;
    CreateLogDeliveryConfigRequest(const CreateLogDeliveryConfigRequest &) = default ;
    CreateLogDeliveryConfigRequest(CreateLogDeliveryConfigRequest &&) = default ;
    CreateLogDeliveryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogDeliveryConfigRequest() = default ;
    CreateLogDeliveryConfigRequest& operator=(const CreateLogDeliveryConfigRequest &) = default ;
    CreateLogDeliveryConfigRequest& operator=(CreateLogDeliveryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryDetail_ == nullptr
        && this->deliveryName_ == nullptr && this->deliveryType_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // deliveryDetail Field Functions 
    bool hasDeliveryDetail() const { return this->deliveryDetail_ != nullptr;};
    void deleteDeliveryDetail() { this->deliveryDetail_ = nullptr;};
    inline string getDeliveryDetail() const { DARABONBA_PTR_GET_DEFAULT(deliveryDetail_, "") };
    inline CreateLogDeliveryConfigRequest& setDeliveryDetail(string deliveryDetail) { DARABONBA_PTR_SET_VALUE(deliveryDetail_, deliveryDetail) };


    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string getDeliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline CreateLogDeliveryConfigRequest& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline CreateLogDeliveryConfigRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateLogDeliveryConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLogDeliveryConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateLogDeliveryConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The details of the log delivery configuration. The value is a JSON string that is generated from a series of parameters.
    // 
    // > The parameters vary based on the value of **DeliveryType**. For more information, see **Parameters for log delivery configuration details**.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryDetail_ {};
    // The name of the log delivery configuration.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryName_ {};
    // The type of the log delivery configuration. Valid values:
    // 
    // - **syslog**: Delivers logs to a syslog service.
    // 
    // - **kafka**: Delivers logs to a Kafka service.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryType_ {};
    // The ID of the WAF instance.
    // 
    // > Call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
