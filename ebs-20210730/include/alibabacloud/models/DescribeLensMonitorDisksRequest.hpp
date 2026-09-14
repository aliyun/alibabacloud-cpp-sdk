// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSREQUEST_HPP_
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
  class DescribeLensMonitorDisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLensMonitorDisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskIdPattern, diskIdPattern_);
      DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(LensTags, lensTags_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLensMonitorDisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskIdPattern, diskIdPattern_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(LensTags, lensTags_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeLensMonitorDisksRequest() = default ;
    DescribeLensMonitorDisksRequest(const DescribeLensMonitorDisksRequest &) = default ;
    DescribeLensMonitorDisksRequest(DescribeLensMonitorDisksRequest &&) = default ;
    DescribeLensMonitorDisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLensMonitorDisksRequest() = default ;
    DescribeLensMonitorDisksRequest& operator=(const DescribeLensMonitorDisksRequest &) = default ;
    DescribeLensMonitorDisksRequest& operator=(DescribeLensMonitorDisksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskCategory_ == nullptr
        && this->diskIdPattern_ == nullptr && this->diskIds_ == nullptr && this->ecsInstanceId_ == nullptr && this->lensTags_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline DescribeLensMonitorDisksRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskIdPattern Field Functions 
    bool hasDiskIdPattern() const { return this->diskIdPattern_ != nullptr;};
    void deleteDiskIdPattern() { this->diskIdPattern_ = nullptr;};
    inline string getDiskIdPattern() const { DARABONBA_PTR_GET_DEFAULT(diskIdPattern_, "") };
    inline DescribeLensMonitorDisksRequest& setDiskIdPattern(string diskIdPattern) { DARABONBA_PTR_SET_VALUE(diskIdPattern_, diskIdPattern) };


    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline const vector<string> & getDiskIds() const { DARABONBA_PTR_GET_CONST(diskIds_, vector<string>) };
    inline vector<string> getDiskIds() { DARABONBA_PTR_GET(diskIds_, vector<string>) };
    inline DescribeLensMonitorDisksRequest& setDiskIds(const vector<string> & diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };
    inline DescribeLensMonitorDisksRequest& setDiskIds(vector<string> && diskIds) { DARABONBA_PTR_SET_RVALUE(diskIds_, diskIds) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DescribeLensMonitorDisksRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // lensTags Field Functions 
    bool hasLensTags() const { return this->lensTags_ != nullptr;};
    void deleteLensTags() { this->lensTags_ = nullptr;};
    inline const vector<string> & getLensTags() const { DARABONBA_PTR_GET_CONST(lensTags_, vector<string>) };
    inline vector<string> getLensTags() { DARABONBA_PTR_GET(lensTags_, vector<string>) };
    inline DescribeLensMonitorDisksRequest& setLensTags(const vector<string> & lensTags) { DARABONBA_PTR_SET_VALUE(lensTags_, lensTags) };
    inline DescribeLensMonitorDisksRequest& setLensTags(vector<string> && lensTags) { DARABONBA_PTR_SET_RVALUE(lensTags_, lensTags) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLensMonitorDisksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLensMonitorDisksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLensMonitorDisksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cloud disk type. Valid values:
    // 
    // - cloud: basic cloud disk.
    // - cloud_efficiency: ultra cloud disk.
    // - cloud_ssd: standard SSD.
    // - cloud_essd: Enterprise SSD (ESSD).
    // - cloud_auto: ESSD AutoPL cloud disk.
    // - cloud_essd_entry: ESSD Entry disk.
    shared_ptr<string> diskCategory_ {};
    // The regular expression pattern used for fuzzy match filtering of cloud disk IDs.
    shared_ptr<string> diskIdPattern_ {};
    // The list of cloud disk IDs.
    shared_ptr<vector<string>> diskIds_ {};
    // The ECS instance ID.
    shared_ptr<string> ecsInstanceId_ {};
    // The list of cloud disk event tags, used to filter cloud disks that have experienced these event types within the last 24 hours. Valid values:
    // - NoSnapshot: data protection
    // - BurstIOTriggered: burst I/O
    // - CostOptimizationNeeded: cost optimization
    // - DiskSpecNotMatchedWithInstance: instance and cloud disk specifications do not match
    // - DiskIONo4kAligned: non-4K aligned read/write
    // - DiskIOHang: I/O hang occurred on the cloud disk
    // - InstanceIOPSExceedInstanceMaxLimit: instance IOPS reached the upper limit
    // - InstanceBPSExceedInstanceMaxLimit: instance BPS reached the upper limit
    // - DiskIOPSExceedInstanceMaxLimit: cloud disk IOPS reached the instance upper limit
    // - DiskBPSExceedInstanceMaxLimit: cloud disk BPS reached the instance upper limit
    // - DiskIOPSExceedDiskMaxLimit: cloud disk IOPS reached the disk upper limit
    // - DiskBPSExceedDiskMaxLimit: cloud disk BPS reached the disk upper limit
    shared_ptr<vector<string>> lensTags_ {};
    // The maximum number of entries per page for a paged query. Maximum value: 100.
    // Default value:
    // 
    // - The default value is 10.
    // 
    // - If the specified value is greater than 100, the default value of 100 is used.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned in the previous API call.
    shared_ptr<string> nextToken_ {};
    // The region ID. You can call DescribeRegions to query the list of regions supported by EBS Lens.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
