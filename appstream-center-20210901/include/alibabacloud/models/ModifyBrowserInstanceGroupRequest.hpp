// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUEST_HPP_
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
  class ModifyBrowserInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserConfig, browserConfig_);
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Timers, timers_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserConfig, browserConfig_);
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Timers, timers_);
    };
    ModifyBrowserInstanceGroupRequest() = default ;
    ModifyBrowserInstanceGroupRequest(const ModifyBrowserInstanceGroupRequest &) = default ;
    ModifyBrowserInstanceGroupRequest(ModifyBrowserInstanceGroupRequest &&) = default ;
    ModifyBrowserInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequest() = default ;
    ModifyBrowserInstanceGroupRequest& operator=(const ModifyBrowserInstanceGroupRequest &) = default ;
    ModifyBrowserInstanceGroupRequest& operator=(ModifyBrowserInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The interval.
      shared_ptr<int32_t> interval_ {};
      // The timer type:
      // 
      // Valid value:
      // 
      // *   SESSION_TIMEOUT: Defines the timeout period before a disconnected session is terminated.
      shared_ptr<string> timerType_ {};
    };

    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(ClipboardPolicy, clipboardPolicy_);
        DARABONBA_PTR_TO_JSON(DisconnectKeepSession, disconnectKeepSession_);
        DARABONBA_PTR_TO_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
        DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
        DARABONBA_PTR_TO_JSON(NoOperationDisconnect, noOperationDisconnect_);
        DARABONBA_PTR_TO_JSON(NoOperationDisconnectTime, noOperationDisconnectTime_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
        DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
        DARABONBA_PTR_TO_JSON(WatermarkPolicy, watermarkPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(ClipboardPolicy, clipboardPolicy_);
        DARABONBA_PTR_FROM_JSON(DisconnectKeepSession, disconnectKeepSession_);
        DARABONBA_PTR_FROM_JSON(DisconnectKeepSessionTime, disconnectKeepSessionTime_);
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
        // Specifies whether to enable the watermark.
        // 
        // Valid values:
        // 
        // *   off
        // *   on
        shared_ptr<string> watermarkSwitch_ {};
        // The watermark types.
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
        // The frame rate.
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
          DARABONBA_PTR_TO_JSON(TextClipboard, textClipboard_);
        };
        friend void from_json(const Darabonba::Json& j, ClipboardPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
          DARABONBA_PTR_FROM_JSON(ClipboardReadLimit, clipboardReadLimit_);
          DARABONBA_PTR_FROM_JSON(ClipboardScope, clipboardScope_);
          DARABONBA_PTR_FROM_JSON(ClipboardSizeUnit, clipboardSizeUnit_);
          DARABONBA_PTR_FROM_JSON(ClipboardWriteLimit, clipboardWriteLimit_);
          DARABONBA_PTR_FROM_JSON(FileClipboard, fileClipboard_);
          DARABONBA_PTR_FROM_JSON(RichTextClipboard, richTextClipboard_);
          DARABONBA_PTR_FROM_JSON(TextClipboard, textClipboard_);
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
        && this->richTextClipboard_ == nullptr && this->textClipboard_ == nullptr; };
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


        // textClipboard Field Functions 
        bool hasTextClipboard() const { return this->textClipboard_ != nullptr;};
        void deleteTextClipboard() { this->textClipboard_ = nullptr;};
        inline string getTextClipboard() const { DARABONBA_PTR_GET_DEFAULT(textClipboard_, "") };
        inline ClipboardPolicy& setTextClipboard(string textClipboard) { DARABONBA_PTR_SET_VALUE(textClipboard_, textClipboard) };


      protected:
        // The clipboard policy.
        // 
        // Valid values:
        // 
        // *   read: Allows copying from the local device to the cloud browser.
        // *   readwrite: Allows copying in both directions.
        // *   write: Allows copying from the cloud browser to the local device.
        // *   off: Blocks copying in both directions.
        shared_ptr<string> clipboard_ {};
        // The maximum number of characters allowed when copying from the clipboard.
        shared_ptr<int32_t> clipboardReadLimit_ {};
        // The clipboard control scope.
        // 
        // Valid values:
        // 
        // *   grained: fine-grained control
        // *   global: global control
        shared_ptr<string> clipboardScope_ {};
        shared_ptr<string> clipboardSizeUnit_ {};
        // The maximum number of characters allowed when copying to the clipboard.
        shared_ptr<int32_t> clipboardWriteLimit_ {};
        // The file clipboard policy.
        // 
        // Valid values:
        // 
        // *   read: Allows copying from the local device to the cloud browser.
        // *   readwrite: Allows copying in both directions.
        // *   write: Allows copying from the cloud browser to the local device.
        // *   off: Blocks copying in both directions.
        shared_ptr<string> fileClipboard_ {};
        // The rich text clipboard policy.
        // 
        // Valid values:
        // 
        // *   read: Allows copying from the local device to the cloud browser.
        // *   readwrite: Allows copying in both directions.
        // *   write: Allows copying from the cloud browser to the local device.
        // *   off: Blocks copying in both directions.
        shared_ptr<string> richTextClipboard_ {};
        // The text clipboard policy.
        // 
        // Valid values:
        // 
        // *   read: Allows copying from the local device to the cloud browser.
        // *   readwrite: Allows copying in both directions.
        // *   write: Allows copying from the cloud browser to the local device.
        // *   off: Blocks copying in both directions.
        shared_ptr<string> textClipboard_ {};
      };

      virtual bool empty() const override { return this->clipboardPolicy_ == nullptr
        && this->disconnectKeepSession_ == nullptr && this->disconnectKeepSessionTime_ == nullptr && this->html5FileTransfer_ == nullptr && this->noOperationDisconnect_ == nullptr && this->noOperationDisconnectTime_ == nullptr
        && this->policyId_ == nullptr && this->policyVersion_ == nullptr && this->videoPolicy_ == nullptr && this->watermarkPolicy_ == nullptr; };
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
      // The settings related to clipboard control.
      shared_ptr<Policy::ClipboardPolicy> clipboardPolicy_ {};
      // Defines what happens to a session when a user disconnects.
      // 
      // Valid values:
      // 
      // *   customTime: The session will be terminated after a custom-defined timeout.
      // *   persistent: The session will never be automatically terminated..
      shared_ptr<string> disconnectKeepSession_ {};
      // The session persistence duration.
      shared_ptr<int32_t> disconnectKeepSessionTime_ {};
      // The file transfer policy on the web client.
      shared_ptr<string> html5FileTransfer_ {};
      shared_ptr<string> noOperationDisconnect_ {};
      shared_ptr<int32_t> noOperationDisconnectTime_ {};
      // The ID of the policy.
      shared_ptr<string> policyId_ {};
      // The policy version.
      // 
      // Valid value:
      // 
      // *   Center: center policy
      shared_ptr<string> policyVersion_ {};
      // The display policy.
      shared_ptr<Policy::VideoPolicy> videoPolicy_ {};
      // The watermark configuration.
      shared_ptr<Policy::WatermarkPolicy> watermarkPolicy_ {};
    };

    class Network : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Network& obj) { 
        DARABONBA_PTR_TO_JSON(AccessRestriction, accessRestriction_);
        DARABONBA_PTR_TO_JSON(RemoveRestrictedURLIds, removeRestrictedURLIds_);
        DARABONBA_PTR_TO_JSON(RestrictedURLs, restrictedURLs_);
      };
      friend void from_json(const Darabonba::Json& j, Network& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessRestriction, accessRestriction_);
        DARABONBA_PTR_FROM_JSON(RemoveRestrictedURLIds, removeRestrictedURLIds_);
        DARABONBA_PTR_FROM_JSON(RestrictedURLs, restrictedURLs_);
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
        // The ID of the domain name. This parameter is required only when you want to modify the domain restriction configuration.
        shared_ptr<string> restrictedURLId_ {};
        // The restricted domain name.
        shared_ptr<string> URL_ {};
      };

      virtual bool empty() const override { return this->accessRestriction_ == nullptr
        && this->removeRestrictedURLIds_ == nullptr && this->restrictedURLs_ == nullptr; };
      // accessRestriction Field Functions 
      bool hasAccessRestriction() const { return this->accessRestriction_ != nullptr;};
      void deleteAccessRestriction() { this->accessRestriction_ = nullptr;};
      inline string getAccessRestriction() const { DARABONBA_PTR_GET_DEFAULT(accessRestriction_, "") };
      inline Network& setAccessRestriction(string accessRestriction) { DARABONBA_PTR_SET_VALUE(accessRestriction_, accessRestriction) };


      // removeRestrictedURLIds Field Functions 
      bool hasRemoveRestrictedURLIds() const { return this->removeRestrictedURLIds_ != nullptr;};
      void deleteRemoveRestrictedURLIds() { this->removeRestrictedURLIds_ = nullptr;};
      inline const vector<string> & getRemoveRestrictedURLIds() const { DARABONBA_PTR_GET_CONST(removeRestrictedURLIds_, vector<string>) };
      inline vector<string> getRemoveRestrictedURLIds() { DARABONBA_PTR_GET(removeRestrictedURLIds_, vector<string>) };
      inline Network& setRemoveRestrictedURLIds(const vector<string> & removeRestrictedURLIds) { DARABONBA_PTR_SET_VALUE(removeRestrictedURLIds_, removeRestrictedURLIds) };
      inline Network& setRemoveRestrictedURLIds(vector<string> && removeRestrictedURLIds) { DARABONBA_PTR_SET_RVALUE(removeRestrictedURLIds_, removeRestrictedURLIds) };


      // restrictedURLs Field Functions 
      bool hasRestrictedURLs() const { return this->restrictedURLs_ != nullptr;};
      void deleteRestrictedURLs() { this->restrictedURLs_ = nullptr;};
      inline const vector<Network::RestrictedURLs> & getRestrictedURLs() const { DARABONBA_PTR_GET_CONST(restrictedURLs_, vector<Network::RestrictedURLs>) };
      inline vector<Network::RestrictedURLs> getRestrictedURLs() { DARABONBA_PTR_GET(restrictedURLs_, vector<Network::RestrictedURLs>) };
      inline Network& setRestrictedURLs(const vector<Network::RestrictedURLs> & restrictedURLs) { DARABONBA_PTR_SET_VALUE(restrictedURLs_, restrictedURLs) };
      inline Network& setRestrictedURLs(vector<Network::RestrictedURLs> && restrictedURLs) { DARABONBA_PTR_SET_RVALUE(restrictedURLs_, restrictedURLs) };


    protected:
      // The type of the access control list.
      // 
      // Valid value:
      // 
      // *   ALLOW_LIST: The whitelist.
      shared_ptr<string> accessRestriction_ {};
      // The domain names to be removed.
      shared_ptr<vector<string>> removeRestrictedURLIds_ {};
      // The domain restriction configurations.
      shared_ptr<vector<Network::RestrictedURLs>> restrictedURLs_ {};
    };

    class BrowserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BrowserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Bookmarks, bookmarks_);
        DARABONBA_PTR_TO_JSON(BrowserParam, browserParam_);
        DARABONBA_PTR_TO_JSON(Homepage, homepage_);
        DARABONBA_PTR_TO_JSON(RemoveBookmarks, removeBookmarks_);
      };
      friend void from_json(const Darabonba::Json& j, BrowserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Bookmarks, bookmarks_);
        DARABONBA_PTR_FROM_JSON(BrowserParam, browserParam_);
        DARABONBA_PTR_FROM_JSON(Homepage, homepage_);
        DARABONBA_PTR_FROM_JSON(RemoveBookmarks, removeBookmarks_);
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
        // The folder where the bookmark is located.
        shared_ptr<string> bookmarkFolder_ {};
        // The ID of the bookmark. This parameter needs to be specified only to modify the bookmark.
        shared_ptr<string> bookmarkId_ {};
        // The name of the bookmark.
        // 
        // This parameter is required.
        shared_ptr<string> bookmarkName_ {};
        // The URL of the bookmark.
        // 
        // This parameter is required.
        shared_ptr<string> bookmarkURL_ {};
      };

      virtual bool empty() const override { return this->bookmarks_ == nullptr
        && this->browserParam_ == nullptr && this->homepage_ == nullptr && this->removeBookmarks_ == nullptr; };
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


      // homepage Field Functions 
      bool hasHomepage() const { return this->homepage_ != nullptr;};
      void deleteHomepage() { this->homepage_ = nullptr;};
      inline string getHomepage() const { DARABONBA_PTR_GET_DEFAULT(homepage_, "") };
      inline BrowserConfig& setHomepage(string homepage) { DARABONBA_PTR_SET_VALUE(homepage_, homepage) };


      // removeBookmarks Field Functions 
      bool hasRemoveBookmarks() const { return this->removeBookmarks_ != nullptr;};
      void deleteRemoveBookmarks() { this->removeBookmarks_ = nullptr;};
      inline const vector<string> & getRemoveBookmarks() const { DARABONBA_PTR_GET_CONST(removeBookmarks_, vector<string>) };
      inline vector<string> getRemoveBookmarks() { DARABONBA_PTR_GET(removeBookmarks_, vector<string>) };
      inline BrowserConfig& setRemoveBookmarks(const vector<string> & removeBookmarks) { DARABONBA_PTR_SET_VALUE(removeBookmarks_, removeBookmarks) };
      inline BrowserConfig& setRemoveBookmarks(vector<string> && removeBookmarks) { DARABONBA_PTR_SET_RVALUE(removeBookmarks_, removeBookmarks) };


    protected:
      // The bookmark.
      shared_ptr<vector<BrowserConfig::Bookmarks>> bookmarks_ {};
      // The startup parameter.
      shared_ptr<string> browserParam_ {};
      // The home page.
      shared_ptr<string> homepage_ {};
      // The removed bookmarks.
      shared_ptr<vector<string>> removeBookmarks_ {};
    };

    virtual bool empty() const override { return this->browserConfig_ == nullptr
        && this->browserInstanceGroupId_ == nullptr && this->cloudBrowserName_ == nullptr && this->network_ == nullptr && this->policy_ == nullptr && this->timers_ == nullptr; };
    // browserConfig Field Functions 
    bool hasBrowserConfig() const { return this->browserConfig_ != nullptr;};
    void deleteBrowserConfig() { this->browserConfig_ = nullptr;};
    inline const ModifyBrowserInstanceGroupRequest::BrowserConfig & getBrowserConfig() const { DARABONBA_PTR_GET_CONST(browserConfig_, ModifyBrowserInstanceGroupRequest::BrowserConfig) };
    inline ModifyBrowserInstanceGroupRequest::BrowserConfig getBrowserConfig() { DARABONBA_PTR_GET(browserConfig_, ModifyBrowserInstanceGroupRequest::BrowserConfig) };
    inline ModifyBrowserInstanceGroupRequest& setBrowserConfig(const ModifyBrowserInstanceGroupRequest::BrowserConfig & browserConfig) { DARABONBA_PTR_SET_VALUE(browserConfig_, browserConfig) };
    inline ModifyBrowserInstanceGroupRequest& setBrowserConfig(ModifyBrowserInstanceGroupRequest::BrowserConfig && browserConfig) { DARABONBA_PTR_SET_RVALUE(browserConfig_, browserConfig) };


    // browserInstanceGroupId Field Functions 
    bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
    void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
    inline string getBrowserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
    inline ModifyBrowserInstanceGroupRequest& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


    // cloudBrowserName Field Functions 
    bool hasCloudBrowserName() const { return this->cloudBrowserName_ != nullptr;};
    void deleteCloudBrowserName() { this->cloudBrowserName_ = nullptr;};
    inline string getCloudBrowserName() const { DARABONBA_PTR_GET_DEFAULT(cloudBrowserName_, "") };
    inline ModifyBrowserInstanceGroupRequest& setCloudBrowserName(string cloudBrowserName) { DARABONBA_PTR_SET_VALUE(cloudBrowserName_, cloudBrowserName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const ModifyBrowserInstanceGroupRequest::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, ModifyBrowserInstanceGroupRequest::Network) };
    inline ModifyBrowserInstanceGroupRequest::Network getNetwork() { DARABONBA_PTR_GET(network_, ModifyBrowserInstanceGroupRequest::Network) };
    inline ModifyBrowserInstanceGroupRequest& setNetwork(const ModifyBrowserInstanceGroupRequest::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ModifyBrowserInstanceGroupRequest& setNetwork(ModifyBrowserInstanceGroupRequest::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const ModifyBrowserInstanceGroupRequest::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, ModifyBrowserInstanceGroupRequest::Policy) };
    inline ModifyBrowserInstanceGroupRequest::Policy getPolicy() { DARABONBA_PTR_GET(policy_, ModifyBrowserInstanceGroupRequest::Policy) };
    inline ModifyBrowserInstanceGroupRequest& setPolicy(const ModifyBrowserInstanceGroupRequest::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline ModifyBrowserInstanceGroupRequest& setPolicy(ModifyBrowserInstanceGroupRequest::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // timers Field Functions 
    bool hasTimers() const { return this->timers_ != nullptr;};
    void deleteTimers() { this->timers_ = nullptr;};
    inline const vector<ModifyBrowserInstanceGroupRequest::Timers> & getTimers() const { DARABONBA_PTR_GET_CONST(timers_, vector<ModifyBrowserInstanceGroupRequest::Timers>) };
    inline vector<ModifyBrowserInstanceGroupRequest::Timers> getTimers() { DARABONBA_PTR_GET(timers_, vector<ModifyBrowserInstanceGroupRequest::Timers>) };
    inline ModifyBrowserInstanceGroupRequest& setTimers(const vector<ModifyBrowserInstanceGroupRequest::Timers> & timers) { DARABONBA_PTR_SET_VALUE(timers_, timers) };
    inline ModifyBrowserInstanceGroupRequest& setTimers(vector<ModifyBrowserInstanceGroupRequest::Timers> && timers) { DARABONBA_PTR_SET_RVALUE(timers_, timers) };


  protected:
    // The browser settings.
    shared_ptr<ModifyBrowserInstanceGroupRequest::BrowserConfig> browserConfig_ {};
    // The ID of the cloud browser to be modified.
    // 
    // This parameter is required.
    shared_ptr<string> browserInstanceGroupId_ {};
    // The name of the cloud browser.
    shared_ptr<string> cloudBrowserName_ {};
    // The network configurations.
    shared_ptr<ModifyBrowserInstanceGroupRequest::Network> network_ {};
    // The access policy.
    shared_ptr<ModifyBrowserInstanceGroupRequest::Policy> policy_ {};
    // The timer.
    shared_ptr<vector<ModifyBrowserInstanceGroupRequest::Timers>> timers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
