// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetImageInfoResponseBody() = default ;
    GetImageInfoResponseBody(const GetImageInfoResponseBody &) = default ;
    GetImageInfoResponseBody(GetImageInfoResponseBody &&) = default ;
    GetImageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfoResponseBody() = default ;
    GetImageInfoResponseBody& operator=(const GetImageInfoResponseBody &) = default ;
    GetImageInfoResponseBody& operator=(GetImageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CateName, cateName_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageType, imageType_);
        DARABONBA_PTR_TO_JSON(Mezzanine, mezzanine_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(URL, URL_);
      };
      friend void from_json(const Darabonba::Json& j, ImageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CateName, cateName_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
        DARABONBA_PTR_FROM_JSON(Mezzanine, mezzanine_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(URL, URL_);
      };
      ImageInfo() = default ;
      ImageInfo(const ImageInfo &) = default ;
      ImageInfo(ImageInfo &&) = default ;
      ImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageInfo() = default ;
      ImageInfo& operator=(const ImageInfo &) = default ;
      ImageInfo& operator=(ImageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Mezzanine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Mezzanine& obj) { 
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(OriginalFileName, originalFileName_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Mezzanine& obj) { 
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(OriginalFileName, originalFileName_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        Mezzanine() = default ;
        Mezzanine(const Mezzanine &) = default ;
        Mezzanine(Mezzanine &&) = default ;
        Mezzanine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Mezzanine() = default ;
        Mezzanine& operator=(const Mezzanine &) = default ;
        Mezzanine& operator=(Mezzanine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->fileURL_ == nullptr && this->height_ == nullptr && this->originalFileName_ == nullptr && this->width_ == nullptr; };
        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline Mezzanine& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // fileURL Field Functions 
        bool hasFileURL() const { return this->fileURL_ != nullptr;};
        void deleteFileURL() { this->fileURL_ = nullptr;};
        inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
        inline Mezzanine& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline Mezzanine& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // originalFileName Field Functions 
        bool hasOriginalFileName() const { return this->originalFileName_ != nullptr;};
        void deleteOriginalFileName() { this->originalFileName_ = nullptr;};
        inline string getOriginalFileName() const { DARABONBA_PTR_GET_DEFAULT(originalFileName_, "") };
        inline Mezzanine& setOriginalFileName(string originalFileName) { DARABONBA_PTR_SET_VALUE(originalFileName_, originalFileName) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline Mezzanine& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The size of the image. Unit: bytes.
        shared_ptr<string> fileSize_ {};
        // The OSS URL of the image file.
        shared_ptr<string> fileURL_ {};
        // The height of the image. Unit: pixels.
        shared_ptr<int32_t> height_ {};
        // The URL of the source file.
        shared_ptr<string> originalFileName_ {};
        // The width of the image. Unit: pixels.
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->cateId_ == nullptr && this->cateName_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->imageId_ == nullptr
        && this->imageType_ == nullptr && this->mezzanine_ == nullptr && this->status_ == nullptr && this->storageLocation_ == nullptr && this->tags_ == nullptr
        && this->title_ == nullptr && this->URL_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline ImageInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
      inline ImageInfo& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // cateName Field Functions 
      bool hasCateName() const { return this->cateName_ != nullptr;};
      void deleteCateName() { this->cateName_ = nullptr;};
      inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
      inline ImageInfo& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ImageInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ImageInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ImageInfo& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline ImageInfo& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // mezzanine Field Functions 
      bool hasMezzanine() const { return this->mezzanine_ != nullptr;};
      void deleteMezzanine() { this->mezzanine_ = nullptr;};
      inline const ImageInfo::Mezzanine & getMezzanine() const { DARABONBA_PTR_GET_CONST(mezzanine_, ImageInfo::Mezzanine) };
      inline ImageInfo::Mezzanine getMezzanine() { DARABONBA_PTR_GET(mezzanine_, ImageInfo::Mezzanine) };
      inline ImageInfo& setMezzanine(const ImageInfo::Mezzanine & mezzanine) { DARABONBA_PTR_SET_VALUE(mezzanine_, mezzanine) };
      inline ImageInfo& setMezzanine(ImageInfo::Mezzanine && mezzanine) { DARABONBA_PTR_SET_RVALUE(mezzanine_, mezzanine) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ImageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageLocation Field Functions 
      bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
      void deleteStorageLocation() { this->storageLocation_ = nullptr;};
      inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
      inline ImageInfo& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline ImageInfo& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ImageInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // URL Field Functions 
      bool hasURL() const { return this->URL_ != nullptr;};
      void deleteURL() { this->URL_ = nullptr;};
      inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
      inline ImageInfo& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The ID of the category.
      shared_ptr<int64_t> cateId_ {};
      // The name of the category.
      shared_ptr<string> cateName_ {};
      // The time when the image was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      // The type of the image. Valid values:
      // 
      // *   **CoverSnapshot**: thumbnail snapshot.
      // *   **NormalSnapshot**: normal snapshot.
      // *   **SpriteSnapshot**: sprite snapshot.
      // *   **SpriteOriginSnapshot**: sprite source snapshot.
      // *   **All**: images of all the preceding types. Multiple types other than All can return for this parameter. Multiple types are separated by commas (,).
      shared_ptr<string> imageType_ {};
      // The source information about the image.
      shared_ptr<ImageInfo::Mezzanine> mezzanine_ {};
      // The status of the image. Valid values:
      // 
      // *   **Uploading**: The image is being uploaded. This is the initial status.
      // *   **Normal**: The image is uploaded.
      // *   **UploadFail**: The image fails to be uploaded.
      shared_ptr<string> status_ {};
      // The bucket in which the image is stored.
      shared_ptr<string> storageLocation_ {};
      // The tags of the image. Multiple tags are separated by commas (,).
      shared_ptr<string> tags_ {};
      // The title of the image.
      shared_ptr<string> title_ {};
      // The image URL. If a domain name for CDN is specified, a CDN URL is returned. Otherwise, an OSS URL is returned.
      shared_ptr<string> URL_ {};
    };

    virtual bool empty() const override { return this->imageInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // imageInfo Field Functions 
    bool hasImageInfo() const { return this->imageInfo_ != nullptr;};
    void deleteImageInfo() { this->imageInfo_ = nullptr;};
    inline const GetImageInfoResponseBody::ImageInfo & getImageInfo() const { DARABONBA_PTR_GET_CONST(imageInfo_, GetImageInfoResponseBody::ImageInfo) };
    inline GetImageInfoResponseBody::ImageInfo getImageInfo() { DARABONBA_PTR_GET(imageInfo_, GetImageInfoResponseBody::ImageInfo) };
    inline GetImageInfoResponseBody& setImageInfo(const GetImageInfoResponseBody::ImageInfo & imageInfo) { DARABONBA_PTR_SET_VALUE(imageInfo_, imageInfo) };
    inline GetImageInfoResponseBody& setImageInfo(GetImageInfoResponseBody::ImageInfo && imageInfo) { DARABONBA_PTR_SET_RVALUE(imageInfo_, imageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the image.
    shared_ptr<GetImageInfoResponseBody::ImageInfo> imageInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
