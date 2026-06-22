// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchInfo, searchInfo_);
      DARABONBA_PTR_TO_JSON(SearchItem, searchItem_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchInfo, searchInfo_);
      DARABONBA_PTR_FROM_JSON(SearchItem, searchItem_);
    };
    GetAssetsPropertyItemRequest() = default ;
    GetAssetsPropertyItemRequest(const GetAssetsPropertyItemRequest &) = default ;
    GetAssetsPropertyItemRequest(GetAssetsPropertyItemRequest &&) = default ;
    GetAssetsPropertyItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyItemRequest() = default ;
    GetAssetsPropertyItemRequest& operator=(const GetAssetsPropertyItemRequest &) = default ;
    GetAssetsPropertyItemRequest& operator=(GetAssetsPropertyItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biz_ == nullptr
        && this->currentPage_ == nullptr && this->forceFlush_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->searchInfo_ == nullptr
        && this->searchItem_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline GetAssetsPropertyItemRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAssetsPropertyItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // forceFlush Field Functions 
    bool hasForceFlush() const { return this->forceFlush_ != nullptr;};
    void deleteForceFlush() { this->forceFlush_ = nullptr;};
    inline bool getForceFlush() const { DARABONBA_PTR_GET_DEFAULT(forceFlush_, false) };
    inline GetAssetsPropertyItemRequest& setForceFlush(bool forceFlush) { DARABONBA_PTR_SET_VALUE(forceFlush_, forceFlush) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAssetsPropertyItemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAssetsPropertyItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchInfo Field Functions 
    bool hasSearchInfo() const { return this->searchInfo_ != nullptr;};
    void deleteSearchInfo() { this->searchInfo_ = nullptr;};
    inline string getSearchInfo() const { DARABONBA_PTR_GET_DEFAULT(searchInfo_, "") };
    inline GetAssetsPropertyItemRequest& setSearchInfo(string searchInfo) { DARABONBA_PTR_SET_VALUE(searchInfo_, searchInfo) };


    // searchItem Field Functions 
    bool hasSearchItem() const { return this->searchItem_ != nullptr;};
    void deleteSearchItem() { this->searchItem_ = nullptr;};
    inline string getSearchItem() const { DARABONBA_PTR_GET_DEFAULT(searchItem_, "") };
    inline GetAssetsPropertyItemRequest& setSearchItem(string searchItem) { DARABONBA_PTR_SET_VALUE(searchItem_, searchItem) };


  protected:
    // The type of Asset Fingerprints to query. Default value: **sca**. Valid values:
    // 
    // - **lkm**: kernel module
    // - **autorun**: startup item
    // - **web_server**: website.
    // 
    // This parameter is required.
    shared_ptr<string> biz_ {};
    // The page number of the page to return. Default value: **1**, which indicates the first page.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether to forcefully refresh the data to be queried. Valid values:
    // - **true**: Forcefully refresh.
    // - **false**: Do not forcefully refresh.
    shared_ptr<bool> forceFlush_ {};
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // 
    // - zh: Chinese
    // - en: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return on each page when using paging. Default value: 20. If the PageSize parameter is left empty, 20 entries are returned by default.
    // > Do not leave PageSize empty.
    shared_ptr<int32_t> pageSize_ {};
    // The content to query. Specify different query content based on the value of **SearchItem**:
    // - If **SearchItem** is set to **domain**, enter the domain name of the Asset Fingerprints entry.
    // - If **SearchItem** is set to **module_name**, enter the module name of the Asset Fingerprints entry.
    // - If **SearchItem** is set to **path**, enter the startup item path of the Asset Fingerprints entry.
    // 
    // > The **SearchItem** and **SearchInfo** parameters must be used together. Both parameters must be set at the same time for the query to take effect. Setting only one parameter does not take effect. You can use these parameters to query all data of a specific Asset Fingerprints entry by name.
    shared_ptr<string> searchInfo_ {};
    // The type of query condition. Set different aggregation search conditions based on the **Biz** parameter. Valid values:
    // - If **Biz** is set to **web_server**, the following search conditions are supported for **SearchItem**:
    //     - **domain**: domain name
    // - If **Biz** is set to **lkm**, the following search conditions are supported for **SearchItem**:
    //     - **module_name**: module name
    // - If **Biz** is set to **autorun**, the following search conditions are supported for **SearchItem**:
    //     - **path**: startup item path
    // > The **SearchItem** and **SearchInfo** parameters must be used together. Both parameters must be set at the same time for the query to take effect. Setting only one parameter does not take effect. You can use these parameters to query all data of a specific Asset Fingerprints entry by name.
    shared_ptr<string> searchItem_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
