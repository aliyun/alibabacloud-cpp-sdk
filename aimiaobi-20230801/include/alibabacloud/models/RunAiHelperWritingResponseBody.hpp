// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunAiHelperWritingResponseBodyHeader.hpp>
#include <alibabacloud/models/RunAiHelperWritingResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunAiHelperWritingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAiHelperWritingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RunAiHelperWritingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RunAiHelperWritingResponseBody() = default ;
    RunAiHelperWritingResponseBody(const RunAiHelperWritingResponseBody &) = default ;
    RunAiHelperWritingResponseBody(RunAiHelperWritingResponseBody &&) = default ;
    RunAiHelperWritingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAiHelperWritingResponseBody() = default ;
    RunAiHelperWritingResponseBody& operator=(const RunAiHelperWritingResponseBody &) = default ;
    RunAiHelperWritingResponseBody& operator=(RunAiHelperWritingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->header_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->payload_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RunAiHelperWritingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunAiHelperWritingResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunAiHelperWritingResponseBodyHeader) };
    inline RunAiHelperWritingResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunAiHelperWritingResponseBodyHeader) };
    inline RunAiHelperWritingResponseBody& setHeader(const RunAiHelperWritingResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunAiHelperWritingResponseBody& setHeader(RunAiHelperWritingResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline RunAiHelperWritingResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunAiHelperWritingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunAiHelperWritingResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunAiHelperWritingResponseBodyPayload) };
    inline RunAiHelperWritingResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunAiHelperWritingResponseBodyPayload) };
    inline RunAiHelperWritingResponseBody& setPayload(const RunAiHelperWritingResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunAiHelperWritingResponseBody& setPayload(RunAiHelperWritingResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunAiHelperWritingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunAiHelperWritingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 业务处理结果状态码
    std::shared_ptr<string> code_ = nullptr;
    // 流式响应的头部信息，包含事件类型、状态码等元数据
    std::shared_ptr<RunAiHelperWritingResponseBodyHeader> header_ = nullptr;
    // HTTP响应状态码
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // 业务处理结果描述信息
    std::shared_ptr<string> message_ = nullptr;
    // 包含写作输出内容和Token使用量统计
    std::shared_ptr<RunAiHelperWritingResponseBodyPayload> payload_ = nullptr;
    // 本次API请求的唯一标识
    std::shared_ptr<string> requestId_ = nullptr;
    // 请求是否处理成功
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
