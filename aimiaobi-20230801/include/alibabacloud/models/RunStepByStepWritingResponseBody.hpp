// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunStepByStepWritingResponseBodyHeader.hpp>
#include <alibabacloud/models/RunStepByStepWritingResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunStepByStepWritingResponseBody() = default ;
    RunStepByStepWritingResponseBody(const RunStepByStepWritingResponseBody &) = default ;
    RunStepByStepWritingResponseBody(RunStepByStepWritingResponseBody &&) = default ;
    RunStepByStepWritingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingResponseBody() = default ;
    RunStepByStepWritingResponseBody& operator=(const RunStepByStepWritingResponseBody &) = default ;
    RunStepByStepWritingResponseBody& operator=(RunStepByStepWritingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunStepByStepWritingResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunStepByStepWritingResponseBodyHeader) };
    inline RunStepByStepWritingResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunStepByStepWritingResponseBodyHeader) };
    inline RunStepByStepWritingResponseBody& setHeader(const RunStepByStepWritingResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunStepByStepWritingResponseBody& setHeader(RunStepByStepWritingResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunStepByStepWritingResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunStepByStepWritingResponseBodyPayload) };
    inline RunStepByStepWritingResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunStepByStepWritingResponseBodyPayload) };
    inline RunStepByStepWritingResponseBody& setPayload(const RunStepByStepWritingResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunStepByStepWritingResponseBody& setPayload(RunStepByStepWritingResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunStepByStepWritingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunStepByStepWritingResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunStepByStepWritingResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
