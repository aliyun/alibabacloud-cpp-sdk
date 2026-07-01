// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMEDIABYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMEDIABYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UploadMediaByURLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMediaByURLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(MediaMetaData, mediaMetaData_);
      DARABONBA_PTR_TO_JSON(PostProcessConfig, postProcessConfig_);
      DARABONBA_PTR_TO_JSON(UploadTargetConfig, uploadTargetConfig_);
      DARABONBA_PTR_TO_JSON(UploadURLs, uploadURLs_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMediaByURLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(MediaMetaData, mediaMetaData_);
      DARABONBA_PTR_FROM_JSON(PostProcessConfig, postProcessConfig_);
      DARABONBA_PTR_FROM_JSON(UploadTargetConfig, uploadTargetConfig_);
      DARABONBA_PTR_FROM_JSON(UploadURLs, uploadURLs_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UploadMediaByURLRequest() = default ;
    UploadMediaByURLRequest(const UploadMediaByURLRequest &) = default ;
    UploadMediaByURLRequest(UploadMediaByURLRequest &&) = default ;
    UploadMediaByURLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMediaByURLRequest() = default ;
    UploadMediaByURLRequest& operator=(const UploadMediaByURLRequest &) = default ;
    UploadMediaByURLRequest& operator=(UploadMediaByURLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->entityId_ == nullptr && this->mediaMetaData_ == nullptr && this->postProcessConfig_ == nullptr && this->uploadTargetConfig_ == nullptr && this->uploadURLs_ == nullptr
        && this->userData_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UploadMediaByURLRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline UploadMediaByURLRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // mediaMetaData Field Functions 
    bool hasMediaMetaData() const { return this->mediaMetaData_ != nullptr;};
    void deleteMediaMetaData() { this->mediaMetaData_ = nullptr;};
    inline string getMediaMetaData() const { DARABONBA_PTR_GET_DEFAULT(mediaMetaData_, "") };
    inline UploadMediaByURLRequest& setMediaMetaData(string mediaMetaData) { DARABONBA_PTR_SET_VALUE(mediaMetaData_, mediaMetaData) };


    // postProcessConfig Field Functions 
    bool hasPostProcessConfig() const { return this->postProcessConfig_ != nullptr;};
    void deletePostProcessConfig() { this->postProcessConfig_ = nullptr;};
    inline string getPostProcessConfig() const { DARABONBA_PTR_GET_DEFAULT(postProcessConfig_, "") };
    inline UploadMediaByURLRequest& setPostProcessConfig(string postProcessConfig) { DARABONBA_PTR_SET_VALUE(postProcessConfig_, postProcessConfig) };


    // uploadTargetConfig Field Functions 
    bool hasUploadTargetConfig() const { return this->uploadTargetConfig_ != nullptr;};
    void deleteUploadTargetConfig() { this->uploadTargetConfig_ = nullptr;};
    inline string getUploadTargetConfig() const { DARABONBA_PTR_GET_DEFAULT(uploadTargetConfig_, "") };
    inline UploadMediaByURLRequest& setUploadTargetConfig(string uploadTargetConfig) { DARABONBA_PTR_SET_VALUE(uploadTargetConfig_, uploadTargetConfig) };


    // uploadURLs Field Functions 
    bool hasUploadURLs() const { return this->uploadURLs_ != nullptr;};
    void deleteUploadURLs() { this->uploadURLs_ = nullptr;};
    inline string getUploadURLs() const { DARABONBA_PTR_GET_DEFAULT(uploadURLs_, "") };
    inline UploadMediaByURLRequest& setUploadURLs(string uploadURLs) { DARABONBA_PTR_SET_VALUE(uploadURLs_, uploadURLs) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UploadMediaByURLRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The application ID.
    shared_ptr<string> appId_ {};
    // The entity ID. You can call the CreateEntity API to create an entity and define a custom dynamic metadata schema.
    shared_ptr<string> entityId_ {};
    // The metadata of the media file, provided as a JSON string.
    // 
    // - This metadata takes effect only when it matches a URL in `UploadURLs`.
    // 
    // - The value must be a JSON array in the `[UploadMetadata, UploadMetadata, ...]` format, passed as a JSON string.
    // 
    // - For more information, see the UploadMetadata table below.
    shared_ptr<string> mediaMetaData_ {};
    // Specifies post-upload processing actions for media files of type `video` or `audio`.
    // 
    // The only supported value for `ProcessType` is `Workflow`.
    shared_ptr<string> postProcessConfig_ {};
    // The destination storage location.
    // 
    // - The only valid value for `StorageType` is `oss`.
    // 
    // - `StorageLocation` supports VOD storage only and does not support your own OSS buckets.
    shared_ptr<string> uploadTargetConfig_ {};
    // The source URL of the media file.
    // 
    // - The URL must include a file extension. For example, in `https://****.mp4`, mp4 is the file extension.
    // 
    //   - If the URL does not include a file extension, you can specify it by using the `FileExtension` parameter in `MediaMetaData`.
    // 
    //   - If a file extension is present in both the URL and the `FileExtension` parameter, the value of `FileExtension` takes precedence.
    // 
    // - The URLs must be URL-encoded. Separate multiple URLs with commas (,). You can specify up to 20 URLs.
    // 
    // - To prevent upload failures due to special characters, URL-encode each URL before concatenating them with commas.
    shared_ptr<string> uploadURLs_ {};
    // Custom settings, provided as a JSON string. This parameter supports configurations such as message callbacks.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
