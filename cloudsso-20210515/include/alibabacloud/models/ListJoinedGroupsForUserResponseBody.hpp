// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOINEDGROUPSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOINEDGROUPSFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListJoinedGroupsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJoinedGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(JoinedGroups, joinedGroups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListJoinedGroupsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(JoinedGroups, joinedGroups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListJoinedGroupsForUserResponseBody() = default ;
    ListJoinedGroupsForUserResponseBody(const ListJoinedGroupsForUserResponseBody &) = default ;
    ListJoinedGroupsForUserResponseBody(ListJoinedGroupsForUserResponseBody &&) = default ;
    ListJoinedGroupsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJoinedGroupsForUserResponseBody() = default ;
    ListJoinedGroupsForUserResponseBody& operator=(const ListJoinedGroupsForUserResponseBody &) = default ;
    ListJoinedGroupsForUserResponseBody& operator=(ListJoinedGroupsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JoinedGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JoinedGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_TO_JSON(ProvisionType, provisionType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, JoinedGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_FROM_JSON(ProvisionType, provisionType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      JoinedGroups() = default ;
      JoinedGroups(const JoinedGroups &) = default ;
      JoinedGroups(JoinedGroups &&) = default ;
      JoinedGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JoinedGroups() = default ;
      JoinedGroups& operator=(const JoinedGroups &) = default ;
      JoinedGroups& operator=(JoinedGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->joinTime_ == nullptr && this->provisionType_ == nullptr && this->userId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline JoinedGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline JoinedGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline JoinedGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // joinTime Field Functions 
      bool hasJoinTime() const { return this->joinTime_ != nullptr;};
      void deleteJoinTime() { this->joinTime_ = nullptr;};
      inline string getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, "") };
      inline JoinedGroups& setJoinTime(string joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


      // provisionType Field Functions 
      bool hasProvisionType() const { return this->provisionType_ != nullptr;};
      void deleteProvisionType() { this->provisionType_ = nullptr;};
      inline string getProvisionType() const { DARABONBA_PTR_GET_DEFAULT(provisionType_, "") };
      inline JoinedGroups& setProvisionType(string provisionType) { DARABONBA_PTR_SET_VALUE(provisionType_, provisionType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline JoinedGroups& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The description of the group.
      shared_ptr<string> description_ {};
      // The ID of the group.
      shared_ptr<string> groupId_ {};
      // The name of the group.
      shared_ptr<string> groupName_ {};
      // The time when the user was added to the group.
      shared_ptr<string> joinTime_ {};
      // The type of the group. Valid values:
      // 
      // *   Manual: The group is manually created.
      // *   Synchronized: The group is synchronized from an external identity provider (IdP).
      shared_ptr<string> provisionType_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->joinedGroups_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListJoinedGroupsForUserResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // joinedGroups Field Functions 
    bool hasJoinedGroups() const { return this->joinedGroups_ != nullptr;};
    void deleteJoinedGroups() { this->joinedGroups_ = nullptr;};
    inline const vector<ListJoinedGroupsForUserResponseBody::JoinedGroups> & getJoinedGroups() const { DARABONBA_PTR_GET_CONST(joinedGroups_, vector<ListJoinedGroupsForUserResponseBody::JoinedGroups>) };
    inline vector<ListJoinedGroupsForUserResponseBody::JoinedGroups> getJoinedGroups() { DARABONBA_PTR_GET(joinedGroups_, vector<ListJoinedGroupsForUserResponseBody::JoinedGroups>) };
    inline ListJoinedGroupsForUserResponseBody& setJoinedGroups(const vector<ListJoinedGroupsForUserResponseBody::JoinedGroups> & joinedGroups) { DARABONBA_PTR_SET_VALUE(joinedGroups_, joinedGroups) };
    inline ListJoinedGroupsForUserResponseBody& setJoinedGroups(vector<ListJoinedGroupsForUserResponseBody::JoinedGroups> && joinedGroups) { DARABONBA_PTR_SET_RVALUE(joinedGroups_, joinedGroups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJoinedGroupsForUserResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJoinedGroupsForUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJoinedGroupsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListJoinedGroupsForUserResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // Indicates whether the queried entries are truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The groups to which the user is added.
    shared_ptr<vector<ListJoinedGroupsForUserResponseBody::JoinedGroups>> joinedGroups_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // >  This parameter is returned only when the `IsTruncated` parameter is `true`.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
