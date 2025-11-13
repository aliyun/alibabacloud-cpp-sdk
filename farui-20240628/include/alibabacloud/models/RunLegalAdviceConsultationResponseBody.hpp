// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunLegalAdviceConsultationResponseBodyUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunLegalAdviceConsultationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLegalAdviceConsultationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseMarkdown, responseMarkdown_);
      DARABONBA_PTR_TO_JSON(Round, round_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
    };
    friend void from_json(const Darabonba::Json& j, RunLegalAdviceConsultationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseMarkdown, responseMarkdown_);
      DARABONBA_PTR_FROM_JSON(Round, round_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
    };
    RunLegalAdviceConsultationResponseBody() = default ;
    RunLegalAdviceConsultationResponseBody(const RunLegalAdviceConsultationResponseBody &) = default ;
    RunLegalAdviceConsultationResponseBody(RunLegalAdviceConsultationResponseBody &&) = default ;
    RunLegalAdviceConsultationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLegalAdviceConsultationResponseBody() = default ;
    RunLegalAdviceConsultationResponseBody& operator=(const RunLegalAdviceConsultationResponseBody &) = default ;
    RunLegalAdviceConsultationResponseBody& operator=(RunLegalAdviceConsultationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->responseMarkdown_ == nullptr && return this->round_ == nullptr && return this->status_ == nullptr
        && return this->success_ == nullptr && return this->usage_ == nullptr && return this->contents_ == nullptr && return this->extra_ == nullptr && return this->httpStatusCode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RunLegalAdviceConsultationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunLegalAdviceConsultationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunLegalAdviceConsultationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseMarkdown Field Functions 
    bool hasResponseMarkdown() const { return this->responseMarkdown_ != nullptr;};
    void deleteResponseMarkdown() { this->responseMarkdown_ = nullptr;};
    inline string responseMarkdown() const { DARABONBA_PTR_GET_DEFAULT(responseMarkdown_, "") };
    inline RunLegalAdviceConsultationResponseBody& setResponseMarkdown(string responseMarkdown) { DARABONBA_PTR_SET_VALUE(responseMarkdown_, responseMarkdown) };


    // round Field Functions 
    bool hasRound() const { return this->round_ != nullptr;};
    void deleteRound() { this->round_ = nullptr;};
    inline int32_t round() const { DARABONBA_PTR_GET_DEFAULT(round_, 0) };
    inline RunLegalAdviceConsultationResponseBody& setRound(int32_t round) { DARABONBA_PTR_SET_VALUE(round_, round) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RunLegalAdviceConsultationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunLegalAdviceConsultationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const RunLegalAdviceConsultationResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, RunLegalAdviceConsultationResponseBodyUsage) };
    inline RunLegalAdviceConsultationResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, RunLegalAdviceConsultationResponseBodyUsage) };
    inline RunLegalAdviceConsultationResponseBody& setUsage(const RunLegalAdviceConsultationResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunLegalAdviceConsultationResponseBody& setUsage(RunLegalAdviceConsultationResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline string contents() const { DARABONBA_PTR_GET_DEFAULT(contents_, "") };
    inline RunLegalAdviceConsultationResponseBody& setContents(string contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline RunLegalAdviceConsultationResponseBody& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline RunLegalAdviceConsultationResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> responseMarkdown_ = nullptr;
    std::shared_ptr<int32_t> round_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<RunLegalAdviceConsultationResponseBodyUsage> usage_ = nullptr;
    std::shared_ptr<string> contents_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
