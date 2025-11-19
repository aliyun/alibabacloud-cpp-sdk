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
        && return this->cateId_ == nullptr && return this->description_ == nullptr && return this->imageExt_ == nullptr && return this->imageType_ == nullptr && return this->originalFileName_ == nullptr
        && return this->storageLocation_ == nullptr && return this->tags_ == nullptr && return this->title_ == nullptr && return this->userData_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateUploadImageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline CreateUploadImageRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUploadImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageExt Field Functions 
    bool hasImageExt() const { return this->imageExt_ != nullptr;};
    void deleteImageExt() { this->imageExt_ = nullptr;};
    inline string imageExt() const { DARABONBA_PTR_GET_DEFAULT(imageExt_, "") };
    inline CreateUploadImageRequest& setImageExt(string imageExt) { DARABONBA_PTR_SET_VALUE(imageExt_, imageExt) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline CreateUploadImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // originalFileName Field Functions 
    bool hasOriginalFileName() const { return this->originalFileName_ != nullptr;};
    void deleteOriginalFileName() { this->originalFileName_ = nullptr;};
    inline string originalFileName() const { DARABONBA_PTR_GET_DEFAULT(originalFileName_, "") };
    inline CreateUploadImageRequest& setOriginalFileName(string originalFileName) { DARABONBA_PTR_SET_VALUE(originalFileName_, originalFileName) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline CreateUploadImageRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateUploadImageRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateUploadImageRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadImageRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the application. Default value: **app-1000000**. For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The category ID of the image. You can use one of the following methods to obtain the category ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Configuration Management** > **Media Management** > **Categories**. On the Categories page, you can view the category ID of the image.
    // *   Obtain the value of CateId from the response to the [AddCategory](https://help.aliyun.com/document_detail/56401.html) operation.
    // *   Obtain the value of CateId from the response to the [GetCategories](https://help.aliyun.com/document_detail/56406.html) operation.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The description of the image.
    // 
    // *   The description can be up to 1,024 characters in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> description_ = nullptr;
    // The file name extension of the image. Valid values:
    // 
    // *   **png** (default)
    // *   **jpg**
    // *   **jpeg**
    // *   **gif**
    std::shared_ptr<string> imageExt_ = nullptr;
    // The type of the image. Valid values:
    // 
    // *   **default**: the default image type.
    // *   **cover**: the thumbnail.
    // 
    // > You can manage only images of the **default** type in the ApsaraVideo VOD console.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageType_ = nullptr;
    // The name of the source file.
    // 
    // > The name must contain a file name extension. The file name extension is not case-sensitive.
    std::shared_ptr<string> originalFileName_ = nullptr;
    // The storage address. Perform the following operations to obtain the storage address: Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Configuration Management** > **Media Management** > **Storage**. On the Storage page, view the storage address.
    // 
    // > If you specify a storage address, media files are uploaded to the specified address.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The tags of the image. The following rules apply:
    // 
    // *   Each tag can be up to 32 characters in length.
    // *   You can specify a maximum of 16 tags for an image.
    // *   Separate multiple tags with commas (,).
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the image. The following rules apply:
    // 
    // *   The title can be up to 128 characters in length.
    // *   The value must be encoded in UTF-8.
    std::shared_ptr<string> title_ = nullptr;
    // The custom configurations, including callback configurations and upload acceleration configurations. The value must be a JSON string. For more information, see the "UserData: specifies the custom configurations for media upload" section of the [Request parameters](https://help.aliyun.com/document_detail/86952.html) topic.
    // 
    // > *   The callback configurations take effect only after you specify the HTTP callback URL and select specific callback events in the ApsaraVideo VOD console. For more information about how to configure HTTP callback settings in the ApsaraVideo VOD console, see [Configure callback settings](https://help.aliyun.com/document_detail/86071.html).
    // > *   If you want to enable the upload acceleration feature, submit a ticket. For more information, see [Overview](https://help.aliyun.com/document_detail/55396.html). For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
