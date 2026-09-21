// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBROWSERINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBROWSERINSTANCEGROUPRESPONSEBODY_HPP_
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
  class GetBrowserInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBrowserInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupModel, browserInstanceGroupModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBrowserInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupModel, browserInstanceGroupModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBrowserInstanceGroupResponseBody() = default ;
    GetBrowserInstanceGroupResponseBody(const GetBrowserInstanceGroupResponseBody &) = default ;
    GetBrowserInstanceGroupResponseBody(GetBrowserInstanceGroupResponseBody &&) = default ;
    GetBrowserInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBrowserInstanceGroupResponseBody() = default ;
    GetBrowserInstanceGroupResponseBody& operator=(const GetBrowserInstanceGroupResponseBody &) = default ;
    GetBrowserInstanceGroupResponseBody& operator=(GetBrowserInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BrowserInstanceGroupModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BrowserInstanceGroupModel& obj) { 
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
        DARABONBA_PTR_TO_JSON(MaxAmount, maxAmount_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_TO_JSON(SupportUserGroupMixedAuth, supportUserGroupMixedAuth_);
        DARABONBA_PTR_TO_JSON(Tier, tier_);
        DARABONBA_PTR_TO_JSON(Timers, timers_);
        DARABONBA_PTR_TO_JSON(UserGroupAuthMode, userGroupAuthMode_);
        DARABONBA_PTR_TO_JSON(UserLimit, userLimit_);
      };
      friend void from_json(const Darabonba::Json& j, BrowserInstanceGroupModel& obj) { 
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
        DARABONBA_PTR_FROM_JSON(MaxAmount, maxAmount_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
        DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_FROM_JSON(SupportUserGroupMixedAuth, supportUserGroupMixedAuth_);
        DARABONBA_PTR_FROM_JSON(Tier, tier_);
        DARABONBA_PTR_FROM_JSON(Timers, timers_);
        DARABONBA_PTR_FROM_JSON(UserGroupAuthMode, userGroupAuthMode_);
        DARABONBA_PTR_FROM_JSON(UserLimit, userLimit_);
      };
      BrowserInstanceGroupModel() = default ;
      BrowserInstanceGroupModel(const BrowserInstanceGroupModel &) = default ;
      BrowserInstanceGroupModel(BrowserInstanceGroupModel &&) = default ;
      BrowserInstanceGroupModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BrowserInstanceGroupModel() = default ;
      BrowserInstanceGroupModel& operator=(const BrowserInstanceGroupModel &) = default ;
      BrowserInstanceGroupModel& operator=(BrowserInstanceGroupModel &&) = default ;
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
        // The user quota.
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
        // The session retention duration after disconnection, in minutes. A value of `-1` indicates that the session is not unbound due to this timeout, but is still subject to authorization and other session release policies.
        shared_ptr<int32_t> interval_ {};
        // The timer configuration type. `SESSION_TIMEOUT` indicates the session retention duration after disconnection.
        shared_ptr<string> timerType_ {};
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
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
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
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
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
          // - `ON`: Watermark enabled.
          // - `OFF`: Watermark disabled.
          // 
          // When disabled, the watermark content type list is not used.
          shared_ptr<string> watermarkSwitch_ {};
          // The list of watermark content types.
          // 
          // - `EndUserId`: User ID.
          // - `InstanceGroupId`: Delivery group ID.
          // - `ClientTime`: Current time on the client.
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
          // The frame rate of browser sessions.
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
          // - `off`: Bidirectional transfer is denied.
          // - `read`: Copy and paste from the local PC to the cloud browser is allowed.
          // - `write`: Copy and paste from the cloud browser to the local PC is allowed.
          // - `readwrite`: Bidirectional transfer is allowed.
          shared_ptr<string> clipboard_ {};
          // The clipboard size limit for inbound transfer (from the local PC to the cloud browser).
          shared_ptr<int32_t> clipboardReadLimit_ {};
          // The clipboard control granularity.
          // 
          // - `global`: Unified control.
          // - `grained`: Separate control by text, rich text, and file.
          shared_ptr<string> clipboardScope_ {};
          // The unit of the clipboard size.
          // 
          // - `B`: bytes.
          // - `KB`: 1024 bytes.
          shared_ptr<string> clipboardSizeUnit_ {};
          // The clipboard size limit for outbound transfer (from the cloud browser to the local PC).
          shared_ptr<int32_t> clipboardWriteLimit_ {};
          // The clipboard transfer direction. The value is case-insensitive.
          // 
          // - `off`: Bidirectional transfer is denied.
          // - `read`: Copy and paste from the local PC to the cloud browser is allowed.
          // - `write`: Copy and paste from the cloud browser to the local PC is allowed.
          // - `readwrite`: Bidirectional transfer is allowed.
          shared_ptr<string> fileClipboard_ {};
          // The clipboard transfer direction. The value is case-insensitive.
          // 
          // - `off`: Bidirectional transfer is denied.
          // - `read`: Copy and paste from the local PC to the cloud browser is allowed.
          // - `write`: Copy and paste from the cloud browser to the local PC is allowed.
          // - `readwrite`: Bidirectional transfer is allowed.
          shared_ptr<string> richTextClipboard_ {};
          // The rich text clipboard size limit.
          shared_ptr<int32_t> richTextClipboardLimit_ {};
          // The clipboard size limit for inbound transfer (from the local PC to the cloud browser).
          shared_ptr<int32_t> richTextClipboardReadLimit_ {};
          // The unit of the clipboard size.
          // 
          // - `B`: bytes.
          // - `KB`: 1024 bytes.
          shared_ptr<string> richTextClipboardReadSizeUnit_ {};
          // The unit of the clipboard size.
          // 
          // - `B`: bytes.
          // - `KB`: 1024 bytes.
          shared_ptr<string> richTextClipboardSizeUnit_ {};
          // The clipboard size limit for outbound transfer (from the cloud browser to the local PC).
          shared_ptr<int32_t> richTextClipboardWriteLimit_ {};
          // The unit of the clipboard size.
          // 
          // - `B`: bytes.
          // - `KB`: 1024 bytes.
          shared_ptr<string> richTextClipboardWriteSizeUnit_ {};
          // The clipboard transfer direction. The value is case-insensitive.
          // 
          // - `off`: Bidirectional transfer is denied.
          // - `read`: Copy and paste from the local PC to the cloud browser is allowed.
          // - `write`: Copy and paste from the cloud browser to the local PC is allowed.
          // - `readwrite`: Bidirectional transfer is allowed.
          shared_ptr<string> textClipboard_ {};
          // The clipboard size limit for inbound transfer (from the local PC to the cloud browser).
          shared_ptr<int32_t> textClipboardReadLimit_ {};
          // The unit of the clipboard size.
          // 
          // - `B`: bytes.
          // - `KB`: 1024 bytes.
          shared_ptr<string> textClipboardReadSizeUnit_ {};
          // The clipboard size limit for outbound transfer (from the cloud browser to the local PC).
          shared_ptr<int32_t> textClipboardWriteLimit_ {};
          // The unit of the clipboard size.
          // 
          // - `B`: bytes.
          // - `KB`: 1024 bytes.
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
          // The client type.
          // 
          // - `windows`: Windows client.
          // - `macos`: macOS client.
          // - `html5`: Web client.
          // - `linux`: Linux client.
          // - `android`: Android client.
          // - `ios`: iOS client.
          // 
          // This field reflects the existing access configuration and does not indicate that all client types are available for the current product.
          shared_ptr<string> clientType_ {};
          // The access policy switch for the client type.
          // 
          // - `on`: Access from this client type is allowed.
          // - `off`: Access from this client type is denied.
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
          // The client source CIDR block that is allowed to access the browser group.
          shared_ptr<string> cidrIp_ {};
          // The description of the client access rule.
          shared_ptr<string> description_ {};
          // The action of the client access rule.
          // 
          // - `allow`: Access is allowed.
          // - `deny`: Access is denied.
          shared_ptr<string> policy_ {};
        };

        virtual bool empty() const override { return this->appContentProtection_ == nullptr
        && this->authorizeAccessPolicyRules_ == nullptr && this->clientTypes_ == nullptr && this->clipboardPolicy_ == nullptr && this->disconnectKeepSession_ == nullptr && this->disconnectKeepSessionTime_ == nullptr
        && this->fileManager_ == nullptr && this->html5FileTransfer_ == nullptr && this->noOperationDisconnect_ == nullptr && this->noOperationDisconnectTime_ == nullptr && this->policyId_ == nullptr
        && this->policyVersion_ == nullptr && this->videoPolicy_ == nullptr && this->watermarkPolicy_ == nullptr; };
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


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline Policy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


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
        // The screenshot protection switch.
        // 
        // - `on`: Screenshot protection is enabled.
        // - `off`: Screenshot protection is disabled.
        shared_ptr<string> appContentProtection_ {};
        // The client access IP address whitelist rules.
        shared_ptr<vector<Policy::AuthorizeAccessPolicyRules>> authorizeAccessPolicyRules_ {};
        // The list of client access control configurations.
        shared_ptr<vector<Policy::ClientTypes>> clientTypes_ {};
        // The clipboard transfer direction, content type, and size limit settings. read indicates transfer from the local PC to the cloud browser. write indicates transfer from the cloud browser to the local PC.
        shared_ptr<Policy::ClipboardPolicy> clipboardPolicy_ {};
        // The data retention policy for sessions after disconnection.
        // 
        // - `customTime`: The session is retained for the duration specified by `DisconnectKeepSessionTime`.
        // - `persistent`: The session is not subject to automatic release based on disconnection duration.
        // 
        // **Note:** The `persistent` option is still subject to authorization and other release policies.
        shared_ptr<string> disconnectKeepSession_ {};
        // The session retention duration after disconnection. Unit: seconds. This value is for viewing the configuration only and does not indicate that this parameter can be set through the create operation.
        shared_ptr<int32_t> disconnectKeepSessionTime_ {};
        // The floating ball file manager switch.
        // 
        // - `on`: Enabled.
        // - `off`: Disabled.
        shared_ptr<string> fileManager_ {};
        // The file transfer policy for the web client.
        // 
        // - `off`: Transfer is denied.
        // - `upload`: Only upload is allowed.
        // - `download`: Only download is allowed.
        // - `full`: Both upload and download are allowed.
        // 
        // Configure this parameter together with the clipboard policy.
        shared_ptr<string> html5FileTransfer_ {};
        // The switch for automatic disconnection upon no operation. The value is case-insensitive.
        // 
        // - `on`: Enabled.
        // - `off`: Disabled.
        // 
        // When enabled, use `NoOperationDisconnectTime` to set the wait duration.
        shared_ptr<string> noOperationDisconnect_ {};
        // The wait duration before disconnection is triggered after no operation, in seconds. Whether this feature is enabled is indicated by `NoOperationDisconnect`.
        shared_ptr<int32_t> noOperationDisconnectTime_ {};
        // The ID of the policy associated with the browser instance group.
        shared_ptr<string> policyId_ {};
        // The policy version.
        // 
        // - `DEFAULT`: Legacy policy.
        // - `CENTER`: Centralized policy.
        shared_ptr<string> policyVersion_ {};
        // The video display policy for browser sessions.
        shared_ptr<Policy::VideoPolicy> videoPolicy_ {};
        // The watermark display configuration for browser sessions.
        shared_ptr<Policy::WatermarkPolicy> watermarkPolicy_ {};
      };

      class NodePool : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodePool& obj) { 
          DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
          DARABONBA_PTR_TO_JSON(NodeUsed, nodeUsed_);
        };
        friend void from_json(const Darabonba::Json& j, NodePool& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
          DARABONBA_PTR_FROM_JSON(NodeUsed, nodeUsed_);
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
        && this->nodeUsed_ == nullptr; };
        // nodeAmount Field Functions 
        bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
        void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
        inline string getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, "") };
        inline NodePool& setNodeAmount(string nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


        // nodeUsed Field Functions 
        bool hasNodeUsed() const { return this->nodeUsed_ != nullptr;};
        void deleteNodeUsed() { this->nodeUsed_ = nullptr;};
        inline string getNodeUsed() const { DARABONBA_PTR_GET_DEFAULT(nodeUsed_, "") };
        inline NodePool& setNodeUsed(string nodeUsed) { DARABONBA_PTR_SET_VALUE(nodeUsed_, nodeUsed) };


      protected:
        // The total number of nodes. This field does not apply to MAU scenarios.
        shared_ptr<string> nodeAmount_ {};
        // The number of used nodes. This field does not apply to MAU scenarios.
        shared_ptr<string> nodeUsed_ {};
      };

      class NodeInstanceType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInstanceType& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInstanceType& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
        };
        NodeInstanceType() = default ;
        NodeInstanceType(const NodeInstanceType &) = default ;
        NodeInstanceType(NodeInstanceType &&) = default ;
        NodeInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInstanceType() = default ;
        NodeInstanceType& operator=(const NodeInstanceType &) = default ;
        NodeInstanceType& operator=(NodeInstanceType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memory_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
        inline NodeInstanceType& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline NodeInstanceType& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The CPU configuration of the node. This field does not apply to MAU scenarios.
        shared_ptr<string> cpu_ {};
        // The memory configuration of the node. This field does not apply to MAU scenarios.
        shared_ptr<int32_t> memory_ {};
      };

      class Network : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Network& obj) { 
          DARABONBA_PTR_TO_JSON(AccessRestriction, accessRestriction_);
          DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_TO_JSON(RestrictedURLs, restrictedURLs_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        };
        friend void from_json(const Darabonba::Json& j, Network& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessRestriction, accessRestriction_);
          DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_FROM_JSON(RestrictedURLs, restrictedURLs_);
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
            DARABONBA_PTR_TO_JSON(RestrictedURLId, restrictedURLId_);
            DARABONBA_PTR_TO_JSON(URL, URL_);
          };
          friend void from_json(const Darabonba::Json& j, RestrictedURLs& obj) { 
            DARABONBA_PTR_FROM_JSON(RestrictedURLId, restrictedURLId_);
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
          virtual bool empty() const override { return this->restrictedURLId_ == nullptr
        && this->URL_ == nullptr; };
          // restrictedURLId Field Functions 
          bool hasRestrictedURLId() const { return this->restrictedURLId_ != nullptr;};
          void deleteRestrictedURLId() { this->restrictedURLId_ = nullptr;};
          inline string getRestrictedURLId() const { DARABONBA_PTR_GET_DEFAULT(restrictedURLId_, "") };
          inline RestrictedURLs& setRestrictedURLId(string restrictedURLId) { DARABONBA_PTR_SET_VALUE(restrictedURLId_, restrictedURLId) };


          // URL Field Functions 
          bool hasURL() const { return this->URL_ != nullptr;};
          void deleteURL() { this->URL_ = nullptr;};
          inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
          inline RestrictedURLs& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


        protected:
          // The ID of the website access restriction entry.
          shared_ptr<string> restrictedURLId_ {};
          // The website URL in the access restriction entry.
          shared_ptr<string> URL_ {};
        };

        virtual bool empty() const override { return this->accessRestriction_ == nullptr
        && this->officeSiteId_ == nullptr && this->restrictedURLs_ == nullptr && this->vSwitchIds_ == nullptr; };
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
        // - `ALLOW_ALL`: All domain names are allowed.
        // - `ALLOW_LIST`: Only websites in the allowlist are allowed.
        // 
        // The returned value reflects the current configuration of the browser group.
        shared_ptr<string> accessRestriction_ {};
        // The office network ID to which the browser group belongs.
        shared_ptr<string> officeSiteId_ {};
        // The website access restriction list. A maximum of 20 entries are returned. To query the complete list, call `ListBrowserRestrictedURLs`.
        shared_ptr<vector<Network::RestrictedURLs>> restrictedURLs_ {};
        // The list of vSwitch IDs used by the browser group. This is available for scenarios with custom network configurations.
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
        // The current payment stage of the plan. This field does not apply to MAU scenarios.
        shared_ptr<string> currentPayStage_ {};
        // The end time of the plan period. This field does not apply to MAU scenarios and is not returned.
        shared_ptr<string> periodEndTime_ {};
        // The start time of the plan period. This field does not apply to MAU scenarios and is not returned.
        shared_ptr<string> periodStartTime_ {};
        // The total duration of the plan, in seconds. This field does not apply to MAU scenarios.
        shared_ptr<int32_t> totalDuration_ {};
        // The used duration of the plan, in seconds. This field does not apply to MAU scenarios.
        shared_ptr<int32_t> usedDuration_ {};
      };

      class BrowserConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BrowserConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Bookmarks, bookmarks_);
          DARABONBA_PTR_TO_JSON(BrowserParam, browserParam_);
          DARABONBA_PTR_TO_JSON(CookiesSync, cookiesSync_);
          DARABONBA_PTR_TO_JSON(Homepage, homepage_);
        };
        friend void from_json(const Darabonba::Json& j, BrowserConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Bookmarks, bookmarks_);
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
            DARABONBA_PTR_TO_JSON(BookmarkId, bookmarkId_);
            DARABONBA_PTR_TO_JSON(BookmarkName, bookmarkName_);
            DARABONBA_PTR_TO_JSON(BookmarkURL, bookmarkURL_);
          };
          friend void from_json(const Darabonba::Json& j, Bookmarks& obj) { 
            DARABONBA_PTR_FROM_JSON(BookmarkFolder, bookmarkFolder_);
            DARABONBA_PTR_FROM_JSON(BookmarkId, bookmarkId_);
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
        && this->bookmarkId_ == nullptr && this->bookmarkName_ == nullptr && this->bookmarkURL_ == nullptr; };
          // bookmarkFolder Field Functions 
          bool hasBookmarkFolder() const { return this->bookmarkFolder_ != nullptr;};
          void deleteBookmarkFolder() { this->bookmarkFolder_ = nullptr;};
          inline string getBookmarkFolder() const { DARABONBA_PTR_GET_DEFAULT(bookmarkFolder_, "") };
          inline Bookmarks& setBookmarkFolder(string bookmarkFolder) { DARABONBA_PTR_SET_VALUE(bookmarkFolder_, bookmarkFolder) };


          // bookmarkId Field Functions 
          bool hasBookmarkId() const { return this->bookmarkId_ != nullptr;};
          void deleteBookmarkId() { this->bookmarkId_ = nullptr;};
          inline string getBookmarkId() const { DARABONBA_PTR_GET_DEFAULT(bookmarkId_, "") };
          inline Bookmarks& setBookmarkId(string bookmarkId) { DARABONBA_PTR_SET_VALUE(bookmarkId_, bookmarkId) };


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
          // The folder in which the bookmark resides.
          shared_ptr<string> bookmarkFolder_ {};
          // The bookmark ID.
          shared_ptr<string> bookmarkId_ {};
          // The bookmark name.
          shared_ptr<string> bookmarkName_ {};
          // The URL of the bookmark.
          shared_ptr<string> bookmarkURL_ {};
        };

        virtual bool empty() const override { return this->bookmarks_ == nullptr
        && this->browserParam_ == nullptr && this->cookiesSync_ == nullptr && this->homepage_ == nullptr; };
        // bookmarks Field Functions 
        bool hasBookmarks() const { return this->bookmarks_ != nullptr;};
        void deleteBookmarks() { this->bookmarks_ = nullptr;};
        inline const vector<BrowserConfig::Bookmarks> & getBookmarks() const { DARABONBA_PTR_GET_CONST(bookmarks_, vector<BrowserConfig::Bookmarks>) };
        inline vector<BrowserConfig::Bookmarks> getBookmarks() { DARABONBA_PTR_GET(bookmarks_, vector<BrowserConfig::Bookmarks>) };
        inline BrowserConfig& setBookmarks(const vector<BrowserConfig::Bookmarks> & bookmarks) { DARABONBA_PTR_SET_VALUE(bookmarks_, bookmarks) };
        inline BrowserConfig& setBookmarks(vector<BrowserConfig::Bookmarks> && bookmarks) { DARABONBA_PTR_SET_RVALUE(bookmarks_, bookmarks) };


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
        // The list of browser bookmarks. A maximum of 20 entries are returned. To query the complete bookmark list, call `ListBrowserBookmarks`.
        shared_ptr<vector<BrowserConfig::Bookmarks>> bookmarks_ {};
        // The browser startup parameters. For example, `--incognito` specifies the incognito window mode.
        shared_ptr<string> browserParam_ {};
        // The cookie synchronization configuration. The string `true` indicates that synchronization is enabled. The string `false` indicates that synchronization is disabled.
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
        && this->gmtCreate_ == nullptr && this->homepage_ == nullptr && this->imageId_ == nullptr && this->instanceType_ == nullptr && this->maxAmount_ == nullptr
        && this->network_ == nullptr && this->nodeInstanceType_ == nullptr && this->nodePool_ == nullptr && this->osType_ == nullptr && this->policy_ == nullptr
        && this->status_ == nullptr && this->subPayType_ == nullptr && this->supportUserGroupMixedAuth_ == nullptr && this->tier_ == nullptr && this->timers_ == nullptr
        && this->userGroupAuthMode_ == nullptr && this->userLimit_ == nullptr; };
      // authNotificationEnabled Field Functions 
      bool hasAuthNotificationEnabled() const { return this->authNotificationEnabled_ != nullptr;};
      void deleteAuthNotificationEnabled() { this->authNotificationEnabled_ = nullptr;};
      inline bool getAuthNotificationEnabled() const { DARABONBA_PTR_GET_DEFAULT(authNotificationEnabled_, false) };
      inline BrowserInstanceGroupModel& setAuthNotificationEnabled(bool authNotificationEnabled) { DARABONBA_PTR_SET_VALUE(authNotificationEnabled_, authNotificationEnabled) };


      // authorizedUserInfo Field Functions 
      bool hasAuthorizedUserInfo() const { return this->authorizedUserInfo_ != nullptr;};
      void deleteAuthorizedUserInfo() { this->authorizedUserInfo_ = nullptr;};
      inline const BrowserInstanceGroupModel::AuthorizedUserInfo & getAuthorizedUserInfo() const { DARABONBA_PTR_GET_CONST(authorizedUserInfo_, BrowserInstanceGroupModel::AuthorizedUserInfo) };
      inline BrowserInstanceGroupModel::AuthorizedUserInfo getAuthorizedUserInfo() { DARABONBA_PTR_GET(authorizedUserInfo_, BrowserInstanceGroupModel::AuthorizedUserInfo) };
      inline BrowserInstanceGroupModel& setAuthorizedUserInfo(const BrowserInstanceGroupModel::AuthorizedUserInfo & authorizedUserInfo) { DARABONBA_PTR_SET_VALUE(authorizedUserInfo_, authorizedUserInfo) };
      inline BrowserInstanceGroupModel& setAuthorizedUserInfo(BrowserInstanceGroupModel::AuthorizedUserInfo && authorizedUserInfo) { DARABONBA_PTR_SET_RVALUE(authorizedUserInfo_, authorizedUserInfo) };


      // bizRegionId Field Functions 
      bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
      void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
      inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
      inline BrowserInstanceGroupModel& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


      // browserConfig Field Functions 
      bool hasBrowserConfig() const { return this->browserConfig_ != nullptr;};
      void deleteBrowserConfig() { this->browserConfig_ = nullptr;};
      inline const BrowserInstanceGroupModel::BrowserConfig & getBrowserConfig() const { DARABONBA_PTR_GET_CONST(browserConfig_, BrowserInstanceGroupModel::BrowserConfig) };
      inline BrowserInstanceGroupModel::BrowserConfig getBrowserConfig() { DARABONBA_PTR_GET(browserConfig_, BrowserInstanceGroupModel::BrowserConfig) };
      inline BrowserInstanceGroupModel& setBrowserConfig(const BrowserInstanceGroupModel::BrowserConfig & browserConfig) { DARABONBA_PTR_SET_VALUE(browserConfig_, browserConfig) };
      inline BrowserInstanceGroupModel& setBrowserConfig(BrowserInstanceGroupModel::BrowserConfig && browserConfig) { DARABONBA_PTR_SET_RVALUE(browserConfig_, browserConfig) };


      // browserInstanceGroupId Field Functions 
      bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
      void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
      inline string getBrowserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
      inline BrowserInstanceGroupModel& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


      // browserInstanceGroupName Field Functions 
      bool hasBrowserInstanceGroupName() const { return this->browserInstanceGroupName_ != nullptr;};
      void deleteBrowserInstanceGroupName() { this->browserInstanceGroupName_ = nullptr;};
      inline string getBrowserInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupName_, "") };
      inline BrowserInstanceGroupModel& setBrowserInstanceGroupName(string browserInstanceGroupName) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupName_, browserInstanceGroupName) };


      // browserInstanceGroupSetId Field Functions 
      bool hasBrowserInstanceGroupSetId() const { return this->browserInstanceGroupSetId_ != nullptr;};
      void deleteBrowserInstanceGroupSetId() { this->browserInstanceGroupSetId_ = nullptr;};
      inline string getBrowserInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupSetId_, "") };
      inline BrowserInstanceGroupModel& setBrowserInstanceGroupSetId(string browserInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupSetId_, browserInstanceGroupSetId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline BrowserInstanceGroupModel& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // defaultAccessUrl Field Functions 
      bool hasDefaultAccessUrl() const { return this->defaultAccessUrl_ != nullptr;};
      void deleteDefaultAccessUrl() { this->defaultAccessUrl_ = nullptr;};
      inline string getDefaultAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(defaultAccessUrl_, "") };
      inline BrowserInstanceGroupModel& setDefaultAccessUrl(string defaultAccessUrl) { DARABONBA_PTR_SET_VALUE(defaultAccessUrl_, defaultAccessUrl) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline const BrowserInstanceGroupModel::Duration & getDuration() const { DARABONBA_PTR_GET_CONST(duration_, BrowserInstanceGroupModel::Duration) };
      inline BrowserInstanceGroupModel::Duration getDuration() { DARABONBA_PTR_GET(duration_, BrowserInstanceGroupModel::Duration) };
      inline BrowserInstanceGroupModel& setDuration(const BrowserInstanceGroupModel::Duration & duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };
      inline BrowserInstanceGroupModel& setDuration(BrowserInstanceGroupModel::Duration && duration) { DARABONBA_PTR_SET_RVALUE(duration_, duration) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline BrowserInstanceGroupModel& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline BrowserInstanceGroupModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // homepage Field Functions 
      bool hasHomepage() const { return this->homepage_ != nullptr;};
      void deleteHomepage() { this->homepage_ = nullptr;};
      inline string getHomepage() const { DARABONBA_PTR_GET_DEFAULT(homepage_, "") };
      inline BrowserInstanceGroupModel& setHomepage(string homepage) { DARABONBA_PTR_SET_VALUE(homepage_, homepage) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline BrowserInstanceGroupModel& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline BrowserInstanceGroupModel& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // maxAmount Field Functions 
      bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
      void deleteMaxAmount() { this->maxAmount_ = nullptr;};
      inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
      inline BrowserInstanceGroupModel& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const BrowserInstanceGroupModel::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, BrowserInstanceGroupModel::Network) };
      inline BrowserInstanceGroupModel::Network getNetwork() { DARABONBA_PTR_GET(network_, BrowserInstanceGroupModel::Network) };
      inline BrowserInstanceGroupModel& setNetwork(const BrowserInstanceGroupModel::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline BrowserInstanceGroupModel& setNetwork(BrowserInstanceGroupModel::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      // nodeInstanceType Field Functions 
      bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
      void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
      inline const BrowserInstanceGroupModel::NodeInstanceType & getNodeInstanceType() const { DARABONBA_PTR_GET_CONST(nodeInstanceType_, BrowserInstanceGroupModel::NodeInstanceType) };
      inline BrowserInstanceGroupModel::NodeInstanceType getNodeInstanceType() { DARABONBA_PTR_GET(nodeInstanceType_, BrowserInstanceGroupModel::NodeInstanceType) };
      inline BrowserInstanceGroupModel& setNodeInstanceType(const BrowserInstanceGroupModel::NodeInstanceType & nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };
      inline BrowserInstanceGroupModel& setNodeInstanceType(BrowserInstanceGroupModel::NodeInstanceType && nodeInstanceType) { DARABONBA_PTR_SET_RVALUE(nodeInstanceType_, nodeInstanceType) };


      // nodePool Field Functions 
      bool hasNodePool() const { return this->nodePool_ != nullptr;};
      void deleteNodePool() { this->nodePool_ = nullptr;};
      inline const vector<BrowserInstanceGroupModel::NodePool> & getNodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, vector<BrowserInstanceGroupModel::NodePool>) };
      inline vector<BrowserInstanceGroupModel::NodePool> getNodePool() { DARABONBA_PTR_GET(nodePool_, vector<BrowserInstanceGroupModel::NodePool>) };
      inline BrowserInstanceGroupModel& setNodePool(const vector<BrowserInstanceGroupModel::NodePool> & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
      inline BrowserInstanceGroupModel& setNodePool(vector<BrowserInstanceGroupModel::NodePool> && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline BrowserInstanceGroupModel& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline const BrowserInstanceGroupModel::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, BrowserInstanceGroupModel::Policy) };
      inline BrowserInstanceGroupModel::Policy getPolicy() { DARABONBA_PTR_GET(policy_, BrowserInstanceGroupModel::Policy) };
      inline BrowserInstanceGroupModel& setPolicy(const BrowserInstanceGroupModel::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
      inline BrowserInstanceGroupModel& setPolicy(BrowserInstanceGroupModel::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BrowserInstanceGroupModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subPayType Field Functions 
      bool hasSubPayType() const { return this->subPayType_ != nullptr;};
      void deleteSubPayType() { this->subPayType_ = nullptr;};
      inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
      inline BrowserInstanceGroupModel& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


      // supportUserGroupMixedAuth Field Functions 
      bool hasSupportUserGroupMixedAuth() const { return this->supportUserGroupMixedAuth_ != nullptr;};
      void deleteSupportUserGroupMixedAuth() { this->supportUserGroupMixedAuth_ = nullptr;};
      inline bool getSupportUserGroupMixedAuth() const { DARABONBA_PTR_GET_DEFAULT(supportUserGroupMixedAuth_, false) };
      inline BrowserInstanceGroupModel& setSupportUserGroupMixedAuth(bool supportUserGroupMixedAuth) { DARABONBA_PTR_SET_VALUE(supportUserGroupMixedAuth_, supportUserGroupMixedAuth) };


      // tier Field Functions 
      bool hasTier() const { return this->tier_ != nullptr;};
      void deleteTier() { this->tier_ = nullptr;};
      inline string getTier() const { DARABONBA_PTR_GET_DEFAULT(tier_, "") };
      inline BrowserInstanceGroupModel& setTier(string tier) { DARABONBA_PTR_SET_VALUE(tier_, tier) };


      // timers Field Functions 
      bool hasTimers() const { return this->timers_ != nullptr;};
      void deleteTimers() { this->timers_ = nullptr;};
      inline const vector<BrowserInstanceGroupModel::Timers> & getTimers() const { DARABONBA_PTR_GET_CONST(timers_, vector<BrowserInstanceGroupModel::Timers>) };
      inline vector<BrowserInstanceGroupModel::Timers> getTimers() { DARABONBA_PTR_GET(timers_, vector<BrowserInstanceGroupModel::Timers>) };
      inline BrowserInstanceGroupModel& setTimers(const vector<BrowserInstanceGroupModel::Timers> & timers) { DARABONBA_PTR_SET_VALUE(timers_, timers) };
      inline BrowserInstanceGroupModel& setTimers(vector<BrowserInstanceGroupModel::Timers> && timers) { DARABONBA_PTR_SET_RVALUE(timers_, timers) };


      // userGroupAuthMode Field Functions 
      bool hasUserGroupAuthMode() const { return this->userGroupAuthMode_ != nullptr;};
      void deleteUserGroupAuthMode() { this->userGroupAuthMode_ = nullptr;};
      inline string getUserGroupAuthMode() const { DARABONBA_PTR_GET_DEFAULT(userGroupAuthMode_, "") };
      inline BrowserInstanceGroupModel& setUserGroupAuthMode(string userGroupAuthMode) { DARABONBA_PTR_SET_VALUE(userGroupAuthMode_, userGroupAuthMode) };


      // userLimit Field Functions 
      bool hasUserLimit() const { return this->userLimit_ != nullptr;};
      void deleteUserLimit() { this->userLimit_ = nullptr;};
      inline const BrowserInstanceGroupModel::UserLimit & getUserLimit() const { DARABONBA_PTR_GET_CONST(userLimit_, BrowserInstanceGroupModel::UserLimit) };
      inline BrowserInstanceGroupModel::UserLimit getUserLimit() { DARABONBA_PTR_GET(userLimit_, BrowserInstanceGroupModel::UserLimit) };
      inline BrowserInstanceGroupModel& setUserLimit(const BrowserInstanceGroupModel::UserLimit & userLimit) { DARABONBA_PTR_SET_VALUE(userLimit_, userLimit) };
      inline BrowserInstanceGroupModel& setUserLimit(BrowserInstanceGroupModel::UserLimit && userLimit) { DARABONBA_PTR_SET_RVALUE(userLimit_, userLimit) };


    protected:
      // Indicates whether authorization and deauthorization notification emails are enabled. `true` indicates that the feature is enabled. `false` indicates that the feature is disabled.
      shared_ptr<bool> authNotificationEnabled_ {};
      // The statistics of authorized users for the browser group.
      shared_ptr<BrowserInstanceGroupModel::AuthorizedUserInfo> authorizedUserInfo_ {};
      // The business region where the browser group resides.
      shared_ptr<string> bizRegionId_ {};
      // The current browser configuration.
      shared_ptr<BrowserInstanceGroupModel::BrowserConfig> browserConfig_ {};
      // The cloud browser group ID.
      shared_ptr<string> browserInstanceGroupId_ {};
      // The cloud browser group name.
      shared_ptr<string> browserInstanceGroupName_ {};
      // The ID of the browser group set to which the browser group belongs.
      shared_ptr<string> browserInstanceGroupSetId_ {};
      // The billing type. In MAU scenarios, `PostPaid` is returned, which indicates the pay-as-you-go billing method.
      shared_ptr<string> chargeType_ {};
      // The default access URL of the browser group. Use the URL returned by the API to access the browser group. Replace the resource ID in the example with your actual value.
      shared_ptr<string> defaultAccessUrl_ {};
      // The plan duration information. In MAU scenarios, plan duration does not apply, and an empty object may be returned.
      shared_ptr<BrowserInstanceGroupModel::Duration> duration_ {};
      // The expiration time of the browser group. This field does not apply to MAU scenarios and is not returned.
      shared_ptr<string> expiredTime_ {};
      // The creation time of the browser group. The value is an RFC 3339 time string in the `yyyy-MM-ddTHH:mm:ss.SSSXXX` format, which includes milliseconds and a time zone offset. The `+00:00` in the example indicates the UTC time zone.
      shared_ptr<string> gmtCreate_ {};
      // The homepage URL of the browser group.
      shared_ptr<string> homepage_ {};
      // The image ID used by the browser group.
      shared_ptr<string> imageId_ {};
      // The instance type used by the browser group.
      shared_ptr<string> instanceType_ {};
      // The maximum number of instances configured for the MAU scenario.
      shared_ptr<int32_t> maxAmount_ {};
      // The office network and website access restriction configuration.
      shared_ptr<BrowserInstanceGroupModel::Network> network_ {};
      // The node specifications information. This field does not apply to MAU scenarios.
      shared_ptr<BrowserInstanceGroupModel::NodeInstanceType> nodeInstanceType_ {};
      // The list of node pool information. In MAU scenarios, this field does not apply and an empty list may be returned.
      shared_ptr<vector<BrowserInstanceGroupModel::NodePool>> nodePool_ {};
      // The operating system type of the browser group. The current MAU product scenario uses Windows.
      shared_ptr<string> osType_ {};
      // The policy configuration returned for the browser group. The policy fields are used to view existing settings and do not indicate that all corresponding creation parameters are configurable.
      shared_ptr<BrowserInstanceGroupModel::Policy> policy_ {};
      // The status of the browser instance group.
      // 
      // - `DEPLOYING`: Being deployed.
      // - `PUBLISHED`: Deployed.
      // - `FAILED`: Deployment failed.
      // - `EXPIRED`: Expired.
      // - `CEASED`: Suspended due to overdue payment.
      // - `MAINTAINING`: Being updated.
      // - `MAINTAIN_FAILED`: Update failed.
      // - `DELETING`: Being deleted.
      // - `UNAVAILABLE`: Unavailable.
      shared_ptr<string> status_ {};
      // The sub-billing type. In MAU scenarios, the actual returned value is `mau`, which indicates billing by monthly active users.
      shared_ptr<string> subPayType_ {};
      // Indicates whether mixed authorization of users and user groups is supported. `true` indicates supported, and `false` indicates not supported. Evaluate this value based on the current authorization mode.
      shared_ptr<bool> supportUserGroupMixedAuth_ {};
      // The version of the browser.
      // 
      // - `Basic`: Basic Edition.
      // - `Pro`: Premium Edition.
      // 
      // In MAU scenarios, the value is `Pro`.
      shared_ptr<string> tier_ {};
      // The session timer configurations currently returned. These are for viewing the effective settings and do not indicate that the creation API supports setting this parameter.
      shared_ptr<vector<BrowserInstanceGroupModel::Timers>> timers_ {};
      // The current authorization mode.
      // 
      // - `Mixed`: Mixed authorization of users and user groups.
      // - `User`: User authorization.
      // - `UserGroup`: User group authorization.
      shared_ptr<string> userGroupAuthMode_ {};
      // The user quota information.
      shared_ptr<BrowserInstanceGroupModel::UserLimit> userLimit_ {};
    };

    virtual bool empty() const override { return this->browserInstanceGroupModel_ == nullptr
        && this->requestId_ == nullptr; };
    // browserInstanceGroupModel Field Functions 
    bool hasBrowserInstanceGroupModel() const { return this->browserInstanceGroupModel_ != nullptr;};
    void deleteBrowserInstanceGroupModel() { this->browserInstanceGroupModel_ = nullptr;};
    inline const GetBrowserInstanceGroupResponseBody::BrowserInstanceGroupModel & getBrowserInstanceGroupModel() const { DARABONBA_PTR_GET_CONST(browserInstanceGroupModel_, GetBrowserInstanceGroupResponseBody::BrowserInstanceGroupModel) };
    inline GetBrowserInstanceGroupResponseBody::BrowserInstanceGroupModel getBrowserInstanceGroupModel() { DARABONBA_PTR_GET(browserInstanceGroupModel_, GetBrowserInstanceGroupResponseBody::BrowserInstanceGroupModel) };
    inline GetBrowserInstanceGroupResponseBody& setBrowserInstanceGroupModel(const GetBrowserInstanceGroupResponseBody::BrowserInstanceGroupModel & browserInstanceGroupModel) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupModel_, browserInstanceGroupModel) };
    inline GetBrowserInstanceGroupResponseBody& setBrowserInstanceGroupModel(GetBrowserInstanceGroupResponseBody::BrowserInstanceGroupModel && browserInstanceGroupModel) { DARABONBA_PTR_SET_RVALUE(browserInstanceGroupModel_, browserInstanceGroupModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBrowserInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the browser group.
    shared_ptr<GetBrowserInstanceGroupResponseBody::BrowserInstanceGroupModel> browserInstanceGroupModel_ {};
    // The request ID, which is used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
