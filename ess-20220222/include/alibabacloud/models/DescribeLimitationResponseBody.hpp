// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIMITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIMITATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeLimitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLimitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxNumberOfAlbServerGroup, maxNumberOfAlbServerGroup_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfDBInstances, maxNumberOfDBInstances_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfLifecycleHooks, maxNumberOfLifecycleHooks_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfLoadBalancers, maxNumberOfLoadBalancers_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfMaxSize, maxNumberOfMaxSize_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfMinSize, maxNumberOfMinSize_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfNlbServerGroup, maxNumberOfNlbServerGroup_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfNotificationConfigurations, maxNumberOfNotificationConfigurations_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfScalingConfigurations, maxNumberOfScalingConfigurations_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfScalingGroups, maxNumberOfScalingGroups_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfScalingInstances, maxNumberOfScalingInstances_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfScalingRules, maxNumberOfScalingRules_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfScheduledTasks, maxNumberOfScheduledTasks_);
      DARABONBA_PTR_TO_JSON(MaxNumberOfVServerGroups, maxNumberOfVServerGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLimitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxNumberOfAlbServerGroup, maxNumberOfAlbServerGroup_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfDBInstances, maxNumberOfDBInstances_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfLifecycleHooks, maxNumberOfLifecycleHooks_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfLoadBalancers, maxNumberOfLoadBalancers_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfMaxSize, maxNumberOfMaxSize_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfMinSize, maxNumberOfMinSize_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfNlbServerGroup, maxNumberOfNlbServerGroup_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfNotificationConfigurations, maxNumberOfNotificationConfigurations_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfScalingConfigurations, maxNumberOfScalingConfigurations_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfScalingGroups, maxNumberOfScalingGroups_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfScalingInstances, maxNumberOfScalingInstances_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfScalingRules, maxNumberOfScalingRules_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfScheduledTasks, maxNumberOfScheduledTasks_);
      DARABONBA_PTR_FROM_JSON(MaxNumberOfVServerGroups, maxNumberOfVServerGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLimitationResponseBody() = default ;
    DescribeLimitationResponseBody(const DescribeLimitationResponseBody &) = default ;
    DescribeLimitationResponseBody(DescribeLimitationResponseBody &&) = default ;
    DescribeLimitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLimitationResponseBody() = default ;
    DescribeLimitationResponseBody& operator=(const DescribeLimitationResponseBody &) = default ;
    DescribeLimitationResponseBody& operator=(DescribeLimitationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxNumberOfAlbServerGroup_ != nullptr
        && this->maxNumberOfDBInstances_ != nullptr && this->maxNumberOfLifecycleHooks_ != nullptr && this->maxNumberOfLoadBalancers_ != nullptr && this->maxNumberOfMaxSize_ != nullptr && this->maxNumberOfMinSize_ != nullptr
        && this->maxNumberOfNlbServerGroup_ != nullptr && this->maxNumberOfNotificationConfigurations_ != nullptr && this->maxNumberOfScalingConfigurations_ != nullptr && this->maxNumberOfScalingGroups_ != nullptr && this->maxNumberOfScalingInstances_ != nullptr
        && this->maxNumberOfScalingRules_ != nullptr && this->maxNumberOfScheduledTasks_ != nullptr && this->maxNumberOfVServerGroups_ != nullptr && this->requestId_ != nullptr; };
    // maxNumberOfAlbServerGroup Field Functions 
    bool hasMaxNumberOfAlbServerGroup() const { return this->maxNumberOfAlbServerGroup_ != nullptr;};
    void deleteMaxNumberOfAlbServerGroup() { this->maxNumberOfAlbServerGroup_ = nullptr;};
    inline int32_t maxNumberOfAlbServerGroup() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfAlbServerGroup_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfAlbServerGroup(int32_t maxNumberOfAlbServerGroup) { DARABONBA_PTR_SET_VALUE(maxNumberOfAlbServerGroup_, maxNumberOfAlbServerGroup) };


    // maxNumberOfDBInstances Field Functions 
    bool hasMaxNumberOfDBInstances() const { return this->maxNumberOfDBInstances_ != nullptr;};
    void deleteMaxNumberOfDBInstances() { this->maxNumberOfDBInstances_ = nullptr;};
    inline int32_t maxNumberOfDBInstances() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfDBInstances_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfDBInstances(int32_t maxNumberOfDBInstances) { DARABONBA_PTR_SET_VALUE(maxNumberOfDBInstances_, maxNumberOfDBInstances) };


    // maxNumberOfLifecycleHooks Field Functions 
    bool hasMaxNumberOfLifecycleHooks() const { return this->maxNumberOfLifecycleHooks_ != nullptr;};
    void deleteMaxNumberOfLifecycleHooks() { this->maxNumberOfLifecycleHooks_ = nullptr;};
    inline int32_t maxNumberOfLifecycleHooks() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfLifecycleHooks_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfLifecycleHooks(int32_t maxNumberOfLifecycleHooks) { DARABONBA_PTR_SET_VALUE(maxNumberOfLifecycleHooks_, maxNumberOfLifecycleHooks) };


    // maxNumberOfLoadBalancers Field Functions 
    bool hasMaxNumberOfLoadBalancers() const { return this->maxNumberOfLoadBalancers_ != nullptr;};
    void deleteMaxNumberOfLoadBalancers() { this->maxNumberOfLoadBalancers_ = nullptr;};
    inline int32_t maxNumberOfLoadBalancers() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfLoadBalancers_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfLoadBalancers(int32_t maxNumberOfLoadBalancers) { DARABONBA_PTR_SET_VALUE(maxNumberOfLoadBalancers_, maxNumberOfLoadBalancers) };


    // maxNumberOfMaxSize Field Functions 
    bool hasMaxNumberOfMaxSize() const { return this->maxNumberOfMaxSize_ != nullptr;};
    void deleteMaxNumberOfMaxSize() { this->maxNumberOfMaxSize_ = nullptr;};
    inline int32_t maxNumberOfMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfMaxSize_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfMaxSize(int32_t maxNumberOfMaxSize) { DARABONBA_PTR_SET_VALUE(maxNumberOfMaxSize_, maxNumberOfMaxSize) };


    // maxNumberOfMinSize Field Functions 
    bool hasMaxNumberOfMinSize() const { return this->maxNumberOfMinSize_ != nullptr;};
    void deleteMaxNumberOfMinSize() { this->maxNumberOfMinSize_ = nullptr;};
    inline int32_t maxNumberOfMinSize() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfMinSize_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfMinSize(int32_t maxNumberOfMinSize) { DARABONBA_PTR_SET_VALUE(maxNumberOfMinSize_, maxNumberOfMinSize) };


    // maxNumberOfNlbServerGroup Field Functions 
    bool hasMaxNumberOfNlbServerGroup() const { return this->maxNumberOfNlbServerGroup_ != nullptr;};
    void deleteMaxNumberOfNlbServerGroup() { this->maxNumberOfNlbServerGroup_ = nullptr;};
    inline int32_t maxNumberOfNlbServerGroup() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfNlbServerGroup_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfNlbServerGroup(int32_t maxNumberOfNlbServerGroup) { DARABONBA_PTR_SET_VALUE(maxNumberOfNlbServerGroup_, maxNumberOfNlbServerGroup) };


    // maxNumberOfNotificationConfigurations Field Functions 
    bool hasMaxNumberOfNotificationConfigurations() const { return this->maxNumberOfNotificationConfigurations_ != nullptr;};
    void deleteMaxNumberOfNotificationConfigurations() { this->maxNumberOfNotificationConfigurations_ = nullptr;};
    inline int32_t maxNumberOfNotificationConfigurations() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfNotificationConfigurations_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfNotificationConfigurations(int32_t maxNumberOfNotificationConfigurations) { DARABONBA_PTR_SET_VALUE(maxNumberOfNotificationConfigurations_, maxNumberOfNotificationConfigurations) };


    // maxNumberOfScalingConfigurations Field Functions 
    bool hasMaxNumberOfScalingConfigurations() const { return this->maxNumberOfScalingConfigurations_ != nullptr;};
    void deleteMaxNumberOfScalingConfigurations() { this->maxNumberOfScalingConfigurations_ = nullptr;};
    inline int32_t maxNumberOfScalingConfigurations() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfScalingConfigurations_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfScalingConfigurations(int32_t maxNumberOfScalingConfigurations) { DARABONBA_PTR_SET_VALUE(maxNumberOfScalingConfigurations_, maxNumberOfScalingConfigurations) };


    // maxNumberOfScalingGroups Field Functions 
    bool hasMaxNumberOfScalingGroups() const { return this->maxNumberOfScalingGroups_ != nullptr;};
    void deleteMaxNumberOfScalingGroups() { this->maxNumberOfScalingGroups_ = nullptr;};
    inline int32_t maxNumberOfScalingGroups() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfScalingGroups_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfScalingGroups(int32_t maxNumberOfScalingGroups) { DARABONBA_PTR_SET_VALUE(maxNumberOfScalingGroups_, maxNumberOfScalingGroups) };


    // maxNumberOfScalingInstances Field Functions 
    bool hasMaxNumberOfScalingInstances() const { return this->maxNumberOfScalingInstances_ != nullptr;};
    void deleteMaxNumberOfScalingInstances() { this->maxNumberOfScalingInstances_ = nullptr;};
    inline int32_t maxNumberOfScalingInstances() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfScalingInstances_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfScalingInstances(int32_t maxNumberOfScalingInstances) { DARABONBA_PTR_SET_VALUE(maxNumberOfScalingInstances_, maxNumberOfScalingInstances) };


    // maxNumberOfScalingRules Field Functions 
    bool hasMaxNumberOfScalingRules() const { return this->maxNumberOfScalingRules_ != nullptr;};
    void deleteMaxNumberOfScalingRules() { this->maxNumberOfScalingRules_ = nullptr;};
    inline int32_t maxNumberOfScalingRules() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfScalingRules_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfScalingRules(int32_t maxNumberOfScalingRules) { DARABONBA_PTR_SET_VALUE(maxNumberOfScalingRules_, maxNumberOfScalingRules) };


    // maxNumberOfScheduledTasks Field Functions 
    bool hasMaxNumberOfScheduledTasks() const { return this->maxNumberOfScheduledTasks_ != nullptr;};
    void deleteMaxNumberOfScheduledTasks() { this->maxNumberOfScheduledTasks_ = nullptr;};
    inline int32_t maxNumberOfScheduledTasks() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfScheduledTasks_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfScheduledTasks(int32_t maxNumberOfScheduledTasks) { DARABONBA_PTR_SET_VALUE(maxNumberOfScheduledTasks_, maxNumberOfScheduledTasks) };


    // maxNumberOfVServerGroups Field Functions 
    bool hasMaxNumberOfVServerGroups() const { return this->maxNumberOfVServerGroups_ != nullptr;};
    void deleteMaxNumberOfVServerGroups() { this->maxNumberOfVServerGroups_ = nullptr;};
    inline int32_t maxNumberOfVServerGroups() const { DARABONBA_PTR_GET_DEFAULT(maxNumberOfVServerGroups_, 0) };
    inline DescribeLimitationResponseBody& setMaxNumberOfVServerGroups(int32_t maxNumberOfVServerGroups) { DARABONBA_PTR_SET_VALUE(maxNumberOfVServerGroups_, maxNumberOfVServerGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLimitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of Application Load Balancer (ALB) server groups that can be attached to a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfAlbServerGroup_ = nullptr;
    // The maximum number of ApsaraDB RDS instances that can be associated with a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfDBInstances_ = nullptr;
    // The maximum number of lifecycle hooks that can be created in a scaling group.
    std::shared_ptr<int32_t> maxNumberOfLifecycleHooks_ = nullptr;
    // The maximum number of Classic Load Balancer (CLB, formerly known as SLB) instances that can be associated with a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfLoadBalancers_ = nullptr;
    // The maximum number of instances that can be contained in a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfMaxSize_ = nullptr;
    // The minimum number of instances that must be contained in a scaling group. The value of `MaxNumberOfMinSize` must be consistent with the value of `MaxNumberOfMaxSize`.
    std::shared_ptr<int32_t> maxNumberOfMinSize_ = nullptr;
    // The maximum number of Network Load Balancer (NLB) server groups that can be attached to a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfNlbServerGroup_ = nullptr;
    // The maximum number of notification rules that can be created in a scaling group.
    std::shared_ptr<int32_t> maxNumberOfNotificationConfigurations_ = nullptr;
    // The maximum number of scaling configurations that can be created in a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfScalingConfigurations_ = nullptr;
    // The maximum number of scaling groups that can be created in a region by using an Alibaba Cloud account.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfScalingGroups_ = nullptr;
    // The maximum number of Elastic Compute Service (ECS) instances or elastic container instances that can be automatically scaled in a scaling group at the same time.
    std::shared_ptr<int32_t> maxNumberOfScalingInstances_ = nullptr;
    // The maximum number of scaling rules that can be created in a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfScalingRules_ = nullptr;
    // The maximum number of scheduled tasks that can be created in a region by using an Alibaba Cloud account.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfScheduledTasks_ = nullptr;
    // The maximum number of CLB vServer groups that can be attached to a scaling group.
    // 
    // >  To view the quota or request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
    std::shared_ptr<int32_t> maxNumberOfVServerGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
