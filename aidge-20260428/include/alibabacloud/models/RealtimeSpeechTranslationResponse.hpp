// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMESPEECHTRANSLATIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REALTIMESPEECHTRANSLATIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WebsocketUtils.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class RealtimeSpeechTranslationResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeSpeechTranslationResponse& obj) { 
      DARABONBA_PTR_TO_JSON(webSocketClient, webSocketClient_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeSpeechTranslationResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(webSocketClient, webSocketClient_);
    };
    RealtimeSpeechTranslationResponse() = default ;
    RealtimeSpeechTranslationResponse(const RealtimeSpeechTranslationResponse &) = default ;
    RealtimeSpeechTranslationResponse(RealtimeSpeechTranslationResponse &&) = default ;
    RealtimeSpeechTranslationResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeSpeechTranslationResponse() = default ;
    RealtimeSpeechTranslationResponse& operator=(const RealtimeSpeechTranslationResponse &) = default ;
    RealtimeSpeechTranslationResponse& operator=(RealtimeSpeechTranslationResponse &&) = default ;
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
    inline RealtimeSpeechTranslationResponse& setWebSocketClient(const AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient & webSocketClient) { DARABONBA_PTR_SET_VALUE(webSocketClient_, webSocketClient) };
    inline RealtimeSpeechTranslationResponse& setWebSocketClient(AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient && webSocketClient) { DARABONBA_PTR_SET_RVALUE(webSocketClient_, webSocketClient) };


  protected:
    shared_ptr<AlibabaCloud::OpenApi::WebsocketUtils::Models::WebSocketClient> webSocketClient_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
