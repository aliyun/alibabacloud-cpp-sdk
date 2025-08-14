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
    virtual bool empty() const override { this->appId_ != nullptr
        && this->entityId_ != nullptr && this->mediaMetaData_ != nullptr && this->postProcessConfig_ != nullptr && this->uploadTargetConfig_ != nullptr && this->uploadURLs_ != nullptr
        && this->userData_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UploadMediaByURLRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline UploadMediaByURLRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // mediaMetaData Field Functions 
    bool hasMediaMetaData() const { return this->mediaMetaData_ != nullptr;};
    void deleteMediaMetaData() { this->mediaMetaData_ = nullptr;};
    inline string mediaMetaData() const { DARABONBA_PTR_GET_DEFAULT(mediaMetaData_, "") };
    inline UploadMediaByURLRequest& setMediaMetaData(string mediaMetaData) { DARABONBA_PTR_SET_VALUE(mediaMetaData_, mediaMetaData) };


    // postProcessConfig Field Functions 
    bool hasPostProcessConfig() const { return this->postProcessConfig_ != nullptr;};
    void deletePostProcessConfig() { this->postProcessConfig_ = nullptr;};
    inline string postProcessConfig() const { DARABONBA_PTR_GET_DEFAULT(postProcessConfig_, "") };
    inline UploadMediaByURLRequest& setPostProcessConfig(string postProcessConfig) { DARABONBA_PTR_SET_VALUE(postProcessConfig_, postProcessConfig) };


    // uploadTargetConfig Field Functions 
    bool hasUploadTargetConfig() const { return this->uploadTargetConfig_ != nullptr;};
    void deleteUploadTargetConfig() { this->uploadTargetConfig_ = nullptr;};
    inline string uploadTargetConfig() const { DARABONBA_PTR_GET_DEFAULT(uploadTargetConfig_, "") };
    inline UploadMediaByURLRequest& setUploadTargetConfig(string uploadTargetConfig) { DARABONBA_PTR_SET_VALUE(uploadTargetConfig_, uploadTargetConfig) };


    // uploadURLs Field Functions 
    bool hasUploadURLs() const { return this->uploadURLs_ != nullptr;};
    void deleteUploadURLs() { this->uploadURLs_ = nullptr;};
    inline string uploadURLs() const { DARABONBA_PTR_GET_DEFAULT(uploadURLs_, "") };
    inline UploadMediaByURLRequest& setUploadURLs(string uploadURLs) { DARABONBA_PTR_SET_VALUE(uploadURLs_, uploadURLs) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UploadMediaByURLRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The entity ID. You can call the CreateEntity operation to create an entity and specify a dynamic metadata structure.
    std::shared_ptr<string> entityId_ = nullptr;
    // The metadata of the media file that you want to upload. The value must be a JSON string.
    // 
    // *   This parameter takes effect only if its value matches a URL that is specified in UploadURLs.
    // *   You must convert the JSON-formatted data, such as [UploadMetadata, UploadMetadata,…], into a JSON string.
    // *   For more information, see the "UploadMetadata" section of this topic.
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
    // The URL of the source file.
    // 
    // *   The URL must contain a file name extension, such as mp4 in `https://****.mp4`.
    // 
    //     *   If the URL does not contain a file name extension, you can specify one by setting `FileExtension` in `UploadMetadata`.
    //     *   If the URL contains a file name extension and `FileExtension` is also specified, the value of `FileExtension` prevails.
    // 
    // *   URL encoding is required. Separate multiple URLs with commas (,). You can specify a maximum of 20 URLs.
    // 
    // *   Special characters may cause upload failures. Therefore, you must encode URLs before you separate them with commas (,).
    std::shared_ptr<string> uploadURLs_ = nullptr;
    // The user data. The value must be a JSON string. You can configure settings such as message callbacks.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
