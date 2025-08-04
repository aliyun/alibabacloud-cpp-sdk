// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNEXPANDCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNEXPANDCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunExpandContentResponseBodyHeader.hpp>
#include <alibabacloud/models/RunExpandContentResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunExpandContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunExpandContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunExpandContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunExpandContentResponseBody() = default ;
    RunExpandContentResponseBody(const RunExpandContentResponseBody &) = default ;
    RunExpandContentResponseBody(RunExpandContentResponseBody &&) = default ;
    RunExpandContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunExpandContentResponseBody() = default ;
    RunExpandContentResponseBody& operator=(const RunExpandContentResponseBody &) = default ;
    RunExpandContentResponseBody& operator=(RunExpandContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->end_ != nullptr
        && this->header_ != nullptr && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool end() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline RunExpandContentResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunExpandContentResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunExpandContentResponseBodyHeader) };
    inline RunExpandContentResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunExpandContentResponseBodyHeader) };
    inline RunExpandContentResponseBody& setHeader(const RunExpandContentResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunExpandContentResponseBody& setHeader(RunExpandContentResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunExpandContentResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunExpandContentResponseBodyPayload) };
    inline RunExpandContentResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunExpandContentResponseBodyPayload) };
    inline RunExpandContentResponseBody& setPayload(const RunExpandContentResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunExpandContentResponseBody& setPayload(RunExpandContentResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunExpandContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunExpandContentResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunExpandContentResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
