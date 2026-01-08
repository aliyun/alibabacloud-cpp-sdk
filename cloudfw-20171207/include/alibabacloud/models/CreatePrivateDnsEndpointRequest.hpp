// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVATEDNSENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVATEDNSENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreatePrivateDnsEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivateDnsEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchIp, primaryVSwitchIp_);
      DARABONBA_PTR_TO_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(StandbyDns, standbyDns_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchIp, standbyVSwitchIp_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivateDnsEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceName, accessInstanceName_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrimaryDns, primaryDns_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchIp, primaryVSwitchIp_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsType, privateDnsType_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(StandbyDns, standbyDns_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchIp, standbyVSwitchIp_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreatePrivateDnsEndpointRequest() = default ;
    CreatePrivateDnsEndpointRequest(const CreatePrivateDnsEndpointRequest &) = default ;
    CreatePrivateDnsEndpointRequest(CreatePrivateDnsEndpointRequest &&) = default ;
    CreatePrivateDnsEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivateDnsEndpointRequest() = default ;
    CreatePrivateDnsEndpointRequest& operator=(const CreatePrivateDnsEndpointRequest &) = default ;
    CreatePrivateDnsEndpointRequest& operator=(CreatePrivateDnsEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceName_ == nullptr
        && this->firewallType_ == nullptr && this->ipProtocol_ == nullptr && this->memberUid_ == nullptr && this->port_ == nullptr && this->primaryDns_ == nullptr
        && this->primaryVSwitchId_ == nullptr && this->primaryVSwitchIp_ == nullptr && this->privateDnsType_ == nullptr && this->regionNo_ == nullptr && this->standbyDns_ == nullptr
        && this->standbyVSwitchId_ == nullptr && this->standbyVSwitchIp_ == nullptr && this->vpcId_ == nullptr; };
    // accessInstanceName Field Functions 
    bool hasAccessInstanceName() const { return this->accessInstanceName_ != nullptr;};
    void deleteAccessInstanceName() { this->accessInstanceName_ = nullptr;};
    inline string getAccessInstanceName() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceName_, "") };
    inline CreatePrivateDnsEndpointRequest& setAccessInstanceName(string accessInstanceName) { DARABONBA_PTR_SET_VALUE(accessInstanceName_, accessInstanceName) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline const vector<string> & getFirewallType() const { DARABONBA_PTR_GET_CONST(firewallType_, vector<string>) };
    inline vector<string> getFirewallType() { DARABONBA_PTR_GET(firewallType_, vector<string>) };
    inline CreatePrivateDnsEndpointRequest& setFirewallType(const vector<string> & firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };
    inline CreatePrivateDnsEndpointRequest& setFirewallType(vector<string> && firewallType) { DARABONBA_PTR_SET_RVALUE(firewallType_, firewallType) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline CreatePrivateDnsEndpointRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline CreatePrivateDnsEndpointRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreatePrivateDnsEndpointRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // primaryDns Field Functions 
    bool hasPrimaryDns() const { return this->primaryDns_ != nullptr;};
    void deletePrimaryDns() { this->primaryDns_ = nullptr;};
    inline string getPrimaryDns() const { DARABONBA_PTR_GET_DEFAULT(primaryDns_, "") };
    inline CreatePrivateDnsEndpointRequest& setPrimaryDns(string primaryDns) { DARABONBA_PTR_SET_VALUE(primaryDns_, primaryDns) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string getPrimaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline CreatePrivateDnsEndpointRequest& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryVSwitchIp Field Functions 
    bool hasPrimaryVSwitchIp() const { return this->primaryVSwitchIp_ != nullptr;};
    void deletePrimaryVSwitchIp() { this->primaryVSwitchIp_ = nullptr;};
    inline string getPrimaryVSwitchIp() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchIp_, "") };
    inline CreatePrivateDnsEndpointRequest& setPrimaryVSwitchIp(string primaryVSwitchIp) { DARABONBA_PTR_SET_VALUE(primaryVSwitchIp_, primaryVSwitchIp) };


    // privateDnsType Field Functions 
    bool hasPrivateDnsType() const { return this->privateDnsType_ != nullptr;};
    void deletePrivateDnsType() { this->privateDnsType_ = nullptr;};
    inline string getPrivateDnsType() const { DARABONBA_PTR_GET_DEFAULT(privateDnsType_, "") };
    inline CreatePrivateDnsEndpointRequest& setPrivateDnsType(string privateDnsType) { DARABONBA_PTR_SET_VALUE(privateDnsType_, privateDnsType) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline CreatePrivateDnsEndpointRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // standbyDns Field Functions 
    bool hasStandbyDns() const { return this->standbyDns_ != nullptr;};
    void deleteStandbyDns() { this->standbyDns_ = nullptr;};
    inline string getStandbyDns() const { DARABONBA_PTR_GET_DEFAULT(standbyDns_, "") };
    inline CreatePrivateDnsEndpointRequest& setStandbyDns(string standbyDns) { DARABONBA_PTR_SET_VALUE(standbyDns_, standbyDns) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline CreatePrivateDnsEndpointRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyVSwitchIp Field Functions 
    bool hasStandbyVSwitchIp() const { return this->standbyVSwitchIp_ != nullptr;};
    void deleteStandbyVSwitchIp() { this->standbyVSwitchIp_ = nullptr;};
    inline string getStandbyVSwitchIp() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchIp_, "") };
    inline CreatePrivateDnsEndpointRequest& setStandbyVSwitchIp(string standbyVSwitchIp) { DARABONBA_PTR_SET_VALUE(standbyVSwitchIp_, standbyVSwitchIp) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreatePrivateDnsEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accessInstanceName_ {};
    // This parameter is required.
    shared_ptr<vector<string>> firewallType_ {};
    shared_ptr<string> ipProtocol_ {};
    shared_ptr<int64_t> memberUid_ {};
    shared_ptr<int32_t> port_ {};
    shared_ptr<string> primaryDns_ {};
    shared_ptr<string> primaryVSwitchId_ {};
    shared_ptr<string> primaryVSwitchIp_ {};
    // This parameter is required.
    shared_ptr<string> privateDnsType_ {};
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    shared_ptr<string> standbyDns_ {};
    shared_ptr<string> standbyVSwitchId_ {};
    shared_ptr<string> standbyVSwitchIp_ {};
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
