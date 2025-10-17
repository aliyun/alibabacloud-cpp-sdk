// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(AutoRefresh, autoRefresh_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(DualCenterForward, dualCenterForward_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteIds, officeSiteIds_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(ProductTypes, productTypes_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(QueryDesktopDurationList, queryDesktopDurationList_);
      DARABONBA_PTR_TO_JSON(QueryDesktopTimers, queryDesktopTimers_);
      DARABONBA_PTR_TO_JSON(QueryFotaUpdate, queryFotaUpdate_);
      DARABONBA_PTR_TO_JSON(RefreshFotaUpdate, refreshFotaUpdate_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(AutoRefresh, autoRefresh_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(DualCenterForward, dualCenterForward_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteIds, officeSiteIds_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(ProductTypes, productTypes_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(QueryDesktopDurationList, queryDesktopDurationList_);
      DARABONBA_PTR_FROM_JSON(QueryDesktopTimers, queryDesktopTimers_);
      DARABONBA_PTR_FROM_JSON(QueryFotaUpdate, queryFotaUpdate_);
      DARABONBA_PTR_FROM_JSON(RefreshFotaUpdate, refreshFotaUpdate_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    DescribeUserResourcesRequest() = default ;
    DescribeUserResourcesRequest(const DescribeUserResourcesRequest &) = default ;
    DescribeUserResourcesRequest(DescribeUserResourcesRequest &&) = default ;
    DescribeUserResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesRequest() = default ;
    DescribeUserResourcesRequest& operator=(const DescribeUserResourcesRequest &) = default ;
    DescribeUserResourcesRequest& operator=(DescribeUserResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->autoRefresh_ == nullptr && return this->categoryId_ == nullptr && return this->categoryType_ == nullptr && return this->clientId_ == nullptr && return this->clientType_ == nullptr
        && return this->clientVersion_ == nullptr && return this->dualCenterForward_ == nullptr && return this->language_ == nullptr && return this->loginRegionId_ == nullptr && return this->loginToken_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->officeSiteIds_ == nullptr && return this->orderBy_ == nullptr && return this->productTypes_ == nullptr
        && return this->protocolType_ == nullptr && return this->queryDesktopDurationList_ == nullptr && return this->queryDesktopTimers_ == nullptr && return this->queryFotaUpdate_ == nullptr && return this->refreshFotaUpdate_ == nullptr
        && return this->resourceIds_ == nullptr && return this->resourceName_ == nullptr && return this->resourceTypes_ == nullptr && return this->scene_ == nullptr && return this->searchRegionId_ == nullptr
        && return this->sessionId_ == nullptr && return this->sortType_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DescribeUserResourcesRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // autoRefresh Field Functions 
    bool hasAutoRefresh() const { return this->autoRefresh_ != nullptr;};
    void deleteAutoRefresh() { this->autoRefresh_ = nullptr;};
    inline bool autoRefresh() const { DARABONBA_PTR_GET_DEFAULT(autoRefresh_, false) };
    inline DescribeUserResourcesRequest& setAutoRefresh(bool autoRefresh) { DARABONBA_PTR_SET_VALUE(autoRefresh_, autoRefresh) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline DescribeUserResourcesRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline DescribeUserResourcesRequest& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeUserResourcesRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribeUserResourcesRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeUserResourcesRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // dualCenterForward Field Functions 
    bool hasDualCenterForward() const { return this->dualCenterForward_ != nullptr;};
    void deleteDualCenterForward() { this->dualCenterForward_ = nullptr;};
    inline bool dualCenterForward() const { DARABONBA_PTR_GET_DEFAULT(dualCenterForward_, false) };
    inline DescribeUserResourcesRequest& setDualCenterForward(bool dualCenterForward) { DARABONBA_PTR_SET_VALUE(dualCenterForward_, dualCenterForward) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeUserResourcesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // loginRegionId Field Functions 
    bool hasLoginRegionId() const { return this->loginRegionId_ != nullptr;};
    void deleteLoginRegionId() { this->loginRegionId_ = nullptr;};
    inline string loginRegionId() const { DARABONBA_PTR_GET_DEFAULT(loginRegionId_, "") };
    inline DescribeUserResourcesRequest& setLoginRegionId(string loginRegionId) { DARABONBA_PTR_SET_VALUE(loginRegionId_, loginRegionId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline DescribeUserResourcesRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUserResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteIds Field Functions 
    bool hasOfficeSiteIds() const { return this->officeSiteIds_ != nullptr;};
    void deleteOfficeSiteIds() { this->officeSiteIds_ = nullptr;};
    inline const vector<string> & officeSiteIds() const { DARABONBA_PTR_GET_CONST(officeSiteIds_, vector<string>) };
    inline vector<string> officeSiteIds() { DARABONBA_PTR_GET(officeSiteIds_, vector<string>) };
    inline DescribeUserResourcesRequest& setOfficeSiteIds(const vector<string> & officeSiteIds) { DARABONBA_PTR_SET_VALUE(officeSiteIds_, officeSiteIds) };
    inline DescribeUserResourcesRequest& setOfficeSiteIds(vector<string> && officeSiteIds) { DARABONBA_PTR_SET_RVALUE(officeSiteIds_, officeSiteIds) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeUserResourcesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // productTypes Field Functions 
    bool hasProductTypes() const { return this->productTypes_ != nullptr;};
    void deleteProductTypes() { this->productTypes_ = nullptr;};
    inline const vector<string> & productTypes() const { DARABONBA_PTR_GET_CONST(productTypes_, vector<string>) };
    inline vector<string> productTypes() { DARABONBA_PTR_GET(productTypes_, vector<string>) };
    inline DescribeUserResourcesRequest& setProductTypes(const vector<string> & productTypes) { DARABONBA_PTR_SET_VALUE(productTypes_, productTypes) };
    inline DescribeUserResourcesRequest& setProductTypes(vector<string> && productTypes) { DARABONBA_PTR_SET_RVALUE(productTypes_, productTypes) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeUserResourcesRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // queryDesktopDurationList Field Functions 
    bool hasQueryDesktopDurationList() const { return this->queryDesktopDurationList_ != nullptr;};
    void deleteQueryDesktopDurationList() { this->queryDesktopDurationList_ = nullptr;};
    inline bool queryDesktopDurationList() const { DARABONBA_PTR_GET_DEFAULT(queryDesktopDurationList_, false) };
    inline DescribeUserResourcesRequest& setQueryDesktopDurationList(bool queryDesktopDurationList) { DARABONBA_PTR_SET_VALUE(queryDesktopDurationList_, queryDesktopDurationList) };


    // queryDesktopTimers Field Functions 
    bool hasQueryDesktopTimers() const { return this->queryDesktopTimers_ != nullptr;};
    void deleteQueryDesktopTimers() { this->queryDesktopTimers_ = nullptr;};
    inline bool queryDesktopTimers() const { DARABONBA_PTR_GET_DEFAULT(queryDesktopTimers_, false) };
    inline DescribeUserResourcesRequest& setQueryDesktopTimers(bool queryDesktopTimers) { DARABONBA_PTR_SET_VALUE(queryDesktopTimers_, queryDesktopTimers) };


    // queryFotaUpdate Field Functions 
    bool hasQueryFotaUpdate() const { return this->queryFotaUpdate_ != nullptr;};
    void deleteQueryFotaUpdate() { this->queryFotaUpdate_ = nullptr;};
    inline bool queryFotaUpdate() const { DARABONBA_PTR_GET_DEFAULT(queryFotaUpdate_, false) };
    inline DescribeUserResourcesRequest& setQueryFotaUpdate(bool queryFotaUpdate) { DARABONBA_PTR_SET_VALUE(queryFotaUpdate_, queryFotaUpdate) };


    // refreshFotaUpdate Field Functions 
    bool hasRefreshFotaUpdate() const { return this->refreshFotaUpdate_ != nullptr;};
    void deleteRefreshFotaUpdate() { this->refreshFotaUpdate_ = nullptr;};
    inline bool refreshFotaUpdate() const { DARABONBA_PTR_GET_DEFAULT(refreshFotaUpdate_, false) };
    inline DescribeUserResourcesRequest& setRefreshFotaUpdate(bool refreshFotaUpdate) { DARABONBA_PTR_SET_VALUE(refreshFotaUpdate_, refreshFotaUpdate) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeUserResourcesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeUserResourcesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeUserResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline DescribeUserResourcesRequest& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline DescribeUserResourcesRequest& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeUserResourcesRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string searchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeUserResourcesRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeUserResourcesRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeUserResourcesRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<bool> autoRefresh_ = nullptr;
    std::shared_ptr<int32_t> categoryId_ = nullptr;
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientType_ = nullptr;
    std::shared_ptr<string> clientVersion_ = nullptr;
    std::shared_ptr<bool> dualCenterForward_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> loginRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> officeSiteIds_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<vector<string>> productTypes_ = nullptr;
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<bool> queryDesktopDurationList_ = nullptr;
    std::shared_ptr<bool> queryDesktopTimers_ = nullptr;
    std::shared_ptr<bool> queryFotaUpdate_ = nullptr;
    std::shared_ptr<bool> refreshFotaUpdate_ = nullptr;
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> searchRegionId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> sortType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
