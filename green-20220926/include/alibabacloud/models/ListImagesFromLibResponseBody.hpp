// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESFROMLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESFROMLIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListImagesFromLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesFromLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesFromLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListImagesFromLibResponseBody() = default ;
    ListImagesFromLibResponseBody(const ListImagesFromLibResponseBody &) = default ;
    ListImagesFromLibResponseBody(ListImagesFromLibResponseBody &&) = default ;
    ListImagesFromLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesFromLibResponseBody() = default ;
    ListImagesFromLibResponseBody& operator=(const ListImagesFromLibResponseBody &) = default ;
    ListImagesFromLibResponseBody& operator=(ListImagesFromLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->thumbnailUrl_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Items& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Items& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // thumbnailUrl Field Functions 
      bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
      void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
      inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
      inline Items& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


    protected:
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Image ID.
      shared_ptr<string> imageId_ {};
      // Image URL.
      shared_ptr<string> imageUrl_ {};
      // Thumbnail URL.
      shared_ptr<string> thumbnailUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->msg_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListImagesFromLibResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListImagesFromLibResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListImagesFromLibResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListImagesFromLibResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListImagesFromLibResponseBody::Items>) };
    inline vector<ListImagesFromLibResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListImagesFromLibResponseBody::Items>) };
    inline ListImagesFromLibResponseBody& setItems(const vector<ListImagesFromLibResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListImagesFromLibResponseBody& setItems(vector<ListImagesFromLibResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListImagesFromLibResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImagesFromLibResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImagesFromLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImagesFromLibResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListImagesFromLibResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Error code, consistent with HTTP status.
    shared_ptr<int32_t> code_ {};
    // Current page.
    shared_ptr<int32_t> currentPage_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Data of the current page.
    shared_ptr<vector<ListImagesFromLibResponseBody::Items>> items_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
    // Total number of images.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
