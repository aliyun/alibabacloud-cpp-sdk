// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunCustomHotTopicViewPointAnalysisResponseBodyHeader.hpp>
#include <alibabacloud/models/RunCustomHotTopicViewPointAnalysisResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicViewPointAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicViewPointAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicViewPointAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunCustomHotTopicViewPointAnalysisResponseBody() = default ;
    RunCustomHotTopicViewPointAnalysisResponseBody(const RunCustomHotTopicViewPointAnalysisResponseBody &) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBody(RunCustomHotTopicViewPointAnalysisResponseBody &&) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicViewPointAnalysisResponseBody() = default ;
    RunCustomHotTopicViewPointAnalysisResponseBody& operator=(const RunCustomHotTopicViewPointAnalysisResponseBody &) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBody& operator=(RunCustomHotTopicViewPointAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunCustomHotTopicViewPointAnalysisResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunCustomHotTopicViewPointAnalysisResponseBodyHeader) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunCustomHotTopicViewPointAnalysisResponseBodyHeader) };
    inline RunCustomHotTopicViewPointAnalysisResponseBody& setHeader(const RunCustomHotTopicViewPointAnalysisResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunCustomHotTopicViewPointAnalysisResponseBody& setHeader(RunCustomHotTopicViewPointAnalysisResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunCustomHotTopicViewPointAnalysisResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunCustomHotTopicViewPointAnalysisResponseBodyPayload) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunCustomHotTopicViewPointAnalysisResponseBodyPayload) };
    inline RunCustomHotTopicViewPointAnalysisResponseBody& setPayload(const RunCustomHotTopicViewPointAnalysisResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunCustomHotTopicViewPointAnalysisResponseBody& setPayload(RunCustomHotTopicViewPointAnalysisResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCustomHotTopicViewPointAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunCustomHotTopicViewPointAnalysisResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunCustomHotTopicViewPointAnalysisResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
