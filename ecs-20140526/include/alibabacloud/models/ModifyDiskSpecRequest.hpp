// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDiskSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PerformanceControlOptions, performanceControlOptions_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PerformanceControlOptions, performanceControlOptions_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDiskSpecRequest() = default ;
    ModifyDiskSpecRequest(const ModifyDiskSpecRequest &) = default ;
    ModifyDiskSpecRequest(ModifyDiskSpecRequest &&) = default ;
    ModifyDiskSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskSpecRequest() = default ;
    ModifyDiskSpecRequest& operator=(const ModifyDiskSpecRequest &) = default ;
    ModifyDiskSpecRequest& operator=(ModifyDiskSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PerformanceControlOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PerformanceControlOptions& obj) { 
        DARABONBA_PTR_TO_JSON(IOPS, IOPS_);
        DARABONBA_PTR_TO_JSON(Recover, recover_);
        DARABONBA_PTR_TO_JSON(Throughput, throughput_);
      };
      friend void from_json(const Darabonba::Json& j, PerformanceControlOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(IOPS, IOPS_);
        DARABONBA_PTR_FROM_JSON(Recover, recover_);
        DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
      };
      PerformanceControlOptions() = default ;
      PerformanceControlOptions(const PerformanceControlOptions &) = default ;
      PerformanceControlOptions(PerformanceControlOptions &&) = default ;
      PerformanceControlOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PerformanceControlOptions() = default ;
      PerformanceControlOptions& operator=(const PerformanceControlOptions &) = default ;
      PerformanceControlOptions& operator=(PerformanceControlOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IOPS_ == nullptr
        && this->recover_ == nullptr && this->throughput_ == nullptr; };
      // IOPS Field Functions 
      bool hasIOPS() const { return this->IOPS_ != nullptr;};
      void deleteIOPS() { this->IOPS_ = nullptr;};
      inline int32_t getIOPS() const { DARABONBA_PTR_GET_DEFAULT(IOPS_, 0) };
      inline PerformanceControlOptions& setIOPS(int32_t IOPS) { DARABONBA_PTR_SET_VALUE(IOPS_, IOPS) };


      // recover Field Functions 
      bool hasRecover() const { return this->recover_ != nullptr;};
      void deleteRecover() { this->recover_ = nullptr;};
      inline string getRecover() const { DARABONBA_PTR_GET_DEFAULT(recover_, "") };
      inline PerformanceControlOptions& setRecover(string recover) { DARABONBA_PTR_SET_VALUE(recover_, recover) };


      // throughput Field Functions 
      bool hasThroughput() const { return this->throughput_ != nullptr;};
      void deleteThroughput() { this->throughput_ = nullptr;};
      inline int32_t getThroughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0) };
      inline PerformanceControlOptions& setThroughput(int32_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


    protected:
      // The target IOPS of the disk. Only the IOPS of disks in a dedicated storage cluster can be modified.
      // 
      // Valid values: 900 to the maximum IOPS per disk, in increments of 100.
      // 
      // 
      // For more information, see [Disk performance](https://help.aliyun.com/document_detail/25382.html).
      shared_ptr<int32_t> IOPS_ {};
      // Resets the disk performance. Only disks in a dedicated storage cluster are supported.
      // 
      // If this parameter is specified, the PerformanceControlOptions.IOPS and PerformanceControlOptions.Throughput parameters do not take effect.
      // 
      // 
      // The only valid value is All, which resets the disk IOPS and throughput to their initial values.
      shared_ptr<string> recover_ {};
      // The target throughput of the disk. Only the throughput of disks in a dedicated storage cluster can be modified. Unit: MB/s.
      // 
      // Valid values: 60 to the maximum throughput per disk.
      // 
      // For more information, see [Disk performance](https://help.aliyun.com/document_detail/25382.html).
      shared_ptr<int32_t> throughput_ {};
    };

    virtual bool empty() const override { return this->destinationZoneId_ == nullptr
        && this->diskCategory_ == nullptr && this->diskId_ == nullptr && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->performanceControlOptions_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // destinationZoneId Field Functions 
    bool hasDestinationZoneId() const { return this->destinationZoneId_ != nullptr;};
    void deleteDestinationZoneId() { this->destinationZoneId_ = nullptr;};
    inline string getDestinationZoneId() const { DARABONBA_PTR_GET_DEFAULT(destinationZoneId_, "") };
    inline ModifyDiskSpecRequest& setDestinationZoneId(string destinationZoneId) { DARABONBA_PTR_SET_VALUE(destinationZoneId_, destinationZoneId) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline ModifyDiskSpecRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ModifyDiskSpecRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDiskSpecRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDiskSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDiskSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // performanceControlOptions Field Functions 
    bool hasPerformanceControlOptions() const { return this->performanceControlOptions_ != nullptr;};
    void deletePerformanceControlOptions() { this->performanceControlOptions_ = nullptr;};
    inline const ModifyDiskSpecRequest::PerformanceControlOptions & getPerformanceControlOptions() const { DARABONBA_PTR_GET_CONST(performanceControlOptions_, ModifyDiskSpecRequest::PerformanceControlOptions) };
    inline ModifyDiskSpecRequest::PerformanceControlOptions getPerformanceControlOptions() { DARABONBA_PTR_GET(performanceControlOptions_, ModifyDiskSpecRequest::PerformanceControlOptions) };
    inline ModifyDiskSpecRequest& setPerformanceControlOptions(const ModifyDiskSpecRequest::PerformanceControlOptions & performanceControlOptions) { DARABONBA_PTR_SET_VALUE(performanceControlOptions_, performanceControlOptions) };
    inline ModifyDiskSpecRequest& setPerformanceControlOptions(ModifyDiskSpecRequest::PerformanceControlOptions && performanceControlOptions) { DARABONBA_PTR_SET_RVALUE(performanceControlOptions_, performanceControlOptions) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline ModifyDiskSpecRequest& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline ModifyDiskSpecRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDiskSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDiskSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // > This parameter is in invitational preview and is not available for general use.
    shared_ptr<string> destinationZoneId_ {};
    // The new type of the disk. Valid values:
    // 
    // - cloud_essd: enterprise SSD.
    // - cloud_auto: ESSD AutoPL disk.
    // - cloud_ssd: standard SSD.
    // <props="china">
    // - cloud_essd_entry: ESSD Entry disk.
    // 
    // - cloud_efficiency: ultra disk.
    // 
    // Default value: empty, which indicates that the disk type is not changed.
    // 
    // > - The valid values above are listed in descending order of disk performance. If the disk is a subscription disk, downgrading is not allowed.
    // 
    // <props="china">
    // - ESSD Entry disks can be changed only to enterprise SSDs or ESSD AutoPL disks. For more information, see [Change the disk type](https://help.aliyun.com/document_detail/161980.html).
    shared_ptr<string> diskCategory_ {};
    // The ID of the disk.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // Specifies whether to perform only a dry run without performing the actual request. Valid values:
    // 
    // * true: performs only a dry run. The system checks whether your AccessKey pair is valid, whether RAM users are granted permissions, and whether the required parameters are specified. If the check fails, the corresponding error is returned. If the check succeeds, the DryRunOperation error code is returned.
    // 
    // * false: performs a dry run and performs the actual request. If the check succeeds, a 2XX HTTP status code is returned and the disk type or ESSD performance level is changed.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The disk performance control parameters.
    shared_ptr<ModifyDiskSpecRequest::PerformanceControlOptions> performanceControlOptions_ {};
    // The new performance level (PL) of the ESSD. Valid values:
    // 
    // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
    // - PL1: A single disk can deliver up to 50,000 random read/write IOPS.
    // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
    // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    shared_ptr<string> performanceLevel_ {};
    // Specifies whether to modify the provisioned read/write IOPS of an ESSD AutoPL disk.
    // 
    // Valid values: 0 to min{50000, 1000 × Capacity - Baseline performance}.
    // 
    // Baseline performance = min{1,800 + 50 × Capacity, 50,000}.
    // 
    // > This parameter is supported only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html) and [Modify the provisioned performance of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
    shared_ptr<int64_t> provisionedIops_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
