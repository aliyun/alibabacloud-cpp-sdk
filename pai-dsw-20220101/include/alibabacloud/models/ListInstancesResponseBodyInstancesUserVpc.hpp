// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESUSERVPC_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESUSERVPC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BandwidthLimit.hpp>
#include <vector>
#include <alibabacloud/models/ForwardInfoResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesResponseBodyInstancesUserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesUserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_TO_JSON(ForwardInfos, forwardInfos_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesUserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_FROM_JSON(ForwardInfos, forwardInfos_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListInstancesResponseBodyInstancesUserVpc() = default ;
    ListInstancesResponseBodyInstancesUserVpc(const ListInstancesResponseBodyInstancesUserVpc &) = default ;
    ListInstancesResponseBodyInstancesUserVpc(ListInstancesResponseBodyInstancesUserVpc &&) = default ;
    ListInstancesResponseBodyInstancesUserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesUserVpc() = default ;
    ListInstancesResponseBodyInstancesUserVpc& operator=(const ListInstancesResponseBodyInstancesUserVpc &) = default ;
    ListInstancesResponseBodyInstancesUserVpc& operator=(ListInstancesResponseBodyInstancesUserVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthLimit_ != nullptr
        && this->defaultRoute_ != nullptr && this->extendedCIDRs_ != nullptr && this->forwardInfos_ != nullptr && this->securityGroupId_ != nullptr && this->vSwitchId_ != nullptr
        && this->vpcId_ != nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline const Models::BandwidthLimit & bandwidthLimit() const { DARABONBA_PTR_GET_CONST(bandwidthLimit_, Models::BandwidthLimit) };
    inline Models::BandwidthLimit bandwidthLimit() { DARABONBA_PTR_GET(bandwidthLimit_, Models::BandwidthLimit) };
    inline ListInstancesResponseBodyInstancesUserVpc& setBandwidthLimit(const Models::BandwidthLimit & bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };
    inline ListInstancesResponseBodyInstancesUserVpc& setBandwidthLimit(Models::BandwidthLimit && bandwidthLimit) { DARABONBA_PTR_SET_RVALUE(bandwidthLimit_, bandwidthLimit) };


    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string defaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline ListInstancesResponseBodyInstancesUserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // extendedCIDRs Field Functions 
    bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
    void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
    inline const vector<string> & extendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
    inline vector<string> extendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
    inline ListInstancesResponseBodyInstancesUserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
    inline ListInstancesResponseBodyInstancesUserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


    // forwardInfos Field Functions 
    bool hasForwardInfos() const { return this->forwardInfos_ != nullptr;};
    void deleteForwardInfos() { this->forwardInfos_ = nullptr;};
    inline const vector<Models::ForwardInfoResponse> & forwardInfos() const { DARABONBA_PTR_GET_CONST(forwardInfos_, vector<Models::ForwardInfoResponse>) };
    inline vector<Models::ForwardInfoResponse> forwardInfos() { DARABONBA_PTR_GET(forwardInfos_, vector<Models::ForwardInfoResponse>) };
    inline ListInstancesResponseBodyInstancesUserVpc& setForwardInfos(const vector<Models::ForwardInfoResponse> & forwardInfos) { DARABONBA_PTR_SET_VALUE(forwardInfos_, forwardInfos) };
    inline ListInstancesResponseBodyInstancesUserVpc& setForwardInfos(vector<Models::ForwardInfoResponse> && forwardInfos) { DARABONBA_PTR_SET_RVALUE(forwardInfos_, forwardInfos) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListInstancesResponseBodyInstancesUserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListInstancesResponseBodyInstancesUserVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListInstancesResponseBodyInstancesUserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::BandwidthLimit> bandwidthLimit_ = nullptr;
    // The default route.
    std::shared_ptr<string> defaultRoute_ = nullptr;
    // The extended CIDR blocks.
    std::shared_ptr<vector<string>> extendedCIDRs_ = nullptr;
    // The forward information.
    std::shared_ptr<vector<Models::ForwardInfoResponse>> forwardInfos_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
