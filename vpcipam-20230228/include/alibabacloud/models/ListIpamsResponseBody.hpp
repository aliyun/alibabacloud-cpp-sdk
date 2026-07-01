// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSRESPONSEBODY_HPP_
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
  class ListIpamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Ipams, ipams_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Ipams, ipams_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamsResponseBody() = default ;
    ListIpamsResponseBody(const ListIpamsResponseBody &) = default ;
    ListIpamsResponseBody(ListIpamsResponseBody &&) = default ;
    ListIpamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamsResponseBody() = default ;
    ListIpamsResponseBody& operator=(const ListIpamsResponseBody &) = default ;
    ListIpamsResponseBody& operator=(ListIpamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipams& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultResourceDiscoveryAssociationId, defaultResourceDiscoveryAssociationId_);
        DARABONBA_PTR_TO_JSON(DefaultResourceDiscoveryId, defaultResourceDiscoveryId_);
        DARABONBA_PTR_TO_JSON(IpamDescription, ipamDescription_);
        DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
        DARABONBA_PTR_TO_JSON(IpamName, ipamName_);
        DARABONBA_PTR_TO_JSON(IpamStatus, ipamStatus_);
        DARABONBA_PTR_TO_JSON(OperatingRegionList, operatingRegionList_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(PrivateDefaultScopeId, privateDefaultScopeId_);
        DARABONBA_PTR_TO_JSON(PublicDefaultScopeId, publicDefaultScopeId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceDiscoveryAssociationCount, resourceDiscoveryAssociationCount_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ScopeCount, scopeCount_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Ipams& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultResourceDiscoveryAssociationId, defaultResourceDiscoveryAssociationId_);
        DARABONBA_PTR_FROM_JSON(DefaultResourceDiscoveryId, defaultResourceDiscoveryId_);
        DARABONBA_PTR_FROM_JSON(IpamDescription, ipamDescription_);
        DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
        DARABONBA_PTR_FROM_JSON(IpamName, ipamName_);
        DARABONBA_PTR_FROM_JSON(IpamStatus, ipamStatus_);
        DARABONBA_PTR_FROM_JSON(OperatingRegionList, operatingRegionList_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(PrivateDefaultScopeId, privateDefaultScopeId_);
        DARABONBA_PTR_FROM_JSON(PublicDefaultScopeId, publicDefaultScopeId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceDiscoveryAssociationCount, resourceDiscoveryAssociationCount_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ScopeCount, scopeCount_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Ipams() = default ;
      Ipams(const Ipams &) = default ;
      Ipams(Ipams &&) = default ;
      Ipams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipams() = default ;
      Ipams& operator=(const Ipams &) = default ;
      Ipams& operator=(Ipams &&) = default ;
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
        && this->defaultResourceDiscoveryAssociationId_ == nullptr && this->defaultResourceDiscoveryId_ == nullptr && this->ipamDescription_ == nullptr && this->ipamId_ == nullptr && this->ipamName_ == nullptr
        && this->ipamStatus_ == nullptr && this->operatingRegionList_ == nullptr && this->ownerId_ == nullptr && this->privateDefaultScopeId_ == nullptr && this->publicDefaultScopeId_ == nullptr
        && this->regionId_ == nullptr && this->resourceDiscoveryAssociationCount_ == nullptr && this->resourceGroupId_ == nullptr && this->scopeCount_ == nullptr && this->tags_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Ipams& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultResourceDiscoveryAssociationId Field Functions 
      bool hasDefaultResourceDiscoveryAssociationId() const { return this->defaultResourceDiscoveryAssociationId_ != nullptr;};
      void deleteDefaultResourceDiscoveryAssociationId() { this->defaultResourceDiscoveryAssociationId_ = nullptr;};
      inline string getDefaultResourceDiscoveryAssociationId() const { DARABONBA_PTR_GET_DEFAULT(defaultResourceDiscoveryAssociationId_, "") };
      inline Ipams& setDefaultResourceDiscoveryAssociationId(string defaultResourceDiscoveryAssociationId) { DARABONBA_PTR_SET_VALUE(defaultResourceDiscoveryAssociationId_, defaultResourceDiscoveryAssociationId) };


      // defaultResourceDiscoveryId Field Functions 
      bool hasDefaultResourceDiscoveryId() const { return this->defaultResourceDiscoveryId_ != nullptr;};
      void deleteDefaultResourceDiscoveryId() { this->defaultResourceDiscoveryId_ = nullptr;};
      inline string getDefaultResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(defaultResourceDiscoveryId_, "") };
      inline Ipams& setDefaultResourceDiscoveryId(string defaultResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(defaultResourceDiscoveryId_, defaultResourceDiscoveryId) };


      // ipamDescription Field Functions 
      bool hasIpamDescription() const { return this->ipamDescription_ != nullptr;};
      void deleteIpamDescription() { this->ipamDescription_ = nullptr;};
      inline string getIpamDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamDescription_, "") };
      inline Ipams& setIpamDescription(string ipamDescription) { DARABONBA_PTR_SET_VALUE(ipamDescription_, ipamDescription) };


      // ipamId Field Functions 
      bool hasIpamId() const { return this->ipamId_ != nullptr;};
      void deleteIpamId() { this->ipamId_ = nullptr;};
      inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
      inline Ipams& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


      // ipamName Field Functions 
      bool hasIpamName() const { return this->ipamName_ != nullptr;};
      void deleteIpamName() { this->ipamName_ = nullptr;};
      inline string getIpamName() const { DARABONBA_PTR_GET_DEFAULT(ipamName_, "") };
      inline Ipams& setIpamName(string ipamName) { DARABONBA_PTR_SET_VALUE(ipamName_, ipamName) };


      // ipamStatus Field Functions 
      bool hasIpamStatus() const { return this->ipamStatus_ != nullptr;};
      void deleteIpamStatus() { this->ipamStatus_ = nullptr;};
      inline string getIpamStatus() const { DARABONBA_PTR_GET_DEFAULT(ipamStatus_, "") };
      inline Ipams& setIpamStatus(string ipamStatus) { DARABONBA_PTR_SET_VALUE(ipamStatus_, ipamStatus) };


      // operatingRegionList Field Functions 
      bool hasOperatingRegionList() const { return this->operatingRegionList_ != nullptr;};
      void deleteOperatingRegionList() { this->operatingRegionList_ = nullptr;};
      inline const vector<string> & getOperatingRegionList() const { DARABONBA_PTR_GET_CONST(operatingRegionList_, vector<string>) };
      inline vector<string> getOperatingRegionList() { DARABONBA_PTR_GET(operatingRegionList_, vector<string>) };
      inline Ipams& setOperatingRegionList(const vector<string> & operatingRegionList) { DARABONBA_PTR_SET_VALUE(operatingRegionList_, operatingRegionList) };
      inline Ipams& setOperatingRegionList(vector<string> && operatingRegionList) { DARABONBA_PTR_SET_RVALUE(operatingRegionList_, operatingRegionList) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline Ipams& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // privateDefaultScopeId Field Functions 
      bool hasPrivateDefaultScopeId() const { return this->privateDefaultScopeId_ != nullptr;};
      void deletePrivateDefaultScopeId() { this->privateDefaultScopeId_ = nullptr;};
      inline string getPrivateDefaultScopeId() const { DARABONBA_PTR_GET_DEFAULT(privateDefaultScopeId_, "") };
      inline Ipams& setPrivateDefaultScopeId(string privateDefaultScopeId) { DARABONBA_PTR_SET_VALUE(privateDefaultScopeId_, privateDefaultScopeId) };


      // publicDefaultScopeId Field Functions 
      bool hasPublicDefaultScopeId() const { return this->publicDefaultScopeId_ != nullptr;};
      void deletePublicDefaultScopeId() { this->publicDefaultScopeId_ = nullptr;};
      inline string getPublicDefaultScopeId() const { DARABONBA_PTR_GET_DEFAULT(publicDefaultScopeId_, "") };
      inline Ipams& setPublicDefaultScopeId(string publicDefaultScopeId) { DARABONBA_PTR_SET_VALUE(publicDefaultScopeId_, publicDefaultScopeId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Ipams& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceDiscoveryAssociationCount Field Functions 
      bool hasResourceDiscoveryAssociationCount() const { return this->resourceDiscoveryAssociationCount_ != nullptr;};
      void deleteResourceDiscoveryAssociationCount() { this->resourceDiscoveryAssociationCount_ = nullptr;};
      inline int32_t getResourceDiscoveryAssociationCount() const { DARABONBA_PTR_GET_DEFAULT(resourceDiscoveryAssociationCount_, 0) };
      inline Ipams& setResourceDiscoveryAssociationCount(int32_t resourceDiscoveryAssociationCount) { DARABONBA_PTR_SET_VALUE(resourceDiscoveryAssociationCount_, resourceDiscoveryAssociationCount) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Ipams& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scopeCount Field Functions 
      bool hasScopeCount() const { return this->scopeCount_ != nullptr;};
      void deleteScopeCount() { this->scopeCount_ = nullptr;};
      inline int32_t getScopeCount() const { DARABONBA_PTR_GET_DEFAULT(scopeCount_, 0) };
      inline Ipams& setScopeCount(int32_t scopeCount) { DARABONBA_PTR_SET_VALUE(scopeCount_, scopeCount) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Ipams::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Ipams::Tags>) };
      inline vector<Ipams::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Ipams::Tags>) };
      inline Ipams& setTags(const vector<Ipams::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Ipams& setTags(vector<Ipams::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The time when the IPAM was created.
      shared_ptr<string> createTime_ {};
      // The ID of the default resource discovery association.
      shared_ptr<string> defaultResourceDiscoveryAssociationId_ {};
      // The ID of the default resource discovery.
      shared_ptr<string> defaultResourceDiscoveryId_ {};
      // The description of the IPAM.
      shared_ptr<string> ipamDescription_ {};
      // The ID of the IPAM.
      shared_ptr<string> ipamId_ {};
      // The name of the IPAM.
      shared_ptr<string> ipamName_ {};
      // The status of the IPAM. Valid values:
      // 
      // - **Creating**: The IPAM is being created.
      // 
      // - **Created**: The IPAM is created.
      // 
      // - **Deleting**: The IPAM is being deleted.
      // 
      // - **Deleted**: The IPAM is deleted.
      shared_ptr<string> ipamStatus_ {};
      // The list of operating regions of the IPAM.
      shared_ptr<vector<string>> operatingRegionList_ {};
      // The ID of the Alibaba Cloud account to which the IPAM belongs.
      shared_ptr<int64_t> ownerId_ {};
      // The ID of the default private scope that is automatically created when you create the IPAM.
      shared_ptr<string> privateDefaultScopeId_ {};
      // The ID of the default public scope that is automatically created when you create the IPAM.
      shared_ptr<string> publicDefaultScopeId_ {};
      // The ID of the region where the IPAM is created.
      shared_ptr<string> regionId_ {};
      // The number of resource discovery associations.
      shared_ptr<int32_t> resourceDiscoveryAssociationCount_ {};
      // The ID of the resource group to which the IPAM belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The number of scopes in the IPAM. Valid values: 2 to **5**.
      shared_ptr<int32_t> scopeCount_ {};
      // The tags.
      shared_ptr<vector<Ipams::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipams_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipams Field Functions 
    bool hasIpams() const { return this->ipams_ != nullptr;};
    void deleteIpams() { this->ipams_ = nullptr;};
    inline const vector<ListIpamsResponseBody::Ipams> & getIpams() const { DARABONBA_PTR_GET_CONST(ipams_, vector<ListIpamsResponseBody::Ipams>) };
    inline vector<ListIpamsResponseBody::Ipams> getIpams() { DARABONBA_PTR_GET(ipams_, vector<ListIpamsResponseBody::Ipams>) };
    inline ListIpamsResponseBody& setIpams(const vector<ListIpamsResponseBody::Ipams> & ipams) { DARABONBA_PTR_SET_VALUE(ipams_, ipams) };
    inline ListIpamsResponseBody& setIpams(vector<ListIpamsResponseBody::Ipams> && ipams) { DARABONBA_PTR_SET_RVALUE(ipams_, ipams) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int64_t> count_ {};
    // A list of IPAM instances.
    shared_ptr<vector<ListIpamsResponseBody::Ipams>> ipams_ {};
    // The maximum number of entries returned per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // - If **NextToken** is empty, no next page exists.
    // 
    // - If a value is returned for **NextToken**, the value is the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
