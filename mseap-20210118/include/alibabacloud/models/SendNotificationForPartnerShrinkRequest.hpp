// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONFORPARTNERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONFORPARTNERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class SendNotificationForPartnerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationForPartnerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(NotifycationEventType, notifycationEventType_);
      DARABONBA_PTR_TO_JSON(ParamMap, paramMapShrink_);
      DARABONBA_PTR_TO_JSON(SendTarget, sendTarget_);
      DARABONBA_PTR_TO_JSON(SmartSubChannels, smartSubChannelsShrink_);
      DARABONBA_PTR_TO_JSON(TrackId, trackId_);
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationForPartnerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(NotifycationEventType, notifycationEventType_);
      DARABONBA_PTR_FROM_JSON(ParamMap, paramMapShrink_);
      DARABONBA_PTR_FROM_JSON(SendTarget, sendTarget_);
      DARABONBA_PTR_FROM_JSON(SmartSubChannels, smartSubChannelsShrink_);
      DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
    };
    SendNotificationForPartnerShrinkRequest() = default ;
    SendNotificationForPartnerShrinkRequest(const SendNotificationForPartnerShrinkRequest &) = default ;
    SendNotificationForPartnerShrinkRequest(SendNotificationForPartnerShrinkRequest &&) = default ;
    SendNotificationForPartnerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationForPartnerShrinkRequest() = default ;
    SendNotificationForPartnerShrinkRequest& operator=(const SendNotificationForPartnerShrinkRequest &) = default ;
    SendNotificationForPartnerShrinkRequest& operator=(SendNotificationForPartnerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->channelType_ == nullptr && return this->notifyType_ == nullptr && return this->notifycationEventType_ == nullptr && return this->paramMapShrink_ == nullptr && return this->sendTarget_ == nullptr
        && return this->smartSubChannelsShrink_ == nullptr && return this->trackId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SendNotificationForPartnerShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline SendNotificationForPartnerShrinkRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline SendNotificationForPartnerShrinkRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // notifycationEventType Field Functions 
    bool hasNotifycationEventType() const { return this->notifycationEventType_ != nullptr;};
    void deleteNotifycationEventType() { this->notifycationEventType_ = nullptr;};
    inline string notifycationEventType() const { DARABONBA_PTR_GET_DEFAULT(notifycationEventType_, "") };
    inline SendNotificationForPartnerShrinkRequest& setNotifycationEventType(string notifycationEventType) { DARABONBA_PTR_SET_VALUE(notifycationEventType_, notifycationEventType) };


    // paramMapShrink Field Functions 
    bool hasParamMapShrink() const { return this->paramMapShrink_ != nullptr;};
    void deleteParamMapShrink() { this->paramMapShrink_ = nullptr;};
    inline string paramMapShrink() const { DARABONBA_PTR_GET_DEFAULT(paramMapShrink_, "") };
    inline SendNotificationForPartnerShrinkRequest& setParamMapShrink(string paramMapShrink) { DARABONBA_PTR_SET_VALUE(paramMapShrink_, paramMapShrink) };


    // sendTarget Field Functions 
    bool hasSendTarget() const { return this->sendTarget_ != nullptr;};
    void deleteSendTarget() { this->sendTarget_ = nullptr;};
    inline string sendTarget() const { DARABONBA_PTR_GET_DEFAULT(sendTarget_, "") };
    inline SendNotificationForPartnerShrinkRequest& setSendTarget(string sendTarget) { DARABONBA_PTR_SET_VALUE(sendTarget_, sendTarget) };


    // smartSubChannelsShrink Field Functions 
    bool hasSmartSubChannelsShrink() const { return this->smartSubChannelsShrink_ != nullptr;};
    void deleteSmartSubChannelsShrink() { this->smartSubChannelsShrink_ = nullptr;};
    inline string smartSubChannelsShrink() const { DARABONBA_PTR_GET_DEFAULT(smartSubChannelsShrink_, "") };
    inline SendNotificationForPartnerShrinkRequest& setSmartSubChannelsShrink(string smartSubChannelsShrink) { DARABONBA_PTR_SET_VALUE(smartSubChannelsShrink_, smartSubChannelsShrink) };


    // trackId Field Functions 
    bool hasTrackId() const { return this->trackId_ != nullptr;};
    void deleteTrackId() { this->trackId_ = nullptr;};
    inline string trackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, "") };
    inline SendNotificationForPartnerShrinkRequest& setTrackId(string trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> channelType_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<string> notifycationEventType_ = nullptr;
    std::shared_ptr<string> paramMapShrink_ = nullptr;
    std::shared_ptr<string> sendTarget_ = nullptr;
    std::shared_ptr<string> smartSubChannelsShrink_ = nullptr;
    std::shared_ptr<string> trackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
