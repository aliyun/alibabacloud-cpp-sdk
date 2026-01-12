// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYWORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYWORDSRESPONSEBODY_HPP_
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
  class ListKeywordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeywordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeywordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKeywordsResponseBody() = default ;
    ListKeywordsResponseBody(const ListKeywordsResponseBody &) = default ;
    ListKeywordsResponseBody(ListKeywordsResponseBody &&) = default ;
    ListKeywordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeywordsResponseBody() = default ;
    ListKeywordsResponseBody& operator=(const ListKeywordsResponseBody &) = default ;
    ListKeywordsResponseBody& operator=(ListKeywordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(KeywordLibId, keywordLibId_);
          DARABONBA_PTR_TO_JSON(KeywordMd5Id, keywordMd5Id_);
          DARABONBA_PTR_TO_JSON(Word, word_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(KeywordLibId, keywordLibId_);
          DARABONBA_PTR_FROM_JSON(KeywordMd5Id, keywordMd5Id_);
          DARABONBA_PTR_FROM_JSON(Word, word_);
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
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->keywordLibId_ == nullptr && this->keywordMd5Id_ == nullptr && this->word_ == nullptr; };
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


        // keywordLibId Field Functions 
        bool hasKeywordLibId() const { return this->keywordLibId_ != nullptr;};
        void deleteKeywordLibId() { this->keywordLibId_ = nullptr;};
        inline string getKeywordLibId() const { DARABONBA_PTR_GET_DEFAULT(keywordLibId_, "") };
        inline Items& setKeywordLibId(string keywordLibId) { DARABONBA_PTR_SET_VALUE(keywordLibId_, keywordLibId) };


        // keywordMd5Id Field Functions 
        bool hasKeywordMd5Id() const { return this->keywordMd5Id_ != nullptr;};
        void deleteKeywordMd5Id() { this->keywordMd5Id_ = nullptr;};
        inline int64_t getKeywordMd5Id() const { DARABONBA_PTR_GET_DEFAULT(keywordMd5Id_, 0L) };
        inline Items& setKeywordMd5Id(int64_t keywordMd5Id) { DARABONBA_PTR_SET_VALUE(keywordMd5Id_, keywordMd5Id) };


        // word Field Functions 
        bool hasWord() const { return this->word_ != nullptr;};
        void deleteWord() { this->word_ = nullptr;};
        inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
        inline Items& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


      protected:
        // Creation time.
        shared_ptr<string> gmtCreate_ {};
        // Modification time.
        shared_ptr<string> gmtModified_ {};
        // Primary key ID.
        shared_ptr<int64_t> id_ {};
        // Keyword library ID.
        shared_ptr<string> keywordLibId_ {};
        // Keyword data ID.
        shared_ptr<int64_t> keywordMd5Id_ {};
        // Keyword.
        shared_ptr<string> word_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Current page number.
      shared_ptr<int32_t> currentPage_ {};
      // Data of the current page.
      shared_ptr<vector<Data::Items>> items_ {};
      // Page size.
      shared_ptr<int32_t> pageSize_ {};
      // Total count.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListKeywordsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKeywordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKeywordsResponseBody::Data) };
    inline ListKeywordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKeywordsResponseBody::Data) };
    inline ListKeywordsResponseBody& setData(const ListKeywordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKeywordsResponseBody& setData(ListKeywordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListKeywordsResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKeywordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKeywordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code.
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<ListKeywordsResponseBody::Data> data_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success flag.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
