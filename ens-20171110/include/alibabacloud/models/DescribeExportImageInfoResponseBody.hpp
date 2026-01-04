// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTIMAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTIMAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeExportImageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExportImageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExportImageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeExportImageInfoResponseBody() = default ;
    DescribeExportImageInfoResponseBody(const DescribeExportImageInfoResponseBody &) = default ;
    DescribeExportImageInfoResponseBody(DescribeExportImageInfoResponseBody &&) = default ;
    DescribeExportImageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExportImageInfoResponseBody() = default ;
    DescribeExportImageInfoResponseBody& operator=(const DescribeExportImageInfoResponseBody &) = default ;
    DescribeExportImageInfoResponseBody& operator=(DescribeExportImageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Image, image_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Image, image_);
      };
      Images() = default ;
      Images(const Images &) = default ;
      Images(Images &&) = default ;
      Images(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Images() = default ;
      Images& operator=(const Images &) = default ;
      Images& operator=(Images &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(Architecture, architecture_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(ExportedImageURL, exportedImageURL_);
          DARABONBA_PTR_TO_JSON(ImageExportStatus, imageExportStatus_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageName, imageName_);
          DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(ExportedImageURL, exportedImageURL_);
          DARABONBA_PTR_FROM_JSON(ImageExportStatus, imageExportStatus_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
          DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
        };
        Image() = default ;
        Image(const Image &) = default ;
        Image(Image &&) = default ;
        Image(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Image() = default ;
        Image& operator=(const Image &) = default ;
        Image& operator=(Image &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->architecture_ == nullptr
        && this->creationTime_ == nullptr && this->exportedImageURL_ == nullptr && this->imageExportStatus_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr
        && this->imageOwnerAlias_ == nullptr && this->platform_ == nullptr; };
        // architecture Field Functions 
        bool hasArchitecture() const { return this->architecture_ != nullptr;};
        void deleteArchitecture() { this->architecture_ = nullptr;};
        inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
        inline Image& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Image& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // exportedImageURL Field Functions 
        bool hasExportedImageURL() const { return this->exportedImageURL_ != nullptr;};
        void deleteExportedImageURL() { this->exportedImageURL_ = nullptr;};
        inline string getExportedImageURL() const { DARABONBA_PTR_GET_DEFAULT(exportedImageURL_, "") };
        inline Image& setExportedImageURL(string exportedImageURL) { DARABONBA_PTR_SET_VALUE(exportedImageURL_, exportedImageURL) };


        // imageExportStatus Field Functions 
        bool hasImageExportStatus() const { return this->imageExportStatus_ != nullptr;};
        void deleteImageExportStatus() { this->imageExportStatus_ = nullptr;};
        inline string getImageExportStatus() const { DARABONBA_PTR_GET_DEFAULT(imageExportStatus_, "") };
        inline Image& setImageExportStatus(string imageExportStatus) { DARABONBA_PTR_SET_VALUE(imageExportStatus_, imageExportStatus) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Image& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageName Field Functions 
        bool hasImageName() const { return this->imageName_ != nullptr;};
        void deleteImageName() { this->imageName_ = nullptr;};
        inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
        inline Image& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


        // imageOwnerAlias Field Functions 
        bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
        void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
        inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
        inline Image& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline Image& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      protected:
        // The architecture of the image. Example: **x86_64**.
        shared_ptr<string> architecture_ {};
        // The time when the image was created.
        shared_ptr<string> creationTime_ {};
        // The URL of the exported image.
        shared_ptr<string> exportedImageURL_ {};
        // The export status of the image. Valid values:
        // 
        // *   Exporting
        // *   Exported
        // *   ExportError
        // *   Unexported
        shared_ptr<string> imageExportStatus_ {};
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The name of the image.
        shared_ptr<string> imageName_ {};
        // The source of the image. Valid values:
        // 
        // *   system: public image
        // *   self: custom image
        shared_ptr<string> imageOwnerAlias_ {};
        // The OS.
        shared_ptr<string> platform_ {};
      };

      virtual bool empty() const override { return this->image_ == nullptr; };
      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const vector<Images::Image> & getImage() const { DARABONBA_PTR_GET_CONST(image_, vector<Images::Image>) };
      inline vector<Images::Image> getImage() { DARABONBA_PTR_GET(image_, vector<Images::Image>) };
      inline Images& setImage(const vector<Images::Image> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Images& setImage(vector<Images::Image> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    protected:
      shared_ptr<vector<Images::Image>> image_ {};
    };

    virtual bool empty() const override { return this->images_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeExportImageInfoResponseBody::Images & getImages() const { DARABONBA_PTR_GET_CONST(images_, DescribeExportImageInfoResponseBody::Images) };
    inline DescribeExportImageInfoResponseBody::Images getImages() { DARABONBA_PTR_GET(images_, DescribeExportImageInfoResponseBody::Images) };
    inline DescribeExportImageInfoResponseBody& setImages(const DescribeExportImageInfoResponseBody::Images & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeExportImageInfoResponseBody& setImages(DescribeExportImageInfoResponseBody::Images && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExportImageInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExportImageInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExportImageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeExportImageInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned result. For more information, see the Images parameter described in the JSON-formatted sample success response.
    shared_ptr<DescribeExportImageInfoResponseBody::Images> images_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
