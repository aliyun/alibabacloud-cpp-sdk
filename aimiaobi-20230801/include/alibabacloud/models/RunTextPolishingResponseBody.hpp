// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTEXTPOLISHINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNTEXTPOLISHINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunTextPolishingResponseBodyHeader.hpp>
#include <alibabacloud/models/RunTextPolishingResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTextPolishingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTextPolishingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTextPolishingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunTextPolishingResponseBody() = default ;
    RunTextPolishingResponseBody(const RunTextPolishingResponseBody &) = default ;
    RunTextPolishingResponseBody(RunTextPolishingResponseBody &&) = default ;
    RunTextPolishingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTextPolishingResponseBody() = default ;
    RunTextPolishingResponseBody& operator=(const RunTextPolishingResponseBody &) = default ;
    RunTextPolishingResponseBody& operator=(RunTextPolishingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunTextPolishingResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunTextPolishingResponseBodyHeader) };
    inline RunTextPolishingResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunTextPolishingResponseBodyHeader) };
    inline RunTextPolishingResponseBody& setHeader(const RunTextPolishingResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunTextPolishingResponseBody& setHeader(RunTextPolishingResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunTextPolishingResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunTextPolishingResponseBodyPayload) };
    inline RunTextPolishingResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunTextPolishingResponseBodyPayload) };
    inline RunTextPolishingResponseBody& setPayload(const RunTextPolishingResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunTextPolishingResponseBody& setPayload(RunTextPolishingResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunTextPolishingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunTextPolishingResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunTextPolishingResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
