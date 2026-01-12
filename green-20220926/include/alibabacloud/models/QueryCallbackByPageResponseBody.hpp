// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLBACKBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLBACKBYPAGERESPONSEBODY_HPP_
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
  class QueryCallbackByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallbackByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallbackByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCallbackByPageResponseBody() = default ;
    QueryCallbackByPageResponseBody(const QueryCallbackByPageResponseBody &) = default ;
    QueryCallbackByPageResponseBody(QueryCallbackByPageResponseBody &&) = default ;
    QueryCallbackByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallbackByPageResponseBody() = default ;
    QueryCallbackByPageResponseBody& operator=(const QueryCallbackByPageResponseBody &) = default ;
    QueryCallbackByPageResponseBody& operator=(QueryCallbackByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CryptType, cryptType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Seed, seed_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CryptType, cryptType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Seed, seed_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->cryptType_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->scope_ == nullptr
        && this->seed_ == nullptr && this->uid_ == nullptr && this->url_ == nullptr; };
      // cryptType Field Functions 
      bool hasCryptType() const { return this->cryptType_ != nullptr;};
      void deleteCryptType() { this->cryptType_ = nullptr;};
      inline string getCryptType() const { DARABONBA_PTR_GET_DEFAULT(cryptType_, "") };
      inline Items& setCryptType(string cryptType) { DARABONBA_PTR_SET_VALUE(cryptType_, cryptType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Items& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // seed Field Functions 
      bool hasSeed() const { return this->seed_ != nullptr;};
      void deleteSeed() { this->seed_ = nullptr;};
      inline string getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, "") };
      inline Items& setSeed(string seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Items& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Items& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Encryption algorithm.
      shared_ptr<string> cryptType_ {};
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Primary key ID.
      shared_ptr<int64_t> id_ {};
      // Name.
      shared_ptr<string> name_ {};
      // Result scope.
      shared_ptr<string> scope_ {};
      // Seed.
      shared_ptr<string> seed_ {};
      // UID.
      shared_ptr<string> uid_ {};
      // Callback URL.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryCallbackByPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryCallbackByPageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryCallbackByPageResponseBody::Items>) };
    inline vector<QueryCallbackByPageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<QueryCallbackByPageResponseBody::Items>) };
    inline QueryCallbackByPageResponseBody& setItems(const vector<QueryCallbackByPageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryCallbackByPageResponseBody& setItems(vector<QueryCallbackByPageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCallbackByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCallbackByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryCallbackByPageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Data of the current page.
    shared_ptr<vector<QueryCallbackByPageResponseBody::Items>> items_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // ID assigned by the backend, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
