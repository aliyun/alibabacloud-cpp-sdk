// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeLifecycleHooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecycleHooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleHookIds, lifecycleHookIds_);
      DARABONBA_PTR_TO_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecycleHooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleHookIds, lifecycleHookIds_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DescribeLifecycleHooksRequest() = default ;
    DescribeLifecycleHooksRequest(const DescribeLifecycleHooksRequest &) = default ;
    DescribeLifecycleHooksRequest(DescribeLifecycleHooksRequest &&) = default ;
    DescribeLifecycleHooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecycleHooksRequest() = default ;
    DescribeLifecycleHooksRequest& operator=(const DescribeLifecycleHooksRequest &) = default ;
    DescribeLifecycleHooksRequest& operator=(DescribeLifecycleHooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lifecycleHookIds_ == nullptr
        && return this->lifecycleHookName_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->scalingGroupId_ == nullptr; };
    // lifecycleHookIds Field Functions 
    bool hasLifecycleHookIds() const { return this->lifecycleHookIds_ != nullptr;};
    void deleteLifecycleHookIds() { this->lifecycleHookIds_ = nullptr;};
    inline const vector<string> & lifecycleHookIds() const { DARABONBA_PTR_GET_CONST(lifecycleHookIds_, vector<string>) };
    inline vector<string> lifecycleHookIds() { DARABONBA_PTR_GET(lifecycleHookIds_, vector<string>) };
    inline DescribeLifecycleHooksRequest& setLifecycleHookIds(const vector<string> & lifecycleHookIds) { DARABONBA_PTR_SET_VALUE(lifecycleHookIds_, lifecycleHookIds) };
    inline DescribeLifecycleHooksRequest& setLifecycleHookIds(vector<string> && lifecycleHookIds) { DARABONBA_PTR_SET_RVALUE(lifecycleHookIds_, lifecycleHookIds) };


    // lifecycleHookName Field Functions 
    bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
    void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
    inline string lifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
    inline DescribeLifecycleHooksRequest& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeLifecycleHooksRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLifecycleHooksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLifecycleHooksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLifecycleHooksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLifecycleHooksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeLifecycleHooksRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeLifecycleHooksRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The IDs of the lifecycle hooks that you want to query.
    std::shared_ptr<vector<string>> lifecycleHookIds_ = nullptr;
    // The name of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 50.
    // 
    // Default value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
