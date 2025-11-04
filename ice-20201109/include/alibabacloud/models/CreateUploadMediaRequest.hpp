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
        && return this->entityId_ == nullptr && return this->fileInfo_ == nullptr && return this->mediaMetaData_ == nullptr && return this->postProcessConfig_ == nullptr && return this->uploadTargetConfig_ == nullptr
        && return this->userData_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateUploadMediaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline CreateUploadMediaRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline string fileInfo() const { DARABONBA_PTR_GET_DEFAULT(fileInfo_, "") };
    inline CreateUploadMediaRequest& setFileInfo(string fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };


    // mediaMetaData Field Functions 
    bool hasMediaMetaData() const { return this->mediaMetaData_ != nullptr;};
    void deleteMediaMetaData() { this->mediaMetaData_ = nullptr;};
    inline string mediaMetaData() const { DARABONBA_PTR_GET_DEFAULT(mediaMetaData_, "") };
    inline CreateUploadMediaRequest& setMediaMetaData(string mediaMetaData) { DARABONBA_PTR_SET_VALUE(mediaMetaData_, mediaMetaData) };


    // postProcessConfig Field Functions 
    bool hasPostProcessConfig() const { return this->postProcessConfig_ != nullptr;};
    void deletePostProcessConfig() { this->postProcessConfig_ = nullptr;};
    inline string postProcessConfig() const { DARABONBA_PTR_GET_DEFAULT(postProcessConfig_, "") };
    inline CreateUploadMediaRequest& setPostProcessConfig(string postProcessConfig) { DARABONBA_PTR_SET_VALUE(postProcessConfig_, postProcessConfig) };


    // uploadTargetConfig Field Functions 
    bool hasUploadTargetConfig() const { return this->uploadTargetConfig_ != nullptr;};
    void deleteUploadTargetConfig() { this->uploadTargetConfig_ = nullptr;};
    inline string uploadTargetConfig() const { DARABONBA_PTR_GET_DEFAULT(uploadTargetConfig_, "") };
    inline CreateUploadMediaRequest& setUploadTargetConfig(string uploadTargetConfig) { DARABONBA_PTR_SET_VALUE(uploadTargetConfig_, uploadTargetConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The application ID. Default value: app-1000000.
    std::shared_ptr<string> appId_ = nullptr;
    // The entity ID. You can call the CreateEntity operation to create an entity and specify a dynamic metadata structure.
    std::shared_ptr<string> entityId_ = nullptr;
    // The file information, which is in the JSON format and contains the following fields:
    // 
    // *   Type: required. The file type. Valid values: video, image, audio, text, and other.
    // *   Name: required. The file name without the extension.
    // *   Size: optional. The file size.
    // *   Ext: required. The file name extension.
    std::shared_ptr<string> fileInfo_ = nullptr;
    // The metadata of the media asset, which is a JSON string that contains the following fields:
    // 
    // Title: required.
    // 
    // *   The value can be up to 128 characters in length.
    // *   The value must be encoded in UTF-8.
    // 
    // Description: optional.
    // 
    // *   The value can be up to 1,024 characters in length.
    // *   The value must be encoded in UTF-8.
    // 
    // CateId: optional.
    // 
    // Tags: optional.
    // 
    // BusinessType: required. Valid values:
    // 
    // *   opening or ending if Type is set to video
    // *   default or cover if Type is set to image
    // *   subtitles or font if Type is set to text
    // *   watermark if Type is set to material
    // *   general CoverURL: optional.
    // 
    // DynamicMetaData: The value is a string.
    std::shared_ptr<string> mediaMetaData_ = nullptr;
    // The postprocessing configurations. You can specify this parameter if Type is set to video or audio.
    // 
    // Set ProcessType to Workflow.
    std::shared_ptr<string> postProcessConfig_ = nullptr;
    // The destination storage address.
    // 
    // Set StorageType to oss.
    // 
    // Set StorageLocation to an address in ApsaraVideo VOD. You cannot set this field to an OSS URL.
    std::shared_ptr<string> uploadTargetConfig_ = nullptr;
    // The user data. The value must be a JSON string. You can configure settings such as message callbacks.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
