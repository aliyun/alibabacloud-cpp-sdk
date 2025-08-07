// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGPRIVATEVPCCONNECTIONSCONNECTIONCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGPRIVATEVPCCONNECTIONSCONNECTIONCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndpointIps, endpointIps_);
      DARABONBA_PTR_TO_JSON(IngressEndpointStatus, ingressEndpointStatus_);
      DARABONBA_PTR_TO_JSON(NetworkServiceStatus, networkServiceStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndpointIps, endpointIps_);
      DARABONBA_PTR_FROM_JSON(IngressEndpointStatus, ingressEndpointStatus_);
      DARABONBA_PTR_FROM_JSON(NetworkServiceStatus, networkServiceStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs(const GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs &) = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs(GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs &&) = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& operator=(const GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs &) = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& operator=(GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectBandwidth_ != nullptr
        && this->domainName_ != nullptr && this->endpointIps_ != nullptr && this->ingressEndpointStatus_ != nullptr && this->networkServiceStatus_ != nullptr && this->regionId_ != nullptr
        && this->securityGroups_ != nullptr && this->vSwitches_ != nullptr && this->vpcId_ != nullptr; };
    // connectBandwidth Field Functions 
    bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
    void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
    inline int32_t connectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endpointIps Field Functions 
    bool hasEndpointIps() const { return this->endpointIps_ != nullptr;};
    void deleteEndpointIps() { this->endpointIps_ = nullptr;};
    inline const vector<string> & endpointIps() const { DARABONBA_PTR_GET_CONST(endpointIps_, vector<string>) };
    inline vector<string> endpointIps() { DARABONBA_PTR_GET(endpointIps_, vector<string>) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setEndpointIps(const vector<string> & endpointIps) { DARABONBA_PTR_SET_VALUE(endpointIps_, endpointIps) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setEndpointIps(vector<string> && endpointIps) { DARABONBA_PTR_SET_RVALUE(endpointIps_, endpointIps) };


    // ingressEndpointStatus Field Functions 
    bool hasIngressEndpointStatus() const { return this->ingressEndpointStatus_ != nullptr;};
    void deleteIngressEndpointStatus() { this->ingressEndpointStatus_ = nullptr;};
    inline string ingressEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(ingressEndpointStatus_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setIngressEndpointStatus(string ingressEndpointStatus) { DARABONBA_PTR_SET_VALUE(ingressEndpointStatus_, ingressEndpointStatus) };


    // networkServiceStatus Field Functions 
    bool hasNetworkServiceStatus() const { return this->networkServiceStatus_ != nullptr;};
    void deleteNetworkServiceStatus() { this->networkServiceStatus_ = nullptr;};
    inline string networkServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(networkServiceStatus_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setNetworkServiceStatus(string networkServiceStatus) { DARABONBA_PTR_SET_VALUE(networkServiceStatus_, networkServiceStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<string> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
    inline vector<string> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<string> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<string>) };
    inline vector<string> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<string>) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setVSwitches(const vector<string> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setVSwitches(vector<string> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The bandwidth limit for the private connection established based on the private network interconnection mode of Compute Nest.
    std::shared_ptr<int32_t> connectBandwidth_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The IP addresses of the endpoints of the private connections.
    std::shared_ptr<vector<string>> endpointIps_ = nullptr;
    // The state of the ingress endpoint. Valid values:
    // 
    // *   Ready: The ingress endpoint is connected.
    // *   Pending: The ingress endpoint is being connected.
    // *   Failed: The ingress endpoint fails to be connected.
    // *   Deleted: The ingress endpoint is deleted.
    // *   Deleting: The ingress endpoint is being deleted.
    std::shared_ptr<string> ingressEndpointStatus_ = nullptr;
    // The state of the network service. Valid values:
    // 
    // *   Ready: The network service is connected.
    // *   Pending: The network service is being connected.
    // *   Failed: The network service fails to be connected.
    // *   Deleted: The network service is deleted.
    // *   Deleting: The network service is being deleted.
    std::shared_ptr<string> networkServiceStatus_ = nullptr;
    // The region ID of the VPC to which the endpoint of the private connection established based on the private network interconnection mode of Compute Nest belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The names of the security groups.
    std::shared_ptr<vector<string>> securityGroups_ = nullptr;
    // The names of the vSwitches.
    std::shared_ptr<vector<string>> vSwitches_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
