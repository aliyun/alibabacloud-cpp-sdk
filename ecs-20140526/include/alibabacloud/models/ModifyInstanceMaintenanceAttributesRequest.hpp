// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEMAINTENANCEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEMAINTENANCEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceMaintenanceAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceMaintenanceAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaintenanceWindow, maintenanceWindow_);
      DARABONBA_PTR_TO_JSON(NotifyOnMaintenance, notifyOnMaintenance_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceMaintenanceAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaintenanceWindow, maintenanceWindow_);
      DARABONBA_PTR_FROM_JSON(NotifyOnMaintenance, notifyOnMaintenance_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyInstanceMaintenanceAttributesRequest() = default ;
    ModifyInstanceMaintenanceAttributesRequest(const ModifyInstanceMaintenanceAttributesRequest &) = default ;
    ModifyInstanceMaintenanceAttributesRequest(ModifyInstanceMaintenanceAttributesRequest &&) = default ;
    ModifyInstanceMaintenanceAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceMaintenanceAttributesRequest() = default ;
    ModifyInstanceMaintenanceAttributesRequest& operator=(const ModifyInstanceMaintenanceAttributesRequest &) = default ;
    ModifyInstanceMaintenanceAttributesRequest& operator=(ModifyInstanceMaintenanceAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionOnMaintenance_ != nullptr
        && this->instanceId_ != nullptr && this->maintenanceWindow_ != nullptr && this->notifyOnMaintenance_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // actionOnMaintenance Field Functions 
    bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
    void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
    inline string actionOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(actionOnMaintenance_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setActionOnMaintenance(string actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline ModifyInstanceMaintenanceAttributesRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline ModifyInstanceMaintenanceAttributesRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const vector<ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow> & maintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, vector<ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow>) };
    inline vector<ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow> maintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, vector<ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow>) };
    inline ModifyInstanceMaintenanceAttributesRequest& setMaintenanceWindow(const vector<ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow> & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline ModifyInstanceMaintenanceAttributesRequest& setMaintenanceWindow(vector<ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow> && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // notifyOnMaintenance Field Functions 
    bool hasNotifyOnMaintenance() const { return this->notifyOnMaintenance_ != nullptr;};
    void deleteNotifyOnMaintenance() { this->notifyOnMaintenance_ = nullptr;};
    inline bool notifyOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(notifyOnMaintenance_, false) };
    inline ModifyInstanceMaintenanceAttributesRequest& setNotifyOnMaintenance(bool notifyOnMaintenance) { DARABONBA_PTR_SET_VALUE(notifyOnMaintenance_, notifyOnMaintenance) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceMaintenanceAttributesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceMaintenanceAttributesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The maintenance action. Valid values:
    // 
    // *   Stop: stops the instance.
    // *   AutoRecover: automatically recovers the instance.
    // *   AutoRedeploy: redeploys the instance, which may damage the data disks attached to the instance.
    std::shared_ptr<string> actionOnMaintenance_ = nullptr;
    // The ID of instance N. Valid values of N: 1 to 100.
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
    // The maintenance windows.
    std::shared_ptr<vector<ModifyInstanceMaintenanceAttributesRequestMaintenanceWindow>> maintenanceWindow_ = nullptr;
    // Specifies whether to send an event notification before maintenance. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> notifyOnMaintenance_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
