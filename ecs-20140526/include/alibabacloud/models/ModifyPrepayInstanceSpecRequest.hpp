// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
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
  class ModifyPrepayInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MigrateAcrossZone, migrateAcrossZone_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_TO_JSON(RebootWhenFinished, rebootWhenFinished_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MigrateAcrossZone, migrateAcrossZone_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_FROM_JSON(RebootWhenFinished, rebootWhenFinished_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest(ModifyPrepayInstanceSpecRequest &&) = default ;
    ModifyPrepayInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest& operator=(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest& operator=(ModifyPrepayInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Disk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Disk& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Disk& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      };
      Disk() = default ;
      Disk(const Disk &) = default ;
      Disk(Disk &&) = default ;
      Disk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Disk() = default ;
      Disk& operator=(const Disk &) = default ;
      Disk& operator=(Disk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->diskId_ == nullptr && this->performanceLevel_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Disk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline Disk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline Disk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    protected:
      // >  This parameter is not publicly available.
      shared_ptr<string> category_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> diskId_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> performanceLevel_ {};
    };

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    protected:
      // The new category of the system disk. Valid values:
      // 
      // *   cloud_efficiency: utra disk
      // *   cloud_ssd: standard SSD
      // 
      // >  This parameter takes effect on an instance only when you change from a [retired instance type](https://help.aliyun.com/document_detail/55263.html) to an instance type in an [instance family available for purchase](https://help.aliyun.com/document_detail/25378.html) and upgrade the instance from a non-I/O optimized instance type to an I/O optimized instance type.
      shared_ptr<string> category_ {};
    };

    virtual bool empty() const override { return this->systemDisk_ == nullptr
        && this->autoPay_ == nullptr && this->clientToken_ == nullptr && this->disk_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr
        && this->instanceType_ == nullptr && this->migrateAcrossZone_ == nullptr && this->modifyMode_ == nullptr && this->operatorType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->rebootTime_ == nullptr && this->rebootWhenFinished_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const ModifyPrepayInstanceSpecRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, ModifyPrepayInstanceSpecRequest::SystemDisk) };
    inline ModifyPrepayInstanceSpecRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, ModifyPrepayInstanceSpecRequest::SystemDisk) };
    inline ModifyPrepayInstanceSpecRequest& setSystemDisk(const ModifyPrepayInstanceSpecRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline ModifyPrepayInstanceSpecRequest& setSystemDisk(ModifyPrepayInstanceSpecRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyPrepayInstanceSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyPrepayInstanceSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline const vector<ModifyPrepayInstanceSpecRequest::Disk> & getDisk() const { DARABONBA_PTR_GET_CONST(disk_, vector<ModifyPrepayInstanceSpecRequest::Disk>) };
    inline vector<ModifyPrepayInstanceSpecRequest::Disk> getDisk() { DARABONBA_PTR_GET(disk_, vector<ModifyPrepayInstanceSpecRequest::Disk>) };
    inline ModifyPrepayInstanceSpecRequest& setDisk(const vector<ModifyPrepayInstanceSpecRequest::Disk> & disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };
    inline ModifyPrepayInstanceSpecRequest& setDisk(vector<ModifyPrepayInstanceSpecRequest::Disk> && disk) { DARABONBA_PTR_SET_RVALUE(disk_, disk) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyPrepayInstanceSpecRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPrepayInstanceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyPrepayInstanceSpecRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // migrateAcrossZone Field Functions 
    bool hasMigrateAcrossZone() const { return this->migrateAcrossZone_ != nullptr;};
    void deleteMigrateAcrossZone() { this->migrateAcrossZone_ = nullptr;};
    inline bool getMigrateAcrossZone() const { DARABONBA_PTR_GET_DEFAULT(migrateAcrossZone_, false) };
    inline ModifyPrepayInstanceSpecRequest& setMigrateAcrossZone(bool migrateAcrossZone) { DARABONBA_PTR_SET_VALUE(migrateAcrossZone_, migrateAcrossZone) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyPrepayInstanceSpecRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ModifyPrepayInstanceSpecRequest& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPrepayInstanceSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPrepayInstanceSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // rebootTime Field Functions 
    bool hasRebootTime() const { return this->rebootTime_ != nullptr;};
    void deleteRebootTime() { this->rebootTime_ = nullptr;};
    inline string getRebootTime() const { DARABONBA_PTR_GET_DEFAULT(rebootTime_, "") };
    inline ModifyPrepayInstanceSpecRequest& setRebootTime(string rebootTime) { DARABONBA_PTR_SET_VALUE(rebootTime_, rebootTime) };


    // rebootWhenFinished Field Functions 
    bool hasRebootWhenFinished() const { return this->rebootWhenFinished_ != nullptr;};
    void deleteRebootWhenFinished() { this->rebootWhenFinished_ = nullptr;};
    inline bool getRebootWhenFinished() const { DARABONBA_PTR_GET_DEFAULT(rebootWhenFinished_, false) };
    inline ModifyPrepayInstanceSpecRequest& setRebootWhenFinished(bool rebootWhenFinished) { DARABONBA_PTR_SET_VALUE(rebootWhenFinished_, rebootWhenFinished) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPrepayInstanceSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPrepayInstanceSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPrepayInstanceSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<ModifyPrepayInstanceSpecRequest::SystemDisk> systemDisk_ {};
    // Specifies whether to enable automatic payment when you upgrade the instance type. Valid values:
    // 
    // *   true: The payment is automatically completed.
    // *   false: An order is generated but no payment is made.
    // 
    // Default value: true.
    // 
    // > 
    // 
    // *   Make sure that your account balance is sufficient. Otherwise, your order becomes invalid and must be canceled.
    // 
    // *   If your account balance is insufficient, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can log on to the ECS console to pay for the order.
    // 
    // *   If you set `OperatorType` to `downgrade`, `AutoPay` is ignored.
    shared_ptr<bool> autoPay_ {};
    // The client token that you want to use to ensure the idempotency of the request. You can use the client to generate the value, but make sure that the value is unique among different requests. This value allows only ASCII characters and is up to 64 characters in length. For more information, see [How do I ensure the idempotence of a request?](https://help.aliyun.com/document_detail/25693.html)
    shared_ptr<string> clientToken_ {};
    // >  This parameter is not publicly available.
    shared_ptr<vector<ModifyPrepayInstanceSpecRequest::Disk>> disk_ {};
    // The end time of the temporary change. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The new instance type. For information about available instance types, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // Specifies whether to allow cross-cluster instance type upgrade. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // When you set `MigrateAcrossZone` to `true` and you upgrade the instance type of an instance based on the returned information, take note of the following items:
    // 
    // Instance that resides in the classic network:
    // 
    // *   For [retired instance types](https://help.aliyun.com/document_detail/55263.html), when a non-I/O optimized instance is upgraded to an I/O optimized instance, the private IP address, disk device names, and software authorization codes of the instance change. For a Linux instance, basic disks (cloud) are identified as xvd\\* such as xvda and xvdb, and ultra disks (cloud_efficiency) and standard SSDs (cloud_ssd) are identified as vd\\* such as vda and vdb.
    // *   For [instance families available for purchase](https://help.aliyun.com/document_detail/25378.html), when the instance type of an instance is changed, the private IP address of the instance changes.
    // 
    // Instance that resides in a virtual private cloud (VPC): For [retired instance types](https://help.aliyun.com/document_detail/55263.html), when a non-I/O optimized instance is upgraded to an I/O optimized instance, the disk device names and software authorization codes of the instance change. For a Linux instance, basic disks (cloud) are identified as xvd\\* such as xvda and xvdb, and ultra disks (cloud_efficiency) and standard SSDs (cloud_ssd) are identified as vd\\* such as vda and vdb.
    shared_ptr<bool> migrateAcrossZone_ {};
    // >  This parameter is not publicly available.
    shared_ptr<string> modifyMode_ {};
    // The type of the change to the instance. Valid values:
    // 
    // >  This parameter is optional. The system can automatically determine whether the instance change is an upgrade or a downgrade. If you want to specify this parameter, refer to the following valid values of the parameter.
    // 
    // *   upgrade: upgrades the instance type. Make sure that the balance in your account is sufficient.
    // *   downgrade: downgrades the instance type. When the new instance type specified by the `InstanceType` parameter has lower specifications than the current instance type, set `OperatorType` to downgrade.
    // 
    // >  You can refer to the preceding usage notes on how to upgrade or downgrade the instance type.
    shared_ptr<string> operatorType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The restart time of the instance. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> rebootTime_ {};
    // Specifies whether to restart the instance immediately after the instance type is changed. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  If the instance is in the **Stopped** state, the instance remains in the Stopped state and no operations are performed, regardless of whether `RebootWhenFinished` is set to true.
    shared_ptr<bool> rebootWhenFinished_ {};
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
