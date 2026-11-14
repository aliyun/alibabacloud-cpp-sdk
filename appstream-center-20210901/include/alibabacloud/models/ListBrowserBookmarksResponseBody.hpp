// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERBOOKMARKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERBOOKMARKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListBrowserBookmarksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowserBookmarksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowserBookmarksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBrowserBookmarksResponseBody() = default ;
    ListBrowserBookmarksResponseBody(const ListBrowserBookmarksResponseBody &) = default ;
    ListBrowserBookmarksResponseBody(ListBrowserBookmarksResponseBody &&) = default ;
    ListBrowserBookmarksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowserBookmarksResponseBody() = default ;
    ListBrowserBookmarksResponseBody& operator=(const ListBrowserBookmarksResponseBody &) = default ;
    ListBrowserBookmarksResponseBody& operator=(ListBrowserBookmarksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BookmarkFolder, bookmarkFolder_);
        DARABONBA_PTR_TO_JSON(BookmarkId, bookmarkId_);
        DARABONBA_PTR_TO_JSON(BookmarkName, bookmarkName_);
        DARABONBA_PTR_TO_JSON(BookmarkURL, bookmarkURL_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BookmarkFolder, bookmarkFolder_);
        DARABONBA_PTR_FROM_JSON(BookmarkId, bookmarkId_);
        DARABONBA_PTR_FROM_JSON(BookmarkName, bookmarkName_);
        DARABONBA_PTR_FROM_JSON(BookmarkURL, bookmarkURL_);
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
      virtual bool empty() const override { return this->bookmarkFolder_ == nullptr
        && this->bookmarkId_ == nullptr && this->bookmarkName_ == nullptr && this->bookmarkURL_ == nullptr; };
      // bookmarkFolder Field Functions 
      bool hasBookmarkFolder() const { return this->bookmarkFolder_ != nullptr;};
      void deleteBookmarkFolder() { this->bookmarkFolder_ = nullptr;};
      inline string getBookmarkFolder() const { DARABONBA_PTR_GET_DEFAULT(bookmarkFolder_, "") };
      inline Data& setBookmarkFolder(string bookmarkFolder) { DARABONBA_PTR_SET_VALUE(bookmarkFolder_, bookmarkFolder) };


      // bookmarkId Field Functions 
      bool hasBookmarkId() const { return this->bookmarkId_ != nullptr;};
      void deleteBookmarkId() { this->bookmarkId_ = nullptr;};
      inline string getBookmarkId() const { DARABONBA_PTR_GET_DEFAULT(bookmarkId_, "") };
      inline Data& setBookmarkId(string bookmarkId) { DARABONBA_PTR_SET_VALUE(bookmarkId_, bookmarkId) };


      // bookmarkName Field Functions 
      bool hasBookmarkName() const { return this->bookmarkName_ != nullptr;};
      void deleteBookmarkName() { this->bookmarkName_ = nullptr;};
      inline string getBookmarkName() const { DARABONBA_PTR_GET_DEFAULT(bookmarkName_, "") };
      inline Data& setBookmarkName(string bookmarkName) { DARABONBA_PTR_SET_VALUE(bookmarkName_, bookmarkName) };


      // bookmarkURL Field Functions 
      bool hasBookmarkURL() const { return this->bookmarkURL_ != nullptr;};
      void deleteBookmarkURL() { this->bookmarkURL_ = nullptr;};
      inline string getBookmarkURL() const { DARABONBA_PTR_GET_DEFAULT(bookmarkURL_, "") };
      inline Data& setBookmarkURL(string bookmarkURL) { DARABONBA_PTR_SET_VALUE(bookmarkURL_, bookmarkURL) };


    protected:
      // The bookmark folder.
      shared_ptr<string> bookmarkFolder_ {};
      // The bookmark ID.
      shared_ptr<string> bookmarkId_ {};
      // The bookmark name.
      shared_ptr<string> bookmarkName_ {};
      // The bookmark URL.
      shared_ptr<string> bookmarkURL_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBrowserBookmarksResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBrowserBookmarksResponseBody::Data>) };
    inline vector<ListBrowserBookmarksResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBrowserBookmarksResponseBody::Data>) };
    inline ListBrowserBookmarksResponseBody& setData(const vector<ListBrowserBookmarksResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBrowserBookmarksResponseBody& setData(vector<ListBrowserBookmarksResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBrowserBookmarksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBrowserBookmarksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBrowserBookmarksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBrowserBookmarksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The bookmarks on the current page.
    shared_ptr<vector<ListBrowserBookmarksResponseBody::Data>> data_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of bookmarks that meet the filtering conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
