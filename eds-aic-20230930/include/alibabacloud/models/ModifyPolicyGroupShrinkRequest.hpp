// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyPolicyGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_TO_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_TO_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_TO_JSON(NetRedirectPolicy, netRedirectPolicyShrink_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(Watermark, watermarkShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_FROM_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_FROM_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_FROM_JSON(NetRedirectPolicy, netRedirectPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermarkShrink_);
    };
    ModifyPolicyGroupShrinkRequest() = default ;
    ModifyPolicyGroupShrinkRequest(const ModifyPolicyGroupShrinkRequest &) = default ;
    ModifyPolicyGroupShrinkRequest(ModifyPolicyGroupShrinkRequest &&) = default ;
    ModifyPolicyGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyGroupShrinkRequest() = default ;
    ModifyPolicyGroupShrinkRequest& operator=(const ModifyPolicyGroupShrinkRequest &) = default ;
    ModifyPolicyGroupShrinkRequest& operator=(ModifyPolicyGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cameraRedirect_ != nullptr
        && this->clipboard_ != nullptr && this->html5FileTransfer_ != nullptr && this->localDrive_ != nullptr && this->lockResolution_ != nullptr && this->netRedirectPolicyShrink_ != nullptr
        && this->policyGroupId_ != nullptr && this->policyGroupName_ != nullptr && this->resolutionHeight_ != nullptr && this->resolutionWidth_ != nullptr && this->watermarkShrink_ != nullptr; };
    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline ModifyPolicyGroupShrinkRequest& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ModifyPolicyGroupShrinkRequest& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ModifyPolicyGroupShrinkRequest& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline ModifyPolicyGroupShrinkRequest& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // lockResolution Field Functions 
    bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
    void deleteLockResolution() { this->lockResolution_ = nullptr;};
    inline string lockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
    inline ModifyPolicyGroupShrinkRequest& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


    // netRedirectPolicyShrink Field Functions 
    bool hasNetRedirectPolicyShrink() const { return this->netRedirectPolicyShrink_ != nullptr;};
    void deleteNetRedirectPolicyShrink() { this->netRedirectPolicyShrink_ = nullptr;};
    inline string netRedirectPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(netRedirectPolicyShrink_, "") };
    inline ModifyPolicyGroupShrinkRequest& setNetRedirectPolicyShrink(string netRedirectPolicyShrink) { DARABONBA_PTR_SET_VALUE(netRedirectPolicyShrink_, netRedirectPolicyShrink) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyPolicyGroupShrinkRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupName Field Functions 
    bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
    void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
    inline string policyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
    inline ModifyPolicyGroupShrinkRequest& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline ModifyPolicyGroupShrinkRequest& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline ModifyPolicyGroupShrinkRequest& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // watermarkShrink Field Functions 
    bool hasWatermarkShrink() const { return this->watermarkShrink_ != nullptr;};
    void deleteWatermarkShrink() { this->watermarkShrink_ = nullptr;};
    inline string watermarkShrink() const { DARABONBA_PTR_GET_DEFAULT(watermarkShrink_, "") };
    inline ModifyPolicyGroupShrinkRequest& setWatermarkShrink(string watermarkShrink) { DARABONBA_PTR_SET_VALUE(watermarkShrink_, watermarkShrink) };


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
    std::shared_ptr<string> netRedirectPolicyShrink_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyGroupName_ = nullptr;
    // The height of the resolution. Unit: pixels.
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    // The width of the resolution. Unit: pixels.
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    std::shared_ptr<string> watermarkShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
