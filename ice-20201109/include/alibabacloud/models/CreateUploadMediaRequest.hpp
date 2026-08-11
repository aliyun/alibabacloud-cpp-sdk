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
    // The application ID. Default value: app-1000000.
    shared_ptr<string> appId_ {};
    // The entity ID. You can call the CreateEntity operation to create an entity and customize the dynamic metadata structure.
    shared_ptr<string> entityId_ {};
    // The file information in JSON format. This parameter contains the following fields:
    // - Type (required): the file type. Valid values: video, image, audio, text, and other.
    // - Name (required): the file name without the file name extension.
    // - Size (optional): the file size.
    // - Ext (required): the file name extension.
    shared_ptr<string> fileInfo_ {};
    // The metadata of the media asset to upload, in JSON format.
    // 
    // Title (required):
    // - The maximum length is 128 characters.
    // - UTF-8 encoded.
    // 
    // Description (optional):
    // - The maximum length is 1024 characters.
    // - UTF-8 encoded.
    // 
    // CateId (optional): the category ID.
    // 
    // Tags (optional): the tags.
    // 
    // BusinessType (required): the business type. Valid values:
    // - When Type = video:
    // opening: opening credits. ending: ending credits.
    // - When Type = image:
    //   default: default.
    //   cover: cover image.
    // - When Type = text:
    //   subtitles: subtitles.
    //   font: font.
    // - When Type = material:
    //   watermark: watermark.
    // - general: general-purpose.
    // 
    // CoverURL (optional): the cover URL.
    // 
    // DynamicMetaData: the dynamic metadata. The value is a string.
    shared_ptr<string> mediaMetaData_ {};
    // Specifies the post-upload processing action when Type = video or audio.
    // 
    // ProcessType: set to Workflow.
    // 
    // > 
    // > - This parameter triggers an [asynchronous task](https://help.aliyun.com/document_detail/3027141.html). After submission, the task is not immediately completed and enters a background queue for asynchronous execution.
    shared_ptr<string> postProcessConfig_ {};
    // The destination storage address.
    // 
    // - StorageType: only oss is supported.
    // - StorageLocation: only VOD storage is supported. User-owned OSS storage is not supported.
    shared_ptr<string> uploadTargetConfig_ {};
    // The custom settings. The value is a JSON string that supports settings such as message callbacks.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
