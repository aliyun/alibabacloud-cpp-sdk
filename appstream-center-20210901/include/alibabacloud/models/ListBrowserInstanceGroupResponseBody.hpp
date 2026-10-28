// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERINSTANCEGROUPRESPONSEBODY_HPP_
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
  class ListBrowserInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowserInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupModels, browserInstanceGroupModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowserInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupModels, browserInstanceGroupModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBrowserInstanceGroupResponseBody() = default ;
    ListBrowserInstanceGroupResponseBody(const ListBrowserInstanceGroupResponseBody &) = default ;
    ListBrowserInstanceGroupResponseBody(ListBrowserInstanceGroupResponseBody &&) = default ;
    ListBrowserInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowserInstanceGroupResponseBody() = default ;
    ListBrowserInstanceGroupResponseBody& operator=(const ListBrowserInstanceGroupResponseBody &) = default ;
    ListBrowserInstanceGroupResponseBody& operator=(ListBrowserInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BrowserInstanceGroupModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BrowserInstanceGroupModels& obj) { 
        DARABONBA_PTR_TO_JSON(AuthNotificationEnabled, authNotificationEnabled_);
        DARABONBA_PTR_TO_JSON(AuthorizedUserInfo, authorizedUserInfo_);
        DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
        DARABONBA_PTR_TO_JSON(BrowserConfig, browserConfig_);
        DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(BrowserInstanceGroupName, browserInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(BrowserInstanceGroupSetId, browserInstanceGroupSetId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(DefaultAccessUrl, defaultAccessUrl_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Homepage, homepage_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_TO_JSON(SupportUserGroupMixedAuth, supportUserGroupMixedAuth_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Tier, tier_);
        DARABONBA_PTR_TO_JSON(Timers, timers_);
        DARABONBA_PTR_TO_JSON(UserGroupAuthMode, userGroupAuthMode_);
        DARABONBA_PTR_TO_JSON(UserLimit, userLimit_);
      };
      friend void from_json(const Darabonba::Json& j, BrowserInstanceGroupModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthNotificationEnabled, authNotificationEnabled_);
        DARABONBA_PTR_FROM_JSON(AuthorizedUserInfo, authorizedUserInfo_);
        DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
        DARABONBA_PTR_FROM_JSON(BrowserConfig, browserConfig_);
        DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupName, browserInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupSetId, browserInstanceGroupSetId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(DefaultAccessUrl, defaultAccessUrl_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Homepage, homepage_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_FROM_JSON(SupportUserGroupMixedAuth, supportUserGroupMixedAuth_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Tier, tier_);
        DARABONBA_PTR_FROM_JSON(Timers, timers_);
        DARABONBA_PTR_FROM_JSON(UserGroupAuthMode, userGroupAuthMode_);
        DARABONBA_PTR_FROM_JSON(UserLimit, userLimit_);
      };
      BrowserInstanceGroupModels() = default ;
      BrowserInstanceGroupModels(const BrowserInstanceGroupModels &) = default ;
      BrowserInstanceGroupModels(BrowserInstanceGroupModels &&) = default ;
      BrowserInstanceGroupModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BrowserInstanceGroupModels() = default ;
      BrowserInstanceGroupModels& operator=(const BrowserInstanceGroupModels &) = default ;
      BrowserInstanceGroupModels& operator=(BrowserInstanceGroupModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserLimit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserLimit& obj) { 
          DARABONBA_PTR_TO_JSON(UserQuota, userQuota_);
        };
        friend void from_json(const Darabonba::Json& j, UserLimit& obj) { 
          DARABONBA_PTR_FROM_JSON(UserQuota, userQuota_);
        };
        UserLimit() = default ;
        UserLimit(const UserLimit &) = default ;
        UserLimit(UserLimit &&) = default ;
        UserLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserLimit() = default ;
        UserLimit& operator=(const UserLimit &) = default ;
        UserLimit& operator=(UserLimit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userQuota_ == nullptr; };
        // userQuota Field Functions 
        bool hasUserQuota() const { return this->userQuota_ != nullptr;};
        void deleteUserQuota() { this->userQuota_ = nullptr;};
        inline int32_t getUserQuota() const { DARABONBA_PTR_GET_DEFAULT(userQuota_, 0) };
        inline UserLimit& setUserQuota(int32_t userQuota) { DARABONBA_PTR_SET_VALUE(userQuota_, userQuota) };


      protected:
        // The number of user quotas.
        shared_ptr<int32_t> userQuota_ {};
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
        // The session retention duration after disconnection, in minutes. A value of `-1` indicates that the session is not unbound due to the timeout of this duration, but is still affected by authorization and other session release policies.
        shared_ptr<int32_t> interval_ {};
        // The timer configuration type. A value of `SESSION_TIMEOUT` indicates the session retention duration after disconnection.
        shared_ptr<string> timerType_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Policy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policy& obj) { 
          DARABONBA_PTR_TO_JSON(AppContentProtection, appContentProtection_);
          DARABONBA_PTR_TO_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
          DARABONBA_PTR_TO_JSON(ClientTypes, clientTypes_);
          DARABONBA_PTR_TO_JSON(ClipboardPolicy, clipboardPolicy_);
          DARABONBA_PTR_TO_JSON(MultiScreen, multiScreen_);
          DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
          DARABONBA_PTR_TO_JSON(WatermarkPolicy, watermarkPolicy_);
        };
        friend void from_json(const Darabonba::Json& j, Policy& obj) { 
          DARABONBA_PTR_FROM_JSON(AppContentProtection, appContentProtection_);
          DARABONBA_PTR_FROM_JSON(AuthorizeAccessPolicyRules, authorizeAccessPolicyRules_);
          DARABONBA_PTR_FROM_JSON(ClientTypes, clientTypes_);
          DARABONBA_PTR_FROM_JSON(ClipboardPolicy, clipboardPolicy_);
          DARABONBA_PTR_FROM_JSON(MultiScreen, multiScreen_);
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
          // The watermark switch. The value is case-insensitive. Valid values:
          // 
          // - `ON`: Enables the watermark.
          // - `OFF`: Disables the watermark.
          // 
          // If the watermark is disabled, the watermark content type list is not used.
          shared_ptr<string> watermarkSwitch_ {};
          // The list of watermark content types. Valid values:
          // 
          // - `EndUserId`: The user identifier.
          // - `InstanceGroupId`: The delivery group identifier.
          // - `ClientTime`: The current time of the client.
          // 
          // Use the watermark types supported by the browser and the client.
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
          // The frame rate for browser sessions.
          shared_ptr<int32_t> frameRate_ {};
        };

        class ClipboardPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClipboardPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
          };
          friend void from_json(const Darabonba::Json& j, ClipboardPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
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
          virtual bool empty() const override { return this->clipboard_ == nullptr; };
          // clipboard Field Functions 
          bool hasClipboard() const { return this->clipboard_ != nullptr;};
          void deleteClipboard() { this->clipboard_ = nullptr;};
          inline string getClipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
          inline ClipboardPolicy& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


        protected:
          // The clipboard transfer direction. The value is not case-sensitive. Valid values:
          // 
          // - `off`: Prohibits transfer in both directions.
          // - `read`: Allows copy and paste from the local PC to the cloud browser.
          // - `write`: Allows copy and paste from the cloud browser to the local PC.
          // - `readwrite`: Allows transfer in both directions.
          shared_ptr<string> clipboard_ {};
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
          // The client type. Valid values:
          // 
          // - `windows`: Windows client.
          // - `macos`: macOS client.
          // - `html5`: Web client.
          // - `linux`: Linux client.
          // - `android`: Android client.
          // - `ios`: iOS client.
          // 
          // This field reflects the existing access configurations and does not indicate that all clients are currently available for the product.
          shared_ptr<string> clientType_ {};
          // The access policy switch for the client type. Valid values:
          // 
          // - `on`: Allows access from this type of client.
          // - `off`: Denies access from this type of client.
          shared_ptr<string> status_ {};
        };

        class AuthorizeAccessPolicyRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorizeAccessPolicyRules& obj) { 
            DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Policy, policy_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorizeAccessPolicyRules& obj) { 
            DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Policy, policy_);
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
        && this->description_ == nullptr && this->policy_ == nullptr; };
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


          // policy Field Functions 
          bool hasPolicy() const { return this->policy_ != nullptr;};
          void deletePolicy() { this->policy_ = nullptr;};
          inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
          inline AuthorizeAccessPolicyRules& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


        protected:
          // The source CIDR block of the client that is allowed to access.
          shared_ptr<string> cidrIp_ {};
          // The description of the client access rule.
          shared_ptr<string> description_ {};
          // The action of the client access rule. Valid values:
          // 
          // - `allow`: Allows access.
          // - `deny`: Denies access.
          shared_ptr<string> policy_ {};
        };

        virtual bool empty() const override { return this->appContentProtection_ == nullptr
        && this->authorizeAccessPolicyRules_ == nullptr && this->clientTypes_ == nullptr && this->clipboardPolicy_ == nullptr && this->multiScreen_ == nullptr && this->videoPolicy_ == nullptr
        && this->watermarkPolicy_ == nullptr; };
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


        // multiScreen Field Functions 
        bool hasMultiScreen() const { return this->multiScreen_ != nullptr;};
        void deleteMultiScreen() { this->multiScreen_ = nullptr;};
        inline string getMultiScreen() const { DARABONBA_PTR_GET_DEFAULT(multiScreen_, "") };
        inline Policy& setMultiScreen(string multiScreen) { DARABONBA_PTR_SET_VALUE(multiScreen_, multiScreen) };


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
        // The screen capture prevention switch. Valid values:
        // 
        // - `on`: Enables screen capture prevention.
        // - `off`: Disables screen capture prevention.
        shared_ptr<string> appContentProtection_ {};
        // The IP address whitelist rules for client access.
        shared_ptr<vector<Policy::AuthorizeAccessPolicyRules>> authorizeAccessPolicyRules_ {};
        // The list of client access control configurations.
        shared_ptr<vector<Policy::ClientTypes>> clientTypes_ {};
        // Sets the clipboard transfer direction, content type, and size limit. `read` indicates transfer from the local PC to the cloud browser, and `write` indicates transfer from the cloud browser to the local PC.
        shared_ptr<Policy::ClipboardPolicy> clipboardPolicy_ {};
        // The dual-screen switch for the cloud browser.
        shared_ptr<string> multiScreen_ {};
        // The video display policy for browser sessions.
        shared_ptr<Policy::VideoPolicy> videoPolicy_ {};
        // The watermark display configuration for browser sessions.
        shared_ptr<Policy::WatermarkPolicy> watermarkPolicy_ {};
      };

      class Network : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Network& obj) { 
          DARABONBA_PTR_TO_JSON(AccessRestriction, accessRestriction_);
          DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        };
        friend void from_json(const Darabonba::Json& j, Network& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessRestriction, accessRestriction_);
          DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
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
        virtual bool empty() const override { return this->accessRestriction_ == nullptr
        && this->officeSiteId_ == nullptr && this->vSwitchIds_ == nullptr; };
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


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
        inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
        inline Network& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline Network& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      protected:
        // The website access restriction mode. Valid values:
        // 
        // - `ALLOW_ALL`: Allows all domain names.
        // - `ALLOW_LIST`: Allows only websites in the whitelist.
        // 
        // The returned value reflects the existing configuration of the browser instance group.
        shared_ptr<string> accessRestriction_ {};
        // The ID of the office network to which the browser instance group belongs.
        shared_ptr<string> officeSiteId_ {};
        // The list of vSwitch IDs used by the browser instance group. This parameter is available for scenarios where a custom network is configured.
        shared_ptr<vector<string>> vSwitchIds_ {};
      };

      class Duration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Duration& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPayStage, currentPayStage_);
          DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(UsedDuration, usedDuration_);
        };
        friend void from_json(const Darabonba::Json& j, Duration& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPayStage, currentPayStage_);
          DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
          DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(UsedDuration, usedDuration_);
        };
        Duration() = default ;
        Duration(const Duration &) = default ;
        Duration(Duration &&) = default ;
        Duration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Duration() = default ;
        Duration& operator=(const Duration &) = default ;
        Duration& operator=(Duration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPayStage_ == nullptr
        && this->periodEndTime_ == nullptr && this->periodStartTime_ == nullptr && this->totalDuration_ == nullptr && this->usedDuration_ == nullptr; };
        // currentPayStage Field Functions 
        bool hasCurrentPayStage() const { return this->currentPayStage_ != nullptr;};
        void deleteCurrentPayStage() { this->currentPayStage_ = nullptr;};
        inline string getCurrentPayStage() const { DARABONBA_PTR_GET_DEFAULT(currentPayStage_, "") };
        inline Duration& setCurrentPayStage(string currentPayStage) { DARABONBA_PTR_SET_VALUE(currentPayStage_, currentPayStage) };


        // periodEndTime Field Functions 
        bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
        void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
        inline string getPeriodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
        inline Duration& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


        // periodStartTime Field Functions 
        bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
        void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
        inline string getPeriodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
        inline Duration& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int32_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0) };
        inline Duration& setTotalDuration(int32_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // usedDuration Field Functions 
        bool hasUsedDuration() const { return this->usedDuration_ != nullptr;};
        void deleteUsedDuration() { this->usedDuration_ = nullptr;};
        inline int32_t getUsedDuration() const { DARABONBA_PTR_GET_DEFAULT(usedDuration_, 0) };
        inline Duration& setUsedDuration(int32_t usedDuration) { DARABONBA_PTR_SET_VALUE(usedDuration_, usedDuration) };


      protected:
        // The current payment stage of the package. This parameter is not applicable to the MAU scenario.
        shared_ptr<string> currentPayStage_ {};
        // The end time of the package cycle. This parameter is not applicable to the MAU scenario and is not returned.
        shared_ptr<string> periodEndTime_ {};
        // The start time of the package cycle. This parameter is not applicable to the MAU scenario and is not returned.
        shared_ptr<string> periodStartTime_ {};
        // The total duration of the package, in seconds. This parameter is not applicable to the MAU scenario.
        shared_ptr<int32_t> totalDuration_ {};
        // The used duration of the package, in seconds. This parameter is not applicable to the MAU scenario.
        shared_ptr<int32_t> usedDuration_ {};
      };

      class BrowserConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BrowserConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BrowserParam, browserParam_);
          DARABONBA_PTR_TO_JSON(CookiesSync, cookiesSync_);
          DARABONBA_PTR_TO_JSON(Homepage, homepage_);
        };
        friend void from_json(const Darabonba::Json& j, BrowserConfig& obj) { 
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
        virtual bool empty() const override { return this->browserParam_ == nullptr
        && this->cookiesSync_ == nullptr && this->homepage_ == nullptr; };
        // browserParam Field Functions 
        bool hasBrowserParam() const { return this->browserParam_ != nullptr;};
        void deleteBrowserParam() { this->browserParam_ = nullptr;};
        inline string getBrowserParam() const { DARABONBA_PTR_GET_DEFAULT(browserParam_, "") };
        inline BrowserConfig& setBrowserParam(string browserParam) { DARABONBA_PTR_SET_VALUE(browserParam_, browserParam) };


        // cookiesSync Field Functions 
        bool hasCookiesSync() const { return this->cookiesSync_ != nullptr;};
        void deleteCookiesSync() { this->cookiesSync_ = nullptr;};
        inline string getCookiesSync() const { DARABONBA_PTR_GET_DEFAULT(cookiesSync_, "") };
        inline BrowserConfig& setCookiesSync(string cookiesSync) { DARABONBA_PTR_SET_VALUE(cookiesSync_, cookiesSync) };


        // homepage Field Functions 
        bool hasHomepage() const { return this->homepage_ != nullptr;};
        void deleteHomepage() { this->homepage_ = nullptr;};
        inline string getHomepage() const { DARABONBA_PTR_GET_DEFAULT(homepage_, "") };
        inline BrowserConfig& setHomepage(string homepage) { DARABONBA_PTR_SET_VALUE(homepage_, homepage) };


      protected:
        // The browser startup parameters. For example, `--incognito` specifies an incognito window.
        shared_ptr<string> browserParam_ {};
        // The cookie synchronization configuration. A value of `true` indicates that synchronization is enabled. A value of `false` indicates that synchronization is disabled.
        shared_ptr<string> cookiesSync_ {};
        // The homepage URL that opens when the browser starts.
        shared_ptr<string> homepage_ {};
      };

      class AuthorizedUserInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizedUserInfo& obj) { 
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(TotalUserGroupCount, totalUserGroupCount_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizedUserInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(TotalUserGroupCount, totalUserGroupCount_);
        };
        AuthorizedUserInfo() = default ;
        AuthorizedUserInfo(const AuthorizedUserInfo &) = default ;
        AuthorizedUserInfo(AuthorizedUserInfo &&) = default ;
        AuthorizedUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizedUserInfo() = default ;
        AuthorizedUserInfo& operator=(const AuthorizedUserInfo &) = default ;
        AuthorizedUserInfo& operator=(AuthorizedUserInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->totalCount_ == nullptr
        && this->totalUserGroupCount_ == nullptr; };
        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline AuthorizedUserInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // totalUserGroupCount Field Functions 
        bool hasTotalUserGroupCount() const { return this->totalUserGroupCount_ != nullptr;};
        void deleteTotalUserGroupCount() { this->totalUserGroupCount_ = nullptr;};
        inline int32_t getTotalUserGroupCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserGroupCount_, 0) };
        inline AuthorizedUserInfo& setTotalUserGroupCount(int32_t totalUserGroupCount) { DARABONBA_PTR_SET_VALUE(totalUserGroupCount_, totalUserGroupCount) };


      protected:
        // The total number of authorized users.
        shared_ptr<int32_t> totalCount_ {};
        // The total number of authorized user groups.
        shared_ptr<int32_t> totalUserGroupCount_ {};
      };

      virtual bool empty() const override { return this->authNotificationEnabled_ == nullptr
        && this->authorizedUserInfo_ == nullptr && this->bizRegionId_ == nullptr && this->browserConfig_ == nullptr && this->browserInstanceGroupId_ == nullptr && this->browserInstanceGroupName_ == nullptr
        && this->browserInstanceGroupSetId_ == nullptr && this->chargeType_ == nullptr && this->defaultAccessUrl_ == nullptr && this->duration_ == nullptr && this->expiredTime_ == nullptr
        && this->gmtCreate_ == nullptr && this->homepage_ == nullptr && this->imageId_ == nullptr && this->instanceType_ == nullptr && this->network_ == nullptr
        && this->osType_ == nullptr && this->policy_ == nullptr && this->status_ == nullptr && this->subPayType_ == nullptr && this->supportUserGroupMixedAuth_ == nullptr
        && this->tags_ == nullptr && this->tier_ == nullptr && this->timers_ == nullptr && this->userGroupAuthMode_ == nullptr && this->userLimit_ == nullptr; };
      // authNotificationEnabled Field Functions 
      bool hasAuthNotificationEnabled() const { return this->authNotificationEnabled_ != nullptr;};
      void deleteAuthNotificationEnabled() { this->authNotificationEnabled_ = nullptr;};
      inline bool getAuthNotificationEnabled() const { DARABONBA_PTR_GET_DEFAULT(authNotificationEnabled_, false) };
      inline BrowserInstanceGroupModels& setAuthNotificationEnabled(bool authNotificationEnabled) { DARABONBA_PTR_SET_VALUE(authNotificationEnabled_, authNotificationEnabled) };


      // authorizedUserInfo Field Functions 
      bool hasAuthorizedUserInfo() const { return this->authorizedUserInfo_ != nullptr;};
      void deleteAuthorizedUserInfo() { this->authorizedUserInfo_ = nullptr;};
      inline const BrowserInstanceGroupModels::AuthorizedUserInfo & getAuthorizedUserInfo() const { DARABONBA_PTR_GET_CONST(authorizedUserInfo_, BrowserInstanceGroupModels::AuthorizedUserInfo) };
      inline BrowserInstanceGroupModels::AuthorizedUserInfo getAuthorizedUserInfo() { DARABONBA_PTR_GET(authorizedUserInfo_, BrowserInstanceGroupModels::AuthorizedUserInfo) };
      inline BrowserInstanceGroupModels& setAuthorizedUserInfo(const BrowserInstanceGroupModels::AuthorizedUserInfo & authorizedUserInfo) { DARABONBA_PTR_SET_VALUE(authorizedUserInfo_, authorizedUserInfo) };
      inline BrowserInstanceGroupModels& setAuthorizedUserInfo(BrowserInstanceGroupModels::AuthorizedUserInfo && authorizedUserInfo) { DARABONBA_PTR_SET_RVALUE(authorizedUserInfo_, authorizedUserInfo) };


      // bizRegionId Field Functions 
      bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
      void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
      inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
      inline BrowserInstanceGroupModels& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


      // browserConfig Field Functions 
      bool hasBrowserConfig() const { return this->browserConfig_ != nullptr;};
      void deleteBrowserConfig() { this->browserConfig_ = nullptr;};
      inline const BrowserInstanceGroupModels::BrowserConfig & getBrowserConfig() const { DARABONBA_PTR_GET_CONST(browserConfig_, BrowserInstanceGroupModels::BrowserConfig) };
      inline BrowserInstanceGroupModels::BrowserConfig getBrowserConfig() { DARABONBA_PTR_GET(browserConfig_, BrowserInstanceGroupModels::BrowserConfig) };
      inline BrowserInstanceGroupModels& setBrowserConfig(const BrowserInstanceGroupModels::BrowserConfig & browserConfig) { DARABONBA_PTR_SET_VALUE(browserConfig_, browserConfig) };
      inline BrowserInstanceGroupModels& setBrowserConfig(BrowserInstanceGroupModels::BrowserConfig && browserConfig) { DARABONBA_PTR_SET_RVALUE(browserConfig_, browserConfig) };


      // browserInstanceGroupId Field Functions 
      bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
      void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
      inline string getBrowserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
      inline BrowserInstanceGroupModels& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


      // browserInstanceGroupName Field Functions 
      bool hasBrowserInstanceGroupName() const { return this->browserInstanceGroupName_ != nullptr;};
      void deleteBrowserInstanceGroupName() { this->browserInstanceGroupName_ = nullptr;};
      inline string getBrowserInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupName_, "") };
      inline BrowserInstanceGroupModels& setBrowserInstanceGroupName(string browserInstanceGroupName) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupName_, browserInstanceGroupName) };


      // browserInstanceGroupSetId Field Functions 
      bool hasBrowserInstanceGroupSetId() const { return this->browserInstanceGroupSetId_ != nullptr;};
      void deleteBrowserInstanceGroupSetId() { this->browserInstanceGroupSetId_ = nullptr;};
      inline string getBrowserInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupSetId_, "") };
      inline BrowserInstanceGroupModels& setBrowserInstanceGroupSetId(string browserInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupSetId_, browserInstanceGroupSetId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline BrowserInstanceGroupModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // defaultAccessUrl Field Functions 
      bool hasDefaultAccessUrl() const { return this->defaultAccessUrl_ != nullptr;};
      void deleteDefaultAccessUrl() { this->defaultAccessUrl_ = nullptr;};
      inline string getDefaultAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(defaultAccessUrl_, "") };
      inline BrowserInstanceGroupModels& setDefaultAccessUrl(string defaultAccessUrl) { DARABONBA_PTR_SET_VALUE(defaultAccessUrl_, defaultAccessUrl) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline const BrowserInstanceGroupModels::Duration & getDuration() const { DARABONBA_PTR_GET_CONST(duration_, BrowserInstanceGroupModels::Duration) };
      inline BrowserInstanceGroupModels::Duration getDuration() { DARABONBA_PTR_GET(duration_, BrowserInstanceGroupModels::Duration) };
      inline BrowserInstanceGroupModels& setDuration(const BrowserInstanceGroupModels::Duration & duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };
      inline BrowserInstanceGroupModels& setDuration(BrowserInstanceGroupModels::Duration && duration) { DARABONBA_PTR_SET_RVALUE(duration_, duration) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline BrowserInstanceGroupModels& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline BrowserInstanceGroupModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // homepage Field Functions 
      bool hasHomepage() const { return this->homepage_ != nullptr;};
      void deleteHomepage() { this->homepage_ = nullptr;};
      inline string getHomepage() const { DARABONBA_PTR_GET_DEFAULT(homepage_, "") };
      inline BrowserInstanceGroupModels& setHomepage(string homepage) { DARABONBA_PTR_SET_VALUE(homepage_, homepage) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline BrowserInstanceGroupModels& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline BrowserInstanceGroupModels& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const BrowserInstanceGroupModels::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, BrowserInstanceGroupModels::Network) };
      inline BrowserInstanceGroupModels::Network getNetwork() { DARABONBA_PTR_GET(network_, BrowserInstanceGroupModels::Network) };
      inline BrowserInstanceGroupModels& setNetwork(const BrowserInstanceGroupModels::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline BrowserInstanceGroupModels& setNetwork(BrowserInstanceGroupModels::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline BrowserInstanceGroupModels& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline const BrowserInstanceGroupModels::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, BrowserInstanceGroupModels::Policy) };
      inline BrowserInstanceGroupModels::Policy getPolicy() { DARABONBA_PTR_GET(policy_, BrowserInstanceGroupModels::Policy) };
      inline BrowserInstanceGroupModels& setPolicy(const BrowserInstanceGroupModels::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
      inline BrowserInstanceGroupModels& setPolicy(BrowserInstanceGroupModels::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BrowserInstanceGroupModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subPayType Field Functions 
      bool hasSubPayType() const { return this->subPayType_ != nullptr;};
      void deleteSubPayType() { this->subPayType_ = nullptr;};
      inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
      inline BrowserInstanceGroupModels& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


      // supportUserGroupMixedAuth Field Functions 
      bool hasSupportUserGroupMixedAuth() const { return this->supportUserGroupMixedAuth_ != nullptr;};
      void deleteSupportUserGroupMixedAuth() { this->supportUserGroupMixedAuth_ = nullptr;};
      inline bool getSupportUserGroupMixedAuth() const { DARABONBA_PTR_GET_DEFAULT(supportUserGroupMixedAuth_, false) };
      inline BrowserInstanceGroupModels& setSupportUserGroupMixedAuth(bool supportUserGroupMixedAuth) { DARABONBA_PTR_SET_VALUE(supportUserGroupMixedAuth_, supportUserGroupMixedAuth) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<BrowserInstanceGroupModels::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<BrowserInstanceGroupModels::Tags>) };
      inline vector<BrowserInstanceGroupModels::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<BrowserInstanceGroupModels::Tags>) };
      inline BrowserInstanceGroupModels& setTags(const vector<BrowserInstanceGroupModels::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline BrowserInstanceGroupModels& setTags(vector<BrowserInstanceGroupModels::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tier Field Functions 
      bool hasTier() const { return this->tier_ != nullptr;};
      void deleteTier() { this->tier_ = nullptr;};
      inline string getTier() const { DARABONBA_PTR_GET_DEFAULT(tier_, "") };
      inline BrowserInstanceGroupModels& setTier(string tier) { DARABONBA_PTR_SET_VALUE(tier_, tier) };


      // timers Field Functions 
      bool hasTimers() const { return this->timers_ != nullptr;};
      void deleteTimers() { this->timers_ = nullptr;};
      inline const vector<BrowserInstanceGroupModels::Timers> & getTimers() const { DARABONBA_PTR_GET_CONST(timers_, vector<BrowserInstanceGroupModels::Timers>) };
      inline vector<BrowserInstanceGroupModels::Timers> getTimers() { DARABONBA_PTR_GET(timers_, vector<BrowserInstanceGroupModels::Timers>) };
      inline BrowserInstanceGroupModels& setTimers(const vector<BrowserInstanceGroupModels::Timers> & timers) { DARABONBA_PTR_SET_VALUE(timers_, timers) };
      inline BrowserInstanceGroupModels& setTimers(vector<BrowserInstanceGroupModels::Timers> && timers) { DARABONBA_PTR_SET_RVALUE(timers_, timers) };


      // userGroupAuthMode Field Functions 
      bool hasUserGroupAuthMode() const { return this->userGroupAuthMode_ != nullptr;};
      void deleteUserGroupAuthMode() { this->userGroupAuthMode_ = nullptr;};
      inline string getUserGroupAuthMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupAuthMode_, "") };
      inline BrowserInstanceGroupModels& setUserGroupAuthMode(string userGroupAuthMode) { DARABONBA_PTR_SET_VALUE(userGroupAuthMode_, userGroupAuthMode) };


      // userLimit Field Functions 
      bool hasUserLimit() const { return this->userLimit_ != nullptr;};
      void deleteUserLimit() { this->userLimit_ = nullptr;};
      inline const BrowserInstanceGroupModels::UserLimit & getUserLimit() const { DARABONBA_PTR_GET_CONST(userLimit_, BrowserInstanceGroupModels::UserLimit) };
      inline BrowserInstanceGroupModels::UserLimit getUserLimit() { DARABONBA_PTR_GET(userLimit_, BrowserInstanceGroupModels::UserLimit) };
      inline BrowserInstanceGroupModels& setUserLimit(const BrowserInstanceGroupModels::UserLimit & userLimit) { DARABONBA_PTR_SET_VALUE(userLimit_, userLimit) };
      inline BrowserInstanceGroupModels& setUserLimit(BrowserInstanceGroupModels::UserLimit && userLimit) { DARABONBA_PTR_SET_RVALUE(userLimit_, userLimit) };


    protected:
      // Specifies whether notification emails for authorization and revocation are enabled. A value of `true` indicates that the feature is enabled. A value of `false` indicates that the feature is disabled.
      shared_ptr<bool> authNotificationEnabled_ {};
      // The statistics of authorized users for the browser instance group.
      shared_ptr<BrowserInstanceGroupModels::AuthorizedUserInfo> authorizedUserInfo_ {};
      // The business region where the browser instance group is located.
      shared_ptr<string> bizRegionId_ {};
      // The current configuration of the browser.
      shared_ptr<BrowserInstanceGroupModels::BrowserConfig> browserConfig_ {};
      // The ID of the cloud browser instance group.
      shared_ptr<string> browserInstanceGroupId_ {};
      // The name of the cloud browser instance group.
      shared_ptr<string> browserInstanceGroupName_ {};
      // The ID of the browser instance group set to which the group belongs.
      shared_ptr<string> browserInstanceGroupSetId_ {};
      // The billing method. In the MAU scenario, `PostPaid` is returned, which indicates pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The default access URL of the browser instance group. Use the actual URL returned by the API operation. Replace the resource ID in the example.
      shared_ptr<string> defaultAccessUrl_ {};
      // The package duration information. This parameter is not applicable to the MAU scenario and may return an empty object.
      shared_ptr<BrowserInstanceGroupModels::Duration> duration_ {};
      // The expiration time of the browser instance group. This parameter is not applicable to the MAU scenario and is not returned.
      shared_ptr<string> expiredTime_ {};
      // The creation time of the browser instance group. The time follows the RFC 3339 standard in the `yyyy-MM-dd\\"T\\"HH:mm:ss.SSSXXX` format, which includes milliseconds and time zone offset. The actual POP response uses the UTC offset `+00:00`.
      shared_ptr<string> gmtCreate_ {};
      // The homepage URL of the browser instance group.
      shared_ptr<string> homepage_ {};
      // The ID of the image used by the browser instance group.
      shared_ptr<string> imageId_ {};
      // The instance type used by the browser instance group.
      shared_ptr<string> instanceType_ {};
      // The office network and website access restriction configurations.
      shared_ptr<BrowserInstanceGroupModels::Network> network_ {};
      // The operating system type of the browser instance group. The current MAU product scenario uses Windows.
      shared_ptr<string> osType_ {};
      // The policy configuration returned for the browser instance group. The policy fields are used to view existing settings and do not indicate that all corresponding creation parameters are configurable.
      shared_ptr<BrowserInstanceGroupModels::Policy> policy_ {};
      // The status of the browser group. Valid values:
      // 
      // - `DEPLOYING`: Deploying.
      // - `PUBLISHED`: Published.
      // - `FAILED`: Failed.
      // - `EXPIRED`: Expired.
      // - `CEASED`: Suspended due to overdue payment.
      // - `MAINTAINING`: Updating.
      // - `MAINTAIN_FAILED`: Update failed.
      // - `DELETING`: Deleting.
      // - `UNAVAILABLE`: Unavailable.
      shared_ptr<string> status_ {};
      // The sub-billing method. In the MAU scenario, `mau` is returned, which indicates billing by monthly active users.
      shared_ptr<string> subPayType_ {};
      // Indicates whether mixed authorization of users and user groups is supported. A value of `true` indicates that it is supported, and a value of `false` indicates that it is not supported. Evaluate this parameter based on the current authorization mode.
      shared_ptr<bool> supportUserGroupMixedAuth_ {};
      // The list of resource tags returned.
      shared_ptr<vector<BrowserInstanceGroupModels::Tags>> tags_ {};
      // The version of the browser. Valid values:
      // 
      // - `Basic`: Basic Edition.
      // - `Pro`: Premium Edition.
      // 
      // In the MAU scenario, the value is `Pro`.
      shared_ptr<string> tier_ {};
      // The session timer configuration returned. This is used to view the effective settings and does not indicate that the create operation supports configuring this parameter.
      shared_ptr<vector<BrowserInstanceGroupModels::Timers>> timers_ {};
      // The current authorization mode. Valid values:
      // 
      // - `Mixed`: Mixed authorization of users and user groups.
      // - `User`: User authorization.
      // - `UserGroup`: User group authorization.
      shared_ptr<string> userGroupAuthMode_ {};
      // The user quota information.
      shared_ptr<BrowserInstanceGroupModels::UserLimit> userLimit_ {};
    };

    virtual bool empty() const override { return this->browserInstanceGroupModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // browserInstanceGroupModels Field Functions 
    bool hasBrowserInstanceGroupModels() const { return this->browserInstanceGroupModels_ != nullptr;};
    void deleteBrowserInstanceGroupModels() { this->browserInstanceGroupModels_ = nullptr;};
    inline const vector<ListBrowserInstanceGroupResponseBody::BrowserInstanceGroupModels> & getBrowserInstanceGroupModels() const { DARABONBA_PTR_GET_CONST(browserInstanceGroupModels_, vector<ListBrowserInstanceGroupResponseBody::BrowserInstanceGroupModels>) };
    inline vector<ListBrowserInstanceGroupResponseBody::BrowserInstanceGroupModels> getBrowserInstanceGroupModels() { DARABONBA_PTR_GET(browserInstanceGroupModels_, vector<ListBrowserInstanceGroupResponseBody::BrowserInstanceGroupModels>) };
    inline ListBrowserInstanceGroupResponseBody& setBrowserInstanceGroupModels(const vector<ListBrowserInstanceGroupResponseBody::BrowserInstanceGroupModels> & browserInstanceGroupModels) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupModels_, browserInstanceGroupModels) };
    inline ListBrowserInstanceGroupResponseBody& setBrowserInstanceGroupModels(vector<ListBrowserInstanceGroupResponseBody::BrowserInstanceGroupModels> && browserInstanceGroupModels) { DARABONBA_PTR_SET_RVALUE(browserInstanceGroupModels_, browserInstanceGroupModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBrowserInstanceGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBrowserInstanceGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBrowserInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBrowserInstanceGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of browser instance groups on the current page.
    shared_ptr<vector<ListBrowserInstanceGroupResponseBody::BrowserInstanceGroupModels>> browserInstanceGroupModels_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of browser groups that meet the filter conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
