// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetLoginDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLoginDetailsResponseBody() = default ;
    GetLoginDetailsResponseBody(const GetLoginDetailsResponseBody &) = default ;
    GetLoginDetailsResponseBody(GetLoginDetailsResponseBody &&) = default ;
    GetLoginDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginDetailsResponseBody() = default ;
    GetLoginDetailsResponseBody& operator=(const GetLoginDetailsResponseBody &) = default ;
    GetLoginDetailsResponseBody& operator=(GetLoginDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentServerUrl, agentServerUrl_);
        DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_TO_JSON(ChatAppId, chatAppId_);
        DARABONBA_PTR_TO_JSON(ChatAppKey, chatAppKey_);
        DARABONBA_PTR_TO_JSON(ChatDeviceId, chatDeviceId_);
        DARABONBA_PTR_TO_JSON(ChatLoginToken, chatLoginToken_);
        DARABONBA_PTR_TO_JSON(ChatServerUrl, chatServerUrl_);
        DARABONBA_PTR_TO_JSON(ChatUserId, chatUserId_);
        DARABONBA_PTR_TO_JSON(DeviceExt, deviceExt_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DeviceState, deviceState_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(Nickname, nickname_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(Signature2, signature2_);
        DARABONBA_PTR_TO_JSON(SipServerUrl, sipServerUrl_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserKey, userKey_);
        DARABONBA_PTR_TO_JSON(UserKey2, userKey2_);
        DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentServerUrl, agentServerUrl_);
        DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_FROM_JSON(ChatAppId, chatAppId_);
        DARABONBA_PTR_FROM_JSON(ChatAppKey, chatAppKey_);
        DARABONBA_PTR_FROM_JSON(ChatDeviceId, chatDeviceId_);
        DARABONBA_PTR_FROM_JSON(ChatLoginToken, chatLoginToken_);
        DARABONBA_PTR_FROM_JSON(ChatServerUrl, chatServerUrl_);
        DARABONBA_PTR_FROM_JSON(ChatUserId, chatUserId_);
        DARABONBA_PTR_FROM_JSON(DeviceExt, deviceExt_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DeviceState, deviceState_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
        DARABONBA_PTR_FROM_JSON(Signature2, signature2_);
        DARABONBA_PTR_FROM_JSON(SipServerUrl, sipServerUrl_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserKey, userKey_);
        DARABONBA_PTR_FROM_JSON(UserKey2, userKey2_);
        DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
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
      virtual bool empty() const override { return this->agentServerUrl_ == nullptr
        && this->avatarUrl_ == nullptr && this->chatAppId_ == nullptr && this->chatAppKey_ == nullptr && this->chatDeviceId_ == nullptr && this->chatLoginToken_ == nullptr
        && this->chatServerUrl_ == nullptr && this->chatUserId_ == nullptr && this->deviceExt_ == nullptr && this->deviceId_ == nullptr && this->deviceState_ == nullptr
        && this->displayName_ == nullptr && this->extension_ == nullptr && this->nickname_ == nullptr && this->signature_ == nullptr && this->signature2_ == nullptr
        && this->sipServerUrl_ == nullptr && this->userId_ == nullptr && this->userKey_ == nullptr && this->userKey2_ == nullptr && this->workMode_ == nullptr; };
      // agentServerUrl Field Functions 
      bool hasAgentServerUrl() const { return this->agentServerUrl_ != nullptr;};
      void deleteAgentServerUrl() { this->agentServerUrl_ = nullptr;};
      inline string getAgentServerUrl() const { DARABONBA_PTR_GET_DEFAULT(agentServerUrl_, "") };
      inline Data& setAgentServerUrl(string agentServerUrl) { DARABONBA_PTR_SET_VALUE(agentServerUrl_, agentServerUrl) };


      // avatarUrl Field Functions 
      bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
      void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
      inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
      inline Data& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


      // chatAppId Field Functions 
      bool hasChatAppId() const { return this->chatAppId_ != nullptr;};
      void deleteChatAppId() { this->chatAppId_ = nullptr;};
      inline string getChatAppId() const { DARABONBA_PTR_GET_DEFAULT(chatAppId_, "") };
      inline Data& setChatAppId(string chatAppId) { DARABONBA_PTR_SET_VALUE(chatAppId_, chatAppId) };


      // chatAppKey Field Functions 
      bool hasChatAppKey() const { return this->chatAppKey_ != nullptr;};
      void deleteChatAppKey() { this->chatAppKey_ = nullptr;};
      inline string getChatAppKey() const { DARABONBA_PTR_GET_DEFAULT(chatAppKey_, "") };
      inline Data& setChatAppKey(string chatAppKey) { DARABONBA_PTR_SET_VALUE(chatAppKey_, chatAppKey) };


      // chatDeviceId Field Functions 
      bool hasChatDeviceId() const { return this->chatDeviceId_ != nullptr;};
      void deleteChatDeviceId() { this->chatDeviceId_ = nullptr;};
      inline string getChatDeviceId() const { DARABONBA_PTR_GET_DEFAULT(chatDeviceId_, "") };
      inline Data& setChatDeviceId(string chatDeviceId) { DARABONBA_PTR_SET_VALUE(chatDeviceId_, chatDeviceId) };


      // chatLoginToken Field Functions 
      bool hasChatLoginToken() const { return this->chatLoginToken_ != nullptr;};
      void deleteChatLoginToken() { this->chatLoginToken_ = nullptr;};
      inline string getChatLoginToken() const { DARABONBA_PTR_GET_DEFAULT(chatLoginToken_, "") };
      inline Data& setChatLoginToken(string chatLoginToken) { DARABONBA_PTR_SET_VALUE(chatLoginToken_, chatLoginToken) };


      // chatServerUrl Field Functions 
      bool hasChatServerUrl() const { return this->chatServerUrl_ != nullptr;};
      void deleteChatServerUrl() { this->chatServerUrl_ = nullptr;};
      inline string getChatServerUrl() const { DARABONBA_PTR_GET_DEFAULT(chatServerUrl_, "") };
      inline Data& setChatServerUrl(string chatServerUrl) { DARABONBA_PTR_SET_VALUE(chatServerUrl_, chatServerUrl) };


      // chatUserId Field Functions 
      bool hasChatUserId() const { return this->chatUserId_ != nullptr;};
      void deleteChatUserId() { this->chatUserId_ = nullptr;};
      inline string getChatUserId() const { DARABONBA_PTR_GET_DEFAULT(chatUserId_, "") };
      inline Data& setChatUserId(string chatUserId) { DARABONBA_PTR_SET_VALUE(chatUserId_, chatUserId) };


      // deviceExt Field Functions 
      bool hasDeviceExt() const { return this->deviceExt_ != nullptr;};
      void deleteDeviceExt() { this->deviceExt_ = nullptr;};
      inline string getDeviceExt() const { DARABONBA_PTR_GET_DEFAULT(deviceExt_, "") };
      inline Data& setDeviceExt(string deviceExt) { DARABONBA_PTR_SET_VALUE(deviceExt_, deviceExt) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceState Field Functions 
      bool hasDeviceState() const { return this->deviceState_ != nullptr;};
      void deleteDeviceState() { this->deviceState_ = nullptr;};
      inline string getDeviceState() const { DARABONBA_PTR_GET_DEFAULT(deviceState_, "") };
      inline Data& setDeviceState(string deviceState) { DARABONBA_PTR_SET_VALUE(deviceState_, deviceState) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Data& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // nickname Field Functions 
      bool hasNickname() const { return this->nickname_ != nullptr;};
      void deleteNickname() { this->nickname_ = nullptr;};
      inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
      inline Data& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // signature2 Field Functions 
      bool hasSignature2() const { return this->signature2_ != nullptr;};
      void deleteSignature2() { this->signature2_ = nullptr;};
      inline string getSignature2() const { DARABONBA_PTR_GET_DEFAULT(signature2_, "") };
      inline Data& setSignature2(string signature2) { DARABONBA_PTR_SET_VALUE(signature2_, signature2) };


      // sipServerUrl Field Functions 
      bool hasSipServerUrl() const { return this->sipServerUrl_ != nullptr;};
      void deleteSipServerUrl() { this->sipServerUrl_ = nullptr;};
      inline string getSipServerUrl() const { DARABONBA_PTR_GET_DEFAULT(sipServerUrl_, "") };
      inline Data& setSipServerUrl(string sipServerUrl) { DARABONBA_PTR_SET_VALUE(sipServerUrl_, sipServerUrl) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userKey Field Functions 
      bool hasUserKey() const { return this->userKey_ != nullptr;};
      void deleteUserKey() { this->userKey_ = nullptr;};
      inline string getUserKey() const { DARABONBA_PTR_GET_DEFAULT(userKey_, "") };
      inline Data& setUserKey(string userKey) { DARABONBA_PTR_SET_VALUE(userKey_, userKey) };


      // userKey2 Field Functions 
      bool hasUserKey2() const { return this->userKey2_ != nullptr;};
      void deleteUserKey2() { this->userKey2_ = nullptr;};
      inline string getUserKey2() const { DARABONBA_PTR_GET_DEFAULT(userKey2_, "") };
      inline Data& setUserKey2(string userKey2) { DARABONBA_PTR_SET_VALUE(userKey2_, userKey2) };


      // workMode Field Functions 
      bool hasWorkMode() const { return this->workMode_ != nullptr;};
      void deleteWorkMode() { this->workMode_ = nullptr;};
      inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
      inline Data& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


    protected:
      shared_ptr<string> agentServerUrl_ {};
      shared_ptr<string> avatarUrl_ {};
      shared_ptr<string> chatAppId_ {};
      shared_ptr<string> chatAppKey_ {};
      shared_ptr<string> chatDeviceId_ {};
      shared_ptr<string> chatLoginToken_ {};
      shared_ptr<string> chatServerUrl_ {};
      shared_ptr<string> chatUserId_ {};
      shared_ptr<string> deviceExt_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceState_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<string> nickname_ {};
      shared_ptr<string> signature_ {};
      shared_ptr<string> signature2_ {};
      shared_ptr<string> sipServerUrl_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userKey_ {};
      shared_ptr<string> userKey2_ {};
      shared_ptr<string> workMode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLoginDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLoginDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLoginDetailsResponseBody::Data) };
    inline GetLoginDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLoginDetailsResponseBody::Data) };
    inline GetLoginDetailsResponseBody& setData(const GetLoginDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLoginDetailsResponseBody& setData(GetLoginDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetLoginDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLoginDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetLoginDetailsResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetLoginDetailsResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetLoginDetailsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
