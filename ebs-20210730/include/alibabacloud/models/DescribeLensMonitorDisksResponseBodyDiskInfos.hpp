// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSRESPONSEBODYDISKINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSRESPONSEBODYDISKINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLensMonitorDisksResponseBodyDiskInfosTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeLensMonitorDisksResponseBodyDiskInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLensMonitorDisksResponseBodyDiskInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(DiskStatus, diskStatus_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Iops, iops_);
      DARABONBA_PTR_TO_JSON(LensTags, lensTags_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SharingEnabled, sharingEnabled_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLensMonitorDisksResponseBodyDiskInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(DiskStatus, diskStatus_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Iops, iops_);
      DARABONBA_PTR_FROM_JSON(LensTags, lensTags_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SharingEnabled, sharingEnabled_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeLensMonitorDisksResponseBodyDiskInfos() = default ;
    DescribeLensMonitorDisksResponseBodyDiskInfos(const DescribeLensMonitorDisksResponseBodyDiskInfos &) = default ;
    DescribeLensMonitorDisksResponseBodyDiskInfos(DescribeLensMonitorDisksResponseBodyDiskInfos &&) = default ;
    DescribeLensMonitorDisksResponseBodyDiskInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLensMonitorDisksResponseBodyDiskInfos() = default ;
    DescribeLensMonitorDisksResponseBodyDiskInfos& operator=(const DescribeLensMonitorDisksResponseBodyDiskInfos &) = default ;
    DescribeLensMonitorDisksResponseBodyDiskInfos& operator=(DescribeLensMonitorDisksResponseBodyDiskInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bps_ == nullptr
        && return this->burstingEnabled_ == nullptr && return this->diskCategory_ == nullptr && return this->diskId_ == nullptr && return this->diskName_ == nullptr && return this->diskStatus_ == nullptr
        && return this->diskType_ == nullptr && return this->iops_ == nullptr && return this->lensTags_ == nullptr && return this->performanceLevel_ == nullptr && return this->provisionedIops_ == nullptr
        && return this->regionId_ == nullptr && return this->sharingEnabled_ == nullptr && return this->size_ == nullptr && return this->tags_ == nullptr && return this->zoneId_ == nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int32_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // diskStatus Field Functions 
    bool hasDiskStatus() const { return this->diskStatus_ != nullptr;};
    void deleteDiskStatus() { this->diskStatus_ = nullptr;};
    inline string diskStatus() const { DARABONBA_PTR_GET_DEFAULT(diskStatus_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setDiskStatus(string diskStatus) { DARABONBA_PTR_SET_VALUE(diskStatus_, diskStatus) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // iops Field Functions 
    bool hasIops() const { return this->iops_ != nullptr;};
    void deleteIops() { this->iops_ = nullptr;};
    inline int32_t iops() const { DARABONBA_PTR_GET_DEFAULT(iops_, 0) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setIops(int32_t iops) { DARABONBA_PTR_SET_VALUE(iops_, iops) };


    // lensTags Field Functions 
    bool hasLensTags() const { return this->lensTags_ != nullptr;};
    void deleteLensTags() { this->lensTags_ = nullptr;};
    inline const vector<string> & lensTags() const { DARABONBA_PTR_GET_CONST(lensTags_, vector<string>) };
    inline vector<string> lensTags() { DARABONBA_PTR_GET(lensTags_, vector<string>) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setLensTags(const vector<string> & lensTags) { DARABONBA_PTR_SET_VALUE(lensTags_, lensTags) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setLensTags(vector<string> && lensTags) { DARABONBA_PTR_SET_RVALUE(lensTags_, lensTags) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int32_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setProvisionedIops(int32_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sharingEnabled Field Functions 
    bool hasSharingEnabled() const { return this->sharingEnabled_ != nullptr;};
    void deleteSharingEnabled() { this->sharingEnabled_ = nullptr;};
    inline string sharingEnabled() const { DARABONBA_PTR_GET_DEFAULT(sharingEnabled_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setSharingEnabled(string sharingEnabled) { DARABONBA_PTR_SET_VALUE(sharingEnabled_, sharingEnabled) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeLensMonitorDisksResponseBodyDiskInfosTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeLensMonitorDisksResponseBodyDiskInfosTags>) };
    inline vector<Models::DescribeLensMonitorDisksResponseBodyDiskInfosTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeLensMonitorDisksResponseBodyDiskInfosTags>) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setTags(const vector<Models::DescribeLensMonitorDisksResponseBodyDiskInfosTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setTags(vector<Models::DescribeLensMonitorDisksResponseBodyDiskInfosTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeLensMonitorDisksResponseBodyDiskInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The BPS.
    std::shared_ptr<int32_t> bps_ = nullptr;
    // Indicates whether the performance burst feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is available only if you set `DiskCategory` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The type of the disk. Valid values:
    // - cloud
    // - cloud_efficiency
    // - cloud_ssd
    // - cloud_essd
    // - cloud_auto
    // - cloud_essd_entry
    std::shared_ptr<string> diskCategory_ = nullptr;
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The name of the disk.
    std::shared_ptr<string> diskName_ = nullptr;
    // The disk status. Valid values:
    // 
    // - Available
    // - Deleted
    std::shared_ptr<string> diskStatus_ = nullptr;
    // The disk type. Valid values:
    // *   system: system disk
    // *   data: data disk
    std::shared_ptr<string> diskType_ = nullptr;
    // The IOPS.
    std::shared_ptr<int32_t> iops_ = nullptr;
    // Event tags of the disk.
    std::shared_ptr<vector<string>> lensTags_ = nullptr;
    // The new performance level of the ESSD. Valid values:
    // 
    // *   PL0: An ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: An ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: An ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: An ESSD delivers up to 1,000,000 random read/write IOPS.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk to use as the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
    // 
    // Baseline performance = min{1,800 + 50 × Capacity, 50,000}
    // 
    // This parameter is available only if you set `DiskCategory` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int32_t> provisionedIops_ = nullptr;
    // The region ID of the disk.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sharingEnabled_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // Tags of the disk.
    std::shared_ptr<vector<Models::DescribeLensMonitorDisksResponseBodyDiskInfosTags>> tags_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
