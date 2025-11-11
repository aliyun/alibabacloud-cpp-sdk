// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTINUECONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTINUECONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContinueContentResponseBodyHeader.hpp>
#include <alibabacloud/models/RunContinueContentResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunContinueContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContinueContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunContinueContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunContinueContentResponseBody() = default ;
    RunContinueContentResponseBody(const RunContinueContentResponseBody &) = default ;
    RunContinueContentResponseBody(RunContinueContentResponseBody &&) = default ;
    RunContinueContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContinueContentResponseBody() = default ;
    RunContinueContentResponseBody& operator=(const RunContinueContentResponseBody &) = default ;
    RunContinueContentResponseBody& operator=(RunContinueContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->header_ == nullptr && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool end() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline RunContinueContentResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunContinueContentResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunContinueContentResponseBodyHeader) };
    inline RunContinueContentResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunContinueContentResponseBodyHeader) };
    inline RunContinueContentResponseBody& setHeader(const RunContinueContentResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunContinueContentResponseBody& setHeader(RunContinueContentResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunContinueContentResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunContinueContentResponseBodyPayload) };
    inline RunContinueContentResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunContinueContentResponseBodyPayload) };
    inline RunContinueContentResponseBody& setPayload(const RunContinueContentResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunContinueContentResponseBody& setPayload(RunContinueContentResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunContinueContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunContinueContentResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunContinueContentResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
