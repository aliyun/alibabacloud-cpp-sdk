// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERBOOKMARKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERBOOKMARKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListBrowserBookmarksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowserBookmarksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupSetId, browserInstanceGroupSetId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowserBookmarksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupSetId, browserInstanceGroupSetId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListBrowserBookmarksRequest() = default ;
    ListBrowserBookmarksRequest(const ListBrowserBookmarksRequest &) = default ;
    ListBrowserBookmarksRequest(ListBrowserBookmarksRequest &&) = default ;
    ListBrowserBookmarksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowserBookmarksRequest() = default ;
    ListBrowserBookmarksRequest& operator=(const ListBrowserBookmarksRequest &) = default ;
    ListBrowserBookmarksRequest& operator=(ListBrowserBookmarksRequest &&) = default ;
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
    inline ListBrowserBookmarksRequest& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


    // browserInstanceGroupSetId Field Functions 
    bool hasBrowserInstanceGroupSetId() const { return this->browserInstanceGroupSetId_ != nullptr;};
    void deleteBrowserInstanceGroupSetId() { this->browserInstanceGroupSetId_ = nullptr;};
    inline string getBrowserInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupSetId_, "") };
    inline ListBrowserBookmarksRequest& setBrowserInstanceGroupSetId(string browserInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupSetId_, browserInstanceGroupSetId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListBrowserBookmarksRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBrowserBookmarksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBrowserBookmarksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the cloud browser group. You must specify either this parameter or BrowserInstanceGroupSetId, but not both.
    shared_ptr<string> browserInstanceGroupId_ {};
    // The ID of the browser delivery group set. You must specify either this parameter or BrowserInstanceGroupId, but not both.
    shared_ptr<string> browserInstanceGroupSetId_ {};
    // The keyword used for substring matching in bookmark names or URLs. The matching is case-insensitive for English characters. The keyword can be up to 1,024 characters in length after leading and trailing spaces are removed. If this parameter is not specified or contains only spaces, no filtering is applied. Special characters are matched literally.
    shared_ptr<string> keyword_ {};
    // The page number of the page to return. Pages start from page 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: 1 to 200.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
