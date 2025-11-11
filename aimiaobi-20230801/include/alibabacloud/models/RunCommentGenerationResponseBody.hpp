// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunCommentGenerationResponseBodyHeader.hpp>
#include <alibabacloud/models/RunCommentGenerationResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCommentGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommentGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommentGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunCommentGenerationResponseBody() = default ;
    RunCommentGenerationResponseBody(const RunCommentGenerationResponseBody &) = default ;
    RunCommentGenerationResponseBody(RunCommentGenerationResponseBody &&) = default ;
    RunCommentGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommentGenerationResponseBody() = default ;
    RunCommentGenerationResponseBody& operator=(const RunCommentGenerationResponseBody &) = default ;
    RunCommentGenerationResponseBody& operator=(RunCommentGenerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->header_ == nullptr && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool end() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline RunCommentGenerationResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunCommentGenerationResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunCommentGenerationResponseBodyHeader) };
    inline RunCommentGenerationResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunCommentGenerationResponseBodyHeader) };
    inline RunCommentGenerationResponseBody& setHeader(const RunCommentGenerationResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunCommentGenerationResponseBody& setHeader(RunCommentGenerationResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunCommentGenerationResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunCommentGenerationResponseBodyPayload) };
    inline RunCommentGenerationResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunCommentGenerationResponseBodyPayload) };
    inline RunCommentGenerationResponseBody& setPayload(const RunCommentGenerationResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunCommentGenerationResponseBody& setPayload(RunCommentGenerationResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCommentGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunCommentGenerationResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunCommentGenerationResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
