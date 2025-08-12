// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListLoadBalancersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(DNSName, DNSName_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(LoadBalancerNames, loadBalancerNames_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcIds, vpcIds_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(DNSName, DNSName_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerNames, loadBalancerNames_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcIds, vpcIds_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListLoadBalancersRequest() = default ;
    ListLoadBalancersRequest(const ListLoadBalancersRequest &) = default ;
    ListLoadBalancersRequest(ListLoadBalancersRequest &&) = default ;
    ListLoadBalancersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersRequest() = default ;
    ListLoadBalancersRequest& operator=(const ListLoadBalancersRequest &) = default ;
    ListLoadBalancersRequest& operator=(ListLoadBalancersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressIpVersion_ != nullptr
        && this->addressType_ != nullptr && this->DNSName_ != nullptr && this->ipv6AddressType_ != nullptr && this->loadBalancerBusinessStatus_ != nullptr && this->loadBalancerIds_ != nullptr
        && this->loadBalancerNames_ != nullptr && this->loadBalancerStatus_ != nullptr && this->loadBalancerType_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tag_ != nullptr && this->vpcIds_ != nullptr && this->zoneId_ != nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListLoadBalancersRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListLoadBalancersRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // DNSName Field Functions 
    bool hasDNSName() const { return this->DNSName_ != nullptr;};
    void deleteDNSName() { this->DNSName_ = nullptr;};
    inline string DNSName() const { DARABONBA_PTR_GET_DEFAULT(DNSName_, "") };
    inline ListLoadBalancersRequest& setDNSName(string DNSName) { DARABONBA_PTR_SET_VALUE(DNSName_, DNSName) };


    // ipv6AddressType Field Functions 
    bool hasIpv6AddressType() const { return this->ipv6AddressType_ != nullptr;};
    void deleteIpv6AddressType() { this->ipv6AddressType_ = nullptr;};
    inline string ipv6AddressType() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressType_, "") };
    inline ListLoadBalancersRequest& setIpv6AddressType(string ipv6AddressType) { DARABONBA_PTR_SET_VALUE(ipv6AddressType_, ipv6AddressType) };


    // loadBalancerBusinessStatus Field Functions 
    bool hasLoadBalancerBusinessStatus() const { return this->loadBalancerBusinessStatus_ != nullptr;};
    void deleteLoadBalancerBusinessStatus() { this->loadBalancerBusinessStatus_ = nullptr;};
    inline string loadBalancerBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBusinessStatus_, "") };
    inline ListLoadBalancersRequest& setLoadBalancerBusinessStatus(string loadBalancerBusinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBusinessStatus_, loadBalancerBusinessStatus) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const vector<string> & loadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
    inline vector<string> loadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
    inline ListLoadBalancersRequest& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline ListLoadBalancersRequest& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // loadBalancerNames Field Functions 
    bool hasLoadBalancerNames() const { return this->loadBalancerNames_ != nullptr;};
    void deleteLoadBalancerNames() { this->loadBalancerNames_ = nullptr;};
    inline const vector<string> & loadBalancerNames() const { DARABONBA_PTR_GET_CONST(loadBalancerNames_, vector<string>) };
    inline vector<string> loadBalancerNames() { DARABONBA_PTR_GET(loadBalancerNames_, vector<string>) };
    inline ListLoadBalancersRequest& setLoadBalancerNames(const vector<string> & loadBalancerNames) { DARABONBA_PTR_SET_VALUE(loadBalancerNames_, loadBalancerNames) };
    inline ListLoadBalancersRequest& setLoadBalancerNames(vector<string> && loadBalancerNames) { DARABONBA_PTR_SET_RVALUE(loadBalancerNames_, loadBalancerNames) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline ListLoadBalancersRequest& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // loadBalancerType Field Functions 
    bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
    void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
    inline string loadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
    inline ListLoadBalancersRequest& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListLoadBalancersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLoadBalancersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLoadBalancersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLoadBalancersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListLoadBalancersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListLoadBalancersRequestTag>) };
    inline vector<ListLoadBalancersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListLoadBalancersRequestTag>) };
    inline ListLoadBalancersRequest& setTag(const vector<ListLoadBalancersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListLoadBalancersRequest& setTag(vector<ListLoadBalancersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcIds Field Functions 
    bool hasVpcIds() const { return this->vpcIds_ != nullptr;};
    void deleteVpcIds() { this->vpcIds_ = nullptr;};
    inline const vector<string> & vpcIds() const { DARABONBA_PTR_GET_CONST(vpcIds_, vector<string>) };
    inline vector<string> vpcIds() { DARABONBA_PTR_GET(vpcIds_, vector<string>) };
    inline ListLoadBalancersRequest& setVpcIds(const vector<string> & vpcIds) { DARABONBA_PTR_SET_VALUE(vpcIds_, vpcIds) };
    inline ListLoadBalancersRequest& setVpcIds(vector<string> && vpcIds) { DARABONBA_PTR_SET_RVALUE(vpcIds_, vpcIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListLoadBalancersRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The IP version of the NLB instance. Valid values:
    // 
    // *   **ipv4**: IPv4
    // *   **DualStack**: dual-stack
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The type of IPv4 address used by the NLB instance. Valid values:
    // 
    // *   **Internet**: The NLB instance uses a public IP address. The domain name of the NLB instance is resolved to the public IP address. The NLB instance can be accessed over the Internet.
    // *   **Intranet**: The NLB instance uses a private IP address. The domain name of the NLB instance is resolved to the private IP address. The NLB instance can be accessed over the VPC where the NLB instance is deployed.
    std::shared_ptr<string> addressType_ = nullptr;
    // The domain name of the NLB instance.
    std::shared_ptr<string> DNSName_ = nullptr;
    // The type of IPv6 address used by the NLB instance. Valid values:
    // 
    // *   **Internet**: The NLB instance uses a public IP address. The domain name of the NLB instance is resolved to the public IP address. The NLB instance can be accessed over the Internet.
    // *   **Intranet**: The NLB instance uses a private IP address. The domain name of the NLB instance is resolved to the private IP address. The NLB instance can be accessed over the VPC where the NLB instance is deployed.
    std::shared_ptr<string> ipv6AddressType_ = nullptr;
    // The business status of the NLB instance. Valid values:
    // 
    // *   **Abnormal**: The NLB instance is not working as expected.
    // *   **Normal**: The NLB instance is working as expected.
    std::shared_ptr<string> loadBalancerBusinessStatus_ = nullptr;
    // The NLB instance IDs. You can specify up to 20 IDs in each call.
    std::shared_ptr<vector<string>> loadBalancerIds_ = nullptr;
    // The names of the NLB instances. You can specify up to 20 names in each call.
    std::shared_ptr<vector<string>> loadBalancerNames_ = nullptr;
    // The status of the NLB instance. Valid values:
    // 
    // *   **Inactive**: The NLB instance is disabled. Listeners of an NLB instance in the Inactive state do not forward traffic.
    // *   **Active**: The NLB instance is running.
    // *   **Provisioning**: The NLB instance is being created.
    // *   **Configuring**: The NLB instance is being modified.
    // *   **Deleting**: The NLB instance is being deleted.
    // *   **Deleted**: The NLB instance is deleted.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The type of the Server Load Balancer (SLB) instances. Set the value to **network**, which specifies NLB.
    std::shared_ptr<string> loadBalancerType_ = nullptr;
    // The number of entries to return in each call. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token used to specify a particular page of results. Valid values:
    // 
    // *   Leave this parameter empty for the first query or the only query.
    // *   Set this parameter to the value of NextToken obtained from the previous query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the NLB instance.
    std::shared_ptr<vector<ListLoadBalancersRequestTag>> tag_ = nullptr;
    // The IDs of the virtual private clouds (VPCs) where the NLB instances are deployed. You can specify up to 10 VPC IDs in each call.
    std::shared_ptr<vector<string>> vpcIds_ = nullptr;
    // The ID of the zone. You can call the [DescribeZones](https://help.aliyun.com/document_detail/443890.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
