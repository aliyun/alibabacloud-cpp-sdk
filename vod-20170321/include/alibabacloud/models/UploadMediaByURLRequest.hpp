// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMEDIABYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMEDIABYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UploadMediaByURLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMediaByURLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EnableFirstFrameCover, enableFirstFrameCover_);
      DARABONBA_PTR_TO_JSON(GenerateThumbnail, generateThumbnail_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_TO_JSON(UploadMetadatas, uploadMetadatas_);
      DARABONBA_PTR_TO_JSON(UploadURLs, uploadURLs_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMediaByURLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EnableFirstFrameCover, enableFirstFrameCover_);
      DARABONBA_PTR_FROM_JSON(GenerateThumbnail, generateThumbnail_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_FROM_JSON(UploadMetadatas, uploadMetadatas_);
      DARABONBA_PTR_FROM_JSON(UploadURLs, uploadURLs_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
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
        && this->enableFirstFrameCover_ == nullptr && this->generateThumbnail_ == nullptr && this->sessionId_ == nullptr && this->storageLocation_ == nullptr && this->templateGroupId_ == nullptr
        && this->uploadMetadatas_ == nullptr && this->uploadURLs_ == nullptr && this->userData_ == nullptr && this->workflowId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UploadMediaByURLRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableFirstFrameCover Field Functions 
    bool hasEnableFirstFrameCover() const { return this->enableFirstFrameCover_ != nullptr;};
    void deleteEnableFirstFrameCover() { this->enableFirstFrameCover_ = nullptr;};
    inline bool getEnableFirstFrameCover() const { DARABONBA_PTR_GET_DEFAULT(enableFirstFrameCover_, false) };
    inline UploadMediaByURLRequest& setEnableFirstFrameCover(bool enableFirstFrameCover) { DARABONBA_PTR_SET_VALUE(enableFirstFrameCover_, enableFirstFrameCover) };


    // generateThumbnail Field Functions 
    bool hasGenerateThumbnail() const { return this->generateThumbnail_ != nullptr;};
    void deleteGenerateThumbnail() { this->generateThumbnail_ = nullptr;};
    inline bool getGenerateThumbnail() const { DARABONBA_PTR_GET_DEFAULT(generateThumbnail_, false) };
    inline UploadMediaByURLRequest& setGenerateThumbnail(bool generateThumbnail) { DARABONBA_PTR_SET_VALUE(generateThumbnail_, generateThumbnail) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline UploadMediaByURLRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline UploadMediaByURLRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline UploadMediaByURLRequest& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


    // uploadMetadatas Field Functions 
    bool hasUploadMetadatas() const { return this->uploadMetadatas_ != nullptr;};
    void deleteUploadMetadatas() { this->uploadMetadatas_ = nullptr;};
    inline string getUploadMetadatas() const { DARABONBA_PTR_GET_DEFAULT(uploadMetadatas_, "") };
    inline UploadMediaByURLRequest& setUploadMetadatas(string uploadMetadatas) { DARABONBA_PTR_SET_VALUE(uploadMetadatas_, uploadMetadatas) };


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


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline UploadMediaByURLRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The application ID. Default value: **app-1000000**. For more information, see [Multi-application](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
    shared_ptr<bool> enableFirstFrameCover_ {};
    shared_ptr<bool> generateThumbnail_ {};
    // The custom deduplication identifier. If this parameter is specified and a request with the same identifier was sent within the past 10 minutes, an error is returned for the current request.
    // >  
    // > - This deduplication identifier is custom-defined. It can be up to 50 characters in length and can contain uppercase and lowercase letters, digits, hyphens (-), and underscores (_). If this parameter is not specified or is set to an empty string, deduplication is not performed.
    shared_ptr<string> sessionId_ {};
    // The storage address of the media file.
    // 
    // Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com/?spm=a2c4g.11186623.2.15.6948257eaZ4m54#/vod/settings/censored) and choose **Configuration Management** > **Media Asset Management** > **Storage** to view the storage address. If you do not specify this parameter, the default storage address is used.
    shared_ptr<string> storageLocation_ {};
    // The ID of the transcoding template group. You can obtain the ID by using one of the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing** > **Transcoding Template Groups** to view the transcoding template group ID.
    // - Obtain the value of TranscodeTemplateGroupId from the response when you call the [AddTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102665.html) operation.
    // - Obtain the value of TranscodeTemplateGroupId from the response when you call the [ListTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102669.html) operation.
    // 
    // >- If you do not specify a transcoding template group ID, the default transcoding template group is used. If you specify a transcoding template group ID, the specified template group is used.
    // >- You can also set this parameter in `UploadMetadatas`. If TemplateGroupId is set in both UploadMetadatas and this parameter, the value in UploadMetadatas takes precedence.
    shared_ptr<string> templateGroupId_ {};
    // The metadata of the media files to upload. The value is a JSON string.
    // 
    // - The metadata takes effect only when it matches a URL in UploadURLs.
    // - JSON format: `[UploadMetadata, UploadMetadata,…]`. The value must be converted to a JSON string.
    // - For more information, see the **UploadMetadata** table below.
    shared_ptr<string> uploadMetadatas_ {};
    // The URLs of media source files.
    // - The URL must include a file name extension. For example, mp4 is the file name extension in `https://****.mp4`.
    //     - If the URL does not include a file name extension, you can specify the FileExtension parameter in `UploadMetadatas`.
    //     - If the URL includes a file name extension and the `FileExtension` parameter is also specified, the value of `FileExtension` takes precedence.
    //     - For supported file name extensions, see [Upload overview](https://help.aliyun.com/document_detail/55396.html).
    // 
    // > - Separate multiple URLs with commas (,). A maximum of 20 URLs are supported. To prevent upload failures caused by special characters, URL-encode each URL before joining them with commas.
    // 
    // This parameter is required.
    shared_ptr<string> uploadURLs_ {};
    // The custom settings. The value is a JSON string that supports message callback and upload acceleration settings. For more information, see [UserData](~~86952#UserData~~).
    // 
    // > - To use message callbacks in this parameter, you must configure an HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect. For information about how to configure HTTP callbacks in the console, see [Callback settings](https://help.aliyun.com/document_detail/86071.html).
    // > - To use the upload acceleration feature, submit a ticket to activate it. For more information, see [Upload instructions](https://help.aliyun.com/document_detail/55396.html). For information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    shared_ptr<string> userData_ {};
    // The workflow ID. Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing** > **Workflows** to view the workflow ID.
    // 
    // > If both WorkflowId and TemplateGroupId are specified, WorkflowId takes precedence. For usage instructions, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
