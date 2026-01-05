// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEMAINTENANCEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEMAINTENANCEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class MaintenanceWindow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MaintenanceWindow& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, MaintenanceWindow& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      MaintenanceWindow() = default ;
      MaintenanceWindow(const MaintenanceWindow &) = default ;
      MaintenanceWindow(MaintenanceWindow &&) = default ;
      MaintenanceWindow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MaintenanceWindow() = default ;
      MaintenanceWindow& operator=(const MaintenanceWindow &) = default ;
      MaintenanceWindow& operator=(MaintenanceWindow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline MaintenanceWindow& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline MaintenanceWindow& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end time of the maintenance window. The time must be on the hour. You must configure both StartTime and EndTime. The value of EndTime must be 1 to 23 hours later than the value of StartTime. Specify the time in the `HH:mm:ss` format. The time must be in UTC+8. Set the value of N to 1.
      shared_ptr<string> endTime_ {};
      // The start time of the maintenance window. The time must be on the hour. You must configure both StartTime and EndTime. The value of EndTime must be 1 to 23 hours later than the value of StartTime. Specify the time in the `HH:mm:ss` format. The time must be in UTC+8. Set the value of N to 1.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->actionOnMaintenance_ == nullptr
        && this->instanceId_ == nullptr && this->maintenanceWindow_ == nullptr && this->notifyOnMaintenance_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // actionOnMaintenance Field Functions 
    bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
    void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
    inline string getActionOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(actionOnMaintenance_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setActionOnMaintenance(string actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline ModifyInstanceMaintenanceAttributesRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline ModifyInstanceMaintenanceAttributesRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow> & getMaintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow>) };
    inline vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow> getMaintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow>) };
    inline ModifyInstanceMaintenanceAttributesRequest& setMaintenanceWindow(const vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow> & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline ModifyInstanceMaintenanceAttributesRequest& setMaintenanceWindow(vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow> && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // notifyOnMaintenance Field Functions 
    bool hasNotifyOnMaintenance() const { return this->notifyOnMaintenance_ != nullptr;};
    void deleteNotifyOnMaintenance() { this->notifyOnMaintenance_ = nullptr;};
    inline bool getNotifyOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(notifyOnMaintenance_, false) };
    inline ModifyInstanceMaintenanceAttributesRequest& setNotifyOnMaintenance(bool notifyOnMaintenance) { DARABONBA_PTR_SET_VALUE(notifyOnMaintenance_, notifyOnMaintenance) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceMaintenanceAttributesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceMaintenanceAttributesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceMaintenanceAttributesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The maintenance action. Valid values:
    // 
    // *   Stop: stops the instance.
    // *   AutoRecover: automatically recovers the instance.
    // *   AutoRedeploy: redeploys the instance, which may damage the data disks attached to the instance.
    shared_ptr<string> actionOnMaintenance_ {};
    // The ID of instance N. Valid values of N: 1 to 100.
    shared_ptr<vector<string>> instanceId_ {};
    // The maintenance windows.
    shared_ptr<vector<ModifyInstanceMaintenanceAttributesRequest::MaintenanceWindow>> maintenanceWindow_ {};
    // Specifies whether to send an event notification before maintenance. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> notifyOnMaintenance_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
