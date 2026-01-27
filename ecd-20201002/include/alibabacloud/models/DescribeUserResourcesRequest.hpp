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
        && this->autoRefresh_ == nullptr && this->categoryId_ == nullptr && this->categoryType_ == nullptr && this->clientId_ == nullptr && this->clientType_ == nullptr
        && this->clientVersion_ == nullptr && this->dualCenterForward_ == nullptr && this->language_ == nullptr && this->loginRegionId_ == nullptr && this->loginToken_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteIds_ == nullptr && this->orderBy_ == nullptr && this->productTypes_ == nullptr
        && this->protocolType_ == nullptr && this->queryDesktopDurationList_ == nullptr && this->queryDesktopTimers_ == nullptr && this->queryFotaUpdate_ == nullptr && this->refreshFotaUpdate_ == nullptr
        && this->resourceIds_ == nullptr && this->resourceName_ == nullptr && this->resourceTypes_ == nullptr && this->scene_ == nullptr && this->searchRegionId_ == nullptr
        && this->sessionId_ == nullptr && this->sortType_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DescribeUserResourcesRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // autoRefresh Field Functions 
    bool hasAutoRefresh() const { return this->autoRefresh_ != nullptr;};
    void deleteAutoRefresh() { this->autoRefresh_ = nullptr;};
    inline bool getAutoRefresh() const { DARABONBA_PTR_GET_DEFAULT(autoRefresh_, false) };
    inline DescribeUserResourcesRequest& setAutoRefresh(bool autoRefresh) { DARABONBA_PTR_SET_VALUE(autoRefresh_, autoRefresh) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline DescribeUserResourcesRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline DescribeUserResourcesRequest& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeUserResourcesRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribeUserResourcesRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeUserResourcesRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // dualCenterForward Field Functions 
    bool hasDualCenterForward() const { return this->dualCenterForward_ != nullptr;};
    void deleteDualCenterForward() { this->dualCenterForward_ = nullptr;};
    inline bool getDualCenterForward() const { DARABONBA_PTR_GET_DEFAULT(dualCenterForward_, false) };
    inline DescribeUserResourcesRequest& setDualCenterForward(bool dualCenterForward) { DARABONBA_PTR_SET_VALUE(dualCenterForward_, dualCenterForward) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeUserResourcesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // loginRegionId Field Functions 
    bool hasLoginRegionId() const { return this->loginRegionId_ != nullptr;};
    void deleteLoginRegionId() { this->loginRegionId_ = nullptr;};
    inline string getLoginRegionId() const { DARABONBA_PTR_GET_DEFAULT(loginRegionId_, "") };
    inline DescribeUserResourcesRequest& setLoginRegionId(string loginRegionId) { DARABONBA_PTR_SET_VALUE(loginRegionId_, loginRegionId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline DescribeUserResourcesRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUserResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteIds Field Functions 
    bool hasOfficeSiteIds() const { return this->officeSiteIds_ != nullptr;};
    void deleteOfficeSiteIds() { this->officeSiteIds_ = nullptr;};
    inline const vector<string> & getOfficeSiteIds() const { DARABONBA_PTR_GET_CONST(officeSiteIds_, vector<string>) };
    inline vector<string> getOfficeSiteIds() { DARABONBA_PTR_GET(officeSiteIds_, vector<string>) };
    inline DescribeUserResourcesRequest& setOfficeSiteIds(const vector<string> & officeSiteIds) { DARABONBA_PTR_SET_VALUE(officeSiteIds_, officeSiteIds) };
    inline DescribeUserResourcesRequest& setOfficeSiteIds(vector<string> && officeSiteIds) { DARABONBA_PTR_SET_RVALUE(officeSiteIds_, officeSiteIds) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeUserResourcesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // productTypes Field Functions 
    bool hasProductTypes() const { return this->productTypes_ != nullptr;};
    void deleteProductTypes() { this->productTypes_ = nullptr;};
    inline const vector<string> & getProductTypes() const { DARABONBA_PTR_GET_CONST(productTypes_, vector<string>) };
    inline vector<string> getProductTypes() { DARABONBA_PTR_GET(productTypes_, vector<string>) };
    inline DescribeUserResourcesRequest& setProductTypes(const vector<string> & productTypes) { DARABONBA_PTR_SET_VALUE(productTypes_, productTypes) };
    inline DescribeUserResourcesRequest& setProductTypes(vector<string> && productTypes) { DARABONBA_PTR_SET_RVALUE(productTypes_, productTypes) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeUserResourcesRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // queryDesktopDurationList Field Functions 
    bool hasQueryDesktopDurationList() const { return this->queryDesktopDurationList_ != nullptr;};
    void deleteQueryDesktopDurationList() { this->queryDesktopDurationList_ = nullptr;};
    inline bool getQueryDesktopDurationList() const { DARABONBA_PTR_GET_DEFAULT(queryDesktopDurationList_, false) };
    inline DescribeUserResourcesRequest& setQueryDesktopDurationList(bool queryDesktopDurationList) { DARABONBA_PTR_SET_VALUE(queryDesktopDurationList_, queryDesktopDurationList) };


    // queryDesktopTimers Field Functions 
    bool hasQueryDesktopTimers() const { return this->queryDesktopTimers_ != nullptr;};
    void deleteQueryDesktopTimers() { this->queryDesktopTimers_ = nullptr;};
    inline bool getQueryDesktopTimers() const { DARABONBA_PTR_GET_DEFAULT(queryDesktopTimers_, false) };
    inline DescribeUserResourcesRequest& setQueryDesktopTimers(bool queryDesktopTimers) { DARABONBA_PTR_SET_VALUE(queryDesktopTimers_, queryDesktopTimers) };


    // queryFotaUpdate Field Functions 
    bool hasQueryFotaUpdate() const { return this->queryFotaUpdate_ != nullptr;};
    void deleteQueryFotaUpdate() { this->queryFotaUpdate_ = nullptr;};
    inline bool getQueryFotaUpdate() const { DARABONBA_PTR_GET_DEFAULT(queryFotaUpdate_, false) };
    inline DescribeUserResourcesRequest& setQueryFotaUpdate(bool queryFotaUpdate) { DARABONBA_PTR_SET_VALUE(queryFotaUpdate_, queryFotaUpdate) };


    // refreshFotaUpdate Field Functions 
    bool hasRefreshFotaUpdate() const { return this->refreshFotaUpdate_ != nullptr;};
    void deleteRefreshFotaUpdate() { this->refreshFotaUpdate_ = nullptr;};
    inline bool getRefreshFotaUpdate() const { DARABONBA_PTR_GET_DEFAULT(refreshFotaUpdate_, false) };
    inline DescribeUserResourcesRequest& setRefreshFotaUpdate(bool refreshFotaUpdate) { DARABONBA_PTR_SET_VALUE(refreshFotaUpdate_, refreshFotaUpdate) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeUserResourcesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeUserResourcesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeUserResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline DescribeUserResourcesRequest& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline DescribeUserResourcesRequest& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeUserResourcesRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string getSearchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeUserResourcesRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeUserResourcesRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeUserResourcesRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The access type. If you leave this parameter empty, both types will be displayed.
    // 
    // Valid values:
    // 
    // *   INTERNET: access over the Internet.
    // *   VPC: access over an enterprise virtual private cloud (VPC).
    shared_ptr<string> accessType_ {};
    // Specifies whether to enable the immediate refresh feature.
    // 
    // >  To ensure the operation response speed, we recommend that you set the value to `false`.
    // 
    // Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<bool> autoRefresh_ {};
    // The level-2 resource category.
    shared_ptr<int32_t> categoryId_ {};
    // The level-1 resource category.
    shared_ptr<int32_t> categoryType_ {};
    // The client ID. The system generates a unique ID for each client. This parameter is non-sensitive and does not need encryption.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The client type.
    // 
    // Valid values:
    // 
    // *   html5: the web client.
    // *   android: the Android client.
    // *   windows: the Windows client.
    // *   ios: the iOS client.
    // *   macos: the macOS client.
    shared_ptr<string> clientType_ {};
    // The client version.
    shared_ptr<string> clientVersion_ {};
    // Specifies whether to enable geo-redundant forwarding. Set the value to `false`.
    // 
    // Valid value:
    // 
    // *   false: disables geo-redundant forwarding.
    shared_ptr<bool> dualCenterForward_ {};
    // The client language.
    // 
    // Valid values:
    // 
    // *   en_US: English.
    // *   zh_CN: Simplified Chinese.
    // *   ja_JP: Japanese.
    shared_ptr<string> language_ {};
    // The ID of the region where end users log on to clients. This parameter applies to office network ID-based logons. For organization ID-based logons, you can leave this parameter empty.
    shared_ptr<string> loginRegionId_ {};
    // The logon token. You can call the `GetLoginToken` or `RefreshLoginToken` operation to retrieve the logon token.
    // 
    // This parameter is required.
    shared_ptr<string> loginToken_ {};
    // The number of entries per page. Default value: 500.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The office network IDs. This parameter is required for logons by using enterprise Active Directory (AD) accounts.
    shared_ptr<vector<string>> officeSiteIds_ {};
    // The sorting field. If you do not specify this parameter, resources are sorted by creation time by default.
    // 
    // Valid values:
    // 
    // *   CreateTime: the time when resources are created.
    // *   AssignTime: the time when resources are assigned.
    shared_ptr<string> orderBy_ {};
    // The service types. If you leave this parameter empty, services of all supported types will be queried.
    shared_ptr<vector<string>> productTypes_ {};
    // The protocol type. You can specify this parameter to filter cloud computers.
    // 
    // Valid values:
    // 
    // *   HDX: High-definition Experience (HDX).
    // *   ASP: Adaptive Streaming Protocol (ASP).
    shared_ptr<string> protocolType_ {};
    // 是否查询云桌面套餐包信息，默认为true。
    shared_ptr<bool> queryDesktopDurationList_ {};
    // 是否查询云电脑定时任务信息，默认为true。
    shared_ptr<bool> queryDesktopTimers_ {};
    // Specifies whether to return the image version information of cloud computers.
    shared_ptr<bool> queryFotaUpdate_ {};
    // Specifies whether to refresh over-the-air (OTA) information in real time.
    shared_ptr<bool> refreshFotaUpdate_ {};
    // The resource IDs. You can specify up to 100 resource IDs.
    shared_ptr<vector<string>> resourceIds_ {};
    // The resource name. Fuzzy search is supported.
    shared_ptr<string> resourceName_ {};
    // The resource types. If you leave this parameter empty, resources of all supported types will be queried.
    shared_ptr<vector<string>> resourceTypes_ {};
    // The client usage scenario. Set the value to `desktop`.
    // 
    // Valid value:
    // 
    // *   desktop: cloud computers.
    shared_ptr<string> scene_ {};
    // The ID of the searched region. You can specify this parameter to filter cloud resources in specific regions.
    shared_ptr<string> searchRegionId_ {};
    // The session ID. You can call the `GetLoginToken` operation to retrieve the session ID.
    shared_ptr<string> sessionId_ {};
    // The sorting method.
    // 
    // Valid values:
    // 
    // *   ASC (default): the ascending order.
    // *   DESC: the descending order.
    shared_ptr<string> sortType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
