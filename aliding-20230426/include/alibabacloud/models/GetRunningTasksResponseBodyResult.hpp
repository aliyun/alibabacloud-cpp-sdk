// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGTASKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGTASKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRunningTasksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveTimeGMT, activeTimeGMT_);
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ActualActionerId, actualActionerId_);
      DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_TO_JSON(FinishTimeGMT, finishTimeGMT_);
      DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TitleInEnglish, titleInEnglish_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningTasksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveTimeGMT, activeTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ActualActionerId, actualActionerId_);
      DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_FROM_JSON(FinishTimeGMT, finishTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TitleInEnglish, titleInEnglish_);
    };
    GetRunningTasksResponseBodyResult() = default ;
    GetRunningTasksResponseBodyResult(const GetRunningTasksResponseBodyResult &) = default ;
    GetRunningTasksResponseBodyResult(GetRunningTasksResponseBodyResult &&) = default ;
    GetRunningTasksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningTasksResponseBodyResult() = default ;
    GetRunningTasksResponseBodyResult& operator=(const GetRunningTasksResponseBodyResult &) = default ;
    GetRunningTasksResponseBodyResult& operator=(GetRunningTasksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeTimeGMT_ == nullptr
        && return this->activityId_ == nullptr && return this->actualActionerId_ == nullptr && return this->createTimeGMT_ == nullptr && return this->finishTimeGMT_ == nullptr && return this->originatorId_ == nullptr
        && return this->processInstanceId_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskType_ == nullptr && return this->title_ == nullptr
        && return this->titleInEnglish_ == nullptr; };
    // activeTimeGMT Field Functions 
    bool hasActiveTimeGMT() const { return this->activeTimeGMT_ != nullptr;};
    void deleteActiveTimeGMT() { this->activeTimeGMT_ = nullptr;};
    inline string activeTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(activeTimeGMT_, "") };
    inline GetRunningTasksResponseBodyResult& setActiveTimeGMT(string activeTimeGMT) { DARABONBA_PTR_SET_VALUE(activeTimeGMT_, activeTimeGMT) };


    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline GetRunningTasksResponseBodyResult& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // actualActionerId Field Functions 
    bool hasActualActionerId() const { return this->actualActionerId_ != nullptr;};
    void deleteActualActionerId() { this->actualActionerId_ = nullptr;};
    inline string actualActionerId() const { DARABONBA_PTR_GET_DEFAULT(actualActionerId_, "") };
    inline GetRunningTasksResponseBodyResult& setActualActionerId(string actualActionerId) { DARABONBA_PTR_SET_VALUE(actualActionerId_, actualActionerId) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetRunningTasksResponseBodyResult& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // finishTimeGMT Field Functions 
    bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
    void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
    inline string finishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
    inline GetRunningTasksResponseBodyResult& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string originatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline GetRunningTasksResponseBodyResult& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetRunningTasksResponseBodyResult& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRunningTasksResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetRunningTasksResponseBodyResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetRunningTasksResponseBodyResult& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetRunningTasksResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // titleInEnglish Field Functions 
    bool hasTitleInEnglish() const { return this->titleInEnglish_ != nullptr;};
    void deleteTitleInEnglish() { this->titleInEnglish_ = nullptr;};
    inline string titleInEnglish() const { DARABONBA_PTR_GET_DEFAULT(titleInEnglish_, "") };
    inline GetRunningTasksResponseBodyResult& setTitleInEnglish(string titleInEnglish) { DARABONBA_PTR_SET_VALUE(titleInEnglish_, titleInEnglish) };


  protected:
    std::shared_ptr<string> activeTimeGMT_ = nullptr;
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> actualActionerId_ = nullptr;
    std::shared_ptr<string> createTimeGMT_ = nullptr;
    std::shared_ptr<string> finishTimeGMT_ = nullptr;
    std::shared_ptr<string> originatorId_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> titleInEnglish_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
