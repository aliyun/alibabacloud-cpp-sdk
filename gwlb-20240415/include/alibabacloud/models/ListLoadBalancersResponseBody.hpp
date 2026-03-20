// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
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
  class ListLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody(ListLoadBalancersResponseBody &&) = default ;
    ListLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody& operator=(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody& operator=(ListLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalancers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancers& obj) { 
        DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancers& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
      };
      LoadBalancers() = default ;
      LoadBalancers(const LoadBalancers &) = default ;
      LoadBalancers(LoadBalancers &&) = default ;
      LoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancers() = default ;
      LoadBalancers& operator=(const LoadBalancers &) = default ;
      LoadBalancers& operator=(LoadBalancers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZoneMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
          DARABONBA_PTR_TO_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(LoadBalancerAddresses, loadBalancerAddresses_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        ZoneMappings() = default ;
        ZoneMappings(const ZoneMappings &) = default ;
        ZoneMappings(ZoneMappings &&) = default ;
        ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneMappings() = default ;
        ZoneMappings& operator=(const ZoneMappings &) = default ;
        ZoneMappings& operator=(ZoneMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LoadBalancerAddresses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LoadBalancerAddresses& obj) { 
            DARABONBA_PTR_TO_JSON(EniId, eniId_);
            DARABONBA_PTR_TO_JSON(PrivateIpv4Address, privateIpv4Address_);
          };
          friend void from_json(const Darabonba::Json& j, LoadBalancerAddresses& obj) { 
            DARABONBA_PTR_FROM_JSON(EniId, eniId_);
            DARABONBA_PTR_FROM_JSON(PrivateIpv4Address, privateIpv4Address_);
          };
          LoadBalancerAddresses() = default ;
          LoadBalancerAddresses(const LoadBalancerAddresses &) = default ;
          LoadBalancerAddresses(LoadBalancerAddresses &&) = default ;
          LoadBalancerAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LoadBalancerAddresses() = default ;
          LoadBalancerAddresses& operator=(const LoadBalancerAddresses &) = default ;
          LoadBalancerAddresses& operator=(LoadBalancerAddresses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->eniId_ == nullptr
        && this->privateIpv4Address_ == nullptr; };
          // eniId Field Functions 
          bool hasEniId() const { return this->eniId_ != nullptr;};
          void deleteEniId() { this->eniId_ = nullptr;};
          inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
          inline LoadBalancerAddresses& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


          // privateIpv4Address Field Functions 
          bool hasPrivateIpv4Address() const { return this->privateIpv4Address_ != nullptr;};
          void deletePrivateIpv4Address() { this->privateIpv4Address_ = nullptr;};
          inline string getPrivateIpv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIpv4Address_, "") };
          inline LoadBalancerAddresses& setPrivateIpv4Address(string privateIpv4Address) { DARABONBA_PTR_SET_VALUE(privateIpv4Address_, privateIpv4Address) };


        protected:
          // The ID of the elastic network interface (ENI) used by the GWLB instance.
          shared_ptr<string> eniId_ {};
          // The private IPv4 address.
          shared_ptr<string> privateIpv4Address_ {};
        };

        virtual bool empty() const override { return this->loadBalancerAddresses_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
        // loadBalancerAddresses Field Functions 
        bool hasLoadBalancerAddresses() const { return this->loadBalancerAddresses_ != nullptr;};
        void deleteLoadBalancerAddresses() { this->loadBalancerAddresses_ = nullptr;};
        inline const vector<ZoneMappings::LoadBalancerAddresses> & getLoadBalancerAddresses() const { DARABONBA_PTR_GET_CONST(loadBalancerAddresses_, vector<ZoneMappings::LoadBalancerAddresses>) };
        inline vector<ZoneMappings::LoadBalancerAddresses> getLoadBalancerAddresses() { DARABONBA_PTR_GET(loadBalancerAddresses_, vector<ZoneMappings::LoadBalancerAddresses>) };
        inline ZoneMappings& setLoadBalancerAddresses(const vector<ZoneMappings::LoadBalancerAddresses> & loadBalancerAddresses) { DARABONBA_PTR_SET_VALUE(loadBalancerAddresses_, loadBalancerAddresses) };
        inline ZoneMappings& setLoadBalancerAddresses(vector<ZoneMappings::LoadBalancerAddresses> && loadBalancerAddresses) { DARABONBA_PTR_SET_RVALUE(loadBalancerAddresses_, loadBalancerAddresses) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The GWLB instance addresses.
        shared_ptr<vector<ZoneMappings::LoadBalancerAddresses>> loadBalancerAddresses_ {};
        // The ID of the vSwitch in the zone. By default, each zone contains one vSwitch and one subnet.
        shared_ptr<string> vSwitchId_ {};
        // The zone ID. You can call the DescribeZones operation to query the most recent zone list.
        shared_ptr<string> zoneId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. The tag key cannot be an empty string.
        // 
        // The tag key can be up to 128 characters in length. The tag key cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
        shared_ptr<string> key_ {};
        // The tag value. You can specify at most 20 tag values. The tag value cannot be an empty string.
        // 
        // The tag value can be up to 128 characters in length. It must start with a letter and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->createTime_ == nullptr && this->loadBalancerBusinessStatus_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerStatus_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr && this->zoneMappings_ == nullptr; };
      // addressIpVersion Field Functions 
      bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
      void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
      inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
      inline LoadBalancers& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LoadBalancers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // loadBalancerBusinessStatus Field Functions 
      bool hasLoadBalancerBusinessStatus() const { return this->loadBalancerBusinessStatus_ != nullptr;};
      void deleteLoadBalancerBusinessStatus() { this->loadBalancerBusinessStatus_ = nullptr;};
      inline string getLoadBalancerBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBusinessStatus_, "") };
      inline LoadBalancers& setLoadBalancerBusinessStatus(string loadBalancerBusinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBusinessStatus_, loadBalancerBusinessStatus) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline LoadBalancers& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // loadBalancerName Field Functions 
      bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
      void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
      inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
      inline LoadBalancers& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


      // loadBalancerStatus Field Functions 
      bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
      void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
      inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
      inline LoadBalancers& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline LoadBalancers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<LoadBalancers::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<LoadBalancers::Tags>) };
      inline vector<LoadBalancers::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<LoadBalancers::Tags>) };
      inline LoadBalancers& setTags(const vector<LoadBalancers::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline LoadBalancers& setTags(vector<LoadBalancers::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline LoadBalancers& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneMappings Field Functions 
      bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
      void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
      inline const vector<LoadBalancers::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<LoadBalancers::ZoneMappings>) };
      inline vector<LoadBalancers::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<LoadBalancers::ZoneMappings>) };
      inline LoadBalancers& setZoneMappings(const vector<LoadBalancers::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
      inline LoadBalancers& setZoneMappings(vector<LoadBalancers::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


    protected:
      // The IP version. Valid values:
      // 
      // *   **IPv4**
      shared_ptr<string> addressIpVersion_ {};
      // The time when the resource was created. The time follows the ISO 8601 standard in the **yyyy-MM-ddTHH:mm:ssZ** format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The business status of the GWLB instance. Valid values:
      // 
      // *   **Normal**: running as expected
      // *   **FinancialLocked**: locked due to overdue payments
      shared_ptr<string> loadBalancerBusinessStatus_ {};
      // The GWLB instance ID.
      shared_ptr<string> loadBalancerId_ {};
      // The GWLB instance name.
      // 
      // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
      shared_ptr<string> loadBalancerName_ {};
      // The GWLB instance status. Valid values:
      // 
      // *   **Active**: The GWLB instance is running.
      // *   **Inactive**: The GWLB instance is disabled. Listeners of GWLB instances in the Inactive state do not forward traffic.
      // *   **Provisioning**: The GWLB instance is being created.
      // *   **Configuring**: The GWLB instance is being modified.
      shared_ptr<string> loadBalancerStatus_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The tags.
      shared_ptr<vector<LoadBalancers::Tags>> tags_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The mappings between zones and vSwitches. You must specify at least one zone. You can specify at most 20 zones. If the region supports two or more zones, specify at least two zones.
      shared_ptr<vector<LoadBalancers::ZoneMappings>> zoneMappings_ {};
    };

    virtual bool empty() const override { return this->loadBalancers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<ListLoadBalancersResponseBody::LoadBalancers> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline vector<ListLoadBalancersResponseBody::LoadBalancers> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(const vector<ListLoadBalancersResponseBody::LoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(vector<ListLoadBalancersResponseBody::LoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListLoadBalancersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLoadBalancersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLoadBalancersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The GWLB instances.
    shared_ptr<vector<ListLoadBalancersResponseBody::LoadBalancers>> loadBalancers_ {};
    // The number of entries per page. Valid values: 1 to 1000. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If NextToken is empty, no next page exists.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
