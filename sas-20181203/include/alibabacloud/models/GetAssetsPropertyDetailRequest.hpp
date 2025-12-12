// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAssetsPropertyDetailRequestSearchCriteriaList.hpp>
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
    virtual bool empty() const override { return this->biz_ == nullptr
        && return this->currentPage_ == nullptr && return this->itemName_ == nullptr && return this->lang_ == nullptr && return this->nextToken_ == nullptr && return this->pageSize_ == nullptr
        && return this->remark_ == nullptr && return this->searchCriteriaList_ == nullptr && return this->useNextToken_ == nullptr && return this->uuid_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline GetAssetsPropertyDetailRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAssetsPropertyDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline GetAssetsPropertyDetailRequest& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAssetsPropertyDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAssetsPropertyDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAssetsPropertyDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetAssetsPropertyDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // searchCriteriaList Field Functions 
    bool hasSearchCriteriaList() const { return this->searchCriteriaList_ != nullptr;};
    void deleteSearchCriteriaList() { this->searchCriteriaList_ = nullptr;};
    inline const vector<GetAssetsPropertyDetailRequestSearchCriteriaList> & searchCriteriaList() const { DARABONBA_PTR_GET_CONST(searchCriteriaList_, vector<GetAssetsPropertyDetailRequestSearchCriteriaList>) };
    inline vector<GetAssetsPropertyDetailRequestSearchCriteriaList> searchCriteriaList() { DARABONBA_PTR_GET(searchCriteriaList_, vector<GetAssetsPropertyDetailRequestSearchCriteriaList>) };
    inline GetAssetsPropertyDetailRequest& setSearchCriteriaList(const vector<GetAssetsPropertyDetailRequestSearchCriteriaList> & searchCriteriaList) { DARABONBA_PTR_SET_VALUE(searchCriteriaList_, searchCriteriaList) };
    inline GetAssetsPropertyDetailRequest& setSearchCriteriaList(vector<GetAssetsPropertyDetailRequestSearchCriteriaList> && searchCriteriaList) { DARABONBA_PTR_SET_RVALUE(searchCriteriaList_, searchCriteriaList) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool useNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline GetAssetsPropertyDetailRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetAssetsPropertyDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


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
    // The name of the aggregation item for the asset fingerprint that you want to query.
    // 
    // > You can call the [GetAssetsPropertyItem](~~GetAssetsPropertyItem~~) operation to query the names of aggregation items.
    std::shared_ptr<string> itemName_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name or IP address of the server.
    std::shared_ptr<string> remark_ = nullptr;
    // The conditions that are used to query the details about the asset fingerprint.
    std::shared_ptr<vector<GetAssetsPropertyDetailRequestSearchCriteriaList>> searchCriteriaList_ = nullptr;
    std::shared_ptr<bool> useNextToken_ = nullptr;
    // The UUID of the server.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
