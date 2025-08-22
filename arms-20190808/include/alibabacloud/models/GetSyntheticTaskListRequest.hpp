// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetSyntheticTaskListRequest() = default ;
    GetSyntheticTaskListRequest(const GetSyntheticTaskListRequest &) = default ;
    GetSyntheticTaskListRequest(GetSyntheticTaskListRequest &&) = default ;
    GetSyntheticTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskListRequest() = default ;
    GetSyntheticTaskListRequest& operator=(const GetSyntheticTaskListRequest &) = default ;
    GetSyntheticTaskListRequest& operator=(GetSyntheticTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direction_ != nullptr
        && this->order_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->taskName_ != nullptr
        && this->taskStatus_ != nullptr && this->taskType_ != nullptr && this->url_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetSyntheticTaskListRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline GetSyntheticTaskListRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline GetSyntheticTaskListRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetSyntheticTaskListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSyntheticTaskListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetSyntheticTaskListRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetSyntheticTaskListRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetSyntheticTaskListRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetSyntheticTaskListRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The order by which the queried tasks are sorted. Valid values:
    // 
    // *   **asc**: ascending
    // *   **desc**: descending
    std::shared_ptr<string> direction_ = nullptr;
    // The condition by which the queried tasks are sorted.
    std::shared_ptr<string> order_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID. Default value: **cn-hangzhou**.
    std::shared_ptr<string> regionId_ = nullptr;
    // The task name.
    std::shared_ptr<string> taskName_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **0**: The task is stopped.
    // *   **1**: The task is started.
    // *   **9**: The task is ended.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The type of the task. Valid values:
    // 
    // 1.  3: web page performance - IE
    // 2.  34: web page performance - Chrome
    // 3.  0: network quality
    // 4.  40: file download
    // 5.  7: API performance
    std::shared_ptr<string> taskType_ = nullptr;
    // The URL for synthetic monitoring.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
