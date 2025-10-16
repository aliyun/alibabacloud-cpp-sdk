// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDesktopSpecRequestResourceSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_TO_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_FROM_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    ModifyDesktopSpecRequest() = default ;
    ModifyDesktopSpecRequest(const ModifyDesktopSpecRequest &) = default ;
    ModifyDesktopSpecRequest(ModifyDesktopSpecRequest &&) = default ;
    ModifyDesktopSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopSpecRequest() = default ;
    ModifyDesktopSpecRequest& operator=(const ModifyDesktopSpecRequest &) = default ;
    ModifyDesktopSpecRequest& operator=(ModifyDesktopSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->desktopId_ == nullptr && return this->desktopType_ == nullptr && return this->promotionId_ == nullptr && return this->regionId_ == nullptr && return this->resellerOwnerUid_ == nullptr
        && return this->resourceSpecs_ == nullptr && return this->resourceType_ == nullptr && return this->rootDiskSizeGib_ == nullptr && return this->userDiskPerformanceLevel_ == nullptr && return this->userDiskSizeGib_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDesktopSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDesktopSpecRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline ModifyDesktopSpecRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyDesktopSpecRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline ModifyDesktopSpecRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceSpecs Field Functions 
    bool hasResourceSpecs() const { return this->resourceSpecs_ != nullptr;};
    void deleteResourceSpecs() { this->resourceSpecs_ = nullptr;};
    inline const vector<ModifyDesktopSpecRequestResourceSpecs> & resourceSpecs() const { DARABONBA_PTR_GET_CONST(resourceSpecs_, vector<ModifyDesktopSpecRequestResourceSpecs>) };
    inline vector<ModifyDesktopSpecRequestResourceSpecs> resourceSpecs() { DARABONBA_PTR_GET(resourceSpecs_, vector<ModifyDesktopSpecRequestResourceSpecs>) };
    inline ModifyDesktopSpecRequest& setResourceSpecs(const vector<ModifyDesktopSpecRequestResourceSpecs> & resourceSpecs) { DARABONBA_PTR_SET_VALUE(resourceSpecs_, resourceSpecs) };
    inline ModifyDesktopSpecRequest& setResourceSpecs(vector<ModifyDesktopSpecRequestResourceSpecs> && resourceSpecs) { DARABONBA_PTR_SET_RVALUE(resourceSpecs_, resourceSpecs) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ModifyDesktopSpecRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t rootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline ModifyDesktopSpecRequest& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskPerformanceLevel Field Functions 
    bool hasUserDiskPerformanceLevel() const { return this->userDiskPerformanceLevel_ != nullptr;};
    void deleteUserDiskPerformanceLevel() { this->userDiskPerformanceLevel_ = nullptr;};
    inline string userDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(userDiskPerformanceLevel_, "") };
    inline ModifyDesktopSpecRequest& setUserDiskPerformanceLevel(string userDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(userDiskPerformanceLevel_, userDiskPerformanceLevel) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline int32_t userDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(userDiskSizeGib_, 0) };
    inline ModifyDesktopSpecRequest& setUserDiskSizeGib(int32_t userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    // Specifies whether to enable the auto-payment feature.
    // 
    // Default value: true. Valid values:
    // 
    // *   true: enables the auto-payment feature.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     Make sure that you have sufficient balance in your Alibaba Cloud account. Otherwise, an exception occurs on your order.
    // 
    //     <!-- -->
    // 
    // *   false: disables the auto-payment feature. In this case, an order is generated, and no payment is automatically made.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     You can log on to the Elastic Desktop Service console and complete the payment based on the order ID on the Orders page.
    // 
    //     <!-- -->
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The ID of a cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The destination instance type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the instance types supported by cloud computers.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopType_ = nullptr;
    // The ID of the promotional activity.
    std::shared_ptr<string> promotionId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
    // The array of resource specification templates.
    std::shared_ptr<vector<ModifyDesktopSpecRequestResourceSpecs>> resourceSpecs_ = nullptr;
    // The resource type.
    // 
    // > This parameter is optional for non-subscribed cloud computers.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The size of the new system disk. Unit: GiB. Valid values: 80 to 500 GiB. The value must be a multiple of 10.
    std::shared_ptr<int32_t> rootDiskSizeGib_ = nullptr;
    // The performance level (PL) of the data disk. Default value: PL0.
    // 
    // Valid values:
    // 
    // *   PL1
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PL0
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PL3
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PL2
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> userDiskPerformanceLevel_ = nullptr;
    // The destination data disk size. Unit: GiB.
    // 
    // *   The data disk size of a non-graphical cloud computer ranges from 20 to 1020 GiB and must be a multiple of 10.
    // *   The data disk size of a graphical cloud computer ranges from 40 to 1020 GiB and must be a multiple of 10.
    std::shared_ptr<int32_t> userDiskSizeGib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
