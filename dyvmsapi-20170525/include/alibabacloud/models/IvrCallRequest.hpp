// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IVRCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IVRCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IvrCallRequestMenuKeyMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class IvrCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IvrCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ByeCode, byeCode_);
      DARABONBA_PTR_TO_JSON(ByeTtsParams, byeTtsParams_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_TO_JSON(MenuKeyMap, menuKeyMap_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartCode, startCode_);
      DARABONBA_PTR_TO_JSON(StartTtsParams, startTtsParams_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, IvrCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ByeCode, byeCode_);
      DARABONBA_PTR_FROM_JSON(ByeTtsParams, byeTtsParams_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_FROM_JSON(MenuKeyMap, menuKeyMap_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartCode, startCode_);
      DARABONBA_PTR_FROM_JSON(StartTtsParams, startTtsParams_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    IvrCallRequest() = default ;
    IvrCallRequest(const IvrCallRequest &) = default ;
    IvrCallRequest(IvrCallRequest &&) = default ;
    IvrCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IvrCallRequest() = default ;
    IvrCallRequest& operator=(const IvrCallRequest &) = default ;
    IvrCallRequest& operator=(IvrCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byeCode_ == nullptr
        && return this->byeTtsParams_ == nullptr && return this->calledNumber_ == nullptr && return this->calledShowNumber_ == nullptr && return this->menuKeyMap_ == nullptr && return this->outId_ == nullptr
        && return this->ownerId_ == nullptr && return this->playTimes_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->startCode_ == nullptr
        && return this->startTtsParams_ == nullptr && return this->timeout_ == nullptr; };
    // byeCode Field Functions 
    bool hasByeCode() const { return this->byeCode_ != nullptr;};
    void deleteByeCode() { this->byeCode_ = nullptr;};
    inline string byeCode() const { DARABONBA_PTR_GET_DEFAULT(byeCode_, "") };
    inline IvrCallRequest& setByeCode(string byeCode) { DARABONBA_PTR_SET_VALUE(byeCode_, byeCode) };


    // byeTtsParams Field Functions 
    bool hasByeTtsParams() const { return this->byeTtsParams_ != nullptr;};
    void deleteByeTtsParams() { this->byeTtsParams_ = nullptr;};
    inline string byeTtsParams() const { DARABONBA_PTR_GET_DEFAULT(byeTtsParams_, "") };
    inline IvrCallRequest& setByeTtsParams(string byeTtsParams) { DARABONBA_PTR_SET_VALUE(byeTtsParams_, byeTtsParams) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline IvrCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string calledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline IvrCallRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // menuKeyMap Field Functions 
    bool hasMenuKeyMap() const { return this->menuKeyMap_ != nullptr;};
    void deleteMenuKeyMap() { this->menuKeyMap_ = nullptr;};
    inline const vector<IvrCallRequestMenuKeyMap> & menuKeyMap() const { DARABONBA_PTR_GET_CONST(menuKeyMap_, vector<IvrCallRequestMenuKeyMap>) };
    inline vector<IvrCallRequestMenuKeyMap> menuKeyMap() { DARABONBA_PTR_GET(menuKeyMap_, vector<IvrCallRequestMenuKeyMap>) };
    inline IvrCallRequest& setMenuKeyMap(const vector<IvrCallRequestMenuKeyMap> & menuKeyMap) { DARABONBA_PTR_SET_VALUE(menuKeyMap_, menuKeyMap) };
    inline IvrCallRequest& setMenuKeyMap(vector<IvrCallRequestMenuKeyMap> && menuKeyMap) { DARABONBA_PTR_SET_RVALUE(menuKeyMap_, menuKeyMap) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline IvrCallRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline IvrCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playTimes Field Functions 
    bool hasPlayTimes() const { return this->playTimes_ != nullptr;};
    void deletePlayTimes() { this->playTimes_ = nullptr;};
    inline int64_t playTimes() const { DARABONBA_PTR_GET_DEFAULT(playTimes_, 0L) };
    inline IvrCallRequest& setPlayTimes(int64_t playTimes) { DARABONBA_PTR_SET_VALUE(playTimes_, playTimes) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline IvrCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline IvrCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startCode Field Functions 
    bool hasStartCode() const { return this->startCode_ != nullptr;};
    void deleteStartCode() { this->startCode_ = nullptr;};
    inline string startCode() const { DARABONBA_PTR_GET_DEFAULT(startCode_, "") };
    inline IvrCallRequest& setStartCode(string startCode) { DARABONBA_PTR_SET_VALUE(startCode_, startCode) };


    // startTtsParams Field Functions 
    bool hasStartTtsParams() const { return this->startTtsParams_ != nullptr;};
    void deleteStartTtsParams() { this->startTtsParams_ = nullptr;};
    inline string startTtsParams() const { DARABONBA_PTR_GET_DEFAULT(startTtsParams_, "") };
    inline IvrCallRequest& setStartTtsParams(string startTtsParams) { DARABONBA_PTR_SET_VALUE(startTtsParams_, startTtsParams) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline IvrCallRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The end voice.
    // 
    // *   If you use a voice notification file, this parameter specifies the voice ID. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > **Voice Notifications**, and then click the **Voice Notification Files** tab to view the voice ID.
    // *   If you use a TTS template, this parameter specifies the template ID. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > **Voice Notifications**, and then click the **TTS Template** tab to view the template ID.
    // 
    // > The value of the ByeCode parameter must be of the same type as the value of the StartCode parameter. This means that both parameters must specify voice IDs or TTS template IDs.
    std::shared_ptr<string> byeCode_ = nullptr;
    // The variables in the TTS template, in the JSON format.
    // 
    // > This parameter is required when the ByeCode parameter is set to the ID of a TTS template that contains variables.
    std::shared_ptr<string> byeTtsParams_ = nullptr;
    // The called number.
    // 
    // Only phone numbers in the Chinese mainland are supported. Each request supports only one called number.
    // 
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // The calling number.
    // 
    // The value must be a number you purchased. Each request supports only one calling number. In most cases, a calling number is configured with the maximum number of concurrent requests. New requests fail if the maximum number of concurrent requests is reached. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home) and choose **Real Number Service > Real Number Management** to view the number you purchased.
    // 
    // This parameter is required.
    std::shared_ptr<string> calledShowNumber_ = nullptr;
    // The information about the key pressed by the subscriber.
    std::shared_ptr<vector<IvrCallRequestMenuKeyMap>> menuKeyMap_ = nullptr;
    // The ID that is reserved for the caller of the operation. This ID is returned to the caller in a receipt message.
    // 
    // The value is of the STRING type and must be 1 to 15 bytes in length.
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of replay times. Valid values: 1 to 3.
    std::shared_ptr<int64_t> playTimes_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The voice that is played when the call begins.
    // 
    // *   If you use a voice notification file, this parameter specifies the voice ID. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > Voice Notifications, and then click the **Voice Notification Files** tab to view the voice ID.
    // *   If you use a text-to-speech (TTS) template, this parameter specifies the template ID. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > **Voice Notifications**, and then click the **TTS Template** tab to view the template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> startCode_ = nullptr;
    // The variables in the TTS template, in the JSON format.
    // 
    // > This parameter is required when the StartCode parameter is set to the ID of a TTS template that contains variables.
    std::shared_ptr<string> startTtsParams_ = nullptr;
    // The timeout period for the subscriber to press a key. Unit: milliseconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
