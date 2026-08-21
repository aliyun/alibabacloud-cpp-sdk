// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateUploadImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageExt, imageExt_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(OriginalFileName, originalFileName_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageExt, imageExt_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(OriginalFileName, originalFileName_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateUploadImageRequest() = default ;
    CreateUploadImageRequest(const CreateUploadImageRequest &) = default ;
    CreateUploadImageRequest(CreateUploadImageRequest &&) = default ;
    CreateUploadImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadImageRequest() = default ;
    CreateUploadImageRequest& operator=(const CreateUploadImageRequest &) = default ;
    CreateUploadImageRequest& operator=(CreateUploadImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->description_ == nullptr && this->imageExt_ == nullptr && this->imageType_ == nullptr && this->originalFileName_ == nullptr
        && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateUploadImageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline CreateUploadImageRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUploadImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageExt Field Functions 
    bool hasImageExt() const { return this->imageExt_ != nullptr;};
    void deleteImageExt() { this->imageExt_ = nullptr;};
    inline string getImageExt() const { DARABONBA_PTR_GET_DEFAULT(imageExt_, "") };
    inline CreateUploadImageRequest& setImageExt(string imageExt) { DARABONBA_PTR_SET_VALUE(imageExt_, imageExt) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline CreateUploadImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // originalFileName Field Functions 
    bool hasOriginalFileName() const { return this->originalFileName_ != nullptr;};
    void deleteOriginalFileName() { this->originalFileName_ = nullptr;};
    inline string getOriginalFileName() const { DARABONBA_PTR_GET_DEFAULT(originalFileName_, "") };
    inline CreateUploadImageRequest& setOriginalFileName(string originalFileName) { DARABONBA_PTR_SET_VALUE(originalFileName_, originalFileName) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline CreateUploadImageRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateUploadImageRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateUploadImageRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadImageRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The application ID. Default value: **app-1000000**. If you have activated the multi-application service, specify the application ID to upload the image to the specified application. For more information, see [Multi-application](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
    // The category ID. You can obtain the category ID by using the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Management** > **Categories** to view the category ID.
    // - Obtain the value of CateId from the response when you call the [AddCategory](~~AddCategory~~) operation to create a category.
    // - Obtain the value of CateId from the response when you call the [GetCategories](~~GetCategories~~) operation to query categories.
    shared_ptr<int64_t> cateId_ {};
    // The description of the image.
    // 
    // - The description can be up to 1024 characters in length.
    // - The description must be encoded in UTF-8.
    shared_ptr<string> description_ {};
    // The file name extension of the image source file to upload. Valid values:
    // 
    // - **png** (default)
    // - **jpg**
    // - **jpeg**
    // - **gif**
    // - **heic**
    // - **webp**
    shared_ptr<string> imageExt_ {};
    // The type of the image. Valid values:
    // 
    // - **default** (default): a common image.
    // - **cover**: a video thumbnail.
    // 
    // > The ApsaraVideo VOD console supports viewing and managing only images of the **default** type.
    // 
    // This parameter is required.
    shared_ptr<string> imageType_ {};
    // The address of the image source file to upload.
    // > The file name extension is optional. If a file name extension is included here and is different from the value specified in `ImageExt`, the value of `ImageExt` takes precedence.
    shared_ptr<string> originalFileName_ {};
    // The storage address. You can obtain the storage address by using the following method:
    // Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Management** > **Storage** to view the storage address.
    // 
    // > If you do not specify this parameter, the image is uploaded to the default storage address. If you specify this parameter, the image is uploaded to the specified storage address.
    shared_ptr<string> storageLocation_ {};
    // The tags of the image. Rules:
    // 
    // - Each tag can be up to 32 characters in length.
    // - You can specify up to 16 tags.
    // - Separate multiple tags with commas (,).
    // - The tags must be encoded in UTF-8.
    shared_ptr<string> tags_ {};
    // The title of the image. Rules:
    // 
    // - The title can be up to 128 characters in length.
    // - The title must be encoded in UTF-8.
    shared_ptr<string> title_ {};
    // The custom settings in a JSON string. The settings support message callbacks, upload acceleration, and other configurations. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // > - To use message callbacks in this parameter, you must configure an HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect. For information about how to configure HTTP callbacks in the console, see [Callback settings](https://help.aliyun.com/document_detail/86071.html).
    // > - To use the upload acceleration feature, submit a ticket to activate it. For more information, see [Upload instructions](https://help.aliyun.com/document_detail/55396.html). For information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
