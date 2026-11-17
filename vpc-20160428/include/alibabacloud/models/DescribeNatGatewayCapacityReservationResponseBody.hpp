// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYCAPACITYRESERVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYCAPACITYRESERVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewayCapacityReservationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewayCapacityReservationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityReservationStatus, capacityReservationStatus_);
      DARABONBA_PTR_TO_JSON(DecreaseRequestsRemaining, decreaseRequestsRemaining_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewayCapacityReservationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityReservationStatus, capacityReservationStatus_);
      DARABONBA_PTR_FROM_JSON(DecreaseRequestsRemaining, decreaseRequestsRemaining_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatGatewayCapacityReservationResponseBody() = default ;
    DescribeNatGatewayCapacityReservationResponseBody(const DescribeNatGatewayCapacityReservationResponseBody &) = default ;
    DescribeNatGatewayCapacityReservationResponseBody(DescribeNatGatewayCapacityReservationResponseBody &&) = default ;
    DescribeNatGatewayCapacityReservationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewayCapacityReservationResponseBody() = default ;
    DescribeNatGatewayCapacityReservationResponseBody& operator=(const DescribeNatGatewayCapacityReservationResponseBody &) = default ;
    DescribeNatGatewayCapacityReservationResponseBody& operator=(DescribeNatGatewayCapacityReservationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatGatewayPerformanceValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatGatewayPerformanceValues& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(Cps, cps_);
        DARABONBA_PTR_TO_JSON(Pps, pps_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      };
      friend void from_json(const Darabonba::Json& j, NatGatewayPerformanceValues& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Cps, cps_);
        DARABONBA_PTR_FROM_JSON(Pps, pps_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      };
      NatGatewayPerformanceValues() = default ;
      NatGatewayPerformanceValues(const NatGatewayPerformanceValues &) = default ;
      NatGatewayPerformanceValues(NatGatewayPerformanceValues &&) = default ;
      NatGatewayPerformanceValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatGatewayPerformanceValues() = default ;
      NatGatewayPerformanceValues& operator=(const NatGatewayPerformanceValues &) = default ;
      NatGatewayPerformanceValues& operator=(NatGatewayPerformanceValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->cps_ == nullptr && this->pps_ == nullptr && this->sessionCount_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline NatGatewayPerformanceValues& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // cps Field Functions 
      bool hasCps() const { return this->cps_ != nullptr;};
      void deleteCps() { this->cps_ = nullptr;};
      inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
      inline NatGatewayPerformanceValues& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


      // pps Field Functions 
      bool hasPps() const { return this->pps_ != nullptr;};
      void deletePps() { this->pps_ = nullptr;};
      inline int32_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
      inline NatGatewayPerformanceValues& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int32_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0) };
      inline NatGatewayPerformanceValues& setSessionCount(int32_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    protected:
      // The bandwidth value. Unit: Gbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The number of new connections per second.
      shared_ptr<int32_t> cps_ {};
      // The number of packets per second.
      shared_ptr<int32_t> pps_ {};
      // The number of sessions.
      shared_ptr<int32_t> sessionCount_ {};
    };

    class NatGatewayCapacity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatGatewayCapacity& obj) { 
        DARABONBA_PTR_TO_JSON(CapacityUnits, capacityUnits_);
      };
      friend void from_json(const Darabonba::Json& j, NatGatewayCapacity& obj) { 
        DARABONBA_PTR_FROM_JSON(CapacityUnits, capacityUnits_);
      };
      NatGatewayCapacity() = default ;
      NatGatewayCapacity(const NatGatewayCapacity &) = default ;
      NatGatewayCapacity(NatGatewayCapacity &&) = default ;
      NatGatewayCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatGatewayCapacity() = default ;
      NatGatewayCapacity& operator=(const NatGatewayCapacity &) = default ;
      NatGatewayCapacity& operator=(NatGatewayCapacity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacityUnits_ == nullptr; };
      // capacityUnits Field Functions 
      bool hasCapacityUnits() const { return this->capacityUnits_ != nullptr;};
      void deleteCapacityUnits() { this->capacityUnits_ = nullptr;};
      inline double getCapacityUnits() const { DARABONBA_PTR_GET_DEFAULT(capacityUnits_, 0.0) };
      inline NatGatewayCapacity& setCapacityUnits(double capacityUnits) { DARABONBA_PTR_SET_VALUE(capacityUnits_, capacityUnits) };


    protected:
      // The number of load balancer capacity units (LCUs) reserved per hour.
      shared_ptr<double> capacityUnits_ {};
    };

    class CapacityReservationStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapacityReservationStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CapacityReservationStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      CapacityReservationStatus() = default ;
      CapacityReservationStatus(const CapacityReservationStatus &) = default ;
      CapacityReservationStatus(CapacityReservationStatus &&) = default ;
      CapacityReservationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapacityReservationStatus() = default ;
      CapacityReservationStatus& operator=(const CapacityReservationStatus &) = default ;
      CapacityReservationStatus& operator=(CapacityReservationStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reason_ == nullptr
        && this->status_ == nullptr; };
      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline CapacityReservationStatus& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CapacityReservationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The reason for the processing failure.
      shared_ptr<string> reason_ {};
      // The resource reservation status. Valid values:
      // 
      // - pending: The reservation is in progress.
      // 
      // - provisioned: The reservation is completed.
      // 
      // - failed: The reservation failed.
      // 
      // - deleting: The reservation is being deleted.
      // 
      // - deleted: The reservation is deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->capacityReservationStatus_ == nullptr
        && this->decreaseRequestsRemaining_ == nullptr && this->lastModifiedTime_ == nullptr && this->natGatewayCapacity_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayPerformanceValues_ == nullptr
        && this->requestId_ == nullptr; };
    // capacityReservationStatus Field Functions 
    bool hasCapacityReservationStatus() const { return this->capacityReservationStatus_ != nullptr;};
    void deleteCapacityReservationStatus() { this->capacityReservationStatus_ = nullptr;};
    inline const DescribeNatGatewayCapacityReservationResponseBody::CapacityReservationStatus & getCapacityReservationStatus() const { DARABONBA_PTR_GET_CONST(capacityReservationStatus_, DescribeNatGatewayCapacityReservationResponseBody::CapacityReservationStatus) };
    inline DescribeNatGatewayCapacityReservationResponseBody::CapacityReservationStatus getCapacityReservationStatus() { DARABONBA_PTR_GET(capacityReservationStatus_, DescribeNatGatewayCapacityReservationResponseBody::CapacityReservationStatus) };
    inline DescribeNatGatewayCapacityReservationResponseBody& setCapacityReservationStatus(const DescribeNatGatewayCapacityReservationResponseBody::CapacityReservationStatus & capacityReservationStatus) { DARABONBA_PTR_SET_VALUE(capacityReservationStatus_, capacityReservationStatus) };
    inline DescribeNatGatewayCapacityReservationResponseBody& setCapacityReservationStatus(DescribeNatGatewayCapacityReservationResponseBody::CapacityReservationStatus && capacityReservationStatus) { DARABONBA_PTR_SET_RVALUE(capacityReservationStatus_, capacityReservationStatus) };


    // decreaseRequestsRemaining Field Functions 
    bool hasDecreaseRequestsRemaining() const { return this->decreaseRequestsRemaining_ != nullptr;};
    void deleteDecreaseRequestsRemaining() { this->decreaseRequestsRemaining_ = nullptr;};
    inline string getDecreaseRequestsRemaining() const { DARABONBA_PTR_GET_DEFAULT(decreaseRequestsRemaining_, "") };
    inline DescribeNatGatewayCapacityReservationResponseBody& setDecreaseRequestsRemaining(string decreaseRequestsRemaining) { DARABONBA_PTR_SET_VALUE(decreaseRequestsRemaining_, decreaseRequestsRemaining) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline DescribeNatGatewayCapacityReservationResponseBody& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // natGatewayCapacity Field Functions 
    bool hasNatGatewayCapacity() const { return this->natGatewayCapacity_ != nullptr;};
    void deleteNatGatewayCapacity() { this->natGatewayCapacity_ = nullptr;};
    inline const DescribeNatGatewayCapacityReservationResponseBody::NatGatewayCapacity & getNatGatewayCapacity() const { DARABONBA_PTR_GET_CONST(natGatewayCapacity_, DescribeNatGatewayCapacityReservationResponseBody::NatGatewayCapacity) };
    inline DescribeNatGatewayCapacityReservationResponseBody::NatGatewayCapacity getNatGatewayCapacity() { DARABONBA_PTR_GET(natGatewayCapacity_, DescribeNatGatewayCapacityReservationResponseBody::NatGatewayCapacity) };
    inline DescribeNatGatewayCapacityReservationResponseBody& setNatGatewayCapacity(const DescribeNatGatewayCapacityReservationResponseBody::NatGatewayCapacity & natGatewayCapacity) { DARABONBA_PTR_SET_VALUE(natGatewayCapacity_, natGatewayCapacity) };
    inline DescribeNatGatewayCapacityReservationResponseBody& setNatGatewayCapacity(DescribeNatGatewayCapacityReservationResponseBody::NatGatewayCapacity && natGatewayCapacity) { DARABONBA_PTR_SET_RVALUE(natGatewayCapacity_, natGatewayCapacity) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewayCapacityReservationResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayPerformanceValues Field Functions 
    bool hasNatGatewayPerformanceValues() const { return this->natGatewayPerformanceValues_ != nullptr;};
    void deleteNatGatewayPerformanceValues() { this->natGatewayPerformanceValues_ = nullptr;};
    inline const DescribeNatGatewayCapacityReservationResponseBody::NatGatewayPerformanceValues & getNatGatewayPerformanceValues() const { DARABONBA_PTR_GET_CONST(natGatewayPerformanceValues_, DescribeNatGatewayCapacityReservationResponseBody::NatGatewayPerformanceValues) };
    inline DescribeNatGatewayCapacityReservationResponseBody::NatGatewayPerformanceValues getNatGatewayPerformanceValues() { DARABONBA_PTR_GET(natGatewayPerformanceValues_, DescribeNatGatewayCapacityReservationResponseBody::NatGatewayPerformanceValues) };
    inline DescribeNatGatewayCapacityReservationResponseBody& setNatGatewayPerformanceValues(const DescribeNatGatewayCapacityReservationResponseBody::NatGatewayPerformanceValues & natGatewayPerformanceValues) { DARABONBA_PTR_SET_VALUE(natGatewayPerformanceValues_, natGatewayPerformanceValues) };
    inline DescribeNatGatewayCapacityReservationResponseBody& setNatGatewayPerformanceValues(DescribeNatGatewayCapacityReservationResponseBody::NatGatewayPerformanceValues && natGatewayPerformanceValues) { DARABONBA_PTR_SET_RVALUE(natGatewayPerformanceValues_, natGatewayPerformanceValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewayCapacityReservationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The resource reservation status.
    shared_ptr<DescribeNatGatewayCapacityReservationResponseBody::CapacityReservationStatus> capacityReservationStatus_ {};
    // The remaining number of times that you can downgrade or cancel the resource reservation.
    shared_ptr<string> decreaseRequestsRemaining_ {};
    // The time when the resource reservation was last modified.
    shared_ptr<int64_t> lastModifiedTime_ {};
    // The number of capacity units (CUs) reserved for the NAT gateway.
    shared_ptr<DescribeNatGatewayCapacityReservationResponseBody::NatGatewayCapacity> natGatewayCapacity_ {};
    // The ID of the NAT gateway to query.
    shared_ptr<string> natGatewayId_ {};
    // The performance metrics of the NAT gateway resource reservation.
    shared_ptr<DescribeNatGatewayCapacityReservationResponseBody::NatGatewayPerformanceValues> natGatewayPerformanceValues_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
