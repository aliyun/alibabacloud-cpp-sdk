// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSCOPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSCOPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamScopesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamScopesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamScopes, ipamScopes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamScopesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamScopes, ipamScopes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamScopesResponseBody() = default ;
    ListIpamScopesResponseBody(const ListIpamScopesResponseBody &) = default ;
    ListIpamScopesResponseBody(ListIpamScopesResponseBody &&) = default ;
    ListIpamScopesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamScopesResponseBody() = default ;
    ListIpamScopesResponseBody& operator=(const ListIpamScopesResponseBody &) = default ;
    ListIpamScopesResponseBody& operator=(ListIpamScopesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamScopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamScopes& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
        DARABONBA_PTR_TO_JSON(IpamScopeDescription, ipamScopeDescription_);
        DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
        DARABONBA_PTR_TO_JSON(IpamScopeName, ipamScopeName_);
        DARABONBA_PTR_TO_JSON(IpamScopeType, ipamScopeType_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(PoolCount, poolCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, IpamScopes& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
        DARABONBA_PTR_FROM_JSON(IpamScopeDescription, ipamScopeDescription_);
        DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
        DARABONBA_PTR_FROM_JSON(IpamScopeName, ipamScopeName_);
        DARABONBA_PTR_FROM_JSON(IpamScopeType, ipamScopeType_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(PoolCount, poolCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      IpamScopes() = default ;
      IpamScopes(const IpamScopes &) = default ;
      IpamScopes(IpamScopes &&) = default ;
      IpamScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamScopes() = default ;
      IpamScopes& operator=(const IpamScopes &) = default ;
      IpamScopes& operator=(IpamScopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->ipamId_ == nullptr && this->ipamScopeDescription_ == nullptr && this->ipamScopeId_ == nullptr && this->ipamScopeName_ == nullptr && this->ipamScopeType_ == nullptr
        && this->isDefault_ == nullptr && this->ownerId_ == nullptr && this->poolCount_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline IpamScopes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // ipamId Field Functions 
      bool hasIpamId() const { return this->ipamId_ != nullptr;};
      void deleteIpamId() { this->ipamId_ = nullptr;};
      inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
      inline IpamScopes& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


      // ipamScopeDescription Field Functions 
      bool hasIpamScopeDescription() const { return this->ipamScopeDescription_ != nullptr;};
      void deleteIpamScopeDescription() { this->ipamScopeDescription_ = nullptr;};
      inline string getIpamScopeDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeDescription_, "") };
      inline IpamScopes& setIpamScopeDescription(string ipamScopeDescription) { DARABONBA_PTR_SET_VALUE(ipamScopeDescription_, ipamScopeDescription) };


      // ipamScopeId Field Functions 
      bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
      void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
      inline string getIpamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
      inline IpamScopes& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


      // ipamScopeName Field Functions 
      bool hasIpamScopeName() const { return this->ipamScopeName_ != nullptr;};
      void deleteIpamScopeName() { this->ipamScopeName_ = nullptr;};
      inline string getIpamScopeName() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeName_, "") };
      inline IpamScopes& setIpamScopeName(string ipamScopeName) { DARABONBA_PTR_SET_VALUE(ipamScopeName_, ipamScopeName) };


      // ipamScopeType Field Functions 
      bool hasIpamScopeType() const { return this->ipamScopeType_ != nullptr;};
      void deleteIpamScopeType() { this->ipamScopeType_ = nullptr;};
      inline string getIpamScopeType() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeType_, "") };
      inline IpamScopes& setIpamScopeType(string ipamScopeType) { DARABONBA_PTR_SET_VALUE(ipamScopeType_, ipamScopeType) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline IpamScopes& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline IpamScopes& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // poolCount Field Functions 
      bool hasPoolCount() const { return this->poolCount_ != nullptr;};
      void deletePoolCount() { this->poolCount_ = nullptr;};
      inline int32_t getPoolCount() const { DARABONBA_PTR_GET_DEFAULT(poolCount_, 0) };
      inline IpamScopes& setPoolCount(int32_t poolCount) { DARABONBA_PTR_SET_VALUE(poolCount_, poolCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline IpamScopes& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline IpamScopes& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpamScopes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<IpamScopes::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<IpamScopes::Tags>) };
      inline vector<IpamScopes::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<IpamScopes::Tags>) };
      inline IpamScopes& setTags(const vector<IpamScopes::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline IpamScopes& setTags(vector<IpamScopes::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The time when the IPAM scope was created.
      shared_ptr<string> createTime_ {};
      // The ID of the IPAM.
      shared_ptr<string> ipamId_ {};
      // The description of the IPAM scope.
      shared_ptr<string> ipamScopeDescription_ {};
      // The ID of the IPAM scope.
      shared_ptr<string> ipamScopeId_ {};
      // The name of the IPAM scope.
      shared_ptr<string> ipamScopeName_ {};
      // The type of the IPAM scope. Valid values:
      // 
      // *   **public**
      // *   **private**
      shared_ptr<string> ipamScopeType_ {};
      // Indicates whether the scope is the default scope. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isDefault_ {};
      // The Alibaba Cloud account that owns the IPAM scope.
      shared_ptr<int64_t> ownerId_ {};
      // The number of pools in the IPAM scope.
      shared_ptr<int32_t> poolCount_ {};
      // The region ID of the IPAM.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the IPAM scope. Valid values:
      // 
      // *   **Creating**
      // *   **Created**
      // *   **Deleting**
      // *   **Deleted**
      shared_ptr<string> status_ {};
      // The tag list.
      shared_ptr<vector<IpamScopes::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamScopes_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamScopesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamScopes Field Functions 
    bool hasIpamScopes() const { return this->ipamScopes_ != nullptr;};
    void deleteIpamScopes() { this->ipamScopes_ = nullptr;};
    inline const vector<ListIpamScopesResponseBody::IpamScopes> & getIpamScopes() const { DARABONBA_PTR_GET_CONST(ipamScopes_, vector<ListIpamScopesResponseBody::IpamScopes>) };
    inline vector<ListIpamScopesResponseBody::IpamScopes> getIpamScopes() { DARABONBA_PTR_GET(ipamScopes_, vector<ListIpamScopesResponseBody::IpamScopes>) };
    inline ListIpamScopesResponseBody& setIpamScopes(const vector<ListIpamScopesResponseBody::IpamScopes> & ipamScopes) { DARABONBA_PTR_SET_VALUE(ipamScopes_, ipamScopes) };
    inline ListIpamScopesResponseBody& setIpamScopes(vector<ListIpamScopesResponseBody::IpamScopes> && ipamScopes) { DARABONBA_PTR_SET_RVALUE(ipamScopes_, ipamScopes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamScopesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamScopesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamScopesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamScopesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned.
    shared_ptr<int64_t> count_ {};
    // The IPAM scopes.
    shared_ptr<vector<ListIpamScopesResponseBody::IpamScopes>> ipamScopes_ {};
    // The number of entries per page.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
