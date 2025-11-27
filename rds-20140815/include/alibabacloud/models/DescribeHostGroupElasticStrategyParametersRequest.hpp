// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTGROUPELASTICSTRATEGYPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTGROUPELASTICSTRATEGYPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHostGroupElasticStrategyParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostGroupElasticStrategyParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupName, dedicatedHostGroupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostGroupElasticStrategyParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupName, dedicatedHostGroupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeHostGroupElasticStrategyParametersRequest() = default ;
    DescribeHostGroupElasticStrategyParametersRequest(const DescribeHostGroupElasticStrategyParametersRequest &) = default ;
    DescribeHostGroupElasticStrategyParametersRequest(DescribeHostGroupElasticStrategyParametersRequest &&) = default ;
    DescribeHostGroupElasticStrategyParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostGroupElasticStrategyParametersRequest() = default ;
    DescribeHostGroupElasticStrategyParametersRequest& operator=(const DescribeHostGroupElasticStrategyParametersRequest &) = default ;
    DescribeHostGroupElasticStrategyParametersRequest& operator=(DescribeHostGroupElasticStrategyParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostGroupName_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // dedicatedHostGroupName Field Functions 
    bool hasDedicatedHostGroupName() const { return this->dedicatedHostGroupName_ != nullptr;};
    void deleteDedicatedHostGroupName() { this->dedicatedHostGroupName_ = nullptr;};
    inline string dedicatedHostGroupName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupName_, "") };
    inline DescribeHostGroupElasticStrategyParametersRequest& setDedicatedHostGroupName(string dedicatedHostGroupName) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupName_, dedicatedHostGroupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHostGroupElasticStrategyParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHostGroupElasticStrategyParametersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeHostGroupElasticStrategyParametersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The name of the dedicated cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dedicatedHostGroupName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
