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
    virtual bool empty() const override { this->biz_ != nullptr
        && this->currentPage_ != nullptr && this->forceFlush_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr && this->searchInfo_ != nullptr
        && this->searchItem_ != nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline GetAssetsPropertyItemRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAssetsPropertyItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // forceFlush Field Functions 
    bool hasForceFlush() const { return this->forceFlush_ != nullptr;};
    void deleteForceFlush() { this->forceFlush_ = nullptr;};
    inline bool forceFlush() const { DARABONBA_PTR_GET_DEFAULT(forceFlush_, false) };
    inline GetAssetsPropertyItemRequest& setForceFlush(bool forceFlush) { DARABONBA_PTR_SET_VALUE(forceFlush_, forceFlush) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAssetsPropertyItemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAssetsPropertyItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchInfo Field Functions 
    bool hasSearchInfo() const { return this->searchInfo_ != nullptr;};
    void deleteSearchInfo() { this->searchInfo_ = nullptr;};
    inline string searchInfo() const { DARABONBA_PTR_GET_DEFAULT(searchInfo_, "") };
    inline GetAssetsPropertyItemRequest& setSearchInfo(string searchInfo) { DARABONBA_PTR_SET_VALUE(searchInfo_, searchInfo) };


    // searchItem Field Functions 
    bool hasSearchItem() const { return this->searchItem_ != nullptr;};
    void deleteSearchItem() { this->searchItem_ = nullptr;};
    inline string searchItem() const { DARABONBA_PTR_GET_DEFAULT(searchItem_, "") };
    inline GetAssetsPropertyItemRequest& setSearchItem(string searchItem) { DARABONBA_PTR_SET_VALUE(searchItem_, searchItem) };


  protected:
    // The type of the asset fingerprint that you want to query. Default value: **sca**. Valid values:
    // 
    // *   **lkm**: kernel module
    // *   **autorun**: startup item
    // *   **web_server**: website
    // 
    // This parameter is required.
    std::shared_ptr<string> biz_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether to forcefully refresh the data that you want to query. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> forceFlush_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The value of the search condition. You must specify this parameter based on the value of the **SearchItem** parameter.
    // 
    // *   If you set **SearchItem** to **domain**, you must enter the domain name.
    // *   If you set **SearchItem** to **module_name**, you must enter the module name.
    // *   If you set **SearchItem** to **path**, you must enter the path to the self-starting item.
    // 
    // >  You must specify both the **SearchItem** and **SearchInfo** parameters before you can query the information about asset fingerprints by asset fingerprint name.
    std::shared_ptr<string> searchInfo_ = nullptr;
    // The type of the search condition. You must specify this parameter based on the value of the **Biz** parameter. Valid values:
    // 
    // *   If you set **Biz** to **web_server**, set **SearchItem** to the following value:
    // 
    //     *   **domain**: the domain name
    // 
    // *   If you set **Biz** to **lkm**, set **SearchItem** to the following value:
    // 
    //     *   **module_name**: the name of the module
    // 
    // *   If you set **Biz** to **autorun**, set **SearchItem** to the following value:
    // 
    //     *   **path**: the path to the self-starting item
    // 
    // >  You must specify both the **SearchItem** and **SearchInfo** parameters before you can query the information about asset fingerprints by asset fingerprint name.
    std::shared_ptr<string> searchItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
