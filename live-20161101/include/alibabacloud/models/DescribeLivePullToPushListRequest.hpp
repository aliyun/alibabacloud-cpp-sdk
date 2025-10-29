// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullToPushListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullToPushListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullToPushListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeLivePullToPushListRequest() = default ;
    DescribeLivePullToPushListRequest(const DescribeLivePullToPushListRequest &) = default ;
    DescribeLivePullToPushListRequest(DescribeLivePullToPushListRequest &&) = default ;
    DescribeLivePullToPushListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullToPushListRequest() = default ;
    DescribeLivePullToPushListRequest& operator=(const DescribeLivePullToPushListRequest &) = default ;
    DescribeLivePullToPushListRequest& operator=(DescribeLivePullToPushListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstUrl_ == nullptr
        && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->region_ == nullptr && return this->regionId_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // dstUrl Field Functions 
    bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
    void deleteDstUrl() { this->dstUrl_ = nullptr;};
    inline string dstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
    inline DescribeLivePullToPushListRequest& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLivePullToPushListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLivePullToPushListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLivePullToPushListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLivePullToPushListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLivePullToPushListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeLivePullToPushListRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeLivePullToPushListRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The destination URL. Fuzzy search is performed based on the destination URL.
    std::shared_ptr<string> dstUrl_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    // 
    // >  The value must be greater than 0 and not greater than the maximum value of the Integer data type. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // >  Valid values: [1,100]. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region of the live center. Valid values:
    // 
    // *   ap-southeast-1: Singapore
    // *   ap-southeast-5: Indonesia (Jakarta)
    // *   cn-beijing: China (Beijing)
    // *   cn-shanghai: China (Shanghai)
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The task ID. Fuzzy search is performed based on the task ID.
    // 
    // >  The ID can be up to 55 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    std::shared_ptr<string> taskId_ = nullptr;
    // The task name. Fuzzy search is performed based on the task name.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
