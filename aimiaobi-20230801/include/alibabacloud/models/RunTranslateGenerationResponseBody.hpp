// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTRANSLATEGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNTRANSLATEGENERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunTranslateGenerationResponseBodyHeader.hpp>
#include <alibabacloud/models/RunTranslateGenerationResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTranslateGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTranslateGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTranslateGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunTranslateGenerationResponseBody() = default ;
    RunTranslateGenerationResponseBody(const RunTranslateGenerationResponseBody &) = default ;
    RunTranslateGenerationResponseBody(RunTranslateGenerationResponseBody &&) = default ;
    RunTranslateGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTranslateGenerationResponseBody() = default ;
    RunTranslateGenerationResponseBody& operator=(const RunTranslateGenerationResponseBody &) = default ;
    RunTranslateGenerationResponseBody& operator=(RunTranslateGenerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunTranslateGenerationResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunTranslateGenerationResponseBodyHeader) };
    inline RunTranslateGenerationResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunTranslateGenerationResponseBodyHeader) };
    inline RunTranslateGenerationResponseBody& setHeader(const RunTranslateGenerationResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunTranslateGenerationResponseBody& setHeader(RunTranslateGenerationResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunTranslateGenerationResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunTranslateGenerationResponseBodyPayload) };
    inline RunTranslateGenerationResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunTranslateGenerationResponseBodyPayload) };
    inline RunTranslateGenerationResponseBody& setPayload(const RunTranslateGenerationResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunTranslateGenerationResponseBody& setPayload(RunTranslateGenerationResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunTranslateGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunTranslateGenerationResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunTranslateGenerationResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
