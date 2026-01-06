// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRunningTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetRunningTasksResponseBody() = default ;
    GetRunningTasksResponseBody(const GetRunningTasksResponseBody &) = default ;
    GetRunningTasksResponseBody(GetRunningTasksResponseBody &&) = default ;
    GetRunningTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningTasksResponseBody() = default ;
    GetRunningTasksResponseBody& operator=(const GetRunningTasksResponseBody &) = default ;
    GetRunningTasksResponseBody& operator=(GetRunningTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeTimeGMT_ == nullptr
        && this->activityId_ == nullptr && this->actualActionerId_ == nullptr && this->createTimeGMT_ == nullptr && this->finishTimeGMT_ == nullptr && this->originatorId_ == nullptr
        && this->processInstanceId_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->title_ == nullptr
        && this->titleInEnglish_ == nullptr; };
      // activeTimeGMT Field Functions 
      bool hasActiveTimeGMT() const { return this->activeTimeGMT_ != nullptr;};
      void deleteActiveTimeGMT() { this->activeTimeGMT_ = nullptr;};
      inline string getActiveTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(activeTimeGMT_, "") };
      inline Result& setActiveTimeGMT(string activeTimeGMT) { DARABONBA_PTR_SET_VALUE(activeTimeGMT_, activeTimeGMT) };


      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
      inline Result& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // actualActionerId Field Functions 
      bool hasActualActionerId() const { return this->actualActionerId_ != nullptr;};
      void deleteActualActionerId() { this->actualActionerId_ = nullptr;};
      inline string getActualActionerId() const { DARABONBA_PTR_GET_DEFAULT(actualActionerId_, "") };
      inline Result& setActualActionerId(string actualActionerId) { DARABONBA_PTR_SET_VALUE(actualActionerId_, actualActionerId) };


      // createTimeGMT Field Functions 
      bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
      void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
      inline string getCreateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
      inline Result& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


      // finishTimeGMT Field Functions 
      bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
      void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
      inline string getFinishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
      inline Result& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


      // originatorId Field Functions 
      bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
      void deleteOriginatorId() { this->originatorId_ = nullptr;};
      inline string getOriginatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
      inline Result& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


      // processInstanceId Field Functions 
      bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
      void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
      inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
      inline Result& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Result& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Result& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // titleInEnglish Field Functions 
      bool hasTitleInEnglish() const { return this->titleInEnglish_ != nullptr;};
      void deleteTitleInEnglish() { this->titleInEnglish_ = nullptr;};
      inline string getTitleInEnglish() const { DARABONBA_PTR_GET_DEFAULT(titleInEnglish_, "") };
      inline Result& setTitleInEnglish(string titleInEnglish) { DARABONBA_PTR_SET_VALUE(titleInEnglish_, titleInEnglish) };


    protected:
      shared_ptr<string> activeTimeGMT_ {};
      shared_ptr<string> activityId_ {};
      shared_ptr<string> actualActionerId_ {};
      shared_ptr<string> createTimeGMT_ {};
      shared_ptr<string> finishTimeGMT_ {};
      shared_ptr<string> originatorId_ {};
      shared_ptr<string> processInstanceId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> titleInEnglish_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRunningTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetRunningTasksResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetRunningTasksResponseBody::Result>) };
    inline vector<GetRunningTasksResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetRunningTasksResponseBody::Result>) };
    inline GetRunningTasksResponseBody& setResult(const vector<GetRunningTasksResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetRunningTasksResponseBody& setResult(vector<GetRunningTasksResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetRunningTasksResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetRunningTasksResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetRunningTasksResponseBody::Result>> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
