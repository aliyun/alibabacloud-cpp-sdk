// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMETRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESUMETRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResumeTrafficResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ResumeTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ResumeTrafficResponseBody() = default ;
    ResumeTrafficResponseBody(const ResumeTrafficResponseBody &) = default ;
    ResumeTrafficResponseBody(ResumeTrafficResponseBody &&) = default ;
    ResumeTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeTrafficResponseBody() = default ;
    ResumeTrafficResponseBody& operator=(const ResumeTrafficResponseBody &) = default ;
    ResumeTrafficResponseBody& operator=(ResumeTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->errorCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResumeTrafficResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResumeTrafficResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ResumeTrafficResponseBodyData) };
    inline ResumeTrafficResponseBodyData data() { DARABONBA_PTR_GET(data_, ResumeTrafficResponseBodyData) };
    inline ResumeTrafficResponseBody& setData(const ResumeTrafficResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResumeTrafficResponseBody& setData(ResumeTrafficResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ResumeTrafficResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResumeTrafficResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResumeTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ResumeTrafficResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ResumeTrafficResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<ResumeTrafficResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
