// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONLINEEVALTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETONLINEEVALTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOnlineEvalTaskResponseBodyTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class GetOnlineEvalTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnlineEvalTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnlineEvalTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    GetOnlineEvalTaskResponseBody() = default ;
    GetOnlineEvalTaskResponseBody(const GetOnlineEvalTaskResponseBody &) = default ;
    GetOnlineEvalTaskResponseBody(GetOnlineEvalTaskResponseBody &&) = default ;
    GetOnlineEvalTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnlineEvalTaskResponseBody() = default ;
    GetOnlineEvalTaskResponseBody& operator=(const GetOnlineEvalTaskResponseBody &) = default ;
    GetOnlineEvalTaskResponseBody& operator=(GetOnlineEvalTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->task_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOnlineEvalTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOnlineEvalTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOnlineEvalTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetOnlineEvalTaskResponseBodyTask & task() const { DARABONBA_PTR_GET_CONST(task_, GetOnlineEvalTaskResponseBodyTask) };
    inline GetOnlineEvalTaskResponseBodyTask task() { DARABONBA_PTR_GET(task_, GetOnlineEvalTaskResponseBodyTask) };
    inline GetOnlineEvalTaskResponseBody& setTask(const GetOnlineEvalTaskResponseBodyTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetOnlineEvalTaskResponseBody& setTask(GetOnlineEvalTaskResponseBodyTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // Internal error code. Set only when the response is in error.
    std::shared_ptr<string> code_ = nullptr;
    // Response error message. Set only when the response is in error.
    std::shared_ptr<string> message_ = nullptr;
    // POP request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Task information
    std::shared_ptr<GetOnlineEvalTaskResponseBodyTask> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
