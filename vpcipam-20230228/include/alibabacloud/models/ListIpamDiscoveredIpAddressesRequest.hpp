// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDIPADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDIPADDRESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamDiscoveredIpAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamDiscoveredIpAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamDiscoveredIpAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListIpamDiscoveredIpAddressesRequest() = default ;
    ListIpamDiscoveredIpAddressesRequest(const ListIpamDiscoveredIpAddressesRequest &) = default ;
    ListIpamDiscoveredIpAddressesRequest(ListIpamDiscoveredIpAddressesRequest &&) = default ;
    ListIpamDiscoveredIpAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamDiscoveredIpAddressesRequest() = default ;
    ListIpamDiscoveredIpAddressesRequest& operator=(const ListIpamDiscoveredIpAddressesRequest &) = default ;
    ListIpamDiscoveredIpAddressesRequest& operator=(ListIpamDiscoveredIpAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && this->ipVersion_ == nullptr && this->ipamResourceDiscoveryId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ListIpamDiscoveredIpAddressesRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListIpamDiscoveredIpAddressesRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ipamResourceDiscoveryId Field Functions 
    bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
    void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
    inline string getIpamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
    inline ListIpamDiscoveredIpAddressesRequest& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamDiscoveredIpAddressesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamDiscoveredIpAddressesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamDiscoveredIpAddressesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListIpamDiscoveredIpAddressesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListIpamDiscoveredIpAddressesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The CIDR block to search for used IP addresses in a VPC or vSwitch. To query a specific IP address, use a /32 prefix length.
    // 
    // > Only IPv4 CIDR blocks are supported.
    shared_ptr<string> cidr_ {};
    // The IP protocol version. Valid value:
    // 
    // - **IPv4**
    shared_ptr<string> ipVersion_ {};
    // The ID of the resource discovery instance.
    // 
    // This parameter is required.
    shared_ptr<string> ipamResourceDiscoveryId_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 200. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page of results. Valid values:
    // 
    // - Do not specify this parameter for your first request.
    // 
    // - If a next page exists, set this parameter to the value of **NextToken** returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the resource discovery instance is hosted.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of a discovered VSwitch.
    // 
    // > You must specify at least one of VpcId and VSwitchId.
    shared_ptr<string> vSwitchId_ {};
    // The ID of a discovered VPC.
    // 
    // > You must specify at least one of VpcId and VSwitchId.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
