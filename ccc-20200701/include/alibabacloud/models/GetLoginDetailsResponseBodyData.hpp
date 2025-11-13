// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINDETAILSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINDETAILSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetLoginDetailsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginDetailsResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetLoginDetailsResponseBodyData& obj) { 
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
    GetLoginDetailsResponseBodyData() = default ;
    GetLoginDetailsResponseBodyData(const GetLoginDetailsResponseBodyData &) = default ;
    GetLoginDetailsResponseBodyData(GetLoginDetailsResponseBodyData &&) = default ;
    GetLoginDetailsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginDetailsResponseBodyData() = default ;
    GetLoginDetailsResponseBodyData& operator=(const GetLoginDetailsResponseBodyData &) = default ;
    GetLoginDetailsResponseBodyData& operator=(GetLoginDetailsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentServerUrl_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->chatAppId_ == nullptr && return this->chatAppKey_ == nullptr && return this->chatDeviceId_ == nullptr && return this->chatLoginToken_ == nullptr
        && return this->chatServerUrl_ == nullptr && return this->chatUserId_ == nullptr && return this->deviceExt_ == nullptr && return this->deviceId_ == nullptr && return this->deviceState_ == nullptr
        && return this->displayName_ == nullptr && return this->extension_ == nullptr && return this->nickname_ == nullptr && return this->signature_ == nullptr && return this->signature2_ == nullptr
        && return this->sipServerUrl_ == nullptr && return this->userId_ == nullptr && return this->userKey_ == nullptr && return this->userKey2_ == nullptr && return this->workMode_ == nullptr; };
    // agentServerUrl Field Functions 
    bool hasAgentServerUrl() const { return this->agentServerUrl_ != nullptr;};
    void deleteAgentServerUrl() { this->agentServerUrl_ = nullptr;};
    inline string agentServerUrl() const { DARABONBA_PTR_GET_DEFAULT(agentServerUrl_, "") };
    inline GetLoginDetailsResponseBodyData& setAgentServerUrl(string agentServerUrl) { DARABONBA_PTR_SET_VALUE(agentServerUrl_, agentServerUrl) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline GetLoginDetailsResponseBodyData& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // chatAppId Field Functions 
    bool hasChatAppId() const { return this->chatAppId_ != nullptr;};
    void deleteChatAppId() { this->chatAppId_ = nullptr;};
    inline string chatAppId() const { DARABONBA_PTR_GET_DEFAULT(chatAppId_, "") };
    inline GetLoginDetailsResponseBodyData& setChatAppId(string chatAppId) { DARABONBA_PTR_SET_VALUE(chatAppId_, chatAppId) };


    // chatAppKey Field Functions 
    bool hasChatAppKey() const { return this->chatAppKey_ != nullptr;};
    void deleteChatAppKey() { this->chatAppKey_ = nullptr;};
    inline string chatAppKey() const { DARABONBA_PTR_GET_DEFAULT(chatAppKey_, "") };
    inline GetLoginDetailsResponseBodyData& setChatAppKey(string chatAppKey) { DARABONBA_PTR_SET_VALUE(chatAppKey_, chatAppKey) };


    // chatDeviceId Field Functions 
    bool hasChatDeviceId() const { return this->chatDeviceId_ != nullptr;};
    void deleteChatDeviceId() { this->chatDeviceId_ = nullptr;};
    inline string chatDeviceId() const { DARABONBA_PTR_GET_DEFAULT(chatDeviceId_, "") };
    inline GetLoginDetailsResponseBodyData& setChatDeviceId(string chatDeviceId) { DARABONBA_PTR_SET_VALUE(chatDeviceId_, chatDeviceId) };


    // chatLoginToken Field Functions 
    bool hasChatLoginToken() const { return this->chatLoginToken_ != nullptr;};
    void deleteChatLoginToken() { this->chatLoginToken_ = nullptr;};
    inline string chatLoginToken() const { DARABONBA_PTR_GET_DEFAULT(chatLoginToken_, "") };
    inline GetLoginDetailsResponseBodyData& setChatLoginToken(string chatLoginToken) { DARABONBA_PTR_SET_VALUE(chatLoginToken_, chatLoginToken) };


    // chatServerUrl Field Functions 
    bool hasChatServerUrl() const { return this->chatServerUrl_ != nullptr;};
    void deleteChatServerUrl() { this->chatServerUrl_ = nullptr;};
    inline string chatServerUrl() const { DARABONBA_PTR_GET_DEFAULT(chatServerUrl_, "") };
    inline GetLoginDetailsResponseBodyData& setChatServerUrl(string chatServerUrl) { DARABONBA_PTR_SET_VALUE(chatServerUrl_, chatServerUrl) };


    // chatUserId Field Functions 
    bool hasChatUserId() const { return this->chatUserId_ != nullptr;};
    void deleteChatUserId() { this->chatUserId_ = nullptr;};
    inline string chatUserId() const { DARABONBA_PTR_GET_DEFAULT(chatUserId_, "") };
    inline GetLoginDetailsResponseBodyData& setChatUserId(string chatUserId) { DARABONBA_PTR_SET_VALUE(chatUserId_, chatUserId) };


    // deviceExt Field Functions 
    bool hasDeviceExt() const { return this->deviceExt_ != nullptr;};
    void deleteDeviceExt() { this->deviceExt_ = nullptr;};
    inline string deviceExt() const { DARABONBA_PTR_GET_DEFAULT(deviceExt_, "") };
    inline GetLoginDetailsResponseBodyData& setDeviceExt(string deviceExt) { DARABONBA_PTR_SET_VALUE(deviceExt_, deviceExt) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetLoginDetailsResponseBodyData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceState Field Functions 
    bool hasDeviceState() const { return this->deviceState_ != nullptr;};
    void deleteDeviceState() { this->deviceState_ = nullptr;};
    inline string deviceState() const { DARABONBA_PTR_GET_DEFAULT(deviceState_, "") };
    inline GetLoginDetailsResponseBodyData& setDeviceState(string deviceState) { DARABONBA_PTR_SET_VALUE(deviceState_, deviceState) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetLoginDetailsResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline GetLoginDetailsResponseBodyData& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string nickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline GetLoginDetailsResponseBodyData& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetLoginDetailsResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // signature2 Field Functions 
    bool hasSignature2() const { return this->signature2_ != nullptr;};
    void deleteSignature2() { this->signature2_ = nullptr;};
    inline string signature2() const { DARABONBA_PTR_GET_DEFAULT(signature2_, "") };
    inline GetLoginDetailsResponseBodyData& setSignature2(string signature2) { DARABONBA_PTR_SET_VALUE(signature2_, signature2) };


    // sipServerUrl Field Functions 
    bool hasSipServerUrl() const { return this->sipServerUrl_ != nullptr;};
    void deleteSipServerUrl() { this->sipServerUrl_ = nullptr;};
    inline string sipServerUrl() const { DARABONBA_PTR_GET_DEFAULT(sipServerUrl_, "") };
    inline GetLoginDetailsResponseBodyData& setSipServerUrl(string sipServerUrl) { DARABONBA_PTR_SET_VALUE(sipServerUrl_, sipServerUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetLoginDetailsResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userKey Field Functions 
    bool hasUserKey() const { return this->userKey_ != nullptr;};
    void deleteUserKey() { this->userKey_ = nullptr;};
    inline string userKey() const { DARABONBA_PTR_GET_DEFAULT(userKey_, "") };
    inline GetLoginDetailsResponseBodyData& setUserKey(string userKey) { DARABONBA_PTR_SET_VALUE(userKey_, userKey) };


    // userKey2 Field Functions 
    bool hasUserKey2() const { return this->userKey2_ != nullptr;};
    void deleteUserKey2() { this->userKey2_ = nullptr;};
    inline string userKey2() const { DARABONBA_PTR_GET_DEFAULT(userKey2_, "") };
    inline GetLoginDetailsResponseBodyData& setUserKey2(string userKey2) { DARABONBA_PTR_SET_VALUE(userKey2_, userKey2) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string workMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline GetLoginDetailsResponseBodyData& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    std::shared_ptr<string> agentServerUrl_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> chatAppId_ = nullptr;
    std::shared_ptr<string> chatAppKey_ = nullptr;
    std::shared_ptr<string> chatDeviceId_ = nullptr;
    std::shared_ptr<string> chatLoginToken_ = nullptr;
    std::shared_ptr<string> chatServerUrl_ = nullptr;
    std::shared_ptr<string> chatUserId_ = nullptr;
    std::shared_ptr<string> deviceExt_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceState_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> nickname_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
    std::shared_ptr<string> signature2_ = nullptr;
    std::shared_ptr<string> sipServerUrl_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userKey_ = nullptr;
    std::shared_ptr<string> userKey2_ = nullptr;
    std::shared_ptr<string> workMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
