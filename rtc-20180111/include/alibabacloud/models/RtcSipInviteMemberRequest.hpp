// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPINVITEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPINVITEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipInviteMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipInviteMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppToken, appToken_);
      DARABONBA_PTR_TO_JSON(CallNumber, callNumber_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Registered, registered_);
      DARABONBA_PTR_TO_JSON(ServerAddress, serverAddress_);
      DARABONBA_PTR_TO_JSON(SipDisplayName, sipDisplayName_);
      DARABONBA_PTR_TO_JSON(SipRoomId, sipRoomId_);
      DARABONBA_PTR_TO_JSON(SipUri, sipUri_);
      DARABONBA_PTR_TO_JSON(SipUserAgent, sipUserAgent_);
      DARABONBA_PTR_TO_JSON(SipUserId, sipUserId_);
      DARABONBA_PTR_TO_JSON(SipUserPassword, sipUserPassword_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipInviteMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppToken, appToken_);
      DARABONBA_PTR_FROM_JSON(CallNumber, callNumber_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Registered, registered_);
      DARABONBA_PTR_FROM_JSON(ServerAddress, serverAddress_);
      DARABONBA_PTR_FROM_JSON(SipDisplayName, sipDisplayName_);
      DARABONBA_PTR_FROM_JSON(SipRoomId, sipRoomId_);
      DARABONBA_PTR_FROM_JSON(SipUri, sipUri_);
      DARABONBA_PTR_FROM_JSON(SipUserAgent, sipUserAgent_);
      DARABONBA_PTR_FROM_JSON(SipUserId, sipUserId_);
      DARABONBA_PTR_FROM_JSON(SipUserPassword, sipUserPassword_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    RtcSipInviteMemberRequest() = default ;
    RtcSipInviteMemberRequest(const RtcSipInviteMemberRequest &) = default ;
    RtcSipInviteMemberRequest(RtcSipInviteMemberRequest &&) = default ;
    RtcSipInviteMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipInviteMemberRequest() = default ;
    RtcSipInviteMemberRequest& operator=(const RtcSipInviteMemberRequest &) = default ;
    RtcSipInviteMemberRequest& operator=(RtcSipInviteMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appToken_ == nullptr && this->callNumber_ == nullptr && this->channelId_ == nullptr && this->deviceType_ == nullptr && this->registered_ == nullptr
        && this->serverAddress_ == nullptr && this->sipDisplayName_ == nullptr && this->sipRoomId_ == nullptr && this->sipUri_ == nullptr && this->sipUserAgent_ == nullptr
        && this->sipUserId_ == nullptr && this->sipUserPassword_ == nullptr && this->taskId_ == nullptr && this->uid_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RtcSipInviteMemberRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline RtcSipInviteMemberRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // callNumber Field Functions 
    bool hasCallNumber() const { return this->callNumber_ != nullptr;};
    void deleteCallNumber() { this->callNumber_ = nullptr;};
    inline string getCallNumber() const { DARABONBA_PTR_GET_DEFAULT(callNumber_, "") };
    inline RtcSipInviteMemberRequest& setCallNumber(string callNumber) { DARABONBA_PTR_SET_VALUE(callNumber_, callNumber) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline RtcSipInviteMemberRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline RtcSipInviteMemberRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // registered Field Functions 
    bool hasRegistered() const { return this->registered_ != nullptr;};
    void deleteRegistered() { this->registered_ = nullptr;};
    inline bool getRegistered() const { DARABONBA_PTR_GET_DEFAULT(registered_, false) };
    inline RtcSipInviteMemberRequest& setRegistered(bool registered) { DARABONBA_PTR_SET_VALUE(registered_, registered) };


    // serverAddress Field Functions 
    bool hasServerAddress() const { return this->serverAddress_ != nullptr;};
    void deleteServerAddress() { this->serverAddress_ = nullptr;};
    inline string getServerAddress() const { DARABONBA_PTR_GET_DEFAULT(serverAddress_, "") };
    inline RtcSipInviteMemberRequest& setServerAddress(string serverAddress) { DARABONBA_PTR_SET_VALUE(serverAddress_, serverAddress) };


    // sipDisplayName Field Functions 
    bool hasSipDisplayName() const { return this->sipDisplayName_ != nullptr;};
    void deleteSipDisplayName() { this->sipDisplayName_ = nullptr;};
    inline string getSipDisplayName() const { DARABONBA_PTR_GET_DEFAULT(sipDisplayName_, "") };
    inline RtcSipInviteMemberRequest& setSipDisplayName(string sipDisplayName) { DARABONBA_PTR_SET_VALUE(sipDisplayName_, sipDisplayName) };


    // sipRoomId Field Functions 
    bool hasSipRoomId() const { return this->sipRoomId_ != nullptr;};
    void deleteSipRoomId() { this->sipRoomId_ = nullptr;};
    inline string getSipRoomId() const { DARABONBA_PTR_GET_DEFAULT(sipRoomId_, "") };
    inline RtcSipInviteMemberRequest& setSipRoomId(string sipRoomId) { DARABONBA_PTR_SET_VALUE(sipRoomId_, sipRoomId) };


    // sipUri Field Functions 
    bool hasSipUri() const { return this->sipUri_ != nullptr;};
    void deleteSipUri() { this->sipUri_ = nullptr;};
    inline string getSipUri() const { DARABONBA_PTR_GET_DEFAULT(sipUri_, "") };
    inline RtcSipInviteMemberRequest& setSipUri(string sipUri) { DARABONBA_PTR_SET_VALUE(sipUri_, sipUri) };


    // sipUserAgent Field Functions 
    bool hasSipUserAgent() const { return this->sipUserAgent_ != nullptr;};
    void deleteSipUserAgent() { this->sipUserAgent_ = nullptr;};
    inline string getSipUserAgent() const { DARABONBA_PTR_GET_DEFAULT(sipUserAgent_, "") };
    inline RtcSipInviteMemberRequest& setSipUserAgent(string sipUserAgent) { DARABONBA_PTR_SET_VALUE(sipUserAgent_, sipUserAgent) };


    // sipUserId Field Functions 
    bool hasSipUserId() const { return this->sipUserId_ != nullptr;};
    void deleteSipUserId() { this->sipUserId_ = nullptr;};
    inline string getSipUserId() const { DARABONBA_PTR_GET_DEFAULT(sipUserId_, "") };
    inline RtcSipInviteMemberRequest& setSipUserId(string sipUserId) { DARABONBA_PTR_SET_VALUE(sipUserId_, sipUserId) };


    // sipUserPassword Field Functions 
    bool hasSipUserPassword() const { return this->sipUserPassword_ != nullptr;};
    void deleteSipUserPassword() { this->sipUserPassword_ = nullptr;};
    inline string getSipUserPassword() const { DARABONBA_PTR_GET_DEFAULT(sipUserPassword_, "") };
    inline RtcSipInviteMemberRequest& setSipUserPassword(string sipUserPassword) { DARABONBA_PTR_SET_VALUE(sipUserPassword_, sipUserPassword) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RtcSipInviteMemberRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline RtcSipInviteMemberRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> appToken_ {};
    shared_ptr<string> callNumber_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<string> deviceType_ {};
    // This parameter is required.
    shared_ptr<bool> registered_ {};
    shared_ptr<string> serverAddress_ {};
    // This parameter is required.
    shared_ptr<string> sipDisplayName_ {};
    // This parameter is required.
    shared_ptr<string> sipRoomId_ {};
    shared_ptr<string> sipUri_ {};
    shared_ptr<string> sipUserAgent_ {};
    // This parameter is required.
    shared_ptr<string> sipUserId_ {};
    shared_ptr<string> sipUserPassword_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
