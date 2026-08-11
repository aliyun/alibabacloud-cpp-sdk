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
    // The entity ID. You can call the CreateEntity operation to create an entity and define a custom dynamic metadata structure.
    shared_ptr<string> entityId_ {};
    // The metadata of the media file to be uploaded. The value is a JSON string.
    // - The metadata takes effect only when it matches a URL in UploadURLs.
    // - JSON format: [UploadMetadata, UploadMetadata, ...]. The value must be converted to a JSON string.
    // - For more information, see the UploadMetadata table below.
    shared_ptr<string> mediaMetaData_ {};
    // The post-upload processing action when Type is set to video or audio.
    // 
    // Valid values of ProcessType: Workflow.
    shared_ptr<string> postProcessConfig_ {};
    // The destination storage address.
    // 
    // - StorageType: only oss is supported.
    // - StorageLocation: only VOD storage is supported. User-owned OSS storage is not supported.
    shared_ptr<string> uploadTargetConfig_ {};
    // The URL of the media source file.
    // - The URL must include a file name extension. For example, mp4 is the file name extension in `https://****.mp4`.
    //     - If the URL does not include a file name extension, you can specify the FileExtension parameter in `UploadMetadatas`.
    //     - If the URL includes a file name extension and the FileExtension parameter is also specified, the value of FileExtension takes precedence.
    // - URL-encode the URLs. Separate multiple URLs with commas (,). A maximum of 20 URLs are supported.
    // - To prevent upload failures caused by special characters, URL-encode each URL before concatenating them with commas.
    shared_ptr<string> uploadURLs_ {};
    // The custom settings. The value is a JSON string that supports settings such as message callbacks.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
