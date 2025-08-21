// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkInterfacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeNetworkInterfacesRequest() = default ;
    DescribeNetworkInterfacesRequest(const DescribeNetworkInterfacesRequest &) = default ;
    DescribeNetworkInterfacesRequest(DescribeNetworkInterfacesRequest &&) = default ;
    DescribeNetworkInterfacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesRequest() = default ;
    DescribeNetworkInterfacesRequest& operator=(const DescribeNetworkInterfacesRequest &) = default ;
    DescribeNetworkInterfacesRequest& operator=(DescribeNetworkInterfacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->ensRegionIds_ != nullptr && this->instanceId_ != nullptr && this->ipv6Address_ != nullptr && this->networkId_ != nullptr && this->networkInterfaceId_ != nullptr
        && this->networkInterfaceIds_ != nullptr && this->networkInterfaceName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->primaryIpAddress_ != nullptr
        && this->securityGroupId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->vSwitchId_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworkInterfacesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & ensRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> ensRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeNetworkInterfacesRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeNetworkInterfacesRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkInterfacesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline const vector<string> & ipv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<string>) };
    inline vector<string> ipv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<string>) };
    inline DescribeNetworkInterfacesRequest& setIpv6Address(const vector<string> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
    inline DescribeNetworkInterfacesRequest& setIpv6Address(vector<string> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNetworkInterfacesRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeNetworkInterfacesRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline DescribeNetworkInterfacesRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DescribeNetworkInterfacesRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline DescribeNetworkInterfacesRequest& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeNetworkInterfacesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeNetworkInterfacesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // primaryIpAddress Field Functions 
    bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
    void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
    inline string primaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
    inline DescribeNetworkInterfacesRequest& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeNetworkInterfacesRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkInterfacesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNetworkInterfacesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNetworkInterfacesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The region ID of the instance.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The IDs of edge nodes. N indicates the number of edge node IDs that you can specify at the same time. Valid values of N: 1 to 100.
    std::shared_ptr<vector<string>> ensRegionIds_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // IPv6 addresses N of the ENI. You can specify multiple IPv6 addresses. Valid values of N: 1 to 100.
    std::shared_ptr<vector<string>> ipv6Address_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The ID of the ENI.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The IDs of the elastic network interfaces (ENIs). N indicates the number of ENI IDs that you can specify at the same time. Valid values of N: 1 to 100.
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
    // The name of the ENI.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The page number of the returned page. Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 50.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The primary IP address of the ENI.
    std::shared_ptr<string> primaryIpAddress_ = nullptr;
    // The ID of the security group to which the secondary ENI belongs. To query the details of secondary ENIs based on the ID of a security group, specify this parameter.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The status of the ENI. Valid values:
    // 
    // *   Available: The ENI is available.
    // *   Attaching: The ENI is being attached to an instance.
    // *   InUse: The ENI is attached to an instance.
    // *   Detaching: The ENI is being detached from an instance.
    // *   Deleting: The ENI is being deleted.
    // 
    // This parameter is empty by default, which indicates that ENIs in all states are queried.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the ENI. Valid values:
    // 
    // *   Primary: the primary ENI.
    // *   Secondary: the secondary ENI.
    // 
    // This parameter is empty by default, which indicates that both primary and secondary ENIs are queried.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
