// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESRESPONSEBODYIPAMRESOURCEDISCOVERIES_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCEDISCOVERIESRESPONSEBODYIPAMRESOURCEDISCOVERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
      DARABONBA_PTR_TO_JSON(OperatingRegionList, operatingRegionList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryStatus, ipamResourceDiscoveryStatus_);
      DARABONBA_PTR_FROM_JSON(OperatingRegionList, operatingRegionList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries() = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries(const ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries &) = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries(ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries &&) = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries() = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& operator=(const ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries &) = default ;
    ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& operator=(ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->ipamResourceDiscoveryDescription_ == nullptr && return this->ipamResourceDiscoveryId_ == nullptr && return this->ipamResourceDiscoveryName_ == nullptr && return this->ipamResourceDiscoveryStatus_ == nullptr && return this->operatingRegionList_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr && return this->tags_ == nullptr
        && return this->type_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ipamResourceDiscoveryDescription Field Functions 
    bool hasIpamResourceDiscoveryDescription() const { return this->ipamResourceDiscoveryDescription_ != nullptr;};
    void deleteIpamResourceDiscoveryDescription() { this->ipamResourceDiscoveryDescription_ = nullptr;};
    inline string ipamResourceDiscoveryDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryDescription_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setIpamResourceDiscoveryDescription(string ipamResourceDiscoveryDescription) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryDescription_, ipamResourceDiscoveryDescription) };


    // ipamResourceDiscoveryId Field Functions 
    bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
    void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
    inline string ipamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


    // ipamResourceDiscoveryName Field Functions 
    bool hasIpamResourceDiscoveryName() const { return this->ipamResourceDiscoveryName_ != nullptr;};
    void deleteIpamResourceDiscoveryName() { this->ipamResourceDiscoveryName_ = nullptr;};
    inline string ipamResourceDiscoveryName() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryName_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setIpamResourceDiscoveryName(string ipamResourceDiscoveryName) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryName_, ipamResourceDiscoveryName) };


    // ipamResourceDiscoveryStatus Field Functions 
    bool hasIpamResourceDiscoveryStatus() const { return this->ipamResourceDiscoveryStatus_ != nullptr;};
    void deleteIpamResourceDiscoveryStatus() { this->ipamResourceDiscoveryStatus_ = nullptr;};
    inline string ipamResourceDiscoveryStatus() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryStatus_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setIpamResourceDiscoveryStatus(string ipamResourceDiscoveryStatus) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryStatus_, ipamResourceDiscoveryStatus) };


    // operatingRegionList Field Functions 
    bool hasOperatingRegionList() const { return this->operatingRegionList_ != nullptr;};
    void deleteOperatingRegionList() { this->operatingRegionList_ = nullptr;};
    inline const vector<string> & operatingRegionList() const { DARABONBA_PTR_GET_CONST(operatingRegionList_, vector<string>) };
    inline vector<string> operatingRegionList() { DARABONBA_PTR_GET(operatingRegionList_, vector<string>) };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setOperatingRegionList(const vector<string> & operatingRegionList) { DARABONBA_PTR_SET_VALUE(operatingRegionList_, operatingRegionList) };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setOperatingRegionList(vector<string> && operatingRegionList) { DARABONBA_PTR_SET_RVALUE(operatingRegionList_, operatingRegionList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags>) };
    inline vector<Models::ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags>) };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setTags(const vector<Models::ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setTags(vector<Models::ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the resource was discovered.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the resource discovery.
    std::shared_ptr<string> ipamResourceDiscoveryDescription_ = nullptr;
    // The ID of resource discovery instance.
    std::shared_ptr<string> ipamResourceDiscoveryId_ = nullptr;
    // The name of the resource discovery.
    std::shared_ptr<string> ipamResourceDiscoveryName_ = nullptr;
    // The status of the resource discovery instance. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> ipamResourceDiscoveryStatus_ = nullptr;
    // The list of resource discovery regions.
    std::shared_ptr<vector<string>> operatingRegionList_ = nullptr;
    // The Alibaba Cloud account that owns the resource discovery.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the queried resource discovery instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group that resource discovery belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The sharing status of the resource.
    // 
    // *   If the value is empty, the resource is as an average instance.
    // *   If the value is Shared, the resource discovery comes from a shared source.
    // *   If the value is Sharing, the resource discovery is being shared.
    std::shared_ptr<string> shareType_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListIpamResourceDiscoveriesResponseBodyIpamResourceDiscoveriesTags>> tags_ = nullptr;
    // The type of resource discovery.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
