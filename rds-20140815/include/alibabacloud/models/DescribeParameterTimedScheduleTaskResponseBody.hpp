// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTIMEDSCHEDULETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTIMEDSCHEDULETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterTimedScheduleTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTimedScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTimedScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    DescribeParameterTimedScheduleTaskResponseBody() = default ;
    DescribeParameterTimedScheduleTaskResponseBody(const DescribeParameterTimedScheduleTaskResponseBody &) = default ;
    DescribeParameterTimedScheduleTaskResponseBody(DescribeParameterTimedScheduleTaskResponseBody &&) = default ;
    DescribeParameterTimedScheduleTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTimedScheduleTaskResponseBody() = default ;
    DescribeParameterTimedScheduleTaskResponseBody& operator=(const DescribeParameterTimedScheduleTaskResponseBody &) = default ;
    DescribeParameterTimedScheduleTaskResponseBody& operator=(DescribeParameterTimedScheduleTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->parameters_ == nullptr && this->status_ == nullptr && this->switchTime_ == nullptr && this->taskId_ == nullptr; };
      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline TaskList& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline TaskList& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchTime Field Functions 
      bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
      void deleteSwitchTime() { this->switchTime_ = nullptr;};
      inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
      inline TaskList& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<string> parameters_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> switchTime_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterTimedScheduleTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<DescribeParameterTimedScheduleTaskResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<DescribeParameterTimedScheduleTaskResponseBody::TaskList>) };
    inline vector<DescribeParameterTimedScheduleTaskResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<DescribeParameterTimedScheduleTaskResponseBody::TaskList>) };
    inline DescribeParameterTimedScheduleTaskResponseBody& setTaskList(const vector<DescribeParameterTimedScheduleTaskResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeParameterTimedScheduleTaskResponseBody& setTaskList(vector<DescribeParameterTimedScheduleTaskResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeParameterTimedScheduleTaskResponseBody::TaskList>> taskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
