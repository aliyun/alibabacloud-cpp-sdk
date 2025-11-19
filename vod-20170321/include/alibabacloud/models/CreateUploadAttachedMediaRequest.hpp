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
        && return this->businessType_ == nullptr && return this->cateIds_ == nullptr && return this->description_ == nullptr && return this->fileName_ == nullptr && return this->fileSize_ == nullptr
        && return this->mediaExt_ == nullptr && return this->storageLocation_ == nullptr && return this->tags_ == nullptr && return this->title_ == nullptr && return this->userData_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateUploadAttachedMediaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateUploadAttachedMediaRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // cateIds Field Functions 
    bool hasCateIds() const { return this->cateIds_ != nullptr;};
    void deleteCateIds() { this->cateIds_ = nullptr;};
    inline string cateIds() const { DARABONBA_PTR_GET_DEFAULT(cateIds_, "") };
    inline CreateUploadAttachedMediaRequest& setCateIds(string cateIds) { DARABONBA_PTR_SET_VALUE(cateIds_, cateIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUploadAttachedMediaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateUploadAttachedMediaRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline CreateUploadAttachedMediaRequest& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // mediaExt Field Functions 
    bool hasMediaExt() const { return this->mediaExt_ != nullptr;};
    void deleteMediaExt() { this->mediaExt_ = nullptr;};
    inline string mediaExt() const { DARABONBA_PTR_GET_DEFAULT(mediaExt_, "") };
    inline CreateUploadAttachedMediaRequest& setMediaExt(string mediaExt) { DARABONBA_PTR_SET_VALUE(mediaExt_, mediaExt) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline CreateUploadAttachedMediaRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateUploadAttachedMediaRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateUploadAttachedMediaRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadAttachedMediaRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the application. Default value: **app-1000000**. If you have activated the multi-application service, specify the ID of the application to add the watermark template in the specified application. For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The type of the auxiliary media asset. Valid values:
    // 
    // *   **watermark**
    // *   **subtitle**
    // *   **material**
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // The ID of the category. Separate multiple IDs with commas (,). You can specify up to five IDs. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Configuration Management** > **Media Management** > **Categories** to view the category ID of the media file.
    // *   Obtain the category ID from the response to the [AddCategory](~~AddCategory~~) operation that you call to create a category.
    // *   Obtain the category ID from the response to the [GetCategories](~~GetCategories~~) operation that you call to query categories.
    std::shared_ptr<string> cateIds_ = nullptr;
    // The description of the auxiliary media asset. Take note of the following items:
    // 
    // *   The description can be up to 1,024 bytes in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> description_ = nullptr;
    // The source file URL of the auxiliary media asset.
    // 
    // >  The file name extension is optional. If the file name extension that you specified for this parameter is different from the value of MediaExt, the value of MediaExt takes effect.
    std::shared_ptr<string> fileName_ = nullptr;
    // The size of the auxiliary media asset. Unit: byte.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The file name extension of the auxiliary media asset.
    // 
    // *   Valid values for watermarks: **png, gif, apng, and mov**
    // *   Valid values for subtitles: **srt, ass, stl, ttml, and vtt**
    // *   Valid values for materials: **jpg, gif, png, mp4, mat, zip, and apk**
    std::shared_ptr<string> mediaExt_ = nullptr;
    // The storage address. Perform the following operations to obtain the storage address:
    // 
    // Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Configuration Management** > **Media Management** > **Storage**. On the Storage page, view the storage address.
    // 
    // >  If you leave this parameter empty, the auxiliary media asset is uploaded to the default storage address. If you specify this parameter, the auxiliary media asset is uploaded to the specified storage address.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The one or more tags of the auxiliary media asset. Take note of the following items:
    // 
    // *   You can specify a maximum of 16 tags.
    // *   If you need to specify multiple tags, separate the tags with commas (,).
    // *   Each tag can be up to 32 characters in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the auxiliary media asset. The following rules apply:
    // 
    // *   The title cannot exceed 128 bytes.
    // *   The title must be encoded in UTF-8.
    std::shared_ptr<string> title_ = nullptr;
    // The custom configurations. For example, you can specify callback configurations and upload acceleration configurations. The value must be a JSON string. For more information, see [Request parameters](~~86952#section-6fg-qll-v3w~~).
    // 
    // > *   The callback configurations take effect only after you specify the HTTP callback URL and select the specific callback events in the ApsaraVideo VOD console. For more information about how to configure HTTP callback settings in the ApsaraVideo VOD console, see [Configure callback settings](https://help.aliyun.com/document_detail/86071.html).
    // > *   If you want to enable the upload acceleration feature, submit a ticket. For more information, see [Overview](https://help.aliyun.com/document_detail/55396.html). For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
