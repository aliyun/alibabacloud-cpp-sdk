// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONCETASKLEAFRECORDPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONCETASKLEAFRECORDPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOnceTaskLeafRecordPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnceTaskLeafRecordPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelateInfo, relateInfo_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnceTaskLeafRecordPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelateInfo, relateInfo_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeOnceTaskLeafRecordPageRequest() = default ;
    DescribeOnceTaskLeafRecordPageRequest(const DescribeOnceTaskLeafRecordPageRequest &) = default ;
    DescribeOnceTaskLeafRecordPageRequest(DescribeOnceTaskLeafRecordPageRequest &&) = default ;
    DescribeOnceTaskLeafRecordPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnceTaskLeafRecordPageRequest() = default ;
    DescribeOnceTaskLeafRecordPageRequest& operator=(const DescribeOnceTaskLeafRecordPageRequest &) = default ;
    DescribeOnceTaskLeafRecordPageRequest& operator=(DescribeOnceTaskLeafRecordPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endTime_ == nullptr && return this->pageSize_ == nullptr && return this->relateInfo_ == nullptr && return this->source_ == nullptr && return this->startTime_ == nullptr
        && return this->statusList_ == nullptr && return this->taskId_ == nullptr && return this->taskType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOnceTaskLeafRecordPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeOnceTaskLeafRecordPageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOnceTaskLeafRecordPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relateInfo Field Functions 
    bool hasRelateInfo() const { return this->relateInfo_ != nullptr;};
    void deleteRelateInfo() { this->relateInfo_ = nullptr;};
    inline bool relateInfo() const { DARABONBA_PTR_GET_DEFAULT(relateInfo_, false) };
    inline DescribeOnceTaskLeafRecordPageRequest& setRelateInfo(bool relateInfo) { DARABONBA_PTR_SET_VALUE(relateInfo_, relateInfo) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeOnceTaskLeafRecordPageRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeOnceTaskLeafRecordPageRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline DescribeOnceTaskLeafRecordPageRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeOnceTaskLeafRecordPageRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeOnceTaskLeafRecordPageRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeOnceTaskLeafRecordPageRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end timestamp of the sub-task.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of entries to return on each page. Default value: 20
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether extension information is associated.
    // 
    // This parameter is required.
    std::shared_ptr<bool> relateInfo_ = nullptr;
    // The source of the request.
    std::shared_ptr<string> source_ = nullptr;
    // The start timestamp of the sub-task.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status information.
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    // The ID of the sub-task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the sub-task. Valid values:
    // 
    // *   **IMAGE_SCAN**: image scan task
    // *   **IMAGE_REGISTRY_PULL**: image asset synchronization task
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
