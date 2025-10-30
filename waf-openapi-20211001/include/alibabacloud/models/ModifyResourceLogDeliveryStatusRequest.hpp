// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCELOGDELIVERYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCELOGDELIVERYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyResourceLogDeliveryStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceLogDeliveryStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceLogDeliveryStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyResourceLogDeliveryStatusRequest() = default ;
    ModifyResourceLogDeliveryStatusRequest(const ModifyResourceLogDeliveryStatusRequest &) = default ;
    ModifyResourceLogDeliveryStatusRequest(ModifyResourceLogDeliveryStatusRequest &&) = default ;
    ModifyResourceLogDeliveryStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceLogDeliveryStatusRequest() = default ;
    ModifyResourceLogDeliveryStatusRequest& operator=(const ModifyResourceLogDeliveryStatusRequest &) = default ;
    ModifyResourceLogDeliveryStatusRequest& operator=(ModifyResourceLogDeliveryStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryName_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->resource_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr && return this->status_ == nullptr; };
    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string deliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline ModifyResourceLogDeliveryStatusRequest& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyResourceLogDeliveryStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyResourceLogDeliveryStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyResourceLogDeliveryStatusRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyResourceLogDeliveryStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ModifyResourceLogDeliveryStatusRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> deliveryName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
