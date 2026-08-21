// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateUploadVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableFirstFrameCover, enableFirstFrameCover_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(GenerateThumbnail, generateThumbnail_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableFirstFrameCover, enableFirstFrameCover_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(GenerateThumbnail, generateThumbnail_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    CreateUploadVideoRequest() = default ;
    CreateUploadVideoRequest(const CreateUploadVideoRequest &) = default ;
    CreateUploadVideoRequest(CreateUploadVideoRequest &&) = default ;
    CreateUploadVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadVideoRequest() = default ;
    CreateUploadVideoRequest& operator=(const CreateUploadVideoRequest &) = default ;
    CreateUploadVideoRequest& operator=(CreateUploadVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->coverURL_ == nullptr && this->description_ == nullptr && this->enableFirstFrameCover_ == nullptr && this->fileName_ == nullptr
        && this->fileSize_ == nullptr && this->generateThumbnail_ == nullptr && this->referenceId_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr
        && this->templateGroupId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr && this->workflowId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateUploadVideoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline CreateUploadVideoRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline CreateUploadVideoRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUploadVideoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableFirstFrameCover Field Functions 
    bool hasEnableFirstFrameCover() const { return this->enableFirstFrameCover_ != nullptr;};
    void deleteEnableFirstFrameCover() { this->enableFirstFrameCover_ = nullptr;};
    inline bool getEnableFirstFrameCover() const { DARABONBA_PTR_GET_DEFAULT(enableFirstFrameCover_, false) };
    inline CreateUploadVideoRequest& setEnableFirstFrameCover(bool enableFirstFrameCover) { DARABONBA_PTR_SET_VALUE(enableFirstFrameCover_, enableFirstFrameCover) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateUploadVideoRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline CreateUploadVideoRequest& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // generateThumbnail Field Functions 
    bool hasGenerateThumbnail() const { return this->generateThumbnail_ != nullptr;};
    void deleteGenerateThumbnail() { this->generateThumbnail_ = nullptr;};
    inline bool getGenerateThumbnail() const { DARABONBA_PTR_GET_DEFAULT(generateThumbnail_, false) };
    inline CreateUploadVideoRequest& setGenerateThumbnail(bool generateThumbnail) { DARABONBA_PTR_SET_VALUE(generateThumbnail_, generateThumbnail) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline CreateUploadVideoRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline CreateUploadVideoRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateUploadVideoRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline CreateUploadVideoRequest& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateUploadVideoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadVideoRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline CreateUploadVideoRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The application ID. Default value: **app-1000000**. For more information, see [Multi-application](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
    // The category ID. You can obtain the category ID by using one of the following methods:
    // 
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Management Configuration** > **Category Management** to view the category ID.
    // - When you create a category by calling the [AddCategory](~~AddCategory~~) operation, the category ID is the value of the CateId parameter in the response.
    // - When you query categories by calling the [GetCategories](~~GetCategories~~) operation, the category ID is the value of the CateId parameter in the response.
    shared_ptr<int64_t> cateId_ {};
    // The URL of the custom video thumbnail.
    shared_ptr<string> coverURL_ {};
    // The description of the audio or video file displayed in ApsaraVideo VOD after the upload is complete.
    // 
    // - The description can be up to 1024 characters in length.
    // - The value is encoded in UTF-8.
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableFirstFrameCover_ {};
    // The address of the audio or video source file to be uploaded.
    // 
    // - The file name extension is required and is not case-sensitive.
    // - For supported file name extensions, see [Upload overview](https://help.aliyun.com/document_detail/55396.html).
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The size of the audio or video source file to be uploaded. Unit: bytes.
    shared_ptr<int64_t> fileSize_ {};
    shared_ptr<bool> generateThumbnail_ {};
    // The custom ID. Only lowercase letters, uppercase letters, digits, hyphens, and underscores are supported. The length is 6 to 64 characters. The ID is unique at the user level.
    shared_ptr<string> referenceId_ {};
    // The storage address. You can obtain the storage address by using the following method:
    // Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Management Configuration** > **Storage Management** to view the storage address.
    // 
    // > If this parameter is not specified, the audio or video file is uploaded to the default storage address. If no default storage address exists, the file is uploaded to the first storage address in the storage list. If this parameter is specified, the audio or video file is uploaded to the specified storage address.
    shared_ptr<string> storageLocation_ {};
    // The tags of the audio or video file.
    // 
    // - You can specify up to 16 tags.
    // - To specify multiple tags, separate them with commas (,).
    // - Each tag can be up to 32 characters in length.
    // - The value is encoded in UTF-8.
    shared_ptr<string> tags_ {};
    // The ID of the transcoding template group. You can obtain the ID by using one of the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing Configuration** > **Transcoding Template Groups** to view the transcoding template group ID.
    // - When you create a transcoding template group by calling the [Create a transcoding template group](https://help.aliyun.com/document_detail/102665.html) operation, the transcoding template group ID is the value of the TranscodeTemplateGroupId parameter in the response.
    // - When you query transcoding template groups by calling the [Query transcoding configurations](https://help.aliyun.com/document_detail/102669.html) operation, the transcoding template group ID is the value of the TranscodeTemplateGroupId parameter in the response.
    // 
    // >- If both WorkflowId and TemplateGroupId are specified, WorkflowId takes precedence.
    // >- If this parameter is not specified, the default transcoding template group is used for transcoding. If a transcoding template group ID is specified, the specified template group is used for transcoding.
    // >- If this parameter is set to the built-in **No Transcoding** template group, only the [Video Upload Complete](https://help.aliyun.com/document_detail/55630.html) event notification is sent after the audio or video file is uploaded. The [Transcode Complete for a Single Definition](https://help.aliyun.com/document_detail/55636.html) event notification is not sent.
    // > - This parameter triggers an [asynchronous task](https://help.aliyun.com/document_detail/3027551.html). After submission, the task is not immediately completed and is queued for asynchronous execution in the background.
    // >- To ensure normal playback, when the built-in **No Transcoding** template group is used, only the following formats support direct playback without transcoding after the audio or video file is uploaded: MP4, FLV, MP3, M3U8, and WEBM. Other formats support storage only (check the file name extension of FileName). If you use ApsaraVideo Player, the player version must be 3.1.0 or later.
    shared_ptr<string> templateGroupId_ {};
    // The title of the audio or video file displayed in ApsaraVideo VOD after the upload is complete.
    // 
    // - The title can be up to 128 characters in length.
    // - The value is encoded in UTF-8.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The custom settings in a JSON string. The settings support message callbacks, upload acceleration, and other configurations. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // > - To use the message callback in this parameter, you must configure an HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect. If no callback URL is specified for subsequent tasks, callbacks are sent to this address by default. To configure HTTP callbacks in the console, see [Callback settings](https://help.aliyun.com/document_detail/86071.html).
    // > - To use the upload acceleration feature, you must [submit a Yida form](https://yida.alibaba-inc.com/o/ticketapply) to apply for activation. For more information, see [Upload instructions](https://help.aliyun.com/document_detail/55396.html).
    shared_ptr<string> userData_ {};
    // The workflow ID. Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Processing Configuration** > **Workflow Management** to view the workflow ID.
    // 
    // > - If both WorkflowId and TemplateGroupId are specified, WorkflowId takes precedence. For more information, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
    // > - This parameter triggers an [asynchronous task](https://help.aliyun.com/document_detail/3027551.html). After submission, the task is not immediately completed and is queued for asynchronous execution in the background.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
