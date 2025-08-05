// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSLOADBALANCERS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSLOADBALANCERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsLoadBalancersPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItemsLoadBalancers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItemsLoadBalancers& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(addressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(addressType, addressType_);
      DARABONBA_PTR_TO_JSON(gatewayDefault, gatewayDefault_);
      DARABONBA_PTR_TO_JSON(loadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(ports, ports_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItemsLoadBalancers& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(addressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(addressType, addressType_);
      DARABONBA_PTR_FROM_JSON(gatewayDefault, gatewayDefault_);
      DARABONBA_PTR_FROM_JSON(loadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(ports, ports_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListGatewaysResponseBodyDataItemsLoadBalancers() = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancers(const ListGatewaysResponseBodyDataItemsLoadBalancers &) = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancers(ListGatewaysResponseBodyDataItemsLoadBalancers &&) = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItemsLoadBalancers() = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancers& operator=(const ListGatewaysResponseBodyDataItemsLoadBalancers &) = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancers& operator=(ListGatewaysResponseBodyDataItemsLoadBalancers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->addressIpVersion_ != nullptr && this->addressType_ != nullptr && this->gatewayDefault_ != nullptr && this->loadBalancerId_ != nullptr && this->mode_ != nullptr
        && this->ports_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // gatewayDefault Field Functions 
    bool hasGatewayDefault() const { return this->gatewayDefault_ != nullptr;};
    void deleteGatewayDefault() { this->gatewayDefault_ = nullptr;};
    inline bool gatewayDefault() const { DARABONBA_PTR_GET_DEFAULT(gatewayDefault_, false) };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setGatewayDefault(bool gatewayDefault) { DARABONBA_PTR_SET_VALUE(gatewayDefault_, gatewayDefault) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancersPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancersPorts>) };
    inline vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancersPorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancersPorts>) };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setPorts(const vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancersPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setPorts(vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancersPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The load balancer IP address.
    std::shared_ptr<string> address_ = nullptr;
    // The IP version of the address. Valid values:
    // 
    // *   ipv4: IPv4
    // *   ipv6: IPv6
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The address type. Valid values:
    // 
    // *   Internet
    // *   Intranet
    std::shared_ptr<string> addressType_ = nullptr;
    // Indicates whether the address is the default ingress address of the instance.
    std::shared_ptr<bool> gatewayDefault_ = nullptr;
    // The load balancer ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The mode in which the load balancer is provided. Valid values:
    // 
    // *   Managed: Cloud-native API Gateway manages and provides the load balancer.
    std::shared_ptr<string> mode_ = nullptr;
    // The list of listened ports.
    std::shared_ptr<vector<Models::ListGatewaysResponseBodyDataItemsLoadBalancersPorts>> ports_ = nullptr;
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
