// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepoTagResponseBody() = default ;
    ListRepoTagResponseBody(const ListRepoTagResponseBody &) = default ;
    ListRepoTagResponseBody(ListRepoTagResponseBody &&) = default ;
    ListRepoTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoTagResponseBody() = default ;
    ListRepoTagResponseBody& operator=(const ListRepoTagResponseBody &) = default ;
    ListRepoTagResponseBody& operator=(ListRepoTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(ImageCreate, imageCreate_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
        DARABONBA_PTR_TO_JSON(ImageUpdate, imageUpdate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(ImageCreate, imageCreate_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
        DARABONBA_PTR_FROM_JSON(ImageUpdate, imageUpdate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      virtual bool empty() const override { return this->digest_ == nullptr
        && this->imageCreate_ == nullptr && this->imageId_ == nullptr && this->imageSize_ == nullptr && this->imageUpdate_ == nullptr && this->status_ == nullptr
        && this->tag_ == nullptr; };
      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline Images& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // imageCreate Field Functions 
      bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
      void deleteImageCreate() { this->imageCreate_ = nullptr;};
      inline string getImageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, "") };
      inline Images& setImageCreate(string imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Images& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageSize Field Functions 
      bool hasImageSize() const { return this->imageSize_ != nullptr;};
      void deleteImageSize() { this->imageSize_ = nullptr;};
      inline int64_t getImageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
      inline Images& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


      // imageUpdate Field Functions 
      bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
      void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
      inline string getImageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, "") };
      inline Images& setImageUpdate(string imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Images& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Images& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The digest of the image.
      shared_ptr<string> digest_ {};
      // The time when the image was created.
      shared_ptr<string> imageCreate_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      // The size of the image.
      shared_ptr<int64_t> imageSize_ {};
      // The time when the image was last updated.
      shared_ptr<string> imageUpdate_ {};
      // The status of the image.
      shared_ptr<string> status_ {};
      // The tag of the image.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->images_ == nullptr && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoTagResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<ListRepoTagResponseBody::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<ListRepoTagResponseBody::Images>) };
    inline vector<ListRepoTagResponseBody::Images> getImages() { DARABONBA_PTR_GET(images_, vector<ListRepoTagResponseBody::Images>) };
    inline ListRepoTagResponseBody& setImages(const vector<ListRepoTagResponseBody::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ListRepoTagResponseBody& setImages(vector<ListRepoTagResponseBody::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoTagResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoTagResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoTagResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRepoTagResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // The images.
    shared_ptr<vector<ListRepoTagResponseBody::Images>> images_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
