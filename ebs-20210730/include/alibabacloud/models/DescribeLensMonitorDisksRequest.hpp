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
      DARABONBA_PTR_TO_JSON(LensTags, lensTags_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLensMonitorDisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskIdPattern, diskIdPattern_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
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
        && return this->diskIdPattern_ == nullptr && return this->diskIds_ == nullptr && return this->lensTags_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->regionId_ == nullptr; };
    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline DescribeLensMonitorDisksRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskIdPattern Field Functions 
    bool hasDiskIdPattern() const { return this->diskIdPattern_ != nullptr;};
    void deleteDiskIdPattern() { this->diskIdPattern_ = nullptr;};
    inline string diskIdPattern() const { DARABONBA_PTR_GET_DEFAULT(diskIdPattern_, "") };
    inline DescribeLensMonitorDisksRequest& setDiskIdPattern(string diskIdPattern) { DARABONBA_PTR_SET_VALUE(diskIdPattern_, diskIdPattern) };


    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline const vector<string> & diskIds() const { DARABONBA_PTR_GET_CONST(diskIds_, vector<string>) };
    inline vector<string> diskIds() { DARABONBA_PTR_GET(diskIds_, vector<string>) };
    inline DescribeLensMonitorDisksRequest& setDiskIds(const vector<string> & diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };
    inline DescribeLensMonitorDisksRequest& setDiskIds(vector<string> && diskIds) { DARABONBA_PTR_SET_RVALUE(diskIds_, diskIds) };


    // lensTags Field Functions 
    bool hasLensTags() const { return this->lensTags_ != nullptr;};
    void deleteLensTags() { this->lensTags_ = nullptr;};
    inline const vector<string> & lensTags() const { DARABONBA_PTR_GET_CONST(lensTags_, vector<string>) };
    inline vector<string> lensTags() { DARABONBA_PTR_GET(lensTags_, vector<string>) };
    inline DescribeLensMonitorDisksRequest& setLensTags(const vector<string> & lensTags) { DARABONBA_PTR_SET_VALUE(lensTags_, lensTags) };
    inline DescribeLensMonitorDisksRequest& setLensTags(vector<string> && lensTags) { DARABONBA_PTR_SET_RVALUE(lensTags_, lensTags) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLensMonitorDisksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLensMonitorDisksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLensMonitorDisksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The type of the disk. Valid values:
    // - cloud
    // - cloud_efficiency
    // - cloud_ssd
    // - cloud_essd
    // - cloud_auto
    // - cloud_essd_entry
    std::shared_ptr<string> diskCategory_ = nullptr;
    // Regular matching fuzzy query to filter cloud disk IDs.
    std::shared_ptr<string> diskIdPattern_ = nullptr;
    // The list of disks.
    std::shared_ptr<vector<string>> diskIds_ = nullptr;
    // Event tags of the disk, which are used to filter the disks on which the events associated with the specified tags occurred in the previous 24 hours. Valid values:
    // 
    // *   NoSnapshot: specifies the event that is triggered because no snapshot is created for the disk to protect data on the disk.
    // *   BurstIOTriggered: specifies the event that is triggered when a burst I/O operation is performed on the disk.
    // *   CostOptimizationNeeded: specifies the event that is triggered when cost optimization is required.
    // *   DiskSpecNotMatchedWithInstance: specifies the event that is triggered if the disk specifications do not match the instance to which the disk is attached.
    // *   DiskIONo4kAligned: specifies the event that is triggered if the physical and logical sectors involved in a read or write operation are not 4K aligned.
    // *   DiskIOHang: specifies the event that is triggered when an I/O hang occurs on the disk.
    // *   InstanceIOPSExceedInstanceMaxLimit: specifies the event that is triggered when the number of IOPS on the instance reaches the upper limit.
    // *   InstanceBPSExceedInstanceMaxLimit: specifies the event that is triggered when the number of BPS on the instance reaches the upper limit.
    // *   DiskIOPSExceedInstanceMaxLimit: specifies the event that is triggered when the number of IOPS on the disk reaches the upper limit of the instance.
    // *   DiskBPSExceedInstanceMaxLimit: specifies the event that is triggered when the number of BPS on the disk reaches the upper limit of the instance.
    // *   DiskIOPSExceedDiskMaxLimit: specifies the event that is triggered when the number of IOPS on the disk reaches the upper limit of the disk.
    // *   DiskBPSExceedDiskMaxLimit: specifies the event that is triggered when the number of BPS on the disk reaches the upper limit of the disk.
    std::shared_ptr<vector<string>> lensTags_ = nullptr;
    // The number of entries to return on each page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token used to start the next query to retrieve more results.
    // 
    // >The pagination token that is used in the next request to retrieve a new page of results. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
