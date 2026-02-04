// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISREPORTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISREPORTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeCacheAnalysisReportListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisReportListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DailyTasks, dailyTasks_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisReportListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyTasks, dailyTasks_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCacheAnalysisReportListResponseBody() = default ;
    DescribeCacheAnalysisReportListResponseBody(const DescribeCacheAnalysisReportListResponseBody &) = default ;
    DescribeCacheAnalysisReportListResponseBody(DescribeCacheAnalysisReportListResponseBody &&) = default ;
    DescribeCacheAnalysisReportListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisReportListResponseBody() = default ;
    DescribeCacheAnalysisReportListResponseBody& operator=(const DescribeCacheAnalysisReportListResponseBody &) = default ;
    DescribeCacheAnalysisReportListResponseBody& operator=(DescribeCacheAnalysisReportListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DailyTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DailyTasks& obj) { 
        DARABONBA_PTR_TO_JSON(DailyTask, dailyTask_);
      };
      friend void from_json(const Darabonba::Json& j, DailyTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(DailyTask, dailyTask_);
      };
      DailyTasks() = default ;
      DailyTasks(const DailyTasks &) = default ;
      DailyTasks(DailyTasks &&) = default ;
      DailyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DailyTasks() = default ;
      DailyTasks& operator=(const DailyTasks &) = default ;
      DailyTasks& operator=(DailyTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DailyTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DailyTask& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(Tasks, tasks_);
        };
        friend void from_json(const Darabonba::Json& j, DailyTask& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
        };
        DailyTask() = default ;
        DailyTask(const DailyTask &) = default ;
        DailyTask(DailyTask &&) = default ;
        DailyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DailyTask() = default ;
        DailyTask& operator=(const DailyTask &) = default ;
        DailyTask& operator=(DailyTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tasks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
            DARABONBA_PTR_TO_JSON(Task, task_);
          };
          friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
            DARABONBA_PTR_FROM_JSON(Task, task_);
          };
          Tasks() = default ;
          Tasks(const Tasks &) = default ;
          Tasks(Tasks &&) = default ;
          Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tasks() = default ;
          Tasks& operator=(const Tasks &) = default ;
          Tasks& operator=(Tasks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Task : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Task& obj) { 
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            };
            friend void from_json(const Darabonba::Json& j, Task& obj) { 
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            };
            Task() = default ;
            Task(const Task &) = default ;
            Task(Task &&) = default ;
            Task(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Task() = default ;
            Task& operator=(const Task &) = default ;
            Task& operator=(Task &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
            inline Task& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline Task& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Task& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // taskId Field Functions 
            bool hasTaskId() const { return this->taskId_ != nullptr;};
            void deleteTaskId() { this->taskId_ = nullptr;};
            inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
            inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          protected:
            // The ID of the child node in the cluster instance.
            shared_ptr<string> nodeId_ {};
            // The start time of the offline key analytics task.
            shared_ptr<string> startTime_ {};
            // The state of the offline key analytics task. Valid values:
            // 
            // *   **success**
            // *   **running**
            shared_ptr<string> status_ {};
            // The ID of the task.
            shared_ptr<string> taskId_ {};
          };

          virtual bool empty() const override { return this->task_ == nullptr; };
          // task Field Functions 
          bool hasTask() const { return this->task_ != nullptr;};
          void deleteTask() { this->task_ = nullptr;};
          inline const vector<Tasks::Task> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<Tasks::Task>) };
          inline vector<Tasks::Task> getTask() { DARABONBA_PTR_GET(task_, vector<Tasks::Task>) };
          inline Tasks& setTask(const vector<Tasks::Task> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
          inline Tasks& setTask(vector<Tasks::Task> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


        protected:
          shared_ptr<vector<Tasks::Task>> task_ {};
        };

        virtual bool empty() const override { return this->date_ == nullptr
        && this->tasks_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline DailyTask& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // tasks Field Functions 
        bool hasTasks() const { return this->tasks_ != nullptr;};
        void deleteTasks() { this->tasks_ = nullptr;};
        inline const DailyTask::Tasks & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, DailyTask::Tasks) };
        inline DailyTask::Tasks getTasks() { DARABONBA_PTR_GET(tasks_, DailyTask::Tasks) };
        inline DailyTask& setTasks(const DailyTask::Tasks & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
        inline DailyTask& setTasks(DailyTask::Tasks && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


      protected:
        // The date when the offline key analytics task was performed.
        shared_ptr<string> date_ {};
        // Details about the offline key analysis reports.
        shared_ptr<DailyTask::Tasks> tasks_ {};
      };

      virtual bool empty() const override { return this->dailyTask_ == nullptr; };
      // dailyTask Field Functions 
      bool hasDailyTask() const { return this->dailyTask_ != nullptr;};
      void deleteDailyTask() { this->dailyTask_ = nullptr;};
      inline const vector<DailyTasks::DailyTask> & getDailyTask() const { DARABONBA_PTR_GET_CONST(dailyTask_, vector<DailyTasks::DailyTask>) };
      inline vector<DailyTasks::DailyTask> getDailyTask() { DARABONBA_PTR_GET(dailyTask_, vector<DailyTasks::DailyTask>) };
      inline DailyTasks& setDailyTask(const vector<DailyTasks::DailyTask> & dailyTask) { DARABONBA_PTR_SET_VALUE(dailyTask_, dailyTask) };
      inline DailyTasks& setDailyTask(vector<DailyTasks::DailyTask> && dailyTask) { DARABONBA_PTR_SET_RVALUE(dailyTask_, dailyTask) };


    protected:
      shared_ptr<vector<DailyTasks::DailyTask>> dailyTask_ {};
    };

    virtual bool empty() const override { return this->dailyTasks_ == nullptr
        && this->instanceId_ == nullptr && this->requestId_ == nullptr; };
    // dailyTasks Field Functions 
    bool hasDailyTasks() const { return this->dailyTasks_ != nullptr;};
    void deleteDailyTasks() { this->dailyTasks_ = nullptr;};
    inline const DescribeCacheAnalysisReportListResponseBody::DailyTasks & getDailyTasks() const { DARABONBA_PTR_GET_CONST(dailyTasks_, DescribeCacheAnalysisReportListResponseBody::DailyTasks) };
    inline DescribeCacheAnalysisReportListResponseBody::DailyTasks getDailyTasks() { DARABONBA_PTR_GET(dailyTasks_, DescribeCacheAnalysisReportListResponseBody::DailyTasks) };
    inline DescribeCacheAnalysisReportListResponseBody& setDailyTasks(const DescribeCacheAnalysisReportListResponseBody::DailyTasks & dailyTasks) { DARABONBA_PTR_SET_VALUE(dailyTasks_, dailyTasks) };
    inline DescribeCacheAnalysisReportListResponseBody& setDailyTasks(DescribeCacheAnalysisReportListResponseBody::DailyTasks && dailyTasks) { DARABONBA_PTR_SET_RVALUE(dailyTasks_, dailyTasks) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCacheAnalysisReportListResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCacheAnalysisReportListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the offline key analysis reports.
    shared_ptr<DescribeCacheAnalysisReportListResponseBody::DailyTasks> dailyTasks_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
