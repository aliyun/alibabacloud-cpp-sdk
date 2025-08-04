// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCSMARTCARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCSMARTCARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocSmartCardResponseBodyHeader.hpp>
#include <alibabacloud/models/RunDocSmartCardResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocSmartCardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocSmartCardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocSmartCardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunDocSmartCardResponseBody() = default ;
    RunDocSmartCardResponseBody(const RunDocSmartCardResponseBody &) = default ;
    RunDocSmartCardResponseBody(RunDocSmartCardResponseBody &&) = default ;
    RunDocSmartCardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocSmartCardResponseBody() = default ;
    RunDocSmartCardResponseBody& operator=(const RunDocSmartCardResponseBody &) = default ;
    RunDocSmartCardResponseBody& operator=(RunDocSmartCardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunDocSmartCardResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunDocSmartCardResponseBodyHeader) };
    inline RunDocSmartCardResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunDocSmartCardResponseBodyHeader) };
    inline RunDocSmartCardResponseBody& setHeader(const RunDocSmartCardResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunDocSmartCardResponseBody& setHeader(RunDocSmartCardResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunDocSmartCardResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunDocSmartCardResponseBodyPayload) };
    inline RunDocSmartCardResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunDocSmartCardResponseBodyPayload) };
    inline RunDocSmartCardResponseBody& setPayload(const RunDocSmartCardResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunDocSmartCardResponseBody& setPayload(RunDocSmartCardResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDocSmartCardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunDocSmartCardResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunDocSmartCardResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
