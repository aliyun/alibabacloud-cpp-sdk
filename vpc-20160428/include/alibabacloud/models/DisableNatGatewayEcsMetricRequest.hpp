// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLENATGATEWAYECSMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLENATGATEWAYECSMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DisableNatGatewayEcsMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableNatGatewayEcsMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableNatGatewayEcsMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableNatGatewayEcsMetricRequest() = default ;
    DisableNatGatewayEcsMetricRequest(const DisableNatGatewayEcsMetricRequest &) = default ;
    DisableNatGatewayEcsMetricRequest(DisableNatGatewayEcsMetricRequest &&) = default ;
    DisableNatGatewayEcsMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableNatGatewayEcsMetricRequest() = default ;
    DisableNatGatewayEcsMetricRequest& operator=(const DisableNatGatewayEcsMetricRequest &) = default ;
    DisableNatGatewayEcsMetricRequest& operator=(DisableNatGatewayEcsMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dryRun_ != nullptr
        && this->natGatewayId_ != nullptr && this->regionId_ != nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DisableNatGatewayEcsMetricRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DisableNatGatewayEcsMetricRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableNatGatewayEcsMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // 
    // **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the NAT gateway for which you want to disable ECS traffic monitoring.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The region ID of the NAT gateway. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
