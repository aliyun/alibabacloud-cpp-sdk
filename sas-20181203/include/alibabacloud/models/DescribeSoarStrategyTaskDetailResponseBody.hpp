// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
    };
    DescribeSoarStrategyTaskDetailResponseBody() = default ;
    DescribeSoarStrategyTaskDetailResponseBody(const DescribeSoarStrategyTaskDetailResponseBody &) = default ;
    DescribeSoarStrategyTaskDetailResponseBody(DescribeSoarStrategyTaskDetailResponseBody &&) = default ;
    DescribeSoarStrategyTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskDetailResponseBody() = default ;
    DescribeSoarStrategyTaskDetailResponseBody& operator=(const DescribeSoarStrategyTaskDetailResponseBody &) = default ;
    DescribeSoarStrategyTaskDetailResponseBody& operator=(DescribeSoarStrategyTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDetail& obj) { 
        DARABONBA_PTR_TO_JSON(LogInfo, logInfo_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(ProcessInfo, processInfo_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(LogInfo, logInfo_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(ProcessInfo, processInfo_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      };
      TaskDetail() = default ;
      TaskDetail(const TaskDetail &) = default ;
      TaskDetail(TaskDetail &&) = default ;
      TaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDetail() = default ;
      TaskDetail& operator=(const TaskDetail &) = default ;
      TaskDetail& operator=(TaskDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logInfo_ == nullptr
        && this->params_ == nullptr && this->processInfo_ == nullptr && this->taskName_ == nullptr; };
      // logInfo Field Functions 
      bool hasLogInfo() const { return this->logInfo_ != nullptr;};
      void deleteLogInfo() { this->logInfo_ = nullptr;};
      inline string getLogInfo() const { DARABONBA_PTR_GET_DEFAULT(logInfo_, "") };
      inline TaskDetail& setLogInfo(string logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline TaskDetail& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


      // processInfo Field Functions 
      bool hasProcessInfo() const { return this->processInfo_ != nullptr;};
      void deleteProcessInfo() { this->processInfo_ = nullptr;};
      inline string getProcessInfo() const { DARABONBA_PTR_GET_DEFAULT(processInfo_, "") };
      inline TaskDetail& setProcessInfo(string processInfo) { DARABONBA_PTR_SET_VALUE(processInfo_, processInfo) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The operational log information of the task.
      shared_ptr<string> logInfo_ {};
      // The parameters of the task.
      shared_ptr<string> params_ {};
      // The process information of the task.
      shared_ptr<string> processInfo_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarStrategyTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline const DescribeSoarStrategyTaskDetailResponseBody::TaskDetail & getTaskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, DescribeSoarStrategyTaskDetailResponseBody::TaskDetail) };
    inline DescribeSoarStrategyTaskDetailResponseBody::TaskDetail getTaskDetail() { DARABONBA_PTR_GET(taskDetail_, DescribeSoarStrategyTaskDetailResponseBody::TaskDetail) };
    inline DescribeSoarStrategyTaskDetailResponseBody& setTaskDetail(const DescribeSoarStrategyTaskDetailResponseBody::TaskDetail & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
    inline DescribeSoarStrategyTaskDetailResponseBody& setTaskDetail(DescribeSoarStrategyTaskDetailResponseBody::TaskDetail && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the task.
    shared_ptr<DescribeSoarStrategyTaskDetailResponseBody::TaskDetail> taskDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
