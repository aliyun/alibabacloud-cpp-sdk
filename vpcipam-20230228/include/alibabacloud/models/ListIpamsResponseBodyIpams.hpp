// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSRESPONSEBODYIPAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSRESPONSEBODYIPAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamsResponseBodyIpamsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamsResponseBodyIpams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamsResponseBodyIpams& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListIpamsResponseBodyIpams& obj) { 
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
    ListIpamsResponseBodyIpams() = default ;
    ListIpamsResponseBodyIpams(const ListIpamsResponseBodyIpams &) = default ;
    ListIpamsResponseBodyIpams(ListIpamsResponseBodyIpams &&) = default ;
    ListIpamsResponseBodyIpams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamsResponseBodyIpams() = default ;
    ListIpamsResponseBodyIpams& operator=(const ListIpamsResponseBodyIpams &) = default ;
    ListIpamsResponseBodyIpams& operator=(ListIpamsResponseBodyIpams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->defaultResourceDiscoveryAssociationId_ == nullptr && return this->defaultResourceDiscoveryId_ == nullptr && return this->ipamDescription_ == nullptr && return this->ipamId_ == nullptr && return this->ipamName_ == nullptr
        && return this->ipamStatus_ == nullptr && return this->operatingRegionList_ == nullptr && return this->ownerId_ == nullptr && return this->privateDefaultScopeId_ == nullptr && return this->publicDefaultScopeId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceDiscoveryAssociationCount_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scopeCount_ == nullptr && return this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListIpamsResponseBodyIpams& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultResourceDiscoveryAssociationId Field Functions 
    bool hasDefaultResourceDiscoveryAssociationId() const { return this->defaultResourceDiscoveryAssociationId_ != nullptr;};
    void deleteDefaultResourceDiscoveryAssociationId() { this->defaultResourceDiscoveryAssociationId_ = nullptr;};
    inline string defaultResourceDiscoveryAssociationId() const { DARABONBA_PTR_GET_DEFAULT(defaultResourceDiscoveryAssociationId_, "") };
    inline ListIpamsResponseBodyIpams& setDefaultResourceDiscoveryAssociationId(string defaultResourceDiscoveryAssociationId) { DARABONBA_PTR_SET_VALUE(defaultResourceDiscoveryAssociationId_, defaultResourceDiscoveryAssociationId) };


    // defaultResourceDiscoveryId Field Functions 
    bool hasDefaultResourceDiscoveryId() const { return this->defaultResourceDiscoveryId_ != nullptr;};
    void deleteDefaultResourceDiscoveryId() { this->defaultResourceDiscoveryId_ = nullptr;};
    inline string defaultResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(defaultResourceDiscoveryId_, "") };
    inline ListIpamsResponseBodyIpams& setDefaultResourceDiscoveryId(string defaultResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(defaultResourceDiscoveryId_, defaultResourceDiscoveryId) };


    // ipamDescription Field Functions 
    bool hasIpamDescription() const { return this->ipamDescription_ != nullptr;};
    void deleteIpamDescription() { this->ipamDescription_ = nullptr;};
    inline string ipamDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamDescription_, "") };
    inline ListIpamsResponseBodyIpams& setIpamDescription(string ipamDescription) { DARABONBA_PTR_SET_VALUE(ipamDescription_, ipamDescription) };


    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string ipamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline ListIpamsResponseBodyIpams& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamName Field Functions 
    bool hasIpamName() const { return this->ipamName_ != nullptr;};
    void deleteIpamName() { this->ipamName_ = nullptr;};
    inline string ipamName() const { DARABONBA_PTR_GET_DEFAULT(ipamName_, "") };
    inline ListIpamsResponseBodyIpams& setIpamName(string ipamName) { DARABONBA_PTR_SET_VALUE(ipamName_, ipamName) };


    // ipamStatus Field Functions 
    bool hasIpamStatus() const { return this->ipamStatus_ != nullptr;};
    void deleteIpamStatus() { this->ipamStatus_ = nullptr;};
    inline string ipamStatus() const { DARABONBA_PTR_GET_DEFAULT(ipamStatus_, "") };
    inline ListIpamsResponseBodyIpams& setIpamStatus(string ipamStatus) { DARABONBA_PTR_SET_VALUE(ipamStatus_, ipamStatus) };


    // operatingRegionList Field Functions 
    bool hasOperatingRegionList() const { return this->operatingRegionList_ != nullptr;};
    void deleteOperatingRegionList() { this->operatingRegionList_ = nullptr;};
    inline const vector<string> & operatingRegionList() const { DARABONBA_PTR_GET_CONST(operatingRegionList_, vector<string>) };
    inline vector<string> operatingRegionList() { DARABONBA_PTR_GET(operatingRegionList_, vector<string>) };
    inline ListIpamsResponseBodyIpams& setOperatingRegionList(const vector<string> & operatingRegionList) { DARABONBA_PTR_SET_VALUE(operatingRegionList_, operatingRegionList) };
    inline ListIpamsResponseBodyIpams& setOperatingRegionList(vector<string> && operatingRegionList) { DARABONBA_PTR_SET_RVALUE(operatingRegionList_, operatingRegionList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamsResponseBodyIpams& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateDefaultScopeId Field Functions 
    bool hasPrivateDefaultScopeId() const { return this->privateDefaultScopeId_ != nullptr;};
    void deletePrivateDefaultScopeId() { this->privateDefaultScopeId_ = nullptr;};
    inline string privateDefaultScopeId() const { DARABONBA_PTR_GET_DEFAULT(privateDefaultScopeId_, "") };
    inline ListIpamsResponseBodyIpams& setPrivateDefaultScopeId(string privateDefaultScopeId) { DARABONBA_PTR_SET_VALUE(privateDefaultScopeId_, privateDefaultScopeId) };


    // publicDefaultScopeId Field Functions 
    bool hasPublicDefaultScopeId() const { return this->publicDefaultScopeId_ != nullptr;};
    void deletePublicDefaultScopeId() { this->publicDefaultScopeId_ = nullptr;};
    inline string publicDefaultScopeId() const { DARABONBA_PTR_GET_DEFAULT(publicDefaultScopeId_, "") };
    inline ListIpamsResponseBodyIpams& setPublicDefaultScopeId(string publicDefaultScopeId) { DARABONBA_PTR_SET_VALUE(publicDefaultScopeId_, publicDefaultScopeId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamsResponseBodyIpams& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceDiscoveryAssociationCount Field Functions 
    bool hasResourceDiscoveryAssociationCount() const { return this->resourceDiscoveryAssociationCount_ != nullptr;};
    void deleteResourceDiscoveryAssociationCount() { this->resourceDiscoveryAssociationCount_ = nullptr;};
    inline int32_t resourceDiscoveryAssociationCount() const { DARABONBA_PTR_GET_DEFAULT(resourceDiscoveryAssociationCount_, 0) };
    inline ListIpamsResponseBodyIpams& setResourceDiscoveryAssociationCount(int32_t resourceDiscoveryAssociationCount) { DARABONBA_PTR_SET_VALUE(resourceDiscoveryAssociationCount_, resourceDiscoveryAssociationCount) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamsResponseBodyIpams& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scopeCount Field Functions 
    bool hasScopeCount() const { return this->scopeCount_ != nullptr;};
    void deleteScopeCount() { this->scopeCount_ = nullptr;};
    inline int32_t scopeCount() const { DARABONBA_PTR_GET_DEFAULT(scopeCount_, 0) };
    inline ListIpamsResponseBodyIpams& setScopeCount(int32_t scopeCount) { DARABONBA_PTR_SET_VALUE(scopeCount_, scopeCount) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListIpamsResponseBodyIpamsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListIpamsResponseBodyIpamsTags>) };
    inline vector<Models::ListIpamsResponseBodyIpamsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListIpamsResponseBodyIpamsTags>) };
    inline ListIpamsResponseBodyIpams& setTags(const vector<Models::ListIpamsResponseBodyIpamsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamsResponseBodyIpams& setTags(vector<Models::ListIpamsResponseBodyIpamsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the IPAM was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Default resource discovery association ID.
    std::shared_ptr<string> defaultResourceDiscoveryAssociationId_ = nullptr;
    // Default resource discovery instance ID.
    std::shared_ptr<string> defaultResourceDiscoveryId_ = nullptr;
    // The description of the IPAM.
    std::shared_ptr<string> ipamDescription_ = nullptr;
    // The ID of the IPAM.
    std::shared_ptr<string> ipamId_ = nullptr;
    // The name of the IPAM.
    std::shared_ptr<string> ipamName_ = nullptr;
    // The status of the IPAM. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> ipamStatus_ = nullptr;
    // The effective regions of the IPAM.
    std::shared_ptr<vector<string>> operatingRegionList_ = nullptr;
    // The Alibaba Cloud account that owns the IPAM.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The default private scope created by the system after the IPAM is created.
    std::shared_ptr<string> privateDefaultScopeId_ = nullptr;
    // The default public scope created by the system after the IPAM is created.
    std::shared_ptr<string> publicDefaultScopeId_ = nullptr;
    // The region ID of the IPAM.
    std::shared_ptr<string> regionId_ = nullptr;
    // Number of resource discovery associations.
    std::shared_ptr<int32_t> resourceDiscoveryAssociationCount_ = nullptr;
    // The resource group ID of the IPAM.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The number of IPAM scopes. Value: **2 to 5**.
    std::shared_ptr<int32_t> scopeCount_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListIpamsResponseBodyIpamsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
