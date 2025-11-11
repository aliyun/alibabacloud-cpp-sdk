// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCWASHINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCWASHINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocWashingResponseBodyHeader.hpp>
#include <alibabacloud/models/RunDocWashingResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocWashingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocWashingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocWashingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunDocWashingResponseBody() = default ;
    RunDocWashingResponseBody(const RunDocWashingResponseBody &) = default ;
    RunDocWashingResponseBody(RunDocWashingResponseBody &&) = default ;
    RunDocWashingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocWashingResponseBody() = default ;
    RunDocWashingResponseBody& operator=(const RunDocWashingResponseBody &) = default ;
    RunDocWashingResponseBody& operator=(RunDocWashingResponseBody &&) = default ;
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
    inline RunDocWashingResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunDocWashingResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunDocWashingResponseBodyHeader) };
    inline RunDocWashingResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunDocWashingResponseBodyHeader) };
    inline RunDocWashingResponseBody& setHeader(const RunDocWashingResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunDocWashingResponseBody& setHeader(RunDocWashingResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunDocWashingResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunDocWashingResponseBodyPayload) };
    inline RunDocWashingResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunDocWashingResponseBodyPayload) };
    inline RunDocWashingResponseBody& setPayload(const RunDocWashingResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunDocWashingResponseBody& setPayload(RunDocWashingResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDocWashingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunDocWashingResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunDocWashingResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
