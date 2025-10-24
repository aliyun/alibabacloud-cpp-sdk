// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestNetRedirectPolicy.hpp>
#include <alibabacloud/models/ModifyPolicyGroupRequestWatermark.hpp>
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
    virtual bool empty() const override { return this->cameraRedirect_ == nullptr
        && return this->clipboard_ == nullptr && return this->html5FileTransfer_ == nullptr && return this->localDrive_ == nullptr && return this->lockResolution_ == nullptr && return this->netRedirectPolicy_ == nullptr
        && return this->policyGroupId_ == nullptr && return this->policyGroupName_ == nullptr && return this->resolutionHeight_ == nullptr && return this->resolutionWidth_ == nullptr && return this->watermark_ == nullptr; };
    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline ModifyPolicyGroupRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ModifyPolicyGroupRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ModifyPolicyGroupRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline ModifyPolicyGroupRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // lockResolution Field Functions 
    bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
    void deleteLockResolution() { this->lockResolution_ = nullptr;};
    inline string lockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
    inline ModifyPolicyGroupRequest& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


    // netRedirectPolicy Field Functions 
    bool hasNetRedirectPolicy() const { return this->netRedirectPolicy_ != nullptr;};
    void deleteNetRedirectPolicy() { this->netRedirectPolicy_ = nullptr;};
    inline const ModifyPolicyGroupRequestNetRedirectPolicy & netRedirectPolicy() const { DARABONBA_PTR_GET_CONST(netRedirectPolicy_, ModifyPolicyGroupRequestNetRedirectPolicy) };
    inline ModifyPolicyGroupRequestNetRedirectPolicy netRedirectPolicy() { DARABONBA_PTR_GET(netRedirectPolicy_, ModifyPolicyGroupRequestNetRedirectPolicy) };
    inline ModifyPolicyGroupRequest& setNetRedirectPolicy(const ModifyPolicyGroupRequestNetRedirectPolicy & netRedirectPolicy) { DARABONBA_PTR_SET_VALUE(netRedirectPolicy_, netRedirectPolicy) };
    inline ModifyPolicyGroupRequest& setNetRedirectPolicy(ModifyPolicyGroupRequestNetRedirectPolicy && netRedirectPolicy) { DARABONBA_PTR_SET_RVALUE(netRedirectPolicy_, netRedirectPolicy) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyPolicyGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupName Field Functions 
    bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
    void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
    inline string policyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
    inline ModifyPolicyGroupRequest& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline ModifyPolicyGroupRequest& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline ModifyPolicyGroupRequest& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const ModifyPolicyGroupRequestWatermark & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, ModifyPolicyGroupRequestWatermark) };
    inline ModifyPolicyGroupRequestWatermark watermark() { DARABONBA_PTR_GET(watermark_, ModifyPolicyGroupRequestWatermark) };
    inline ModifyPolicyGroupRequest& setWatermark(const ModifyPolicyGroupRequestWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline ModifyPolicyGroupRequest& setWatermark(ModifyPolicyGroupRequestWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


  protected:
    // Specifies whether to enable the webcam redirection feature.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> cameraRedirect_ = nullptr;
    // The read/write permissions on the clipboard.
    // 
    // Valid values:
    // 
    // *   read: read-only.
    // *   readwrite: ready and write.
    // *   off: read/write disabled.
    std::shared_ptr<string> clipboard_ = nullptr;
    // The file transfer policy of the Alibaba Cloud Workspace web client.
    // 
    // Valid values:
    // 
    // *   all: File upload and download are supported.
    // *   download: Only file download is supported.
    // *   upload: Only file upload is supported.
    // *   off: File upload or download is forbidden.
    std::shared_ptr<string> html5FileTransfer_ = nullptr;
    // The read/write permissions on the on-premises drive.
    // 
    // Valid values:
    // 
    // *   read: read-only.
    // *   readwrite: ready and write.
    // *   off: read/write disabled.
    std::shared_ptr<string> localDrive_ = nullptr;
    // Specifies whether to lock the resolution.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> lockResolution_ = nullptr;
    // The network redirection policy.
    std::shared_ptr<ModifyPolicyGroupRequestNetRedirectPolicy> netRedirectPolicy_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyGroupName_ = nullptr;
    // The height of the resolution. Unit: pixels.
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    // The width of the resolution. Unit: pixels.
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    std::shared_ptr<ModifyPolicyGroupRequestWatermark> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
