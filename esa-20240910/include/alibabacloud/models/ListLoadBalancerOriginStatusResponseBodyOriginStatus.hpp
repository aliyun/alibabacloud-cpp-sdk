// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSRESPONSEBODYORIGINSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSRESPONSEBODYORIGINSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancerOriginStatusResponseBodyOriginStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancerOriginStatusResponseBodyOriginStatus& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(OriginId, originId_);
      DARABONBA_PTR_TO_JSON(PoolId, poolId_);
      DARABONBA_PTR_TO_JSON(PoolType, poolType_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancerOriginStatusResponseBodyOriginStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(OriginId, originId_);
      DARABONBA_PTR_FROM_JSON(PoolId, poolId_);
      DARABONBA_PTR_FROM_JSON(PoolType, poolType_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListLoadBalancerOriginStatusResponseBodyOriginStatus() = default ;
    ListLoadBalancerOriginStatusResponseBodyOriginStatus(const ListLoadBalancerOriginStatusResponseBodyOriginStatus &) = default ;
    ListLoadBalancerOriginStatusResponseBodyOriginStatus(ListLoadBalancerOriginStatusResponseBodyOriginStatus &&) = default ;
    ListLoadBalancerOriginStatusResponseBodyOriginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancerOriginStatusResponseBodyOriginStatus() = default ;
    ListLoadBalancerOriginStatusResponseBodyOriginStatus& operator=(const ListLoadBalancerOriginStatusResponseBodyOriginStatus &) = default ;
    ListLoadBalancerOriginStatusResponseBodyOriginStatus& operator=(ListLoadBalancerOriginStatusResponseBodyOriginStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancerId_ != nullptr
        && this->originId_ != nullptr && this->poolId_ != nullptr && this->poolType_ != nullptr && this->reason_ != nullptr && this->status_ != nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline int64_t loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, 0L) };
    inline ListLoadBalancerOriginStatusResponseBodyOriginStatus& setLoadBalancerId(int64_t loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // originId Field Functions 
    bool hasOriginId() const { return this->originId_ != nullptr;};
    void deleteOriginId() { this->originId_ = nullptr;};
    inline int64_t originId() const { DARABONBA_PTR_GET_DEFAULT(originId_, 0L) };
    inline ListLoadBalancerOriginStatusResponseBodyOriginStatus& setOriginId(int64_t originId) { DARABONBA_PTR_SET_VALUE(originId_, originId) };


    // poolId Field Functions 
    bool hasPoolId() const { return this->poolId_ != nullptr;};
    void deletePoolId() { this->poolId_ = nullptr;};
    inline int64_t poolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, 0L) };
    inline ListLoadBalancerOriginStatusResponseBodyOriginStatus& setPoolId(int64_t poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


    // poolType Field Functions 
    bool hasPoolType() const { return this->poolType_ != nullptr;};
    void deletePoolType() { this->poolType_ = nullptr;};
    inline string poolType() const { DARABONBA_PTR_GET_DEFAULT(poolType_, "") };
    inline ListLoadBalancerOriginStatusResponseBodyOriginStatus& setPoolType(string poolType) { DARABONBA_PTR_SET_VALUE(poolType_, poolType) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListLoadBalancerOriginStatusResponseBodyOriginStatus& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLoadBalancerOriginStatusResponseBodyOriginStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // ID of the load balancer.
    std::shared_ptr<int64_t> loadBalancerId_ = nullptr;
    // ID of the origin.
    std::shared_ptr<int64_t> originId_ = nullptr;
    // ID of the source address pool.
    std::shared_ptr<int64_t> poolId_ = nullptr;
    // The origin pool to which the source belongs, under this load balancer. Only \\"default_pool\\" (default address pool) will be displayed; other types will return an empty string.
    std::shared_ptr<string> poolType_ = nullptr;
    // Reason for the probe failure.
    std::shared_ptr<string> reason_ = nullptr;
    // Status of the origin:
    // - Healthy(healthy): The probe result is available.
    // - Unhealthy(unhealthy): The probe result is unavailable.
    // - Unknown(unknown): Unknown, the monitor has not yet probed.
    // - Undetected(undetected): The load balancer to which the origin belongs is not bound to a monitor.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
