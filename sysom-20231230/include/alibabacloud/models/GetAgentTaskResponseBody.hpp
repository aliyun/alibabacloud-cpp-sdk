// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAgentTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    GetAgentTaskResponseBody() = default ;
    GetAgentTaskResponseBody(const GetAgentTaskResponseBody &) = default ;
    GetAgentTaskResponseBody(GetAgentTaskResponseBody &&) = default ;
    GetAgentTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentTaskResponseBody() = default ;
    GetAgentTaskResponseBody& operator=(const GetAgentTaskResponseBody &) = default ;
    GetAgentTaskResponseBody& operator=(GetAgentTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(jobs, jobs_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(task_id, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(jobs, jobs_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(task_id, taskId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Jobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
          DARABONBA_PTR_TO_JSON(error, error_);
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(instance, instance_);
          DARABONBA_ANY_TO_JSON(params, params_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(result, result_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
          DARABONBA_PTR_FROM_JSON(error, error_);
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(instance, instance_);
          DARABONBA_ANY_FROM_JSON(params, params_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(result, result_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Jobs() = default ;
        Jobs(const Jobs &) = default ;
        Jobs(Jobs &&) = default ;
        Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Jobs() = default ;
        Jobs& operator=(const Jobs &) = default ;
        Jobs& operator=(Jobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->error_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->instance_ == nullptr && this->params_ == nullptr && this->region_ == nullptr
        && this->result_ == nullptr && this->status_ == nullptr; };
        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
        inline Jobs& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Jobs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Jobs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
        inline Jobs& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline         const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
        Darabonba::Json & getParams() { DARABONBA_GET(params_) };
        inline Jobs& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
        inline Jobs& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Jobs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline Jobs& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Jobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // When Job execution fails, this field contains the error message indicating the cause of the failure.
        shared_ptr<string> error_ {};
        // The error code indicating the reason for sub-job failure. Possible values:
        // * empty: The job executed normally.
        // * INSTANCE_NOT_SUPPORTED: The instance type is not supported.
        // * INSTANCE_NOT_EXISTS: The instance does not exist.
        // * INSTANCE_RELEASED: The instance has been released.
        // * INSTANCE_NOT_RUNNING: The instance is not running.
        // * INSTANCE_NOT_OWNED: The instance does not belong to the current account.
        // * AGENT_ALREADY_INSTALLED: The agent is already installed.
        // * AGENT_NOT_INSTALLED: The agent is not installed.
        // * AGENT_SAME_VERSION: The version is the same.
        // * HAS_RUNNING_JOB: There is a running job.
        // * RPM_LOCK_HELD: The RPM lock is held.
        // * DISK_SPACE_INSUFFICIENT: Insufficient disk space.
        // * NODE_LOAD_HIGH: High edge zone load.
        // * COMMAND_FAILED: Command execution failed.
        // * CLIENT_NOT_RUNNING: The Cloud Assistant agent is not running.
        // * CLIENT_NOT_RESPONSE: The Cloud Assistant agent is unresponsive.
        // * DELIVERY_TIMEOUT: Command delivery timeout.
        // * EXECUTION_TIMEOUT: Command execution timeout.
        // * TASK_CONCURRENCY_LIMIT: Task concurrency limit reached.
        shared_ptr<string> errorCode_ {};
        // Detailed reason for subtask execution failure. Possible values:  
        // * Instance type is not supported  
        // * Instance does not exist  
        // * Instance has been released  
        // * Instance is not running  
        // * Instance does not belong to the current account  
        // * Agent is already installed  
        // * Agent is not installed  
        // * Agent version is the same; no upgrade is required  
        // * A task is currently running; please retry later  
        // * RPM lock is occupied; please retry later  
        // * Insufficient disk space  
        // * Edge zone payload is too high; please retry later  
        // * Command execution failed; please retry later  
        // * Cloud Assistant Agent is not running  
        // * Cloud Assistant Agent is unresponsive  
        // * Command sending timeout  
        // * Command execution timeout  
        // * Task concurrency limit has been reached
        shared_ptr<string> errorMessage_ {};
        // Instance ID.
        shared_ptr<string> instance_ {};
        // Parameters of the sub-Job
        Darabonba::Json params_ {};
        // Region ID.
        shared_ptr<string> region_ {};
        // Result of sub-Job execution
        shared_ptr<string> result_ {};
        // Sub-Job status:  
        // - Created: Created  
        // - Running: Running  
        // - Success: Job Run Succeeded  
        // - Fail: Job Run failed
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->jobs_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr; };
      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<Data::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Data::Jobs>) };
      inline vector<Data::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<Data::Jobs>) };
      inline Data& setJobs(const vector<Data::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline Data& setJobs(vector<Data::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // List of sub-Jobs
      shared_ptr<vector<Data::Jobs>> jobs_ {};
      shared_ptr<string> status_ {};
      // Job ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentTaskResponseBody::Data) };
    inline GetAgentTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentTaskResponseBody::Data) };
    inline GetAgentTaskResponseBody& setData(const GetAgentTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentTaskResponseBody& setData(GetAgentTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // Request ID, which can be used for end-to-end Diagnosis
    shared_ptr<string> requestId_ {};
    // Status code  
    // - `code == Success` indicates that authorization Succeeded.  
    // - Any other status code indicates Failed to Authorize. When authorization fails, View the `message` field to obtain the detailed error message.
    shared_ptr<string> code_ {};
    // Returned Data.
    shared_ptr<GetAgentTaskResponseBody::Data> data_ {};
    // Error message  
    // - If `code == Success`, this field is empty;  
    // - Otherwise, this field contains the Request error message.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
