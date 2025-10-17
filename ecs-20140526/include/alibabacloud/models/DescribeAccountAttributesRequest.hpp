// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAccountAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAccountAttributesRequest() = default ;
    DescribeAccountAttributesRequest(const DescribeAccountAttributesRequest &) = default ;
    DescribeAccountAttributesRequest(DescribeAccountAttributesRequest &&) = default ;
    DescribeAccountAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAttributesRequest() = default ;
    DescribeAccountAttributesRequest& operator=(const DescribeAccountAttributesRequest &) = default ;
    DescribeAccountAttributesRequest& operator=(DescribeAccountAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeName_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->zoneId_ == nullptr; };
    // attributeName Field Functions 
    bool hasAttributeName() const { return this->attributeName_ != nullptr;};
    void deleteAttributeName() { this->attributeName_ = nullptr;};
    inline const vector<string> & attributeName() const { DARABONBA_PTR_GET_CONST(attributeName_, vector<string>) };
    inline vector<string> attributeName() { DARABONBA_PTR_GET(attributeName_, vector<string>) };
    inline DescribeAccountAttributesRequest& setAttributeName(const vector<string> & attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };
    inline DescribeAccountAttributesRequest& setAttributeName(vector<string> && attributeName) { DARABONBA_PTR_SET_RVALUE(attributeName_, attributeName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAccountAttributesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccountAttributesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAccountAttributesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAccountAttributesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAccountAttributesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The type of resource quota N. Valid values of N: 1 to 8. Valid values:
    // 
    // *   instance-network-type: the available network types.
    // 
    // *   max-security-groups: the maximum number of security groups.
    // 
    // *   max-elastic-network-interfaces: the maximum number of ENIs.
    // 
    // *   max-postpaid-instance-vcpu-count: the maximum number of vCPUs for pay-as-you-go instances.
    // 
    // *   max-spot-instance-vcpu-count: the maximum number of vCPUs for spot instances.
    // 
    // *   used-postpaid-instance-vcpu-count: the number of vCPUs that have been allocated to pay-as-you-go instances.
    // 
    // *   used-spot-instance-vcpu-count: the number of vCPUs that have been allocated to spot instances.
    // 
    // *   max-postpaid-yundisk-capacity: the maximum capacity of pay-as-you-go data disks. (The value is deprecated.)
    // 
    // *   used-postpaid-yundisk-capacity: the capacity of pay-as-you-go data disks that have been created. (The value is deprecated.)
    // 
    // *   max-dedicated-hosts: the maximum number of dedicated hosts.
    // 
    // *   supported-postpaid-instance-types: the instance types of pay-as-you-go I/O optimized instances.
    // 
    // *   max-axt-command-count: the maximum number of Cloud Assistant commands.
    // 
    // *   max-axt-invocation-daily: the maximum number of Cloud Assistant command executions per day.
    // 
    // *   real-name-authentication: whether the account has completed the real-name verification.
    // 
    //     **
    // 
    //     **Note** To create an ECS instance in a region in the Chinese mainland, you must complete the real-name verification.
    // 
    // *   max-cloud-assistant-activation-count: the maximum number of activation codes that can be created to use to register managed instances.
    // 
    // This parameter is empty by default.
    std::shared_ptr<vector<string>> attributeName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent list of regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the zone in which the resource resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
