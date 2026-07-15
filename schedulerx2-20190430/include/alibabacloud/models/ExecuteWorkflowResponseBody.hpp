// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ExecuteWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecuteWorkflowResponseBody() = default ;
    ExecuteWorkflowResponseBody(const ExecuteWorkflowResponseBody &) = default ;
    ExecuteWorkflowResponseBody(ExecuteWorkflowResponseBody &&) = default ;
    ExecuteWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteWorkflowResponseBody() = default ;
    ExecuteWorkflowResponseBody& operator=(const ExecuteWorkflowResponseBody &) = default ;
    ExecuteWorkflowResponseBody& operator=(ExecuteWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(WfInstanceId, wfInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(WfInstanceId, wfInstanceId_);
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
      virtual bool empty() const override { return this->wfInstanceId_ == nullptr; };
      // wfInstanceId Field Functions 
      bool hasWfInstanceId() const { return this->wfInstanceId_ != nullptr;};
      void deleteWfInstanceId() { this->wfInstanceId_ = nullptr;};
      inline int64_t getWfInstanceId() const { DARABONBA_PTR_GET_DEFAULT(wfInstanceId_, 0L) };
      inline Data& setWfInstanceId(int64_t wfInstanceId) { DARABONBA_PTR_SET_VALUE(wfInstanceId_, wfInstanceId) };


    protected:
      // The ID of the workflow instance.
      shared_ptr<int64_t> wfInstanceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ExecuteWorkflowResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteWorkflowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteWorkflowResponseBody::Data) };
    inline ExecuteWorkflowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteWorkflowResponseBody::Data) };
    inline ExecuteWorkflowResponseBody& setData(const ExecuteWorkflowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteWorkflowResponseBody& setData(ExecuteWorkflowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteWorkflowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteWorkflowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code.
    shared_ptr<int32_t> code_ {};
    // The data returned for a successful request. It contains the workflow instance ID.
    shared_ptr<ExecuteWorkflowResponseBody::Data> data_ {};
    // The error message. This parameter is returned only if the request fails.
    shared_ptr<string> message_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
