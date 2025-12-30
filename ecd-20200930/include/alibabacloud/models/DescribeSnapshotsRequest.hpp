// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSnapshotsRequest() = default ;
    DescribeSnapshotsRequest(const DescribeSnapshotsRequest &) = default ;
    DescribeSnapshotsRequest(DescribeSnapshotsRequest &&) = default ;
    DescribeSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsRequest() = default ;
    DescribeSnapshotsRequest& operator=(const DescribeSnapshotsRequest &) = default ;
    DescribeSnapshotsRequest& operator=(DescribeSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->endTime_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->osType_ == nullptr && this->regionId_ == nullptr && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr && this->snapshotType_ == nullptr
        && this->sourceDiskType_ == nullptr && this->startTime_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeSnapshotsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeSnapshotsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeSnapshotsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSnapshotsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSnapshotsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeSnapshotsRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSnapshotsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeSnapshotsRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline DescribeSnapshotsRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // snapshotType Field Functions 
    bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
    void deleteSnapshotType() { this->snapshotType_ = nullptr;};
    inline string getSnapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
    inline DescribeSnapshotsRequest& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


    // sourceDiskType Field Functions 
    bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
    void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
    inline string getSourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
    inline DescribeSnapshotsRequest& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSnapshotsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The user who creates the snapshot.
    shared_ptr<string> creator_ {};
    // The ID of the cloud computer.
    shared_ptr<string> desktopId_ {};
    // The name of the cloud computer.
    shared_ptr<string> desktopName_ {};
    // The end of the time range to query. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The number of entries per page.
    // 
    // *   Maximum value: 100.
    // *   Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> osType_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The snapshot ID.
    shared_ptr<string> snapshotId_ {};
    // The name of the snapshot. The name must be 2 to 127 characters in length. The name must start with a letter. The name can contain letters, digits, underscores (_), and hyphens (-). The name cannot start with `auto` because snapshots whose names start with auto are recognized as automatic snapshots.
    shared_ptr<string> snapshotName_ {};
    // The category of the snapshots.
    // 
    // Default value: all. Valid values:
    // 
    // *   all: all snapshot categories
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   auto: automatic snapshots
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   user: manual snapshots
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> snapshotType_ {};
    // The disk for which you want to create a snapshot.
    // 
    // >  The value of this parameter is not case-sensitive.
    // 
    // Valid values:
    // 
    // *   Data: the data disk.
    // *   System: the system disk.
    shared_ptr<string> sourceDiskType_ {};
    // The beginning of the time range to query. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
