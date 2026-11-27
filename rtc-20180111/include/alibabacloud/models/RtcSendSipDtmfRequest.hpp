// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSENDSIPDTMFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RTCSENDSIPDTMFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSendSipDtmfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSendSipDtmfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelUserId, channelUserId_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Digits, digits_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSendSipDtmfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelUserId, channelUserId_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Digits, digits_);
    };
    RtcSendSipDtmfRequest() = default ;
    RtcSendSipDtmfRequest(const RtcSendSipDtmfRequest &) = default ;
    RtcSendSipDtmfRequest(RtcSendSipDtmfRequest &&) = default ;
    RtcSendSipDtmfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSendSipDtmfRequest() = default ;
    RtcSendSipDtmfRequest& operator=(const RtcSendSipDtmfRequest &) = default ;
    RtcSendSipDtmfRequest& operator=(RtcSendSipDtmfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->channelUserId_ == nullptr && this->deviceType_ == nullptr && this->digits_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RtcSendSipDtmfRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline RtcSendSipDtmfRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelUserId Field Functions 
    bool hasChannelUserId() const { return this->channelUserId_ != nullptr;};
    void deleteChannelUserId() { this->channelUserId_ = nullptr;};
    inline string getChannelUserId() const { DARABONBA_PTR_GET_DEFAULT(channelUserId_, "") };
    inline RtcSendSipDtmfRequest& setChannelUserId(string channelUserId) { DARABONBA_PTR_SET_VALUE(channelUserId_, channelUserId) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline RtcSendSipDtmfRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // digits Field Functions 
    bool hasDigits() const { return this->digits_ != nullptr;};
    void deleteDigits() { this->digits_ = nullptr;};
    inline string getDigits() const { DARABONBA_PTR_GET_DEFAULT(digits_, "") };
    inline RtcSendSipDtmfRequest& setDigits(string digits) { DARABONBA_PTR_SET_VALUE(digits_, digits) };


  protected:
    // The application ID. You can create and query the ID in the console. Only a single ID is supported.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The ID of an existing channel. Only a single ID is supported.
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The user ID (sipUserId) in the target OneRTC SIP call.
    // 
    // This parameter is required.
    shared_ptr<string> channelUserId_ {};
    // The device type of the third-party Session Initiation Protocol (SIP) device. Valid values:
    // - sip_device
    // - mcu
    // - phone
    // 
    // This parameter is required.
    shared_ptr<string> deviceType_ {};
    // The keys to be sent. Supported keys include 0-9, A-D, a-d, *, #, W or w (wait), and F or f (flash). The keys are sent in the original order and case.
    // 
    // This parameter is required.
    shared_ptr<string> digits_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
