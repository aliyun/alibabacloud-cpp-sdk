// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSTATUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSTATUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusScanTaskStatusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTaskStatusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTaskStatusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ListVirusScanTaskStatusesResponseBody() = default ;
    ListVirusScanTaskStatusesResponseBody(const ListVirusScanTaskStatusesResponseBody &) = default ;
    ListVirusScanTaskStatusesResponseBody(ListVirusScanTaskStatusesResponseBody &&) = default ;
    ListVirusScanTaskStatusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTaskStatusesResponseBody() = default ;
    ListVirusScanTaskStatusesResponseBody& operator=(const ListVirusScanTaskStatusesResponseBody &) = default ;
    ListVirusScanTaskStatusesResponseBody& operator=(ListVirusScanTaskStatusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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
      class TaskStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskStatus& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceAckCount, deviceAckCount_);
          DARABONBA_PTR_TO_JSON(DeviceResultFailCount, deviceResultFailCount_);
          DARABONBA_PTR_TO_JSON(DeviceResultSuccessCount, deviceResultSuccessCount_);
          DARABONBA_PTR_TO_JSON(DeviceStartCount, deviceStartCount_);
        };
        friend void from_json(const Darabonba::Json& j, TaskStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceAckCount, deviceAckCount_);
          DARABONBA_PTR_FROM_JSON(DeviceResultFailCount, deviceResultFailCount_);
          DARABONBA_PTR_FROM_JSON(DeviceResultSuccessCount, deviceResultSuccessCount_);
          DARABONBA_PTR_FROM_JSON(DeviceStartCount, deviceStartCount_);
        };
        TaskStatus() = default ;
        TaskStatus(const TaskStatus &) = default ;
        TaskStatus(TaskStatus &&) = default ;
        TaskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskStatus() = default ;
        TaskStatus& operator=(const TaskStatus &) = default ;
        TaskStatus& operator=(TaskStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceAckCount_ == nullptr
        && this->deviceResultFailCount_ == nullptr && this->deviceResultSuccessCount_ == nullptr && this->deviceStartCount_ == nullptr; };
        // deviceAckCount Field Functions 
        bool hasDeviceAckCount() const { return this->deviceAckCount_ != nullptr;};
        void deleteDeviceAckCount() { this->deviceAckCount_ = nullptr;};
        inline int32_t getDeviceAckCount() const { DARABONBA_PTR_GET_DEFAULT(deviceAckCount_, 0) };
        inline TaskStatus& setDeviceAckCount(int32_t deviceAckCount) { DARABONBA_PTR_SET_VALUE(deviceAckCount_, deviceAckCount) };


        // deviceResultFailCount Field Functions 
        bool hasDeviceResultFailCount() const { return this->deviceResultFailCount_ != nullptr;};
        void deleteDeviceResultFailCount() { this->deviceResultFailCount_ = nullptr;};
        inline int32_t getDeviceResultFailCount() const { DARABONBA_PTR_GET_DEFAULT(deviceResultFailCount_, 0) };
        inline TaskStatus& setDeviceResultFailCount(int32_t deviceResultFailCount) { DARABONBA_PTR_SET_VALUE(deviceResultFailCount_, deviceResultFailCount) };


        // deviceResultSuccessCount Field Functions 
        bool hasDeviceResultSuccessCount() const { return this->deviceResultSuccessCount_ != nullptr;};
        void deleteDeviceResultSuccessCount() { this->deviceResultSuccessCount_ = nullptr;};
        inline int32_t getDeviceResultSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(deviceResultSuccessCount_, 0) };
        inline TaskStatus& setDeviceResultSuccessCount(int32_t deviceResultSuccessCount) { DARABONBA_PTR_SET_VALUE(deviceResultSuccessCount_, deviceResultSuccessCount) };


        // deviceStartCount Field Functions 
        bool hasDeviceStartCount() const { return this->deviceStartCount_ != nullptr;};
        void deleteDeviceStartCount() { this->deviceStartCount_ = nullptr;};
        inline int32_t getDeviceStartCount() const { DARABONBA_PTR_GET_DEFAULT(deviceStartCount_, 0) };
        inline TaskStatus& setDeviceStartCount(int32_t deviceStartCount) { DARABONBA_PTR_SET_VALUE(deviceStartCount_, deviceStartCount) };


      protected:
        // The number of user terminal devices that have received the task.
        shared_ptr<int32_t> deviceAckCount_ {};
        // The number of user terminal devices on which the scan execution failed.
        shared_ptr<int32_t> deviceResultFailCount_ {};
        // The number of user terminal devices on which the scan was executed successfully.
        shared_ptr<int32_t> deviceResultSuccessCount_ {};
        // The number of user terminal devices that are currently executing the scan.
        shared_ptr<int32_t> deviceStartCount_ {};
      };

      virtual bool empty() const override { return this->taskId_ == nullptr
        && this->taskStatus_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline const Tasks::TaskStatus & getTaskStatus() const { DARABONBA_PTR_GET_CONST(taskStatus_, Tasks::TaskStatus) };
      inline Tasks::TaskStatus getTaskStatus() { DARABONBA_PTR_GET(taskStatus_, Tasks::TaskStatus) };
      inline Tasks& setTaskStatus(const Tasks::TaskStatus & taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };
      inline Tasks& setTaskStatus(Tasks::TaskStatus && taskStatus) { DARABONBA_PTR_SET_RVALUE(taskStatus_, taskStatus) };


    protected:
      // The virus scan task ID.
      shared_ptr<string> taskId_ {};
      // The execution progress measured by device count.
      shared_ptr<Tasks::TaskStatus> taskStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanTaskStatusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListVirusScanTaskStatusesResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListVirusScanTaskStatusesResponseBody::Tasks>) };
    inline vector<ListVirusScanTaskStatusesResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListVirusScanTaskStatusesResponseBody::Tasks>) };
    inline ListVirusScanTaskStatusesResponseBody& setTasks(const vector<ListVirusScanTaskStatusesResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListVirusScanTaskStatusesResponseBody& setTasks(vector<ListVirusScanTaskStatusesResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of execution progress for virus scan tasks.
    shared_ptr<vector<ListVirusScanTaskStatusesResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
