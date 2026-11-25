// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class CreateUploadMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaMetaData, mediaMetaData_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaMetaData, mediaMetaData_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateUploadMediaRequest() = default ;
    CreateUploadMediaRequest(const CreateUploadMediaRequest &) = default ;
    CreateUploadMediaRequest(CreateUploadMediaRequest &&) = default ;
    CreateUploadMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadMediaRequest() = default ;
    CreateUploadMediaRequest& operator=(const CreateUploadMediaRequest &) = default ;
    CreateUploadMediaRequest& operator=(CreateUploadMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialType_ == nullptr
        && this->entityId_ == nullptr && this->fileInfo_ == nullptr && this->mediaId_ == nullptr && this->mediaMetaData_ == nullptr && this->overwrite_ == nullptr
        && this->projectId_ == nullptr && this->storageLocation_ == nullptr && this->userData_ == nullptr; };
    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline CreateUploadMediaRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline CreateUploadMediaRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline string getFileInfo() const { DARABONBA_PTR_GET_DEFAULT(fileInfo_, "") };
    inline CreateUploadMediaRequest& setFileInfo(string fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline CreateUploadMediaRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaMetaData Field Functions 
    bool hasMediaMetaData() const { return this->mediaMetaData_ != nullptr;};
    void deleteMediaMetaData() { this->mediaMetaData_ = nullptr;};
    inline string getMediaMetaData() const { DARABONBA_PTR_GET_DEFAULT(mediaMetaData_, "") };
    inline CreateUploadMediaRequest& setMediaMetaData(string mediaMetaData) { DARABONBA_PTR_SET_VALUE(mediaMetaData_, mediaMetaData) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline CreateUploadMediaRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateUploadMediaRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline CreateUploadMediaRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The type of the upload credential. Valid values:
    // - `STS_TOKEN`: the default value, used for direct upload by using the OSS SDK.
    // - `POST_POLICY`: used for form-based upload.
    // - `PRESIGNED_URL`: used for pre-signed PUT upload.
    // - `UPLOAD_TICKET`: the ticket mode, where a real credential is issued only when the ticket is exchanged.
    shared_ptr<string> credentialType_ {};
    // The entity ID. The default value is AiSaasMediaAsset. You can ignore this parameter for general calls.
    shared_ptr<string> entityId_ {};
    // The file information in JSON string format. This parameter is required when you create a media asset. The **Type** field is required and can be set to video, audio, or image. The **Name** (file name), **Ext** (file name extension without the dot), and **Size** (size in bytes) fields are optional. This parameter can be omitted when you overwrite an existing media asset (Overwrite=true). If omitted, the original media asset type and source file name extension are used.
    shared_ptr<string> fileInfo_ {};
    // The ID of the existing media asset. This parameter is required when Overwrite is set to true to overwrite the media asset. If CredentialType is set to UPLOAD_TICKET, this parameter indicates a ticket exchange. Do not specify this parameter in other credential modes.
    shared_ptr<string> mediaId_ {};
    // The media asset metadata in JSON string format. This parameter is required when you create a media asset. It can contain the following fields: **Title** (title, defaults to FileInfo.Name if not specified), **Description**, **CateId** (category ID), **Tags** (comma-separated), **BusinessType** (falls back to general for invalid values), **CoverURL**, **DynamicMetaData** (JSON string, such as ProductionId), **ReferenceId** (external reference ID), and **RegisterConfig** (object containing SearchLibName to specify the search library). This parameter can be omitted when you overwrite an existing media asset.
    shared_ptr<string> mediaMetaData_ {};
    // Specifies whether to overwrite the existing media asset. Default value: false. If this parameter is set to true, you must specify MediaId. The original media asset is reset (old files, snapshots, and analysis artifacts are cleared, and the status is set to uploading), and a new credential is issued as if it were the first upload.
    shared_ptr<bool> overwrite_ {};
    // The project ID. This parameter is written to dynamicMetaData.ProductionId with the highest priority, overwriting the value with the same name in DynamicMetaData, and is automatically paired with the default folder `fd__default`. This parameter is supported only by the default entity. If you specify this parameter for a non-default entity, an `InvalidParameter` error is returned. If you do not specify this parameter, the `ProductionId` is obtained from the existing fallback chain.
    shared_ptr<string> projectId_ {};
    // The specified storage location in the `bucket.endpoint` format. If you do not specify this parameter, a bucket is selected based on the default bucket selection policy.
    shared_ptr<string> storageLocation_ {};
    // The custom user data in JSON string format.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
