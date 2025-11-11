// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunGenerateQuestionsResponseBodyHeader.hpp>
#include <alibabacloud/models/RunGenerateQuestionsResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunGenerateQuestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunGenerateQuestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunGenerateQuestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunGenerateQuestionsResponseBody() = default ;
    RunGenerateQuestionsResponseBody(const RunGenerateQuestionsResponseBody &) = default ;
    RunGenerateQuestionsResponseBody(RunGenerateQuestionsResponseBody &&) = default ;
    RunGenerateQuestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunGenerateQuestionsResponseBody() = default ;
    RunGenerateQuestionsResponseBody& operator=(const RunGenerateQuestionsResponseBody &) = default ;
    RunGenerateQuestionsResponseBody& operator=(RunGenerateQuestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunGenerateQuestionsResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunGenerateQuestionsResponseBodyHeader) };
    inline RunGenerateQuestionsResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunGenerateQuestionsResponseBodyHeader) };
    inline RunGenerateQuestionsResponseBody& setHeader(const RunGenerateQuestionsResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunGenerateQuestionsResponseBody& setHeader(RunGenerateQuestionsResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunGenerateQuestionsResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunGenerateQuestionsResponseBodyPayload) };
    inline RunGenerateQuestionsResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunGenerateQuestionsResponseBodyPayload) };
    inline RunGenerateQuestionsResponseBody& setPayload(const RunGenerateQuestionsResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunGenerateQuestionsResponseBody& setPayload(RunGenerateQuestionsResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunGenerateQuestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunGenerateQuestionsResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunGenerateQuestionsResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
