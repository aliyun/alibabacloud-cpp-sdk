// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGateway : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageIds, bandwidthPackageIds_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageIds, bandwidthPackageIds_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway(const DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway(DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGateway() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGateway &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackageIds_ != nullptr
        && this->businessStatus_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->forwardTableIds_ != nullptr && this->instanceChargeType_ != nullptr
        && this->name_ != nullptr && this->natGatewayId_ != nullptr && this->regionId_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr
        && this->vpcId_ != nullptr; };
    // bandwidthPackageIds Field Functions 
    bool hasBandwidthPackageIds() const { return this->bandwidthPackageIds_ != nullptr;};
    void deleteBandwidthPackageIds() { this->bandwidthPackageIds_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds & bandwidthPackageIds() const { DARABONBA_PTR_GET_CONST(bandwidthPackageIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds bandwidthPackageIds() { DARABONBA_PTR_GET(bandwidthPackageIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setBandwidthPackageIds(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds & bandwidthPackageIds) { DARABONBA_PTR_SET_VALUE(bandwidthPackageIds_, bandwidthPackageIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setBandwidthPackageIds(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds && bandwidthPackageIds) { DARABONBA_PTR_SET_RVALUE(bandwidthPackageIds_, bandwidthPackageIds) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forwardTableIds Field Functions 
    bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
    void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
    inline const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds & forwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds) };
    inline Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds forwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setForwardTableIds(const Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setForwardTableIds(Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGateway& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayBandwidthPackageIds> bandwidthPackageIds_ = nullptr;
    std::shared_ptr<string> businessStatus_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayForwardTableIds> forwardTableIds_ = nullptr;
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
