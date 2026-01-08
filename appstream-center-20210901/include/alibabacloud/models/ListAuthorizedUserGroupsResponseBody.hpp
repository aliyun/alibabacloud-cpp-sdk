// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAuthorizedUserGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUserGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    ListAuthorizedUserGroupsResponseBody() = default ;
    ListAuthorizedUserGroupsResponseBody(const ListAuthorizedUserGroupsResponseBody &) = default ;
    ListAuthorizedUserGroupsResponseBody(ListAuthorizedUserGroupsResponseBody &&) = default ;
    ListAuthorizedUserGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUserGroupsResponseBody() = default ;
    ListAuthorizedUserGroupsResponseBody& operator=(const ListAuthorizedUserGroupsResponseBody &) = default ;
    ListAuthorizedUserGroupsResponseBody& operator=(ListAuthorizedUserGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      };
      UserGroups() = default ;
      UserGroups(const UserGroups &) = default ;
      UserGroups(UserGroups &&) = default ;
      UserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroups() = default ;
      UserGroups& operator=(const UserGroups &) = default ;
      UserGroups& operator=(UserGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->authMode_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline UserGroups& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // authMode Field Functions 
      bool hasAuthMode() const { return this->authMode_ != nullptr;};
      void deleteAuthMode() { this->authMode_ = nullptr;};
      inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
      inline UserGroups& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline UserGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline UserGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    protected:
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The authorization mode.
      // 
      // Valid values:
      // 
      // *   App: authorizes access to apps.
      // *   AppInstanceGroup: authorizes access to delivery groups.
      // *   Session: authorizes access to sessions.
      shared_ptr<string> authMode_ {};
      // The ID of the user group.
      shared_ptr<string> groupId_ {};
      // The name of the user group.
      shared_ptr<string> groupName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->userGroups_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAuthorizedUserGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedUserGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedUserGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAuthorizedUserGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<ListAuthorizedUserGroupsResponseBody::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<ListAuthorizedUserGroupsResponseBody::UserGroups>) };
    inline vector<ListAuthorizedUserGroupsResponseBody::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<ListAuthorizedUserGroupsResponseBody::UserGroups>) };
    inline ListAuthorizedUserGroupsResponseBody& setUserGroups(const vector<ListAuthorizedUserGroupsResponseBody::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListAuthorizedUserGroupsResponseBody& setUserGroups(vector<ListAuthorizedUserGroupsResponseBody::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the user groups.
    shared_ptr<vector<ListAuthorizedUserGroupsResponseBody::UserGroups>> userGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
