// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERRESTRICTEDURLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERRESTRICTEDURLSRESPONSEBODY_HPP_
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
  class ListBrowserRestrictedURLsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowserRestrictedURLsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowserRestrictedURLsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBrowserRestrictedURLsResponseBody() = default ;
    ListBrowserRestrictedURLsResponseBody(const ListBrowserRestrictedURLsResponseBody &) = default ;
    ListBrowserRestrictedURLsResponseBody(ListBrowserRestrictedURLsResponseBody &&) = default ;
    ListBrowserRestrictedURLsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowserRestrictedURLsResponseBody() = default ;
    ListBrowserRestrictedURLsResponseBody& operator=(const ListBrowserRestrictedURLsResponseBody &) = default ;
    ListBrowserRestrictedURLsResponseBody& operator=(ListBrowserRestrictedURLsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RestrictedURLId, restrictedURLId_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RestrictedURLId, restrictedURLId_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->restrictedURLId_ == nullptr
        && this->url_ == nullptr; };
      // restrictedURLId Field Functions 
      bool hasRestrictedURLId() const { return this->restrictedURLId_ != nullptr;};
      void deleteRestrictedURLId() { this->restrictedURLId_ = nullptr;};
      inline string getRestrictedURLId() const { DARABONBA_PTR_GET_DEFAULT(restrictedURLId_, "") };
      inline Data& setRestrictedURLId(string restrictedURLId) { DARABONBA_PTR_SET_VALUE(restrictedURLId_, restrictedURLId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The unique identifier of the restricted URL record.
      shared_ptr<string> restrictedURLId_ {};
      // The URL address that is restricted from access.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBrowserRestrictedURLsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBrowserRestrictedURLsResponseBody::Data>) };
    inline vector<ListBrowserRestrictedURLsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBrowserRestrictedURLsResponseBody::Data>) };
    inline ListBrowserRestrictedURLsResponseBody& setData(const vector<ListBrowserRestrictedURLsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBrowserRestrictedURLsResponseBody& setData(vector<ListBrowserRestrictedURLsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBrowserRestrictedURLsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBrowserRestrictedURLsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBrowserRestrictedURLsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBrowserRestrictedURLsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of restricted URLs on the current page. Each record contains a restricted URL and its unique identifier. If no restricted URLs are configured under the specified conditions, an empty array is returned.
    shared_ptr<vector<ListBrowserRestrictedURLsResponseBody::Data>> data_ {};
    // The actual page number used for this query, which is the echoed value of the PageNumber request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The actual number of entries returned per page for this query, which is the echoed value of the PageSize request parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate call records and troubleshoot issues. The example value is partially masked.
    shared_ptr<string> requestId_ {};
    // The total number of restricted URL records that meet the filter conditions. This value is independent of the number of records returned on the current page and can be used with PageSize to calculate the total number of pages. If no records meet the conditions, 0 is returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
