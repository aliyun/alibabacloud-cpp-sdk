// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALCULATENATGATEWAYCAPACITYUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CALCULATENATGATEWAYCAPACITYUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CalculateNatGatewayCapacityUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CalculateNatGatewayCapacityUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_TO_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CalculateNatGatewayCapacityUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_FROM_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CalculateNatGatewayCapacityUnitsResponseBody() = default ;
    CalculateNatGatewayCapacityUnitsResponseBody(const CalculateNatGatewayCapacityUnitsResponseBody &) = default ;
    CalculateNatGatewayCapacityUnitsResponseBody(CalculateNatGatewayCapacityUnitsResponseBody &&) = default ;
    CalculateNatGatewayCapacityUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CalculateNatGatewayCapacityUnitsResponseBody() = default ;
    CalculateNatGatewayCapacityUnitsResponseBody& operator=(const CalculateNatGatewayCapacityUnitsResponseBody &) = default ;
    CalculateNatGatewayCapacityUnitsResponseBody& operator=(CalculateNatGatewayCapacityUnitsResponseBody &&) = default ;
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
      // The bandwidth. Unit: Gbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The maximum number of new connections per second.
      shared_ptr<int32_t> cps_ {};
      // The number of packets per second. Unit: pps.
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
      // The number of reserved LCUs per hour.
      shared_ptr<double> capacityUnits_ {};
    };

    virtual bool empty() const override { return this->natGatewayCapacity_ == nullptr
        && this->natGatewayPerformanceValues_ == nullptr && this->requestId_ == nullptr; };
    // natGatewayCapacity Field Functions 
    bool hasNatGatewayCapacity() const { return this->natGatewayCapacity_ != nullptr;};
    void deleteNatGatewayCapacity() { this->natGatewayCapacity_ = nullptr;};
    inline const CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayCapacity & getNatGatewayCapacity() const { DARABONBA_PTR_GET_CONST(natGatewayCapacity_, CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayCapacity) };
    inline CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayCapacity getNatGatewayCapacity() { DARABONBA_PTR_GET(natGatewayCapacity_, CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayCapacity) };
    inline CalculateNatGatewayCapacityUnitsResponseBody& setNatGatewayCapacity(const CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayCapacity & natGatewayCapacity) { DARABONBA_PTR_SET_VALUE(natGatewayCapacity_, natGatewayCapacity) };
    inline CalculateNatGatewayCapacityUnitsResponseBody& setNatGatewayCapacity(CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayCapacity && natGatewayCapacity) { DARABONBA_PTR_SET_RVALUE(natGatewayCapacity_, natGatewayCapacity) };


    // natGatewayPerformanceValues Field Functions 
    bool hasNatGatewayPerformanceValues() const { return this->natGatewayPerformanceValues_ != nullptr;};
    void deleteNatGatewayPerformanceValues() { this->natGatewayPerformanceValues_ = nullptr;};
    inline const CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayPerformanceValues & getNatGatewayPerformanceValues() const { DARABONBA_PTR_GET_CONST(natGatewayPerformanceValues_, CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayPerformanceValues) };
    inline CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayPerformanceValues getNatGatewayPerformanceValues() { DARABONBA_PTR_GET(natGatewayPerformanceValues_, CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayPerformanceValues) };
    inline CalculateNatGatewayCapacityUnitsResponseBody& setNatGatewayPerformanceValues(const CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayPerformanceValues & natGatewayPerformanceValues) { DARABONBA_PTR_SET_VALUE(natGatewayPerformanceValues_, natGatewayPerformanceValues) };
    inline CalculateNatGatewayCapacityUnitsResponseBody& setNatGatewayPerformanceValues(CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayPerformanceValues && natGatewayPerformanceValues) { DARABONBA_PTR_SET_RVALUE(natGatewayPerformanceValues_, natGatewayPerformanceValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CalculateNatGatewayCapacityUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the calculated equivalent reserved CUs.
    shared_ptr<CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayCapacity> natGatewayCapacity_ {};
    // The details of the calculated equivalent resource reservation metrics.
    shared_ptr<CalculateNatGatewayCapacityUnitsResponseBody::NatGatewayPerformanceValues> natGatewayPerformanceValues_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
