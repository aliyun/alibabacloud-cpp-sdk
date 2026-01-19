// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORRESOURCESERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORRESOURCESERVERRESPONSEBODY_HPP_
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
  class ListOrganizationalUnitsForResourceServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsForResourceServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsForResourceServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOrganizationalUnitsForResourceServerResponseBody() = default ;
    ListOrganizationalUnitsForResourceServerResponseBody(const ListOrganizationalUnitsForResourceServerResponseBody &) = default ;
    ListOrganizationalUnitsForResourceServerResponseBody(ListOrganizationalUnitsForResourceServerResponseBody &&) = default ;
    ListOrganizationalUnitsForResourceServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsForResourceServerResponseBody() = default ;
    ListOrganizationalUnitsForResourceServerResponseBody& operator=(const ListOrganizationalUnitsForResourceServerResponseBody &) = default ;
    ListOrganizationalUnitsForResourceServerResponseBody& operator=(ListOrganizationalUnitsForResourceServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrganizationalUnits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrganizationalUnits& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopes, resourceServerScopes_);
      };
      friend void from_json(const Darabonba::Json& j, OrganizationalUnits& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopes, resourceServerScopes_);
      };
      OrganizationalUnits() = default ;
      OrganizationalUnits(const OrganizationalUnits &) = default ;
      OrganizationalUnits(OrganizationalUnits &&) = default ;
      OrganizationalUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrganizationalUnits() = default ;
      OrganizationalUnits& operator=(const OrganizationalUnits &) = default ;
      OrganizationalUnits& operator=(OrganizationalUnits &&) = default ;
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
        && this->organizationalUnitId_ == nullptr && this->resourceServerScopes_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OrganizationalUnits& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // organizationalUnitId Field Functions 
      bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
      void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
      inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
      inline OrganizationalUnits& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


      // resourceServerScopes Field Functions 
      bool hasResourceServerScopes() const { return this->resourceServerScopes_ != nullptr;};
      void deleteResourceServerScopes() { this->resourceServerScopes_ = nullptr;};
      inline const vector<OrganizationalUnits::ResourceServerScopes> & getResourceServerScopes() const { DARABONBA_PTR_GET_CONST(resourceServerScopes_, vector<OrganizationalUnits::ResourceServerScopes>) };
      inline vector<OrganizationalUnits::ResourceServerScopes> getResourceServerScopes() { DARABONBA_PTR_GET(resourceServerScopes_, vector<OrganizationalUnits::ResourceServerScopes>) };
      inline OrganizationalUnits& setResourceServerScopes(const vector<OrganizationalUnits::ResourceServerScopes> & resourceServerScopes) { DARABONBA_PTR_SET_VALUE(resourceServerScopes_, resourceServerScopes) };
      inline OrganizationalUnits& setResourceServerScopes(vector<OrganizationalUnits::ResourceServerScopes> && resourceServerScopes) { DARABONBA_PTR_SET_RVALUE(resourceServerScopes_, resourceServerScopes) };


    protected:
      // 实例唯一标识
      shared_ptr<string> instanceId_ {};
      // 组织的唯一标识
      shared_ptr<string> organizationalUnitId_ {};
      // 资源服务Scope权限集合
      shared_ptr<vector<OrganizationalUnits::ResourceServerScopes>> resourceServerScopes_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->organizationalUnits_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOrganizationalUnitsForResourceServerResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOrganizationalUnitsForResourceServerResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // organizationalUnits Field Functions 
    bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
    void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
    inline const vector<ListOrganizationalUnitsForResourceServerResponseBody::OrganizationalUnits> & getOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<ListOrganizationalUnitsForResourceServerResponseBody::OrganizationalUnits>) };
    inline vector<ListOrganizationalUnitsForResourceServerResponseBody::OrganizationalUnits> getOrganizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<ListOrganizationalUnitsForResourceServerResponseBody::OrganizationalUnits>) };
    inline ListOrganizationalUnitsForResourceServerResponseBody& setOrganizationalUnits(const vector<ListOrganizationalUnitsForResourceServerResponseBody::OrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
    inline ListOrganizationalUnitsForResourceServerResponseBody& setOrganizationalUnits(vector<ListOrganizationalUnitsForResourceServerResponseBody::OrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrganizationalUnitsForResourceServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOrganizationalUnitsForResourceServerResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListOrganizationalUnitsForResourceServerResponseBody::OrganizationalUnits>> organizationalUnits_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
