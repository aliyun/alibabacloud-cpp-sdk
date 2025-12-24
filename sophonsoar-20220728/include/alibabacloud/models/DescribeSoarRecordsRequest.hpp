// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedBeginTime, completedBeginTime_);
      DARABONBA_PTR_TO_JSON(CompletedEndTime, completedEndTime_);
      DARABONBA_PTR_TO_JSON(EndMillis, endMillis_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(QueryValue, queryValue_);
      DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
      DARABONBA_PTR_TO_JSON(StartMillis, startMillis_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(TriggerUser, triggerUser_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedBeginTime, completedBeginTime_);
      DARABONBA_PTR_FROM_JSON(CompletedEndTime, completedEndTime_);
      DARABONBA_PTR_FROM_JSON(EndMillis, endMillis_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(QueryValue, queryValue_);
      DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
      DARABONBA_PTR_FROM_JSON(StartMillis, startMillis_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(TriggerUser, triggerUser_);
    };
    DescribeSoarRecordsRequest() = default ;
    DescribeSoarRecordsRequest(const DescribeSoarRecordsRequest &) = default ;
    DescribeSoarRecordsRequest(DescribeSoarRecordsRequest &&) = default ;
    DescribeSoarRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordsRequest() = default ;
    DescribeSoarRecordsRequest& operator=(const DescribeSoarRecordsRequest &) = default ;
    DescribeSoarRecordsRequest& operator=(DescribeSoarRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedBeginTime_ == nullptr
        && return this->completedEndTime_ == nullptr && return this->endMillis_ == nullptr && return this->lang_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->playbookUuid_ == nullptr && return this->queryValue_ == nullptr && return this->requestUuid_ == nullptr && return this->startMillis_ == nullptr && return this->taskStatus_ == nullptr
        && return this->taskflowMd5_ == nullptr && return this->triggerType_ == nullptr && return this->triggerUser_ == nullptr; };
    // completedBeginTime Field Functions 
    bool hasCompletedBeginTime() const { return this->completedBeginTime_ != nullptr;};
    void deleteCompletedBeginTime() { this->completedBeginTime_ = nullptr;};
    inline int64_t completedBeginTime() const { DARABONBA_PTR_GET_DEFAULT(completedBeginTime_, 0L) };
    inline DescribeSoarRecordsRequest& setCompletedBeginTime(int64_t completedBeginTime) { DARABONBA_PTR_SET_VALUE(completedBeginTime_, completedBeginTime) };


    // completedEndTime Field Functions 
    bool hasCompletedEndTime() const { return this->completedEndTime_ != nullptr;};
    void deleteCompletedEndTime() { this->completedEndTime_ = nullptr;};
    inline int64_t completedEndTime() const { DARABONBA_PTR_GET_DEFAULT(completedEndTime_, 0L) };
    inline DescribeSoarRecordsRequest& setCompletedEndTime(int64_t completedEndTime) { DARABONBA_PTR_SET_VALUE(completedEndTime_, completedEndTime) };


    // endMillis Field Functions 
    bool hasEndMillis() const { return this->endMillis_ != nullptr;};
    void deleteEndMillis() { this->endMillis_ = nullptr;};
    inline int64_t endMillis() const { DARABONBA_PTR_GET_DEFAULT(endMillis_, 0L) };
    inline DescribeSoarRecordsRequest& setEndMillis(int64_t endMillis) { DARABONBA_PTR_SET_VALUE(endMillis_, endMillis) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSoarRecordsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribeSoarRecordsRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // queryValue Field Functions 
    bool hasQueryValue() const { return this->queryValue_ != nullptr;};
    void deleteQueryValue() { this->queryValue_ = nullptr;};
    inline string queryValue() const { DARABONBA_PTR_GET_DEFAULT(queryValue_, "") };
    inline DescribeSoarRecordsRequest& setQueryValue(string queryValue) { DARABONBA_PTR_SET_VALUE(queryValue_, queryValue) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string requestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DescribeSoarRecordsRequest& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


    // startMillis Field Functions 
    bool hasStartMillis() const { return this->startMillis_ != nullptr;};
    void deleteStartMillis() { this->startMillis_ = nullptr;};
    inline int64_t startMillis() const { DARABONBA_PTR_GET_DEFAULT(startMillis_, 0L) };
    inline DescribeSoarRecordsRequest& setStartMillis(int64_t startMillis) { DARABONBA_PTR_SET_VALUE(startMillis_, startMillis) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeSoarRecordsRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskflowMd5 Field Functions 
    bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
    void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
    inline string taskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
    inline DescribeSoarRecordsRequest& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline DescribeSoarRecordsRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // triggerUser Field Functions 
    bool hasTriggerUser() const { return this->triggerUser_ != nullptr;};
    void deleteTriggerUser() { this->triggerUser_ = nullptr;};
    inline string triggerUser() const { DARABONBA_PTR_GET_DEFAULT(triggerUser_, "") };
    inline DescribeSoarRecordsRequest& setTriggerUser(string triggerUser) { DARABONBA_PTR_SET_VALUE(triggerUser_, triggerUser) };


  protected:
    std::shared_ptr<int64_t> completedBeginTime_ = nullptr;
    std::shared_ptr<int64_t> completedEndTime_ = nullptr;
    // The end time of the task execution, in 13-digit timestamp format.
    std::shared_ptr<int64_t> endMillis_ = nullptr;
    // Set the language type for requests and received messages. The default is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Set which page to start displaying the query results from. The default value is 1, indicating the first page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Specify the maximum number of data entries per page when performing a paginated query. The default number of entries per page is 20. If the PageSize parameter is empty, it will return 10 entries by default.
    // > It is recommended not to leave the PageSize value empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The UUID of the playbook.
    // > You can obtain this parameter by calling the [DescribePlaybooks](~~DescribePlaybooks~~) interface.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    std::shared_ptr<string> queryValue_ = nullptr;
    // UUID of the playbook task execution.
    // > You can obtain this parameter by calling the [DescribeSoarRecords](https://help.aliyun.com/document_detail/2627455.html) interface.
    std::shared_ptr<string> requestUuid_ = nullptr;
    // The start time of the task execution, in 13-digit timestamp format.
    std::shared_ptr<int64_t> startMillis_ = nullptr;
    // The status of the task execution. Values:
    // 
    // - **success**: Successful task.
    // - **failed**: Failed task.
    // - **inprogress**: Task in progress
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The MD5 value of the playbook configuration.
    std::shared_ptr<string> taskflowMd5_ = nullptr;
    std::shared_ptr<string> triggerType_ = nullptr;
    // The Alibaba Cloud account ID that executed the playbook task.
    std::shared_ptr<string> triggerUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
