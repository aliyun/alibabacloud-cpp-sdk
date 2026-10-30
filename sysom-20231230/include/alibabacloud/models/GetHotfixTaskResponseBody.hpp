// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTFIXTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTFIXTASKRESPONSEBODY_HPP_
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
  class GetHotfixTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotfixTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotfixTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetHotfixTaskResponseBody() = default ;
    GetHotfixTaskResponseBody(const GetHotfixTaskResponseBody &) = default ;
    GetHotfixTaskResponseBody(GetHotfixTaskResponseBody &&) = default ;
    GetHotfixTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotfixTaskResponseBody() = default ;
    GetHotfixTaskResponseBody& operator=(const GetHotfixTaskResponseBody &) = default ;
    GetHotfixTaskResponseBody& operator=(GetHotfixTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(cveId, cveId_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(jobs, jobs_);
        DARABONBA_PTR_TO_JSON(operation, operation_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(cveId, cveId_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(jobs, jobs_);
        DARABONBA_PTR_FROM_JSON(operation, operation_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(hotfixStatus, hotfixStatus_);
          DARABONBA_PTR_TO_JSON(instance, instance_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(hotfixStatus, hotfixStatus_);
          DARABONBA_PTR_FROM_JSON(instance, instance_);
          DARABONBA_PTR_FROM_JSON(region, region_);
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
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->hotfixStatus_ == nullptr && this->instance_ == nullptr && this->region_ == nullptr && this->status_ == nullptr; };
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


        // hotfixStatus Field Functions 
        bool hasHotfixStatus() const { return this->hotfixStatus_ != nullptr;};
        void deleteHotfixStatus() { this->hotfixStatus_ = nullptr;};
        inline string getHotfixStatus() const { DARABONBA_PTR_GET_DEFAULT(hotfixStatus_, "") };
        inline Jobs& setHotfixStatus(string hotfixStatus) { DARABONBA_PTR_SET_VALUE(hotfixStatus_, hotfixStatus) };


        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
        inline Jobs& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Jobs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Jobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The unified error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // The hotfix status.
        shared_ptr<string> hotfixStatus_ {};
        // The ID of the instance.
        shared_ptr<string> instance_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The status of the instance task.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->cveId_ == nullptr && this->finishedAt_ == nullptr && this->jobs_ == nullptr && this->operation_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // cveId Field Functions 
      bool hasCveId() const { return this->cveId_ != nullptr;};
      void deleteCveId() { this->cveId_ = nullptr;};
      inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
      inline Data& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Data& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<Data::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Data::Jobs>) };
      inline vector<Data::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<Data::Jobs>) };
      inline Data& setJobs(const vector<Data::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline Data& setJobs(vector<Data::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Data& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


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
      // The time when the task was created.
      shared_ptr<string> createdAt_ {};
      // CVE ID
      shared_ptr<string> cveId_ {};
      // The time when the task was completed.
      shared_ptr<string> finishedAt_ {};
      // The list of instance tasks.
      shared_ptr<vector<Data::Jobs>> jobs_ {};
      // The operation type of the task.
      shared_ptr<string> operation_ {};
      // The status of the task.
      shared_ptr<string> status_ {};
      // The ID of the asynchronous task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotfixTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHotfixTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHotfixTaskResponseBody::Data) };
    inline GetHotfixTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHotfixTaskResponseBody::Data) };
    inline GetHotfixTaskResponseBody& setData(const GetHotfixTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotfixTaskResponseBody& setData(GetHotfixTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotfixTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotfixTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    // - If `code` is `Success`, the authorization is successful.
    // - Other status codes indicate that the authorization failed. If the authorization fails, check the `message` field for the detailed fault information.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetHotfixTaskResponseBody::Data> data_ {};
    // The error message.
    // - If `code` is `Success`, this field is empty.
    // - Otherwise, this field contains the request error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
