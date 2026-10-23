// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCANCELTODOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCANCELTODOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class BatchCancelTodosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCancelTodosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cancelledCount, cancelledCount_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCancelTodosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cancelledCount, cancelledCount_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    BatchCancelTodosResponseBody() = default ;
    BatchCancelTodosResponseBody(const BatchCancelTodosResponseBody &) = default ;
    BatchCancelTodosResponseBody(BatchCancelTodosResponseBody &&) = default ;
    BatchCancelTodosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCancelTodosResponseBody() = default ;
    BatchCancelTodosResponseBody& operator=(const BatchCancelTodosResponseBody &) = default ;
    BatchCancelTodosResponseBody& operator=(BatchCancelTodosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelledCount_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // cancelledCount Field Functions 
    bool hasCancelledCount() const { return this->cancelledCount_ != nullptr;};
    void deleteCancelledCount() { this->cancelledCount_ = nullptr;};
    inline int64_t getCancelledCount() const { DARABONBA_PTR_GET_DEFAULT(cancelledCount_, 0L) };
    inline BatchCancelTodosResponseBody& setCancelledCount(int64_t cancelledCount) { DARABONBA_PTR_SET_VALUE(cancelledCount_, cancelledCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchCancelTodosResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchCancelTodosResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCancelTodosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The actual number of canceled items. The value is 0 for idempotent repeated calls.
    shared_ptr<int64_t> cancelledCount_ {};
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
