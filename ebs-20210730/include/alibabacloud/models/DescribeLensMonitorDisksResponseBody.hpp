// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeLensMonitorDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLensMonitorDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskInfos, diskInfos_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLensMonitorDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskInfos, diskInfos_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLensMonitorDisksResponseBody() = default ;
    DescribeLensMonitorDisksResponseBody(const DescribeLensMonitorDisksResponseBody &) = default ;
    DescribeLensMonitorDisksResponseBody(DescribeLensMonitorDisksResponseBody &&) = default ;
    DescribeLensMonitorDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLensMonitorDisksResponseBody() = default ;
    DescribeLensMonitorDisksResponseBody& operator=(const DescribeLensMonitorDisksResponseBody &) = default ;
    DescribeLensMonitorDisksResponseBody& operator=(DescribeLensMonitorDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiskInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskInfos& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DiskInfos& obj) { 
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
      DiskInfos() = default ;
      DiskInfos(const DiskInfos &) = default ;
      DiskInfos(DiskInfos &&) = default ;
      DiskInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiskInfos() = default ;
      DiskInfos& operator=(const DiskInfos &) = default ;
      DiskInfos& operator=(DiskInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->bps_ == nullptr
        && this->burstingEnabled_ == nullptr && this->diskCategory_ == nullptr && this->diskId_ == nullptr && this->diskName_ == nullptr && this->diskStatus_ == nullptr
        && this->diskType_ == nullptr && this->iops_ == nullptr && this->lensTags_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr
        && this->regionId_ == nullptr && this->sharingEnabled_ == nullptr && this->size_ == nullptr && this->tags_ == nullptr && this->zoneId_ == nullptr; };
      // bps Field Functions 
      bool hasBps() const { return this->bps_ != nullptr;};
      void deleteBps() { this->bps_ = nullptr;};
      inline int32_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
      inline DiskInfos& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


      // burstingEnabled Field Functions 
      bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
      void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
      inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
      inline DiskInfos& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


      // diskCategory Field Functions 
      bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
      void deleteDiskCategory() { this->diskCategory_ = nullptr;};
      inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
      inline DiskInfos& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline DiskInfos& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // diskName Field Functions 
      bool hasDiskName() const { return this->diskName_ != nullptr;};
      void deleteDiskName() { this->diskName_ = nullptr;};
      inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
      inline DiskInfos& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


      // diskStatus Field Functions 
      bool hasDiskStatus() const { return this->diskStatus_ != nullptr;};
      void deleteDiskStatus() { this->diskStatus_ = nullptr;};
      inline string getDiskStatus() const { DARABONBA_PTR_GET_DEFAULT(diskStatus_, "") };
      inline DiskInfos& setDiskStatus(string diskStatus) { DARABONBA_PTR_SET_VALUE(diskStatus_, diskStatus) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline DiskInfos& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // iops Field Functions 
      bool hasIops() const { return this->iops_ != nullptr;};
      void deleteIops() { this->iops_ = nullptr;};
      inline int32_t getIops() const { DARABONBA_PTR_GET_DEFAULT(iops_, 0) };
      inline DiskInfos& setIops(int32_t iops) { DARABONBA_PTR_SET_VALUE(iops_, iops) };


      // lensTags Field Functions 
      bool hasLensTags() const { return this->lensTags_ != nullptr;};
      void deleteLensTags() { this->lensTags_ = nullptr;};
      inline const vector<string> & getLensTags() const { DARABONBA_PTR_GET_CONST(lensTags_, vector<string>) };
      inline vector<string> getLensTags() { DARABONBA_PTR_GET(lensTags_, vector<string>) };
      inline DiskInfos& setLensTags(const vector<string> & lensTags) { DARABONBA_PTR_SET_VALUE(lensTags_, lensTags) };
      inline DiskInfos& setLensTags(vector<string> && lensTags) { DARABONBA_PTR_SET_RVALUE(lensTags_, lensTags) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline DiskInfos& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // provisionedIops Field Functions 
      bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
      void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
      inline int32_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0) };
      inline DiskInfos& setProvisionedIops(int32_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DiskInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sharingEnabled Field Functions 
      bool hasSharingEnabled() const { return this->sharingEnabled_ != nullptr;};
      void deleteSharingEnabled() { this->sharingEnabled_ = nullptr;};
      inline string getSharingEnabled() const { DARABONBA_PTR_GET_DEFAULT(sharingEnabled_, "") };
      inline DiskInfos& setSharingEnabled(string sharingEnabled) { DARABONBA_PTR_SET_VALUE(sharingEnabled_, sharingEnabled) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline DiskInfos& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DiskInfos::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DiskInfos::Tags>) };
      inline vector<DiskInfos::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DiskInfos::Tags>) };
      inline DiskInfos& setTags(const vector<DiskInfos::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DiskInfos& setTags(vector<DiskInfos::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DiskInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The BPS.
      shared_ptr<int32_t> bps_ {};
      // Indicates whether the performance burst feature is enabled. Valid values:
      // 
      // *   true
      // *   false
      // 
      // This parameter is available only if you set `DiskCategory` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The type of the disk. Valid values:
      // - cloud
      // - cloud_efficiency
      // - cloud_ssd
      // - cloud_essd
      // - cloud_auto
      // - cloud_essd_entry
      shared_ptr<string> diskCategory_ {};
      // The ID of the disk.
      shared_ptr<string> diskId_ {};
      // The name of the disk.
      shared_ptr<string> diskName_ {};
      // The disk status. Valid values:
      // 
      // - Available
      // - Deleted
      shared_ptr<string> diskStatus_ {};
      // The disk type. Valid values:
      // *   system: system disk
      // *   data: data disk
      shared_ptr<string> diskType_ {};
      // The IOPS.
      shared_ptr<int32_t> iops_ {};
      // Event tags of the disk.
      shared_ptr<vector<string>> lensTags_ {};
      // The new performance level of the ESSD. Valid values:
      // 
      // *   PL0: An ESSD can deliver up to 10,000 random read/write IOPS.
      // *   PL1: An ESSD can deliver up to 50,000 random read/write IOPS.
      // *   PL2: An ESSD can deliver up to 100,000 random read/write IOPS.
      // *   PL3: An ESSD delivers up to 1,000,000 random read/write IOPS.
      shared_ptr<string> performanceLevel_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk to use as the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
      // 
      // Baseline performance = min{1,800 + 50 × Capacity, 50,000}
      // 
      // This parameter is available only if you set `DiskCategory` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int32_t> provisionedIops_ {};
      // The region ID of the disk.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> sharingEnabled_ {};
      // The size of the disk. Unit: GiB.
      shared_ptr<int32_t> size_ {};
      // Tags of the disk.
      shared_ptr<vector<DiskInfos::Tags>> tags_ {};
      // The ID of the zone.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->diskInfos_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // diskInfos Field Functions 
    bool hasDiskInfos() const { return this->diskInfos_ != nullptr;};
    void deleteDiskInfos() { this->diskInfos_ = nullptr;};
    inline const vector<DescribeLensMonitorDisksResponseBody::DiskInfos> & getDiskInfos() const { DARABONBA_PTR_GET_CONST(diskInfos_, vector<DescribeLensMonitorDisksResponseBody::DiskInfos>) };
    inline vector<DescribeLensMonitorDisksResponseBody::DiskInfos> getDiskInfos() { DARABONBA_PTR_GET(diskInfos_, vector<DescribeLensMonitorDisksResponseBody::DiskInfos>) };
    inline DescribeLensMonitorDisksResponseBody& setDiskInfos(const vector<DescribeLensMonitorDisksResponseBody::DiskInfos> & diskInfos) { DARABONBA_PTR_SET_VALUE(diskInfos_, diskInfos) };
    inline DescribeLensMonitorDisksResponseBody& setDiskInfos(vector<DescribeLensMonitorDisksResponseBody::DiskInfos> && diskInfos) { DARABONBA_PTR_SET_RVALUE(diskInfos_, diskInfos) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLensMonitorDisksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLensMonitorDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeLensMonitorDisksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the disks.
    shared_ptr<vector<DescribeLensMonitorDisksResponseBody::DiskInfos>> diskInfos_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
