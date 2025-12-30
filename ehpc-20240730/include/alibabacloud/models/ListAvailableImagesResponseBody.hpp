// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAvailableImagesResponseBody() = default ;
    ListAvailableImagesResponseBody(const ListAvailableImagesResponseBody &) = default ;
    ListAvailableImagesResponseBody(ListAvailableImagesResponseBody &&) = default ;
    ListAvailableImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableImagesResponseBody() = default ;
    ListAvailableImagesResponseBody& operator=(const ListAvailableImagesResponseBody &) = default ;
    ListAvailableImagesResponseBody& operator=(ListAvailableImagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Architecture, architecture_);
        DARABONBA_PTR_TO_JSON(BootMode, bootMode_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
        DARABONBA_PTR_TO_JSON(OSName, OSName_);
        DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
        DARABONBA_PTR_FROM_JSON(BootMode, bootMode_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
        DARABONBA_PTR_FROM_JSON(OSName, OSName_);
        DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
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
      virtual bool empty() const override { return this->architecture_ == nullptr
        && this->bootMode_ == nullptr && this->description_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageOwnerAlias_ == nullptr
        && this->OSName_ == nullptr && this->OSNameEn_ == nullptr && this->platform_ == nullptr && this->size_ == nullptr; };
      // architecture Field Functions 
      bool hasArchitecture() const { return this->architecture_ != nullptr;};
      void deleteArchitecture() { this->architecture_ = nullptr;};
      inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
      inline Images& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


      // bootMode Field Functions 
      bool hasBootMode() const { return this->bootMode_ != nullptr;};
      void deleteBootMode() { this->bootMode_ = nullptr;};
      inline string getBootMode() const { DARABONBA_PTR_GET_DEFAULT(bootMode_, "") };
      inline Images& setBootMode(string bootMode) { DARABONBA_PTR_SET_VALUE(bootMode_, bootMode) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Images& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Images& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Images& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageOwnerAlias Field Functions 
      bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
      void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
      inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
      inline Images& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


      // OSName Field Functions 
      bool hasOSName() const { return this->OSName_ != nullptr;};
      void deleteOSName() { this->OSName_ = nullptr;};
      inline string getOSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
      inline Images& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


      // OSNameEn Field Functions 
      bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
      void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
      inline string getOSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
      inline Images& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Images& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Images& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The OS architecture of the image. Valid values:
      // 
      // *   x86_64
      // *   arm64
      shared_ptr<string> architecture_ {};
      // The boot mode of the image. Valid values:
      // 
      // *   BIOS: Basic Input/Output System (BIOS).
      // *   UEFI: Unified Extensible Firmware Interface (UEFI).
      // 
      // >  When you change the OS boot mode of an instance, you must make sure that the boot mode matches the boot mode of the associated image. Otherwise, the instance fails to be booted.
      shared_ptr<string> bootMode_ {};
      // The image description.
      shared_ptr<string> description_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The image source. Valid values:
      // 
      // *   system: system image.
      // *   self: custom image.
      // *   others: shared image.
      shared_ptr<string> imageOwnerAlias_ {};
      // The OS name in Chinese.
      shared_ptr<string> OSName_ {};
      // The OS name in English.
      shared_ptr<string> OSNameEn_ {};
      // The OS. Valid values:
      // 
      // *   CentOS
      // *   windows
      shared_ptr<string> platform_ {};
      // The image size. Unit: GiB
      shared_ptr<string> size_ {};
    };

    virtual bool empty() const override { return this->images_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<ListAvailableImagesResponseBody::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<ListAvailableImagesResponseBody::Images>) };
    inline vector<ListAvailableImagesResponseBody::Images> getImages() { DARABONBA_PTR_GET(images_, vector<ListAvailableImagesResponseBody::Images>) };
    inline ListAvailableImagesResponseBody& setImages(const vector<ListAvailableImagesResponseBody::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ListAvailableImagesResponseBody& setImages(vector<ListAvailableImagesResponseBody::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAvailableImagesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAvailableImagesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAvailableImagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListAvailableImagesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the images.
    shared_ptr<vector<ListAvailableImagesResponseBody::Images>> images_ {};
    // The page number of the returned page.
    // 
    // *   Pages start from page 1.
    // *   Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
