// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATGATEWAYCAPACITYRESERVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATGATEWAYCAPACITYRESERVATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyNatGatewayCapacityReservationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatGatewayCapacityReservationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetCapacityReservation, resetCapacityReservation_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatGatewayCapacityReservationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NatGatewayCapacity, natGatewayCapacity_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetCapacityReservation, resetCapacityReservation_);
    };
    ModifyNatGatewayCapacityReservationRequest() = default ;
    ModifyNatGatewayCapacityReservationRequest(const ModifyNatGatewayCapacityReservationRequest &) = default ;
    ModifyNatGatewayCapacityReservationRequest(ModifyNatGatewayCapacityReservationRequest &&) = default ;
    ModifyNatGatewayCapacityReservationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatGatewayCapacityReservationRequest() = default ;
    ModifyNatGatewayCapacityReservationRequest& operator=(const ModifyNatGatewayCapacityReservationRequest &) = default ;
    ModifyNatGatewayCapacityReservationRequest& operator=(ModifyNatGatewayCapacityReservationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The number of LCUs reserved per hour.
      shared_ptr<double> capacityUnits_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->natGatewayCapacity_ == nullptr && this->natGatewayId_ == nullptr && this->regionId_ == nullptr && this->resetCapacityReservation_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyNatGatewayCapacityReservationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ModifyNatGatewayCapacityReservationRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // natGatewayCapacity Field Functions 
    bool hasNatGatewayCapacity() const { return this->natGatewayCapacity_ != nullptr;};
    void deleteNatGatewayCapacity() { this->natGatewayCapacity_ = nullptr;};
    inline const ModifyNatGatewayCapacityReservationRequest::NatGatewayCapacity & getNatGatewayCapacity() const { DARABONBA_PTR_GET_CONST(natGatewayCapacity_, ModifyNatGatewayCapacityReservationRequest::NatGatewayCapacity) };
    inline ModifyNatGatewayCapacityReservationRequest::NatGatewayCapacity getNatGatewayCapacity() { DARABONBA_PTR_GET(natGatewayCapacity_, ModifyNatGatewayCapacityReservationRequest::NatGatewayCapacity) };
    inline ModifyNatGatewayCapacityReservationRequest& setNatGatewayCapacity(const ModifyNatGatewayCapacityReservationRequest::NatGatewayCapacity & natGatewayCapacity) { DARABONBA_PTR_SET_VALUE(natGatewayCapacity_, natGatewayCapacity) };
    inline ModifyNatGatewayCapacityReservationRequest& setNatGatewayCapacity(ModifyNatGatewayCapacityReservationRequest::NatGatewayCapacity && natGatewayCapacity) { DARABONBA_PTR_SET_RVALUE(natGatewayCapacity_, natGatewayCapacity) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatGatewayCapacityReservationRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNatGatewayCapacityReservationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetCapacityReservation Field Functions 
    bool hasResetCapacityReservation() const { return this->resetCapacityReservation_ != nullptr;};
    void deleteResetCapacityReservation() { this->resetCapacityReservation_ = nullptr;};
    inline string getResetCapacityReservation() const { DARABONBA_PTR_GET_DEFAULT(resetCapacityReservation_, "") };
    inline ModifyNatGatewayCapacityReservationRequest& setResetCapacityReservation(string resetCapacityReservation) { DARABONBA_PTR_SET_VALUE(resetCapacityReservation_, resetCapacityReservation) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters. Note: If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // - true: Performs a dry run without upgrading the Internet NAT gateway. The system checks whether your AccessKey pair is valid, the authorization of the Resource Access Management (RAM) user, and whether the required parameters are specified. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // - false (default): Sends a Normal request. If the request passes the dry run, a 2xx HTTP status code is returned and the Internet NAT gateway is upgraded.
    shared_ptr<string> dryRun_ {};
    // The number of capacity units (CUs) for the NAT resource reservation.
    shared_ptr<ModifyNatGatewayCapacityReservationRequest::NatGatewayCapacity> natGatewayCapacity_ {};
    // The instance ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The region ID of the NAT gateway.
    shared_ptr<string> regionId_ {};
    // Specifies whether to cancel the resource reservation. Valid values:
    // - **true**: Cancels the resource reservation.
    // - **false** (default): Does not cancel the resource reservation. You do not need to specify this parameter when you create or modify a resource reservation.
    shared_ptr<string> resetCapacityReservation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
