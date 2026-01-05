// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyPolicyGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_TO_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_TO_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_TO_JSON(NetRedirectPolicy, netRedirectPolicy_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_FROM_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_FROM_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_FROM_JSON(NetRedirectPolicy, netRedirectPolicy_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    ModifyPolicyGroupRequest() = default ;
    ModifyPolicyGroupRequest(const ModifyPolicyGroupRequest &) = default ;
    ModifyPolicyGroupRequest(ModifyPolicyGroupRequest &&) = default ;
    ModifyPolicyGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyGroupRequest() = default ;
    ModifyPolicyGroupRequest& operator=(const ModifyPolicyGroupRequest &) = default ;
    ModifyPolicyGroupRequest& operator=(ModifyPolicyGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Watermark : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Watermark& obj) { 
        DARABONBA_PTR_TO_JSON(WatermarkColor, watermarkColor_);
        DARABONBA_PTR_TO_JSON(WatermarkCustomText, watermarkCustomText_);
        DARABONBA_PTR_TO_JSON(WatermarkFontSize, watermarkFontSize_);
        DARABONBA_PTR_TO_JSON(WatermarkSwitch, watermarkSwitch_);
        DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
        DARABONBA_PTR_TO_JSON(WatermarkTypes, watermarkTypes_);
      };
      friend void from_json(const Darabonba::Json& j, Watermark& obj) { 
        DARABONBA_PTR_FROM_JSON(WatermarkColor, watermarkColor_);
        DARABONBA_PTR_FROM_JSON(WatermarkCustomText, watermarkCustomText_);
        DARABONBA_PTR_FROM_JSON(WatermarkFontSize, watermarkFontSize_);
        DARABONBA_PTR_FROM_JSON(WatermarkSwitch, watermarkSwitch_);
        DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
        DARABONBA_PTR_FROM_JSON(WatermarkTypes, watermarkTypes_);
      };
      Watermark() = default ;
      Watermark(const Watermark &) = default ;
      Watermark(Watermark &&) = default ;
      Watermark(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Watermark() = default ;
      Watermark& operator=(const Watermark &) = default ;
      Watermark& operator=(Watermark &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->watermarkColor_ == nullptr
        && this->watermarkCustomText_ == nullptr && this->watermarkFontSize_ == nullptr && this->watermarkSwitch_ == nullptr && this->watermarkTransparencyValue_ == nullptr && this->watermarkTypes_ == nullptr; };
      // watermarkColor Field Functions 
      bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
      void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
      inline int32_t getWatermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
      inline Watermark& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


      // watermarkCustomText Field Functions 
      bool hasWatermarkCustomText() const { return this->watermarkCustomText_ != nullptr;};
      void deleteWatermarkCustomText() { this->watermarkCustomText_ = nullptr;};
      inline string getWatermarkCustomText() const { DARABONBA_PTR_GET_DEFAULT(watermarkCustomText_, "") };
      inline Watermark& setWatermarkCustomText(string watermarkCustomText) { DARABONBA_PTR_SET_VALUE(watermarkCustomText_, watermarkCustomText) };


      // watermarkFontSize Field Functions 
      bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
      void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
      inline int32_t getWatermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
      inline Watermark& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


      // watermarkSwitch Field Functions 
      bool hasWatermarkSwitch() const { return this->watermarkSwitch_ != nullptr;};
      void deleteWatermarkSwitch() { this->watermarkSwitch_ = nullptr;};
      inline string getWatermarkSwitch() const { DARABONBA_PTR_GET_DEFAULT(watermarkSwitch_, "") };
      inline Watermark& setWatermarkSwitch(string watermarkSwitch) { DARABONBA_PTR_SET_VALUE(watermarkSwitch_, watermarkSwitch) };


      // watermarkTransparencyValue Field Functions 
      bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
      void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
      inline int32_t getWatermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
      inline Watermark& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


      // watermarkTypes Field Functions 
      bool hasWatermarkTypes() const { return this->watermarkTypes_ != nullptr;};
      void deleteWatermarkTypes() { this->watermarkTypes_ = nullptr;};
      inline const vector<string> & getWatermarkTypes() const { DARABONBA_PTR_GET_CONST(watermarkTypes_, vector<string>) };
      inline vector<string> getWatermarkTypes() { DARABONBA_PTR_GET(watermarkTypes_, vector<string>) };
      inline Watermark& setWatermarkTypes(const vector<string> & watermarkTypes) { DARABONBA_PTR_SET_VALUE(watermarkTypes_, watermarkTypes) };
      inline Watermark& setWatermarkTypes(vector<string> && watermarkTypes) { DARABONBA_PTR_SET_RVALUE(watermarkTypes_, watermarkTypes) };


    protected:
      shared_ptr<int32_t> watermarkColor_ {};
      shared_ptr<string> watermarkCustomText_ {};
      shared_ptr<int32_t> watermarkFontSize_ {};
      shared_ptr<string> watermarkSwitch_ {};
      shared_ptr<int32_t> watermarkTransparencyValue_ {};
      shared_ptr<vector<string>> watermarkTypes_ {};
    };

    class NetRedirectPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetRedirectPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(CustomProxy, customProxy_);
        DARABONBA_PTR_TO_JSON(HostAddr, hostAddr_);
        DARABONBA_PTR_TO_JSON(NetRedirect, netRedirect_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ProxyPassword, proxyPassword_);
        DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
        DARABONBA_PTR_TO_JSON(ProxyUserName, proxyUserName_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, NetRedirectPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomProxy, customProxy_);
        DARABONBA_PTR_FROM_JSON(HostAddr, hostAddr_);
        DARABONBA_PTR_FROM_JSON(NetRedirect, netRedirect_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ProxyPassword, proxyPassword_);
        DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
        DARABONBA_PTR_FROM_JSON(ProxyUserName, proxyUserName_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      NetRedirectPolicy() = default ;
      NetRedirectPolicy(const NetRedirectPolicy &) = default ;
      NetRedirectPolicy(NetRedirectPolicy &&) = default ;
      NetRedirectPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetRedirectPolicy() = default ;
      NetRedirectPolicy& operator=(const NetRedirectPolicy &) = default ;
      NetRedirectPolicy& operator=(NetRedirectPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
          DARABONBA_PTR_TO_JSON(Target, target_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleType_ == nullptr
        && this->target_ == nullptr; };
        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline Rules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline Rules& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      protected:
        shared_ptr<string> ruleType_ {};
        shared_ptr<string> target_ {};
      };

      virtual bool empty() const override { return this->customProxy_ == nullptr
        && this->hostAddr_ == nullptr && this->netRedirect_ == nullptr && this->port_ == nullptr && this->proxyPassword_ == nullptr && this->proxyType_ == nullptr
        && this->proxyUserName_ == nullptr && this->rules_ == nullptr; };
      // customProxy Field Functions 
      bool hasCustomProxy() const { return this->customProxy_ != nullptr;};
      void deleteCustomProxy() { this->customProxy_ = nullptr;};
      inline string getCustomProxy() const { DARABONBA_PTR_GET_DEFAULT(customProxy_, "") };
      inline NetRedirectPolicy& setCustomProxy(string customProxy) { DARABONBA_PTR_SET_VALUE(customProxy_, customProxy) };


      // hostAddr Field Functions 
      bool hasHostAddr() const { return this->hostAddr_ != nullptr;};
      void deleteHostAddr() { this->hostAddr_ = nullptr;};
      inline string getHostAddr() const { DARABONBA_PTR_GET_DEFAULT(hostAddr_, "") };
      inline NetRedirectPolicy& setHostAddr(string hostAddr) { DARABONBA_PTR_SET_VALUE(hostAddr_, hostAddr) };


      // netRedirect Field Functions 
      bool hasNetRedirect() const { return this->netRedirect_ != nullptr;};
      void deleteNetRedirect() { this->netRedirect_ = nullptr;};
      inline string getNetRedirect() const { DARABONBA_PTR_GET_DEFAULT(netRedirect_, "") };
      inline NetRedirectPolicy& setNetRedirect(string netRedirect) { DARABONBA_PTR_SET_VALUE(netRedirect_, netRedirect) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline NetRedirectPolicy& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // proxyPassword Field Functions 
      bool hasProxyPassword() const { return this->proxyPassword_ != nullptr;};
      void deleteProxyPassword() { this->proxyPassword_ = nullptr;};
      inline string getProxyPassword() const { DARABONBA_PTR_GET_DEFAULT(proxyPassword_, "") };
      inline NetRedirectPolicy& setProxyPassword(string proxyPassword) { DARABONBA_PTR_SET_VALUE(proxyPassword_, proxyPassword) };


      // proxyType Field Functions 
      bool hasProxyType() const { return this->proxyType_ != nullptr;};
      void deleteProxyType() { this->proxyType_ = nullptr;};
      inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
      inline NetRedirectPolicy& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


      // proxyUserName Field Functions 
      bool hasProxyUserName() const { return this->proxyUserName_ != nullptr;};
      void deleteProxyUserName() { this->proxyUserName_ = nullptr;};
      inline string getProxyUserName() const { DARABONBA_PTR_GET_DEFAULT(proxyUserName_, "") };
      inline NetRedirectPolicy& setProxyUserName(string proxyUserName) { DARABONBA_PTR_SET_VALUE(proxyUserName_, proxyUserName) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<NetRedirectPolicy::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<NetRedirectPolicy::Rules>) };
      inline vector<NetRedirectPolicy::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<NetRedirectPolicy::Rules>) };
      inline NetRedirectPolicy& setRules(const vector<NetRedirectPolicy::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline NetRedirectPolicy& setRules(vector<NetRedirectPolicy::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // Specifies whether to manually configure a custom proxy.
      // 
      // Valid values:
      // 
      // *   off
      // *   on
      shared_ptr<string> customProxy_ {};
      // The IPv4 address of the custom proxy.
      shared_ptr<string> hostAddr_ {};
      // Specifies whether to enable network redirection.
      // 
      // Valid values:
      // 
      // *   off
      // *   on
      shared_ptr<string> netRedirect_ {};
      // The port of the custom proxy. Valid values: 1 to 65535.
      shared_ptr<string> port_ {};
      // The password of the proxy. The password must be 1 to 256 in length and cannot contain Chinese character or space characters.
      shared_ptr<string> proxyPassword_ {};
      // The type of the proxy protocol.
      // 
      // Valid values:
      // 
      // *   socks5.
      shared_ptr<string> proxyType_ {};
      // The username of the proxy. The name must be 1 to 256 in length and cannot contain Chinese character or space characters.
      shared_ptr<string> proxyUserName_ {};
      shared_ptr<vector<NetRedirectPolicy::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->cameraRedirect_ == nullptr
        && this->clipboard_ == nullptr && this->html5FileTransfer_ == nullptr && this->localDrive_ == nullptr && this->lockResolution_ == nullptr && this->netRedirectPolicy_ == nullptr
        && this->policyGroupId_ == nullptr && this->policyGroupName_ == nullptr && this->resolutionHeight_ == nullptr && this->resolutionWidth_ == nullptr && this->watermark_ == nullptr; };
    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string getCameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline ModifyPolicyGroupRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string getClipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ModifyPolicyGroupRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string getHtml5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ModifyPolicyGroupRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string getLocalDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline ModifyPolicyGroupRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // lockResolution Field Functions 
    bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
    void deleteLockResolution() { this->lockResolution_ = nullptr;};
    inline string getLockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
    inline ModifyPolicyGroupRequest& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


    // netRedirectPolicy Field Functions 
    bool hasNetRedirectPolicy() const { return this->netRedirectPolicy_ != nullptr;};
    void deleteNetRedirectPolicy() { this->netRedirectPolicy_ = nullptr;};
    inline const ModifyPolicyGroupRequest::NetRedirectPolicy & getNetRedirectPolicy() const { DARABONBA_PTR_GET_CONST(netRedirectPolicy_, ModifyPolicyGroupRequest::NetRedirectPolicy) };
    inline ModifyPolicyGroupRequest::NetRedirectPolicy getNetRedirectPolicy() { DARABONBA_PTR_GET(netRedirectPolicy_, ModifyPolicyGroupRequest::NetRedirectPolicy) };
    inline ModifyPolicyGroupRequest& setNetRedirectPolicy(const ModifyPolicyGroupRequest::NetRedirectPolicy & netRedirectPolicy) { DARABONBA_PTR_SET_VALUE(netRedirectPolicy_, netRedirectPolicy) };
    inline ModifyPolicyGroupRequest& setNetRedirectPolicy(ModifyPolicyGroupRequest::NetRedirectPolicy && netRedirectPolicy) { DARABONBA_PTR_SET_RVALUE(netRedirectPolicy_, netRedirectPolicy) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyPolicyGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupName Field Functions 
    bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
    void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
    inline string getPolicyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
    inline ModifyPolicyGroupRequest& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline ModifyPolicyGroupRequest& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline ModifyPolicyGroupRequest& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const ModifyPolicyGroupRequest::Watermark & getWatermark() const { DARABONBA_PTR_GET_CONST(watermark_, ModifyPolicyGroupRequest::Watermark) };
    inline ModifyPolicyGroupRequest::Watermark getWatermark() { DARABONBA_PTR_GET(watermark_, ModifyPolicyGroupRequest::Watermark) };
    inline ModifyPolicyGroupRequest& setWatermark(const ModifyPolicyGroupRequest::Watermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline ModifyPolicyGroupRequest& setWatermark(ModifyPolicyGroupRequest::Watermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


  protected:
    // Specifies whether to enable the webcam redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> cameraRedirect_ {};
    // The read/write permissions on the clipboard.
    // 
    // Valid values:
    // 
    // *   read: read-only.
    // *   readwrite: ready and write.
    // *   off: read/write disabled.
    shared_ptr<string> clipboard_ {};
    // The file transfer policy of the Alibaba Cloud Workspace web client.
    // 
    // Valid values:
    // 
    // *   all: File upload and download are supported.
    // *   download: Only file download is supported.
    // *   upload: Only file upload is supported.
    // *   off: File upload or download is forbidden.
    shared_ptr<string> html5FileTransfer_ {};
    // The read/write permissions on the on-premises drive.
    // 
    // Valid values:
    // 
    // *   read: read-only.
    // *   readwrite: ready and write.
    // *   off: read/write disabled.
    shared_ptr<string> localDrive_ {};
    // Specifies whether to lock the resolution.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    shared_ptr<string> lockResolution_ {};
    // The network redirection policy.
    shared_ptr<ModifyPolicyGroupRequest::NetRedirectPolicy> netRedirectPolicy_ {};
    // The ID of the policy.
    shared_ptr<string> policyGroupId_ {};
    // The name of the policy.
    shared_ptr<string> policyGroupName_ {};
    // The height of the resolution. Unit: pixels.
    shared_ptr<int32_t> resolutionHeight_ {};
    // The width of the resolution. Unit: pixels.
    shared_ptr<int32_t> resolutionWidth_ {};
    shared_ptr<ModifyPolicyGroupRequest::Watermark> watermark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
