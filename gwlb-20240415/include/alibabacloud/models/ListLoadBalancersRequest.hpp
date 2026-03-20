// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class ListLoadBalancersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(LoadBalancerNames, loadBalancerNames_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TrafficMode, trafficMode_);
      DARABONBA_PTR_TO_JSON(VpcIds, vpcIds_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerNames, loadBalancerNames_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TrafficMode, trafficMode_);
      DARABONBA_PTR_FROM_JSON(VpcIds, vpcIds_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
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
      // The tag key. You cannot specify an empty string as a tag key.
      // 
      // The tag key can be up to 128 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. It can be up to 256 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->loadBalancerBusinessStatus_ == nullptr && this->loadBalancerIds_ == nullptr && this->loadBalancerNames_ == nullptr && this->loadBalancerStatus_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->skip_ == nullptr && this->tag_ == nullptr && this->trafficMode_ == nullptr
        && this->vpcIds_ == nullptr && this->zoneIds_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListLoadBalancersRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // loadBalancerBusinessStatus Field Functions 
    bool hasLoadBalancerBusinessStatus() const { return this->loadBalancerBusinessStatus_ != nullptr;};
    void deleteLoadBalancerBusinessStatus() { this->loadBalancerBusinessStatus_ = nullptr;};
    inline string getLoadBalancerBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBusinessStatus_, "") };
    inline ListLoadBalancersRequest& setLoadBalancerBusinessStatus(string loadBalancerBusinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBusinessStatus_, loadBalancerBusinessStatus) };


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


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLoadBalancersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListLoadBalancersRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListLoadBalancersRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListLoadBalancersRequest::Tag>) };
    inline vector<ListLoadBalancersRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListLoadBalancersRequest::Tag>) };
    inline ListLoadBalancersRequest& setTag(const vector<ListLoadBalancersRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListLoadBalancersRequest& setTag(vector<ListLoadBalancersRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // trafficMode Field Functions 
    bool hasTrafficMode() const { return this->trafficMode_ != nullptr;};
    void deleteTrafficMode() { this->trafficMode_ = nullptr;};
    inline string getTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(trafficMode_, "") };
    inline ListLoadBalancersRequest& setTrafficMode(string trafficMode) { DARABONBA_PTR_SET_VALUE(trafficMode_, trafficMode) };


    // vpcIds Field Functions 
    bool hasVpcIds() const { return this->vpcIds_ != nullptr;};
    void deleteVpcIds() { this->vpcIds_ = nullptr;};
    inline const vector<string> & getVpcIds() const { DARABONBA_PTR_GET_CONST(vpcIds_, vector<string>) };
    inline vector<string> getVpcIds() { DARABONBA_PTR_GET(vpcIds_, vector<string>) };
    inline ListLoadBalancersRequest& setVpcIds(const vector<string> & vpcIds) { DARABONBA_PTR_SET_VALUE(vpcIds_, vpcIds) };
    inline ListLoadBalancersRequest& setVpcIds(vector<string> && vpcIds) { DARABONBA_PTR_SET_RVALUE(vpcIds_, vpcIds) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & getZoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> getZoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline ListLoadBalancersRequest& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline ListLoadBalancersRequest& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    // The IP version of the NLB instance. Valid values:
    // 
    // *   **Ipv4**
    // 
    // Enumeration values:
    // 
    // *   IPv4: IPv4
    // *   DualStack: dual-stack
    shared_ptr<string> addressIpVersion_ {};
    // The business status of the GWLB instance. Valid values:
    // 
    // *   **Normal**: running as expected
    // *   **FinancialLocked**: locked due to overdue payments
    shared_ptr<string> loadBalancerBusinessStatus_ {};
    // The GWLB instance IDs. You can query at most 20 GWLB instances in each call.
    shared_ptr<vector<string>> loadBalancerIds_ {};
    // The GWLB instance names. You can specify at most 20 GWLB instance names in each call.
    shared_ptr<vector<string>> loadBalancerNames_ {};
    // The GWLB instance status. Valid values:
    // 
    // *   **Active**: The GWLB instance is running.
    // *   **Inactive**: The GWLB instance is disabled. Listeners of GWLB instances in the Inactive state do not forward traffic.
    // *   **Provisioning**: The GWLB instance is being created.
    // *   **Configuring**: The GWLB instance is being modified.
    shared_ptr<string> loadBalancerStatus_ {};
    // The number of entries per page. Valid values: 1 to 1000. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The number of entries to be skipped in the call.
    shared_ptr<int32_t> skip_ {};
    // The tags. You can specify up to 20 tags in each call.
    shared_ptr<vector<ListLoadBalancersRequest::Tag>> tag_ {};
    // Specifies the traffic processing mode. Valid values:
    // 
    // *   **LoadBalance**: load balancing mode. GWLB continues to forward traffic to backend servers.
    // *   **ByPass**: bypass mode. GWLB directly returns traffic to the GWLB endpoint without forwarding it to the backend servers.
    shared_ptr<string> trafficMode_ {};
    // The virtual private cloud (VPC) IDs. You can query at most 20 IDs in each call.
    shared_ptr<vector<string>> vpcIds_ {};
    // The zone IDs. You can query at most 20 zone IDs in each call.
    shared_ptr<vector<string>> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
