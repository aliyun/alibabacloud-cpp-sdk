// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateUploadMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(MediaMetaData, mediaMetaData_);
      DARABONBA_PTR_TO_JSON(PostProcessConfig, postProcessConfig_);
      DARABONBA_PTR_TO_JSON(UploadTargetConfig, uploadTargetConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(MediaMetaData, mediaMetaData_);
      DARABONBA_PTR_FROM_JSON(PostProcessConfig, postProcessConfig_);
      DARABONBA_PTR_FROM_JSON(UploadTargetConfig, uploadTargetConfig_);
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
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->entityId_ == nullptr && this->fileInfo_ == nullptr && this->mediaMetaData_ == nullptr && this->postProcessConfig_ == nullptr && this->uploadTargetConfig_ == nullptr
        && this->userData_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateUploadMediaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


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


    // mediaMetaData Field Functions 
    bool hasMediaMetaData() const { return this->mediaMetaData_ != nullptr;};
    void deleteMediaMetaData() { this->mediaMetaData_ = nullptr;};
    inline string getMediaMetaData() const { DARABONBA_PTR_GET_DEFAULT(mediaMetaData_, "") };
    inline CreateUploadMediaRequest& setMediaMetaData(string mediaMetaData) { DARABONBA_PTR_SET_VALUE(mediaMetaData_, mediaMetaData) };


    // postProcessConfig Field Functions 
    bool hasPostProcessConfig() const { return this->postProcessConfig_ != nullptr;};
    void deletePostProcessConfig() { this->postProcessConfig_ = nullptr;};
    inline string getPostProcessConfig() const { DARABONBA_PTR_GET_DEFAULT(postProcessConfig_, "") };
    inline CreateUploadMediaRequest& setPostProcessConfig(string postProcessConfig) { DARABONBA_PTR_SET_VALUE(postProcessConfig_, postProcessConfig) };


    // uploadTargetConfig Field Functions 
    bool hasUploadTargetConfig() const { return this->uploadTargetConfig_ != nullptr;};
    void deleteUploadTargetConfig() { this->uploadTargetConfig_ = nullptr;};
    inline string getUploadTargetConfig() const { DARABONBA_PTR_GET_DEFAULT(uploadTargetConfig_, "") };
    inline CreateUploadMediaRequest& setUploadTargetConfig(string uploadTargetConfig) { DARABONBA_PTR_SET_VALUE(uploadTargetConfig_, uploadTargetConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The application ID. The default value is `app-1000000`.
    shared_ptr<string> appId_ {};
    // The ID of the entity. You can call the `CreateEntity` operation to create an entity and define a custom schema for dynamic metadata.
    shared_ptr<string> entityId_ {};
    // The file information, provided as a JSON string containing the following fields:
    // 
    // - `Type` (Required): The file type. Valid values: `video`, `image`, `audio`, `text`, and `other`.
    // 
    // - `Name` (Required): The filename without the extension.
    // 
    // - `Size` (Optional): The file size.
    // 
    // - `Ext` (Required): The file extension.
    shared_ptr<string> fileInfo_ {};
    // The media asset metadata, provided as a JSON string.
    // 
    // `Title` (Required):
    // 
    // - The title can be up to 128 characters in length.
    // 
    // - The title must be UTF-8 encoded.
    // 
    // `Description` (Optional):
    // 
    // - The description can be up to 1,024 characters in length.
    // 
    // - The description must be UTF-8 encoded.
    // 
    // `CateId` (Optional): The category ID.
    // 
    // `Tags` (Optional): The tags of the media asset, separated by commas.
    // 
    // `BusinessType` (Required): The business type. Valid values depend on the `Type` specified in `FileInfo`.
    // 
    // - If `Type` is `video`: `opening` or `ending`.
    // 
    // - If `Type` is `image`: `default`, `cover`, or `watermark`.
    // 
    // - If `Type` is `text`: `subtitles` or `font`.
    // 
    // -
    // 
    // - If `Type` is `other`: `general`.
    // 
    // `CoverURL` (Optional): The URL of the cover image.<br>`DynamicMetaData` (Optional): A string for custom dynamic metadata.<br>
    shared_ptr<string> mediaMetaData_ {};
    // The post-processing configuration for `video` or `audio` uploads.
    // 
    // Set `ProcessType` to `Workflow`.
    // 
    // > - This parameter specifies an [asynchronous task](https://help.aliyun.com/document_detail/3027141.html), which is queued and runs in the background after you submit the request.
    shared_ptr<string> postProcessConfig_ {};
    // The destination storage configuration, provided as a JSON string.
    // 
    // - `StorageType`: Only `oss` is supported.
    // 
    // - `StorageLocation`: Only VOD storage is supported. You cannot upload to your own OSS buckets.
    shared_ptr<string> uploadTargetConfig_ {};
    // A JSON string for custom settings, such as configuring a message callback.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
