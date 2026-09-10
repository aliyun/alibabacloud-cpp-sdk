// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
      DARABONBA_PTR_TO_JSON(checkType, checkType_);
      DARABONBA_PTR_TO_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(execStatus, execStatus_);
      DARABONBA_PTR_TO_JSON(isScheduled, isScheduled_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(updateEndTime, updateEndTime_);
      DARABONBA_PTR_TO_JSON(updateStartTime, updateStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(checkType, checkType_);
      DARABONBA_PTR_FROM_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(execStatus, execStatus_);
      DARABONBA_PTR_FROM_JSON(isScheduled, isScheduled_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(updateEndTime, updateEndTime_);
      DARABONBA_PTR_FROM_JSON(updateStartTime, updateStartTime_);
    };
    GetDataCheckTaskListRequest() = default ;
    GetDataCheckTaskListRequest(const GetDataCheckTaskListRequest &) = default ;
    GetDataCheckTaskListRequest(GetDataCheckTaskListRequest &&) = default ;
    GetDataCheckTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTaskListRequest() = default ;
    GetDataCheckTaskListRequest& operator=(const GetDataCheckTaskListRequest &) = default ;
    GetDataCheckTaskListRequest& operator=(GetDataCheckTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResult_ == nullptr
        && this->checkType_ == nullptr && this->createEndTime_ == nullptr && this->createStartTime_ == nullptr && this->execStatus_ == nullptr && this->isScheduled_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->taskName_ == nullptr && this->templateName_ == nullptr && this->updateEndTime_ == nullptr
        && this->updateStartTime_ == nullptr; };
    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
    inline GetDataCheckTaskListRequest& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline GetDataCheckTaskListRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline string getCreateEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, "") };
    inline GetDataCheckTaskListRequest& setCreateEndTime(string createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline string getCreateStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, "") };
    inline GetDataCheckTaskListRequest& setCreateStartTime(string createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // execStatus Field Functions 
    bool hasExecStatus() const { return this->execStatus_ != nullptr;};
    void deleteExecStatus() { this->execStatus_ = nullptr;};
    inline int32_t getExecStatus() const { DARABONBA_PTR_GET_DEFAULT(execStatus_, 0) };
    inline GetDataCheckTaskListRequest& setExecStatus(int32_t execStatus) { DARABONBA_PTR_SET_VALUE(execStatus_, execStatus) };


    // isScheduled Field Functions 
    bool hasIsScheduled() const { return this->isScheduled_ != nullptr;};
    void deleteIsScheduled() { this->isScheduled_ = nullptr;};
    inline int32_t getIsScheduled() const { DARABONBA_PTR_GET_DEFAULT(isScheduled_, 0) };
    inline GetDataCheckTaskListRequest& setIsScheduled(int32_t isScheduled) { DARABONBA_PTR_SET_VALUE(isScheduled_, isScheduled) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetDataCheckTaskListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetDataCheckTaskListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetDataCheckTaskListRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetDataCheckTaskListRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // updateEndTime Field Functions 
    bool hasUpdateEndTime() const { return this->updateEndTime_ != nullptr;};
    void deleteUpdateEndTime() { this->updateEndTime_ = nullptr;};
    inline string getUpdateEndTime() const { DARABONBA_PTR_GET_DEFAULT(updateEndTime_, "") };
    inline GetDataCheckTaskListRequest& setUpdateEndTime(string updateEndTime) { DARABONBA_PTR_SET_VALUE(updateEndTime_, updateEndTime) };


    // updateStartTime Field Functions 
    bool hasUpdateStartTime() const { return this->updateStartTime_ != nullptr;};
    void deleteUpdateStartTime() { this->updateStartTime_ = nullptr;};
    inline string getUpdateStartTime() const { DARABONBA_PTR_GET_DEFAULT(updateStartTime_, "") };
    inline GetDataCheckTaskListRequest& setUpdateStartTime(string updateStartTime) { DARABONBA_PTR_SET_VALUE(updateStartTime_, updateStartTime) };


  protected:
    // The validation result filter. Valid values:
    // 
    // - 0: no record.
    // - 1: passed.
    // - 2: failed.
    shared_ptr<int32_t> checkResult_ {};
    // The validation type filter. Valid values:
    // 
    // - 0: row count comparison.
    // - 1: metric comparison.
    // - 2: weak content comparison.
    shared_ptr<int32_t> checkType_ {};
    // The end of the creation time range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> createEndTime_ {};
    // The start of the creation time range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> createStartTime_ {};
    // The execution status filter. Valid values:
    // 
    // - 0: pending.
    // - 1: running.
    // - 2: stopped.
    // - 3: failed.
    // - 4: completed.
    shared_ptr<int32_t> execStatus_ {};
    // Specifies whether scheduling is enabled. Valid values:
    // 
    // - 0: disabled.
    // - 1: enabled.
    shared_ptr<int32_t> isScheduled_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The task name. Fuzzy match is supported.
    shared_ptr<string> taskName_ {};
    // The validation template name. Fuzzy match is supported. The server automatically converts the name into a list of template IDs for filtering.
    shared_ptr<string> templateName_ {};
    // The end of the update time range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> updateEndTime_ {};
    // The start of the update time range. Format: YYYY-MM-DD HH:MM:SS.
    shared_ptr<string> updateStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
