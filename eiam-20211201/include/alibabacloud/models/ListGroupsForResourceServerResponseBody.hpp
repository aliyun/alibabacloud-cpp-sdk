// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORRESOURCESERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORRESOURCESERVERRESPONSEBODY_HPP_
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
  class ListGroupsForResourceServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForResourceServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForResourceServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGroupsForResourceServerResponseBody() = default ;
    ListGroupsForResourceServerResponseBody(const ListGroupsForResourceServerResponseBody &) = default ;
    ListGroupsForResourceServerResponseBody(ListGroupsForResourceServerResponseBody &&) = default ;
    ListGroupsForResourceServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForResourceServerResponseBody() = default ;
    ListGroupsForResourceServerResponseBody& operator=(const ListGroupsForResourceServerResponseBody &) = default ;
    ListGroupsForResourceServerResponseBody& operator=(ListGroupsForResourceServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopes, resourceServerScopes_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopes, resourceServerScopes_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
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

      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->resourceServerScopes_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Groups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceServerScopes Field Functions 
      bool hasResourceServerScopes() const { return this->resourceServerScopes_ != nullptr;};
      void deleteResourceServerScopes() { this->resourceServerScopes_ = nullptr;};
      inline const vector<Groups::ResourceServerScopes> & getResourceServerScopes() const { DARABONBA_PTR_GET_CONST(resourceServerScopes_, vector<Groups::ResourceServerScopes>) };
      inline vector<Groups::ResourceServerScopes> getResourceServerScopes() { DARABONBA_PTR_GET(resourceServerScopes_, vector<Groups::ResourceServerScopes>) };
      inline Groups& setResourceServerScopes(const vector<Groups::ResourceServerScopes> & resourceServerScopes) { DARABONBA_PTR_SET_VALUE(resourceServerScopes_, resourceServerScopes) };
      inline Groups& setResourceServerScopes(vector<Groups::ResourceServerScopes> && resourceServerScopes) { DARABONBA_PTR_SET_RVALUE(resourceServerScopes_, resourceServerScopes) };


    protected:
      // 用户组的唯一标识
      shared_ptr<string> groupId_ {};
      // 实例唯一标识
      shared_ptr<string> instanceId_ {};
      // 资源服务Scope权限集合
      shared_ptr<vector<Groups::ResourceServerScopes>> resourceServerScopes_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<ListGroupsForResourceServerResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<ListGroupsForResourceServerResponseBody::Groups>) };
    inline vector<ListGroupsForResourceServerResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<ListGroupsForResourceServerResponseBody::Groups>) };
    inline ListGroupsForResourceServerResponseBody& setGroups(const vector<ListGroupsForResourceServerResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsForResourceServerResponseBody& setGroups(vector<ListGroupsForResourceServerResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGroupsForResourceServerResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGroupsForResourceServerResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsForResourceServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupsForResourceServerResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListGroupsForResourceServerResponseBody::Groups>> groups_ {};
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
