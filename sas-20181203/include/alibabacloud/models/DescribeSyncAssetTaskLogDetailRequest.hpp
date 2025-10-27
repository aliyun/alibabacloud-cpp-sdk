// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSyncAssetTaskLogDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAssetTaskLogDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAssetTaskLogDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeSyncAssetTaskLogDetailRequest() = default ;
    DescribeSyncAssetTaskLogDetailRequest(const DescribeSyncAssetTaskLogDetailRequest &) = default ;
    DescribeSyncAssetTaskLogDetailRequest(DescribeSyncAssetTaskLogDetailRequest &&) = default ;
    DescribeSyncAssetTaskLogDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAssetTaskLogDetailRequest() = default ;
    DescribeSyncAssetTaskLogDetailRequest& operator=(const DescribeSyncAssetTaskLogDetailRequest &) = default ;
    DescribeSyncAssetTaskLogDetailRequest& operator=(DescribeSyncAssetTaskLogDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endTime_ == nullptr && return this->pageSize_ == nullptr && return this->rootTaskId_ == nullptr && return this->startTime_ == nullptr && return this->taskName_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSyncAssetTaskLogDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSyncAssetTaskLogDetailRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSyncAssetTaskLogDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string rootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline DescribeSyncAssetTaskLogDetailRequest& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSyncAssetTaskLogDetailRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSyncAssetTaskLogDetailRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The page number. Default value: 1. Pages start from page 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end timestamp of the task.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the IDC scan task. You can call the [DescribeSyncAssetTaskList](https://help.aliyun.com/document_detail/141932.html) operation to obtain the ID.
    std::shared_ptr<string> rootTaskId_ = nullptr;
    // The start timestamp of the task.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The name of the IDC scan task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
