// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERRESTRICTEDURLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERRESTRICTEDURLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListBrowserRestrictedURLsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowserRestrictedURLsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupSetId, browserInstanceGroupSetId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowserRestrictedURLsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupSetId, browserInstanceGroupSetId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListBrowserRestrictedURLsRequest() = default ;
    ListBrowserRestrictedURLsRequest(const ListBrowserRestrictedURLsRequest &) = default ;
    ListBrowserRestrictedURLsRequest(ListBrowserRestrictedURLsRequest &&) = default ;
    ListBrowserRestrictedURLsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowserRestrictedURLsRequest() = default ;
    ListBrowserRestrictedURLsRequest& operator=(const ListBrowserRestrictedURLsRequest &) = default ;
    ListBrowserRestrictedURLsRequest& operator=(ListBrowserRestrictedURLsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserInstanceGroupId_ == nullptr
        && this->browserInstanceGroupSetId_ == nullptr && this->keyword_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // browserInstanceGroupId Field Functions 
    bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
    void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
    inline string getBrowserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
    inline ListBrowserRestrictedURLsRequest& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


    // browserInstanceGroupSetId Field Functions 
    bool hasBrowserInstanceGroupSetId() const { return this->browserInstanceGroupSetId_ != nullptr;};
    void deleteBrowserInstanceGroupSetId() { this->browserInstanceGroupSetId_ = nullptr;};
    inline string getBrowserInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupSetId_, "") };
    inline ListBrowserRestrictedURLsRequest& setBrowserInstanceGroupSetId(string browserInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupSetId_, browserInstanceGroupSetId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListBrowserRestrictedURLsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBrowserRestrictedURLsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBrowserRestrictedURLsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the browser delivery group. You must specify either this parameter or BrowserInstanceGroupSetId, but not both. If you specify this parameter, the restricted URLs configured for the delivery group are queried.
    shared_ptr<string> browserInstanceGroupId_ {};
    // The ID of the browser delivery group set. You must specify either BrowserInstanceGroupSetId or BrowserInstanceGroupId, but not both.
    shared_ptr<string> browserInstanceGroupSetId_ {};
    // The keyword used to filter access control URLs by using an include match. The match is case-insensitive for English letters. The maximum length is 1,024 characters after leading and trailing spaces are removed. If this parameter is not specified or contains only spaces, no filtering is performed. Special characters are matched literally.
    shared_ptr<string> keyword_ {};
    // The page number during a paging query. Default value: 0. If the value is less than 1, such as 0, the first page is returned. If the value is less than 0, a parameter error is returned. Specify 1 or a greater value.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records to return on each page during a paging query. Valid values: 1 to 200. Default value: 200. If the value is less than or equal to 0 or greater than 200, a parameter error is returned.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
