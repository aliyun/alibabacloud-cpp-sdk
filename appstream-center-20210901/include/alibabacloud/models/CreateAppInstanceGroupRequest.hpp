// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RuntimePolicy, runtimePolicy_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_TO_JSON(UserDefinePolicy, userDefinePolicy_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(Users, users_);
      DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RuntimePolicy, runtimePolicy_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_FROM_JSON(UserDefinePolicy, userDefinePolicy_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
      DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicy_);
    };
    CreateAppInstanceGroupRequest() = default ;
    CreateAppInstanceGroupRequest(const CreateAppInstanceGroupRequest &) = default ;
    CreateAppInstanceGroupRequest(CreateAppInstanceGroupRequest &&) = default ;
    CreateAppInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequest() = default ;
    CreateAppInstanceGroupRequest& operator=(const CreateAppInstanceGroupRequest &) = default ;
    CreateAppInstanceGroupRequest& operator=(CreateAppInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_TO_JSON(SessionResolutionHeight, sessionResolutionHeight_);
        DARABONBA_PTR_TO_JSON(SessionResolutionWidth, sessionResolutionWidth_);
        DARABONBA_PTR_TO_JSON(StreamingMode, streamingMode_);
        DARABONBA_PTR_TO_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
        DARABONBA_PTR_TO_JSON(Webrtc, webrtc_);
      };
      friend void from_json(const Darabonba::Json& j, VideoPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_FROM_JSON(SessionResolutionHeight, sessionResolutionHeight_);
        DARABONBA_PTR_FROM_JSON(SessionResolutionWidth, sessionResolutionWidth_);
        DARABONBA_PTR_FROM_JSON(StreamingMode, streamingMode_);
        DARABONBA_PTR_FROM_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
        DARABONBA_PTR_FROM_JSON(Webrtc, webrtc_);
      };
      VideoPolicy() = default ;
      VideoPolicy(const VideoPolicy &) = default ;
      VideoPolicy(VideoPolicy &&) = default ;
      VideoPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoPolicy() = default ;
      VideoPolicy& operator=(const VideoPolicy &) = default ;
      VideoPolicy& operator=(VideoPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->frameRate_ == nullptr
        && this->sessionResolutionHeight_ == nullptr && this->sessionResolutionWidth_ == nullptr && this->streamingMode_ == nullptr && this->terminalResolutionAdaptive_ == nullptr && this->webrtc_ == nullptr; };
      // frameRate Field Functions 
      bool hasFrameRate() const { return this->frameRate_ != nullptr;};
      void deleteFrameRate() { this->frameRate_ = nullptr;};
      inline int32_t getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
      inline VideoPolicy& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


      // sessionResolutionHeight Field Functions 
      bool hasSessionResolutionHeight() const { return this->sessionResolutionHeight_ != nullptr;};
      void deleteSessionResolutionHeight() { this->sessionResolutionHeight_ = nullptr;};
      inline int32_t getSessionResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionHeight_, 0) };
      inline VideoPolicy& setSessionResolutionHeight(int32_t sessionResolutionHeight) { DARABONBA_PTR_SET_VALUE(sessionResolutionHeight_, sessionResolutionHeight) };


      // sessionResolutionWidth Field Functions 
      bool hasSessionResolutionWidth() const { return this->sessionResolutionWidth_ != nullptr;};
      void deleteSessionResolutionWidth() { this->sessionResolutionWidth_ = nullptr;};
      inline int32_t getSessionResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionWidth_, 0) };
      inline VideoPolicy& setSessionResolutionWidth(int32_t sessionResolutionWidth) { DARABONBA_PTR_SET_VALUE(sessionResolutionWidth_, sessionResolutionWidth) };


      // streamingMode Field Functions 
      bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
      void deleteStreamingMode() { this->streamingMode_ = nullptr;};
      inline string getStreamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
      inline VideoPolicy& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


      // terminalResolutionAdaptive Field Functions 
      bool hasTerminalResolutionAdaptive() const { return this->terminalResolutionAdaptive_ != nullptr;};
      void deleteTerminalResolutionAdaptive() { this->terminalResolutionAdaptive_ = nullptr;};
      inline bool getTerminalResolutionAdaptive() const { DARABONBA_PTR_GET_DEFAULT(terminalResolutionAdaptive_, false) };
      inline VideoPolicy& setTerminalResolutionAdaptive(bool terminalResolutionAdaptive) { DARABONBA_PTR_SET_VALUE(terminalResolutionAdaptive_, terminalResolutionAdaptive) };


      // webrtc Field Functions 
      bool hasWebrtc() const { return this->webrtc_ != nullptr;};
      void deleteWebrtc() { this->webrtc_ = nullptr;};
      inline bool getWebrtc() const { DARABONBA_PTR_GET_DEFAULT(webrtc_, false) };
      inline VideoPolicy& setWebrtc(bool webrtc) { DARABONBA_PTR_SET_VALUE(webrtc_, webrtc) };


    protected:
      // Frame rate (FPS).
      shared_ptr<int32_t> frameRate_ {};
      // Resolution height, in pixels.
      shared_ptr<int32_t> sessionResolutionHeight_ {};
      // Resolution width, in pixels.
      shared_ptr<int32_t> sessionResolutionWidth_ {};
      // Streaming mode. Combined with the Webrtc parameter, it indicates the protocol type.
      // 
      // - When Webrtc=true and StreamingMode=video, it indicates a WebRTC stream.
      // - When Webrtc=false and StreamingMode=video, it indicates a video stream.
      // - When Webrtc=false and StreamingMode=mix, it indicates a mixed stream.
      shared_ptr<string> streamingMode_ {};
      // Whether to use adaptive resolution.
      // 
      // - true: The session resolution follows changes in the terminal\\"s display area. In this case, SessionResolutionWidth and SessionResolutionHeight represent the maximum values for resolution adjustment.
      // 
      // - false: The session resolution does not follow changes in the terminal\\"s display area. In this case, the resolution is fixed to the values of SessionResolutionWidth and SessionResolutionHeight.
      shared_ptr<bool> terminalResolutionAdaptive_ {};
      // Whether to enable WebRTC. Combined with the StreamingMode parameter, it indicates the protocol type.
      // 
      // - When Webrtc=true and StreamingMode=video, it indicates a WebRTC stream.
      // - When Webrtc=false and StreamingMode=video, it indicates a video stream.
      // - When Webrtc=false and StreamingMode=mix, it indicates a mixed stream.
      shared_ptr<bool> webrtc_ {};
    };

    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UserInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The account type of the user.
      // 
      // Valid value:
      // 
      // *   Simple: convenience account
      shared_ptr<string> type_ {};
    };

    class UserDefinePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDefinePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(CustomConfig, customConfig_);
      };
      friend void from_json(const Darabonba::Json& j, UserDefinePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomConfig, customConfig_);
      };
      UserDefinePolicy() = default ;
      UserDefinePolicy(const UserDefinePolicy &) = default ;
      UserDefinePolicy(UserDefinePolicy &&) = default ;
      UserDefinePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDefinePolicy() = default ;
      UserDefinePolicy& operator=(const UserDefinePolicy &) = default ;
      UserDefinePolicy& operator=(UserDefinePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customConfig_ == nullptr; };
      // customConfig Field Functions 
      bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
      void deleteCustomConfig() { this->customConfig_ = nullptr;};
      inline string getCustomConfig() const { DARABONBA_PTR_GET_DEFAULT(customConfig_, "") };
      inline UserDefinePolicy& setCustomConfig(string customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };


    protected:
      // The content of the custom policy. The content must meet the specifications of image versions. To use this parameter, submit a ticket to apply to enable the whitelist feature.
      shared_ptr<string> customConfig_ {};
    };

    class StoragePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StoragePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(StorageTypeList, storageTypeList_);
        DARABONBA_PTR_TO_JSON(UserProfile, userProfile_);
      };
      friend void from_json(const Darabonba::Json& j, StoragePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageTypeList, storageTypeList_);
        DARABONBA_PTR_FROM_JSON(UserProfile, userProfile_);
      };
      StoragePolicy() = default ;
      StoragePolicy(const StoragePolicy &) = default ;
      StoragePolicy(StoragePolicy &&) = default ;
      StoragePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StoragePolicy() = default ;
      StoragePolicy& operator=(const StoragePolicy &) = default ;
      StoragePolicy& operator=(StoragePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserProfile& obj) { 
          DARABONBA_PTR_TO_JSON(RemoteStoragePath, remoteStoragePath_);
          DARABONBA_PTR_TO_JSON(RemoteStorageType, remoteStorageType_);
          DARABONBA_PTR_TO_JSON(UserProfileSwitch, userProfileSwitch_);
        };
        friend void from_json(const Darabonba::Json& j, UserProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(RemoteStoragePath, remoteStoragePath_);
          DARABONBA_PTR_FROM_JSON(RemoteStorageType, remoteStorageType_);
          DARABONBA_PTR_FROM_JSON(UserProfileSwitch, userProfileSwitch_);
        };
        UserProfile() = default ;
        UserProfile(const UserProfile &) = default ;
        UserProfile(UserProfile &&) = default ;
        UserProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserProfile() = default ;
        UserProfile& operator=(const UserProfile &) = default ;
        UserProfile& operator=(UserProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->remoteStoragePath_ == nullptr
        && this->remoteStorageType_ == nullptr && this->userProfileSwitch_ == nullptr; };
        // remoteStoragePath Field Functions 
        bool hasRemoteStoragePath() const { return this->remoteStoragePath_ != nullptr;};
        void deleteRemoteStoragePath() { this->remoteStoragePath_ = nullptr;};
        inline string getRemoteStoragePath() const { DARABONBA_PTR_GET_DEFAULT(remoteStoragePath_, "") };
        inline UserProfile& setRemoteStoragePath(string remoteStoragePath) { DARABONBA_PTR_SET_VALUE(remoteStoragePath_, remoteStoragePath) };


        // remoteStorageType Field Functions 
        bool hasRemoteStorageType() const { return this->remoteStorageType_ != nullptr;};
        void deleteRemoteStorageType() { this->remoteStorageType_ = nullptr;};
        inline string getRemoteStorageType() const { DARABONBA_PTR_GET_DEFAULT(remoteStorageType_, "") };
        inline UserProfile& setRemoteStorageType(string remoteStorageType) { DARABONBA_PTR_SET_VALUE(remoteStorageType_, remoteStorageType) };


        // userProfileSwitch Field Functions 
        bool hasUserProfileSwitch() const { return this->userProfileSwitch_ != nullptr;};
        void deleteUserProfileSwitch() { this->userProfileSwitch_ = nullptr;};
        inline bool getUserProfileSwitch() const { DARABONBA_PTR_GET_DEFAULT(userProfileSwitch_, false) };
        inline UserProfile& setUserProfileSwitch(bool userProfileSwitch) { DARABONBA_PTR_SET_VALUE(userProfileSwitch_, userProfileSwitch) };


      protected:
        // Remote storage path for user data roaming.
        // 
        // - If left empty, the default value is the delivery group ID.
        // - For cross-delivery-group (within the same VPC) user data roaming, the same value must be configured for all participating delivery groups.
        shared_ptr<string> remoteStoragePath_ {};
        // Remote storage type used for user data roaming.
        shared_ptr<string> remoteStorageType_ {};
        // User data roaming toggle.
        shared_ptr<bool> userProfileSwitch_ {};
      };

      virtual bool empty() const override { return this->storageTypeList_ == nullptr
        && this->userProfile_ == nullptr; };
      // storageTypeList Field Functions 
      bool hasStorageTypeList() const { return this->storageTypeList_ != nullptr;};
      void deleteStorageTypeList() { this->storageTypeList_ = nullptr;};
      inline const vector<string> & getStorageTypeList() const { DARABONBA_PTR_GET_CONST(storageTypeList_, vector<string>) };
      inline vector<string> getStorageTypeList() { DARABONBA_PTR_GET(storageTypeList_, vector<string>) };
      inline StoragePolicy& setStorageTypeList(const vector<string> & storageTypeList) { DARABONBA_PTR_SET_VALUE(storageTypeList_, storageTypeList) };
      inline StoragePolicy& setStorageTypeList(vector<string> && storageTypeList) { DARABONBA_PTR_SET_RVALUE(storageTypeList_, storageTypeList) };


      // userProfile Field Functions 
      bool hasUserProfile() const { return this->userProfile_ != nullptr;};
      void deleteUserProfile() { this->userProfile_ = nullptr;};
      inline const StoragePolicy::UserProfile & getUserProfile() const { DARABONBA_PTR_GET_CONST(userProfile_, StoragePolicy::UserProfile) };
      inline StoragePolicy::UserProfile getUserProfile() { DARABONBA_PTR_GET(userProfile_, StoragePolicy::UserProfile) };
      inline StoragePolicy& setUserProfile(const StoragePolicy::UserProfile & userProfile) { DARABONBA_PTR_SET_VALUE(userProfile_, userProfile) };
      inline StoragePolicy& setUserProfile(StoragePolicy::UserProfile && userProfile) { DARABONBA_PTR_SET_RVALUE(userProfile_, userProfile) };


    protected:
      // The storage types.
      shared_ptr<vector<string>> storageTypeList_ {};
      // User data roaming configuration.
      shared_ptr<StoragePolicy::UserProfile> userProfile_ {};
    };

    class SecurityPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(ResetAfterUnbind, resetAfterUnbind_);
        DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(ResetAfterUnbind, resetAfterUnbind_);
        DARABONBA_PTR_FROM_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      };
      SecurityPolicy() = default ;
      SecurityPolicy(const SecurityPolicy &) = default ;
      SecurityPolicy(SecurityPolicy &&) = default ;
      SecurityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityPolicy() = default ;
      SecurityPolicy& operator=(const SecurityPolicy &) = default ;
      SecurityPolicy& operator=(SecurityPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resetAfterUnbind_ == nullptr
        && this->skipUserAuthCheck_ == nullptr; };
      // resetAfterUnbind Field Functions 
      bool hasResetAfterUnbind() const { return this->resetAfterUnbind_ != nullptr;};
      void deleteResetAfterUnbind() { this->resetAfterUnbind_ = nullptr;};
      inline bool getResetAfterUnbind() const { DARABONBA_PTR_GET_DEFAULT(resetAfterUnbind_, false) };
      inline SecurityPolicy& setResetAfterUnbind(bool resetAfterUnbind) { DARABONBA_PTR_SET_VALUE(resetAfterUnbind_, resetAfterUnbind) };


      // skipUserAuthCheck Field Functions 
      bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
      void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
      inline bool getSkipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
      inline SecurityPolicy& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


    protected:
      // Specifies whether to reset after unbinding from a delivery group.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> resetAfterUnbind_ {};
      // Specifies whether to skip user permission verification.
      // 
      // Valid values:
      // 
      // *   true
      // *   false: This is the default value.
      shared_ptr<bool> skipUserAuthCheck_ {};
    };

    class RuntimePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuntimePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(DebugMode, debugMode_);
        DARABONBA_PTR_TO_JSON(PerSessionPerApp, perSessionPerApp_);
        DARABONBA_PTR_TO_JSON(PersistentAppInstanceScheduleMode, persistentAppInstanceScheduleMode_);
        DARABONBA_PTR_TO_JSON(SessionPreOpen, sessionPreOpen_);
        DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(SessionUserGenerationMode, sessionUserGenerationMode_);
      };
      friend void from_json(const Darabonba::Json& j, RuntimePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(DebugMode, debugMode_);
        DARABONBA_PTR_FROM_JSON(PerSessionPerApp, perSessionPerApp_);
        DARABONBA_PTR_FROM_JSON(PersistentAppInstanceScheduleMode, persistentAppInstanceScheduleMode_);
        DARABONBA_PTR_FROM_JSON(SessionPreOpen, sessionPreOpen_);
        DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(SessionUserGenerationMode, sessionUserGenerationMode_);
      };
      RuntimePolicy() = default ;
      RuntimePolicy(const RuntimePolicy &) = default ;
      RuntimePolicy(RuntimePolicy &&) = default ;
      RuntimePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuntimePolicy() = default ;
      RuntimePolicy& operator=(const RuntimePolicy &) = default ;
      RuntimePolicy& operator=(RuntimePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->debugMode_ == nullptr
        && this->perSessionPerApp_ == nullptr && this->persistentAppInstanceScheduleMode_ == nullptr && this->sessionPreOpen_ == nullptr && this->sessionType_ == nullptr && this->sessionUserGenerationMode_ == nullptr; };
      // debugMode Field Functions 
      bool hasDebugMode() const { return this->debugMode_ != nullptr;};
      void deleteDebugMode() { this->debugMode_ = nullptr;};
      inline string getDebugMode() const { DARABONBA_PTR_GET_DEFAULT(debugMode_, "") };
      inline RuntimePolicy& setDebugMode(string debugMode) { DARABONBA_PTR_SET_VALUE(debugMode_, debugMode) };


      // perSessionPerApp Field Functions 
      bool hasPerSessionPerApp() const { return this->perSessionPerApp_ != nullptr;};
      void deletePerSessionPerApp() { this->perSessionPerApp_ = nullptr;};
      inline bool getPerSessionPerApp() const { DARABONBA_PTR_GET_DEFAULT(perSessionPerApp_, false) };
      inline RuntimePolicy& setPerSessionPerApp(bool perSessionPerApp) { DARABONBA_PTR_SET_VALUE(perSessionPerApp_, perSessionPerApp) };


      // persistentAppInstanceScheduleMode Field Functions 
      bool hasPersistentAppInstanceScheduleMode() const { return this->persistentAppInstanceScheduleMode_ != nullptr;};
      void deletePersistentAppInstanceScheduleMode() { this->persistentAppInstanceScheduleMode_ = nullptr;};
      inline string getPersistentAppInstanceScheduleMode() const { DARABONBA_PTR_GET_DEFAULT(persistentAppInstanceScheduleMode_, "") };
      inline RuntimePolicy& setPersistentAppInstanceScheduleMode(string persistentAppInstanceScheduleMode) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceScheduleMode_, persistentAppInstanceScheduleMode) };


      // sessionPreOpen Field Functions 
      bool hasSessionPreOpen() const { return this->sessionPreOpen_ != nullptr;};
      void deleteSessionPreOpen() { this->sessionPreOpen_ = nullptr;};
      inline string getSessionPreOpen() const { DARABONBA_PTR_GET_DEFAULT(sessionPreOpen_, "") };
      inline RuntimePolicy& setSessionPreOpen(string sessionPreOpen) { DARABONBA_PTR_SET_VALUE(sessionPreOpen_, sessionPreOpen) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline RuntimePolicy& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // sessionUserGenerationMode Field Functions 
      bool hasSessionUserGenerationMode() const { return this->sessionUserGenerationMode_ != nullptr;};
      void deleteSessionUserGenerationMode() { this->sessionUserGenerationMode_ = nullptr;};
      inline string getSessionUserGenerationMode() const { DARABONBA_PTR_GET_DEFAULT(sessionUserGenerationMode_, "") };
      inline RuntimePolicy& setSessionUserGenerationMode(string sessionUserGenerationMode) { DARABONBA_PTR_SET_VALUE(sessionUserGenerationMode_, sessionUserGenerationMode) };


    protected:
      // Specifies whether to enable the debugging mode. If you want to call the `GetDebugAppInstance` and `CreateImageFromAppInstanceGroup` operations, you must set this parameter to `ON`.
      // 
      // Valid values:
      // 
      // *   OFF
      // *   ON
      shared_ptr<string> debugMode_ {};
      // Only one application is allowed to be opened within a single session.
      // 
      // - When enabled, launching multiple applications from the delivery group will allocate a separate session for each application, resulting in higher session consumption.
      shared_ptr<bool> perSessionPerApp_ {};
      // Persistent session scheduling mode.
      shared_ptr<string> persistentAppInstanceScheduleMode_ {};
      // Session pre-launch toggle.
      // 
      // - If not specified, the default value is true.
      shared_ptr<string> sessionPreOpen_ {};
      // The session type.
      // 
      // Valid values:
      // 
      // *   CONSOLE: console session
      // *   NORMAL: Remote Desktop Protocol (RDP)-based O\\&M session
      shared_ptr<string> sessionType_ {};
      // The generation mode of the session users. Valid value:
      // - wyid. In this case, you must set sessionPreOpen to false.
      shared_ptr<string> sessionUserGenerationMode_ {};
    };

    class NodePool : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodePool& obj) { 
        DARABONBA_PTR_TO_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
        DARABONBA_PTR_TO_JSON(MaxScalingAmount, maxScalingAmount_);
        DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
        DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
        DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_TO_JSON(RecurrenceSchedules, recurrenceSchedules_);
        DARABONBA_PTR_TO_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
        DARABONBA_PTR_TO_JSON(ScalingStep, scalingStep_);
        DARABONBA_PTR_TO_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
        DARABONBA_PTR_TO_JSON(StrategyDisableDate, strategyDisableDate_);
        DARABONBA_PTR_TO_JSON(StrategyEnableDate, strategyEnableDate_);
        DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_TO_JSON(WarmUp, warmUp_);
      };
      friend void from_json(const Darabonba::Json& j, NodePool& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxIdleAppInstanceAmount, maxIdleAppInstanceAmount_);
        DARABONBA_PTR_FROM_JSON(MaxScalingAmount, maxScalingAmount_);
        DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
        DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
        DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_FROM_JSON(RecurrenceSchedules, recurrenceSchedules_);
        DARABONBA_PTR_FROM_JSON(ScalingDownAfterIdleMinutes, scalingDownAfterIdleMinutes_);
        DARABONBA_PTR_FROM_JSON(ScalingStep, scalingStep_);
        DARABONBA_PTR_FROM_JSON(ScalingUsageThreshold, scalingUsageThreshold_);
        DARABONBA_PTR_FROM_JSON(StrategyDisableDate, strategyDisableDate_);
        DARABONBA_PTR_FROM_JSON(StrategyEnableDate, strategyEnableDate_);
        DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_FROM_JSON(WarmUp, warmUp_);
      };
      NodePool() = default ;
      NodePool(const NodePool &) = default ;
      NodePool(NodePool &&) = default ;
      NodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodePool() = default ;
      NodePool& operator=(const NodePool &) = default ;
      NodePool& operator=(NodePool &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecurrenceSchedules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecurrenceSchedules& obj) { 
          DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_TO_JSON(TimerPeriods, timerPeriods_);
        };
        friend void from_json(const Darabonba::Json& j, RecurrenceSchedules& obj) { 
          DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_FROM_JSON(TimerPeriods, timerPeriods_);
        };
        RecurrenceSchedules() = default ;
        RecurrenceSchedules(const RecurrenceSchedules &) = default ;
        RecurrenceSchedules(RecurrenceSchedules &&) = default ;
        RecurrenceSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecurrenceSchedules() = default ;
        RecurrenceSchedules& operator=(const RecurrenceSchedules &) = default ;
        RecurrenceSchedules& operator=(RecurrenceSchedules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TimerPeriods : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TimerPeriods& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, TimerPeriods& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          };
          TimerPeriods() = default ;
          TimerPeriods(const TimerPeriods &) = default ;
          TimerPeriods(TimerPeriods &&) = default ;
          TimerPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TimerPeriods() = default ;
          TimerPeriods& operator=(const TimerPeriods &) = default ;
          TimerPeriods& operator=(TimerPeriods &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
          inline TimerPeriods& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline TimerPeriods& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline TimerPeriods& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          // The number of resources.
          shared_ptr<int32_t> amount_ {};
          // The end time of the time period. Format: HH:mm.
          shared_ptr<string> endTime_ {};
          // The start time of the time period. Format: HH:mm.
          shared_ptr<string> startTime_ {};
        };

        virtual bool empty() const override { return this->recurrenceType_ == nullptr
        && this->recurrenceValues_ == nullptr && this->timerPeriods_ == nullptr; };
        // recurrenceType Field Functions 
        bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
        void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
        inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
        inline RecurrenceSchedules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


        // recurrenceValues Field Functions 
        bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
        void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
        inline const vector<int32_t> & getRecurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<int32_t>) };
        inline vector<int32_t> getRecurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<int32_t>) };
        inline RecurrenceSchedules& setRecurrenceValues(const vector<int32_t> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
        inline RecurrenceSchedules& setRecurrenceValues(vector<int32_t> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


        // timerPeriods Field Functions 
        bool hasTimerPeriods() const { return this->timerPeriods_ != nullptr;};
        void deleteTimerPeriods() { this->timerPeriods_ = nullptr;};
        inline const vector<RecurrenceSchedules::TimerPeriods> & getTimerPeriods() const { DARABONBA_PTR_GET_CONST(timerPeriods_, vector<RecurrenceSchedules::TimerPeriods>) };
        inline vector<RecurrenceSchedules::TimerPeriods> getTimerPeriods() { DARABONBA_PTR_GET(timerPeriods_, vector<RecurrenceSchedules::TimerPeriods>) };
        inline RecurrenceSchedules& setTimerPeriods(const vector<RecurrenceSchedules::TimerPeriods> & timerPeriods) { DARABONBA_PTR_SET_VALUE(timerPeriods_, timerPeriods) };
        inline RecurrenceSchedules& setTimerPeriods(vector<RecurrenceSchedules::TimerPeriods> && timerPeriods) { DARABONBA_PTR_SET_RVALUE(timerPeriods_, timerPeriods) };


      protected:
        // The schedule type of the scaling policy. This parameter must be configured together with `RecurrenceValues`.``
        // 
        // Valid value:
        // 
        // *   Weekly: The scaling policy is executed on specific days each week.
        shared_ptr<string> recurrenceType_ {};
        // The days of each week on which the scaling policy is executed.
        shared_ptr<vector<int32_t>> recurrenceValues_ {};
        // The time periods during which the scaling policy can be executed. The time periods must meet the following requirements:
        // 
        // *   Up to three time periods can be added.
        // *   Time periods cannot be overlapped.
        // *   The interval between two consecutive time periods must be greater than or equal to 5 minutes.
        // *   Each time period must be greater than or equal to 15 minutes.
        // *   The total length of the time periods that you specify cannot be greater than a day.
        shared_ptr<vector<RecurrenceSchedules::TimerPeriods>> timerPeriods_ {};
      };

      virtual bool empty() const override { return this->maxIdleAppInstanceAmount_ == nullptr
        && this->maxScalingAmount_ == nullptr && this->nodeAmount_ == nullptr && this->nodeCapacity_ == nullptr && this->nodeInstanceType_ == nullptr && this->recurrenceSchedules_ == nullptr
        && this->scalingDownAfterIdleMinutes_ == nullptr && this->scalingStep_ == nullptr && this->scalingUsageThreshold_ == nullptr && this->strategyDisableDate_ == nullptr && this->strategyEnableDate_ == nullptr
        && this->strategyType_ == nullptr && this->warmUp_ == nullptr; };
      // maxIdleAppInstanceAmount Field Functions 
      bool hasMaxIdleAppInstanceAmount() const { return this->maxIdleAppInstanceAmount_ != nullptr;};
      void deleteMaxIdleAppInstanceAmount() { this->maxIdleAppInstanceAmount_ = nullptr;};
      inline int32_t getMaxIdleAppInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(maxIdleAppInstanceAmount_, 0) };
      inline NodePool& setMaxIdleAppInstanceAmount(int32_t maxIdleAppInstanceAmount) { DARABONBA_PTR_SET_VALUE(maxIdleAppInstanceAmount_, maxIdleAppInstanceAmount) };


      // maxScalingAmount Field Functions 
      bool hasMaxScalingAmount() const { return this->maxScalingAmount_ != nullptr;};
      void deleteMaxScalingAmount() { this->maxScalingAmount_ = nullptr;};
      inline int32_t getMaxScalingAmount() const { DARABONBA_PTR_GET_DEFAULT(maxScalingAmount_, 0) };
      inline NodePool& setMaxScalingAmount(int32_t maxScalingAmount) { DARABONBA_PTR_SET_VALUE(maxScalingAmount_, maxScalingAmount) };


      // nodeAmount Field Functions 
      bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
      void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
      inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
      inline NodePool& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


      // nodeCapacity Field Functions 
      bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
      void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
      inline int32_t getNodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
      inline NodePool& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


      // nodeInstanceType Field Functions 
      bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
      void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
      inline string getNodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
      inline NodePool& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


      // recurrenceSchedules Field Functions 
      bool hasRecurrenceSchedules() const { return this->recurrenceSchedules_ != nullptr;};
      void deleteRecurrenceSchedules() { this->recurrenceSchedules_ = nullptr;};
      inline const vector<NodePool::RecurrenceSchedules> & getRecurrenceSchedules() const { DARABONBA_PTR_GET_CONST(recurrenceSchedules_, vector<NodePool::RecurrenceSchedules>) };
      inline vector<NodePool::RecurrenceSchedules> getRecurrenceSchedules() { DARABONBA_PTR_GET(recurrenceSchedules_, vector<NodePool::RecurrenceSchedules>) };
      inline NodePool& setRecurrenceSchedules(const vector<NodePool::RecurrenceSchedules> & recurrenceSchedules) { DARABONBA_PTR_SET_VALUE(recurrenceSchedules_, recurrenceSchedules) };
      inline NodePool& setRecurrenceSchedules(vector<NodePool::RecurrenceSchedules> && recurrenceSchedules) { DARABONBA_PTR_SET_RVALUE(recurrenceSchedules_, recurrenceSchedules) };


      // scalingDownAfterIdleMinutes Field Functions 
      bool hasScalingDownAfterIdleMinutes() const { return this->scalingDownAfterIdleMinutes_ != nullptr;};
      void deleteScalingDownAfterIdleMinutes() { this->scalingDownAfterIdleMinutes_ = nullptr;};
      inline int32_t getScalingDownAfterIdleMinutes() const { DARABONBA_PTR_GET_DEFAULT(scalingDownAfterIdleMinutes_, 0) };
      inline NodePool& setScalingDownAfterIdleMinutes(int32_t scalingDownAfterIdleMinutes) { DARABONBA_PTR_SET_VALUE(scalingDownAfterIdleMinutes_, scalingDownAfterIdleMinutes) };


      // scalingStep Field Functions 
      bool hasScalingStep() const { return this->scalingStep_ != nullptr;};
      void deleteScalingStep() { this->scalingStep_ = nullptr;};
      inline int32_t getScalingStep() const { DARABONBA_PTR_GET_DEFAULT(scalingStep_, 0) };
      inline NodePool& setScalingStep(int32_t scalingStep) { DARABONBA_PTR_SET_VALUE(scalingStep_, scalingStep) };


      // scalingUsageThreshold Field Functions 
      bool hasScalingUsageThreshold() const { return this->scalingUsageThreshold_ != nullptr;};
      void deleteScalingUsageThreshold() { this->scalingUsageThreshold_ = nullptr;};
      inline string getScalingUsageThreshold() const { DARABONBA_PTR_GET_DEFAULT(scalingUsageThreshold_, "") };
      inline NodePool& setScalingUsageThreshold(string scalingUsageThreshold) { DARABONBA_PTR_SET_VALUE(scalingUsageThreshold_, scalingUsageThreshold) };


      // strategyDisableDate Field Functions 
      bool hasStrategyDisableDate() const { return this->strategyDisableDate_ != nullptr;};
      void deleteStrategyDisableDate() { this->strategyDisableDate_ = nullptr;};
      inline string getStrategyDisableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyDisableDate_, "") };
      inline NodePool& setStrategyDisableDate(string strategyDisableDate) { DARABONBA_PTR_SET_VALUE(strategyDisableDate_, strategyDisableDate) };


      // strategyEnableDate Field Functions 
      bool hasStrategyEnableDate() const { return this->strategyEnableDate_ != nullptr;};
      void deleteStrategyEnableDate() { this->strategyEnableDate_ = nullptr;};
      inline string getStrategyEnableDate() const { DARABONBA_PTR_GET_DEFAULT(strategyEnableDate_, "") };
      inline NodePool& setStrategyEnableDate(string strategyEnableDate) { DARABONBA_PTR_SET_VALUE(strategyEnableDate_, strategyEnableDate) };


      // strategyType Field Functions 
      bool hasStrategyType() const { return this->strategyType_ != nullptr;};
      void deleteStrategyType() { this->strategyType_ = nullptr;};
      inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
      inline NodePool& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


      // warmUp Field Functions 
      bool hasWarmUp() const { return this->warmUp_ != nullptr;};
      void deleteWarmUp() { this->warmUp_ = nullptr;};
      inline bool getWarmUp() const { DARABONBA_PTR_GET_DEFAULT(warmUp_, false) };
      inline NodePool& setWarmUp(bool warmUp) { DARABONBA_PTR_SET_VALUE(warmUp_, warmUp) };


    protected:
      // Maximum number of idle sessions. When this value is specified, auto-scaling is triggered only if the session utilization exceeds `ScalingUsageThreshold` and the current number of idle sessions in the delivery group is less than `MaxIdleAppInstanceAmount`. Otherwise, it is considered that sufficient idle sessions are available, and no auto-scaling will occur. This parameter allows flexible control over elastic scaling behavior and helps reduce usage costs.
      shared_ptr<int32_t> maxIdleAppInstanceAmount_ {};
      // The maximum number of resources that can be created for scale-out. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_USAGE`.
      shared_ptr<int32_t> maxScalingAmount_ {};
      // The number of resources that you want to purchase. Valid values: 1 to 100.
      // 
      // > 
      // 
      // *   This parameter is required if the resources are subscription resources.
      // 
      // *   If the resources are pay-as-you-go resources, this parameter is required only if you set `StrategyType` to `NODE_FIXED` or `NODE_SCALING_BY_USAGE`.
      shared_ptr<int32_t> nodeAmount_ {};
      // The maximum number of sessions to which a resource can connect at the same time. If a resource connects to a large number of sessions at the same time, the user experience can be compromised. The value range varies based on the resource type. The following items describe the value ranges of different resource types:
      // 
      // *   appstreaming.general.4c8g: 1 to 2
      // *   appstreaming.general.8c16g: 1 to 4
      // *   appstreaming.vgpu.8c16g.4g: 1 to 4
      // *   appstreaming.vgpu.8c31g.16g: 1 to 4
      // *   appstreaming.vgpu.14c93g.12g: 1 to 6
      shared_ptr<int32_t> nodeCapacity_ {};
      // The ID of the resource type that you want to purchase. You can call the [ListNodeInstanceType](https://help.aliyun.com/document_detail/428502.html) operation to obtain the ID.
      // 
      // Valid values:
      // 
      // *   appstreaming.vgpu.8c16g.4g: WUYING - Graphics_8 vCPUs, 16 GiB Memory, 4 GiB GPU Memory
      // *   appstreaming.general.8c16g: WUYING - General_8 vCPUs, 16 GiB Memory
      // *   appstreaming.general.4c8g: WUYING - General_4 vCPUs, 8 GiB Memory
      // *   appstreaming.vgpu.14c93g.12g: WUYING - Graphics_14 vCPUs, 93 GiB Memory, 12 GiB GPU Memory.
      // *   appstreaming.vgpu.8c31g.16g: WUYING - Graphics_8 vCPUs, 31 GiB Memory, 16 GiB GPU Memory
      shared_ptr<string> nodeInstanceType_ {};
      // The schedules of the scaling policy. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<vector<NodePool::RecurrenceSchedules>> recurrenceSchedules_ {};
      // The maximum retention period of a resource to which no session is connected. If no session is connected to a resource, the resource is automatically scaled in after the specified retention period elapses. Valid values: 5 to 120. Default value: 5. Unit: minutes. If one of the following situations occurs, the resource is not scaled in.
      // 
      // *   If automatic scale-out is triggered after the resource is scaled in, the scale-in is not executed. This prevents repeated scale-in and scale-out.
      // *   If automatic scale-out is triggered due to an increase in the number of sessions during the specified period of time, the resource is not scaled in and the countdown restarts.
      shared_ptr<int32_t> scalingDownAfterIdleMinutes_ {};
      // The number of resources that are created each time resources are scaled out. Valid values: 1 to 10. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_USAGE`.
      shared_ptr<int32_t> scalingStep_ {};
      // The upper limit of session usage. If the session usage exceeds the specified upper limit, auto scaling is automatically triggered. The session usage is calculated by using the following formula: `Session usage = Number of current sessions/(Total number of resources × Number of concurrent sessions) × 100%`. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_USAGE`. Valid values: 0 to 100. Default value: 85.
      shared_ptr<string> scalingUsageThreshold_ {};
      // The expiration date of the scaling policy. Format: yyyy-MM-dd. The interval between the expiration date and the effective date must be from 7 days to 1 year. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<string> strategyDisableDate_ {};
      // The effective date of the scaling policy. Format: yyyy-MM-dd. The date must be the same as or later than the current date. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<string> strategyEnableDate_ {};
      // The scaling policy of resources.
      // 
      // > 
      // 
      // *   `NODE_FIXED`: fixed number of resources. This value is applicable to pay-as-you-go resources and subscription resources.
      // 
      // *   `NODE_SCALING_BY_USAGE`: auto scaling. This value is applicable to pay-as-you-go resources and subscription resources.
      // 
      // *   `NODE_SCALING_BY_SCHEDULE`: scheduled scaling. This value is applicable only to pay-as-you-go resources.
      // 
      // Valid values:
      // 
      // *   NODE_FIXED: fixed number of resources
      // *   NODE_SCALING_BY_SCHEDULE: scheduled scaling
      // *   NODE_SCALING_BY_USAGE: auto scaling
      shared_ptr<string> strategyType_ {};
      // Specifies whether to enable the warmup policy for resources. This parameter is required if you set `StrategyType` to `NODE_SCALING_BY_SCHEDULE`.
      shared_ptr<bool> warmUp_ {};
    };

    class Network : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Network& obj) { 
        DARABONBA_PTR_TO_JSON(DomainRules, domainRules_);
        DARABONBA_PTR_TO_JSON(IpExpireMinutes, ipExpireMinutes_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(Routes, routes_);
        DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, Network& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainRules, domainRules_);
        DARABONBA_PTR_FROM_JSON(IpExpireMinutes, ipExpireMinutes_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(Routes, routes_);
        DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      };
      Network() = default ;
      Network(const Network &) = default ;
      Network(Network &&) = default ;
      Network(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Network() = default ;
      Network& operator=(const Network &) = default ;
      Network& operator=(Network &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Routes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Routes& obj) { 
          DARABONBA_PTR_TO_JSON(Destination, destination_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, Routes& obj) { 
          DARABONBA_PTR_FROM_JSON(Destination, destination_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
        };
        Routes() = default ;
        Routes(const Routes &) = default ;
        Routes(Routes &&) = default ;
        Routes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Routes() = default ;
        Routes& operator=(const Routes &) = default ;
        Routes& operator=(Routes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destination_ == nullptr
        && this->mode_ == nullptr; };
        // destination Field Functions 
        bool hasDestination() const { return this->destination_ != nullptr;};
        void deleteDestination() { this->destination_ = nullptr;};
        inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
        inline Routes& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline Routes& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        // The destination. The value is a CIDR block.
        shared_ptr<string> destination_ {};
        // The network egress mode.
        // 
        // Valid value:
        // 
        // *   Shared: accesses the network by using NAT Gateway.
        shared_ptr<string> mode_ {};
      };

      class DomainRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainRules& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
        };
        friend void from_json(const Darabonba::Json& j, DomainRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
        };
        DomainRules() = default ;
        DomainRules(const DomainRules &) = default ;
        DomainRules(DomainRules &&) = default ;
        DomainRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainRules() = default ;
        DomainRules& operator=(const DomainRules &) = default ;
        DomainRules& operator=(DomainRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->policy_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DomainRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline DomainRules& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      protected:
        // The domain name.
        shared_ptr<string> domain_ {};
        // The policy used for the domain name.
        // 
        // Valid values:
        // 
        // *   allow
        // *   block
        shared_ptr<string> policy_ {};
      };

      virtual bool empty() const override { return this->domainRules_ == nullptr
        && this->ipExpireMinutes_ == nullptr && this->officeSiteId_ == nullptr && this->routes_ == nullptr && this->strategyType_ == nullptr && this->vSwitchIds_ == nullptr; };
      // domainRules Field Functions 
      bool hasDomainRules() const { return this->domainRules_ != nullptr;};
      void deleteDomainRules() { this->domainRules_ = nullptr;};
      inline const vector<Network::DomainRules> & getDomainRules() const { DARABONBA_PTR_GET_CONST(domainRules_, vector<Network::DomainRules>) };
      inline vector<Network::DomainRules> getDomainRules() { DARABONBA_PTR_GET(domainRules_, vector<Network::DomainRules>) };
      inline Network& setDomainRules(const vector<Network::DomainRules> & domainRules) { DARABONBA_PTR_SET_VALUE(domainRules_, domainRules) };
      inline Network& setDomainRules(vector<Network::DomainRules> && domainRules) { DARABONBA_PTR_SET_RVALUE(domainRules_, domainRules) };


      // ipExpireMinutes Field Functions 
      bool hasIpExpireMinutes() const { return this->ipExpireMinutes_ != nullptr;};
      void deleteIpExpireMinutes() { this->ipExpireMinutes_ = nullptr;};
      inline int32_t getIpExpireMinutes() const { DARABONBA_PTR_GET_DEFAULT(ipExpireMinutes_, 0) };
      inline Network& setIpExpireMinutes(int32_t ipExpireMinutes) { DARABONBA_PTR_SET_VALUE(ipExpireMinutes_, ipExpireMinutes) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Network& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // routes Field Functions 
      bool hasRoutes() const { return this->routes_ != nullptr;};
      void deleteRoutes() { this->routes_ = nullptr;};
      inline const vector<Network::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<Network::Routes>) };
      inline vector<Network::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<Network::Routes>) };
      inline Network& setRoutes(const vector<Network::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
      inline Network& setRoutes(vector<Network::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


      // strategyType Field Functions 
      bool hasStrategyType() const { return this->strategyType_ != nullptr;};
      void deleteStrategyType() { this->strategyType_ = nullptr;};
      inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
      inline Network& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Network& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Network& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      // The domain name rules.
      shared_ptr<vector<Network::DomainRules>> domainRules_ {};
      // The validity period of the public IP address. If the specified value is exceeded, the IP address is updated at next logon. Minimum value: 60. Unit: minutes.
      shared_ptr<int32_t> ipExpireMinutes_ {};
      // Office Network ID.
      shared_ptr<string> officeSiteId_ {};
      // The route settings. This parameter is available only if you set `StrategyType` to `Mixed`.
      shared_ptr<vector<Network::Routes>> routes_ {};
      // The type of the network policy.
      // 
      // Valid values:
      // 
      // *   Mixed: the hybrid mode. In this mode, a device is deployed in one virtual private cloud (VPC). Two NICs are provided and an independent public IP address is configured for the device.
      // *   Shared: the shared mode. In this mode, a single NIC is provided for a device and the network is accessed by using NAT Gateway.
      shared_ptr<string> strategyType_ {};
      // List of virtual switch IDs.
      // - Valid only for custom office networks.
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->appPackageType_ == nullptr && this->appPolicyId_ == nullptr && this->authMode_ == nullptr && this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->bizRegionId_ == nullptr && this->chargeResourceMode_ == nullptr && this->chargeType_ == nullptr && this->clusterId_ == nullptr
        && this->network_ == nullptr && this->nodePool_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->preOpenAppId_ == nullptr
        && this->productType_ == nullptr && this->promotionId_ == nullptr && this->runtimePolicy_ == nullptr && this->securityPolicy_ == nullptr && this->sessionTimeout_ == nullptr
        && this->storagePolicy_ == nullptr && this->subPayType_ == nullptr && this->userDefinePolicy_ == nullptr && this->userGroupIds_ == nullptr && this->userInfo_ == nullptr
        && this->users_ == nullptr && this->videoPolicy_ == nullptr; };
    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string getAppCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline CreateAppInstanceGroupRequest& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline CreateAppInstanceGroupRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appPackageType Field Functions 
    bool hasAppPackageType() const { return this->appPackageType_ != nullptr;};
    void deleteAppPackageType() { this->appPackageType_ = nullptr;};
    inline string getAppPackageType() const { DARABONBA_PTR_GET_DEFAULT(appPackageType_, "") };
    inline CreateAppInstanceGroupRequest& setAppPackageType(string appPackageType) { DARABONBA_PTR_SET_VALUE(appPackageType_, appPackageType) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string getAppPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline CreateAppInstanceGroupRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline CreateAppInstanceGroupRequest& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAppInstanceGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAppInstanceGroupRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAppInstanceGroupRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeResourceMode Field Functions 
    bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
    void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
    inline string getChargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
    inline CreateAppInstanceGroupRequest& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAppInstanceGroupRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateAppInstanceGroupRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, CreateAppInstanceGroupRequest::Network) };
    inline CreateAppInstanceGroupRequest::Network getNetwork() { DARABONBA_PTR_GET(network_, CreateAppInstanceGroupRequest::Network) };
    inline CreateAppInstanceGroupRequest& setNetwork(const CreateAppInstanceGroupRequest::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline CreateAppInstanceGroupRequest& setNetwork(CreateAppInstanceGroupRequest::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::NodePool & getNodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, CreateAppInstanceGroupRequest::NodePool) };
    inline CreateAppInstanceGroupRequest::NodePool getNodePool() { DARABONBA_PTR_GET(nodePool_, CreateAppInstanceGroupRequest::NodePool) };
    inline CreateAppInstanceGroupRequest& setNodePool(const CreateAppInstanceGroupRequest::NodePool & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline CreateAppInstanceGroupRequest& setNodePool(CreateAppInstanceGroupRequest::NodePool && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAppInstanceGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAppInstanceGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // preOpenAppId Field Functions 
    bool hasPreOpenAppId() const { return this->preOpenAppId_ != nullptr;};
    void deletePreOpenAppId() { this->preOpenAppId_ = nullptr;};
    inline string getPreOpenAppId() const { DARABONBA_PTR_GET_DEFAULT(preOpenAppId_, "") };
    inline CreateAppInstanceGroupRequest& setPreOpenAppId(string preOpenAppId) { DARABONBA_PTR_SET_VALUE(preOpenAppId_, preOpenAppId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateAppInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateAppInstanceGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // runtimePolicy Field Functions 
    bool hasRuntimePolicy() const { return this->runtimePolicy_ != nullptr;};
    void deleteRuntimePolicy() { this->runtimePolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::RuntimePolicy & getRuntimePolicy() const { DARABONBA_PTR_GET_CONST(runtimePolicy_, CreateAppInstanceGroupRequest::RuntimePolicy) };
    inline CreateAppInstanceGroupRequest::RuntimePolicy getRuntimePolicy() { DARABONBA_PTR_GET(runtimePolicy_, CreateAppInstanceGroupRequest::RuntimePolicy) };
    inline CreateAppInstanceGroupRequest& setRuntimePolicy(const CreateAppInstanceGroupRequest::RuntimePolicy & runtimePolicy) { DARABONBA_PTR_SET_VALUE(runtimePolicy_, runtimePolicy) };
    inline CreateAppInstanceGroupRequest& setRuntimePolicy(CreateAppInstanceGroupRequest::RuntimePolicy && runtimePolicy) { DARABONBA_PTR_SET_RVALUE(runtimePolicy_, runtimePolicy) };


    // securityPolicy Field Functions 
    bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
    void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::SecurityPolicy & getSecurityPolicy() const { DARABONBA_PTR_GET_CONST(securityPolicy_, CreateAppInstanceGroupRequest::SecurityPolicy) };
    inline CreateAppInstanceGroupRequest::SecurityPolicy getSecurityPolicy() { DARABONBA_PTR_GET(securityPolicy_, CreateAppInstanceGroupRequest::SecurityPolicy) };
    inline CreateAppInstanceGroupRequest& setSecurityPolicy(const CreateAppInstanceGroupRequest::SecurityPolicy & securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };
    inline CreateAppInstanceGroupRequest& setSecurityPolicy(CreateAppInstanceGroupRequest::SecurityPolicy && securityPolicy) { DARABONBA_PTR_SET_RVALUE(securityPolicy_, securityPolicy) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline CreateAppInstanceGroupRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // storagePolicy Field Functions 
    bool hasStoragePolicy() const { return this->storagePolicy_ != nullptr;};
    void deleteStoragePolicy() { this->storagePolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::StoragePolicy & getStoragePolicy() const { DARABONBA_PTR_GET_CONST(storagePolicy_, CreateAppInstanceGroupRequest::StoragePolicy) };
    inline CreateAppInstanceGroupRequest::StoragePolicy getStoragePolicy() { DARABONBA_PTR_GET(storagePolicy_, CreateAppInstanceGroupRequest::StoragePolicy) };
    inline CreateAppInstanceGroupRequest& setStoragePolicy(const CreateAppInstanceGroupRequest::StoragePolicy & storagePolicy) { DARABONBA_PTR_SET_VALUE(storagePolicy_, storagePolicy) };
    inline CreateAppInstanceGroupRequest& setStoragePolicy(CreateAppInstanceGroupRequest::StoragePolicy && storagePolicy) { DARABONBA_PTR_SET_RVALUE(storagePolicy_, storagePolicy) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline CreateAppInstanceGroupRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // userDefinePolicy Field Functions 
    bool hasUserDefinePolicy() const { return this->userDefinePolicy_ != nullptr;};
    void deleteUserDefinePolicy() { this->userDefinePolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::UserDefinePolicy & getUserDefinePolicy() const { DARABONBA_PTR_GET_CONST(userDefinePolicy_, CreateAppInstanceGroupRequest::UserDefinePolicy) };
    inline CreateAppInstanceGroupRequest::UserDefinePolicy getUserDefinePolicy() { DARABONBA_PTR_GET(userDefinePolicy_, CreateAppInstanceGroupRequest::UserDefinePolicy) };
    inline CreateAppInstanceGroupRequest& setUserDefinePolicy(const CreateAppInstanceGroupRequest::UserDefinePolicy & userDefinePolicy) { DARABONBA_PTR_SET_VALUE(userDefinePolicy_, userDefinePolicy) };
    inline CreateAppInstanceGroupRequest& setUserDefinePolicy(CreateAppInstanceGroupRequest::UserDefinePolicy && userDefinePolicy) { DARABONBA_PTR_SET_RVALUE(userDefinePolicy_, userDefinePolicy) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateAppInstanceGroupRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateAppInstanceGroupRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateAppInstanceGroupRequest::UserInfo) };
    inline CreateAppInstanceGroupRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CreateAppInstanceGroupRequest::UserInfo) };
    inline CreateAppInstanceGroupRequest& setUserInfo(const CreateAppInstanceGroupRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateAppInstanceGroupRequest& setUserInfo(CreateAppInstanceGroupRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline CreateAppInstanceGroupRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateAppInstanceGroupRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    // videoPolicy Field Functions 
    bool hasVideoPolicy() const { return this->videoPolicy_ != nullptr;};
    void deleteVideoPolicy() { this->videoPolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequest::VideoPolicy & getVideoPolicy() const { DARABONBA_PTR_GET_CONST(videoPolicy_, CreateAppInstanceGroupRequest::VideoPolicy) };
    inline CreateAppInstanceGroupRequest::VideoPolicy getVideoPolicy() { DARABONBA_PTR_GET(videoPolicy_, CreateAppInstanceGroupRequest::VideoPolicy) };
    inline CreateAppInstanceGroupRequest& setVideoPolicy(const CreateAppInstanceGroupRequest::VideoPolicy & videoPolicy) { DARABONBA_PTR_SET_VALUE(videoPolicy_, videoPolicy) };
    inline CreateAppInstanceGroupRequest& setVideoPolicy(CreateAppInstanceGroupRequest::VideoPolicy && videoPolicy) { DARABONBA_PTR_SET_RVALUE(videoPolicy_, videoPolicy) };


  protected:
    // The image ID of the application. To obtain the image ID, log on to the [App Streaming console](https://appstreaming.console.aliyun.com/). In the left-side navigation pane, choose **Maintenance** > **Custom Images** or Maintenance > **System Images**.
    // 
    // This parameter is required.
    shared_ptr<string> appCenterImageId_ {};
    // The name of the delivery group.
    shared_ptr<string> appInstanceGroupName_ {};
    // Package type.
    shared_ptr<string> appPackageType_ {};
    // Policy ID.
    shared_ptr<string> appPolicyId_ {};
    // The authentication mode of the delivery group.
    shared_ptr<string> authMode_ {};
    // Specifies whether to enable automatic payment.
    // 
    // Valid values:
    // 
    // *   true
    // *   false: manual payment. This is the default value.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal.
    // 
    // Valid values:
    // 
    // *   true
    // *   false: manual payment. This is the default value.
    shared_ptr<bool> autoRenew_ {};
    // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // Valid values:
    // 
    // *   cn-shanghai: China (Shanghai)
    // *   cn-hangzhou: China (Hangzhou)
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The sales mode.
    // 
    // Valid value:
    // 
    // *   Node: by resource
    // 
    // This parameter is required.
    shared_ptr<string> chargeResourceMode_ {};
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go
    // *   PrePaid: subscription
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // Cluster ID.
    shared_ptr<string> clusterId_ {};
    // The network settings.
    // 
    // >  If you want to use this parameter, submit a ticket.
    shared_ptr<CreateAppInstanceGroupRequest::Network> network_ {};
    // The node pool object.
    shared_ptr<CreateAppInstanceGroupRequest::NodePool> nodePool_ {};
    // The subscription duration of resources. This parameter is required if you set `ChargeType` to `PrePaid`. The unit of this parameter is specified by `PeriodUnit`.
    // 
    // *   Valid value if you set `PeriodUnit` to `Week`:
    // 
    //     *   1
    // 
    // *   Valid values if you set `PeriodUnit` to `Month`:
    // 
    //     *   1
    //     *   2
    //     *   3
    //     *   6
    // 
    // *   Valid values if you set `PeriodUnit` to `Year`:
    // 
    //     *   1
    //     *   2
    //     *   3
    // 
    // >  If you set `ChargeType` to `PostPaid`, set this parameter to 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration. This parameter is available if you set `ChargeType` to `PrePaid`.
    // 
    // >  The value of this parameter is case-insensitive. For example, `Week` is valid and `week` is invalid. If you specify an invalid value combination for Period and PeriodUnit, such as `2 Week`, the operation can still be called. However, an error occurs when you place the order.
    // 
    // >  If you set `ChargeType` to `PostPaid`, set this parameter to `Month`.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    // *   Week
    // 
    // This parameter is required.
    shared_ptr<string> periodUnit_ {};
    // The ID of the pre-open application.
    shared_ptr<string> preOpenAppId_ {};
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The promotion ID. You can call the [GetResourcePrice](https://help.aliyun.com/document_detail/428503.html) operation to obtain the ID.
    shared_ptr<string> promotionId_ {};
    // The runtime policy.
    shared_ptr<CreateAppInstanceGroupRequest::RuntimePolicy> runtimePolicy_ {};
    // The security policy.
    shared_ptr<CreateAppInstanceGroupRequest::SecurityPolicy> securityPolicy_ {};
    // The period of time during which the application can be recycled. The recycling period is the period of time between the time when the end user disconnects from the application and the time when processes exit the application. If you do not want to recycle the application, set this parameter to `-1`. Valid values:-1 and 3 to 300. The value must be an integer. Default value: `15`. Unit: minutes.
    // 
    // This parameter is required.
    shared_ptr<int32_t> sessionTimeout_ {};
    // The storage policy.
    shared_ptr<CreateAppInstanceGroupRequest::StoragePolicy> storagePolicy_ {};
    // Payment method subtype.
    shared_ptr<string> subPayType_ {};
    // The custom policy.
    shared_ptr<CreateAppInstanceGroupRequest::UserDefinePolicy> userDefinePolicy_ {};
    // List of authorized user group IDs.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The information about the user that you want to add to the assigned user list of the delivery group. This parameter is required if you configure `Users`.
    shared_ptr<CreateAppInstanceGroupRequest::UserInfo> userInfo_ {};
    // The users that you want to add to the assigned user list of the delivery group.
    shared_ptr<vector<string>> users_ {};
    // Display policy.
    shared_ptr<CreateAppInstanceGroupRequest::VideoPolicy> videoPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
