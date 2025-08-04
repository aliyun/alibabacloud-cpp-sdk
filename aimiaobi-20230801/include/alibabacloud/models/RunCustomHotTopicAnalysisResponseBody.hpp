// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunCustomHotTopicAnalysisResponseBodyHeader.hpp>
#include <alibabacloud/models/RunCustomHotTopicAnalysisResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunCustomHotTopicAnalysisResponseBody() = default ;
    RunCustomHotTopicAnalysisResponseBody(const RunCustomHotTopicAnalysisResponseBody &) = default ;
    RunCustomHotTopicAnalysisResponseBody(RunCustomHotTopicAnalysisResponseBody &&) = default ;
    RunCustomHotTopicAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicAnalysisResponseBody() = default ;
    RunCustomHotTopicAnalysisResponseBody& operator=(const RunCustomHotTopicAnalysisResponseBody &) = default ;
    RunCustomHotTopicAnalysisResponseBody& operator=(RunCustomHotTopicAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunCustomHotTopicAnalysisResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunCustomHotTopicAnalysisResponseBodyHeader) };
    inline RunCustomHotTopicAnalysisResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunCustomHotTopicAnalysisResponseBodyHeader) };
    inline RunCustomHotTopicAnalysisResponseBody& setHeader(const RunCustomHotTopicAnalysisResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunCustomHotTopicAnalysisResponseBody& setHeader(RunCustomHotTopicAnalysisResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunCustomHotTopicAnalysisResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunCustomHotTopicAnalysisResponseBodyPayload) };
    inline RunCustomHotTopicAnalysisResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunCustomHotTopicAnalysisResponseBodyPayload) };
    inline RunCustomHotTopicAnalysisResponseBody& setPayload(const RunCustomHotTopicAnalysisResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunCustomHotTopicAnalysisResponseBody& setPayload(RunCustomHotTopicAnalysisResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCustomHotTopicAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunCustomHotTopicAnalysisResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunCustomHotTopicAnalysisResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
