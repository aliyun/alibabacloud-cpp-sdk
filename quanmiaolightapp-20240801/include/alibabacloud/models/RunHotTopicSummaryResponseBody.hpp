// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunHotTopicSummaryResponseBodyHeader.hpp>
#include <alibabacloud/models/RunHotTopicSummaryResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunHotTopicSummaryResponseBody() = default ;
    RunHotTopicSummaryResponseBody(const RunHotTopicSummaryResponseBody &) = default ;
    RunHotTopicSummaryResponseBody(RunHotTopicSummaryResponseBody &&) = default ;
    RunHotTopicSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicSummaryResponseBody() = default ;
    RunHotTopicSummaryResponseBody& operator=(const RunHotTopicSummaryResponseBody &) = default ;
    RunHotTopicSummaryResponseBody& operator=(RunHotTopicSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunHotTopicSummaryResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunHotTopicSummaryResponseBodyHeader) };
    inline RunHotTopicSummaryResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunHotTopicSummaryResponseBodyHeader) };
    inline RunHotTopicSummaryResponseBody& setHeader(const RunHotTopicSummaryResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunHotTopicSummaryResponseBody& setHeader(RunHotTopicSummaryResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunHotTopicSummaryResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunHotTopicSummaryResponseBodyPayload) };
    inline RunHotTopicSummaryResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunHotTopicSummaryResponseBodyPayload) };
    inline RunHotTopicSummaryResponseBody& setPayload(const RunHotTopicSummaryResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunHotTopicSummaryResponseBody& setPayload(RunHotTopicSummaryResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunHotTopicSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunHotTopicSummaryResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunHotTopicSummaryResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
