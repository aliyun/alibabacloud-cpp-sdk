// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class SendNotificationForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(NotifycationEventType, notifycationEventType_);
      DARABONBA_PTR_TO_JSON(ParamMap, paramMap_);
      DARABONBA_PTR_TO_JSON(SendTarget, sendTarget_);
      DARABONBA_PTR_TO_JSON(SmartSubChannels, smartSubChannels_);
      DARABONBA_PTR_TO_JSON(TrackId, trackId_);
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(NotifycationEventType, notifycationEventType_);
      DARABONBA_PTR_FROM_JSON(ParamMap, paramMap_);
      DARABONBA_PTR_FROM_JSON(SendTarget, sendTarget_);
      DARABONBA_PTR_FROM_JSON(SmartSubChannels, smartSubChannels_);
      DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
    };
    SendNotificationForPartnerRequest() = default ;
    SendNotificationForPartnerRequest(const SendNotificationForPartnerRequest &) = default ;
    SendNotificationForPartnerRequest(SendNotificationForPartnerRequest &&) = default ;
    SendNotificationForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationForPartnerRequest() = default ;
    SendNotificationForPartnerRequest& operator=(const SendNotificationForPartnerRequest &) = default ;
    SendNotificationForPartnerRequest& operator=(SendNotificationForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->channelType_ == nullptr && return this->notifyType_ == nullptr && return this->notifycationEventType_ == nullptr && return this->paramMap_ == nullptr && return this->sendTarget_ == nullptr
        && return this->smartSubChannels_ == nullptr && return this->trackId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SendNotificationForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline SendNotificationForPartnerRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline SendNotificationForPartnerRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // notifycationEventType Field Functions 
    bool hasNotifycationEventType() const { return this->notifycationEventType_ != nullptr;};
    void deleteNotifycationEventType() { this->notifycationEventType_ = nullptr;};
    inline string notifycationEventType() const { DARABONBA_PTR_GET_DEFAULT(notifycationEventType_, "") };
    inline SendNotificationForPartnerRequest& setNotifycationEventType(string notifycationEventType) { DARABONBA_PTR_SET_VALUE(notifycationEventType_, notifycationEventType) };


    // paramMap Field Functions 
    bool hasParamMap() const { return this->paramMap_ != nullptr;};
    void deleteParamMap() { this->paramMap_ = nullptr;};
    inline const map<string, string> & paramMap() const { DARABONBA_PTR_GET_CONST(paramMap_, map<string, string>) };
    inline map<string, string> paramMap() { DARABONBA_PTR_GET(paramMap_, map<string, string>) };
    inline SendNotificationForPartnerRequest& setParamMap(const map<string, string> & paramMap) { DARABONBA_PTR_SET_VALUE(paramMap_, paramMap) };
    inline SendNotificationForPartnerRequest& setParamMap(map<string, string> && paramMap) { DARABONBA_PTR_SET_RVALUE(paramMap_, paramMap) };


    // sendTarget Field Functions 
    bool hasSendTarget() const { return this->sendTarget_ != nullptr;};
    void deleteSendTarget() { this->sendTarget_ = nullptr;};
    inline string sendTarget() const { DARABONBA_PTR_GET_DEFAULT(sendTarget_, "") };
    inline SendNotificationForPartnerRequest& setSendTarget(string sendTarget) { DARABONBA_PTR_SET_VALUE(sendTarget_, sendTarget) };


    // smartSubChannels Field Functions 
    bool hasSmartSubChannels() const { return this->smartSubChannels_ != nullptr;};
    void deleteSmartSubChannels() { this->smartSubChannels_ = nullptr;};
    inline const vector<string> & smartSubChannels() const { DARABONBA_PTR_GET_CONST(smartSubChannels_, vector<string>) };
    inline vector<string> smartSubChannels() { DARABONBA_PTR_GET(smartSubChannels_, vector<string>) };
    inline SendNotificationForPartnerRequest& setSmartSubChannels(const vector<string> & smartSubChannels) { DARABONBA_PTR_SET_VALUE(smartSubChannels_, smartSubChannels) };
    inline SendNotificationForPartnerRequest& setSmartSubChannels(vector<string> && smartSubChannels) { DARABONBA_PTR_SET_RVALUE(smartSubChannels_, smartSubChannels) };


    // trackId Field Functions 
    bool hasTrackId() const { return this->trackId_ != nullptr;};
    void deleteTrackId() { this->trackId_ = nullptr;};
    inline string trackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, "") };
    inline SendNotificationForPartnerRequest& setTrackId(string trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> channelType_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<string> notifycationEventType_ = nullptr;
    std::shared_ptr<map<string, string>> paramMap_ = nullptr;
    std::shared_ptr<string> sendTarget_ = nullptr;
    std::shared_ptr<vector<string>> smartSubChannels_ = nullptr;
    std::shared_ptr<string> trackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
