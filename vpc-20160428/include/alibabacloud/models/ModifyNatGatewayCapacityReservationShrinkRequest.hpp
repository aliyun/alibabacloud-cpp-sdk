// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATGATEWAYCAPACITYRESERVATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATGATEWAYCAPACITYRESERVATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyNatGatewayCapacityReservationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatGatewayCapacityReservationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NatGatewayCapacity, natGatewayCapacityShrink_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetCapacityReservation, resetCapacityReservation_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatGatewayCapacityReservationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NatGatewayCapacity, natGatewayCapacityShrink_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetCapacityReservation, resetCapacityReservation_);
    };
    ModifyNatGatewayCapacityReservationShrinkRequest() = default ;
    ModifyNatGatewayCapacityReservationShrinkRequest(const ModifyNatGatewayCapacityReservationShrinkRequest &) = default ;
    ModifyNatGatewayCapacityReservationShrinkRequest(ModifyNatGatewayCapacityReservationShrinkRequest &&) = default ;
    ModifyNatGatewayCapacityReservationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatGatewayCapacityReservationShrinkRequest() = default ;
    ModifyNatGatewayCapacityReservationShrinkRequest& operator=(const ModifyNatGatewayCapacityReservationShrinkRequest &) = default ;
    ModifyNatGatewayCapacityReservationShrinkRequest& operator=(ModifyNatGatewayCapacityReservationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->natGatewayCapacityShrink_ == nullptr && this->natGatewayId_ == nullptr && this->regionId_ == nullptr && this->resetCapacityReservation_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyNatGatewayCapacityReservationShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ModifyNatGatewayCapacityReservationShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // natGatewayCapacityShrink Field Functions 
    bool hasNatGatewayCapacityShrink() const { return this->natGatewayCapacityShrink_ != nullptr;};
    void deleteNatGatewayCapacityShrink() { this->natGatewayCapacityShrink_ = nullptr;};
    inline string getNatGatewayCapacityShrink() const { DARABONBA_PTR_GET_DEFAULT(natGatewayCapacityShrink_, "") };
    inline ModifyNatGatewayCapacityReservationShrinkRequest& setNatGatewayCapacityShrink(string natGatewayCapacityShrink) { DARABONBA_PTR_SET_VALUE(natGatewayCapacityShrink_, natGatewayCapacityShrink) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatGatewayCapacityReservationShrinkRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNatGatewayCapacityReservationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetCapacityReservation Field Functions 
    bool hasResetCapacityReservation() const { return this->resetCapacityReservation_ != nullptr;};
    void deleteResetCapacityReservation() { this->resetCapacityReservation_ = nullptr;};
    inline string getResetCapacityReservation() const { DARABONBA_PTR_GET_DEFAULT(resetCapacityReservation_, "") };
    inline ModifyNatGatewayCapacityReservationShrinkRequest& setResetCapacityReservation(string resetCapacityReservation) { DARABONBA_PTR_SET_VALUE(resetCapacityReservation_, resetCapacityReservation) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters. Note: If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // - true: Performs a dry run without upgrading the Internet NAT gateway. The system checks whether your AccessKey pair is valid, the authorization of the Resource Access Management (RAM) user, and whether the required parameters are specified. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // - false (default): Sends a Normal request. If the request passes the dry run, a 2xx HTTP status code is returned and the Internet NAT gateway is upgraded.
    shared_ptr<string> dryRun_ {};
    // The number of capacity units (CUs) for the NAT resource reservation.
    shared_ptr<string> natGatewayCapacityShrink_ {};
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
