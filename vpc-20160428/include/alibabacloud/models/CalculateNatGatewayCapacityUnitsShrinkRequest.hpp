// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALCULATENATGATEWAYCAPACITYUNITSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CALCULATENATGATEWAYCAPACITYUNITSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CalculateNatGatewayCapacityUnitsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CalculateNatGatewayCapacityUnitsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NatGatewayCapacity, natGatewayCapacityShrink_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValuesShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CalculateNatGatewayCapacityUnitsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NatGatewayCapacity, natGatewayCapacityShrink_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayPerformanceValues, natGatewayPerformanceValuesShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CalculateNatGatewayCapacityUnitsShrinkRequest() = default ;
    CalculateNatGatewayCapacityUnitsShrinkRequest(const CalculateNatGatewayCapacityUnitsShrinkRequest &) = default ;
    CalculateNatGatewayCapacityUnitsShrinkRequest(CalculateNatGatewayCapacityUnitsShrinkRequest &&) = default ;
    CalculateNatGatewayCapacityUnitsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CalculateNatGatewayCapacityUnitsShrinkRequest() = default ;
    CalculateNatGatewayCapacityUnitsShrinkRequest& operator=(const CalculateNatGatewayCapacityUnitsShrinkRequest &) = default ;
    CalculateNatGatewayCapacityUnitsShrinkRequest& operator=(CalculateNatGatewayCapacityUnitsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->natGatewayCapacityShrink_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayPerformanceValuesShrink_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CalculateNatGatewayCapacityUnitsShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline CalculateNatGatewayCapacityUnitsShrinkRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // natGatewayCapacityShrink Field Functions 
    bool hasNatGatewayCapacityShrink() const { return this->natGatewayCapacityShrink_ != nullptr;};
    void deleteNatGatewayCapacityShrink() { this->natGatewayCapacityShrink_ = nullptr;};
    inline string getNatGatewayCapacityShrink() const { DARABONBA_PTR_GET_DEFAULT(natGatewayCapacityShrink_, "") };
    inline CalculateNatGatewayCapacityUnitsShrinkRequest& setNatGatewayCapacityShrink(string natGatewayCapacityShrink) { DARABONBA_PTR_SET_VALUE(natGatewayCapacityShrink_, natGatewayCapacityShrink) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CalculateNatGatewayCapacityUnitsShrinkRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayPerformanceValuesShrink Field Functions 
    bool hasNatGatewayPerformanceValuesShrink() const { return this->natGatewayPerformanceValuesShrink_ != nullptr;};
    void deleteNatGatewayPerformanceValuesShrink() { this->natGatewayPerformanceValuesShrink_ = nullptr;};
    inline string getNatGatewayPerformanceValuesShrink() const { DARABONBA_PTR_GET_DEFAULT(natGatewayPerformanceValuesShrink_, "") };
    inline CalculateNatGatewayCapacityUnitsShrinkRequest& setNatGatewayPerformanceValuesShrink(string natGatewayPerformanceValuesShrink) { DARABONBA_PTR_SET_VALUE(natGatewayPerformanceValuesShrink_, natGatewayPerformanceValuesShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CalculateNatGatewayCapacityUnitsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. Note: If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - true: sends the request without upgrading the Internet NAT gateway. The system checks whether your AccessKey pair is valid, the authorization of the Resource Access Management (RAM) user, and whether the required parameters are specified. If the request fails the check, an error message is returned. If the request passes the check, the DryRunOperation error code is returned.
    // - false (default value): sends a normal request. If the request passes the check, a 2xx HTTP status code is returned and the Internet NAT gateway is directly upgraded.
    shared_ptr<string> dryRun_ {};
    // The details of the reserved capacity units (CUs) to be calculated.
    shared_ptr<string> natGatewayCapacityShrink_ {};
    // The instance ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The details of the resource reservation metrics to be calculated.
    shared_ptr<string> natGatewayPerformanceValuesShrink_ {};
    // The region ID of the NAT gateway.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
