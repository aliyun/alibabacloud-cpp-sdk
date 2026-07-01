// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMPOOLSRESPONSEBODY_HPP_
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
  class ListIpamPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamPools, ipamPools_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamPools, ipamPools_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamPoolsResponseBody() = default ;
    ListIpamPoolsResponseBody(const ListIpamPoolsResponseBody &) = default ;
    ListIpamPoolsResponseBody(ListIpamPoolsResponseBody &&) = default ;
    ListIpamPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamPoolsResponseBody() = default ;
    ListIpamPoolsResponseBody& operator=(const ListIpamPoolsResponseBody &) = default ;
    ListIpamPoolsResponseBody& operator=(ListIpamPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamPools& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
        DARABONBA_PTR_TO_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
        DARABONBA_PTR_TO_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
        DARABONBA_PTR_TO_JSON(AutoImport, autoImport_);
        DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(HasSubPool, hasSubPool_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
        DARABONBA_PTR_TO_JSON(IpamPoolDescription, ipamPoolDescription_);
        DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
        DARABONBA_PTR_TO_JSON(IpamPoolName, ipamPoolName_);
        DARABONBA_PTR_TO_JSON(IpamRegionId, ipamRegionId_);
        DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
        DARABONBA_PTR_TO_JSON(IpamScopeType, ipamScopeType_);
        DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
        DARABONBA_PTR_TO_JSON(IsShared, isShared_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(PoolDepth, poolDepth_);
        DARABONBA_PTR_TO_JSON(PoolRegionId, poolRegionId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SourceIpamPoolId, sourceIpamPoolId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, IpamPools& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationDefaultCidrMask, allocationDefaultCidrMask_);
        DARABONBA_PTR_FROM_JSON(AllocationMaxCidrMask, allocationMaxCidrMask_);
        DARABONBA_PTR_FROM_JSON(AllocationMinCidrMask, allocationMinCidrMask_);
        DARABONBA_PTR_FROM_JSON(AutoImport, autoImport_);
        DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(HasSubPool, hasSubPool_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
        DARABONBA_PTR_FROM_JSON(IpamPoolDescription, ipamPoolDescription_);
        DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
        DARABONBA_PTR_FROM_JSON(IpamPoolName, ipamPoolName_);
        DARABONBA_PTR_FROM_JSON(IpamRegionId, ipamRegionId_);
        DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
        DARABONBA_PTR_FROM_JSON(IpamScopeType, ipamScopeType_);
        DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
        DARABONBA_PTR_FROM_JSON(IsShared, isShared_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(PoolDepth, poolDepth_);
        DARABONBA_PTR_FROM_JSON(PoolRegionId, poolRegionId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SourceIpamPoolId, sourceIpamPoolId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      IpamPools() = default ;
      IpamPools(const IpamPools &) = default ;
      IpamPools(IpamPools &&) = default ;
      IpamPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamPools() = default ;
      IpamPools& operator=(const IpamPools &) = default ;
      IpamPools& operator=(IpamPools &&) = default ;
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

      virtual bool empty() const override { return this->allocationDefaultCidrMask_ == nullptr
        && this->allocationMaxCidrMask_ == nullptr && this->allocationMinCidrMask_ == nullptr && this->autoImport_ == nullptr && this->cidrs_ == nullptr && this->createTime_ == nullptr
        && this->hasSubPool_ == nullptr && this->ipVersion_ == nullptr && this->ipamId_ == nullptr && this->ipamPoolDescription_ == nullptr && this->ipamPoolId_ == nullptr
        && this->ipamPoolName_ == nullptr && this->ipamRegionId_ == nullptr && this->ipamScopeId_ == nullptr && this->ipamScopeType_ == nullptr && this->ipv6Isp_ == nullptr
        && this->isShared_ == nullptr && this->ownerId_ == nullptr && this->poolDepth_ == nullptr && this->poolRegionId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sourceIpamPoolId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // allocationDefaultCidrMask Field Functions 
      bool hasAllocationDefaultCidrMask() const { return this->allocationDefaultCidrMask_ != nullptr;};
      void deleteAllocationDefaultCidrMask() { this->allocationDefaultCidrMask_ = nullptr;};
      inline int32_t getAllocationDefaultCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationDefaultCidrMask_, 0) };
      inline IpamPools& setAllocationDefaultCidrMask(int32_t allocationDefaultCidrMask) { DARABONBA_PTR_SET_VALUE(allocationDefaultCidrMask_, allocationDefaultCidrMask) };


      // allocationMaxCidrMask Field Functions 
      bool hasAllocationMaxCidrMask() const { return this->allocationMaxCidrMask_ != nullptr;};
      void deleteAllocationMaxCidrMask() { this->allocationMaxCidrMask_ = nullptr;};
      inline int32_t getAllocationMaxCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMaxCidrMask_, 0) };
      inline IpamPools& setAllocationMaxCidrMask(int32_t allocationMaxCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMaxCidrMask_, allocationMaxCidrMask) };


      // allocationMinCidrMask Field Functions 
      bool hasAllocationMinCidrMask() const { return this->allocationMinCidrMask_ != nullptr;};
      void deleteAllocationMinCidrMask() { this->allocationMinCidrMask_ = nullptr;};
      inline int32_t getAllocationMinCidrMask() const { DARABONBA_PTR_GET_DEFAULT(allocationMinCidrMask_, 0) };
      inline IpamPools& setAllocationMinCidrMask(int32_t allocationMinCidrMask) { DARABONBA_PTR_SET_VALUE(allocationMinCidrMask_, allocationMinCidrMask) };


      // autoImport Field Functions 
      bool hasAutoImport() const { return this->autoImport_ != nullptr;};
      void deleteAutoImport() { this->autoImport_ = nullptr;};
      inline bool getAutoImport() const { DARABONBA_PTR_GET_DEFAULT(autoImport_, false) };
      inline IpamPools& setAutoImport(bool autoImport) { DARABONBA_PTR_SET_VALUE(autoImport_, autoImport) };


      // cidrs Field Functions 
      bool hasCidrs() const { return this->cidrs_ != nullptr;};
      void deleteCidrs() { this->cidrs_ = nullptr;};
      inline const vector<string> & getCidrs() const { DARABONBA_PTR_GET_CONST(cidrs_, vector<string>) };
      inline vector<string> getCidrs() { DARABONBA_PTR_GET(cidrs_, vector<string>) };
      inline IpamPools& setCidrs(const vector<string> & cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };
      inline IpamPools& setCidrs(vector<string> && cidrs) { DARABONBA_PTR_SET_RVALUE(cidrs_, cidrs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline IpamPools& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // hasSubPool Field Functions 
      bool hasHasSubPool() const { return this->hasSubPool_ != nullptr;};
      void deleteHasSubPool() { this->hasSubPool_ = nullptr;};
      inline bool getHasSubPool() const { DARABONBA_PTR_GET_DEFAULT(hasSubPool_, false) };
      inline IpamPools& setHasSubPool(bool hasSubPool) { DARABONBA_PTR_SET_VALUE(hasSubPool_, hasSubPool) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline IpamPools& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // ipamId Field Functions 
      bool hasIpamId() const { return this->ipamId_ != nullptr;};
      void deleteIpamId() { this->ipamId_ = nullptr;};
      inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
      inline IpamPools& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


      // ipamPoolDescription Field Functions 
      bool hasIpamPoolDescription() const { return this->ipamPoolDescription_ != nullptr;};
      void deleteIpamPoolDescription() { this->ipamPoolDescription_ = nullptr;};
      inline string getIpamPoolDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolDescription_, "") };
      inline IpamPools& setIpamPoolDescription(string ipamPoolDescription) { DARABONBA_PTR_SET_VALUE(ipamPoolDescription_, ipamPoolDescription) };


      // ipamPoolId Field Functions 
      bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
      void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
      inline string getIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
      inline IpamPools& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


      // ipamPoolName Field Functions 
      bool hasIpamPoolName() const { return this->ipamPoolName_ != nullptr;};
      void deleteIpamPoolName() { this->ipamPoolName_ = nullptr;};
      inline string getIpamPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolName_, "") };
      inline IpamPools& setIpamPoolName(string ipamPoolName) { DARABONBA_PTR_SET_VALUE(ipamPoolName_, ipamPoolName) };


      // ipamRegionId Field Functions 
      bool hasIpamRegionId() const { return this->ipamRegionId_ != nullptr;};
      void deleteIpamRegionId() { this->ipamRegionId_ = nullptr;};
      inline string getIpamRegionId() const { DARABONBA_PTR_GET_DEFAULT(ipamRegionId_, "") };
      inline IpamPools& setIpamRegionId(string ipamRegionId) { DARABONBA_PTR_SET_VALUE(ipamRegionId_, ipamRegionId) };


      // ipamScopeId Field Functions 
      bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
      void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
      inline string getIpamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
      inline IpamPools& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


      // ipamScopeType Field Functions 
      bool hasIpamScopeType() const { return this->ipamScopeType_ != nullptr;};
      void deleteIpamScopeType() { this->ipamScopeType_ = nullptr;};
      inline string getIpamScopeType() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeType_, "") };
      inline IpamPools& setIpamScopeType(string ipamScopeType) { DARABONBA_PTR_SET_VALUE(ipamScopeType_, ipamScopeType) };


      // ipv6Isp Field Functions 
      bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
      void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
      inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
      inline IpamPools& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


      // isShared Field Functions 
      bool hasIsShared() const { return this->isShared_ != nullptr;};
      void deleteIsShared() { this->isShared_ = nullptr;};
      inline bool getIsShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
      inline IpamPools& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline IpamPools& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // poolDepth Field Functions 
      bool hasPoolDepth() const { return this->poolDepth_ != nullptr;};
      void deletePoolDepth() { this->poolDepth_ = nullptr;};
      inline int32_t getPoolDepth() const { DARABONBA_PTR_GET_DEFAULT(poolDepth_, 0) };
      inline IpamPools& setPoolDepth(int32_t poolDepth) { DARABONBA_PTR_SET_VALUE(poolDepth_, poolDepth) };


      // poolRegionId Field Functions 
      bool hasPoolRegionId() const { return this->poolRegionId_ != nullptr;};
      void deletePoolRegionId() { this->poolRegionId_ = nullptr;};
      inline string getPoolRegionId() const { DARABONBA_PTR_GET_DEFAULT(poolRegionId_, "") };
      inline IpamPools& setPoolRegionId(string poolRegionId) { DARABONBA_PTR_SET_VALUE(poolRegionId_, poolRegionId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline IpamPools& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline IpamPools& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sourceIpamPoolId Field Functions 
      bool hasSourceIpamPoolId() const { return this->sourceIpamPoolId_ != nullptr;};
      void deleteSourceIpamPoolId() { this->sourceIpamPoolId_ = nullptr;};
      inline string getSourceIpamPoolId() const { DARABONBA_PTR_GET_DEFAULT(sourceIpamPoolId_, "") };
      inline IpamPools& setSourceIpamPoolId(string sourceIpamPoolId) { DARABONBA_PTR_SET_VALUE(sourceIpamPoolId_, sourceIpamPoolId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpamPools& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<IpamPools::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<IpamPools::Tags>) };
      inline vector<IpamPools::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<IpamPools::Tags>) };
      inline IpamPools& setTags(const vector<IpamPools::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline IpamPools& setTags(vector<IpamPools::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The default subnet mask for the IPAM pool.
      shared_ptr<int32_t> allocationDefaultCidrMask_ {};
      // The maximum subnet mask for the IPAM pool.
      shared_ptr<int32_t> allocationMaxCidrMask_ {};
      // The minimum subnet mask for the IPAM pool.
      shared_ptr<int32_t> allocationMinCidrMask_ {};
      // Indicates whether auto import is enabled for the address pool.
      shared_ptr<bool> autoImport_ {};
      // The CIDR blocks that are provisioned for the address pool.
      shared_ptr<vector<string>> cidrs_ {};
      // The time when the IPAM pool was created.
      shared_ptr<string> createTime_ {};
      // Indicates whether the IPAM pool has sub-pools. Valid values:
      // 
      // - **true**
      // 
      // - **false**
      shared_ptr<bool> hasSubPool_ {};
      // The IP version.
      shared_ptr<string> ipVersion_ {};
      // The ID of the IPAM instance.
      shared_ptr<string> ipamId_ {};
      // The description of the IPAM pool.
      shared_ptr<string> ipamPoolDescription_ {};
      // The ID of the IPAM pool.
      shared_ptr<string> ipamPoolId_ {};
      // The name of the IPAM pool.
      shared_ptr<string> ipamPoolName_ {};
      // The managed region of the IPAM instance to which the IPAM pool belongs.
      shared_ptr<string> ipamRegionId_ {};
      // The ID of the IPAM scope.
      shared_ptr<string> ipamScopeId_ {};
      // The type of the IPAM scope. Valid values:
      // 
      // - **public**: the public network.
      // 
      // - **private**: the private network.
      shared_ptr<string> ipamScopeType_ {};
      // The line type of the IPv6 CIDR block.
      shared_ptr<string> ipv6Isp_ {};
      // Indicates whether the address pool is a shared pool.
      shared_ptr<bool> isShared_ {};
      // The Alibaba Cloud account ID of the owner of the IPAM pool.
      shared_ptr<int64_t> ownerId_ {};
      // The depth of the IPAM pool. Valid values: 0 to **10**.
      shared_ptr<int32_t> poolDepth_ {};
      // The ID of the region where the IPAM pool is available.
      shared_ptr<string> poolRegionId_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the IPAM pool belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the source IPAM pool.
      shared_ptr<string> sourceIpamPoolId_ {};
      // The status of the IPAM pool. Valid values:
      // 
      // - **Creating**
      // 
      // - **Created**
      // 
      // - **Modifying**
      // 
      // - **Deleting**
      // 
      // - **Deleted**
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<IpamPools::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamPools_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamPoolsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamPools Field Functions 
    bool hasIpamPools() const { return this->ipamPools_ != nullptr;};
    void deleteIpamPools() { this->ipamPools_ = nullptr;};
    inline const vector<ListIpamPoolsResponseBody::IpamPools> & getIpamPools() const { DARABONBA_PTR_GET_CONST(ipamPools_, vector<ListIpamPoolsResponseBody::IpamPools>) };
    inline vector<ListIpamPoolsResponseBody::IpamPools> getIpamPools() { DARABONBA_PTR_GET(ipamPools_, vector<ListIpamPoolsResponseBody::IpamPools>) };
    inline ListIpamPoolsResponseBody& setIpamPools(const vector<ListIpamPoolsResponseBody::IpamPools> & ipamPools) { DARABONBA_PTR_SET_VALUE(ipamPools_, ipamPools) };
    inline ListIpamPoolsResponseBody& setIpamPools(vector<ListIpamPoolsResponseBody::IpamPools> && ipamPools) { DARABONBA_PTR_SET_RVALUE(ipamPools_, ipamPools) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamPoolsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamPoolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamPoolsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int64_t> count_ {};
    // A list of IPAM pools.
    shared_ptr<vector<ListIpamPoolsResponseBody::IpamPools>> ipamPools_ {};
    // The maximum number of entries returned on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // - If **NextToken** is empty, no next page exists.
    // 
    // - If a value is returned for **NextToken**, the value is the token that is used for the next query.
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
