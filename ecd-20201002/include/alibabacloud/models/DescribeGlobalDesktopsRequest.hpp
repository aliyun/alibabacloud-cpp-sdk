// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSREQUEST_HPP_
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
  class DescribeGlobalDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(QueryFotaUpdate, queryFotaUpdate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(WithoutLatency, withoutLatency_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(QueryFotaUpdate, queryFotaUpdate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(WithoutLatency, withoutLatency_);
    };
    DescribeGlobalDesktopsRequest() = default ;
    DescribeGlobalDesktopsRequest(const DescribeGlobalDesktopsRequest &) = default ;
    DescribeGlobalDesktopsRequest(DescribeGlobalDesktopsRequest &&) = default ;
    DescribeGlobalDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopsRequest() = default ;
    DescribeGlobalDesktopsRequest& operator=(const DescribeGlobalDesktopsRequest &) = default ;
    DescribeGlobalDesktopsRequest& operator=(DescribeGlobalDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->desktopAccessType_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr && this->directoryId_ == nullptr
        && this->keyword_ == nullptr && this->language_ == nullptr && this->loginRegionId_ == nullptr && this->loginToken_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->orderBy_ == nullptr && this->queryFotaUpdate_ == nullptr && this->regionId_ == nullptr
        && this->searchRegionId_ == nullptr && this->sessionId_ == nullptr && this->sortType_ == nullptr && this->withoutLatency_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeGlobalDesktopsRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline DescribeGlobalDesktopsRequest& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline DescribeGlobalDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline DescribeGlobalDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeGlobalDesktopsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeGlobalDesktopsRequest& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeGlobalDesktopsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeGlobalDesktopsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeGlobalDesktopsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // loginRegionId Field Functions 
    bool hasLoginRegionId() const { return this->loginRegionId_ != nullptr;};
    void deleteLoginRegionId() { this->loginRegionId_ = nullptr;};
    inline string getLoginRegionId() const { DARABONBA_PTR_GET_DEFAULT(loginRegionId_, "") };
    inline DescribeGlobalDesktopsRequest& setLoginRegionId(string loginRegionId) { DARABONBA_PTR_SET_VALUE(loginRegionId_, loginRegionId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline DescribeGlobalDesktopsRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeGlobalDesktopsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalDesktopsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeGlobalDesktopsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeGlobalDesktopsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // queryFotaUpdate Field Functions 
    bool hasQueryFotaUpdate() const { return this->queryFotaUpdate_ != nullptr;};
    void deleteQueryFotaUpdate() { this->queryFotaUpdate_ = nullptr;};
    inline bool getQueryFotaUpdate() const { DARABONBA_PTR_GET_DEFAULT(queryFotaUpdate_, false) };
    inline DescribeGlobalDesktopsRequest& setQueryFotaUpdate(bool queryFotaUpdate) { DARABONBA_PTR_SET_VALUE(queryFotaUpdate_, queryFotaUpdate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string getSearchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeGlobalDesktopsRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeGlobalDesktopsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeGlobalDesktopsRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // withoutLatency Field Functions 
    bool hasWithoutLatency() const { return this->withoutLatency_ != nullptr;};
    void deleteWithoutLatency() { this->withoutLatency_ = nullptr;};
    inline bool getWithoutLatency() const { DARABONBA_PTR_GET_DEFAULT(withoutLatency_, false) };
    inline DescribeGlobalDesktopsRequest& setWithoutLatency(bool withoutLatency) { DARABONBA_PTR_SET_VALUE(withoutLatency_, withoutLatency) };


  protected:
    // The unique ID generated by the client.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The method that is used to connect cloud computers that reside in the office network from WUYING clients.
    // 
    // >  The VPC connection method depends on Alibaba Cloud PrivateLink. You can use PrivateLink for free. If you set this parameter to VPC or Any, the system automatically enables PrivateLink.
    // 
    // Valid values:
    // 
    // *   INTERNET (default): End users connect to cloud computers from clients over the Internet.
    // *   VPC: End users connect to cloud computers from clients over a virtual private cloud (VPC).
    // *   Any: End users connect to cloud computers from clients over the Internet or a VPC.
    shared_ptr<string> desktopAccessType_ {};
    // The cloud computer ID. You can specify one or more cloud computer IDs. Valid values: 1 to 20.
    shared_ptr<vector<string>> desktopId_ {};
    // The cloud computer name.
    shared_ptr<string> desktopName_ {};
    // The cloud computer status.
    // 
    // Valid value:
    // 
    // *   Stopped
    // *   Starting.
    // *   Rebuilding
    // *   Running:.
    // *   Stopping:.
    // *   Expired
    // *   Deleted
    // *   Pending: The resource is still being prepared.
    shared_ptr<string> desktopStatus_ {};
    // The office network IDs.
    // 
    // >  This parameter is about to be disabled. Use `OfficeSiteId`.
    shared_ptr<string> directoryId_ {};
    // The keyword. Fuzzy search is supported for cloud computer IDs, cloud computer names, and end user custom cloud computer names.
    shared_ptr<string> keyword_ {};
    shared_ptr<string> language_ {};
    // The ID of the region where the office network resides. This parameter is left empty when you log on with an organization ID.
    // 
    // *   This parameter is required when you log on by using the office network ID.
    // *   If you log on by using an organization ID, this parameter can be left empty.
    shared_ptr<string> loginRegionId_ {};
    // The logon token. You can call the GetLoginToken operation to obtain the token. You can also call the UpdateToken operation to obtain the token RefreshLoginToken. Response parameter: LoginToken.
    // 
    // This parameter is required.
    shared_ptr<string> loginToken_ {};
    // The number of entries per page.
    // 
    // *   Maximum value: 500.
    // *   and the default value is 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to start the next query. If NextToken is empty, it indicates that there is no next query.
    shared_ptr<string> nextToken_ {};
    // The office network IDs.
    // 
    // >  `DirectoryId` the parameter is about to be retired, use this field.
    shared_ptr<string> officeSiteId_ {};
    // The field used for sorting. If you do not specify this option, the system is sorted in descending order of creation time.
    // 
    // Valid values:
    // 
    // *   AssignTime: sort by allocation time.
    shared_ptr<string> orderBy_ {};
    // Specifies whether to query information about the image update.
    shared_ptr<bool> queryFotaUpdate_ {};
    // The region ID.
    // 
    // Valid value:
    // 
    // *   cn-shanghai: China (Shanghai)
    shared_ptr<string> regionId_ {};
    // The ID of the searched region. You can specify this parameter to filter cloud computers in specific regions.
    shared_ptr<string> searchRegionId_ {};
    // The session ID. You can call the GetLoginToken operation to query the value of the SessionId parameter.
    shared_ptr<string> sessionId_ {};
    // The sorting method.
    // 
    // Valid values:
    // 
    // *   ASC (default): the ascending order.
    // *   DESC: the descending order.
    shared_ptr<string> sortType_ {};
    // Whether to query real-time cloud computer information. The cloud computer status information in the current interface has a delay of 1 to 3 seconds. If you need accurate information, set this value to `true`.
    shared_ptr<bool> withoutLatency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
