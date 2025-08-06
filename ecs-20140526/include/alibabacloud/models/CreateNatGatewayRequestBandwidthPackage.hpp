// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUESTBANDWIDTHPACKAGE_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUESTBANDWIDTHPACKAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNatGatewayRequestBandwidthPackage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayRequestBandwidthPackage& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayRequestBandwidthPackage& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    CreateNatGatewayRequestBandwidthPackage() = default ;
    CreateNatGatewayRequestBandwidthPackage(const CreateNatGatewayRequestBandwidthPackage &) = default ;
    CreateNatGatewayRequestBandwidthPackage(CreateNatGatewayRequestBandwidthPackage &&) = default ;
    CreateNatGatewayRequestBandwidthPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayRequestBandwidthPackage() = default ;
    CreateNatGatewayRequestBandwidthPackage& operator=(const CreateNatGatewayRequestBandwidthPackage &) = default ;
    CreateNatGatewayRequestBandwidthPackage& operator=(CreateNatGatewayRequestBandwidthPackage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->ipCount_ != nullptr && this->zone_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateNatGatewayRequestBandwidthPackage& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // ipCount Field Functions 
    bool hasIpCount() const { return this->ipCount_ != nullptr;};
    void deleteIpCount() { this->ipCount_ = nullptr;};
    inline int32_t ipCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0) };
    inline CreateNatGatewayRequestBandwidthPackage& setIpCount(int32_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline CreateNatGatewayRequestBandwidthPackage& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    std::shared_ptr<int32_t> ipCount_ = nullptr;
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
