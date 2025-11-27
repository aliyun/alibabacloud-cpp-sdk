// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCSnapshotsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotIds, snapshotIds_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotIds, snapshotIds_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeRCSnapshotsRequest() = default ;
    DescribeRCSnapshotsRequest(const DescribeRCSnapshotsRequest &) = default ;
    DescribeRCSnapshotsRequest(DescribeRCSnapshotsRequest &&) = default ;
    DescribeRCSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSnapshotsRequest() = default ;
    DescribeRCSnapshotsRequest& operator=(const DescribeRCSnapshotsRequest &) = default ;
    DescribeRCSnapshotsRequest& operator=(DescribeRCSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->snapshotIds_ == nullptr && return this->tag_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeRCSnapshotsRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeRCSnapshotsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeRCSnapshotsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCSnapshotsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotIds Field Functions 
    bool hasSnapshotIds() const { return this->snapshotIds_ != nullptr;};
    void deleteSnapshotIds() { this->snapshotIds_ = nullptr;};
    inline string snapshotIds() const { DARABONBA_PTR_GET_DEFAULT(snapshotIds_, "") };
    inline DescribeRCSnapshotsRequest& setSnapshotIds(string snapshotIds) { DARABONBA_PTR_SET_VALUE(snapshotIds_, snapshotIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeRCSnapshotsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeRCSnapshotsRequestTag>) };
    inline vector<DescribeRCSnapshotsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeRCSnapshotsRequestTag>) };
    inline DescribeRCSnapshotsRequest& setTag(const vector<DescribeRCSnapshotsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRCSnapshotsRequest& setTag(vector<DescribeRCSnapshotsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The cloud disk ID.
    std::shared_ptr<string> diskId_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **30** to **100**. Default value: **30**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The snapshot IDs.
    // 
    // You can specify a maximum of 100 IDs. Separate multiple IDs with commas (,).
    std::shared_ptr<string> snapshotIds_ = nullptr;
    std::shared_ptr<vector<DescribeRCSnapshotsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
