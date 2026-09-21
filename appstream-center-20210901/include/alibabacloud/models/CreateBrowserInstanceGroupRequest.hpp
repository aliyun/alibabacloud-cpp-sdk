// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBROWSERINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBROWSERINSTANCEGROUPREQUEST_HPP_
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
  class CreateBrowserInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_TO_JSON(AuthNotificationEnabled, authNotificationEnabled_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(BrowserConfig, browserConfig_);
      DARABONBA_PTR_TO_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxAmount, maxAmount_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Timers, timers_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_FROM_JSON(AuthNotificationEnabled, authNotificationEnabled_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(BrowserConfig, browserConfig_);
      DARABONBA_PTR_FROM_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxAmount, maxAmount_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Timers, timers_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateBrowserInstanceGroupRequest() = default ;
    CreateBrowserInstanceGroupRequest(const CreateBrowserInstanceGroupRequest &) = default ;
    CreateBrowserInstanceGroupRequest(CreateBrowserInstanceGroupRequest &&) = default ;
    CreateBrowserInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBrowserInstanceGroupRequest() = default ;
    CreateBrowserInstanceGroupRequest& operator=(const CreateBrowserInstanceGroupRequest &) = default ;
    CreateBrowserInstanceGroupRequest& operator=(CreateBrowserInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endUserId_ == nullptr; };
      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Users& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    protected:
      // The identity of the authorized user to be granted authorization.
      shared_ptr<string> endUserId_ {};
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
      // The account type of the authorized user.
      // 
      // - `simple`: Convenience account.
      // - `ad`: AD domain account.
      // 
      // The value must match the account type of the user and workspace network.
      shared_ptr<string> type_ {};
    };

    class Timers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Timers& obj) { 
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(TimerType, timerType_);
      };
      friend void from_json(const Darabonba::Json& j, Timers& obj) { 
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
      };
      Timers() = default ;
      Timers(const Timers &) = default ;
      Timers(Timers &&) = default ;
      Timers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Timers() = default ;
      Timers& operator=(const Timers &) = default ;
      Timers& operator=(Timers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->interval_ == nullptr
        && this->timerType_ == nullptr; };
      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline Timers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // timerType Field Functions 
      bool hasTimerType() const { return this->timerType_ != nullptr;};
      void deleteTimerType() { this->timerType_ = nullptr;};
      inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
      inline Timers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


    protected:
      // Not supported. You do not need to specify this parameter.
      shared_ptr<int32_t> interval_ {};
      // Not supported. You do not need to specify this parameter.
      shared_ptr<string> timerType_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Not supported. You do not need to specify this parameter.
      shared_ptr<string> key_ {};
      // Not supported. You do not need to specify this parameter.
      shared_ptr<string> value_ {};
    };

    class StoragePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StoragePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(UserProfile, userProfile_);
      };
      friend void from_json(const Darabonba::Json& j, StoragePolicy& obj) { 
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
          DARABONBA_PTR_TO_JSON(UserProfileSize, userProfileSize_);
          DARABONBA_PTR_TO_JSON(UserProfileSwitch, userProfileSwitch_);
        };
        friend void from_json(const Darabonba::Json& j, UserProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(UserProfileSize, userProfileSize_);
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
        virtual bool empty() const override { return this->userProfileSize_ == nullptr
        && this->userProfileSwitch_ == nullptr; };
        // userProfileSize Field Functions 
        bool hasUserProfileSize() const { return this->userProfileSize_ != nullptr;};
        void deleteUserProfileSize() { this->userProfileSize_ = nullptr;};
        inline int64_t getUserProfileSize() const { DARABONBA_PTR_GET_DEFAULT(userProfileSize_, 0L) };
        inline UserProfile& setUserProfileSize(int64_t userProfileSize) { DARABONBA_PTR_SET_VALUE(userProfileSize_, userProfileSize) };


        // userProfileSwitch Field Functions 
        bool hasUserProfileSwitch() const { return this->userProfileSwitch_ != nullptr;};
        void deleteUserProfileSwitch() { this->userProfileSwitch_ = nullptr;};
        inline bool getUserProfileSwitch() const { DARABONBA_PTR_GET_DEFAULT(userProfileSwitch_, false) };
        inline UserProfile& setUserProfileSwitch(bool userProfileSwitch) { DARABONBA_PTR_SET_VALUE(userProfileSwitch_, userProfileSwitch) };


      protected:
        // The size of the user data roaming cloud disk. Unit: GB.
        shared_ptr<int64_t> userProfileSize_ {};
        // Specifies whether to enable user data roaming.
        // 
        // - `true`: Enabled.
        // - `false`: Disabled.
        // 
        // In Windows scenarios, if this field is explicitly specified, the specified value is used. If this field is omitted, the user roaming configuration of the current account is used.
        shared_ptr<bool> userProfileSwitch_ {};
      };

      virtual bool empty() const override { return this->userProfile_ == nullptr; };
      // userProfile Field Functions 
      bool hasUserProfile() const { return this->userProfile_ != nullptr;};
      void deleteUserProfile() { this->userProfile_ = nullptr;};
      inline const StoragePolicy::UserProfile & getUserProfile() const { DARABONBA_PTR_GET_CONST(userProfile_, StoragePolicy::UserProfile) };
      inline StoragePolicy::UserProfile getUserProfile() { DARABONBA_PTR_GET(userProfile_, StoragePolicy::UserProfile) };
      inline StoragePolicy& setUserProfile(const StoragePolicy::UserProfile & userProfile) { DARABONBA_PTR_SET_VALUE(userProfile_, userProfile) };
      inline StoragePolicy& setUserProfile(StoragePolicy::UserProfile && userProfile) { DARABONBA_PTR_SET_RVALUE(userProfile_, userProfile) };


    protected:
      // The user data roaming configuration, which is used to retain user configuration data.
      shared_ptr<StoragePolicy::UserProfile> userProfile_ {};
    };

    class SecurityPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(SkipUserAuthCheck, skipUserAuthCheck_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicy& obj) { 
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
      virtual bool empty() const override { return this->skipUserAuthCheck_ == nullptr; };
      // skipUserAuthCheck Field Functions 
      bool hasSkipUserAuthCheck() const { return this->skipUserAuthCheck_ != nullptr;};
      void deleteSkipUserAuthCheck() { this->skipUserAuthCheck_ = nullptr;};
      inline bool getSkipUserAuthCheck() const { DARABONBA_PTR_GET_DEFAULT(skipUserAuthCheck_, false) };
      inline SecurityPolicy& setSkipUserAuthCheck(bool skipUserAuthCheck) { DARABONBA_PTR_SET_VALUE(skipUserAuthCheck_, skipUserAuthCheck) };


    protected:
      // Specifies whether to skip the user authorization check when connecting to the application.
      // 
      // - `true`: Skips the check.
      // - `false`: Performs the check.
      // 
      // If this field is omitted when `SecurityPolicy` is configured, the user authorization check is performed.
      // 
      // **Note:** This field cannot be used to skip OpenAPI identity authentication or RAM permission verification.
      shared_ptr<bool> skipUserAuthCheck_ {};
    };

    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
        DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
        DARABONBA_PTR_TO_JSON(ClientTypes, clientTypes_);
        DARABONBA_PTR_TO_JSON(ClipboardPolicy, clipboardPolicy_);
        DARABONBA_PTR_TO_JSON(DisconnectKeepSession, disconnectKeepSession_);
        DARABONBA_PTR_TO_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
        DARABONBA_PTR_TO_JSON(FileManager, fileManager_);
        DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
        DARABONBA_PTR_TO_JSON(NoOperationDisconnect, noOperationDisconnect_);
        DARABONBA_PTR_TO_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
        DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
        DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
        DARABONBA_PTR_TO_JSON(WatermarkPolicy, watermarkPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
        DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
        DARABONBA_PTR_FROM_JSON(ClientTypes, clientTypes_);
        DARABONBA_PTR_FROM_JSON(ClipboardPolicy, clipboardPolicy_);
        DARABONBA_PTR_FROM_JSON(DisconnectKeepSession, disconnectKeepSession_);
        DARABONBA_PTR_FROM_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
        DARABONBA_PTR_FROM_JSON(FileManager, fileManager_);
        DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
        DARABONBA_PTR_FROM_JSON(NoOperationDisconnect, noOperationDisconnect_);
        DARABONBA_PTR_FROM_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
        DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
        DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicy_);
        DARABONBA_PTR_FROM_JSON(WatermarkPolicy, watermarkPolicy_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WatermarkPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WatermarkPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(WatermarkSwitch, watermarkSwitch_);
          DARABONBA_PTR_TO_JSON(WatermarkTypes, watermarkTypes_);
        };
        friend void from_json(const Darabonba::Json& j, WatermarkPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(WatermarkSwitch, watermarkSwitch_);
          DARABONBA_PTR_FROM_JSON(WatermarkTypes, watermarkTypes_);
        };
        WatermarkPolicy() = default ;
        WatermarkPolicy(const WatermarkPolicy &) = default ;
        WatermarkPolicy(WatermarkPolicy &&) = default ;
        WatermarkPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WatermarkPolicy() = default ;
        WatermarkPolicy& operator=(const WatermarkPolicy &) = default ;
        WatermarkPolicy& operator=(WatermarkPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->watermarkSwitch_ == nullptr
        && this->watermarkTypes_ == nullptr; };
        // watermarkSwitch Field Functions 
        bool hasWatermarkSwitch() const { return this->watermarkSwitch_ != nullptr;};
        void deleteWatermarkSwitch() { this->watermarkSwitch_ = nullptr;};
        inline string getWatermarkSwitch() const { DARABONBA_PTR_GET_DEFAULT(watermarkSwitch_, "") };
        inline WatermarkPolicy& setWatermarkSwitch(string watermarkSwitch) { DARABONBA_PTR_SET_VALUE(watermarkSwitch_, watermarkSwitch) };


        // watermarkTypes Field Functions 
        bool hasWatermarkTypes() const { return this->watermarkTypes_ != nullptr;};
        void deleteWatermarkTypes() { this->watermarkTypes_ = nullptr;};
        inline const vector<string> & getWatermarkTypes() const { DARABONBA_PTR_GET_CONST(watermarkTypes_, vector<string>) };
        inline vector<string> getWatermarkTypes() { DARABONBA_PTR_GET(watermarkTypes_, vector<string>) };
        inline WatermarkPolicy& setWatermarkTypes(const vector<string> & watermarkTypes) { DARABONBA_PTR_SET_VALUE(watermarkTypes_, watermarkTypes) };
        inline WatermarkPolicy& setWatermarkTypes(vector<string> && watermarkTypes) { DARABONBA_PTR_SET_RVALUE(watermarkTypes_, watermarkTypes) };


      protected:
        // The watermark switch. The value is case-insensitive.
        // 
        // - `ON`: Enables the watermark.
        // - `OFF`: Disables the watermark.
        // 
        // When disabled, the watermark content type list is not used.
        shared_ptr<string> watermarkSwitch_ {};
        // The list of watermark content types.
        // 
        // - `EndUserId`: The user identifier.
        // - `InstanceGroupId`: The delivery group identifier.
        // - `ClientTime`: The current time on the client.
        // 
        // Use watermark types supported by the browser and client.
        shared_ptr<vector<string>> watermarkTypes_ {};
      };

      class VideoPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
        };
        friend void from_json(const Darabonba::Json& j, VideoPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
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
        virtual bool empty() const override { return this->frameRate_ == nullptr; };
        // frameRate Field Functions 
        bool hasFrameRate() const { return this->frameRate_ != nullptr;};
        void deleteFrameRate() { this->frameRate_ = nullptr;};
        inline int32_t getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
        inline VideoPolicy& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


      protected:
        // The frame rate of the browser session.
        shared_ptr<int32_t> frameRate_ {};
      };

      class ClipboardPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClipboardPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
          DARABONBA_PTR_TO_JSON(ClipboardReadLimit, clipboardReadLimit_);
          DARABONBA_PTR_TO_JSON(ClipboardScope, clipboardScope_);
          DARABONBA_PTR_TO_JSON(ClipboardSizeUnit, clipboardSizeUnit_);
          DARABONBA_PTR_TO_JSON(ClipboardWriteLimit, clipboardWriteLimit_);
          DARABONBA_PTR_TO_JSON(FileClipboard, fileClipboard_);
          DARABONBA_PTR_TO_JSON(RichTextClipboard, richTextClipboard_);
          DARABONBA_PTR_TO_JSON(RichTextClipboardLimit, richTextClipboardLimit_);
          DARABONBA_PTR_TO_JSON(RichTextClipboardReadLimit, richTextClipboardReadLimit_);
          DARABONBA_PTR_TO_JSON(RichTextClipboardReadSizeUnit, richTextClipboardReadSizeUnit_);
          DARABONBA_PTR_TO_JSON(RichTextClipboardSizeUnit, richTextClipboardSizeUnit_);
          DARABONBA_PTR_TO_JSON(RichTextClipboardWriteLimit, richTextClipboardWriteLimit_);
          DARABONBA_PTR_TO_JSON(RichTextClipboardWriteSizeUnit, richTextClipboardWriteSizeUnit_);
          DARABONBA_PTR_TO_JSON(TextClipboard, textClipboard_);
          DARABONBA_PTR_TO_JSON(TextClipboardReadLimit, textClipboardReadLimit_);
          DARABONBA_PTR_TO_JSON(TextClipboardReadSizeUnit, textClipboardReadSizeUnit_);
          DARABONBA_PTR_TO_JSON(TextClipboardWriteLimit, textClipboardWriteLimit_);
          DARABONBA_PTR_TO_JSON(TextClipboardWriteSizeUnit, textClipboardWriteSizeUnit_);
        };
        friend void from_json(const Darabonba::Json& j, ClipboardPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
          DARABONBA_PTR_FROM_JSON(ClipboardReadLimit, clipboardReadLimit_);
          DARABONBA_PTR_FROM_JSON(ClipboardScope, clipboardScope_);
          DARABONBA_PTR_FROM_JSON(ClipboardSizeUnit, clipboardSizeUnit_);
          DARABONBA_PTR_FROM_JSON(ClipboardWriteLimit, clipboardWriteLimit_);
          DARABONBA_PTR_FROM_JSON(FileClipboard, fileClipboard_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboard, richTextClipboard_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboardLimit, richTextClipboardLimit_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboardReadLimit, richTextClipboardReadLimit_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboardReadSizeUnit, richTextClipboardReadSizeUnit_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboardSizeUnit, richTextClipboardSizeUnit_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboardWriteLimit, richTextClipboardWriteLimit_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboardWriteSizeUnit, richTextClipboardWriteSizeUnit_);
          DARABONBA_PTR_FROM_JSON(TextClipboard, textClipboard_);
          DARABONBA_PTR_FROM_JSON(TextClipboardReadLimit, textClipboardReadLimit_);
          DARABONBA_PTR_FROM_JSON(TextClipboardReadSizeUnit, textClipboardReadSizeUnit_);
          DARABONBA_PTR_FROM_JSON(TextClipboardWriteLimit, textClipboardWriteLimit_);
          DARABONBA_PTR_FROM_JSON(TextClipboardWriteSizeUnit, textClipboardWriteSizeUnit_);
        };
        ClipboardPolicy() = default ;
        ClipboardPolicy(const ClipboardPolicy &) = default ;
        ClipboardPolicy(ClipboardPolicy &&) = default ;
        ClipboardPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClipboardPolicy() = default ;
        ClipboardPolicy& operator=(const ClipboardPolicy &) = default ;
        ClipboardPolicy& operator=(ClipboardPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clipboard_ == nullptr
        && this->clipboardReadLimit_ == nullptr && this->clipboardScope_ == nullptr && this->clipboardSizeUnit_ == nullptr && this->clipboardWriteLimit_ == nullptr && this->fileClipboard_ == nullptr
        && this->richTextClipboard_ == nullptr && this->richTextClipboardLimit_ == nullptr && this->richTextClipboardReadLimit_ == nullptr && this->richTextClipboardReadSizeUnit_ == nullptr && this->richTextClipboardSizeUnit_ == nullptr
        && this->richTextClipboardWriteLimit_ == nullptr && this->richTextClipboardWriteSizeUnit_ == nullptr && this->textClipboard_ == nullptr && this->textClipboardReadLimit_ == nullptr && this->textClipboardReadSizeUnit_ == nullptr
        && this->textClipboardWriteLimit_ == nullptr && this->textClipboardWriteSizeUnit_ == nullptr; };
        // clipboard Field Functions 
        bool hasClipboard() const { return this->clipboard_ != nullptr;};
        void deleteClipboard() { this->clipboard_ = nullptr;};
        inline string getClipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
        inline ClipboardPolicy& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


        // clipboardReadLimit Field Functions 
        bool hasClipboardReadLimit() const { return this->clipboardReadLimit_ != nullptr;};
        void deleteClipboardReadLimit() { this->clipboardReadLimit_ = nullptr;};
        inline int32_t getClipboardReadLimit() const { DARABONBA_PTR_GET_DEFAULT(clipboardReadLimit_, 0) };
        inline ClipboardPolicy& setClipboardReadLimit(int32_t clipboardReadLimit) { DARABONBA_PTR_SET_VALUE(clipboardReadLimit_, clipboardReadLimit) };


        // clipboardScope Field Functions 
        bool hasClipboardScope() const { return this->clipboardScope_ != nullptr;};
        void deleteClipboardScope() { this->clipboardScope_ = nullptr;};
        inline string getClipboardScope() const { DARABONBA_PTR_GET_DEFAULT(clipboardScope_, "") };
        inline ClipboardPolicy& setClipboardScope(string clipboardScope) { DARABONBA_PTR_SET_VALUE(clipboardScope_, clipboardScope) };


        // clipboardSizeUnit Field Functions 
        bool hasClipboardSizeUnit() const { return this->clipboardSizeUnit_ != nullptr;};
        void deleteClipboardSizeUnit() { this->clipboardSizeUnit_ = nullptr;};
        inline string getClipboardSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(clipboardSizeUnit_, "") };
        inline ClipboardPolicy& setClipboardSizeUnit(string clipboardSizeUnit) { DARABONBA_PTR_SET_VALUE(clipboardSizeUnit_, clipboardSizeUnit) };


        // clipboardWriteLimit Field Functions 
        bool hasClipboardWriteLimit() const { return this->clipboardWriteLimit_ != nullptr;};
        void deleteClipboardWriteLimit() { this->clipboardWriteLimit_ = nullptr;};
        inline int32_t getClipboardWriteLimit() const { DARABONBA_PTR_GET_DEFAULT(clipboardWriteLimit_, 0) };
        inline ClipboardPolicy& setClipboardWriteLimit(int32_t clipboardWriteLimit) { DARABONBA_PTR_SET_VALUE(clipboardWriteLimit_, clipboardWriteLimit) };


        // fileClipboard Field Functions 
        bool hasFileClipboard() const { return this->fileClipboard_ != nullptr;};
        void deleteFileClipboard() { this->fileClipboard_ = nullptr;};
        inline string getFileClipboard() const { DARABONBA_PTR_GET_DEFAULT(fileClipboard_, "") };
        inline ClipboardPolicy& setFileClipboard(string fileClipboard) { DARABONBA_PTR_SET_VALUE(fileClipboard_, fileClipboard) };


        // richTextClipboard Field Functions 
        bool hasRichTextClipboard() const { return this->richTextClipboard_ != nullptr;};
        void deleteRichTextClipboard() { this->richTextClipboard_ = nullptr;};
        inline string getRichTextClipboard() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboard_, "") };
        inline ClipboardPolicy& setRichTextClipboard(string richTextClipboard) { DARABONBA_PTR_SET_VALUE(richTextClipboard_, richTextClipboard) };


        // richTextClipboardLimit Field Functions 
        bool hasRichTextClipboardLimit() const { return this->richTextClipboardLimit_ != nullptr;};
        void deleteRichTextClipboardLimit() { this->richTextClipboardLimit_ = nullptr;};
        inline int32_t getRichTextClipboardLimit() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboardLimit_, 0) };
        inline ClipboardPolicy& setRichTextClipboardLimit(int32_t richTextClipboardLimit) { DARABONBA_PTR_SET_VALUE(richTextClipboardLimit_, richTextClipboardLimit) };


        // richTextClipboardReadLimit Field Functions 
        bool hasRichTextClipboardReadLimit() const { return this->richTextClipboardReadLimit_ != nullptr;};
        void deleteRichTextClipboardReadLimit() { this->richTextClipboardReadLimit_ = nullptr;};
        inline int32_t getRichTextClipboardReadLimit() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboardReadLimit_, 0) };
        inline ClipboardPolicy& setRichTextClipboardReadLimit(int32_t richTextClipboardReadLimit) { DARABONBA_PTR_SET_VALUE(richTextClipboardReadLimit_, richTextClipboardReadLimit) };


        // richTextClipboardReadSizeUnit Field Functions 
        bool hasRichTextClipboardReadSizeUnit() const { return this->richTextClipboardReadSizeUnit_ != nullptr;};
        void deleteRichTextClipboardReadSizeUnit() { this->richTextClipboardReadSizeUnit_ = nullptr;};
        inline string getRichTextClipboardReadSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboardReadSizeUnit_, "") };
        inline ClipboardPolicy& setRichTextClipboardReadSizeUnit(string richTextClipboardReadSizeUnit) { DARABONBA_PTR_SET_VALUE(richTextClipboardReadSizeUnit_, richTextClipboardReadSizeUnit) };


        // richTextClipboardSizeUnit Field Functions 
        bool hasRichTextClipboardSizeUnit() const { return this->richTextClipboardSizeUnit_ != nullptr;};
        void deleteRichTextClipboardSizeUnit() { this->richTextClipboardSizeUnit_ = nullptr;};
        inline string getRichTextClipboardSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboardSizeUnit_, "") };
        inline ClipboardPolicy& setRichTextClipboardSizeUnit(string richTextClipboardSizeUnit) { DARABONBA_PTR_SET_VALUE(richTextClipboardSizeUnit_, richTextClipboardSizeUnit) };


        // richTextClipboardWriteLimit Field Functions 
        bool hasRichTextClipboardWriteLimit() const { return this->richTextClipboardWriteLimit_ != nullptr;};
        void deleteRichTextClipboardWriteLimit() { this->richTextClipboardWriteLimit_ = nullptr;};
        inline int32_t getRichTextClipboardWriteLimit() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboardWriteLimit_, 0) };
        inline ClipboardPolicy& setRichTextClipboardWriteLimit(int32_t richTextClipboardWriteLimit) { DARABONBA_PTR_SET_VALUE(richTextClipboardWriteLimit_, richTextClipboardWriteLimit) };


        // richTextClipboardWriteSizeUnit Field Functions 
        bool hasRichTextClipboardWriteSizeUnit() const { return this->richTextClipboardWriteSizeUnit_ != nullptr;};
        void deleteRichTextClipboardWriteSizeUnit() { this->richTextClipboardWriteSizeUnit_ = nullptr;};
        inline string getRichTextClipboardWriteSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboardWriteSizeUnit_, "") };
        inline ClipboardPolicy& setRichTextClipboardWriteSizeUnit(string richTextClipboardWriteSizeUnit) { DARABONBA_PTR_SET_VALUE(richTextClipboardWriteSizeUnit_, richTextClipboardWriteSizeUnit) };


        // textClipboard Field Functions 
        bool hasTextClipboard() const { return this->textClipboard_ != nullptr;};
        void deleteTextClipboard() { this->textClipboard_ = nullptr;};
        inline string getTextClipboard() const { DARABONBA_PTR_GET_DEFAULT(textClipboard_, "") };
        inline ClipboardPolicy& setTextClipboard(string textClipboard) { DARABONBA_PTR_SET_VALUE(textClipboard_, textClipboard) };


        // textClipboardReadLimit Field Functions 
        bool hasTextClipboardReadLimit() const { return this->textClipboardReadLimit_ != nullptr;};
        void deleteTextClipboardReadLimit() { this->textClipboardReadLimit_ = nullptr;};
        inline int32_t getTextClipboardReadLimit() const { DARABONBA_PTR_GET_DEFAULT(textClipboardReadLimit_, 0) };
        inline ClipboardPolicy& setTextClipboardReadLimit(int32_t textClipboardReadLimit) { DARABONBA_PTR_SET_VALUE(textClipboardReadLimit_, textClipboardReadLimit) };


        // textClipboardReadSizeUnit Field Functions 
        bool hasTextClipboardReadSizeUnit() const { return this->textClipboardReadSizeUnit_ != nullptr;};
        void deleteTextClipboardReadSizeUnit() { this->textClipboardReadSizeUnit_ = nullptr;};
        inline string getTextClipboardReadSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(textClipboardReadSizeUnit_, "") };
        inline ClipboardPolicy& setTextClipboardReadSizeUnit(string textClipboardReadSizeUnit) { DARABONBA_PTR_SET_VALUE(textClipboardReadSizeUnit_, textClipboardReadSizeUnit) };


        // textClipboardWriteLimit Field Functions 
        bool hasTextClipboardWriteLimit() const { return this->textClipboardWriteLimit_ != nullptr;};
        void deleteTextClipboardWriteLimit() { this->textClipboardWriteLimit_ = nullptr;};
        inline int32_t getTextClipboardWriteLimit() const { DARABONBA_PTR_GET_DEFAULT(textClipboardWriteLimit_, 0) };
        inline ClipboardPolicy& setTextClipboardWriteLimit(int32_t textClipboardWriteLimit) { DARABONBA_PTR_SET_VALUE(textClipboardWriteLimit_, textClipboardWriteLimit) };


        // textClipboardWriteSizeUnit Field Functions 
        bool hasTextClipboardWriteSizeUnit() const { return this->textClipboardWriteSizeUnit_ != nullptr;};
        void deleteTextClipboardWriteSizeUnit() { this->textClipboardWriteSizeUnit_ = nullptr;};
        inline string getTextClipboardWriteSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(textClipboardWriteSizeUnit_, "") };
        inline ClipboardPolicy& setTextClipboardWriteSizeUnit(string textClipboardWriteSizeUnit) { DARABONBA_PTR_SET_VALUE(textClipboardWriteSizeUnit_, textClipboardWriteSizeUnit) };


      protected:
        // The clipboard transfer direction. The value is case-insensitive.
        // 
        // - `off`: Bidirectional transfer is disabled.
        // - `read`: Allows copy and paste from the local PC to the cloud browser.
        // - `write`: Allows copy and paste from the cloud browser to the local PC.
        // - `readwrite`: Bidirectional transfer is allowed.
        shared_ptr<string> clipboard_ {};
        // The clipboard size limit for inbound transfer (from the local PC to the cloud browser).
        // 
        // **Value range:** 1 to 102400. The unit is specified by ClipboardSizeUnit.
        // 
        // The value range does not change with unit conversion.
        shared_ptr<int32_t> clipboardReadLimit_ {};
        // The clipboard control granularity.
        // 
        // - `global`: Unified control.
        // - `grained`: Separate control by text, rich text, and file.
        shared_ptr<string> clipboardScope_ {};
        // The clipboard size unit.
        // 
        // - `B`: Bytes.
        // - `KB`: 1024 bytes.
        shared_ptr<string> clipboardSizeUnit_ {};
        // The clipboard size limit for outbound transfer (from the cloud browser to the local PC).
        // 
        // **Value range:** 1 to 102400. The unit is specified by ClipboardSizeUnit.
        // 
        // The value range does not change with unit conversion.
        shared_ptr<int32_t> clipboardWriteLimit_ {};
        // The clipboard transfer direction. The value is case-insensitive.
        // 
        // - `off`: Bidirectional transfer is disabled.
        // - `read`: Allows copy and paste from the local PC to the cloud browser.
        // - `write`: Allows copy and paste from the cloud browser to the local PC.
        // - `readwrite`: Bidirectional transfer is allowed.
        shared_ptr<string> fileClipboard_ {};
        // The clipboard transfer direction. The value is case-insensitive.
        // 
        // - `off`: Bidirectional transfer is disabled.
        // - `read`: Allows copy and paste from the local PC to the cloud browser.
        // - `write`: Allows copy and paste from the cloud browser to the local PC.
        // - `readwrite`: Bidirectional transfer is allowed.
        shared_ptr<string> richTextClipboard_ {};
        // The rich text clipboard size limit.
        // 
        // **Value range:** 1 to 204800. The unit is specified by RichTextClipboardSizeUnit.
        // 
        // The value range does not change with unit conversion.
        shared_ptr<int32_t> richTextClipboardLimit_ {};
        // The clipboard size limit for inbound transfer (from the local PC to the cloud browser).
        // 
        // **Value range:** 1 to 204800. The unit is specified by RichTextClipboardReadSizeUnit.
        // 
        // The value range does not change with unit conversion.
        shared_ptr<int32_t> richTextClipboardReadLimit_ {};
        // The clipboard size unit.
        // 
        // - `B`: Bytes.
        // - `KB`: 1024 bytes.
        // 
        // **Default value:** `KB`.
        shared_ptr<string> richTextClipboardReadSizeUnit_ {};
        // The clipboard size unit.
        // 
        // - `B`: Bytes.
        // - `KB`: 1024 bytes.
        shared_ptr<string> richTextClipboardSizeUnit_ {};
        // The clipboard size limit for outbound transfer (from the cloud browser to the local PC).
        // 
        // **Value range:** 1 to 204800. The unit is specified by RichTextClipboardWriteSizeUnit.
        // 
        // The value range does not change with unit conversion.
        shared_ptr<int32_t> richTextClipboardWriteLimit_ {};
        // The clipboard size unit.
        // 
        // - `B`: Bytes.
        // - `KB`: 1024 bytes.
        // 
        // **Default value:** `KB`.
        shared_ptr<string> richTextClipboardWriteSizeUnit_ {};
        // The clipboard transfer direction. The value is case-insensitive.
        // 
        // - `off`: Bidirectional transfer is disabled.
        // - `read`: Allows copy and paste from the local PC to the cloud browser.
        // - `write`: Allows copy and paste from the cloud browser to the local PC.
        // - `readwrite`: Bidirectional transfer is allowed.
        shared_ptr<string> textClipboard_ {};
        // The clipboard size limit for inbound transfer (from the local PC to the cloud browser).
        // 
        // **Value range:** 1 to 102400. The unit is specified by TextClipboardReadSizeUnit.
        // 
        // The value range does not change with unit conversion.
        shared_ptr<int32_t> textClipboardReadLimit_ {};
        // The clipboard size unit.
        // 
        // - `B`: Bytes.
        // - `KB`: 1024 bytes.
        // 
        // **Default value:** `KB`.
        shared_ptr<string> textClipboardReadSizeUnit_ {};
        // The clipboard size limit for outbound transfer (from the cloud browser to the local PC).
        // 
        // **Value range:** 1 to 102400. The unit is specified by TextClipboardWriteSizeUnit.
        // 
        // The value range does not change with unit conversion.
        shared_ptr<int32_t> textClipboardWriteLimit_ {};
        // The clipboard size unit.
        // 
        // - `B`: Bytes.
        // - `KB`: 1024 bytes.
        // 
        // **Default value:** `KB`.
        shared_ptr<string> textClipboardWriteSizeUnit_ {};
      };

      class ClientTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientTypes& obj) { 
          DARABONBA_PTR_TO_JSON(ClientType, clientType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ClientTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ClientTypes() = default ;
        ClientTypes(const ClientTypes &) = default ;
        ClientTypes(ClientTypes &&) = default ;
        ClientTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientTypes() = default ;
        ClientTypes& operator=(const ClientTypes &) = default ;
        ClientTypes& operator=(ClientTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientType_ == nullptr
        && this->status_ == nullptr; };
        // clientType Field Functions 
        bool hasClientType() const { return this->clientType_ != nullptr;};
        void deleteClientType() { this->clientType_ = nullptr;};
        inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
        inline ClientTypes& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ClientTypes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The client type for which you want to configure an access policy.
        // 
        // - `windows`: Windows client.
        // - `macos`: macOS client.
        // - `html5`: Web client.
        // - `android`: Android client.
        // - `ios`: iOS client.
        shared_ptr<string> clientType_ {};
        // The access policy switch for the client type.
        // 
        // - `on`: Allows access from this client type.
        // - `off`: Denies access from this client type.
        shared_ptr<string> status_ {};
      };

      class AuthorizeAccessPolicyRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizeAccessPolicyRules& obj) { 
          DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizeAccessPolicyRules& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        AuthorizeAccessPolicyRules() = default ;
        AuthorizeAccessPolicyRules(const AuthorizeAccessPolicyRules &) = default ;
        AuthorizeAccessPolicyRules(AuthorizeAccessPolicyRules &&) = default ;
        AuthorizeAccessPolicyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizeAccessPolicyRules() = default ;
        AuthorizeAccessPolicyRules& operator=(const AuthorizeAccessPolicyRules &) = default ;
        AuthorizeAccessPolicyRules& operator=(AuthorizeAccessPolicyRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidrIp_ == nullptr
        && this->description_ == nullptr; };
        // cidrIp Field Functions 
        bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
        void deleteCidrIp() { this->cidrIp_ = nullptr;};
        inline string getCidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
        inline AuthorizeAccessPolicyRules& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AuthorizeAccessPolicyRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The source CIDR block of clients that are allowed to access the cloud browser.
        shared_ptr<string> cidrIp_ {};
        // The description of the client access IP address whitelist rule.
        shared_ptr<string> description_ {};
      };

      virtual bool empty() const override { return this->appContentProtection_ == nullptr
        && this->authorizeAccessPolicyRules_ == nullptr && this->clientTypes_ == nullptr && this->clipboardPolicy_ == nullptr && this->disconnectKeepSession_ == nullptr && this->disconnectKeepSessionTime_ == nullptr
        && this->fileManager_ == nullptr && this->html5FileTransfer_ == nullptr && this->noOperationDisconnect_ == nullptr && this->noOperationDisconnectTime_ == nullptr && this->policyVersion_ == nullptr
        && this->videoPolicy_ == nullptr && this->watermarkPolicy_ == nullptr; };
      // appContentProtection Field Functions 
      bool hasAppContentProtection() const { return this->appContentProtection_ != nullptr;};
      void deleteAppContentProtection() { this->appContentProtection_ = nullptr;};
      inline string getAppContentProtection() const { DARABONBA_PTR_GET_DEFAULT(appContentProtection_, "") };
      inline Policy& setAppContentProtection(string appContentProtection) { DARABONBA_PTR_SET_VALUE(appContentProtection_, appContentProtection) };


      // authorizeAccessPolicyRules Field Functions 
      bool hasAuthorizeAccessPolicyRules() const { return this->authorizeAccessPolicyRules_ != nullptr;};
      void deleteAuthorizeAccessPolicyRules() { this->authorizeAccessPolicyRules_ = nullptr;};
      inline const vector<Policy::AuthorizeAccessPolicyRules> & getAuthorizeAccessPolicyRules() const { DARABONBA_PTR_GET_CONST(authorizeAccessPolicyRules_, vector<Policy::AuthorizeAccessPolicyRules>) };
      inline vector<Policy::AuthorizeAccessPolicyRules> getAuthorizeAccessPolicyRules() { DARABONBA_PTR_GET(authorizeAccessPolicyRules_, vector<Policy::AuthorizeAccessPolicyRules>) };
      inline Policy& setAuthorizeAccessPolicyRules(const vector<Policy::AuthorizeAccessPolicyRules> & authorizeAccessPolicyRules) { DARABONBA_PTR_SET_VALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };
      inline Policy& setAuthorizeAccessPolicyRules(vector<Policy::AuthorizeAccessPolicyRules> && authorizeAccessPolicyRules) { DARABONBA_PTR_SET_RVALUE(authorizeAccessPolicyRules_, authorizeAccessPolicyRules) };


      // clientTypes Field Functions 
      bool hasClientTypes() const { return this->clientTypes_ != nullptr;};
      void deleteClientTypes() { this->clientTypes_ = nullptr;};
      inline const vector<Policy::ClientTypes> & getClientTypes() const { DARABONBA_PTR_GET_CONST(clientTypes_, vector<Policy::ClientTypes>) };
      inline vector<Policy::ClientTypes> getClientTypes() { DARABONBA_PTR_GET(clientTypes_, vector<Policy::ClientTypes>) };
      inline Policy& setClientTypes(const vector<Policy::ClientTypes> & clientTypes) { DARABONBA_PTR_SET_VALUE(clientTypes_, clientTypes) };
      inline Policy& setClientTypes(vector<Policy::ClientTypes> && clientTypes) { DARABONBA_PTR_SET_RVALUE(clientTypes_, clientTypes) };


      // clipboardPolicy Field Functions 
      bool hasClipboardPolicy() const { return this->clipboardPolicy_ != nullptr;};
      void deleteClipboardPolicy() { this->clipboardPolicy_ = nullptr;};
      inline const Policy::ClipboardPolicy & getClipboardPolicy() const { DARABONBA_PTR_GET_CONST(clipboardPolicy_, Policy::ClipboardPolicy) };
      inline Policy::ClipboardPolicy getClipboardPolicy() { DARABONBA_PTR_GET(clipboardPolicy_, Policy::ClipboardPolicy) };
      inline Policy& setClipboardPolicy(const Policy::ClipboardPolicy & clipboardPolicy) { DARABONBA_PTR_SET_VALUE(clipboardPolicy_, clipboardPolicy) };
      inline Policy& setClipboardPolicy(Policy::ClipboardPolicy && clipboardPolicy) { DARABONBA_PTR_SET_RVALUE(clipboardPolicy_, clipboardPolicy) };


      // disconnectKeepSession Field Functions 
      bool hasDisconnectKeepSession() const { return this->disconnectKeepSession_ != nullptr;};
      void deleteDisconnectKeepSession() { this->disconnectKeepSession_ = nullptr;};
      inline string getDisconnectKeepSession() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSession_, "") };
      inline Policy& setDisconnectKeepSession(string disconnectKeepSession) { DARABONBA_PTR_SET_VALUE(disconnectKeepSession_, disconnectKeepSession) };


      // disconnectKeepSessionTime Field Functions 
      bool hasDisconnectKeepSessionTime() const { return this->disconnectKeepSessionTime_ != nullptr;};
      void deleteDisconnectKeepSessionTime() { this->disconnectKeepSessionTime_ = nullptr;};
      inline int32_t getDisconnectKeepSessionTime() const { DARABONBA_PTR_GET_DEFAULT(disconnectKeepSessionTime_, 0) };
      inline Policy& setDisconnectKeepSessionTime(int32_t disconnectKeepSessionTime) { DARABONBA_PTR_SET_VALUE(disconnectKeepSessionTime_, disconnectKeepSessionTime) };


      // fileManager Field Functions 
      bool hasFileManager() const { return this->fileManager_ != nullptr;};
      void deleteFileManager() { this->fileManager_ = nullptr;};
      inline string getFileManager() const { DARABONBA_PTR_GET_DEFAULT(fileManager_, "") };
      inline Policy& setFileManager(string fileManager) { DARABONBA_PTR_SET_VALUE(fileManager_, fileManager) };


      // html5FileTransfer Field Functions 
      bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
      void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
      inline string getHtml5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
      inline Policy& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


      // noOperationDisconnect Field Functions 
      bool hasNoOperationDisconnect() const { return this->noOperationDisconnect_ != nullptr;};
      void deleteNoOperationDisconnect() { this->noOperationDisconnect_ = nullptr;};
      inline string getNoOperationDisconnect() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnect_, "") };
      inline Policy& setNoOperationDisconnect(string noOperationDisconnect) { DARABONBA_PTR_SET_VALUE(noOperationDisconnect_, noOperationDisconnect) };


      // noOperationDisconnectTime Field Functions 
      bool hasNoOperationDisconnectTime() const { return this->noOperationDisconnectTime_ != nullptr;};
      void deleteNoOperationDisconnectTime() { this->noOperationDisconnectTime_ = nullptr;};
      inline int32_t getNoOperationDisconnectTime() const { DARABONBA_PTR_GET_DEFAULT(noOperationDisconnectTime_, 0) };
      inline Policy& setNoOperationDisconnectTime(int32_t noOperationDisconnectTime) { DARABONBA_PTR_SET_VALUE(noOperationDisconnectTime_, noOperationDisconnectTime) };


      // policyVersion Field Functions 
      bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
      void deletePolicyVersion() { this->policyVersion_ = nullptr;};
      inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
      inline Policy& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


      // videoPolicy Field Functions 
      bool hasVideoPolicy() const { return this->videoPolicy_ != nullptr;};
      void deleteVideoPolicy() { this->videoPolicy_ = nullptr;};
      inline const Policy::VideoPolicy & getVideoPolicy() const { DARABONBA_PTR_GET_CONST(videoPolicy_, Policy::VideoPolicy) };
      inline Policy::VideoPolicy getVideoPolicy() { DARABONBA_PTR_GET(videoPolicy_, Policy::VideoPolicy) };
      inline Policy& setVideoPolicy(const Policy::VideoPolicy & videoPolicy) { DARABONBA_PTR_SET_VALUE(videoPolicy_, videoPolicy) };
      inline Policy& setVideoPolicy(Policy::VideoPolicy && videoPolicy) { DARABONBA_PTR_SET_RVALUE(videoPolicy_, videoPolicy) };


      // watermarkPolicy Field Functions 
      bool hasWatermarkPolicy() const { return this->watermarkPolicy_ != nullptr;};
      void deleteWatermarkPolicy() { this->watermarkPolicy_ = nullptr;};
      inline const Policy::WatermarkPolicy & getWatermarkPolicy() const { DARABONBA_PTR_GET_CONST(watermarkPolicy_, Policy::WatermarkPolicy) };
      inline Policy::WatermarkPolicy getWatermarkPolicy() { DARABONBA_PTR_GET(watermarkPolicy_, Policy::WatermarkPolicy) };
      inline Policy& setWatermarkPolicy(const Policy::WatermarkPolicy & watermarkPolicy) { DARABONBA_PTR_SET_VALUE(watermarkPolicy_, watermarkPolicy) };
      inline Policy& setWatermarkPolicy(Policy::WatermarkPolicy && watermarkPolicy) { DARABONBA_PTR_SET_RVALUE(watermarkPolicy_, watermarkPolicy) };


    protected:
      // Specifies whether to enable screen capture prevention.
      // 
      // - `on`: Enables screen capture prevention.
      // - `off`: Disables screen capture prevention.
      shared_ptr<string> appContentProtection_ {};
      // The client access IP address whitelist. This parameter is used to restrict the source IP addresses of clients that can access the cloud browser.
      shared_ptr<vector<Policy::AuthorizeAccessPolicyRules>> authorizeAccessPolicyRules_ {};
      // The client access control list.
      shared_ptr<vector<Policy::ClientTypes>> clientTypes_ {};
      // Specifies the clipboard transfer direction, content type, and size limit. read indicates transfer from the local PC to the cloud browser. write indicates transfer from the cloud browser to the local PC.
      shared_ptr<Policy::ClipboardPolicy> clipboardPolicy_ {};
      // The session data retention policy after disconnection.
      // 
      // - `customTime`: Retains the session based on the session data retention policy. Customizing the duration through `DisconnectKeepSessionTime` is not supported.
      // - `persistent`: The session is not subject to automatic release based on disconnection duration.
      // 
      // **Note:** `persistent` is still subject to authorization and other release policies.
      shared_ptr<string> disconnectKeepSession_ {};
      // Not supported. You do not need to specify this parameter.
      shared_ptr<int32_t> disconnectKeepSessionTime_ {};
      // Specifies whether to enable the floating ball file manager.
      // 
      // - `on`: Enabled.
      // - `off`: Disabled.
      // 
      // **Default value:** `off`.
      shared_ptr<string> fileManager_ {};
      // The file transfer policy for the web client.
      // 
      // - `off`: File transfer is disabled.
      // - `upload`: Only upload is allowed.
      // - `download`: Only download is allowed.
      // - `full`: Both upload and download are allowed.
      // 
      // Configure this parameter together with the clipboard policy.
      shared_ptr<string> html5FileTransfer_ {};
      // Specifies whether to enable automatic disconnection on inactivity. The value is case-insensitive.
      // 
      // - `on`: Enabled.
      // - `off`: Disabled.
      // 
      // When enabled, set the wait duration through `NoOperationDisconnectTime`.
      shared_ptr<string> noOperationDisconnect_ {};
      // The wait duration before disconnection is triggered after user inactivity. Unit: seconds.
      // 
      // **Prerequisite:** When `NoOperationDisconnect` is enabled, specify a value greater than 0.
      shared_ptr<int32_t> noOperationDisconnectTime_ {};
      // The policy version. The value is case-insensitive.
      // 
      // - `DEFAULT`: Legacy policy.
      // - `CENTER`: Centralized policy.
      // 
      // **Default value:** `DEFAULT`. The actual effective policy version depends on the policy configuration available for the account.
      shared_ptr<string> policyVersion_ {};
      // The video display policy for the browser session.
      shared_ptr<Policy::VideoPolicy> videoPolicy_ {};
      // The watermark display configuration for browser sessions.
      shared_ptr<Policy::WatermarkPolicy> watermarkPolicy_ {};
    };

    class NodePool : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodePool& obj) { 
        DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
        DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      };
      friend void from_json(const Darabonba::Json& j, NodePool& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
        DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
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
      virtual bool empty() const override { return this->nodeAmount_ == nullptr
        && this->nodeInstanceType_ == nullptr && this->strategyType_ == nullptr; };
      // nodeAmount Field Functions 
      bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
      void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
      inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
      inline NodePool& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


      // nodeInstanceType Field Functions 
      bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
      void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
      inline string getNodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
      inline NodePool& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


      // strategyType Field Functions 
      bool hasStrategyType() const { return this->strategyType_ != nullptr;};
      void deleteStrategyType() { this->strategyType_ = nullptr;};
      inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
      inline NodePool& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    protected:
      // The number of nodes.
      // 
      // You do not need to specify this parameter.
      shared_ptr<int32_t> nodeAmount_ {};
      // The node specifications identity.
      // 
      // You do not need to specify this parameter.
      shared_ptr<string> nodeInstanceType_ {};
      // The node scaling policy.
      // 
      // You do not need to specify this parameter.
      shared_ptr<string> strategyType_ {};
    };

    class Network : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Network& obj) { 
        DARABONBA_PTR_TO_JSON(AccessRestriction, accessRestriction_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(RestrictedURLs, restrictedURLs_);
        DARABONBA_PTR_TO_JSON(RestrictedURLsFilePath, restrictedURLsFilePath_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, Network& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessRestriction, accessRestriction_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(RestrictedURLs, restrictedURLs_);
        DARABONBA_PTR_FROM_JSON(RestrictedURLsFilePath, restrictedURLsFilePath_);
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
      class RestrictedURLs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RestrictedURLs& obj) { 
          DARABONBA_PTR_TO_JSON(URL, URL_);
        };
        friend void from_json(const Darabonba::Json& j, RestrictedURLs& obj) { 
          DARABONBA_PTR_FROM_JSON(URL, URL_);
        };
        RestrictedURLs() = default ;
        RestrictedURLs(const RestrictedURLs &) = default ;
        RestrictedURLs(RestrictedURLs &&) = default ;
        RestrictedURLs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RestrictedURLs() = default ;
        RestrictedURLs& operator=(const RestrictedURLs &) = default ;
        RestrictedURLs& operator=(RestrictedURLs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->URL_ == nullptr; };
        // URL Field Functions 
        bool hasURL() const { return this->URL_ != nullptr;};
        void deleteURL() { this->URL_ = nullptr;};
        inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
        inline RestrictedURLs& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


      protected:
        // The URL of the allowed website.
        shared_ptr<string> URL_ {};
      };

      virtual bool empty() const override { return this->accessRestriction_ == nullptr
        && this->officeSiteId_ == nullptr && this->restrictedURLs_ == nullptr && this->restrictedURLsFilePath_ == nullptr && this->vSwitchIds_ == nullptr; };
      // accessRestriction Field Functions 
      bool hasAccessRestriction() const { return this->accessRestriction_ != nullptr;};
      void deleteAccessRestriction() { this->accessRestriction_ = nullptr;};
      inline string getAccessRestriction() const { DARABONBA_PTR_GET_DEFAULT(accessRestriction_, "") };
      inline Network& setAccessRestriction(string accessRestriction) { DARABONBA_PTR_SET_VALUE(accessRestriction_, accessRestriction) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Network& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // restrictedURLs Field Functions 
      bool hasRestrictedURLs() const { return this->restrictedURLs_ != nullptr;};
      void deleteRestrictedURLs() { this->restrictedURLs_ = nullptr;};
      inline const vector<Network::RestrictedURLs> & getRestrictedURLs() const { DARABONBA_PTR_GET_CONST(restrictedURLs_, vector<Network::RestrictedURLs>) };
      inline vector<Network::RestrictedURLs> getRestrictedURLs() { DARABONBA_PTR_GET(restrictedURLs_, vector<Network::RestrictedURLs>) };
      inline Network& setRestrictedURLs(const vector<Network::RestrictedURLs> & restrictedURLs) { DARABONBA_PTR_SET_VALUE(restrictedURLs_, restrictedURLs) };
      inline Network& setRestrictedURLs(vector<Network::RestrictedURLs> && restrictedURLs) { DARABONBA_PTR_SET_RVALUE(restrictedURLs_, restrictedURLs) };


      // restrictedURLsFilePath Field Functions 
      bool hasRestrictedURLsFilePath() const { return this->restrictedURLsFilePath_ != nullptr;};
      void deleteRestrictedURLsFilePath() { this->restrictedURLsFilePath_ = nullptr;};
      inline string getRestrictedURLsFilePath() const { DARABONBA_PTR_GET_DEFAULT(restrictedURLsFilePath_, "") };
      inline Network& setRestrictedURLsFilePath(string restrictedURLsFilePath) { DARABONBA_PTR_SET_VALUE(restrictedURLsFilePath_, restrictedURLsFilePath) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Network& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Network& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      // The website access restriction mode.
      // 
      // - `ALLOW_ALL`: Allows access to all domain names.
      // - `ALLOW_LIST`: Allows access only to websites in the allowlist.
      shared_ptr<string> accessRestriction_ {};
      // The ID of the office network that has been created. The office network must belong to the current account and be located in the target region specified by BizRegionId.
      shared_ptr<string> officeSiteId_ {};
      // The list of allowed websites. This parameter is used in `ALLOW_LIST` mode.
      // 
      // **Restrictions:**
      // 
      // - A maximum of 20 URLs can be specified directly. If more than 20 URLs are required, use `RestrictedURLsFilePath` to import them from a file.
      // - This parameter cannot be specified together with `RestrictedURLsFilePath`.
      // - URLs in the list cannot be duplicated.
      shared_ptr<vector<Network::RestrictedURLs>> restrictedURLs_ {};
      // The path of the uploaded website allowlist file. This parameter is used in `ALLOW_LIST` mode.
      // 
      // If more than 20 URLs are required, use file import. A maximum of 1,000 URLs can be configured by default.
      // 
      // This parameter cannot be specified together with `RestrictedURLs`.
      shared_ptr<string> restrictedURLsFilePath_ {};
      // The list of vSwitch IDs.
      // 
      // **Usage condition:** Specify this parameter only when you use a custom office network. Do not specify this parameter for other types of office networks.
      // 
      // Select vSwitches that match the target business region and the custom office network.
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    class BrowserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BrowserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Bookmarks, bookmarks_);
        DARABONBA_PTR_TO_JSON(BookmarksFilePath, bookmarksFilePath_);
        DARABONBA_PTR_TO_JSON(BrowserParam, browserParam_);
        DARABONBA_PTR_TO_JSON(CookiesSync, cookiesSync_);
        DARABONBA_PTR_TO_JSON(Homepage, homepage_);
      };
      friend void from_json(const Darabonba::Json& j, BrowserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Bookmarks, bookmarks_);
        DARABONBA_PTR_FROM_JSON(BookmarksFilePath, bookmarksFilePath_);
        DARABONBA_PTR_FROM_JSON(BrowserParam, browserParam_);
        DARABONBA_PTR_FROM_JSON(CookiesSync, cookiesSync_);
        DARABONBA_PTR_FROM_JSON(Homepage, homepage_);
      };
      BrowserConfig() = default ;
      BrowserConfig(const BrowserConfig &) = default ;
      BrowserConfig(BrowserConfig &&) = default ;
      BrowserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BrowserConfig() = default ;
      BrowserConfig& operator=(const BrowserConfig &) = default ;
      BrowserConfig& operator=(BrowserConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Bookmarks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Bookmarks& obj) { 
          DARABONBA_PTR_TO_JSON(BookmarkFolder, bookmarkFolder_);
          DARABONBA_PTR_TO_JSON(BookmarkName, bookmarkName_);
          DARABONBA_PTR_TO_JSON(BookmarkURL, bookmarkURL_);
        };
        friend void from_json(const Darabonba::Json& j, Bookmarks& obj) { 
          DARABONBA_PTR_FROM_JSON(BookmarkFolder, bookmarkFolder_);
          DARABONBA_PTR_FROM_JSON(BookmarkName, bookmarkName_);
          DARABONBA_PTR_FROM_JSON(BookmarkURL, bookmarkURL_);
        };
        Bookmarks() = default ;
        Bookmarks(const Bookmarks &) = default ;
        Bookmarks(Bookmarks &&) = default ;
        Bookmarks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Bookmarks() = default ;
        Bookmarks& operator=(const Bookmarks &) = default ;
        Bookmarks& operator=(Bookmarks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bookmarkFolder_ == nullptr
        && this->bookmarkName_ == nullptr && this->bookmarkURL_ == nullptr; };
        // bookmarkFolder Field Functions 
        bool hasBookmarkFolder() const { return this->bookmarkFolder_ != nullptr;};
        void deleteBookmarkFolder() { this->bookmarkFolder_ = nullptr;};
        inline string getBookmarkFolder() const { DARABONBA_PTR_GET_DEFAULT(bookmarkFolder_, "") };
        inline Bookmarks& setBookmarkFolder(string bookmarkFolder) { DARABONBA_PTR_SET_VALUE(bookmarkFolder_, bookmarkFolder) };


        // bookmarkName Field Functions 
        bool hasBookmarkName() const { return this->bookmarkName_ != nullptr;};
        void deleteBookmarkName() { this->bookmarkName_ = nullptr;};
        inline string getBookmarkName() const { DARABONBA_PTR_GET_DEFAULT(bookmarkName_, "") };
        inline Bookmarks& setBookmarkName(string bookmarkName) { DARABONBA_PTR_SET_VALUE(bookmarkName_, bookmarkName) };


        // bookmarkURL Field Functions 
        bool hasBookmarkURL() const { return this->bookmarkURL_ != nullptr;};
        void deleteBookmarkURL() { this->bookmarkURL_ = nullptr;};
        inline string getBookmarkURL() const { DARABONBA_PTR_GET_DEFAULT(bookmarkURL_, "") };
        inline Bookmarks& setBookmarkURL(string bookmarkURL) { DARABONBA_PTR_SET_VALUE(bookmarkURL_, bookmarkURL) };


      protected:
        // The folder in which the bookmark is located. The length after trimming leading and trailing whitespace cannot exceed 64 characters.
        shared_ptr<string> bookmarkFolder_ {};
        // The bookmark name. This parameter is required and cannot be empty when you create a bookmark. The length after trimming leading and trailing whitespace cannot exceed 64 characters.
        // 
        // This parameter is required.
        shared_ptr<string> bookmarkName_ {};
        // The URL of the bookmark. This parameter is required when you create a bookmark. The length after trimming leading and trailing whitespace cannot exceed 1024 characters.
        // 
        // This parameter is required.
        shared_ptr<string> bookmarkURL_ {};
      };

      virtual bool empty() const override { return this->bookmarks_ == nullptr
        && this->bookmarksFilePath_ == nullptr && this->browserParam_ == nullptr && this->cookiesSync_ == nullptr && this->homepage_ == nullptr; };
      // bookmarks Field Functions 
      bool hasBookmarks() const { return this->bookmarks_ != nullptr;};
      void deleteBookmarks() { this->bookmarks_ = nullptr;};
      inline const vector<BrowserConfig::Bookmarks> & getBookmarks() const { DARABONBA_PTR_GET_CONST(bookmarks_, vector<BrowserConfig::Bookmarks>) };
      inline vector<BrowserConfig::Bookmarks> getBookmarks() { DARABONBA_PTR_GET(bookmarks_, vector<BrowserConfig::Bookmarks>) };
      inline BrowserConfig& setBookmarks(const vector<BrowserConfig::Bookmarks> & bookmarks) { DARABONBA_PTR_SET_VALUE(bookmarks_, bookmarks) };
      inline BrowserConfig& setBookmarks(vector<BrowserConfig::Bookmarks> && bookmarks) { DARABONBA_PTR_SET_RVALUE(bookmarks_, bookmarks) };


      // bookmarksFilePath Field Functions 
      bool hasBookmarksFilePath() const { return this->bookmarksFilePath_ != nullptr;};
      void deleteBookmarksFilePath() { this->bookmarksFilePath_ = nullptr;};
      inline string getBookmarksFilePath() const { DARABONBA_PTR_GET_DEFAULT(bookmarksFilePath_, "") };
      inline BrowserConfig& setBookmarksFilePath(string bookmarksFilePath) { DARABONBA_PTR_SET_VALUE(bookmarksFilePath_, bookmarksFilePath) };


      // browserParam Field Functions 
      bool hasBrowserParam() const { return this->browserParam_ != nullptr;};
      void deleteBrowserParam() { this->browserParam_ = nullptr;};
      inline string getBrowserParam() const { DARABONBA_PTR_GET_DEFAULT(browserParam_, "") };
      inline BrowserConfig& setBrowserParam(string browserParam) { DARABONBA_PTR_SET_VALUE(browserParam_, browserParam) };


      // cookiesSync Field Functions 
      bool hasCookiesSync() const { return this->cookiesSync_ != nullptr;};
      void deleteCookiesSync() { this->cookiesSync_ = nullptr;};
      inline bool getCookiesSync() const { DARABONBA_PTR_GET_DEFAULT(cookiesSync_, false) };
      inline BrowserConfig& setCookiesSync(bool cookiesSync) { DARABONBA_PTR_SET_VALUE(cookiesSync_, cookiesSync) };


      // homepage Field Functions 
      bool hasHomepage() const { return this->homepage_ != nullptr;};
      void deleteHomepage() { this->homepage_ = nullptr;};
      inline string getHomepage() const { DARABONBA_PTR_GET_DEFAULT(homepage_, "") };
      inline BrowserConfig& setHomepage(string homepage) { DARABONBA_PTR_SET_VALUE(homepage_, homepage) };


    protected:
      // The list of browser bookmarks.
      // 
      // **Limit:** Cannot be specified together with a non-empty `BookmarksFilePath`. Bookmark URLs must be unique.
      shared_ptr<vector<BrowserConfig::Bookmarks>> bookmarks_ {};
      // The path of the uploaded bookmark file. Cannot be specified together with a non-empty `Bookmarks`.
      // 
      // **File format:** A headerless CSV file with four columns in the following order:
      // 
      // 1. Bookmark name.
      // 2. URL.
      // 3. Folder.
      // 4. Root directory type: `bookmark_bar` indicates the bookmarks bar, and `other` indicates other bookmarks.
      // 
      // **Limits:**
      // 
      // - Fields are separated by commas. Field values cannot contain commas or line breaks. Quote escaping is not supported.
      // - The file path must belong to the upload directory specified for the current account and cannot contain `..`.
      shared_ptr<string> bookmarksFilePath_ {};
      // The browser startup parameters. For example, --incognito opens the browser in incognito mode.
      shared_ptr<string> browserParam_ {};
      // Specifies whether to synchronize cookies.
      shared_ptr<bool> cookiesSync_ {};
      // The homepage URL that opens when the browser starts. The value must conform to URI syntax.
      shared_ptr<string> homepage_ {};
    };

    virtual bool empty() const override { return this->appPackageType_ == nullptr
        && this->authNotificationEnabled_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bizRegionId_ == nullptr && this->browserConfig_ == nullptr
        && this->chargeResourceMode_ == nullptr && this->chargeType_ == nullptr && this->cloudBrowserName_ == nullptr && this->imageId_ == nullptr && this->instanceType_ == nullptr
        && this->maxAmount_ == nullptr && this->network_ == nullptr && this->nodePool_ == nullptr && this->osType_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->policy_ == nullptr && this->promotionId_ == nullptr && this->securityPolicy_ == nullptr && this->storagePolicy_ == nullptr
        && this->subPayType_ == nullptr && this->tag_ == nullptr && this->timers_ == nullptr && this->userGroupIds_ == nullptr && this->userInfo_ == nullptr
        && this->users_ == nullptr; };
    // appPackageType Field Functions 
    bool hasAppPackageType() const { return this->appPackageType_ != nullptr;};
    void deleteAppPackageType() { this->appPackageType_ = nullptr;};
    inline string getAppPackageType() const { DARABONBA_PTR_GET_DEFAULT(appPackageType_, "") };
    inline CreateBrowserInstanceGroupRequest& setAppPackageType(string appPackageType) { DARABONBA_PTR_SET_VALUE(appPackageType_, appPackageType) };


    // authNotificationEnabled Field Functions 
    bool hasAuthNotificationEnabled() const { return this->authNotificationEnabled_ != nullptr;};
    void deleteAuthNotificationEnabled() { this->authNotificationEnabled_ = nullptr;};
    inline bool getAuthNotificationEnabled() const { DARABONBA_PTR_GET_DEFAULT(authNotificationEnabled_, false) };
    inline CreateBrowserInstanceGroupRequest& setAuthNotificationEnabled(bool authNotificationEnabled) { DARABONBA_PTR_SET_VALUE(authNotificationEnabled_, authNotificationEnabled) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateBrowserInstanceGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateBrowserInstanceGroupRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateBrowserInstanceGroupRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // browserConfig Field Functions 
    bool hasBrowserConfig() const { return this->browserConfig_ != nullptr;};
    void deleteBrowserConfig() { this->browserConfig_ = nullptr;};
    inline const CreateBrowserInstanceGroupRequest::BrowserConfig & getBrowserConfig() const { DARABONBA_PTR_GET_CONST(browserConfig_, CreateBrowserInstanceGroupRequest::BrowserConfig) };
    inline CreateBrowserInstanceGroupRequest::BrowserConfig getBrowserConfig() { DARABONBA_PTR_GET(browserConfig_, CreateBrowserInstanceGroupRequest::BrowserConfig) };
    inline CreateBrowserInstanceGroupRequest& setBrowserConfig(const CreateBrowserInstanceGroupRequest::BrowserConfig & browserConfig) { DARABONBA_PTR_SET_VALUE(browserConfig_, browserConfig) };
    inline CreateBrowserInstanceGroupRequest& setBrowserConfig(CreateBrowserInstanceGroupRequest::BrowserConfig && browserConfig) { DARABONBA_PTR_SET_RVALUE(browserConfig_, browserConfig) };


    // chargeResourceMode Field Functions 
    bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
    void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
    inline string getChargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
    inline CreateBrowserInstanceGroupRequest& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateBrowserInstanceGroupRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cloudBrowserName Field Functions 
    bool hasCloudBrowserName() const { return this->cloudBrowserName_ != nullptr;};
    void deleteCloudBrowserName() { this->cloudBrowserName_ = nullptr;};
    inline string getCloudBrowserName() const { DARABONBA_PTR_GET_DEFAULT(cloudBrowserName_, "") };
    inline CreateBrowserInstanceGroupRequest& setCloudBrowserName(string cloudBrowserName) { DARABONBA_PTR_SET_VALUE(cloudBrowserName_, cloudBrowserName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateBrowserInstanceGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateBrowserInstanceGroupRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxAmount Field Functions 
    bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
    void deleteMaxAmount() { this->maxAmount_ = nullptr;};
    inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
    inline CreateBrowserInstanceGroupRequest& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const CreateBrowserInstanceGroupRequest::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, CreateBrowserInstanceGroupRequest::Network) };
    inline CreateBrowserInstanceGroupRequest::Network getNetwork() { DARABONBA_PTR_GET(network_, CreateBrowserInstanceGroupRequest::Network) };
    inline CreateBrowserInstanceGroupRequest& setNetwork(const CreateBrowserInstanceGroupRequest::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline CreateBrowserInstanceGroupRequest& setNetwork(CreateBrowserInstanceGroupRequest::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const CreateBrowserInstanceGroupRequest::NodePool & getNodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, CreateBrowserInstanceGroupRequest::NodePool) };
    inline CreateBrowserInstanceGroupRequest::NodePool getNodePool() { DARABONBA_PTR_GET(nodePool_, CreateBrowserInstanceGroupRequest::NodePool) };
    inline CreateBrowserInstanceGroupRequest& setNodePool(const CreateBrowserInstanceGroupRequest::NodePool & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline CreateBrowserInstanceGroupRequest& setNodePool(CreateBrowserInstanceGroupRequest::NodePool && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline CreateBrowserInstanceGroupRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateBrowserInstanceGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateBrowserInstanceGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const CreateBrowserInstanceGroupRequest::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, CreateBrowserInstanceGroupRequest::Policy) };
    inline CreateBrowserInstanceGroupRequest::Policy getPolicy() { DARABONBA_PTR_GET(policy_, CreateBrowserInstanceGroupRequest::Policy) };
    inline CreateBrowserInstanceGroupRequest& setPolicy(const CreateBrowserInstanceGroupRequest::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline CreateBrowserInstanceGroupRequest& setPolicy(CreateBrowserInstanceGroupRequest::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateBrowserInstanceGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // securityPolicy Field Functions 
    bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
    void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
    inline const CreateBrowserInstanceGroupRequest::SecurityPolicy & getSecurityPolicy() const { DARABONBA_PTR_GET_CONST(securityPolicy_, CreateBrowserInstanceGroupRequest::SecurityPolicy) };
    inline CreateBrowserInstanceGroupRequest::SecurityPolicy getSecurityPolicy() { DARABONBA_PTR_GET(securityPolicy_, CreateBrowserInstanceGroupRequest::SecurityPolicy) };
    inline CreateBrowserInstanceGroupRequest& setSecurityPolicy(const CreateBrowserInstanceGroupRequest::SecurityPolicy & securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };
    inline CreateBrowserInstanceGroupRequest& setSecurityPolicy(CreateBrowserInstanceGroupRequest::SecurityPolicy && securityPolicy) { DARABONBA_PTR_SET_RVALUE(securityPolicy_, securityPolicy) };


    // storagePolicy Field Functions 
    bool hasStoragePolicy() const { return this->storagePolicy_ != nullptr;};
    void deleteStoragePolicy() { this->storagePolicy_ = nullptr;};
    inline const CreateBrowserInstanceGroupRequest::StoragePolicy & getStoragePolicy() const { DARABONBA_PTR_GET_CONST(storagePolicy_, CreateBrowserInstanceGroupRequest::StoragePolicy) };
    inline CreateBrowserInstanceGroupRequest::StoragePolicy getStoragePolicy() { DARABONBA_PTR_GET(storagePolicy_, CreateBrowserInstanceGroupRequest::StoragePolicy) };
    inline CreateBrowserInstanceGroupRequest& setStoragePolicy(const CreateBrowserInstanceGroupRequest::StoragePolicy & storagePolicy) { DARABONBA_PTR_SET_VALUE(storagePolicy_, storagePolicy) };
    inline CreateBrowserInstanceGroupRequest& setStoragePolicy(CreateBrowserInstanceGroupRequest::StoragePolicy && storagePolicy) { DARABONBA_PTR_SET_RVALUE(storagePolicy_, storagePolicy) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline CreateBrowserInstanceGroupRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateBrowserInstanceGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateBrowserInstanceGroupRequest::Tag>) };
    inline vector<CreateBrowserInstanceGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateBrowserInstanceGroupRequest::Tag>) };
    inline CreateBrowserInstanceGroupRequest& setTag(const vector<CreateBrowserInstanceGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateBrowserInstanceGroupRequest& setTag(vector<CreateBrowserInstanceGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timers Field Functions 
    bool hasTimers() const { return this->timers_ != nullptr;};
    void deleteTimers() { this->timers_ = nullptr;};
    inline const vector<CreateBrowserInstanceGroupRequest::Timers> & getTimers() const { DARABONBA_PTR_GET_CONST(timers_, vector<CreateBrowserInstanceGroupRequest::Timers>) };
    inline vector<CreateBrowserInstanceGroupRequest::Timers> getTimers() { DARABONBA_PTR_GET(timers_, vector<CreateBrowserInstanceGroupRequest::Timers>) };
    inline CreateBrowserInstanceGroupRequest& setTimers(const vector<CreateBrowserInstanceGroupRequest::Timers> & timers) { DARABONBA_PTR_SET_VALUE(timers_, timers) };
    inline CreateBrowserInstanceGroupRequest& setTimers(vector<CreateBrowserInstanceGroupRequest::Timers> && timers) { DARABONBA_PTR_SET_RVALUE(timers_, timers) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateBrowserInstanceGroupRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateBrowserInstanceGroupRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateBrowserInstanceGroupRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateBrowserInstanceGroupRequest::UserInfo) };
    inline CreateBrowserInstanceGroupRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CreateBrowserInstanceGroupRequest::UserInfo) };
    inline CreateBrowserInstanceGroupRequest& setUserInfo(const CreateBrowserInstanceGroupRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateBrowserInstanceGroupRequest& setUserInfo(CreateBrowserInstanceGroupRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CreateBrowserInstanceGroupRequest::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<CreateBrowserInstanceGroupRequest::Users>) };
    inline vector<CreateBrowserInstanceGroupRequest::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<CreateBrowserInstanceGroupRequest::Users>) };
    inline CreateBrowserInstanceGroupRequest& setUsers(const vector<CreateBrowserInstanceGroupRequest::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateBrowserInstanceGroupRequest& setUsers(vector<CreateBrowserInstanceGroupRequest::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The plan identifier.
    // 
    // Do not specify this parameter.
    shared_ptr<string> appPackageType_ {};
    // Specifies whether to send authorization and deauthorization notification emails.
    // 
    // - `true`: Sends the notification.
    // - `false`: Does not send the notification.
    shared_ptr<bool> authNotificationEnabled_ {};
    // The automatic payment parameter.
    // 
    // Do not specify this parameter.
    shared_ptr<bool> autoPay_ {};
    // The auto-renewal parameter.
    // 
    // Do not specify this parameter.
    shared_ptr<bool> autoRenew_ {};
    // The business region ID. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The browser configuration.
    shared_ptr<CreateBrowserInstanceGroupRequest::BrowserConfig> browserConfig_ {};
    // The resource billing mode.
    // 
    // **For MAU scenarios:** Set this parameter to `AppInstance` to bill by instance resource.
    shared_ptr<string> chargeResourceMode_ {};
    // The billing type.
    // 
    // **For MAU scenarios:** Set this parameter to `PostPaid`, which indicates pay-as-you-go billing.
    shared_ptr<string> chargeType_ {};
    // The name of the cloud browser group. This parameter cannot be empty. The name is used to distinguish different browser groups in business management scenarios.
    // 
    // This parameter is required.
    shared_ptr<string> cloudBrowserName_ {};
    // The image identifier used by the cloud browser. The image must be compatible with the operating system.
    // 
    // If this parameter is omitted, the default image available for the account is used. If no default image is available, the creation may fail.
    // 
    // **Usage condition:** When `CookiesSync` is enabled, explicitly specify an image that supports cookie synchronization.
    shared_ptr<string> imageId_ {};
    // The instance type identifier. Select an instance type that matches the target region, operating system, and inventory conditions.
    // 
    // If this parameter is omitted, the default instance type is used.
    shared_ptr<string> instanceType_ {};
    // The capacity configuration for the MAU billing scenario.
    shared_ptr<int32_t> maxAmount_ {};
    // The office network and website access restriction configurations. The selected office network must belong to the current account and be located in the region specified by `BizRegionId`.
    shared_ptr<CreateBrowserInstanceGroupRequest::Network> network_ {};
    // The node pool configuration.
    // 
    // You do not need to specify this parameter.
    shared_ptr<CreateBrowserInstanceGroupRequest::NodePool> nodePool_ {};
    // The operating system type. This parameter is required.
    // 
    // Only `Windows` is supported. Other operating systems are not supported.
    shared_ptr<string> osType_ {};
    // The number of subscription periods.
    // 
    // Do not specify this parameter.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period.
    // 
    // Do not specify this parameter.
    shared_ptr<string> periodUnit_ {};
    // The clipboard, video, watermark, session, and client access policy configurations.
    shared_ptr<CreateBrowserInstanceGroupRequest::Policy> policy_ {};
    // The promotion ID. Specifies the promotional campaign to apply to the order.
    // 
    // Whether the promotion is applicable depends on the campaign rules. Do not specify this parameter if no promotional campaign is used.
    shared_ptr<string> promotionId_ {};
    // The connection security policy for the browser group.
    shared_ptr<CreateBrowserInstanceGroupRequest::SecurityPolicy> securityPolicy_ {};
    // The user data storage configuration for the browser group.
    shared_ptr<CreateBrowserInstanceGroupRequest::StoragePolicy> storagePolicy_ {};
    // The billing subtype.
    // 
    // **Set this parameter to `mau` explicitly, which indicates billing by monthly active users.** Omitting this field does not enable MAU billing.
    shared_ptr<string> subPayType_ {};
    // Not supported. You do not need to specify this parameter.
    shared_ptr<vector<CreateBrowserInstanceGroupRequest::Tag>> tag_ {};
    // Not supported. You do not need to specify this parameter.
    shared_ptr<vector<CreateBrowserInstanceGroupRequest::Timers>> timers_ {};
    // The list of authorized user group identifiers. A maximum of 10 items are supported. The user groups must belong to the current account and match the workspace network account type.
    // 
    // **Limit:** Cannot be specified together with a non-empty `Users`.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The authorized user account information. The value must match the user and workspace network type.
    shared_ptr<CreateBrowserInstanceGroupRequest::UserInfo> userInfo_ {};
    // The list of authorized users. A maximum of 200 users can be specified. Users must be created in advance and must match the account type.
    // 
    // **Restriction:** This parameter cannot be specified together with a non-empty `UserGroupIds`.
    shared_ptr<vector<CreateBrowserInstanceGroupRequest::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
