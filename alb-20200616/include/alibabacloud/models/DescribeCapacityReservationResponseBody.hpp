// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class DescribeCapacityReservationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityReservationState, capacityReservationState_);
      DARABONBA_PTR_TO_JSON(DecreaseRequestsRemaining, decreaseRequestsRemaining_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(MinimumLoadBalancerCapacity, minimumLoadBalancerCapacity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityReservationState, capacityReservationState_);
      DARABONBA_PTR_FROM_JSON(DecreaseRequestsRemaining, decreaseRequestsRemaining_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(MinimumLoadBalancerCapacity, minimumLoadBalancerCapacity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCapacityReservationResponseBody() = default ;
    DescribeCapacityReservationResponseBody(const DescribeCapacityReservationResponseBody &) = default ;
    DescribeCapacityReservationResponseBody(DescribeCapacityReservationResponseBody &&) = default ;
    DescribeCapacityReservationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationResponseBody() = default ;
    DescribeCapacityReservationResponseBody& operator=(const DescribeCapacityReservationResponseBody &) = default ;
    DescribeCapacityReservationResponseBody& operator=(DescribeCapacityReservationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MinimumLoadBalancerCapacity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MinimumLoadBalancerCapacity& obj) { 
        DARABONBA_PTR_TO_JSON(CapacityUnits, capacityUnits_);
      };
      friend void from_json(const Darabonba::Json& j, MinimumLoadBalancerCapacity& obj) { 
        DARABONBA_PTR_FROM_JSON(CapacityUnits, capacityUnits_);
      };
      MinimumLoadBalancerCapacity() = default ;
      MinimumLoadBalancerCapacity(const MinimumLoadBalancerCapacity &) = default ;
      MinimumLoadBalancerCapacity(MinimumLoadBalancerCapacity &&) = default ;
      MinimumLoadBalancerCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MinimumLoadBalancerCapacity() = default ;
      MinimumLoadBalancerCapacity& operator=(const MinimumLoadBalancerCapacity &) = default ;
      MinimumLoadBalancerCapacity& operator=(MinimumLoadBalancerCapacity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacityUnits_ == nullptr; };
      // capacityUnits Field Functions 
      bool hasCapacityUnits() const { return this->capacityUnits_ != nullptr;};
      void deleteCapacityUnits() { this->capacityUnits_ = nullptr;};
      inline int32_t getCapacityUnits() const { DARABONBA_PTR_GET_DEFAULT(capacityUnits_, 0) };
      inline MinimumLoadBalancerCapacity& setCapacityUnits(int32_t capacityUnits) { DARABONBA_PTR_SET_VALUE(capacityUnits_, capacityUnits) };


    protected:
      shared_ptr<int32_t> capacityUnits_ {};
    };

    class CapacityReservationState : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapacityReservationState& obj) { 
        DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
        DARABONBA_PTR_TO_JSON(EffectiveCapacityUnits, effectiveCapacityUnits_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CapacityReservationState& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
        DARABONBA_PTR_FROM_JSON(EffectiveCapacityUnits, effectiveCapacityUnits_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      CapacityReservationState() = default ;
      CapacityReservationState(const CapacityReservationState &) = default ;
      CapacityReservationState(CapacityReservationState &&) = default ;
      CapacityReservationState(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapacityReservationState() = default ;
      CapacityReservationState& operator=(const CapacityReservationState &) = default ;
      CapacityReservationState& operator=(CapacityReservationState &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availabilityZone_ == nullptr
        && this->effectiveCapacityUnits_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr; };
      // availabilityZone Field Functions 
      bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
      void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
      inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
      inline CapacityReservationState& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


      // effectiveCapacityUnits Field Functions 
      bool hasEffectiveCapacityUnits() const { return this->effectiveCapacityUnits_ != nullptr;};
      void deleteEffectiveCapacityUnits() { this->effectiveCapacityUnits_ = nullptr;};
      inline double getEffectiveCapacityUnits() const { DARABONBA_PTR_GET_DEFAULT(effectiveCapacityUnits_, 0.0) };
      inline CapacityReservationState& setEffectiveCapacityUnits(double effectiveCapacityUnits) { DARABONBA_PTR_SET_VALUE(effectiveCapacityUnits_, effectiveCapacityUnits) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline CapacityReservationState& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CapacityReservationState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> availabilityZone_ {};
      shared_ptr<double> effectiveCapacityUnits_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->capacityReservationState_ == nullptr
        && this->decreaseRequestsRemaining_ == nullptr && this->lastModifiedTime_ == nullptr && this->minimumLoadBalancerCapacity_ == nullptr && this->requestId_ == nullptr; };
    // capacityReservationState Field Functions 
    bool hasCapacityReservationState() const { return this->capacityReservationState_ != nullptr;};
    void deleteCapacityReservationState() { this->capacityReservationState_ = nullptr;};
    inline const vector<DescribeCapacityReservationResponseBody::CapacityReservationState> & getCapacityReservationState() const { DARABONBA_PTR_GET_CONST(capacityReservationState_, vector<DescribeCapacityReservationResponseBody::CapacityReservationState>) };
    inline vector<DescribeCapacityReservationResponseBody::CapacityReservationState> getCapacityReservationState() { DARABONBA_PTR_GET(capacityReservationState_, vector<DescribeCapacityReservationResponseBody::CapacityReservationState>) };
    inline DescribeCapacityReservationResponseBody& setCapacityReservationState(const vector<DescribeCapacityReservationResponseBody::CapacityReservationState> & capacityReservationState) { DARABONBA_PTR_SET_VALUE(capacityReservationState_, capacityReservationState) };
    inline DescribeCapacityReservationResponseBody& setCapacityReservationState(vector<DescribeCapacityReservationResponseBody::CapacityReservationState> && capacityReservationState) { DARABONBA_PTR_SET_RVALUE(capacityReservationState_, capacityReservationState) };


    // decreaseRequestsRemaining Field Functions 
    bool hasDecreaseRequestsRemaining() const { return this->decreaseRequestsRemaining_ != nullptr;};
    void deleteDecreaseRequestsRemaining() { this->decreaseRequestsRemaining_ = nullptr;};
    inline int32_t getDecreaseRequestsRemaining() const { DARABONBA_PTR_GET_DEFAULT(decreaseRequestsRemaining_, 0) };
    inline DescribeCapacityReservationResponseBody& setDecreaseRequestsRemaining(int32_t decreaseRequestsRemaining) { DARABONBA_PTR_SET_VALUE(decreaseRequestsRemaining_, decreaseRequestsRemaining) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline DescribeCapacityReservationResponseBody& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // minimumLoadBalancerCapacity Field Functions 
    bool hasMinimumLoadBalancerCapacity() const { return this->minimumLoadBalancerCapacity_ != nullptr;};
    void deleteMinimumLoadBalancerCapacity() { this->minimumLoadBalancerCapacity_ = nullptr;};
    inline const DescribeCapacityReservationResponseBody::MinimumLoadBalancerCapacity & getMinimumLoadBalancerCapacity() const { DARABONBA_PTR_GET_CONST(minimumLoadBalancerCapacity_, DescribeCapacityReservationResponseBody::MinimumLoadBalancerCapacity) };
    inline DescribeCapacityReservationResponseBody::MinimumLoadBalancerCapacity getMinimumLoadBalancerCapacity() { DARABONBA_PTR_GET(minimumLoadBalancerCapacity_, DescribeCapacityReservationResponseBody::MinimumLoadBalancerCapacity) };
    inline DescribeCapacityReservationResponseBody& setMinimumLoadBalancerCapacity(const DescribeCapacityReservationResponseBody::MinimumLoadBalancerCapacity & minimumLoadBalancerCapacity) { DARABONBA_PTR_SET_VALUE(minimumLoadBalancerCapacity_, minimumLoadBalancerCapacity) };
    inline DescribeCapacityReservationResponseBody& setMinimumLoadBalancerCapacity(DescribeCapacityReservationResponseBody::MinimumLoadBalancerCapacity && minimumLoadBalancerCapacity) { DARABONBA_PTR_SET_RVALUE(minimumLoadBalancerCapacity_, minimumLoadBalancerCapacity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCapacityReservationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCapacityReservationResponseBody::CapacityReservationState>> capacityReservationState_ {};
    shared_ptr<int32_t> decreaseRequestsRemaining_ {};
    shared_ptr<string> lastModifiedTime_ {};
    shared_ptr<DescribeCapacityReservationResponseBody::MinimumLoadBalancerCapacity> minimumLoadBalancerCapacity_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
