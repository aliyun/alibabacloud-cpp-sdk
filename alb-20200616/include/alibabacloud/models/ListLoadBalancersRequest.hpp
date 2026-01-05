// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
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
      DARABONBA_PTR_TO_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(LoadBalancerNames, loadBalancerNames_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
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
      DARABONBA_PTR_FROM_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerNames, loadBalancerNames_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->addressType_ == nullptr && this->DNSName_ == nullptr && this->ipv6AddressType_ == nullptr && this->loadBalancerBussinessStatus_ == nullptr && this->loadBalancerIds_ == nullptr
        && this->loadBalancerNames_ == nullptr && this->loadBalancerStatus_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->payType_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->vpcIds_ == nullptr && this->zoneId_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListLoadBalancersRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListLoadBalancersRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // DNSName Field Functions 
    bool hasDNSName() const { return this->DNSName_ != nullptr;};
    void deleteDNSName() { this->DNSName_ = nullptr;};
    inline string getDNSName() const { DARABONBA_PTR_GET_DEFAULT(DNSName_, "") };
    inline ListLoadBalancersRequest& setDNSName(string DNSName) { DARABONBA_PTR_SET_VALUE(DNSName_, DNSName) };


    // ipv6AddressType Field Functions 
    bool hasIpv6AddressType() const { return this->ipv6AddressType_ != nullptr;};
    void deleteIpv6AddressType() { this->ipv6AddressType_ = nullptr;};
    inline string getIpv6AddressType() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressType_, "") };
    inline ListLoadBalancersRequest& setIpv6AddressType(string ipv6AddressType) { DARABONBA_PTR_SET_VALUE(ipv6AddressType_, ipv6AddressType) };


    // loadBalancerBussinessStatus Field Functions 
    bool hasLoadBalancerBussinessStatus() const { return this->loadBalancerBussinessStatus_ != nullptr;};
    void deleteLoadBalancerBussinessStatus() { this->loadBalancerBussinessStatus_ = nullptr;};
    inline string getLoadBalancerBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBussinessStatus_, "") };
    inline ListLoadBalancersRequest& setLoadBalancerBussinessStatus(string loadBalancerBussinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBussinessStatus_, loadBalancerBussinessStatus) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const vector<string> & getLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
    inline vector<string> getLoadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
    inline ListLoadBalancersRequest& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline ListLoadBalancersRequest& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // loadBalancerNames Field Functions 
    bool hasLoadBalancerNames() const { return this->loadBalancerNames_ != nullptr;};
    void deleteLoadBalancerNames() { this->loadBalancerNames_ = nullptr;};
    inline const vector<string> & getLoadBalancerNames() const { DARABONBA_PTR_GET_CONST(loadBalancerNames_, vector<string>) };
    inline vector<string> getLoadBalancerNames() { DARABONBA_PTR_GET(loadBalancerNames_, vector<string>) };
    inline ListLoadBalancersRequest& setLoadBalancerNames(const vector<string> & loadBalancerNames) { DARABONBA_PTR_SET_VALUE(loadBalancerNames_, loadBalancerNames) };
    inline ListLoadBalancersRequest& setLoadBalancerNames(vector<string> && loadBalancerNames) { DARABONBA_PTR_SET_RVALUE(loadBalancerNames_, loadBalancerNames) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline ListLoadBalancersRequest& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListLoadBalancersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLoadBalancersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ListLoadBalancersRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLoadBalancersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListLoadBalancersRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListLoadBalancersRequest::Tag>) };
    inline vector<ListLoadBalancersRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListLoadBalancersRequest::Tag>) };
    inline ListLoadBalancersRequest& setTag(const vector<ListLoadBalancersRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListLoadBalancersRequest& setTag(vector<ListLoadBalancersRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcIds Field Functions 
    bool hasVpcIds() const { return this->vpcIds_ != nullptr;};
    void deleteVpcIds() { this->vpcIds_ = nullptr;};
    inline const vector<string> & getVpcIds() const { DARABONBA_PTR_GET_CONST(vpcIds_, vector<string>) };
    inline vector<string> getVpcIds() { DARABONBA_PTR_GET(vpcIds_, vector<string>) };
    inline ListLoadBalancersRequest& setVpcIds(const vector<string> & vpcIds) { DARABONBA_PTR_SET_VALUE(vpcIds_, vpcIds) };
    inline ListLoadBalancersRequest& setVpcIds(vector<string> && vpcIds) { DARABONBA_PTR_SET_RVALUE(vpcIds_, vpcIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListLoadBalancersRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The IP version. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    shared_ptr<string> addressIpVersion_ {};
    // The network type. Valid values:
    // 
    // *   **Internet**: The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. Therefore, the ALB instance can be accessed over the Internet.
    // *   **Intranet**: The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. In this case, the ALB instance can be accessed over the VPC where the ALB instance is deployed.
    shared_ptr<string> addressType_ {};
    // The domain name.
    shared_ptr<string> DNSName_ {};
    // The type of IPv6 address that is used by the ALB instance. Valid values:
    // 
    // *   **Internet**: The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. Therefore, the ALB instance can be accessed over the Internet.
    // *   **Intranet**: The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. Therefore, the ALB instance can be accessed over the VPC in which the ALB instance is deployed.
    shared_ptr<string> ipv6AddressType_ {};
    // The service status of the ALB instance. Valid values:
    // 
    // *   **Abnormal**
    // *   **Normal**
    shared_ptr<string> loadBalancerBussinessStatus_ {};
    // The instance IDs. You can specify at most 20 ALB instance IDs.
    shared_ptr<vector<string>> loadBalancerIds_ {};
    // The instance names. You can specify at most 10 instance names.
    shared_ptr<vector<string>> loadBalancerNames_ {};
    // The status of the ALB instance. Valid values:
    // 
    // *   **Inactive**: The ALB instance is disabled. The listeners do not forward traffic.
    // *   **Active**: The ALB instance is running.
    // *   **Provisioning**: The ALB instance is being created.
    // *   **Configuring**: The ALB instance is being modified.
    // *   **CreateFailed**: The system failed to create the ALB instance. In this case, you are not charged for the ALB instance. You can only delete the ALB instance. By default, the system deletes the ALB instances that are in the CreateFailed state within the last day.
    shared_ptr<string> loadBalancerStatus_ {};
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The billing method of the ALB instance. Set the value to
    // 
    // **PostPay**, which specifies the pay-as-you-go billing method. This is the default value.
    shared_ptr<string> payType_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags added to the ALB instance.
    shared_ptr<vector<ListLoadBalancersRequest::Tag>> tag_ {};
    // The ID of the VPC to which the ALB instance belongs. You can specify at most 10 VPC IDs.
    shared_ptr<vector<string>> vpcIds_ {};
    // The ID of the zone where the ALB instance is deployed.
    // 
    // You can call the [DescribeZones](https://help.aliyun.com/document_detail/189196.html) operation to query zones.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
