// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocSummaryResponseBodyHeader.hpp>
#include <alibabacloud/models/RunDocSummaryResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunDocSummaryResponseBody() = default ;
    RunDocSummaryResponseBody(const RunDocSummaryResponseBody &) = default ;
    RunDocSummaryResponseBody(RunDocSummaryResponseBody &&) = default ;
    RunDocSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocSummaryResponseBody() = default ;
    RunDocSummaryResponseBody& operator=(const RunDocSummaryResponseBody &) = default ;
    RunDocSummaryResponseBody& operator=(RunDocSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunDocSummaryResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunDocSummaryResponseBodyHeader) };
    inline RunDocSummaryResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunDocSummaryResponseBodyHeader) };
    inline RunDocSummaryResponseBody& setHeader(const RunDocSummaryResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunDocSummaryResponseBody& setHeader(RunDocSummaryResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunDocSummaryResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunDocSummaryResponseBodyPayload) };
    inline RunDocSummaryResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunDocSummaryResponseBodyPayload) };
    inline RunDocSummaryResponseBody& setPayload(const RunDocSummaryResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunDocSummaryResponseBody& setPayload(RunDocSummaryResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDocSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunDocSummaryResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunDocSummaryResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
