// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceConfigurationResponseBodyIpAddressAttributes.hpp>
#include <alibabacloud/models/GetResourceConfigurationResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_ANY_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(IpAddressAttributes, ipAddressAttributes_);
      DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_ANY_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(IpAddressAttributes, ipAddressAttributes_);
      DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetResourceConfigurationResponseBody() = default ;
    GetResourceConfigurationResponseBody(const GetResourceConfigurationResponseBody &) = default ;
    GetResourceConfigurationResponseBody(GetResourceConfigurationResponseBody &&) = default ;
    GetResourceConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationResponseBody() = default ;
    GetResourceConfigurationResponseBody& operator=(const GetResourceConfigurationResponseBody &) = default ;
    GetResourceConfigurationResponseBody& operator=(GetResourceConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->configuration_ == nullptr && return this->createTime_ == nullptr && return this->expireTime_ == nullptr && return this->ipAddressAttributes_ == nullptr && return this->ipAddresses_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr
        && return this->resourceType_ == nullptr && return this->tags_ == nullptr && return this->zoneId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetResourceConfigurationResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline     const Darabonba::Json & configuration() const { DARABONBA_GET(configuration_) };
    Darabonba::Json & configuration() { DARABONBA_GET(configuration_) };
    inline GetResourceConfigurationResponseBody& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
    inline GetResourceConfigurationResponseBody& setConfiguration(Darabonba::Json & configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetResourceConfigurationResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetResourceConfigurationResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ipAddressAttributes Field Functions 
    bool hasIpAddressAttributes() const { return this->ipAddressAttributes_ != nullptr;};
    void deleteIpAddressAttributes() { this->ipAddressAttributes_ = nullptr;};
    inline const vector<GetResourceConfigurationResponseBodyIpAddressAttributes> & ipAddressAttributes() const { DARABONBA_PTR_GET_CONST(ipAddressAttributes_, vector<GetResourceConfigurationResponseBodyIpAddressAttributes>) };
    inline vector<GetResourceConfigurationResponseBodyIpAddressAttributes> ipAddressAttributes() { DARABONBA_PTR_GET(ipAddressAttributes_, vector<GetResourceConfigurationResponseBodyIpAddressAttributes>) };
    inline GetResourceConfigurationResponseBody& setIpAddressAttributes(const vector<GetResourceConfigurationResponseBodyIpAddressAttributes> & ipAddressAttributes) { DARABONBA_PTR_SET_VALUE(ipAddressAttributes_, ipAddressAttributes) };
    inline GetResourceConfigurationResponseBody& setIpAddressAttributes(vector<GetResourceConfigurationResponseBodyIpAddressAttributes> && ipAddressAttributes) { DARABONBA_PTR_SET_RVALUE(ipAddressAttributes_, ipAddressAttributes) };


    // ipAddresses Field Functions 
    bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
    void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
    inline const vector<string> & ipAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
    inline vector<string> ipAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
    inline GetResourceConfigurationResponseBody& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
    inline GetResourceConfigurationResponseBody& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetResourceConfigurationResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetResourceConfigurationResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetResourceConfigurationResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetResourceConfigurationResponseBody& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceConfigurationResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetResourceConfigurationResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetResourceConfigurationResponseBodyTags>) };
    inline vector<GetResourceConfigurationResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetResourceConfigurationResponseBodyTags>) };
    inline GetResourceConfigurationResponseBody& setTags(const vector<GetResourceConfigurationResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetResourceConfigurationResponseBody& setTags(vector<GetResourceConfigurationResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetResourceConfigurationResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> accountId_ = nullptr;
    // The configurations of the resource.
    Darabonba::Json configuration_ = nullptr;
    // The time when the resource was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the resource expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The attributes of the IP address.
    std::shared_ptr<vector<GetResourceConfigurationResponseBodyIpAddressAttributes>> ipAddressAttributes_ = nullptr;
    // The IP addresses.
    // 
    // > Whether this parameter is returned is determined by the Alibaba Cloud service to which the resource belongs.
    std::shared_ptr<vector<string>> ipAddresses_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the resource belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<vector<GetResourceConfigurationResponseBodyTags>> tags_ = nullptr;
    // The zone ID of the resource.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
