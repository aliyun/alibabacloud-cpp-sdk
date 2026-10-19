// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEWORKFLOWTODOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOSEWORKFLOWTODOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CloseWorkflowTodosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseWorkflowTodosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cancelledCount, cancelledCount_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sourceWorkflowId, sourceWorkflowId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseWorkflowTodosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cancelledCount, cancelledCount_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sourceWorkflowId, sourceWorkflowId_);
    };
    CloseWorkflowTodosResponseBody() = default ;
    CloseWorkflowTodosResponseBody(const CloseWorkflowTodosResponseBody &) = default ;
    CloseWorkflowTodosResponseBody(CloseWorkflowTodosResponseBody &&) = default ;
    CloseWorkflowTodosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseWorkflowTodosResponseBody() = default ;
    CloseWorkflowTodosResponseBody& operator=(const CloseWorkflowTodosResponseBody &) = default ;
    CloseWorkflowTodosResponseBody& operator=(CloseWorkflowTodosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelledCount_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->sourceWorkflowId_ == nullptr; };
    // cancelledCount Field Functions 
    bool hasCancelledCount() const { return this->cancelledCount_ != nullptr;};
    void deleteCancelledCount() { this->cancelledCount_ = nullptr;};
    inline int64_t getCancelledCount() const { DARABONBA_PTR_GET_DEFAULT(cancelledCount_, 0L) };
    inline CloseWorkflowTodosResponseBody& setCancelledCount(int64_t cancelledCount) { DARABONBA_PTR_SET_VALUE(cancelledCount_, cancelledCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloseWorkflowTodosResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloseWorkflowTodosResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloseWorkflowTodosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceWorkflowId Field Functions 
    bool hasSourceWorkflowId() const { return this->sourceWorkflowId_ != nullptr;};
    void deleteSourceWorkflowId() { this->sourceWorkflowId_ = nullptr;};
    inline string getSourceWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(sourceWorkflowId_, "") };
    inline CloseWorkflowTodosResponseBody& setSourceWorkflowId(string sourceWorkflowId) { DARABONBA_PTR_SET_VALUE(sourceWorkflowId_, sourceWorkflowId) };


  protected:
    // 关闭条数（幂等重复调用为 0）
    shared_ptr<int64_t> cancelledCount_ {};
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 工作流 ID（原样回显）
    shared_ptr<string> sourceWorkflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
