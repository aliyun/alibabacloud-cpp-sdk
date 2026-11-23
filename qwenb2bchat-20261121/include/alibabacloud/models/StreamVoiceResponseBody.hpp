// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMVOICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STREAMVOICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
namespace Models
{
  class StreamVoiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamVoiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StreamVoiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StreamVoiceResponseBody() = default ;
    StreamVoiceResponseBody(const StreamVoiceResponseBody &) = default ;
    StreamVoiceResponseBody(StreamVoiceResponseBody &&) = default ;
    StreamVoiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamVoiceResponseBody() = default ;
    StreamVoiceResponseBody& operator=(const StreamVoiceResponseBody &) = default ;
    StreamVoiceResponseBody& operator=(StreamVoiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StreamVoiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 仅描述 WebSocket 接入/握手的请求标识，不代表后续语音轮次或音频结果。成功连接后使用下文 VoiceEvent 文本事件和 VoiceOutputAudio 二进制帧，不能把整条 WSS 连接按单次 JSON 响应处理。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
