// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCAITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScaItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchInfo, searchInfo_);
      DARABONBA_PTR_TO_JSON(SearchItem, searchItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchInfo, searchInfo_);
      DARABONBA_PTR_FROM_JSON(SearchItem, searchItem_);
    };
    DescribePropertyScaItemRequest() = default ;
    DescribePropertyScaItemRequest(const DescribePropertyScaItemRequest &) = default ;
    DescribePropertyScaItemRequest(DescribePropertyScaItemRequest &&) = default ;
    DescribePropertyScaItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaItemRequest() = default ;
    DescribePropertyScaItemRequest& operator=(const DescribePropertyScaItemRequest &) = default ;
    DescribePropertyScaItemRequest& operator=(DescribePropertyScaItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biz_ == nullptr
        && return this->currentPage_ == nullptr && return this->forceFlush_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->searchInfo_ == nullptr
        && return this->searchItem_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline DescribePropertyScaItemRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyScaItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // forceFlush Field Functions 
    bool hasForceFlush() const { return this->forceFlush_ != nullptr;};
    void deleteForceFlush() { this->forceFlush_ = nullptr;};
    inline bool forceFlush() const { DARABONBA_PTR_GET_DEFAULT(forceFlush_, false) };
    inline DescribePropertyScaItemRequest& setForceFlush(bool forceFlush) { DARABONBA_PTR_SET_VALUE(forceFlush_, forceFlush) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePropertyScaItemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyScaItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchInfo Field Functions 
    bool hasSearchInfo() const { return this->searchInfo_ != nullptr;};
    void deleteSearchInfo() { this->searchInfo_ = nullptr;};
    inline string searchInfo() const { DARABONBA_PTR_GET_DEFAULT(searchInfo_, "") };
    inline DescribePropertyScaItemRequest& setSearchInfo(string searchInfo) { DARABONBA_PTR_SET_VALUE(searchInfo_, searchInfo) };


    // searchItem Field Functions 
    bool hasSearchItem() const { return this->searchItem_ != nullptr;};
    void deleteSearchItem() { this->searchItem_ = nullptr;};
    inline string searchItem() const { DARABONBA_PTR_GET_DEFAULT(searchItem_, "") };
    inline DescribePropertyScaItemRequest& setSearchItem(string searchItem) { DARABONBA_PTR_SET_VALUE(searchItem_, searchItem) };


  protected:
    // The type of the asset fingerprint that you want to query. Default value: **sca**. Valid values:
    // 
    // *   **sca**: middleware
    // *   **sca_database**: database
    // *   **sca_web**: web service
    // 
    // > If you do not specify this parameter, the default value **sca** is used, which indicates that middleware fingerprints are queried.
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
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The search keyword. You must specify this parameter based on the value of the **SearchItem** parameter.
    // 
    // *   If the **SearchItem** parameter is set to **name**, you must enter the name of an asset fingerprint.
    // 
    // *   If the **SearchItem** parameter is set to **type**, you must enter the type of an asset fingerprint. Valid values:
    // 
    //     *   **system_service**: system service
    //     *   **software_library**: software library
    //     *   **docker_component**: container component
    //     *   **database**: database
    //     *   **web_container**: web container
    //     *   **jar**: JAR package
    //     *   **web_framework**: web framework
    // 
    // > You must specify both the **SearchItem** and **SearchInfo** parameters before you can query the asset fingerprints based on the specified name or type.
    std::shared_ptr<string> searchInfo_ = nullptr;
    // The type of the search condition. Valid values:
    // 
    // *   **name**: the name of a database, middleware, or web service
    // *   **type**: the type of a database, middleware, or web service
    // 
    // > You must specify both the **SearchItem** and **SearchInfo** parameters before you can query the asset fingerprints based on the specified name or type.
    std::shared_ptr<string> searchItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
