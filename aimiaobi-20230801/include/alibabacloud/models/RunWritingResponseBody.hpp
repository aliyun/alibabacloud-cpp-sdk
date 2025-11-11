// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunWritingResponseBodyHeader.hpp>
#include <alibabacloud/models/RunWritingResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunWritingResponseBody() = default ;
    RunWritingResponseBody(const RunWritingResponseBody &) = default ;
    RunWritingResponseBody(RunWritingResponseBody &&) = default ;
    RunWritingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingResponseBody() = default ;
    RunWritingResponseBody& operator=(const RunWritingResponseBody &) = default ;
    RunWritingResponseBody& operator=(RunWritingResponseBody &&) = default ;
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
    inline RunWritingResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunWritingResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunWritingResponseBodyHeader) };
    inline RunWritingResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunWritingResponseBodyHeader) };
    inline RunWritingResponseBody& setHeader(const RunWritingResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunWritingResponseBody& setHeader(RunWritingResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunWritingResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunWritingResponseBodyPayload) };
    inline RunWritingResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunWritingResponseBodyPayload) };
    inline RunWritingResponseBody& setPayload(const RunWritingResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunWritingResponseBody& setPayload(RunWritingResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunWritingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunWritingResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunWritingResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
