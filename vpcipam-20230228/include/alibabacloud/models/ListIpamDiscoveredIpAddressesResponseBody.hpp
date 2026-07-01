// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamDiscoveredIpAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamDiscoveredIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamDiscoveredIpAddresses, ipamDiscoveredIpAddresses_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamDiscoveredIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamDiscoveredIpAddresses, ipamDiscoveredIpAddresses_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamDiscoveredIpAddressesResponseBody() = default ;
    ListIpamDiscoveredIpAddressesResponseBody(const ListIpamDiscoveredIpAddressesResponseBody &) = default ;
    ListIpamDiscoveredIpAddressesResponseBody(ListIpamDiscoveredIpAddressesResponseBody &&) = default ;
    ListIpamDiscoveredIpAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamDiscoveredIpAddressesResponseBody() = default ;
    ListIpamDiscoveredIpAddressesResponseBody& operator=(const ListIpamDiscoveredIpAddressesResponseBody &) = default ;
    ListIpamDiscoveredIpAddressesResponseBody& operator=(ListIpamDiscoveredIpAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpamDiscoveredIpAddresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpamDiscoveredIpAddresses& obj) { 
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_TO_JSON(ResourceServiceType, resourceServiceType_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, IpamDiscoveredIpAddresses& obj) { 
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_FROM_JSON(ResourceServiceType, resourceServiceType_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      IpamDiscoveredIpAddresses() = default ;
      IpamDiscoveredIpAddresses(const IpamDiscoveredIpAddresses &) = default ;
      IpamDiscoveredIpAddresses(IpamDiscoveredIpAddresses &&) = default ;
      IpamDiscoveredIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpamDiscoveredIpAddresses() = default ;
      IpamDiscoveredIpAddresses& operator=(const IpamDiscoveredIpAddresses &) = default ;
      IpamDiscoveredIpAddresses& operator=(IpamDiscoveredIpAddresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipAddress_ == nullptr
        && this->ipVersion_ == nullptr && this->resourceId_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceServiceType_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
      inline IpamDiscoveredIpAddresses& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline IpamDiscoveredIpAddresses& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline IpamDiscoveredIpAddresses& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline IpamDiscoveredIpAddresses& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceServiceType Field Functions 
      bool hasResourceServiceType() const { return this->resourceServiceType_ != nullptr;};
      void deleteResourceServiceType() { this->resourceServiceType_ = nullptr;};
      inline string getResourceServiceType() const { DARABONBA_PTR_GET_DEFAULT(resourceServiceType_, "") };
      inline IpamDiscoveredIpAddresses& setResourceServiceType(string resourceServiceType) { DARABONBA_PTR_SET_VALUE(resourceServiceType_, resourceServiceType) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline IpamDiscoveredIpAddresses& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline IpamDiscoveredIpAddresses& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The IP address in use.
      shared_ptr<string> ipAddress_ {};
      // The IP version. Valid value:
      // 
      // - **IPv4**: Indicates the IPv4 protocol.
      shared_ptr<string> ipVersion_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The ID of the region in which the resource resides.
      shared_ptr<string> resourceRegionId_ {};
      // The cloud service to which the resource belongs.
      shared_ptr<string> resourceServiceType_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ipamDiscoveredIpAddresses_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListIpamDiscoveredIpAddressesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamDiscoveredIpAddresses Field Functions 
    bool hasIpamDiscoveredIpAddresses() const { return this->ipamDiscoveredIpAddresses_ != nullptr;};
    void deleteIpamDiscoveredIpAddresses() { this->ipamDiscoveredIpAddresses_ = nullptr;};
    inline const vector<ListIpamDiscoveredIpAddressesResponseBody::IpamDiscoveredIpAddresses> & getIpamDiscoveredIpAddresses() const { DARABONBA_PTR_GET_CONST(ipamDiscoveredIpAddresses_, vector<ListIpamDiscoveredIpAddressesResponseBody::IpamDiscoveredIpAddresses>) };
    inline vector<ListIpamDiscoveredIpAddressesResponseBody::IpamDiscoveredIpAddresses> getIpamDiscoveredIpAddresses() { DARABONBA_PTR_GET(ipamDiscoveredIpAddresses_, vector<ListIpamDiscoveredIpAddressesResponseBody::IpamDiscoveredIpAddresses>) };
    inline ListIpamDiscoveredIpAddressesResponseBody& setIpamDiscoveredIpAddresses(const vector<ListIpamDiscoveredIpAddressesResponseBody::IpamDiscoveredIpAddresses> & ipamDiscoveredIpAddresses) { DARABONBA_PTR_SET_VALUE(ipamDiscoveredIpAddresses_, ipamDiscoveredIpAddresses) };
    inline ListIpamDiscoveredIpAddressesResponseBody& setIpamDiscoveredIpAddresses(vector<ListIpamDiscoveredIpAddressesResponseBody::IpamDiscoveredIpAddresses> && ipamDiscoveredIpAddresses) { DARABONBA_PTR_SET_RVALUE(ipamDiscoveredIpAddresses_, ipamDiscoveredIpAddresses) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamDiscoveredIpAddressesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamDiscoveredIpAddressesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamDiscoveredIpAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIpamDiscoveredIpAddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // Details of the used IP addresses.
    shared_ptr<vector<ListIpamDiscoveredIpAddressesResponseBody::IpamDiscoveredIpAddresses>> ipamDiscoveredIpAddresses_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 200. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Use this token in a subsequent request to retrieve the next page of results. Valid values:
    // 
    // - Empty: All results have been returned.
    // 
    // - If **NextToken** has a value, it is the token for the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
