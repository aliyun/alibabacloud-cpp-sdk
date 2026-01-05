// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGDELIVERYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGDELIVERYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DeleteLogDeliveryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DeleteLogDeliveryConfigRequest() = default ;
    DeleteLogDeliveryConfigRequest(const DeleteLogDeliveryConfigRequest &) = default ;
    DeleteLogDeliveryConfigRequest(DeleteLogDeliveryConfigRequest &&) = default ;
    DeleteLogDeliveryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogDeliveryConfigRequest() = default ;
    DeleteLogDeliveryConfigRequest& operator=(const DeleteLogDeliveryConfigRequest &) = default ;
    DeleteLogDeliveryConfigRequest& operator=(DeleteLogDeliveryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryName_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // deliveryName Field Functions 
    bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
    void deleteDeliveryName() { this->deliveryName_ = nullptr;};
    inline string getDeliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
    inline DeleteLogDeliveryConfigRequest& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteLogDeliveryConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLogDeliveryConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DeleteLogDeliveryConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> deliveryName_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
