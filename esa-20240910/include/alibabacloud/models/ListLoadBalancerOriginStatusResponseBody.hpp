// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancerOriginStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancerOriginStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OriginStatus, originStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancerOriginStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginStatus, originStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLoadBalancerOriginStatusResponseBody() = default ;
    ListLoadBalancerOriginStatusResponseBody(const ListLoadBalancerOriginStatusResponseBody &) = default ;
    ListLoadBalancerOriginStatusResponseBody(ListLoadBalancerOriginStatusResponseBody &&) = default ;
    ListLoadBalancerOriginStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancerOriginStatusResponseBody() = default ;
    ListLoadBalancerOriginStatusResponseBody& operator=(const ListLoadBalancerOriginStatusResponseBody &) = default ;
    ListLoadBalancerOriginStatusResponseBody& operator=(ListLoadBalancerOriginStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OriginStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginStatus& obj) { 
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(OriginId, originId_);
        DARABONBA_PTR_TO_JSON(PoolId, poolId_);
        DARABONBA_PTR_TO_JSON(PoolType, poolType_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, OriginStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(OriginId, originId_);
        DARABONBA_PTR_FROM_JSON(PoolId, poolId_);
        DARABONBA_PTR_FROM_JSON(PoolType, poolType_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      OriginStatus() = default ;
      OriginStatus(const OriginStatus &) = default ;
      OriginStatus(OriginStatus &&) = default ;
      OriginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginStatus() = default ;
      OriginStatus& operator=(const OriginStatus &) = default ;
      OriginStatus& operator=(OriginStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->originId_ == nullptr && this->poolId_ == nullptr && this->poolType_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr; };
      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline int64_t getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, 0L) };
      inline OriginStatus& setLoadBalancerId(int64_t loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // originId Field Functions 
      bool hasOriginId() const { return this->originId_ != nullptr;};
      void deleteOriginId() { this->originId_ = nullptr;};
      inline int64_t getOriginId() const { DARABONBA_PTR_GET_DEFAULT(originId_, 0L) };
      inline OriginStatus& setOriginId(int64_t originId) { DARABONBA_PTR_SET_VALUE(originId_, originId) };


      // poolId Field Functions 
      bool hasPoolId() const { return this->poolId_ != nullptr;};
      void deletePoolId() { this->poolId_ = nullptr;};
      inline int64_t getPoolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, 0L) };
      inline OriginStatus& setPoolId(int64_t poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


      // poolType Field Functions 
      bool hasPoolType() const { return this->poolType_ != nullptr;};
      void deletePoolType() { this->poolType_ = nullptr;};
      inline string getPoolType() const { DARABONBA_PTR_GET_DEFAULT(poolType_, "") };
      inline OriginStatus& setPoolType(string poolType) { DARABONBA_PTR_SET_VALUE(poolType_, poolType) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline OriginStatus& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline OriginStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // ID of the load balancer.
      shared_ptr<int64_t> loadBalancerId_ {};
      // ID of the origin.
      shared_ptr<int64_t> originId_ {};
      // ID of the source address pool.
      shared_ptr<int64_t> poolId_ {};
      // The origin pool to which the source belongs, under this load balancer. Only \\"default_pool\\" (default address pool) will be displayed; other types will return an empty string.
      shared_ptr<string> poolType_ {};
      // Reason for the probe failure.
      shared_ptr<string> reason_ {};
      // Status of the origin:
      // - Healthy(healthy): The probe result is available.
      // - Unhealthy(unhealthy): The probe result is unavailable.
      // - Unknown(unknown): Unknown, the monitor has not yet probed.
      // - Undetected(undetected): The load balancer to which the origin belongs is not bound to a monitor.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->originStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // originStatus Field Functions 
    bool hasOriginStatus() const { return this->originStatus_ != nullptr;};
    void deleteOriginStatus() { this->originStatus_ = nullptr;};
    inline const vector<ListLoadBalancerOriginStatusResponseBody::OriginStatus> & getOriginStatus() const { DARABONBA_PTR_GET_CONST(originStatus_, vector<ListLoadBalancerOriginStatusResponseBody::OriginStatus>) };
    inline vector<ListLoadBalancerOriginStatusResponseBody::OriginStatus> getOriginStatus() { DARABONBA_PTR_GET(originStatus_, vector<ListLoadBalancerOriginStatusResponseBody::OriginStatus>) };
    inline ListLoadBalancerOriginStatusResponseBody& setOriginStatus(const vector<ListLoadBalancerOriginStatusResponseBody::OriginStatus> & originStatus) { DARABONBA_PTR_SET_VALUE(originStatus_, originStatus) };
    inline ListLoadBalancerOriginStatusResponseBody& setOriginStatus(vector<ListLoadBalancerOriginStatusResponseBody::OriginStatus> && originStatus) { DARABONBA_PTR_SET_RVALUE(originStatus_, originStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancerOriginStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of origin statuses under the load balancer.
    shared_ptr<vector<ListLoadBalancerOriginStatusResponseBody::OriginStatus>> originStatus_ {};
    // Request ID, used for tracking the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
