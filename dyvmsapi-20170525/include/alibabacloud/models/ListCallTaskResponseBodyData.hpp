// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListCallTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_TO_JSON(CompletedRate, completedRate_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(FireTime, fireTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_FROM_JSON(CompletedRate, completedRate_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(FireTime, fireTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCallTaskResponseBodyData() = default ;
    ListCallTaskResponseBodyData(const ListCallTaskResponseBodyData &) = default ;
    ListCallTaskResponseBodyData(ListCallTaskResponseBodyData &&) = default ;
    ListCallTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallTaskResponseBodyData() = default ;
    ListCallTaskResponseBodyData& operator=(const ListCallTaskResponseBodyData &) = default ;
    ListCallTaskResponseBodyData& operator=(ListCallTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->completeTime_ == nullptr && return this->completedCount_ == nullptr && return this->completedRate_ == nullptr && return this->data_ == nullptr && return this->dataType_ == nullptr
        && return this->fireTime_ == nullptr && return this->id_ == nullptr && return this->resource_ == nullptr && return this->status_ == nullptr && return this->stopTime_ == nullptr
        && return this->taskName_ == nullptr && return this->templateCode_ == nullptr && return this->templateName_ == nullptr && return this->totalCount_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListCallTaskResponseBodyData& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline ListCallTaskResponseBodyData& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // completedCount Field Functions 
    bool hasCompletedCount() const { return this->completedCount_ != nullptr;};
    void deleteCompletedCount() { this->completedCount_ = nullptr;};
    inline int64_t completedCount() const { DARABONBA_PTR_GET_DEFAULT(completedCount_, 0L) };
    inline ListCallTaskResponseBodyData& setCompletedCount(int64_t completedCount) { DARABONBA_PTR_SET_VALUE(completedCount_, completedCount) };


    // completedRate Field Functions 
    bool hasCompletedRate() const { return this->completedRate_ != nullptr;};
    void deleteCompletedRate() { this->completedRate_ = nullptr;};
    inline int32_t completedRate() const { DARABONBA_PTR_GET_DEFAULT(completedRate_, 0) };
    inline ListCallTaskResponseBodyData& setCompletedRate(int32_t completedRate) { DARABONBA_PTR_SET_VALUE(completedRate_, completedRate) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListCallTaskResponseBodyData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ListCallTaskResponseBodyData& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // fireTime Field Functions 
    bool hasFireTime() const { return this->fireTime_ != nullptr;};
    void deleteFireTime() { this->fireTime_ = nullptr;};
    inline string fireTime() const { DARABONBA_PTR_GET_DEFAULT(fireTime_, "") };
    inline ListCallTaskResponseBodyData& setFireTime(string fireTime) { DARABONBA_PTR_SET_VALUE(fireTime_, fireTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCallTaskResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListCallTaskResponseBodyData& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCallTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline ListCallTaskResponseBodyData& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListCallTaskResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline ListCallTaskResponseBodyData& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListCallTaskResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCallTaskResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The type of the task template. Valid values:
    // 
    // *   **VMS_VOICE_TTS**: the TTS notification template.
    // *   **VMS_VOICE_CODE**: the voice notification template.
    // *   **VMS_TTS**: the voice verification code template.
    std::shared_ptr<string> bizType_ = nullptr;
    // The time when the task was completed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The number of tasks that were complete.
    std::shared_ptr<int64_t> completedCount_ = nullptr;
    // The task progress.
    std::shared_ptr<int32_t> completedRate_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<string> data_ = nullptr;
    // The type of the called number.
    std::shared_ptr<string> dataType_ = nullptr;
    // The time when the scheduled task was started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> fireTime_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The calling number.
    std::shared_ptr<string> resource_ = nullptr;
    // The task state. Valid values:
    // 
    // *   **INIT**: The task was in the initial state.
    // *   **RELEASE**: The task was being parsed.
    // *   **RUNNING**: The task was running.
    // *   **STOP**: The task was manually suspended.
    // *   **SYSTEM_STOP**: The task was suspended by the system.
    // *   **CANCEL**: The task was manually canceled.
    // *   **SYSTEM_CANCEL**: The task was canceled by the system.
    // *   **DONE**: The task was complete.
    std::shared_ptr<string> status_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<string> stopTime_ = nullptr;
    // The task name.
    std::shared_ptr<string> taskName_ = nullptr;
    // The ID of the voice template.
    std::shared_ptr<string> templateCode_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The total number of called numbers.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
