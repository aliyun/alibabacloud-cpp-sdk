// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLECALLBYTTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SINGLECALLBYTTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SingleCallByTtsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleCallByTtsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(TtsCode, ttsCode_);
      DARABONBA_PTR_TO_JSON(TtsParam, ttsParam_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SingleCallByTtsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(TtsCode, ttsCode_);
      DARABONBA_PTR_FROM_JSON(TtsParam, ttsParam_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SingleCallByTtsRequest() = default ;
    SingleCallByTtsRequest(const SingleCallByTtsRequest &) = default ;
    SingleCallByTtsRequest(SingleCallByTtsRequest &&) = default ;
    SingleCallByTtsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleCallByTtsRequest() = default ;
    SingleCallByTtsRequest& operator=(const SingleCallByTtsRequest &) = default ;
    SingleCallByTtsRequest& operator=(SingleCallByTtsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && return this->calledShowNumber_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr && return this->playTimes_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->speed_ == nullptr && return this->ttsCode_ == nullptr && return this->ttsParam_ == nullptr && return this->volume_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline SingleCallByTtsRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string calledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline SingleCallByTtsRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SingleCallByTtsRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SingleCallByTtsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playTimes Field Functions 
    bool hasPlayTimes() const { return this->playTimes_ != nullptr;};
    void deletePlayTimes() { this->playTimes_ = nullptr;};
    inline int32_t playTimes() const { DARABONBA_PTR_GET_DEFAULT(playTimes_, 0) };
    inline SingleCallByTtsRequest& setPlayTimes(int32_t playTimes) { DARABONBA_PTR_SET_VALUE(playTimes_, playTimes) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SingleCallByTtsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SingleCallByTtsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int32_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0) };
    inline SingleCallByTtsRequest& setSpeed(int32_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // ttsCode Field Functions 
    bool hasTtsCode() const { return this->ttsCode_ != nullptr;};
    void deleteTtsCode() { this->ttsCode_ = nullptr;};
    inline string ttsCode() const { DARABONBA_PTR_GET_DEFAULT(ttsCode_, "") };
    inline SingleCallByTtsRequest& setTtsCode(string ttsCode) { DARABONBA_PTR_SET_VALUE(ttsCode_, ttsCode) };


    // ttsParam Field Functions 
    bool hasTtsParam() const { return this->ttsParam_ != nullptr;};
    void deleteTtsParam() { this->ttsParam_ = nullptr;};
    inline string ttsParam() const { DARABONBA_PTR_GET_DEFAULT(ttsParam_, "") };
    inline SingleCallByTtsRequest& setTtsParam(string ttsParam) { DARABONBA_PTR_SET_VALUE(ttsParam_, ttsParam) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SingleCallByTtsRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // The mobile phone number that receives voice notifications.
    // 
    // *   Number format in the Chinese mainland:
    // 
    //     *   Mobile phone number, for example, 159\\*\\*\\*\\*0000.
    //     *   Landline number, for example, 0571\\*\\*\\*\\*5678.
    // 
    // *   Number format outside the Chinese mainland: country code + phone number, for example, 85200\\*\\*\\*\\*00.
    // 
    // > 
    // 
    // *   Each request supports only one called number. For more information, see [How to use voice notifications in the Chinese mainland](https://help.aliyun.com/document_detail/150016.html) or [How to use voice verification codes in regions outside the Chinese mainland](https://help.aliyun.com/document_detail/270044.html).
    // 
    // *   Voice verification codes are sent to a called number at the following frequency: one time per minute, five times per hour, and 20 times per 24 hours.
    // 
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // The number displayed to the called party.
    // 
    // *   You do not need to specify this parameter if you use the text-to-speech (TTS) notification template or voice verification code template for outbound calls in the common mode. For more information, see [FAQ about the common outbound call mode](https://help.aliyun.com/document_detail/172104.html).
    // *   If you use the TTS notification template or voice verification code template for outbound calls in the dedicated mode, you must specify a number you purchased and only one number can be specified. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home) and choose **Voice Numbers** > **Real Number Management** to view the number you purchased.
    std::shared_ptr<string> calledShowNumber_ = nullptr;
    // The custom ID that is reserved for the caller of the operation when the request is initiated. This ID is returned to the caller in a receipt message.
    // 
    // The value is of the STRING type and must be 1 to 15 bytes in length.
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of times a voice notification is played back in a call. Valid values: 1 to 3. Default value: 3.
    std::shared_ptr<int32_t> playTimes_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The playback speed. Valid value: -500 to 500.
    std::shared_ptr<int32_t> speed_ = nullptr;
    // The ID of the approved TTS notification template or voice verification code template.
    // 
    // You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), and choose **Voice Messages** > **Voice Verification Codes** or choose **Voice Messages** > **Voice Notifications** to view the **template ID**.
    // 
    // > The account to which the TTS template belongs must be the same as the account that is used to call the SingleCallByTts operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> ttsCode_ = nullptr;
    // The variables in the template, in the JSON format.
    // 
    // > The variables in the template must be less than 250 characters in length. The length of each single variable is not limited. These variables do not support URLs. The variables in the verification code template support only digits and letters.
    std::shared_ptr<string> ttsParam_ = nullptr;
    // The playback volume of the voice notification. Valid values: 0 to 100. Default value: 100.
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
