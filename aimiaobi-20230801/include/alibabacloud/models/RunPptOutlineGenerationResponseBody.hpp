// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNPPTOUTLINEGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNPPTOUTLINEGENERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunPptOutlineGenerationResponseBodyHeader.hpp>
#include <alibabacloud/models/RunPptOutlineGenerationResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunPptOutlineGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunPptOutlineGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RunPptOutlineGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RunPptOutlineGenerationResponseBody() = default ;
    RunPptOutlineGenerationResponseBody(const RunPptOutlineGenerationResponseBody &) = default ;
    RunPptOutlineGenerationResponseBody(RunPptOutlineGenerationResponseBody &&) = default ;
    RunPptOutlineGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunPptOutlineGenerationResponseBody() = default ;
    RunPptOutlineGenerationResponseBody& operator=(const RunPptOutlineGenerationResponseBody &) = default ;
    RunPptOutlineGenerationResponseBody& operator=(RunPptOutlineGenerationResponseBody &&) = default ;
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
    inline RunPptOutlineGenerationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunPptOutlineGenerationResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunPptOutlineGenerationResponseBodyHeader) };
    inline RunPptOutlineGenerationResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunPptOutlineGenerationResponseBodyHeader) };
    inline RunPptOutlineGenerationResponseBody& setHeader(const RunPptOutlineGenerationResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunPptOutlineGenerationResponseBody& setHeader(RunPptOutlineGenerationResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline RunPptOutlineGenerationResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunPptOutlineGenerationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunPptOutlineGenerationResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunPptOutlineGenerationResponseBodyPayload) };
    inline RunPptOutlineGenerationResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunPptOutlineGenerationResponseBodyPayload) };
    inline RunPptOutlineGenerationResponseBody& setPayload(const RunPptOutlineGenerationResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunPptOutlineGenerationResponseBody& setPayload(RunPptOutlineGenerationResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunPptOutlineGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunPptOutlineGenerationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<RunPptOutlineGenerationResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<RunPptOutlineGenerationResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
