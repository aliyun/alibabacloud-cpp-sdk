// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAICoachTaskSessionResponseBodyScriptInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAICoachTaskSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAICoachTaskSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(channelToken, channelToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptInfo, scriptInfo_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(webSocketUrl, webSocketUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAICoachTaskSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(channelToken, channelToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptInfo, scriptInfo_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(webSocketUrl, webSocketUrl_);
    };
    CreateAICoachTaskSessionResponseBody() = default ;
    CreateAICoachTaskSessionResponseBody(const CreateAICoachTaskSessionResponseBody &) = default ;
    CreateAICoachTaskSessionResponseBody(CreateAICoachTaskSessionResponseBody &&) = default ;
    CreateAICoachTaskSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAICoachTaskSessionResponseBody() = default ;
    CreateAICoachTaskSessionResponseBody& operator=(const CreateAICoachTaskSessionResponseBody &) = default ;
    CreateAICoachTaskSessionResponseBody& operator=(CreateAICoachTaskSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelToken_ == nullptr
        && return this->requestId_ == nullptr && return this->scriptInfo_ == nullptr && return this->sessionId_ == nullptr && return this->sessionStatus_ == nullptr && return this->token_ == nullptr
        && return this->webSocketUrl_ == nullptr; };
    // channelToken Field Functions 
    bool hasChannelToken() const { return this->channelToken_ != nullptr;};
    void deleteChannelToken() { this->channelToken_ = nullptr;};
    inline string channelToken() const { DARABONBA_PTR_GET_DEFAULT(channelToken_, "") };
    inline CreateAICoachTaskSessionResponseBody& setChannelToken(string channelToken) { DARABONBA_PTR_SET_VALUE(channelToken_, channelToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAICoachTaskSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptInfo Field Functions 
    bool hasScriptInfo() const { return this->scriptInfo_ != nullptr;};
    void deleteScriptInfo() { this->scriptInfo_ = nullptr;};
    inline const CreateAICoachTaskSessionResponseBodyScriptInfo & scriptInfo() const { DARABONBA_PTR_GET_CONST(scriptInfo_, CreateAICoachTaskSessionResponseBodyScriptInfo) };
    inline CreateAICoachTaskSessionResponseBodyScriptInfo scriptInfo() { DARABONBA_PTR_GET(scriptInfo_, CreateAICoachTaskSessionResponseBodyScriptInfo) };
    inline CreateAICoachTaskSessionResponseBody& setScriptInfo(const CreateAICoachTaskSessionResponseBodyScriptInfo & scriptInfo) { DARABONBA_PTR_SET_VALUE(scriptInfo_, scriptInfo) };
    inline CreateAICoachTaskSessionResponseBody& setScriptInfo(CreateAICoachTaskSessionResponseBodyScriptInfo && scriptInfo) { DARABONBA_PTR_SET_RVALUE(scriptInfo_, scriptInfo) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateAICoachTaskSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline int64_t sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, 0L) };
    inline CreateAICoachTaskSessionResponseBody& setSessionStatus(int64_t sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateAICoachTaskSessionResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // webSocketUrl Field Functions 
    bool hasWebSocketUrl() const { return this->webSocketUrl_ != nullptr;};
    void deleteWebSocketUrl() { this->webSocketUrl_ = nullptr;};
    inline string webSocketUrl() const { DARABONBA_PTR_GET_DEFAULT(webSocketUrl_, "") };
    inline CreateAICoachTaskSessionResponseBody& setWebSocketUrl(string webSocketUrl) { DARABONBA_PTR_SET_VALUE(webSocketUrl_, webSocketUrl) };


  protected:
    // rtctoken
    std::shared_ptr<string> channelToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateAICoachTaskSessionResponseBodyScriptInfo> scriptInfo_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<int64_t> sessionStatus_ = nullptr;
    // Token
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> webSocketUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
