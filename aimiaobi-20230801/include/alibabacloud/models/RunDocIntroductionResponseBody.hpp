// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocIntroductionResponseBodyHeader.hpp>
#include <alibabacloud/models/RunDocIntroductionResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocIntroductionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocIntroductionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocIntroductionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunDocIntroductionResponseBody() = default ;
    RunDocIntroductionResponseBody(const RunDocIntroductionResponseBody &) = default ;
    RunDocIntroductionResponseBody(RunDocIntroductionResponseBody &&) = default ;
    RunDocIntroductionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocIntroductionResponseBody() = default ;
    RunDocIntroductionResponseBody& operator=(const RunDocIntroductionResponseBody &) = default ;
    RunDocIntroductionResponseBody& operator=(RunDocIntroductionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunDocIntroductionResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunDocIntroductionResponseBodyHeader) };
    inline RunDocIntroductionResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunDocIntroductionResponseBodyHeader) };
    inline RunDocIntroductionResponseBody& setHeader(const RunDocIntroductionResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunDocIntroductionResponseBody& setHeader(RunDocIntroductionResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunDocIntroductionResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunDocIntroductionResponseBodyPayload) };
    inline RunDocIntroductionResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunDocIntroductionResponseBodyPayload) };
    inline RunDocIntroductionResponseBody& setPayload(const RunDocIntroductionResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunDocIntroductionResponseBody& setPayload(RunDocIntroductionResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDocIntroductionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunDocIntroductionResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunDocIntroductionResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
