// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunHotTopicChatResponseBodyHeader.hpp>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunHotTopicChatResponseBody() = default ;
    RunHotTopicChatResponseBody(const RunHotTopicChatResponseBody &) = default ;
    RunHotTopicChatResponseBody(RunHotTopicChatResponseBody &&) = default ;
    RunHotTopicChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBody() = default ;
    RunHotTopicChatResponseBody& operator=(const RunHotTopicChatResponseBody &) = default ;
    RunHotTopicChatResponseBody& operator=(RunHotTopicChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->payload_ != nullptr && this->requestId_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunHotTopicChatResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunHotTopicChatResponseBodyHeader) };
    inline RunHotTopicChatResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunHotTopicChatResponseBodyHeader) };
    inline RunHotTopicChatResponseBody& setHeader(const RunHotTopicChatResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunHotTopicChatResponseBody& setHeader(RunHotTopicChatResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunHotTopicChatResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunHotTopicChatResponseBodyPayload) };
    inline RunHotTopicChatResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunHotTopicChatResponseBodyPayload) };
    inline RunHotTopicChatResponseBody& setPayload(const RunHotTopicChatResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunHotTopicChatResponseBody& setPayload(RunHotTopicChatResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunHotTopicChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunHotTopicChatResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunHotTopicChatResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
