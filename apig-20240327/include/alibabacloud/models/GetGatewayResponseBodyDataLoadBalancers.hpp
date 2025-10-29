// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATALOADBALANCERS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATALOADBALANCERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayResponseBodyDataLoadBalancersPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResponseBodyDataLoadBalancers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataLoadBalancers& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(addressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(addressType, addressType_);
      DARABONBA_PTR_TO_JSON(gatewayDefault, gatewayDefault_);
      DARABONBA_PTR_TO_JSON(ipv4Addresses, ipv4Addresses_);
      DARABONBA_PTR_TO_JSON(ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_TO_JSON(loadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(ports, ports_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataLoadBalancers& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(addressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(addressType, addressType_);
      DARABONBA_PTR_FROM_JSON(gatewayDefault, gatewayDefault_);
      DARABONBA_PTR_FROM_JSON(ipv4Addresses, ipv4Addresses_);
      DARABONBA_PTR_FROM_JSON(ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_FROM_JSON(loadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(ports, ports_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetGatewayResponseBodyDataLoadBalancers() = default ;
    GetGatewayResponseBodyDataLoadBalancers(const GetGatewayResponseBodyDataLoadBalancers &) = default ;
    GetGatewayResponseBodyDataLoadBalancers(GetGatewayResponseBodyDataLoadBalancers &&) = default ;
    GetGatewayResponseBodyDataLoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataLoadBalancers() = default ;
    GetGatewayResponseBodyDataLoadBalancers& operator=(const GetGatewayResponseBodyDataLoadBalancers &) = default ;
    GetGatewayResponseBodyDataLoadBalancers& operator=(GetGatewayResponseBodyDataLoadBalancers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressIpVersion_ == nullptr && return this->addressType_ == nullptr && return this->gatewayDefault_ == nullptr && return this->ipv4Addresses_ == nullptr && return this->ipv6Addresses_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->mode_ == nullptr && return this->ports_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetGatewayResponseBodyDataLoadBalancers& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline GetGatewayResponseBodyDataLoadBalancers& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline GetGatewayResponseBodyDataLoadBalancers& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // gatewayDefault Field Functions 
    bool hasGatewayDefault() const { return this->gatewayDefault_ != nullptr;};
    void deleteGatewayDefault() { this->gatewayDefault_ = nullptr;};
    inline bool gatewayDefault() const { DARABONBA_PTR_GET_DEFAULT(gatewayDefault_, false) };
    inline GetGatewayResponseBodyDataLoadBalancers& setGatewayDefault(bool gatewayDefault) { DARABONBA_PTR_SET_VALUE(gatewayDefault_, gatewayDefault) };


    // ipv4Addresses Field Functions 
    bool hasIpv4Addresses() const { return this->ipv4Addresses_ != nullptr;};
    void deleteIpv4Addresses() { this->ipv4Addresses_ = nullptr;};
    inline const vector<string> & ipv4Addresses() const { DARABONBA_PTR_GET_CONST(ipv4Addresses_, vector<string>) };
    inline vector<string> ipv4Addresses() { DARABONBA_PTR_GET(ipv4Addresses_, vector<string>) };
    inline GetGatewayResponseBodyDataLoadBalancers& setIpv4Addresses(const vector<string> & ipv4Addresses) { DARABONBA_PTR_SET_VALUE(ipv4Addresses_, ipv4Addresses) };
    inline GetGatewayResponseBodyDataLoadBalancers& setIpv4Addresses(vector<string> && ipv4Addresses) { DARABONBA_PTR_SET_RVALUE(ipv4Addresses_, ipv4Addresses) };


    // ipv6Addresses Field Functions 
    bool hasIpv6Addresses() const { return this->ipv6Addresses_ != nullptr;};
    void deleteIpv6Addresses() { this->ipv6Addresses_ = nullptr;};
    inline const vector<string> & ipv6Addresses() const { DARABONBA_PTR_GET_CONST(ipv6Addresses_, vector<string>) };
    inline vector<string> ipv6Addresses() { DARABONBA_PTR_GET(ipv6Addresses_, vector<string>) };
    inline GetGatewayResponseBodyDataLoadBalancers& setIpv6Addresses(const vector<string> & ipv6Addresses) { DARABONBA_PTR_SET_VALUE(ipv6Addresses_, ipv6Addresses) };
    inline GetGatewayResponseBodyDataLoadBalancers& setIpv6Addresses(vector<string> && ipv6Addresses) { DARABONBA_PTR_SET_RVALUE(ipv6Addresses_, ipv6Addresses) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline GetGatewayResponseBodyDataLoadBalancers& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetGatewayResponseBodyDataLoadBalancers& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::GetGatewayResponseBodyDataLoadBalancersPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::GetGatewayResponseBodyDataLoadBalancersPorts>) };
    inline vector<Models::GetGatewayResponseBodyDataLoadBalancersPorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::GetGatewayResponseBodyDataLoadBalancersPorts>) };
    inline GetGatewayResponseBodyDataLoadBalancers& setPorts(const vector<Models::GetGatewayResponseBodyDataLoadBalancersPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline GetGatewayResponseBodyDataLoadBalancers& setPorts(vector<Models::GetGatewayResponseBodyDataLoadBalancersPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGatewayResponseBodyDataLoadBalancers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetGatewayResponseBodyDataLoadBalancers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The load balancer IP address.
    std::shared_ptr<string> address_ = nullptr;
    // The IP version of the address. Valid values:
    // 
    // *   ipv4
    // *   ipv6
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The load balancer address type. Valid values:
    // 
    // *   Internet
    // *   Intranet
    std::shared_ptr<string> addressType_ = nullptr;
    // Indicates whether the address is the default ingress address of the instance.
    std::shared_ptr<bool> gatewayDefault_ = nullptr;
    std::shared_ptr<vector<string>> ipv4Addresses_ = nullptr;
    std::shared_ptr<vector<string>> ipv6Addresses_ = nullptr;
    // The load balancer ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The mode in which the load balancer is provided. Valid values:
    // 
    // *   Managed: Cloud-native API Gateway manages and provides the load balancer.
    std::shared_ptr<string> mode_ = nullptr;
    // The list of listened ports.
    std::shared_ptr<vector<Models::GetGatewayResponseBodyDataLoadBalancersPorts>> ports_ = nullptr;
    // The load balancer status. Valid values:
    // 
    // *   Ready: The load balancer is available.
    // *   NotCreate: The load balancer is not associated with the instance.
    std::shared_ptr<string> status_ = nullptr;
    // The load balancer type. Valid values:
    // 
    // *   NLB: Network Load Balancer
    // *   CLB: Classic Load Balancer
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
