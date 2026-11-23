// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMVOICERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_STREAMVOICERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WebsocketUtils.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
namespace Models
{
  class StreamVoiceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamVoiceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(webSocketClient, webSocketClient_);
    };
    friend void from_json(const Darabonba::Json& j, StreamVoiceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(webSocketClient, webSocketClient_);
    };
    StreamVoiceResponse() = default ;
    StreamVoiceResponse(const StreamVoiceResponse &) = default ;
    StreamVoiceResponse(StreamVoiceResponse &&) = default ;
    StreamVoiceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamVoiceResponse() = default ;
    StreamVoiceResponse& operator=(const StreamVoiceResponse &) = default ;
    StreamVoiceResponse& operator=(StreamVoiceResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webSocketClient_ == nullptr; };
    // webSocketClient Field Functions 
    bool hasWebSocketClient() const { return this->webSocketClient_ != nullptr;};
    void deleteWebSocketClient() { this->webSocketClient_ = nullptr;};
    inline const AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient & getWebSocketClient() const { DARABONBA_PTR_GET_CONST(webSocketClient_, AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient) };
    inline AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient getWebSocketClient() { DARABONBA_PTR_GET(webSocketClient_, AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient) };
    inline StreamVoiceResponse& setWebSocketClient(const AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient & webSocketClient) { DARABONBA_PTR_SET_VALUE(webSocketClient_, webSocketClient) };
    inline StreamVoiceResponse& setWebSocketClient(AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient && webSocketClient) { DARABONBA_PTR_SET_RVALUE(webSocketClient_, webSocketClient) };


  protected:
    shared_ptr<AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient> webSocketClient_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
