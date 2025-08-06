// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODYPOLICYGROUPMODEL_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYGROUPSRESPONSEBODYPOLICYGROUPMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy.hpp>
#include <alibabacloud/models/ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources.hpp>
#include <alibabacloud/models/ListPolicyGroupsResponseBodyPolicyGroupModelWatermark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ListPolicyGroupsResponseBodyPolicyGroupModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyGroupsResponseBodyPolicyGroupModel& obj) { 
      DARABONBA_PTR_TO_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_TO_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_TO_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_TO_JSON(NetRedirectPolicy, netRedirectPolicy_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_TO_JSON(PolicyRelatedResources, policyRelatedResources_);
      DARABONBA_PTR_TO_JSON(SessionResolutionHeight, sessionResolutionHeight_);
      DARABONBA_PTR_TO_JSON(SessionResolutionWidth, sessionResolutionWidth_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyGroupsResponseBodyPolicyGroupModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CameraRedirect, cameraRedirect_);
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Html5FileTransfer, html5FileTransfer_);
      DARABONBA_PTR_FROM_JSON(LocalDrive, localDrive_);
      DARABONBA_PTR_FROM_JSON(LockResolution, lockResolution_);
      DARABONBA_PTR_FROM_JSON(NetRedirectPolicy, netRedirectPolicy_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_FROM_JSON(PolicyRelatedResources, policyRelatedResources_);
      DARABONBA_PTR_FROM_JSON(SessionResolutionHeight, sessionResolutionHeight_);
      DARABONBA_PTR_FROM_JSON(SessionResolutionWidth, sessionResolutionWidth_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    ListPolicyGroupsResponseBodyPolicyGroupModel() = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModel(const ListPolicyGroupsResponseBodyPolicyGroupModel &) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModel(ListPolicyGroupsResponseBodyPolicyGroupModel &&) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyGroupsResponseBodyPolicyGroupModel() = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModel& operator=(const ListPolicyGroupsResponseBodyPolicyGroupModel &) = default ;
    ListPolicyGroupsResponseBodyPolicyGroupModel& operator=(ListPolicyGroupsResponseBodyPolicyGroupModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cameraRedirect_ != nullptr
        && this->clipboard_ != nullptr && this->gmtCreate_ != nullptr && this->html5FileTransfer_ != nullptr && this->localDrive_ != nullptr && this->lockResolution_ != nullptr
        && this->netRedirectPolicy_ != nullptr && this->policyGroupId_ != nullptr && this->policyGroupName_ != nullptr && this->policyRelatedResources_ != nullptr && this->sessionResolutionHeight_ != nullptr
        && this->sessionResolutionWidth_ != nullptr && this->watermark_ != nullptr; };
    // cameraRedirect Field Functions 
    bool hasCameraRedirect() const { return this->cameraRedirect_ != nullptr;};
    void deleteCameraRedirect() { this->cameraRedirect_ = nullptr;};
    inline string cameraRedirect() const { DARABONBA_PTR_GET_DEFAULT(cameraRedirect_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setCameraRedirect(string cameraRedirect) { DARABONBA_PTR_SET_VALUE(cameraRedirect_, cameraRedirect) };


    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // html5FileTransfer Field Functions 
    bool hasHtml5FileTransfer() const { return this->html5FileTransfer_ != nullptr;};
    void deleteHtml5FileTransfer() { this->html5FileTransfer_ = nullptr;};
    inline string html5FileTransfer() const { DARABONBA_PTR_GET_DEFAULT(html5FileTransfer_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setHtml5FileTransfer(string html5FileTransfer) { DARABONBA_PTR_SET_VALUE(html5FileTransfer_, html5FileTransfer) };


    // localDrive Field Functions 
    bool hasLocalDrive() const { return this->localDrive_ != nullptr;};
    void deleteLocalDrive() { this->localDrive_ = nullptr;};
    inline string localDrive() const { DARABONBA_PTR_GET_DEFAULT(localDrive_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setLocalDrive(string localDrive) { DARABONBA_PTR_SET_VALUE(localDrive_, localDrive) };


    // lockResolution Field Functions 
    bool hasLockResolution() const { return this->lockResolution_ != nullptr;};
    void deleteLockResolution() { this->lockResolution_ = nullptr;};
    inline string lockResolution() const { DARABONBA_PTR_GET_DEFAULT(lockResolution_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setLockResolution(string lockResolution) { DARABONBA_PTR_SET_VALUE(lockResolution_, lockResolution) };


    // netRedirectPolicy Field Functions 
    bool hasNetRedirectPolicy() const { return this->netRedirectPolicy_ != nullptr;};
    void deleteNetRedirectPolicy() { this->netRedirectPolicy_ = nullptr;};
    inline const Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy & netRedirectPolicy() const { DARABONBA_PTR_GET_CONST(netRedirectPolicy_, Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy) };
    inline Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy netRedirectPolicy() { DARABONBA_PTR_GET(netRedirectPolicy_, Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setNetRedirectPolicy(const Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy & netRedirectPolicy) { DARABONBA_PTR_SET_VALUE(netRedirectPolicy_, netRedirectPolicy) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setNetRedirectPolicy(Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy && netRedirectPolicy) { DARABONBA_PTR_SET_RVALUE(netRedirectPolicy_, netRedirectPolicy) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupName Field Functions 
    bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
    void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
    inline string policyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


    // policyRelatedResources Field Functions 
    bool hasPolicyRelatedResources() const { return this->policyRelatedResources_ != nullptr;};
    void deletePolicyRelatedResources() { this->policyRelatedResources_ = nullptr;};
    inline const Models::ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources & policyRelatedResources() const { DARABONBA_PTR_GET_CONST(policyRelatedResources_, Models::ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources) };
    inline Models::ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources policyRelatedResources() { DARABONBA_PTR_GET(policyRelatedResources_, Models::ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setPolicyRelatedResources(const Models::ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources & policyRelatedResources) { DARABONBA_PTR_SET_VALUE(policyRelatedResources_, policyRelatedResources) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setPolicyRelatedResources(Models::ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources && policyRelatedResources) { DARABONBA_PTR_SET_RVALUE(policyRelatedResources_, policyRelatedResources) };


    // sessionResolutionHeight Field Functions 
    bool hasSessionResolutionHeight() const { return this->sessionResolutionHeight_ != nullptr;};
    void deleteSessionResolutionHeight() { this->sessionResolutionHeight_ = nullptr;};
    inline int32_t sessionResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionHeight_, 0) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setSessionResolutionHeight(int32_t sessionResolutionHeight) { DARABONBA_PTR_SET_VALUE(sessionResolutionHeight_, sessionResolutionHeight) };


    // sessionResolutionWidth Field Functions 
    bool hasSessionResolutionWidth() const { return this->sessionResolutionWidth_ != nullptr;};
    void deleteSessionResolutionWidth() { this->sessionResolutionWidth_ = nullptr;};
    inline int32_t sessionResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionWidth_, 0) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setSessionResolutionWidth(int32_t sessionResolutionWidth) { DARABONBA_PTR_SET_VALUE(sessionResolutionWidth_, sessionResolutionWidth) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const Models::ListPolicyGroupsResponseBodyPolicyGroupModelWatermark & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, Models::ListPolicyGroupsResponseBodyPolicyGroupModelWatermark) };
    inline Models::ListPolicyGroupsResponseBodyPolicyGroupModelWatermark watermark() { DARABONBA_PTR_GET(watermark_, Models::ListPolicyGroupsResponseBodyPolicyGroupModelWatermark) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setWatermark(const Models::ListPolicyGroupsResponseBodyPolicyGroupModelWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline ListPolicyGroupsResponseBodyPolicyGroupModel& setWatermark(Models::ListPolicyGroupsResponseBodyPolicyGroupModelWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


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
    // *   readwrite: read and write.
    // *   off: read/write disabled.
    std::shared_ptr<string> clipboard_ = nullptr;
    // The time when the policy was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The file transfer policy of the HTML5 client.
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
    // *   off: read/write denied.
    std::shared_ptr<string> localDrive_ = nullptr;
    // Identifies whether the resolution is locked.
    // 
    // Valid values:
    // 
    // *   off
    // *   on
    std::shared_ptr<string> lockResolution_ = nullptr;
    // The network redirection policy.
    std::shared_ptr<Models::ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy> netRedirectPolicy_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyGroupName_ = nullptr;
    std::shared_ptr<Models::ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources> policyRelatedResources_ = nullptr;
    // The height of the resolution.
    std::shared_ptr<int32_t> sessionResolutionHeight_ = nullptr;
    // The width of the resolution.
    std::shared_ptr<int32_t> sessionResolutionWidth_ = nullptr;
    std::shared_ptr<Models::ListPolicyGroupsResponseBodyPolicyGroupModelWatermark> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
