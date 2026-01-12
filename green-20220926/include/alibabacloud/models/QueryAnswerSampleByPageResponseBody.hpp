// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANSWERSAMPLEBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYANSWERSAMPLEBYPAGERESPONSEBODY_HPP_
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
  class QueryAnswerSampleByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnswerSampleByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnswerSampleByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryAnswerSampleByPageResponseBody() = default ;
    QueryAnswerSampleByPageResponseBody(const QueryAnswerSampleByPageResponseBody &) = default ;
    QueryAnswerSampleByPageResponseBody(QueryAnswerSampleByPageResponseBody &&) = default ;
    QueryAnswerSampleByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnswerSampleByPageResponseBody() = default ;
    QueryAnswerSampleByPageResponseBody& operator=(const QueryAnswerSampleByPageResponseBody &) = default ;
    QueryAnswerSampleByPageResponseBody& operator=(QueryAnswerSampleByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Answer, answer_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LibId, libId_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Answer, answer_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LibId, libId_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
      virtual bool empty() const override { return this->answer_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->libId_ == nullptr && this->uid_ == nullptr; };
      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
      inline Items& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


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


      // libId Field Functions 
      bool hasLibId() const { return this->libId_ != nullptr;};
      void deleteLibId() { this->libId_ = nullptr;};
      inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
      inline Items& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Items& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      shared_ptr<string> answer_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> libId_ {};
      // UID。
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryAnswerSampleByPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryAnswerSampleByPageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryAnswerSampleByPageResponseBody::Items>) };
    inline vector<QueryAnswerSampleByPageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<QueryAnswerSampleByPageResponseBody::Items>) };
    inline QueryAnswerSampleByPageResponseBody& setItems(const vector<QueryAnswerSampleByPageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryAnswerSampleByPageResponseBody& setItems(vector<QueryAnswerSampleByPageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAnswerSampleByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAnswerSampleByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryAnswerSampleByPageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<QueryAnswerSampleByPageResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
