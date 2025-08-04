// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModificationPriceRequestResourceSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeModificationPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModificationPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModificationPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    DescribeModificationPriceRequest() = default ;
    DescribeModificationPriceRequest(const DescribeModificationPriceRequest &) = default ;
    DescribeModificationPriceRequest(DescribeModificationPriceRequest &&) = default ;
    DescribeModificationPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModificationPriceRequest() = default ;
    DescribeModificationPriceRequest& operator=(const DescribeModificationPriceRequest &) = default ;
    DescribeModificationPriceRequest& operator=(DescribeModificationPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->promotionId_ != nullptr && this->regionId_ != nullptr && this->resellerOwnerUid_ != nullptr
        && this->resourceSpecs_ != nullptr && this->resourceType_ != nullptr && this->rootDiskSizeGib_ != nullptr && this->userDiskSizeGib_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeModificationPriceRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeModificationPriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeModificationPriceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribeModificationPriceRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeModificationPriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline DescribeModificationPriceRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceSpecs Field Functions 
    bool hasResourceSpecs() const { return this->resourceSpecs_ != nullptr;};
    void deleteResourceSpecs() { this->resourceSpecs_ = nullptr;};
    inline const vector<DescribeModificationPriceRequestResourceSpecs> & resourceSpecs() const { DARABONBA_PTR_GET_CONST(resourceSpecs_, vector<DescribeModificationPriceRequestResourceSpecs>) };
    inline vector<DescribeModificationPriceRequestResourceSpecs> resourceSpecs() { DARABONBA_PTR_GET(resourceSpecs_, vector<DescribeModificationPriceRequestResourceSpecs>) };
    inline DescribeModificationPriceRequest& setResourceSpecs(const vector<DescribeModificationPriceRequestResourceSpecs> & resourceSpecs) { DARABONBA_PTR_SET_VALUE(resourceSpecs_, resourceSpecs) };
    inline DescribeModificationPriceRequest& setResourceSpecs(vector<DescribeModificationPriceRequestResourceSpecs> && resourceSpecs) { DARABONBA_PTR_SET_RVALUE(resourceSpecs_, resourceSpecs) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeModificationPriceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t rootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline DescribeModificationPriceRequest& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline int32_t userDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(userDiskSizeGib_, 0) };
    inline DescribeModificationPriceRequest& setUserDiskSizeGib(int32_t userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    // The maximum public bandwidth. Unit: Mbit/s.
    // 
    // >  Valid values when PayByTraffic is set to PayByBandwidth: 10 to 1000.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The ID of either the monthly subscription cloud computer with unlimited hours or the premium bandwidth plan.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The specifications.
    // 
    // *   Valid values when you set `ResourceType` to `Desktop`:
    // 
    //     *   ecd.basic.small
    //     *   ecd.basic.large
    //     *   ecd.advanced.large
    //     *   ecd.advanced.xlarge
    //     *   ecd.performance.2xlarge
    //     *   ecd.graphics.xlarge
    //     *   ecd.graphics.2xlarge
    //     *   ecd.advanced.xlarge_s8d2
    //     *   ecd.advanced.xlarge_s8d7
    //     *   ecd.graphics.1g72c
    //     *   eds.general.2c2g
    //     *   eds.general.2c4g
    //     *   eds.general.2c8g
    //     *   eds.general.4c8g
    //     *   eds.general.4c16g
    //     *   eds.general.8c16g
    //     *   eds.general.8c32g
    //     *   eds.general.16c32g
    // 
    // *   You can skip this parameter if `ResourceType` is set to `NetworkPackage`.
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
    std::shared_ptr<vector<DescribeModificationPriceRequestResourceSpecs>> resourceSpecs_ = nullptr;
    // The resource type. The required parameters depend on the resource type.
    // 
    // *   When `ResourceType` is set to `Desktop`, the required parameters are `InstanceType`, `RootDiskSizeGib`, and `UserDiskSizeGib`.
    // *   When `ResourceType` is set to `NetworkPackage`, the required parameter is `Bandwidth`.
    // 
    // Valid values:
    // 
    // *   Desktop (default): cloud computers.
    // *   NetworkPackage: premium bandwidth plans.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> rootDiskSizeGib_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int32_t> userDiskSizeGib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
