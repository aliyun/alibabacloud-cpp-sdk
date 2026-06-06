// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYTASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYTASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class BatchQueryTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    BatchQueryTaskStatusResponseBody() = default ;
    BatchQueryTaskStatusResponseBody(const BatchQueryTaskStatusResponseBody &) = default ;
    BatchQueryTaskStatusResponseBody(BatchQueryTaskStatusResponseBody &&) = default ;
    BatchQueryTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryTaskStatusResponseBody() = default ;
    BatchQueryTaskStatusResponseBody& operator=(const BatchQueryTaskStatusResponseBody &) = default ;
    BatchQueryTaskStatusResponseBody& operator=(BatchQueryTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(taskStatusList, taskStatusList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(taskStatusList, taskStatusList_);
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
      class TaskStatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskStatusList& obj) { 
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(taskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, TaskStatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline TaskStatusList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline TaskStatusList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->taskStatusList_ == nullptr; };
      // taskStatusList Field Functions 
      bool hasTaskStatusList() const { return this->taskStatusList_ != nullptr;};
      void deleteTaskStatusList() { this->taskStatusList_ = nullptr;};
      inline const vector<Data::TaskStatusList> & getTaskStatusList() const { DARABONBA_PTR_GET_CONST(taskStatusList_, vector<Data::TaskStatusList>) };
      inline vector<Data::TaskStatusList> getTaskStatusList() { DARABONBA_PTR_GET(taskStatusList_, vector<Data::TaskStatusList>) };
      inline Data& setTaskStatusList(const vector<Data::TaskStatusList> & taskStatusList) { DARABONBA_PTR_SET_VALUE(taskStatusList_, taskStatusList) };
      inline Data& setTaskStatusList(vector<Data::TaskStatusList> && taskStatusList) { DARABONBA_PTR_SET_RVALUE(taskStatusList_, taskStatusList) };


    protected:
      shared_ptr<vector<Data::TaskStatusList>> taskStatusList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchQueryTaskStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchQueryTaskStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BatchQueryTaskStatusResponseBody::Data) };
    inline BatchQueryTaskStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BatchQueryTaskStatusResponseBody::Data) };
    inline BatchQueryTaskStatusResponseBody& setData(const BatchQueryTaskStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchQueryTaskStatusResponseBody& setData(BatchQueryTaskStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline BatchQueryTaskStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchQueryTaskStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchQueryTaskStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<BatchQueryTaskStatusResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
