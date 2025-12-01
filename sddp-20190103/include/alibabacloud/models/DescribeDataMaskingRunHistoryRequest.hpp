// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataMaskingRunHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataMaskingRunHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstType, dstType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MainProcessId, mainProcessId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrcTableName, srcTableName_);
      DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataMaskingRunHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstType, dstType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MainProcessId, mainProcessId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrcTableName, srcTableName_);
      DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeDataMaskingRunHistoryRequest() = default ;
    DescribeDataMaskingRunHistoryRequest(const DescribeDataMaskingRunHistoryRequest &) = default ;
    DescribeDataMaskingRunHistoryRequest(DescribeDataMaskingRunHistoryRequest &&) = default ;
    DescribeDataMaskingRunHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataMaskingRunHistoryRequest() = default ;
    DescribeDataMaskingRunHistoryRequest& operator=(const DescribeDataMaskingRunHistoryRequest &) = default ;
    DescribeDataMaskingRunHistoryRequest& operator=(DescribeDataMaskingRunHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->dstType_ == nullptr && return this->endTime_ == nullptr && return this->lang_ == nullptr && return this->mainProcessId_ == nullptr && return this->pageSize_ == nullptr
        && return this->srcTableName_ == nullptr && return this->srcType_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataMaskingRunHistoryRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline int32_t dstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, 0) };
    inline DescribeDataMaskingRunHistoryRequest& setDstType(int32_t dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDataMaskingRunHistoryRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataMaskingRunHistoryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // mainProcessId Field Functions 
    bool hasMainProcessId() const { return this->mainProcessId_ != nullptr;};
    void deleteMainProcessId() { this->mainProcessId_ = nullptr;};
    inline int64_t mainProcessId() const { DARABONBA_PTR_GET_DEFAULT(mainProcessId_, 0L) };
    inline DescribeDataMaskingRunHistoryRequest& setMainProcessId(int64_t mainProcessId) { DARABONBA_PTR_SET_VALUE(mainProcessId_, mainProcessId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataMaskingRunHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcTableName Field Functions 
    bool hasSrcTableName() const { return this->srcTableName_ != nullptr;};
    void deleteSrcTableName() { this->srcTableName_ = nullptr;};
    inline string srcTableName() const { DARABONBA_PTR_GET_DEFAULT(srcTableName_, "") };
    inline DescribeDataMaskingRunHistoryRequest& setSrcTableName(string srcTableName) { DARABONBA_PTR_SET_VALUE(srcTableName_, srcTableName) };


    // srcType Field Functions 
    bool hasSrcType() const { return this->srcType_ != nullptr;};
    void deleteSrcType() { this->srcType_ = nullptr;};
    inline int32_t srcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, 0) };
    inline DescribeDataMaskingRunHistoryRequest& setSrcType(int32_t srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDataMaskingRunHistoryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDataMaskingRunHistoryRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDataMaskingRunHistoryRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The type of the service to which the de-identified data belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates OSS. The value indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int32_t> dstType_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Chinese
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the task.
    // 
    // > If a task has one or more subtasks, the value of the parameter must be the ID of the task. Otherwise, leave this parameter empty.
    std::shared_ptr<int64_t> mainProcessId_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the source table.
    std::shared_ptr<string> srcTableName_ = nullptr;
    // The type of the service to which the data to be de-identified belongs. Valid values: **1**, **2**, **3**, **4**, and **5**. The value 1 indicates MaxCompute. The value 2 indicates Object Storage Service (OSS). The value indicates AnalyticDB for MySQL. The value 4 indicates Tablestore. The value 5 indicates ApsaraDB RDS.
    std::shared_ptr<int32_t> srcType_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the de-identification task. Valid values:
    // 
    // *   **-1**: waiting
    // *   **0**: being executed
    // *   **1**: executed
    // *   **2**: failed to be executed
    // *   **3**: terminated
    // *   **4**: partially failed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the de-identification task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
