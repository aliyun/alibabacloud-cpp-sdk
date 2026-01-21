// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServicesByEndUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesByEndUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesByEndUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcEndpointServicesByEndUserResponseBody() = default ;
    ListVpcEndpointServicesByEndUserResponseBody(const ListVpcEndpointServicesByEndUserResponseBody &) = default ;
    ListVpcEndpointServicesByEndUserResponseBody(ListVpcEndpointServicesByEndUserResponseBody &&) = default ;
    ListVpcEndpointServicesByEndUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesByEndUserResponseBody() = default ;
    ListVpcEndpointServicesByEndUserResponseBody& operator=(const ListVpcEndpointServicesByEndUserResponseBody &) = default ;
    ListVpcEndpointServicesByEndUserResponseBody& operator=(ListVpcEndpointServicesByEndUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
        DARABONBA_PTR_TO_JSON(Payer, payer_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceDomain, serviceDomain_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
        DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcEndpointPolicySupported, vpcEndpointPolicySupported_);
        DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
        DARABONBA_PTR_TO_JSON(Zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
        DARABONBA_PTR_FROM_JSON(Payer, payer_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceDomain, serviceDomain_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
        DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcEndpointPolicySupported, vpcEndpointPolicySupported_);
        DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
        DARABONBA_PTR_FROM_JSON(Zones, zones_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->autoAcceptEnabled_ == nullptr && this->payer_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceDomain_ == nullptr && this->serviceId_ == nullptr
        && this->serviceName_ == nullptr && this->serviceResourceType_ == nullptr && this->serviceSupportIPv6_ == nullptr && this->serviceType_ == nullptr && this->tags_ == nullptr
        && this->vpcEndpointPolicySupported_ == nullptr && this->zoneAffinityEnabled_ == nullptr && this->zones_ == nullptr; };
      // addressIpVersion Field Functions 
      bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
      void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
      inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
      inline Services& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


      // autoAcceptEnabled Field Functions 
      bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
      void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
      inline bool getAutoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
      inline Services& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


      // payer Field Functions 
      bool hasPayer() const { return this->payer_ != nullptr;};
      void deletePayer() { this->payer_ = nullptr;};
      inline string getPayer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
      inline Services& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Services& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceDomain Field Functions 
      bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
      void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
      inline string getServiceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
      inline Services& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Services& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceResourceType Field Functions 
      bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
      void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
      inline string getServiceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
      inline Services& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


      // serviceSupportIPv6 Field Functions 
      bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
      void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
      inline bool getServiceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
      inline Services& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Services& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Services::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Services::Tags>) };
      inline vector<Services::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Services::Tags>) };
      inline Services& setTags(const vector<Services::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Services& setTags(vector<Services::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcEndpointPolicySupported Field Functions 
      bool hasVpcEndpointPolicySupported() const { return this->vpcEndpointPolicySupported_ != nullptr;};
      void deleteVpcEndpointPolicySupported() { this->vpcEndpointPolicySupported_ = nullptr;};
      inline bool getVpcEndpointPolicySupported() const { DARABONBA_PTR_GET_DEFAULT(vpcEndpointPolicySupported_, false) };
      inline Services& setVpcEndpointPolicySupported(bool vpcEndpointPolicySupported) { DARABONBA_PTR_SET_VALUE(vpcEndpointPolicySupported_, vpcEndpointPolicySupported) };


      // zoneAffinityEnabled Field Functions 
      bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
      void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
      inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
      inline Services& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<string> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
      inline vector<string> getZones() { DARABONBA_PTR_GET(zones_, vector<string>) };
      inline Services& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline Services& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      // The protocol. Valid values:
      // 
      // *   **IPv4**
      // *   **DualStack**
      shared_ptr<string> addressIpVersion_ {};
      shared_ptr<bool> autoAcceptEnabled_ {};
      // The payer. Valid values:
      // 
      // *   **Endpoint**: the service consumer
      // *   **EndpointService**: the service provider
      shared_ptr<string> payer_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The domain name of the endpoint service that can be associated with the endpoint.
      shared_ptr<string> serviceDomain_ {};
      // The ID of the endpoint service that can be associated with the endpoint.
      shared_ptr<string> serviceId_ {};
      // The name of the endpoint service that can be associated with the endpoint.
      shared_ptr<string> serviceName_ {};
      // The type of the service resource. Valid values:
      // 
      // *   **slb**: Classic Load Balancer (CLB) instance
      // *   **alb**: Application Load Balancer (ALB) instance
      // *   **nlb**: Network Load Balancer (NLB) instance
      shared_ptr<string> serviceResourceType_ {};
      // Indicates whether IPv6 is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> serviceSupportIPv6_ {};
      // The type of the endpoint service.
      // 
      // Only **Interface** is returned, which indicates an interface endpoint. You can specify **CLB** and **ALB** instances as service resources.
      shared_ptr<string> serviceType_ {};
      // The list of tags.
      shared_ptr<vector<Services::Tags>> tags_ {};
      shared_ptr<bool> vpcEndpointPolicySupported_ {};
      shared_ptr<bool> zoneAffinityEnabled_ {};
      // The zones of the endpoint service that can be associated with the endpoint.
      shared_ptr<vector<string>> zones_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->services_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ListVpcEndpointServicesByEndUserResponseBody::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<ListVpcEndpointServicesByEndUserResponseBody::Services>) };
    inline vector<ListVpcEndpointServicesByEndUserResponseBody::Services> getServices() { DARABONBA_PTR_GET(services_, vector<ListVpcEndpointServicesByEndUserResponseBody::Services>) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setServices(const vector<ListVpcEndpointServicesByEndUserResponseBody::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setServices(vector<ListVpcEndpointServicesByEndUserResponseBody::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about endpoint services.
    shared_ptr<vector<ListVpcEndpointServicesByEndUserResponseBody::Services>> services_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
