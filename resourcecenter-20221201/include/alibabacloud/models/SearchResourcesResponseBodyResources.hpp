// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchResourcesResponseBodyResourcesIpAddressAttributes.hpp>
#include <alibabacloud/models/SearchResourcesResponseBodyResourcesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(IpAddressAttributes, ipAddressAttributes_);
      DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(IpAddressAttributes, ipAddressAttributes_);
      DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    SearchResourcesResponseBodyResources() = default ;
    SearchResourcesResponseBodyResources(const SearchResourcesResponseBodyResources &) = default ;
    SearchResourcesResponseBodyResources(SearchResourcesResponseBodyResources &&) = default ;
    SearchResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResourcesResponseBodyResources() = default ;
    SearchResourcesResponseBodyResources& operator=(const SearchResourcesResponseBodyResources &) = default ;
    SearchResourcesResponseBodyResources& operator=(SearchResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->createTime_ == nullptr && return this->deleted_ == nullptr && return this->expireTime_ == nullptr && return this->ipAddressAttributes_ == nullptr && return this->ipAddresses_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceType_ == nullptr
        && return this->tags_ == nullptr && return this->zoneId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline SearchResourcesResponseBodyResources& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SearchResourcesResponseBodyResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline SearchResourcesResponseBodyResources& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline SearchResourcesResponseBodyResources& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ipAddressAttributes Field Functions 
    bool hasIpAddressAttributes() const { return this->ipAddressAttributes_ != nullptr;};
    void deleteIpAddressAttributes() { this->ipAddressAttributes_ = nullptr;};
    inline const vector<Models::SearchResourcesResponseBodyResourcesIpAddressAttributes> & ipAddressAttributes() const { DARABONBA_PTR_GET_CONST(ipAddressAttributes_, vector<Models::SearchResourcesResponseBodyResourcesIpAddressAttributes>) };
    inline vector<Models::SearchResourcesResponseBodyResourcesIpAddressAttributes> ipAddressAttributes() { DARABONBA_PTR_GET(ipAddressAttributes_, vector<Models::SearchResourcesResponseBodyResourcesIpAddressAttributes>) };
    inline SearchResourcesResponseBodyResources& setIpAddressAttributes(const vector<Models::SearchResourcesResponseBodyResourcesIpAddressAttributes> & ipAddressAttributes) { DARABONBA_PTR_SET_VALUE(ipAddressAttributes_, ipAddressAttributes) };
    inline SearchResourcesResponseBodyResources& setIpAddressAttributes(vector<Models::SearchResourcesResponseBodyResourcesIpAddressAttributes> && ipAddressAttributes) { DARABONBA_PTR_SET_RVALUE(ipAddressAttributes_, ipAddressAttributes) };


    // ipAddresses Field Functions 
    bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
    void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
    inline const vector<string> & ipAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
    inline vector<string> ipAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
    inline SearchResourcesResponseBodyResources& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
    inline SearchResourcesResponseBodyResources& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchResourcesResponseBodyResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchResourcesResponseBodyResources& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline SearchResourcesResponseBodyResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline SearchResourcesResponseBodyResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline SearchResourcesResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::SearchResourcesResponseBodyResourcesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::SearchResourcesResponseBodyResourcesTags>) };
    inline vector<Models::SearchResourcesResponseBodyResourcesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::SearchResourcesResponseBodyResourcesTags>) };
    inline SearchResourcesResponseBodyResources& setTags(const vector<Models::SearchResourcesResponseBodyResourcesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchResourcesResponseBodyResources& setTags(vector<Models::SearchResourcesResponseBodyResourcesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline SearchResourcesResponseBodyResources& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The time when the resource was created.
    // 
    // >  Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<bool> deleted_ = nullptr;
    // The time when the resource expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The attributes of the IP address.
    std::shared_ptr<vector<Models::SearchResourcesResponseBodyResourcesIpAddressAttributes>> ipAddressAttributes_ = nullptr;
    // The IP addresses.
    // 
    // >  Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
    std::shared_ptr<vector<string>> ipAddresses_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::SearchResourcesResponseBodyResourcesTags>> tags_ = nullptr;
    // The zone ID.
    // 
    // >  Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
