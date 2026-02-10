// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SearchCriteriaList, searchCriteriaList_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SearchCriteriaList, searchCriteriaList_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetAssetsPropertyDetailRequest() = default ;
    GetAssetsPropertyDetailRequest(const GetAssetsPropertyDetailRequest &) = default ;
    GetAssetsPropertyDetailRequest(GetAssetsPropertyDetailRequest &&) = default ;
    GetAssetsPropertyDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyDetailRequest() = default ;
    GetAssetsPropertyDetailRequest& operator=(const GetAssetsPropertyDetailRequest &) = default ;
    GetAssetsPropertyDetailRequest& operator=(GetAssetsPropertyDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchCriteriaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchCriteriaList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SearchCriteriaList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SearchCriteriaList() = default ;
      SearchCriteriaList(const SearchCriteriaList &) = default ;
      SearchCriteriaList(SearchCriteriaList &&) = default ;
      SearchCriteriaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchCriteriaList() = default ;
      SearchCriteriaList& operator=(const SearchCriteriaList &) = default ;
      SearchCriteriaList& operator=(SearchCriteriaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SearchCriteriaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SearchCriteriaList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the condition to be queried. Values are as follows:
      // - **remarkItemName**: The aggregated item name of the asset fingerprint, supporting fuzzy matching
      // 
      // 
      // >-   - When **Biz** is **web_server**, **remarkItemName** represents the domain name as the search condition.
      // >-   - When **Biz** is **lkm**, **remarkItemName** represents the module name as the search condition.
      // >-   - When **Biz** is **autorun**, **remarkItemName** represents the startup item path as the search condition.
      shared_ptr<string> name_ {};
      // The value of the condition to be queried.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->biz_ == nullptr
        && this->currentPage_ == nullptr && this->itemName_ == nullptr && this->lang_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr
        && this->remark_ == nullptr && this->searchCriteriaList_ == nullptr && this->useNextToken_ == nullptr && this->uuid_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline GetAssetsPropertyDetailRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAssetsPropertyDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline GetAssetsPropertyDetailRequest& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAssetsPropertyDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAssetsPropertyDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAssetsPropertyDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetAssetsPropertyDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // searchCriteriaList Field Functions 
    bool hasSearchCriteriaList() const { return this->searchCriteriaList_ != nullptr;};
    void deleteSearchCriteriaList() { this->searchCriteriaList_ = nullptr;};
    inline const vector<GetAssetsPropertyDetailRequest::SearchCriteriaList> & getSearchCriteriaList() const { DARABONBA_PTR_GET_CONST(searchCriteriaList_, vector<GetAssetsPropertyDetailRequest::SearchCriteriaList>) };
    inline vector<GetAssetsPropertyDetailRequest::SearchCriteriaList> getSearchCriteriaList() { DARABONBA_PTR_GET(searchCriteriaList_, vector<GetAssetsPropertyDetailRequest::SearchCriteriaList>) };
    inline GetAssetsPropertyDetailRequest& setSearchCriteriaList(const vector<GetAssetsPropertyDetailRequest::SearchCriteriaList> & searchCriteriaList) { DARABONBA_PTR_SET_VALUE(searchCriteriaList_, searchCriteriaList) };
    inline GetAssetsPropertyDetailRequest& setSearchCriteriaList(vector<GetAssetsPropertyDetailRequest::SearchCriteriaList> && searchCriteriaList) { DARABONBA_PTR_SET_RVALUE(searchCriteriaList_, searchCriteriaList) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool getUseNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline GetAssetsPropertyDetailRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetAssetsPropertyDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The type of asset fingerprint to be queried, with a default value of **sca**. Values:
    // 
    // - **lkm**: Kernel module
    // - **autorun**: Startup item
    // - **web_server**: Web site
    // 
    // This parameter is required.
    shared_ptr<string> biz_ {};
    // Set the page number from which to start displaying the query results. The default value is **1**, indicating that the display starts from the first page.
    shared_ptr<int32_t> currentPage_ {};
    // The aggregated item name of the asset fingerprint to be queried.
    // > Call the [GetAssetsPropertyItem](~~GetAssetsPropertyItem~~) API to obtain this parameter.
    shared_ptr<string> itemName_ {};
    // The language type for the request and response. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Used to mark the current read position. Leave it empty to start from the beginning.
    // > Do not fill in for the first call; the response will include the NextToken for the second call. Each subsequent call\\"s response will contain the NextToken for the next call.
    shared_ptr<string> nextToken_ {};
    // Specify the maximum number of data entries per page in a paginated query. The default number of data entries per page is 20. If the PageSize parameter is empty, 20 data entries will be returned by default.
    // > It is recommended that the PageSize value is not empty.
    shared_ptr<int32_t> pageSize_ {};
    // Server name or IP.
    shared_ptr<string> remark_ {};
    // A set of conditions for querying asset fingerprint details.
    shared_ptr<vector<GetAssetsPropertyDetailRequest::SearchCriteriaList>> searchCriteriaList_ {};
    // Whether to use the NextToken method to fetch the list of vulnerabilities. If this parameter is used, TotalCount will not be returned. Values:
    // 
    // - **true**: Use the NextToken method.
    // - **false**: Do not use the NextToken method.
    shared_ptr<bool> useNextToken_ {};
    // The UUID of the asset to be queried.
    // > Call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) API to obtain this parameter.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
