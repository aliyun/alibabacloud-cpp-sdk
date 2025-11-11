// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunHotwordResponseBodyHeader.hpp>
#include <alibabacloud/models/RunHotwordResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunHotwordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotwordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotwordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunHotwordResponseBody() = default ;
    RunHotwordResponseBody(const RunHotwordResponseBody &) = default ;
    RunHotwordResponseBody(RunHotwordResponseBody &&) = default ;
    RunHotwordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotwordResponseBody() = default ;
    RunHotwordResponseBody& operator=(const RunHotwordResponseBody &) = default ;
    RunHotwordResponseBody& operator=(RunHotwordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunHotwordResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunHotwordResponseBodyHeader) };
    inline RunHotwordResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunHotwordResponseBodyHeader) };
    inline RunHotwordResponseBody& setHeader(const RunHotwordResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunHotwordResponseBody& setHeader(RunHotwordResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunHotwordResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunHotwordResponseBodyPayload) };
    inline RunHotwordResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunHotwordResponseBodyPayload) };
    inline RunHotwordResponseBody& setPayload(const RunHotwordResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunHotwordResponseBody& setPayload(RunHotwordResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunHotwordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunHotwordResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunHotwordResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
