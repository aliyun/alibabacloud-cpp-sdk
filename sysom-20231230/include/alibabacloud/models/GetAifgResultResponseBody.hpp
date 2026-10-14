// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIFGRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIFGRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAifgResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAifgResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAifgResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAifgResultResponseBody() = default ;
    GetAifgResultResponseBody(const GetAifgResultResponseBody &) = default ;
    GetAifgResultResponseBody(GetAifgResultResponseBody &&) = default ;
    GetAifgResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAifgResultResponseBody() = default ;
    GetAifgResultResponseBody& operator=(const GetAifgResultResponseBody &) = default ;
    GetAifgResultResponseBody& operator=(GetAifgResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(traceTaskId, traceTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(traceTaskId, traceTaskId_);
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
      virtual bool empty() const override { return this->result_ == nullptr
        && this->serviceName_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr && this->taskId_ == nullptr && this->traceTaskId_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline       const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
      Darabonba::Json & getResult() { DARABONBA_GET(result_) };
      inline Data& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
      inline Data& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline Data& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // traceTaskId Field Functions 
      bool hasTraceTaskId() const { return this->traceTaskId_ != nullptr;};
      void deleteTraceTaskId() { this->traceTaskId_ = nullptr;};
      inline string getTraceTaskId() const { DARABONBA_PTR_GET_DEFAULT(traceTaskId_, "") };
      inline Data& setTraceTaskId(string traceTaskId) { DARABONBA_PTR_SET_VALUE(traceTaskId_, traceTaskId) };


    protected:
      // The diagnostic result.
      Darabonba::Json result_ {};
      // The service name.
      shared_ptr<string> serviceName_ {};
      // The status of the root data.
      shared_ptr<string> status_ {};
      // The time when the data was created.
      shared_ptr<string> submitTime_ {};
      // The unique task ID.
      shared_ptr<string> taskId_ {};
      // The training task ID.
      shared_ptr<string> traceTaskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAifgResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAifgResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAifgResultResponseBody::Data) };
    inline GetAifgResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAifgResultResponseBody::Data) };
    inline GetAifgResultResponseBody& setData(const GetAifgResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAifgResultResponseBody& setData(GetAifgResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAifgResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAifgResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data details.
    shared_ptr<GetAifgResultResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
