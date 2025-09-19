// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFOOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTINSTANCELOGININFOOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequestInstanceLoginInfoOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequestInstanceLoginInfoOptions& obj) { 
      DARABONBA_PTR_TO_JSON(AudioMuteSeconds, audioMuteSeconds_);
      DARABONBA_PTR_TO_JSON(ContainerInfo, containerInfo_);
      DARABONBA_PTR_TO_JSON(FixedHeight, fixedHeight_);
      DARABONBA_PTR_TO_JSON(FixedWidth, fixedWidth_);
      DARABONBA_PTR_TO_JSON(NotificationEventTypes, notificationEventTypes_);
      DARABONBA_PTR_TO_JSON(NotificationRecipientUrl, notificationRecipientUrl_);
      DARABONBA_PTR_TO_JSON(NotificationRetryIntervalSeconds, notificationRetryIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(NotificationRetryLimit, notificationRetryLimit_);
      DARABONBA_PTR_TO_JSON(OperationDisableSeconds, operationDisableSeconds_);
      DARABONBA_PTR_TO_JSON(SessionControl, sessionControl_);
      DARABONBA_PTR_TO_JSON(VideoFreezeSeconds, videoFreezeSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequestInstanceLoginInfoOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioMuteSeconds, audioMuteSeconds_);
      DARABONBA_PTR_FROM_JSON(ContainerInfo, containerInfo_);
      DARABONBA_PTR_FROM_JSON(FixedHeight, fixedHeight_);
      DARABONBA_PTR_FROM_JSON(FixedWidth, fixedWidth_);
      DARABONBA_PTR_FROM_JSON(NotificationEventTypes, notificationEventTypes_);
      DARABONBA_PTR_FROM_JSON(NotificationRecipientUrl, notificationRecipientUrl_);
      DARABONBA_PTR_FROM_JSON(NotificationRetryIntervalSeconds, notificationRetryIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(NotificationRetryLimit, notificationRetryLimit_);
      DARABONBA_PTR_FROM_JSON(OperationDisableSeconds, operationDisableSeconds_);
      DARABONBA_PTR_FROM_JSON(SessionControl, sessionControl_);
      DARABONBA_PTR_FROM_JSON(VideoFreezeSeconds, videoFreezeSeconds_);
    };
    LoginInstanceRequestInstanceLoginInfoOptions() = default ;
    LoginInstanceRequestInstanceLoginInfoOptions(const LoginInstanceRequestInstanceLoginInfoOptions &) = default ;
    LoginInstanceRequestInstanceLoginInfoOptions(LoginInstanceRequestInstanceLoginInfoOptions &&) = default ;
    LoginInstanceRequestInstanceLoginInfoOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequestInstanceLoginInfoOptions() = default ;
    LoginInstanceRequestInstanceLoginInfoOptions& operator=(const LoginInstanceRequestInstanceLoginInfoOptions &) = default ;
    LoginInstanceRequestInstanceLoginInfoOptions& operator=(LoginInstanceRequestInstanceLoginInfoOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioMuteSeconds_ != nullptr
        && this->containerInfo_ != nullptr && this->fixedHeight_ != nullptr && this->fixedWidth_ != nullptr && this->notificationEventTypes_ != nullptr && this->notificationRecipientUrl_ != nullptr
        && this->notificationRetryIntervalSeconds_ != nullptr && this->notificationRetryLimit_ != nullptr && this->operationDisableSeconds_ != nullptr && this->sessionControl_ != nullptr && this->videoFreezeSeconds_ != nullptr; };
    // audioMuteSeconds Field Functions 
    bool hasAudioMuteSeconds() const { return this->audioMuteSeconds_ != nullptr;};
    void deleteAudioMuteSeconds() { this->audioMuteSeconds_ = nullptr;};
    inline int32_t audioMuteSeconds() const { DARABONBA_PTR_GET_DEFAULT(audioMuteSeconds_, 0) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setAudioMuteSeconds(int32_t audioMuteSeconds) { DARABONBA_PTR_SET_VALUE(audioMuteSeconds_, audioMuteSeconds) };


    // containerInfo Field Functions 
    bool hasContainerInfo() const { return this->containerInfo_ != nullptr;};
    void deleteContainerInfo() { this->containerInfo_ = nullptr;};
    inline const Models::LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo & containerInfo() const { DARABONBA_PTR_GET_CONST(containerInfo_, Models::LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo) };
    inline Models::LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo containerInfo() { DARABONBA_PTR_GET(containerInfo_, Models::LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setContainerInfo(const Models::LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo & containerInfo) { DARABONBA_PTR_SET_VALUE(containerInfo_, containerInfo) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setContainerInfo(Models::LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo && containerInfo) { DARABONBA_PTR_SET_RVALUE(containerInfo_, containerInfo) };


    // fixedHeight Field Functions 
    bool hasFixedHeight() const { return this->fixedHeight_ != nullptr;};
    void deleteFixedHeight() { this->fixedHeight_ = nullptr;};
    inline int32_t fixedHeight() const { DARABONBA_PTR_GET_DEFAULT(fixedHeight_, 0) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setFixedHeight(int32_t fixedHeight) { DARABONBA_PTR_SET_VALUE(fixedHeight_, fixedHeight) };


    // fixedWidth Field Functions 
    bool hasFixedWidth() const { return this->fixedWidth_ != nullptr;};
    void deleteFixedWidth() { this->fixedWidth_ = nullptr;};
    inline int32_t fixedWidth() const { DARABONBA_PTR_GET_DEFAULT(fixedWidth_, 0) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setFixedWidth(int32_t fixedWidth) { DARABONBA_PTR_SET_VALUE(fixedWidth_, fixedWidth) };


    // notificationEventTypes Field Functions 
    bool hasNotificationEventTypes() const { return this->notificationEventTypes_ != nullptr;};
    void deleteNotificationEventTypes() { this->notificationEventTypes_ = nullptr;};
    inline string notificationEventTypes() const { DARABONBA_PTR_GET_DEFAULT(notificationEventTypes_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setNotificationEventTypes(string notificationEventTypes) { DARABONBA_PTR_SET_VALUE(notificationEventTypes_, notificationEventTypes) };


    // notificationRecipientUrl Field Functions 
    bool hasNotificationRecipientUrl() const { return this->notificationRecipientUrl_ != nullptr;};
    void deleteNotificationRecipientUrl() { this->notificationRecipientUrl_ = nullptr;};
    inline string notificationRecipientUrl() const { DARABONBA_PTR_GET_DEFAULT(notificationRecipientUrl_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setNotificationRecipientUrl(string notificationRecipientUrl) { DARABONBA_PTR_SET_VALUE(notificationRecipientUrl_, notificationRecipientUrl) };


    // notificationRetryIntervalSeconds Field Functions 
    bool hasNotificationRetryIntervalSeconds() const { return this->notificationRetryIntervalSeconds_ != nullptr;};
    void deleteNotificationRetryIntervalSeconds() { this->notificationRetryIntervalSeconds_ = nullptr;};
    inline int32_t notificationRetryIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(notificationRetryIntervalSeconds_, 0) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setNotificationRetryIntervalSeconds(int32_t notificationRetryIntervalSeconds) { DARABONBA_PTR_SET_VALUE(notificationRetryIntervalSeconds_, notificationRetryIntervalSeconds) };


    // notificationRetryLimit Field Functions 
    bool hasNotificationRetryLimit() const { return this->notificationRetryLimit_ != nullptr;};
    void deleteNotificationRetryLimit() { this->notificationRetryLimit_ = nullptr;};
    inline int32_t notificationRetryLimit() const { DARABONBA_PTR_GET_DEFAULT(notificationRetryLimit_, 0) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setNotificationRetryLimit(int32_t notificationRetryLimit) { DARABONBA_PTR_SET_VALUE(notificationRetryLimit_, notificationRetryLimit) };


    // operationDisableSeconds Field Functions 
    bool hasOperationDisableSeconds() const { return this->operationDisableSeconds_ != nullptr;};
    void deleteOperationDisableSeconds() { this->operationDisableSeconds_ = nullptr;};
    inline int32_t operationDisableSeconds() const { DARABONBA_PTR_GET_DEFAULT(operationDisableSeconds_, 0) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setOperationDisableSeconds(int32_t operationDisableSeconds) { DARABONBA_PTR_SET_VALUE(operationDisableSeconds_, operationDisableSeconds) };


    // sessionControl Field Functions 
    bool hasSessionControl() const { return this->sessionControl_ != nullptr;};
    void deleteSessionControl() { this->sessionControl_ = nullptr;};
    inline string sessionControl() const { DARABONBA_PTR_GET_DEFAULT(sessionControl_, "") };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setSessionControl(string sessionControl) { DARABONBA_PTR_SET_VALUE(sessionControl_, sessionControl) };


    // videoFreezeSeconds Field Functions 
    bool hasVideoFreezeSeconds() const { return this->videoFreezeSeconds_ != nullptr;};
    void deleteVideoFreezeSeconds() { this->videoFreezeSeconds_ = nullptr;};
    inline int32_t videoFreezeSeconds() const { DARABONBA_PTR_GET_DEFAULT(videoFreezeSeconds_, 0) };
    inline LoginInstanceRequestInstanceLoginInfoOptions& setVideoFreezeSeconds(int32_t videoFreezeSeconds) { DARABONBA_PTR_SET_VALUE(videoFreezeSeconds_, videoFreezeSeconds) };


  protected:
    std::shared_ptr<int32_t> audioMuteSeconds_ = nullptr;
    std::shared_ptr<Models::LoginInstanceRequestInstanceLoginInfoOptionsContainerInfo> containerInfo_ = nullptr;
    std::shared_ptr<int32_t> fixedHeight_ = nullptr;
    std::shared_ptr<int32_t> fixedWidth_ = nullptr;
    std::shared_ptr<string> notificationEventTypes_ = nullptr;
    std::shared_ptr<string> notificationRecipientUrl_ = nullptr;
    std::shared_ptr<int32_t> notificationRetryIntervalSeconds_ = nullptr;
    std::shared_ptr<int32_t> notificationRetryLimit_ = nullptr;
    std::shared_ptr<int32_t> operationDisableSeconds_ = nullptr;
    std::shared_ptr<string> sessionControl_ = nullptr;
    std::shared_ptr<int32_t> videoFreezeSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
