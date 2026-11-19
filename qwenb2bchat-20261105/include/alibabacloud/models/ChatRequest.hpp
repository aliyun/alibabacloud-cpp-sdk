// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261105
{
namespace Models
{
  class ChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(communication, communication_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(params, params_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(communication, communication_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(params, params_);
    };
    ChatRequest() = default ;
    ChatRequest(const ChatRequest &) = default ;
    ChatRequest(ChatRequest &&) = default ;
    ChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatRequest() = default ;
    ChatRequest& operator=(const ChatRequest &) = default ;
    ChatRequest& operator=(ChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(deepthink, deepthink_);
        DARABONBA_PTR_TO_JSON(directAgent, directAgent_);
        DARABONBA_PTR_TO_JSON(enableTextImageMixed, enableTextImageMixed_);
        DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
        DARABONBA_PTR_TO_JSON(outputAudio, outputAudio_);
        DARABONBA_PTR_TO_JSON(responseStreaming, responseStreaming_);
        DARABONBA_PTR_TO_JSON(temperature, temperature_);
        DARABONBA_PTR_TO_JSON(topP, topP_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(deepthink, deepthink_);
        DARABONBA_PTR_FROM_JSON(directAgent, directAgent_);
        DARABONBA_PTR_FROM_JSON(enableTextImageMixed, enableTextImageMixed_);
        DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
        DARABONBA_PTR_FROM_JSON(outputAudio, outputAudio_);
        DARABONBA_PTR_FROM_JSON(responseStreaming, responseStreaming_);
        DARABONBA_PTR_FROM_JSON(temperature, temperature_);
        DARABONBA_PTR_FROM_JSON(topP, topP_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deepthink_ == nullptr
        && this->directAgent_ == nullptr && this->enableTextImageMixed_ == nullptr && this->maxTokens_ == nullptr && this->outputAudio_ == nullptr && this->responseStreaming_ == nullptr
        && this->temperature_ == nullptr && this->topP_ == nullptr; };
      // deepthink Field Functions 
      bool hasDeepthink() const { return this->deepthink_ != nullptr;};
      void deleteDeepthink() { this->deepthink_ = nullptr;};
      inline string getDeepthink() const { DARABONBA_PTR_GET_DEFAULT(deepthink_, "") };
      inline Params& setDeepthink(string deepthink) { DARABONBA_PTR_SET_VALUE(deepthink_, deepthink) };


      // directAgent Field Functions 
      bool hasDirectAgent() const { return this->directAgent_ != nullptr;};
      void deleteDirectAgent() { this->directAgent_ = nullptr;};
      inline string getDirectAgent() const { DARABONBA_PTR_GET_DEFAULT(directAgent_, "") };
      inline Params& setDirectAgent(string directAgent) { DARABONBA_PTR_SET_VALUE(directAgent_, directAgent) };


      // enableTextImageMixed Field Functions 
      bool hasEnableTextImageMixed() const { return this->enableTextImageMixed_ != nullptr;};
      void deleteEnableTextImageMixed() { this->enableTextImageMixed_ = nullptr;};
      inline bool getEnableTextImageMixed() const { DARABONBA_PTR_GET_DEFAULT(enableTextImageMixed_, false) };
      inline Params& setEnableTextImageMixed(bool enableTextImageMixed) { DARABONBA_PTR_SET_VALUE(enableTextImageMixed_, enableTextImageMixed) };


      // maxTokens Field Functions 
      bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
      void deleteMaxTokens() { this->maxTokens_ = nullptr;};
      inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
      inline Params& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


      // outputAudio Field Functions 
      bool hasOutputAudio() const { return this->outputAudio_ != nullptr;};
      void deleteOutputAudio() { this->outputAudio_ = nullptr;};
      inline bool getOutputAudio() const { DARABONBA_PTR_GET_DEFAULT(outputAudio_, false) };
      inline Params& setOutputAudio(bool outputAudio) { DARABONBA_PTR_SET_VALUE(outputAudio_, outputAudio) };


      // responseStreaming Field Functions 
      bool hasResponseStreaming() const { return this->responseStreaming_ != nullptr;};
      void deleteResponseStreaming() { this->responseStreaming_ = nullptr;};
      inline bool getResponseStreaming() const { DARABONBA_PTR_GET_DEFAULT(responseStreaming_, false) };
      inline Params& setResponseStreaming(bool responseStreaming) { DARABONBA_PTR_SET_VALUE(responseStreaming_, responseStreaming) };


      // temperature Field Functions 
      bool hasTemperature() const { return this->temperature_ != nullptr;};
      void deleteTemperature() { this->temperature_ = nullptr;};
      inline float getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
      inline Params& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


      // topP Field Functions 
      bool hasTopP() const { return this->topP_ != nullptr;};
      void deleteTopP() { this->topP_ = nullptr;};
      inline float getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
      inline Params& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    protected:
      // The deep thinking switch.
      shared_ptr<string> deepthink_ {};
      // The agent selector for the current turn.
      shared_ptr<string> directAgent_ {};
      // The mixed text and image output switch.
      shared_ptr<bool> enableTextImageMixed_ {};
      // The maximum number of output tokens for the model.
      shared_ptr<int32_t> maxTokens_ {};
      // The HTTP audio output switch.
      shared_ptr<bool> outputAudio_ {};
      // Specifies whether to use Server-Sent Events (SSE) for conversation responses.
      shared_ptr<bool> responseStreaming_ {};
      // The model sampling temperature.
      shared_ptr<float> temperature_ {};
      // The nucleus sampling probability for the model.
      shared_ptr<float> topP_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(messages, messages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(messages, messages_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_ANY_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_ANY_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(role, role_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline         const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
        Darabonba::Json & getContent() { DARABONBA_GET(content_) };
        inline Messages& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
        inline Messages& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // The text or an array of supported multimodal content blocks.
        // 
        // This parameter is required.
        Darabonba::Json content_ {};
        // The sender of the message. user indicates the business user, and assistant indicates the assistant.
        // 
        // This parameter is required.
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->messages_ == nullptr; };
      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    protected:
      // The list of messages arranged in conversational order. When history is managed by the client, it can include the session history provided by the client.
      // 
      // This parameter is required.
      shared_ptr<vector<Data::Messages>> messages_ {};
    };

    class Communication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Communication& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(appScene, appScene_);
        DARABONBA_PTR_TO_JSON(historyOwner, historyOwner_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(userInfo, userInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Communication& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(appScene, appScene_);
        DARABONBA_PTR_FROM_JSON(historyOwner, historyOwner_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(userInfo, userInfo_);
      };
      Communication() = default ;
      Communication(const Communication &) = default ;
      Communication(Communication &&) = default ;
      Communication(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Communication() = default ;
      Communication& operator=(const Communication &) = default ;
      Communication& operator=(Communication &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
          DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
          DARABONBA_PTR_TO_JSON(userIp, userIp_);
          DARABONBA_PTR_TO_JSON(userName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
          DARABONBA_PTR_FROM_JSON(userIp, userIp_);
          DARABONBA_PTR_FROM_JSON(userName, userName_);
        };
        UserInfo() = default ;
        UserInfo(const UserInfo &) = default ;
        UserInfo(UserInfo &&) = default ;
        UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserInfo() = default ;
        UserInfo& operator=(const UserInfo &) = default ;
        UserInfo& operator=(UserInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->userId_ == nullptr && this->userIp_ == nullptr && this->userName_ == nullptr; };
        // deviceId Field Functions 
        bool hasDeviceId() const { return this->deviceId_ != nullptr;};
        void deleteDeviceId() { this->deviceId_ = nullptr;};
        inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
        inline UserInfo& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userIp Field Functions 
        bool hasUserIp() const { return this->userIp_ != nullptr;};
        void deleteUserIp() { this->userIp_ = nullptr;};
        inline string getUserIp() const { DARABONBA_PTR_GET_DEFAULT(userIp_, "") };
        inline UserInfo& setUserIp(string userIp) { DARABONBA_PTR_SET_VALUE(userIp_, userIp) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The terminal device identifier provided by the customer.
        shared_ptr<string> deviceId_ {};
        // The business user identifier within the customer application, provided based on the user binding or delegation configuration of the business gateway credentials.
        shared_ptr<string> userId_ {};
        // The IP address of the business user provided by the customer.
        shared_ptr<string> userIp_ {};
        // The username of the business user provided by the customer.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appScene_ == nullptr && this->historyOwner_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr && this->userInfo_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Communication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appScene Field Functions 
      bool hasAppScene() const { return this->appScene_ != nullptr;};
      void deleteAppScene() { this->appScene_ = nullptr;};
      inline string getAppScene() const { DARABONBA_PTR_GET_DEFAULT(appScene_, "") };
      inline Communication& setAppScene(string appScene) { DARABONBA_PTR_SET_VALUE(appScene_, appScene) };


      // historyOwner Field Functions 
      bool hasHistoryOwner() const { return this->historyOwner_ != nullptr;};
      void deleteHistoryOwner() { this->historyOwner_ = nullptr;};
      inline string getHistoryOwner() const { DARABONBA_PTR_GET_DEFAULT(historyOwner_, "") };
      inline Communication& setHistoryOwner(string historyOwner) { DARABONBA_PTR_SET_VALUE(historyOwner_, historyOwner) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Communication& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Communication& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline const Communication::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Communication::UserInfo) };
      inline Communication::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, Communication::UserInfo) };
      inline Communication& setUserInfo(const Communication::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
      inline Communication& setUserInfo(Communication::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    protected:
      // The application ID provided based on the gateway credential identity configuration.
      shared_ptr<string> appId_ {};
      // The optional business scene marker.
      shared_ptr<string> appScene_ {};
      // The owner of the session history, which must be consistent with the first call of the session.
      // 
      // This parameter is required.
      shared_ptr<string> historyOwner_ {};
      // The business request ID of the customer.
      // 
      // This parameter is required.
      shared_ptr<string> requestId_ {};
      // The session ID of the customer, which is reused for continued chats.
      // 
      // This parameter is required.
      shared_ptr<string> sessionId_ {};
      // The business user and device information provided by the customer. Identity fields are passed based on the configuration of the business gateway credentials.
      shared_ptr<Communication::UserInfo> userInfo_ {};
    };

    virtual bool empty() const override { return this->communication_ == nullptr
        && this->data_ == nullptr && this->params_ == nullptr; };
    // communication Field Functions 
    bool hasCommunication() const { return this->communication_ != nullptr;};
    void deleteCommunication() { this->communication_ = nullptr;};
    inline const ChatRequest::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, ChatRequest::Communication) };
    inline ChatRequest::Communication getCommunication() { DARABONBA_PTR_GET(communication_, ChatRequest::Communication) };
    inline ChatRequest& setCommunication(const ChatRequest::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
    inline ChatRequest& setCommunication(ChatRequest::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChatRequest::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ChatRequest::Data) };
    inline ChatRequest::Data getData() { DARABONBA_PTR_GET(data_, ChatRequest::Data) };
    inline ChatRequest& setData(const ChatRequest::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChatRequest& setData(ChatRequest::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const ChatRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, ChatRequest::Params) };
    inline ChatRequest::Params getParams() { DARABONBA_PTR_GET(params_, ChatRequest::Params) };
    inline ChatRequest& setParams(const ChatRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ChatRequest& setParams(ChatRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    // The correlation ID, session, and application identity information for the current request.
    // 
    // This parameter is required.
    shared_ptr<ChatRequest::Communication> communication_ {};
    // The business data that carries the messages for the current request.
    // 
    // This parameter is required.
    shared_ptr<ChatRequest::Data> data_ {};
    // An optional extensible JSON object. responseStreaming is an optional boolean value. A value of false returns a complete JSON response, and a value of true returns a Server-Sent Events (SSE) response.
    shared_ptr<ChatRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261105
#endif
