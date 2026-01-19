// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORRESOURCESERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORRESOURCESERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUsersForResourceServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForResourceServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForResourceServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersForResourceServerResponseBody() = default ;
    ListUsersForResourceServerResponseBody(const ListUsersForResourceServerResponseBody &) = default ;
    ListUsersForResourceServerResponseBody(ListUsersForResourceServerResponseBody &&) = default ;
    ListUsersForResourceServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForResourceServerResponseBody() = default ;
    ListUsersForResourceServerResponseBody& operator=(const ListUsersForResourceServerResponseBody &) = default ;
    ListUsersForResourceServerResponseBody& operator=(ListUsersForResourceServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopes, resourceServerScopes_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopes, resourceServerScopes_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceServerScopes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceServerScopes& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceServerScopeId, resourceServerScopeId_);
          DARABONBA_PTR_TO_JSON(ResourceServerScopeName, resourceServerScopeName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceServerScopes& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceServerScopeId, resourceServerScopeId_);
          DARABONBA_PTR_FROM_JSON(ResourceServerScopeName, resourceServerScopeName_);
        };
        ResourceServerScopes() = default ;
        ResourceServerScopes(const ResourceServerScopes &) = default ;
        ResourceServerScopes(ResourceServerScopes &&) = default ;
        ResourceServerScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceServerScopes() = default ;
        ResourceServerScopes& operator=(const ResourceServerScopes &) = default ;
        ResourceServerScopes& operator=(ResourceServerScopes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceServerScopeId_ == nullptr
        && this->resourceServerScopeName_ == nullptr; };
        // resourceServerScopeId Field Functions 
        bool hasResourceServerScopeId() const { return this->resourceServerScopeId_ != nullptr;};
        void deleteResourceServerScopeId() { this->resourceServerScopeId_ = nullptr;};
        inline string getResourceServerScopeId() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeId_, "") };
        inline ResourceServerScopes& setResourceServerScopeId(string resourceServerScopeId) { DARABONBA_PTR_SET_VALUE(resourceServerScopeId_, resourceServerScopeId) };


        // resourceServerScopeName Field Functions 
        bool hasResourceServerScopeName() const { return this->resourceServerScopeName_ != nullptr;};
        void deleteResourceServerScopeName() { this->resourceServerScopeName_ = nullptr;};
        inline string getResourceServerScopeName() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeName_, "") };
        inline ResourceServerScopes& setResourceServerScopeName(string resourceServerScopeName) { DARABONBA_PTR_SET_VALUE(resourceServerScopeName_, resourceServerScopeName) };


      protected:
        // ResourceServerScope唯一标识
        shared_ptr<string> resourceServerScopeId_ {};
        // ResourceServerScope名称
        shared_ptr<string> resourceServerScopeName_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->resourceServerScopes_ == nullptr && this->userId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Users& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceServerScopes Field Functions 
      bool hasResourceServerScopes() const { return this->resourceServerScopes_ != nullptr;};
      void deleteResourceServerScopes() { this->resourceServerScopes_ = nullptr;};
      inline const vector<Users::ResourceServerScopes> & getResourceServerScopes() const { DARABONBA_PTR_GET_CONST(resourceServerScopes_, vector<Users::ResourceServerScopes>) };
      inline vector<Users::ResourceServerScopes> getResourceServerScopes() { DARABONBA_PTR_GET(resourceServerScopes_, vector<Users::ResourceServerScopes>) };
      inline Users& setResourceServerScopes(const vector<Users::ResourceServerScopes> & resourceServerScopes) { DARABONBA_PTR_SET_VALUE(resourceServerScopes_, resourceServerScopes) };
      inline Users& setResourceServerScopes(vector<Users::ResourceServerScopes> && resourceServerScopes) { DARABONBA_PTR_SET_RVALUE(resourceServerScopes_, resourceServerScopes) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // 实例唯一标识
      shared_ptr<string> instanceId_ {};
      // 资源服务Scope权限集合
      shared_ptr<vector<Users::ResourceServerScopes>> resourceServerScopes_ {};
      // 用户的唯一标识
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUsersForResourceServerResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUsersForResourceServerResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersForResourceServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersForResourceServerResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersForResourceServerResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersForResourceServerResponseBody::Users>) };
    inline vector<ListUsersForResourceServerResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListUsersForResourceServerResponseBody::Users>) };
    inline ListUsersForResourceServerResponseBody& setUsers(const vector<ListUsersForResourceServerResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersForResourceServerResponseBody& setUsers(vector<ListUsersForResourceServerResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<vector<ListUsersForResourceServerResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
