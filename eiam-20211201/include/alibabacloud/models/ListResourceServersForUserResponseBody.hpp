// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESERVERSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESERVERSFORUSERRESPONSEBODY_HPP_
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
  class ListResourceServersForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceServersForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceServers, resourceServers_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceServersForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceServers, resourceServers_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceServersForUserResponseBody() = default ;
    ListResourceServersForUserResponseBody(const ListResourceServersForUserResponseBody &) = default ;
    ListResourceServersForUserResponseBody(ListResourceServersForUserResponseBody &&) = default ;
    ListResourceServersForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceServersForUserResponseBody() = default ;
    ListResourceServersForUserResponseBody& operator=(const ListResourceServersForUserResponseBody &) = default ;
    ListResourceServersForUserResponseBody& operator=(ListResourceServersForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceServers& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopes, resourceServerScopes_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceServers& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerIdentifier, resourceServerIdentifier_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopes, resourceServerScopes_);
      };
      ResourceServers() = default ;
      ResourceServers(const ResourceServers &) = default ;
      ResourceServers(ResourceServers &&) = default ;
      ResourceServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceServers() = default ;
      ResourceServers& operator=(const ResourceServers &) = default ;
      ResourceServers& operator=(ResourceServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceServerScopes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceServerScopes& obj) { 
          DARABONBA_PTR_TO_JSON(HasDirectAuthorization, hasDirectAuthorization_);
          DARABONBA_PTR_TO_JSON(HasInheritAuthorization, hasInheritAuthorization_);
          DARABONBA_PTR_TO_JSON(ResourceServerScopeId, resourceServerScopeId_);
          DARABONBA_PTR_TO_JSON(ResourceServerScopeName, resourceServerScopeName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceServerScopes& obj) { 
          DARABONBA_PTR_FROM_JSON(HasDirectAuthorization, hasDirectAuthorization_);
          DARABONBA_PTR_FROM_JSON(HasInheritAuthorization, hasInheritAuthorization_);
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
        virtual bool empty() const override { return this->hasDirectAuthorization_ == nullptr
        && this->hasInheritAuthorization_ == nullptr && this->resourceServerScopeId_ == nullptr && this->resourceServerScopeName_ == nullptr; };
        // hasDirectAuthorization Field Functions 
        bool hasHasDirectAuthorization() const { return this->hasDirectAuthorization_ != nullptr;};
        void deleteHasDirectAuthorization() { this->hasDirectAuthorization_ = nullptr;};
        inline bool getHasDirectAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasDirectAuthorization_, false) };
        inline ResourceServerScopes& setHasDirectAuthorization(bool hasDirectAuthorization) { DARABONBA_PTR_SET_VALUE(hasDirectAuthorization_, hasDirectAuthorization) };


        // hasInheritAuthorization Field Functions 
        bool hasHasInheritAuthorization() const { return this->hasInheritAuthorization_ != nullptr;};
        void deleteHasInheritAuthorization() { this->hasInheritAuthorization_ = nullptr;};
        inline bool getHasInheritAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasInheritAuthorization_, false) };
        inline ResourceServerScopes& setHasInheritAuthorization(bool hasInheritAuthorization) { DARABONBA_PTR_SET_VALUE(hasInheritAuthorization_, hasInheritAuthorization) };


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
        // 直接分配给当前用户的权限，视为直接授权。
        shared_ptr<bool> hasDirectAuthorization_ {};
        // 通过用户隶属的组织、组获取的权限，视为继承权限。
        shared_ptr<bool> hasInheritAuthorization_ {};
        // ResourceServerScope唯一标识
        shared_ptr<string> resourceServerScopeId_ {};
        // ResourceServerScope名称
        shared_ptr<string> resourceServerScopeName_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->instanceId_ == nullptr && this->resourceServerIdentifier_ == nullptr && this->resourceServerScopes_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ResourceServers& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourceServers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceServerIdentifier Field Functions 
      bool hasResourceServerIdentifier() const { return this->resourceServerIdentifier_ != nullptr;};
      void deleteResourceServerIdentifier() { this->resourceServerIdentifier_ = nullptr;};
      inline string getResourceServerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceServerIdentifier_, "") };
      inline ResourceServers& setResourceServerIdentifier(string resourceServerIdentifier) { DARABONBA_PTR_SET_VALUE(resourceServerIdentifier_, resourceServerIdentifier) };


      // resourceServerScopes Field Functions 
      bool hasResourceServerScopes() const { return this->resourceServerScopes_ != nullptr;};
      void deleteResourceServerScopes() { this->resourceServerScopes_ = nullptr;};
      inline const vector<ResourceServers::ResourceServerScopes> & getResourceServerScopes() const { DARABONBA_PTR_GET_CONST(resourceServerScopes_, vector<ResourceServers::ResourceServerScopes>) };
      inline vector<ResourceServers::ResourceServerScopes> getResourceServerScopes() { DARABONBA_PTR_GET(resourceServerScopes_, vector<ResourceServers::ResourceServerScopes>) };
      inline ResourceServers& setResourceServerScopes(const vector<ResourceServers::ResourceServerScopes> & resourceServerScopes) { DARABONBA_PTR_SET_VALUE(resourceServerScopes_, resourceServerScopes) };
      inline ResourceServers& setResourceServerScopes(vector<ResourceServers::ResourceServerScopes> && resourceServerScopes) { DARABONBA_PTR_SET_RVALUE(resourceServerScopes_, resourceServerScopes) };


    protected:
      // 资源服务应用的唯一标识
      shared_ptr<string> applicationId_ {};
      // 实例唯一标识
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> resourceServerIdentifier_ {};
      // 资源服务Scope权限集合
      shared_ptr<vector<ResourceServers::ResourceServerScopes>> resourceServerScopes_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resourceServers_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceServersForUserResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceServersForUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceServersForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceServers Field Functions 
    bool hasResourceServers() const { return this->resourceServers_ != nullptr;};
    void deleteResourceServers() { this->resourceServers_ = nullptr;};
    inline const vector<ListResourceServersForUserResponseBody::ResourceServers> & getResourceServers() const { DARABONBA_PTR_GET_CONST(resourceServers_, vector<ListResourceServersForUserResponseBody::ResourceServers>) };
    inline vector<ListResourceServersForUserResponseBody::ResourceServers> getResourceServers() { DARABONBA_PTR_GET(resourceServers_, vector<ListResourceServersForUserResponseBody::ResourceServers>) };
    inline ListResourceServersForUserResponseBody& setResourceServers(const vector<ListResourceServersForUserResponseBody::ResourceServers> & resourceServers) { DARABONBA_PTR_SET_VALUE(resourceServers_, resourceServers) };
    inline ListResourceServersForUserResponseBody& setResourceServers(vector<ListResourceServersForUserResponseBody::ResourceServers> && resourceServers) { DARABONBA_PTR_SET_RVALUE(resourceServers_, resourceServers) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListResourceServersForUserResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListResourceServersForUserResponseBody::ResourceServers>> resourceServers_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
