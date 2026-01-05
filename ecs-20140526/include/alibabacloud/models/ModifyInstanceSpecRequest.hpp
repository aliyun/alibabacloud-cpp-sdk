// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
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
  class ModifyInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Temporary, temporary_);
      DARABONBA_PTR_TO_JSON(AllowMigrateAcrossZone, allowMigrateAcrossZone_);
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Temporary, temporary_);
      DARABONBA_PTR_FROM_JSON(AllowMigrateAcrossZone, allowMigrateAcrossZone_);
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest(ModifyInstanceSpecRequest &&) = default ;
    ModifyInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest& operator=(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest& operator=(ModifyInstanceSpecRequest &&) = default ;
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
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> category_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> diskId_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> performanceLevel_ {};
    };

    class Temporary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Temporary& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Temporary& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Temporary() = default ;
      Temporary(const Temporary &) = default ;
      Temporary(Temporary &&) = default ;
      Temporary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Temporary() = default ;
      Temporary& operator=(const Temporary &) = default ;
      Temporary& operator=(Temporary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->internetMaxBandwidthOut_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Temporary& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // internetMaxBandwidthOut Field Functions 
      bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
      void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
      inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
      inline Temporary& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Temporary& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> endTime_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<int32_t> internetMaxBandwidthOut_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> startTime_ {};
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
      // *   cloud_efficiency: ultra disk
      // *   cloud_ssd: standard SSD
      // 
      // >  This parameter takes effect only when you upgrade a non-I/O optimized instance of [a retired instance type](https://help.aliyun.com/document_detail/55263.html) to an I/O optimized instance of [an instance type available for purchase](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> category_ {};
    };

    virtual bool empty() const override { return this->systemDisk_ == nullptr
        && this->temporary_ == nullptr && this->allowMigrateAcrossZone_ == nullptr && this->async_ == nullptr && this->clientToken_ == nullptr && this->disk_ == nullptr
        && this->dryRun_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr
        && this->modifyMode_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const ModifyInstanceSpecRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, ModifyInstanceSpecRequest::SystemDisk) };
    inline ModifyInstanceSpecRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, ModifyInstanceSpecRequest::SystemDisk) };
    inline ModifyInstanceSpecRequest& setSystemDisk(const ModifyInstanceSpecRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline ModifyInstanceSpecRequest& setSystemDisk(ModifyInstanceSpecRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // temporary Field Functions 
    bool hasTemporary() const { return this->temporary_ != nullptr;};
    void deleteTemporary() { this->temporary_ = nullptr;};
    inline const ModifyInstanceSpecRequest::Temporary & getTemporary() const { DARABONBA_PTR_GET_CONST(temporary_, ModifyInstanceSpecRequest::Temporary) };
    inline ModifyInstanceSpecRequest::Temporary getTemporary() { DARABONBA_PTR_GET(temporary_, ModifyInstanceSpecRequest::Temporary) };
    inline ModifyInstanceSpecRequest& setTemporary(const ModifyInstanceSpecRequest::Temporary & temporary) { DARABONBA_PTR_SET_VALUE(temporary_, temporary) };
    inline ModifyInstanceSpecRequest& setTemporary(ModifyInstanceSpecRequest::Temporary && temporary) { DARABONBA_PTR_SET_RVALUE(temporary_, temporary) };


    // allowMigrateAcrossZone Field Functions 
    bool hasAllowMigrateAcrossZone() const { return this->allowMigrateAcrossZone_ != nullptr;};
    void deleteAllowMigrateAcrossZone() { this->allowMigrateAcrossZone_ = nullptr;};
    inline bool getAllowMigrateAcrossZone() const { DARABONBA_PTR_GET_DEFAULT(allowMigrateAcrossZone_, false) };
    inline ModifyInstanceSpecRequest& setAllowMigrateAcrossZone(bool allowMigrateAcrossZone) { DARABONBA_PTR_SET_VALUE(allowMigrateAcrossZone_, allowMigrateAcrossZone) };


    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline ModifyInstanceSpecRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInstanceSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline const vector<ModifyInstanceSpecRequest::Disk> & getDisk() const { DARABONBA_PTR_GET_CONST(disk_, vector<ModifyInstanceSpecRequest::Disk>) };
    inline vector<ModifyInstanceSpecRequest::Disk> getDisk() { DARABONBA_PTR_GET(disk_, vector<ModifyInstanceSpecRequest::Disk>) };
    inline ModifyInstanceSpecRequest& setDisk(const vector<ModifyInstanceSpecRequest::Disk> & disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };
    inline ModifyInstanceSpecRequest& setDisk(vector<ModifyInstanceSpecRequest::Disk> && disk) { DARABONBA_PTR_SET_RVALUE(disk_, disk) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyInstanceSpecRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyInstanceSpecRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline ModifyInstanceSpecRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline ModifyInstanceSpecRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyInstanceSpecRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<ModifyInstanceSpecRequest::SystemDisk> systemDisk_ {};
    shared_ptr<ModifyInstanceSpecRequest::Temporary> temporary_ {};
    // Specifies whether to allow cross-cluster instance type upgrade. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // When you set `AllowMigrateAcrossZone` to true and upgrade the instance based on the returned information, take note of the following items:
    // 
    // Instance that resides in the classic network:
    // 
    // *   For [retired instance types](https://help.aliyun.com/document_detail/55263.html), when a non-I/O optimized instance is upgraded to an I/O optimized instance, the private IP address, disk device names, and software authorization codes of the instance change. For a Linux instance, basic disks (`cloud`) are identified as xvd\\* such as **xvda** and **xvdb**, and ultra disks (`cloud_efficiency`) and standard SSDs (`cloud_ssd`) are identified as vd\\* such as **vda** and **vdb**.
    // *   For [instance families available for purchase](https://help.aliyun.com/document_detail/25378.html), when the instance type of an instance is changed, the private IP address of the instance changes.
    // 
    // Instance that resides in a virtual private cloud (VPC): For [retired instance types](https://help.aliyun.com/document_detail/55263.html), when a non-I/O optimized instance is upgraded to an I/O optimized instance, the disk device names and software authorization codes of the instance change. For a Linux instance, basic disks (`cloud`) are identified as xvd\\* such as **xvda** and **xvdb**, and ultra disks (`cloud_efficiency`) and standard SSDs (`cloud_ssd`) are identified as vd\\* such as **vda** and **vdb**.
    shared_ptr<bool> allowMigrateAcrossZone_ {};
    // Specifies whether to submit an asynchronous request. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> async_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. **The token can contain only ASCII characters and cannot exceed 64 characters in length.** For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // >  This parameter is in invitational preview and is not publicly available.
    shared_ptr<vector<ModifyInstanceSpecRequest::Disk>> disk_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and unavailable ECS resources. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   false (default): performs a dry run and performs the actual request.
    shared_ptr<bool> dryRun_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The new instance type. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the most recent instance type list.
    shared_ptr<string> instanceType_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // *   When the purchased outbound public bandwidth is less than or equal to 10 Mbit/s, the valid value of this parameter ranges from 1 to 10 and the default value is 10.
    // *   When the purchased outbound public bandwidth is greater than 10 Mbit/s, the valid values of this parameter are 1 to the `InternetMaxBandwidthOut` value and the default value is the `InternetMaxBandwidthOut` value.
    // 
    // > When the **pay-by-traffic** billing method for network usage is used, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios where demand outstrips resource supplies, these maximum bandwidth values may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // > When the **pay-by-traffic** billing method for network usage is used, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios where demand outstrips resource supplies, these maximum bandwidth values may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // >  This parameter is not publicly available.
    shared_ptr<string> modifyMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
