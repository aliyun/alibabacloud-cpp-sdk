// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPMEMBERSRESPONSEBODY_HPP_
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
  class ListGroupMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupMembers, groupMembers_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupMembers, groupMembers_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListGroupMembersResponseBody() = default ;
    ListGroupMembersResponseBody(const ListGroupMembersResponseBody &) = default ;
    ListGroupMembersResponseBody(ListGroupMembersResponseBody &&) = default ;
    ListGroupMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupMembersResponseBody() = default ;
    ListGroupMembersResponseBody& operator=(const ListGroupMembersResponseBody &) = default ;
    ListGroupMembersResponseBody& operator=(ListGroupMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupMembers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupMembers& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_TO_JSON(ProvisionType, provisionType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, GroupMembers& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_FROM_JSON(ProvisionType, provisionType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      GroupMembers() = default ;
      GroupMembers(const GroupMembers &) = default ;
      GroupMembers(GroupMembers &&) = default ;
      GroupMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupMembers() = default ;
      GroupMembers& operator=(const GroupMembers &) = default ;
      GroupMembers& operator=(GroupMembers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->email_ == nullptr && this->groupId_ == nullptr && this->joinTime_ == nullptr && this->provisionType_ == nullptr
        && this->status_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GroupMembers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline GroupMembers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline GroupMembers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline GroupMembers& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // joinTime Field Functions 
      bool hasJoinTime() const { return this->joinTime_ != nullptr;};
      void deleteJoinTime() { this->joinTime_ = nullptr;};
      inline string getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, "") };
      inline GroupMembers& setJoinTime(string joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


      // provisionType Field Functions 
      bool hasProvisionType() const { return this->provisionType_ != nullptr;};
      void deleteProvisionType() { this->provisionType_ = nullptr;};
      inline string getProvisionType() const { DARABONBA_PTR_GET_DEFAULT(provisionType_, "") };
      inline GroupMembers& setProvisionType(string provisionType) { DARABONBA_PTR_SET_VALUE(provisionType_, provisionType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GroupMembers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline GroupMembers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline GroupMembers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The description of the user.
      shared_ptr<string> description_ {};
      // The display name of the user.
      shared_ptr<string> displayName_ {};
      // The email address of the user.
      shared_ptr<string> email_ {};
      // The ID of the group.
      shared_ptr<string> groupId_ {};
      // The time when the user was added to the group.
      shared_ptr<string> joinTime_ {};
      // The type of the user. Valid values:
      // 
      // *   Manual: The user is manually created.
      // *   Synchronized: The user is synchronized from an external identity provider (IdP).
      shared_ptr<string> provisionType_ {};
      // The status of the user. Valid values:
      // 
      // *   Enabled: The logon of the user is enabled.
      // *   Disabled: The logon of the user is disabled.
      shared_ptr<string> status_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
      // The name of the user.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->groupMembers_ == nullptr
        && this->isTruncated_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // groupMembers Field Functions 
    bool hasGroupMembers() const { return this->groupMembers_ != nullptr;};
    void deleteGroupMembers() { this->groupMembers_ = nullptr;};
    inline const vector<ListGroupMembersResponseBody::GroupMembers> & getGroupMembers() const { DARABONBA_PTR_GET_CONST(groupMembers_, vector<ListGroupMembersResponseBody::GroupMembers>) };
    inline vector<ListGroupMembersResponseBody::GroupMembers> getGroupMembers() { DARABONBA_PTR_GET(groupMembers_, vector<ListGroupMembersResponseBody::GroupMembers>) };
    inline ListGroupMembersResponseBody& setGroupMembers(const vector<ListGroupMembersResponseBody::GroupMembers> & groupMembers) { DARABONBA_PTR_SET_VALUE(groupMembers_, groupMembers) };
    inline ListGroupMembersResponseBody& setGroupMembers(vector<ListGroupMembersResponseBody::GroupMembers> && groupMembers) { DARABONBA_PTR_SET_RVALUE(groupMembers_, groupMembers) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListGroupMembersResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGroupMembersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGroupMembersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListGroupMembersResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The users in the group.
    shared_ptr<vector<ListGroupMembersResponseBody::GroupMembers>> groupMembers_ {};
    // Indicates whether the queried entries are truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // >  This parameter is returned only when the value of the `IsTruncated` parameter is `true`.
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
