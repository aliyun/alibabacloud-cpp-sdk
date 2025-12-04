// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLECALLBYVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SINGLECALLBYVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SingleCallByVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleCallByVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SingleCallByVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SingleCallByVoiceRequest() = default ;
    SingleCallByVoiceRequest(const SingleCallByVoiceRequest &) = default ;
    SingleCallByVoiceRequest(SingleCallByVoiceRequest &&) = default ;
    SingleCallByVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleCallByVoiceRequest() = default ;
    SingleCallByVoiceRequest& operator=(const SingleCallByVoiceRequest &) = default ;
    SingleCallByVoiceRequest& operator=(SingleCallByVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && return this->calledShowNumber_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr && return this->playTimes_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->speed_ == nullptr && return this->voiceCode_ == nullptr && return this->volume_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline SingleCallByVoiceRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string calledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline SingleCallByVoiceRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SingleCallByVoiceRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SingleCallByVoiceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playTimes Field Functions 
    bool hasPlayTimes() const { return this->playTimes_ != nullptr;};
    void deletePlayTimes() { this->playTimes_ = nullptr;};
    inline int32_t playTimes() const { DARABONBA_PTR_GET_DEFAULT(playTimes_, 0) };
    inline SingleCallByVoiceRequest& setPlayTimes(int32_t playTimes) { DARABONBA_PTR_SET_VALUE(playTimes_, playTimes) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SingleCallByVoiceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SingleCallByVoiceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int32_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0) };
    inline SingleCallByVoiceRequest& setSpeed(int32_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // voiceCode Field Functions 
    bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
    void deleteVoiceCode() { this->voiceCode_ = nullptr;};
    inline string voiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
    inline SingleCallByVoiceRequest& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SingleCallByVoiceRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // The number for receiving voice notifications.
    // 
    // Number format:
    // 
    // *   In the Chinese mainland:
    // 
    //     *   Mobile phone number, for example, 159\\*\\*\\*\\*0000.
    //     *   Landline number, for example, 0571\\*\\*\\*\\*5678.
    // 
    // *   Outside the Chinese mainland: country code + phone number, for example, 85200\\*\\*\\*\\*00.
    // 
    // > 
    // 
    // *   You can specify only one called number for a request. For more information, see [How to use voice notifications in the Chinese mainland](https://help.aliyun.com/document_detail/150016.html) or [How to use voice notifications in regions outside the Chinese mainland](https://help.aliyun.com/document_detail/268810.html).
    // 
    // *   Voice notifications are sent to a called number at the following frequency: one time per minute, five times per hour, and 20 times per 24 hours.
    // 
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // The number displayed to the called party.
    // 
    // *   You do not need to specify this parameter if you use a voice notification file that uses the common outbound call mode. For more information, see [FAQ about the common outbound call mode](https://help.aliyun.com/document_detail/172104.html).
    // *   If you use a voice notification file that uses the dedicated outbound call mode, you must specify a number that you purchased. You can specify only one number. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home) and choose **Real Number Service** > **Real Number Management** to view the number that you purchased.
    std::shared_ptr<string> calledShowNumber_ = nullptr;
    // The ID reserved for the caller. This ID is returned to the caller in a receipt message.
    // 
    // The value must be of the STRING type and 1 to 15 bytes in length.
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of times the voice notification file is played. Valid values: 1 to 3.
    std::shared_ptr<int32_t> playTimes_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The playback speed of the voice notification file. Valid values: -500 to 500.
    std::shared_ptr<int32_t> speed_ = nullptr;
    // The voice ID of the voice notification file.
    // 
    // You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > **Voice Notifications** or **Voice File Management**, and then click the **Voice Notification Files** tab to view the **voice ID**.
    // 
    // This parameter is required.
    std::shared_ptr<string> voiceCode_ = nullptr;
    // The playback volume of the voice notification file. Valid values: 0 to 100. Default value: 100.
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
