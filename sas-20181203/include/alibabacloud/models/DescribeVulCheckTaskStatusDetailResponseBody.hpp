// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulCheckTaskStatusDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulCheckTaskStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStatuses, taskStatuses_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulCheckTaskStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStatuses, taskStatuses_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulCheckTaskStatusDetailResponseBody() = default ;
    DescribeVulCheckTaskStatusDetailResponseBody(const DescribeVulCheckTaskStatusDetailResponseBody &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBody(DescribeVulCheckTaskStatusDetailResponseBody &&) = default ;
    DescribeVulCheckTaskStatusDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulCheckTaskStatusDetailResponseBody() = default ;
    DescribeVulCheckTaskStatusDetailResponseBody& operator=(const DescribeVulCheckTaskStatusDetailResponseBody &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBody& operator=(DescribeVulCheckTaskStatusDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskStatuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskStatuses& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatusList, taskStatusList_);
      };
      friend void from_json(const Darabonba::Json& j, TaskStatuses& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatusList, taskStatusList_);
      };
      TaskStatuses() = default ;
      TaskStatuses(const TaskStatuses &) = default ;
      TaskStatuses(TaskStatuses &&) = default ;
      TaskStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskStatuses() = default ;
      TaskStatuses& operator=(const TaskStatuses &) = default ;
      TaskStatuses& operator=(TaskStatuses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskStatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskStatusList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, TaskStatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        TaskStatusList() = default ;
        TaskStatusList(const TaskStatusList &) = default ;
        TaskStatusList(TaskStatusList &&) = default ;
        TaskStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskStatusList() = default ;
        TaskStatusList& operator=(const TaskStatusList &) = default ;
        TaskStatusList& operator=(TaskStatusList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline TaskStatusList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TaskStatusList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The error code returned.
        shared_ptr<string> code_ {};
        // The status of the subtask. Valid values:
        // 
        // *   **0**: unhandled
        // *   **1**: collecting
        // *   **2**: collected
        // *   **3**: matching
        // *   **4**: complete
        shared_ptr<string> status_ {};
        // The type of the vulnerability. Valid values:
        // 
        // *   **cve**: Linux software vulnerability
        // *   **sys**: Windows system vulnerability
        // *   **cms**: Web-CMS vulnerability
        // *   **sca**: vulnerability that is detected based on software component analysis
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->taskId_ == nullptr
        && this->taskStatusList_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskStatuses& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatusList Field Functions 
      bool hasTaskStatusList() const { return this->taskStatusList_ != nullptr;};
      void deleteTaskStatusList() { this->taskStatusList_ = nullptr;};
      inline const vector<TaskStatuses::TaskStatusList> & getTaskStatusList() const { DARABONBA_PTR_GET_CONST(taskStatusList_, vector<TaskStatuses::TaskStatusList>) };
      inline vector<TaskStatuses::TaskStatusList> getTaskStatusList() { DARABONBA_PTR_GET(taskStatusList_, vector<TaskStatuses::TaskStatusList>) };
      inline TaskStatuses& setTaskStatusList(const vector<TaskStatuses::TaskStatusList> & taskStatusList) { DARABONBA_PTR_SET_VALUE(taskStatusList_, taskStatusList) };
      inline TaskStatuses& setTaskStatusList(vector<TaskStatuses::TaskStatusList> && taskStatusList) { DARABONBA_PTR_SET_RVALUE(taskStatusList_, taskStatusList) };


    protected:
      // The ID of the main task.
      shared_ptr<string> taskId_ {};
      // An array that consists of status information about the vulnerability scan subtask.
      shared_ptr<vector<TaskStatuses::TaskStatusList>> taskStatusList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskStatuses_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStatuses Field Functions 
    bool hasTaskStatuses() const { return this->taskStatuses_ != nullptr;};
    void deleteTaskStatuses() { this->taskStatuses_ = nullptr;};
    inline const vector<DescribeVulCheckTaskStatusDetailResponseBody::TaskStatuses> & getTaskStatuses() const { DARABONBA_PTR_GET_CONST(taskStatuses_, vector<DescribeVulCheckTaskStatusDetailResponseBody::TaskStatuses>) };
    inline vector<DescribeVulCheckTaskStatusDetailResponseBody::TaskStatuses> getTaskStatuses() { DARABONBA_PTR_GET(taskStatuses_, vector<DescribeVulCheckTaskStatusDetailResponseBody::TaskStatuses>) };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setTaskStatuses(const vector<DescribeVulCheckTaskStatusDetailResponseBody::TaskStatuses> & taskStatuses) { DARABONBA_PTR_SET_VALUE(taskStatuses_, taskStatuses) };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setTaskStatuses(vector<DescribeVulCheckTaskStatusDetailResponseBody::TaskStatuses> && taskStatuses) { DARABONBA_PTR_SET_RVALUE(taskStatuses_, taskStatuses) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the status information about the vulnerability scan tasks on the server.
    shared_ptr<vector<DescribeVulCheckTaskStatusDetailResponseBody::TaskStatuses>> taskStatuses_ {};
    // The total number of vulnerability scan tasks on the server.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
