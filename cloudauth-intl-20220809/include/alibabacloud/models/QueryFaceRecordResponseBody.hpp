// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class QueryFaceRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    QueryFaceRecordResponseBody() = default ;
    QueryFaceRecordResponseBody(const QueryFaceRecordResponseBody &) = default ;
    QueryFaceRecordResponseBody(QueryFaceRecordResponseBody &&) = default ;
    QueryFaceRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceRecordResponseBody() = default ;
    QueryFaceRecordResponseBody& operator=(const QueryFaceRecordResponseBody &) = default ;
    QueryFaceRecordResponseBody& operator=(QueryFaceRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(FaceId, faceId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ImgOssUrl, imgOssUrl_);
        DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
        DARABONBA_PTR_TO_JSON(RegistrationType, registrationType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ImgOssUrl, imgOssUrl_);
        DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
        DARABONBA_PTR_FROM_JSON(RegistrationType, registrationType_);
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
      virtual bool empty() const override { return this->faceId_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->imgOssUrl_ == nullptr && this->merchantUserId_ == nullptr && this->registrationType_ == nullptr; };
      // faceId Field Functions 
      bool hasFaceId() const { return this->faceId_ != nullptr;};
      void deleteFaceId() { this->faceId_ = nullptr;};
      inline string getFaceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
      inline Items& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imgOssUrl Field Functions 
      bool hasImgOssUrl() const { return this->imgOssUrl_ != nullptr;};
      void deleteImgOssUrl() { this->imgOssUrl_ = nullptr;};
      inline string getImgOssUrl() const { DARABONBA_PTR_GET_DEFAULT(imgOssUrl_, "") };
      inline Items& setImgOssUrl(string imgOssUrl) { DARABONBA_PTR_SET_VALUE(imgOssUrl_, imgOssUrl) };


      // merchantUserId Field Functions 
      bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
      void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
      inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
      inline Items& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


      // registrationType Field Functions 
      bool hasRegistrationType() const { return this->registrationType_ != nullptr;};
      void deleteRegistrationType() { this->registrationType_ = nullptr;};
      inline string getRegistrationType() const { DARABONBA_PTR_GET_DEFAULT(registrationType_, "") };
      inline Items& setRegistrationType(string registrationType) { DARABONBA_PTR_SET_VALUE(registrationType_, registrationType) };


    protected:
      // Face ID.
      shared_ptr<string> faceId_ {};
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Primary key ID.
      shared_ptr<int64_t> id_ {};
      // Face image URL.
      shared_ptr<string> imgOssUrl_ {};
      // Merchant User ID.
      shared_ptr<string> merchantUserId_ {};
      // Registration type.
      shared_ptr<string> registrationType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFaceRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryFaceRecordResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryFaceRecordResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryFaceRecordResponseBody::Items>) };
    inline vector<QueryFaceRecordResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<QueryFaceRecordResponseBody::Items>) };
    inline QueryFaceRecordResponseBody& setItems(const vector<QueryFaceRecordResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryFaceRecordResponseBody& setItems(vector<QueryFaceRecordResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryFaceRecordResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFaceRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryFaceRecordResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryFaceRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFaceRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryFaceRecordResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline QueryFaceRecordResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Return code.
    shared_ptr<string> code_ {};
    // Current query page number.
    shared_ptr<int64_t> currentPage_ {};
    // List of returned information.
    shared_ptr<vector<QueryFaceRecordResponseBody::Items>> items_ {};
    // Maximum number of data entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Token for the next query start.
    shared_ptr<string> nextToken_ {};
    // Number of items per page.
    shared_ptr<int32_t> pageSize_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Total number of records.
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
