// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALCULATENATGATEWAYCAPACITYUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CALCULATENATGATEWAYCAPACITYUNITSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CalculateNatGatewayCapacityUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CalculateNatGatewayCapacityUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValues_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CalculateNatGatewayCapacityUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValues_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CalculateNatGatewayCapacityUnitsRequest() = default ;
    CalculateNatGatewayCapacityUnitsRequest(const CalculateNatGatewayCapacityUnitsRequest &) = default ;
    CalculateNatGatewayCapacityUnitsRequest(CalculateNatGatewayCapacityUnitsRequest &&) = default ;
    CalculateNatGatewayCapacityUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CalculateNatGatewayCapacityUnitsRequest() = default ;
    CalculateNatGatewayCapacityUnitsRequest& operator=(const CalculateNatGatewayCapacityUnitsRequest &) = default ;
    CalculateNatGatewayCapacityUnitsRequest& operator=(CalculateNatGatewayCapacityUnitsRequest &&) = default ;
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
      inline int32_t getCapacityUnits() const { DARABONBA_PTR_GET_DEFAULT(capacityUnits_, 0) };
      inline NatGatewayCapacity& setCapacityUnits(int32_t capacityUnits) { DARABONBA_PTR_SET_VALUE(capacityUnits_, capacityUnits) };


    protected:
      // The number of reserved LCUs per hour.
      shared_ptr<int32_t> capacityUnits_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->natGatewayCapacity_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayPerformanceValues_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CalculateNatGatewayCapacityUnitsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline CalculateNatGatewayCapacityUnitsRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // natGatewayCapacity Field Functions 
    bool hasNatGatewayCapacity() const { return this->natGatewayCapacity_ != nullptr;};
    void deleteNatGatewayCapacity() { this->natGatewayCapacity_ = nullptr;};
    inline const CalculateNatGatewayCapacityUnitsRequest::NatGatewayCapacity & getNatGatewayCapacity() const { DARABONBA_PTR_GET_CONST(natGatewayCapacity_, CalculateNatGatewayCapacityUnitsRequest::NatGatewayCapacity) };
    inline CalculateNatGatewayCapacityUnitsRequest::NatGatewayCapacity getNatGatewayCapacity() { DARABONBA_PTR_GET(natGatewayCapacity_, CalculateNatGatewayCapacityUnitsRequest::NatGatewayCapacity) };
    inline CalculateNatGatewayCapacityUnitsRequest& setNatGatewayCapacity(const CalculateNatGatewayCapacityUnitsRequest::NatGatewayCapacity & natGatewayCapacity) { DARABONBA_PTR_SET_VALUE(natGatewayCapacity_, natGatewayCapacity) };
    inline CalculateNatGatewayCapacityUnitsRequest& setNatGatewayCapacity(CalculateNatGatewayCapacityUnitsRequest::NatGatewayCapacity && natGatewayCapacity) { DARABONBA_PTR_SET_RVALUE(natGatewayCapacity_, natGatewayCapacity) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CalculateNatGatewayCapacityUnitsRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayPerformanceValues Field Functions 
    bool hasNatGatewayPerformanceValues() const { return this->natGatewayPerformanceValues_ != nullptr;};
    void deleteNatGatewayPerformanceValues() { this->natGatewayPerformanceValues_ = nullptr;};
    inline const CalculateNatGatewayCapacityUnitsRequest::NatGatewayPerformanceValues & getNatGatewayPerformanceValues() const { DARABONBA_PTR_GET_CONST(natGatewayPerformanceValues_, CalculateNatGatewayCapacityUnitsRequest::NatGatewayPerformanceValues) };
    inline CalculateNatGatewayCapacityUnitsRequest::NatGatewayPerformanceValues getNatGatewayPerformanceValues() { DARABONBA_PTR_GET(natGatewayPerformanceValues_, CalculateNatGatewayCapacityUnitsRequest::NatGatewayPerformanceValues) };
    inline CalculateNatGatewayCapacityUnitsRequest& setNatGatewayPerformanceValues(const CalculateNatGatewayCapacityUnitsRequest::NatGatewayPerformanceValues & natGatewayPerformanceValues) { DARABONBA_PTR_SET_VALUE(natGatewayPerformanceValues_, natGatewayPerformanceValues) };
    inline CalculateNatGatewayCapacityUnitsRequest& setNatGatewayPerformanceValues(CalculateNatGatewayCapacityUnitsRequest::NatGatewayPerformanceValues && natGatewayPerformanceValues) { DARABONBA_PTR_SET_RVALUE(natGatewayPerformanceValues_, natGatewayPerformanceValues) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CalculateNatGatewayCapacityUnitsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. Note: If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - true: sends the request without upgrading the Internet NAT gateway. The system checks whether your AccessKey pair is valid, the authorization of the Resource Access Management (RAM) user, and whether the required parameters are specified. If the request fails the check, an error message is returned. If the request passes the check, the DryRunOperation error code is returned.
    // - false (default value): sends a normal request. If the request passes the check, a 2xx HTTP status code is returned and the Internet NAT gateway is directly upgraded.
    shared_ptr<string> dryRun_ {};
    // The details of the reserved capacity units (CUs) to be calculated.
    shared_ptr<CalculateNatGatewayCapacityUnitsRequest::NatGatewayCapacity> natGatewayCapacity_ {};
    // The instance ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The details of the resource reservation metrics to be calculated.
    shared_ptr<CalculateNatGatewayCapacityUnitsRequest::NatGatewayPerformanceValues> natGatewayPerformanceValues_ {};
    // The region ID of the NAT gateway.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
