// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunBookBrainmapResponseBodyHeader.hpp>
#include <alibabacloud/models/RunBookBrainmapResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookBrainmapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookBrainmapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookBrainmapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunBookBrainmapResponseBody() = default ;
    RunBookBrainmapResponseBody(const RunBookBrainmapResponseBody &) = default ;
    RunBookBrainmapResponseBody(RunBookBrainmapResponseBody &&) = default ;
    RunBookBrainmapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookBrainmapResponseBody() = default ;
    RunBookBrainmapResponseBody& operator=(const RunBookBrainmapResponseBody &) = default ;
    RunBookBrainmapResponseBody& operator=(RunBookBrainmapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunBookBrainmapResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunBookBrainmapResponseBodyHeader) };
    inline RunBookBrainmapResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunBookBrainmapResponseBodyHeader) };
    inline RunBookBrainmapResponseBody& setHeader(const RunBookBrainmapResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunBookBrainmapResponseBody& setHeader(RunBookBrainmapResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunBookBrainmapResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunBookBrainmapResponseBodyPayload) };
    inline RunBookBrainmapResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunBookBrainmapResponseBodyPayload) };
    inline RunBookBrainmapResponseBody& setPayload(const RunBookBrainmapResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunBookBrainmapResponseBody& setPayload(RunBookBrainmapResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunBookBrainmapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunBookBrainmapResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunBookBrainmapResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
