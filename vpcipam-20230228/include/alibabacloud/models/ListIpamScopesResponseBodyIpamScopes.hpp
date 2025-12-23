// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSCOPESRESPONSEBODYIPAMSCOPES_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSCOPESRESPONSEBODYIPAMSCOPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamScopesResponseBodyIpamScopesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamScopesResponseBodyIpamScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamScopesResponseBodyIpamScopes& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListIpamScopesResponseBodyIpamScopes& obj) { 
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
    ListIpamScopesResponseBodyIpamScopes() = default ;
    ListIpamScopesResponseBodyIpamScopes(const ListIpamScopesResponseBodyIpamScopes &) = default ;
    ListIpamScopesResponseBodyIpamScopes(ListIpamScopesResponseBodyIpamScopes &&) = default ;
    ListIpamScopesResponseBodyIpamScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamScopesResponseBodyIpamScopes() = default ;
    ListIpamScopesResponseBodyIpamScopes& operator=(const ListIpamScopesResponseBodyIpamScopes &) = default ;
    ListIpamScopesResponseBodyIpamScopes& operator=(ListIpamScopesResponseBodyIpamScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->ipamId_ == nullptr && return this->ipamScopeDescription_ == nullptr && return this->ipamScopeId_ == nullptr && return this->ipamScopeName_ == nullptr && return this->ipamScopeType_ == nullptr
        && return this->isDefault_ == nullptr && return this->ownerId_ == nullptr && return this->poolCount_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string ipamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamScopeDescription Field Functions 
    bool hasIpamScopeDescription() const { return this->ipamScopeDescription_ != nullptr;};
    void deleteIpamScopeDescription() { this->ipamScopeDescription_ = nullptr;};
    inline string ipamScopeDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeDescription_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setIpamScopeDescription(string ipamScopeDescription) { DARABONBA_PTR_SET_VALUE(ipamScopeDescription_, ipamScopeDescription) };


    // ipamScopeId Field Functions 
    bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
    void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
    inline string ipamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


    // ipamScopeName Field Functions 
    bool hasIpamScopeName() const { return this->ipamScopeName_ != nullptr;};
    void deleteIpamScopeName() { this->ipamScopeName_ = nullptr;};
    inline string ipamScopeName() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeName_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setIpamScopeName(string ipamScopeName) { DARABONBA_PTR_SET_VALUE(ipamScopeName_, ipamScopeName) };


    // ipamScopeType Field Functions 
    bool hasIpamScopeType() const { return this->ipamScopeType_ != nullptr;};
    void deleteIpamScopeType() { this->ipamScopeType_ = nullptr;};
    inline string ipamScopeType() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeType_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setIpamScopeType(string ipamScopeType) { DARABONBA_PTR_SET_VALUE(ipamScopeType_, ipamScopeType) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListIpamScopesResponseBodyIpamScopes& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamScopesResponseBodyIpamScopes& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolCount Field Functions 
    bool hasPoolCount() const { return this->poolCount_ != nullptr;};
    void deletePoolCount() { this->poolCount_ = nullptr;};
    inline int32_t poolCount() const { DARABONBA_PTR_GET_DEFAULT(poolCount_, 0) };
    inline ListIpamScopesResponseBodyIpamScopes& setPoolCount(int32_t poolCount) { DARABONBA_PTR_SET_VALUE(poolCount_, poolCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpamScopesResponseBodyIpamScopes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListIpamScopesResponseBodyIpamScopesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListIpamScopesResponseBodyIpamScopesTags>) };
    inline vector<Models::ListIpamScopesResponseBodyIpamScopesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListIpamScopesResponseBodyIpamScopesTags>) };
    inline ListIpamScopesResponseBodyIpamScopes& setTags(const vector<Models::ListIpamScopesResponseBodyIpamScopesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamScopesResponseBodyIpamScopes& setTags(vector<Models::ListIpamScopesResponseBodyIpamScopesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the IPAM scope was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the IPAM.
    std::shared_ptr<string> ipamId_ = nullptr;
    // The description of the IPAM scope.
    std::shared_ptr<string> ipamScopeDescription_ = nullptr;
    // The ID of the IPAM scope.
    std::shared_ptr<string> ipamScopeId_ = nullptr;
    // The name of the IPAM scope.
    std::shared_ptr<string> ipamScopeName_ = nullptr;
    // The type of the IPAM scope. Valid values:
    // 
    // *   **public**
    // *   **private**
    std::shared_ptr<string> ipamScopeType_ = nullptr;
    // Indicates whether the scope is the default scope. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The Alibaba Cloud account that owns the IPAM scope.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of pools in the IPAM scope.
    std::shared_ptr<int32_t> poolCount_ = nullptr;
    // The region ID of the IPAM.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the IPAM scope. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListIpamScopesResponseBodyIpamScopesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
