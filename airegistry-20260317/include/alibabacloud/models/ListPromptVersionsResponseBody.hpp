// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class ListPromptVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromptVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromptVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPromptVersionsResponseBody() = default ;
    ListPromptVersionsResponseBody(const ListPromptVersionsResponseBody &) = default ;
    ListPromptVersionsResponseBody(ListPromptVersionsResponseBody &&) = default ;
    ListPromptVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromptVersionsResponseBody() = default ;
    ListPromptVersionsResponseBody& operator=(const ListPromptVersionsResponseBody &) = default ;
    ListPromptVersionsResponseBody& operator=(ListPromptVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageItems, pageItems_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PagesAvailable, pagesAvailable_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageItems, pageItems_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PagesAvailable, pagesAvailable_);
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
      class PageItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageItems& obj) { 
          DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
          DARABONBA_PTR_TO_JSON(SrcUser, srcUser_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, PageItems& obj) { 
          DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
          DARABONBA_PTR_FROM_JSON(SrcUser, srcUser_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        PageItems() = default ;
        PageItems(const PageItems &) = default ;
        PageItems(PageItems &&) = default ;
        PageItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageItems() = default ;
        PageItems& operator=(const PageItems &) = default ;
        PageItems& operator=(PageItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commitMsg_ == nullptr
        && this->gmtModified_ == nullptr && this->promptKey_ == nullptr && this->srcUser_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
        // commitMsg Field Functions 
        bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
        void deleteCommitMsg() { this->commitMsg_ = nullptr;};
        inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
        inline PageItems& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline PageItems& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // promptKey Field Functions 
        bool hasPromptKey() const { return this->promptKey_ != nullptr;};
        void deletePromptKey() { this->promptKey_ = nullptr;};
        inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
        inline PageItems& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


        // srcUser Field Functions 
        bool hasSrcUser() const { return this->srcUser_ != nullptr;};
        void deleteSrcUser() { this->srcUser_ = nullptr;};
        inline string getSrcUser() const { DARABONBA_PTR_GET_DEFAULT(srcUser_, "") };
        inline PageItems& setSrcUser(string srcUser) { DARABONBA_PTR_SET_VALUE(srcUser_, srcUser) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PageItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline PageItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> commitMsg_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<string> promptKey_ {};
        shared_ptr<string> srcUser_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->pageItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pagesAvailable_ == nullptr && this->totalCount_ == nullptr; };
      // pageItems Field Functions 
      bool hasPageItems() const { return this->pageItems_ != nullptr;};
      void deletePageItems() { this->pageItems_ = nullptr;};
      inline const vector<Data::PageItems> & getPageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<Data::PageItems>) };
      inline vector<Data::PageItems> getPageItems() { DARABONBA_PTR_GET(pageItems_, vector<Data::PageItems>) };
      inline Data& setPageItems(const vector<Data::PageItems> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
      inline Data& setPageItems(vector<Data::PageItems> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pagesAvailable Field Functions 
      bool hasPagesAvailable() const { return this->pagesAvailable_ != nullptr;};
      void deletePagesAvailable() { this->pagesAvailable_ = nullptr;};
      inline int32_t getPagesAvailable() const { DARABONBA_PTR_GET_DEFAULT(pagesAvailable_, 0) };
      inline Data& setPagesAvailable(int32_t pagesAvailable) { DARABONBA_PTR_SET_VALUE(pagesAvailable_, pagesAvailable) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::PageItems>> pageItems_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pagesAvailable_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPromptVersionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPromptVersionsResponseBody::Data) };
    inline ListPromptVersionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPromptVersionsResponseBody::Data) };
    inline ListPromptVersionsResponseBody& setData(const ListPromptVersionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPromptVersionsResponseBody& setData(ListPromptVersionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPromptVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListPromptVersionsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
