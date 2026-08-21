// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADATTACHEDMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADATTACHEDMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateUploadAttachedMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadAttachedMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CateIds, cateIds_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(MediaExt, mediaExt_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadAttachedMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CateIds, cateIds_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(MediaExt, mediaExt_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateUploadAttachedMediaRequest() = default ;
    CreateUploadAttachedMediaRequest(const CreateUploadAttachedMediaRequest &) = default ;
    CreateUploadAttachedMediaRequest(CreateUploadAttachedMediaRequest &&) = default ;
    CreateUploadAttachedMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadAttachedMediaRequest() = default ;
    CreateUploadAttachedMediaRequest& operator=(const CreateUploadAttachedMediaRequest &) = default ;
    CreateUploadAttachedMediaRequest& operator=(CreateUploadAttachedMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->businessType_ == nullptr && this->cateIds_ == nullptr && this->description_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr
        && this->mediaExt_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateUploadAttachedMediaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateUploadAttachedMediaRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cateIds Field Functions 
    bool hasCateIds() const { return this->cateIds_ != nullptr;};
    void deleteCateIds() { this->cateIds_ = nullptr;};
    inline string getCateIds() const { DARABONBA_PTR_GET_DEFAULT(cateIds_, "") };
    inline CreateUploadAttachedMediaRequest& setCateIds(string cateIds) { DARABONBA_PTR_SET_VALUE(cateIds_, cateIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUploadAttachedMediaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateUploadAttachedMediaRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline CreateUploadAttachedMediaRequest& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // mediaExt Field Functions 
    bool hasMediaExt() const { return this->mediaExt_ != nullptr;};
    void deleteMediaExt() { this->mediaExt_ = nullptr;};
    inline string getMediaExt() const { DARABONBA_PTR_GET_DEFAULT(mediaExt_, "") };
    inline CreateUploadAttachedMediaRequest& setMediaExt(string mediaExt) { DARABONBA_PTR_SET_VALUE(mediaExt_, mediaExt) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline CreateUploadAttachedMediaRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateUploadAttachedMediaRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateUploadAttachedMediaRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadAttachedMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The application ID. Default value: **app-1000000**. If you have activated the multi-application service, specify the application ID to upload the auxiliary media asset to the specified application. For more information, see [Multi-application](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
    // The type of the auxiliary media asset. Valid values:
    // 
    // - **watermark**: watermark.
    // - **subtitle**: subtitle.
    // - **material**: material.
    // 
    // This parameter is required.
    shared_ptr<string> businessType_ {};
    // The category IDs. Separate multiple IDs with commas (,). A maximum of 5 IDs are supported. You can obtain category IDs by using the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Management Configuration** > **Category Management** to view category IDs.
    // - The category ID is returned when you call the [AddCategory](~~AddCategory~~) operation to create a category.
    // - The category ID is returned when you call the [GetCategories](~~GetCategories~~) operation to query categories.
    shared_ptr<string> cateIds_ {};
    // The description of the media asset. Rules:
    // 
    // - The description can be up to 1024 bytes in length.
    // - The description must be encoded in UTF-8.
    shared_ptr<string> description_ {};
    // The source file address of the auxiliary media asset to be uploaded.
    // >The file name extension is optional. If a file name extension is specified here and is different from the extension specified in MediaExt, the value of MediaExt takes precedence.
    shared_ptr<string> fileName_ {};
    // The file size. Unit: bytes.
    shared_ptr<string> fileSize_ {};
    // The file name extension of the auxiliary media asset source file to be uploaded. Valid values:
    // 
    // - Watermark: **png, gif, apng, mov**.
    // - Subtitle: **srt, ass, stl, ttml, vtt**.
    // - Material: **jpg, gif, png, mp4, mat, zip, apk**.
    shared_ptr<string> mediaExt_ {};
    // The storage address. You can obtain the storage address by using the following method:
    // 
    // Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Management Configuration** > **Storage Management** to view the storage address.
    // 
    // > If you do not specify this parameter, the auxiliary media asset is uploaded to the default storage address. If you specify this parameter, the auxiliary media asset is uploaded to the specified storage address.
    shared_ptr<string> storageLocation_ {};
    // The tags. Rules:
    // 
    // - A maximum of 16 tags are supported.
    // - Separate multiple tags with commas (,).
    // - Each tag can be up to 32 characters or Chinese characters in length.
    // - The tags must be encoded in UTF-8.
    shared_ptr<string> tags_ {};
    // The title of the auxiliary media asset. Rules:
    // 
    // - The title can be up to 128 bytes in length.
    // - The title must be encoded in UTF-8.
    shared_ptr<string> title_ {};
    // The custom settings, which is a JSON string. The settings support message callbacks, upload acceleration, and other configurations. For more information, see [UserData](~~86952#section-6fg-qll-v3w~~).
    // 
    // > - To use message callbacks in this parameter, you must configure an HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect. For information about how to configure HTTP callbacks in the console, see [Callback settings](https://help.aliyun.com/document_detail/86071.html).
    // > - To use the upload acceleration feature, submit a ticket to activate it. For more information, see [Upload instructions](https://help.aliyun.com/document_detail/55396.html). For information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
