// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSMAPPINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSMAPPINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListUserGroupsMappingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsMappingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroupsMappings, userGroupsMappings_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsMappingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroupsMappings, userGroupsMappings_);
    };
    ListUserGroupsMappingsResponseBody() = default ;
    ListUserGroupsMappingsResponseBody(const ListUserGroupsMappingsResponseBody &) = default ;
    ListUserGroupsMappingsResponseBody(ListUserGroupsMappingsResponseBody &&) = default ;
    ListUserGroupsMappingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsMappingsResponseBody() = default ;
    ListUserGroupsMappingsResponseBody& operator=(const ListUserGroupsMappingsResponseBody &) = default ;
    ListUserGroupsMappingsResponseBody& operator=(ListUserGroupsMappingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroupsMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroupsMappings& obj) { 
        DARABONBA_PTR_TO_JSON(GroupNames, groupNames_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroupsMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupNames, groupNames_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      UserGroupsMappings() = default ;
      UserGroupsMappings(const UserGroupsMappings &) = default ;
      UserGroupsMappings(UserGroupsMappings &&) = default ;
      UserGroupsMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroupsMappings() = default ;
      UserGroupsMappings& operator=(const UserGroupsMappings &) = default ;
      UserGroupsMappings& operator=(UserGroupsMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupNames_ == nullptr
        && this->userName_ == nullptr; };
      // groupNames Field Functions 
      bool hasGroupNames() const { return this->groupNames_ != nullptr;};
      void deleteGroupNames() { this->groupNames_ = nullptr;};
      inline const vector<string> & getGroupNames() const { DARABONBA_PTR_GET_CONST(groupNames_, vector<string>) };
      inline vector<string> getGroupNames() { DARABONBA_PTR_GET(groupNames_, vector<string>) };
      inline UserGroupsMappings& setGroupNames(const vector<string> & groupNames) { DARABONBA_PTR_SET_VALUE(groupNames_, groupNames) };
      inline UserGroupsMappings& setGroupNames(vector<string> && groupNames) { DARABONBA_PTR_SET_RVALUE(groupNames_, groupNames) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline UserGroupsMappings& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<vector<string>> groupNames_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->userGroupsMappings_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListUserGroupsMappingsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserGroupsMappingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsMappingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroupsMappings Field Functions 
    bool hasUserGroupsMappings() const { return this->userGroupsMappings_ != nullptr;};
    void deleteUserGroupsMappings() { this->userGroupsMappings_ = nullptr;};
    inline const vector<ListUserGroupsMappingsResponseBody::UserGroupsMappings> & getUserGroupsMappings() const { DARABONBA_PTR_GET_CONST(userGroupsMappings_, vector<ListUserGroupsMappingsResponseBody::UserGroupsMappings>) };
    inline vector<ListUserGroupsMappingsResponseBody::UserGroupsMappings> getUserGroupsMappings() { DARABONBA_PTR_GET(userGroupsMappings_, vector<ListUserGroupsMappingsResponseBody::UserGroupsMappings>) };
    inline ListUserGroupsMappingsResponseBody& setUserGroupsMappings(const vector<ListUserGroupsMappingsResponseBody::UserGroupsMappings> & userGroupsMappings) { DARABONBA_PTR_SET_VALUE(userGroupsMappings_, userGroupsMappings) };
    inline ListUserGroupsMappingsResponseBody& setUserGroupsMappings(vector<ListUserGroupsMappingsResponseBody::UserGroupsMappings> && userGroupsMappings) { DARABONBA_PTR_SET_RVALUE(userGroupsMappings_, userGroupsMappings) };


  protected:
    shared_ptr<bool> hasMore_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListUserGroupsMappingsResponseBody::UserGroupsMappings>> userGroupsMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
