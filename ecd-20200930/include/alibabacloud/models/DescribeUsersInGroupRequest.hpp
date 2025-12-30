// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUsersInGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersInGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectState, connectState_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(QueryUserDetail, queryUserDetail_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersInGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectState, connectState_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(QueryUserDetail, queryUserDetail_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeUsersInGroupRequest() = default ;
    DescribeUsersInGroupRequest(const DescribeUsersInGroupRequest &) = default ;
    DescribeUsersInGroupRequest(DescribeUsersInGroupRequest &&) = default ;
    DescribeUsersInGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersInGroupRequest() = default ;
    DescribeUsersInGroupRequest& operator=(const DescribeUsersInGroupRequest &) = default ;
    DescribeUsersInGroupRequest& operator=(DescribeUsersInGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectState_ == nullptr
        && this->desktopGroupId_ == nullptr && this->endUserId_ == nullptr && this->endUserIds_ == nullptr && this->filter_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->orgId_ == nullptr && this->queryUserDetail_ == nullptr && this->regionId_ == nullptr; };
    // connectState Field Functions 
    bool hasConnectState() const { return this->connectState_ != nullptr;};
    void deleteConnectState() { this->connectState_ = nullptr;};
    inline int32_t getConnectState() const { DARABONBA_PTR_GET_DEFAULT(connectState_, 0) };
    inline DescribeUsersInGroupRequest& setConnectState(int32_t connectState) { DARABONBA_PTR_SET_VALUE(connectState_, connectState) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeUsersInGroupRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeUsersInGroupRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeUsersInGroupRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeUsersInGroupRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeUsersInGroupRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUsersInGroupRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUsersInGroupRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DescribeUsersInGroupRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // queryUserDetail Field Functions 
    bool hasQueryUserDetail() const { return this->queryUserDetail_ != nullptr;};
    void deleteQueryUserDetail() { this->queryUserDetail_ = nullptr;};
    inline bool getQueryUserDetail() const { DARABONBA_PTR_GET_DEFAULT(queryUserDetail_, false) };
    inline DescribeUsersInGroupRequest& setQueryUserDetail(bool queryUserDetail) { DARABONBA_PTR_SET_VALUE(queryUserDetail_, queryUserDetail) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUsersInGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The status of the desktop connection for the end user.
    // 
    // Valid values:
    // 
    // - 0: Disconnected.
    // - 1: Connected.
    shared_ptr<int32_t> connectState_ {};
    // The ID of the cloud computer share.
    // 
    // This parameter is required.
    shared_ptr<string> desktopGroupId_ {};
    // The ID of the authorized user.
    shared_ptr<string> endUserId_ {};
    // The IDs of the authorized users.
    shared_ptr<vector<string>> endUserIds_ {};
    // The query string for fuzzy match. If you specify this parameter, the system returns all results that contain the string.
    shared_ptr<string> filter_ {};
    // The number of entries to return on each page.
    // 
    // *   Maximum value: 100.
    // *   Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query. If this parameter is left empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the organization to which the end user belongs.
    shared_ptr<string> orgId_ {};
    // Specifies whether to query user details.
    // 
    // Valid values:
    // 
    // *   true (default)
    // *   false
    shared_ptr<bool> queryUserDetail_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
