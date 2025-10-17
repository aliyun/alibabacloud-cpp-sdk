// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestNetworksIpAllocationPolicy.hpp>
#include <alibabacloud/models/CreateClusterRequestNetworksNewVpdInfo.hpp>
#include <alibabacloud/models/CreateClusterRequestNetworksVpdInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(IpAllocationPolicy, ipAllocationPolicy_);
      DARABONBA_PTR_TO_JSON(NewVpdInfo, newVpdInfo_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(TailIpVersion, tailIpVersion_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpdInfo, vpdInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAllocationPolicy, ipAllocationPolicy_);
      DARABONBA_PTR_FROM_JSON(NewVpdInfo, newVpdInfo_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(TailIpVersion, tailIpVersion_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchZoneId, vSwitchZoneId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpdInfo, vpdInfo_);
    };
    CreateClusterRequestNetworks() = default ;
    CreateClusterRequestNetworks(const CreateClusterRequestNetworks &) = default ;
    CreateClusterRequestNetworks(CreateClusterRequestNetworks &&) = default ;
    CreateClusterRequestNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworks() = default ;
    CreateClusterRequestNetworks& operator=(const CreateClusterRequestNetworks &) = default ;
    CreateClusterRequestNetworks& operator=(CreateClusterRequestNetworks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipAllocationPolicy_ == nullptr
        && return this->newVpdInfo_ == nullptr && return this->securityGroupId_ == nullptr && return this->tailIpVersion_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchZoneId_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpdInfo_ == nullptr; };
    // ipAllocationPolicy Field Functions 
    bool hasIpAllocationPolicy() const { return this->ipAllocationPolicy_ != nullptr;};
    void deleteIpAllocationPolicy() { this->ipAllocationPolicy_ = nullptr;};
    inline const vector<Models::CreateClusterRequestNetworksIpAllocationPolicy> & ipAllocationPolicy() const { DARABONBA_PTR_GET_CONST(ipAllocationPolicy_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicy>) };
    inline vector<Models::CreateClusterRequestNetworksIpAllocationPolicy> ipAllocationPolicy() { DARABONBA_PTR_GET(ipAllocationPolicy_, vector<Models::CreateClusterRequestNetworksIpAllocationPolicy>) };
    inline CreateClusterRequestNetworks& setIpAllocationPolicy(const vector<Models::CreateClusterRequestNetworksIpAllocationPolicy> & ipAllocationPolicy) { DARABONBA_PTR_SET_VALUE(ipAllocationPolicy_, ipAllocationPolicy) };
    inline CreateClusterRequestNetworks& setIpAllocationPolicy(vector<Models::CreateClusterRequestNetworksIpAllocationPolicy> && ipAllocationPolicy) { DARABONBA_PTR_SET_RVALUE(ipAllocationPolicy_, ipAllocationPolicy) };


    // newVpdInfo Field Functions 
    bool hasNewVpdInfo() const { return this->newVpdInfo_ != nullptr;};
    void deleteNewVpdInfo() { this->newVpdInfo_ = nullptr;};
    inline const Models::CreateClusterRequestNetworksNewVpdInfo & newVpdInfo() const { DARABONBA_PTR_GET_CONST(newVpdInfo_, Models::CreateClusterRequestNetworksNewVpdInfo) };
    inline Models::CreateClusterRequestNetworksNewVpdInfo newVpdInfo() { DARABONBA_PTR_GET(newVpdInfo_, Models::CreateClusterRequestNetworksNewVpdInfo) };
    inline CreateClusterRequestNetworks& setNewVpdInfo(const Models::CreateClusterRequestNetworksNewVpdInfo & newVpdInfo) { DARABONBA_PTR_SET_VALUE(newVpdInfo_, newVpdInfo) };
    inline CreateClusterRequestNetworks& setNewVpdInfo(Models::CreateClusterRequestNetworksNewVpdInfo && newVpdInfo) { DARABONBA_PTR_SET_RVALUE(newVpdInfo_, newVpdInfo) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateClusterRequestNetworks& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tailIpVersion Field Functions 
    bool hasTailIpVersion() const { return this->tailIpVersion_ != nullptr;};
    void deleteTailIpVersion() { this->tailIpVersion_ = nullptr;};
    inline string tailIpVersion() const { DARABONBA_PTR_GET_DEFAULT(tailIpVersion_, "") };
    inline CreateClusterRequestNetworks& setTailIpVersion(string tailIpVersion) { DARABONBA_PTR_SET_VALUE(tailIpVersion_, tailIpVersion) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateClusterRequestNetworks& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchZoneId Field Functions 
    bool hasVSwitchZoneId() const { return this->vSwitchZoneId_ != nullptr;};
    void deleteVSwitchZoneId() { this->vSwitchZoneId_ = nullptr;};
    inline string vSwitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchZoneId_, "") };
    inline CreateClusterRequestNetworks& setVSwitchZoneId(string vSwitchZoneId) { DARABONBA_PTR_SET_VALUE(vSwitchZoneId_, vSwitchZoneId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequestNetworks& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpdInfo Field Functions 
    bool hasVpdInfo() const { return this->vpdInfo_ != nullptr;};
    void deleteVpdInfo() { this->vpdInfo_ = nullptr;};
    inline const Models::CreateClusterRequestNetworksVpdInfo & vpdInfo() const { DARABONBA_PTR_GET_CONST(vpdInfo_, Models::CreateClusterRequestNetworksVpdInfo) };
    inline Models::CreateClusterRequestNetworksVpdInfo vpdInfo() { DARABONBA_PTR_GET(vpdInfo_, Models::CreateClusterRequestNetworksVpdInfo) };
    inline CreateClusterRequestNetworks& setVpdInfo(const Models::CreateClusterRequestNetworksVpdInfo & vpdInfo) { DARABONBA_PTR_SET_VALUE(vpdInfo_, vpdInfo) };
    inline CreateClusterRequestNetworks& setVpdInfo(Models::CreateClusterRequestNetworksVpdInfo && vpdInfo) { DARABONBA_PTR_SET_RVALUE(vpdInfo_, vpdInfo) };


  protected:
    // IP allocation policy
    std::shared_ptr<vector<Models::CreateClusterRequestNetworksIpAllocationPolicy>> ipAllocationPolicy_ = nullptr;
    // Vpd configuration information
    std::shared_ptr<Models::CreateClusterRequestNetworksNewVpdInfo> newVpdInfo_ = nullptr;
    // Security group ID
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // IP version
    std::shared_ptr<string> tailIpVersion_ = nullptr;
    // VSwitch ID
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VSwitch Zone ID
    std::shared_ptr<string> vSwitchZoneId_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
    // Reuse VPD information
    std::shared_ptr<Models::CreateClusterRequestNetworksVpdInfo> vpdInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
