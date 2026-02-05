// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESRESPONSEBODY_HPP_
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
  class ListVpcEndpointServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcEndpointServicesResponseBody() = default ;
    ListVpcEndpointServicesResponseBody(const ListVpcEndpointServicesResponseBody &) = default ;
    ListVpcEndpointServicesResponseBody(ListVpcEndpointServicesResponseBody &&) = default ;
    ListVpcEndpointServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesResponseBody() = default ;
    ListVpcEndpointServicesResponseBody& operator=(const ListVpcEndpointServicesResponseBody &) = default ;
    ListVpcEndpointServicesResponseBody& operator=(ListVpcEndpointServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
        DARABONBA_PTR_TO_JSON(ConnectBandwidth, connectBandwidth_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
        DARABONBA_PTR_TO_JSON(MinBandwidth, minBandwidth_);
        DARABONBA_PTR_TO_JSON(Payer, payer_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
        DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
        DARABONBA_PTR_TO_JSON(ServiceDomain, serviceDomain_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(SupportedRegionSet, supportedRegionSet_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
        DARABONBA_PTR_FROM_JSON(ConnectBandwidth, connectBandwidth_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
        DARABONBA_PTR_FROM_JSON(MinBandwidth, minBandwidth_);
        DARABONBA_PTR_FROM_JSON(Payer, payer_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
        DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
        DARABONBA_PTR_FROM_JSON(ServiceDomain, serviceDomain_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(SupportedRegionSet, supportedRegionSet_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
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
        // The key of the tag added to the resource.
        shared_ptr<string> key_ {};
        // The value of the tag added to the resource.
        shared_ptr<string> value_ {};
      };

      class SupportedRegionSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedRegionSet& obj) { 
          DARABONBA_PTR_TO_JSON(RegionBusinessStatus, regionBusinessStatus_);
          DARABONBA_PTR_TO_JSON(RegionServiceStatus, regionServiceStatus_);
          DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
          DARABONBA_PTR_TO_JSON(SupportedRegionId, supportedRegionId_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedRegionSet& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionBusinessStatus, regionBusinessStatus_);
          DARABONBA_PTR_FROM_JSON(RegionServiceStatus, regionServiceStatus_);
          DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
          DARABONBA_PTR_FROM_JSON(SupportedRegionId, supportedRegionId_);
        };
        SupportedRegionSet() = default ;
        SupportedRegionSet(const SupportedRegionSet &) = default ;
        SupportedRegionSet(SupportedRegionSet &&) = default ;
        SupportedRegionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedRegionSet() = default ;
        SupportedRegionSet& operator=(const SupportedRegionSet &) = default ;
        SupportedRegionSet& operator=(SupportedRegionSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionBusinessStatus_ == nullptr
        && this->regionServiceStatus_ == nullptr && this->serviceRegionId_ == nullptr && this->supportedRegionId_ == nullptr; };
        // regionBusinessStatus Field Functions 
        bool hasRegionBusinessStatus() const { return this->regionBusinessStatus_ != nullptr;};
        void deleteRegionBusinessStatus() { this->regionBusinessStatus_ = nullptr;};
        inline string getRegionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(regionBusinessStatus_, "") };
        inline SupportedRegionSet& setRegionBusinessStatus(string regionBusinessStatus) { DARABONBA_PTR_SET_VALUE(regionBusinessStatus_, regionBusinessStatus) };


        // regionServiceStatus Field Functions 
        bool hasRegionServiceStatus() const { return this->regionServiceStatus_ != nullptr;};
        void deleteRegionServiceStatus() { this->regionServiceStatus_ = nullptr;};
        inline string getRegionServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(regionServiceStatus_, "") };
        inline SupportedRegionSet& setRegionServiceStatus(string regionServiceStatus) { DARABONBA_PTR_SET_VALUE(regionServiceStatus_, regionServiceStatus) };


        // serviceRegionId Field Functions 
        bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
        void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
        inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
        inline SupportedRegionSet& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


        // supportedRegionId Field Functions 
        bool hasSupportedRegionId() const { return this->supportedRegionId_ != nullptr;};
        void deleteSupportedRegionId() { this->supportedRegionId_ = nullptr;};
        inline string getSupportedRegionId() const { DARABONBA_PTR_GET_DEFAULT(supportedRegionId_, "") };
        inline SupportedRegionSet& setSupportedRegionId(string supportedRegionId) { DARABONBA_PTR_SET_VALUE(supportedRegionId_, supportedRegionId) };


      protected:
        shared_ptr<string> regionBusinessStatus_ {};
        shared_ptr<string> regionServiceStatus_ {};
        shared_ptr<string> serviceRegionId_ {};
        shared_ptr<string> supportedRegionId_ {};
      };

      virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->autoAcceptEnabled_ == nullptr && this->connectBandwidth_ == nullptr && this->createTime_ == nullptr && this->maxBandwidth_ == nullptr && this->minBandwidth_ == nullptr
        && this->payer_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceBusinessStatus_ == nullptr && this->serviceDescription_ == nullptr
        && this->serviceDomain_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceResourceType_ == nullptr && this->serviceStatus_ == nullptr
        && this->serviceSupportIPv6_ == nullptr && this->serviceType_ == nullptr && this->supportedRegionSet_ == nullptr && this->tags_ == nullptr && this->zoneAffinityEnabled_ == nullptr; };
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


      // connectBandwidth Field Functions 
      bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
      void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
      inline int32_t getConnectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
      inline Services& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Services& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // maxBandwidth Field Functions 
      bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
      void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
      inline int32_t getMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
      inline Services& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


      // minBandwidth Field Functions 
      bool hasMinBandwidth() const { return this->minBandwidth_ != nullptr;};
      void deleteMinBandwidth() { this->minBandwidth_ = nullptr;};
      inline int32_t getMinBandwidth() const { DARABONBA_PTR_GET_DEFAULT(minBandwidth_, 0) };
      inline Services& setMinBandwidth(int32_t minBandwidth) { DARABONBA_PTR_SET_VALUE(minBandwidth_, minBandwidth) };


      // payer Field Functions 
      bool hasPayer() const { return this->payer_ != nullptr;};
      void deletePayer() { this->payer_ = nullptr;};
      inline string getPayer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
      inline Services& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Services& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Services& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceBusinessStatus Field Functions 
      bool hasServiceBusinessStatus() const { return this->serviceBusinessStatus_ != nullptr;};
      void deleteServiceBusinessStatus() { this->serviceBusinessStatus_ = nullptr;};
      inline string getServiceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceBusinessStatus_, "") };
      inline Services& setServiceBusinessStatus(string serviceBusinessStatus) { DARABONBA_PTR_SET_VALUE(serviceBusinessStatus_, serviceBusinessStatus) };


      // serviceDescription Field Functions 
      bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
      void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
      inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
      inline Services& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


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


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline Services& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


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


      // supportedRegionSet Field Functions 
      bool hasSupportedRegionSet() const { return this->supportedRegionSet_ != nullptr;};
      void deleteSupportedRegionSet() { this->supportedRegionSet_ = nullptr;};
      inline const vector<Services::SupportedRegionSet> & getSupportedRegionSet() const { DARABONBA_PTR_GET_CONST(supportedRegionSet_, vector<Services::SupportedRegionSet>) };
      inline vector<Services::SupportedRegionSet> getSupportedRegionSet() { DARABONBA_PTR_GET(supportedRegionSet_, vector<Services::SupportedRegionSet>) };
      inline Services& setSupportedRegionSet(const vector<Services::SupportedRegionSet> & supportedRegionSet) { DARABONBA_PTR_SET_VALUE(supportedRegionSet_, supportedRegionSet) };
      inline Services& setSupportedRegionSet(vector<Services::SupportedRegionSet> && supportedRegionSet) { DARABONBA_PTR_SET_RVALUE(supportedRegionSet_, supportedRegionSet) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Services::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Services::Tags>) };
      inline vector<Services::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Services::Tags>) };
      inline Services& setTags(const vector<Services::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Services& setTags(vector<Services::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // zoneAffinityEnabled Field Functions 
      bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
      void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
      inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
      inline Services& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    protected:
      // The protocol. Valid values:
      // 
      // *   **IPv4**
      // *   **DualStack**
      shared_ptr<string> addressIpVersion_ {};
      // Indicates whether endpoint connection requests are automatically accepted. Valid values:
      // 
      // *   **true**: Endpoint connection requests are automatically accepted.
      // *   **false**: Endpoint connection requests are not automatically accepted.
      shared_ptr<bool> autoAcceptEnabled_ {};
      // The default maximum bandwidth of the endpoint connection. Unit: Mbit/s.
      shared_ptr<int32_t> connectBandwidth_ {};
      // The time when the endpoint service was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The maximum bandwidth of the endpoint connection. Unit: Mbit/s.
      shared_ptr<int32_t> maxBandwidth_ {};
      // The minimum bandwidth of the endpoint connection. Unit: Mbit/s.
      shared_ptr<int32_t> minBandwidth_ {};
      // The payer. Valid values:
      // 
      // *   **Endpoint**: service consumer
      // *   **EndpointService**: service provider
      shared_ptr<string> payer_ {};
      // The region ID of the endpoint service.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The service state of the endpoint service. Valid values:
      // 
      // *   **Normal**: The endpoint service runs as expected.
      // *   **FinancialLocked**: The endpoint service is locked due to overdue payments.
      shared_ptr<string> serviceBusinessStatus_ {};
      // The description of the endpoint service.
      shared_ptr<string> serviceDescription_ {};
      // The domain name of the endpoint service.
      shared_ptr<string> serviceDomain_ {};
      // The ID of the endpoint service.
      shared_ptr<string> serviceId_ {};
      // The name of the endpoint service.
      shared_ptr<string> serviceName_ {};
      // The type of the service resource. Valid values:
      // 
      // *   **slb**: Classic Load Balancer (CLB) instance
      // *   **alb**: Application Load Balancer (ALB) instance
      // *   **nlb**: Network Load Balancer (NLB) instance
      shared_ptr<string> serviceResourceType_ {};
      // The state of the endpoint service. Valid values:
      // 
      // *   **Creating**: The endpoint service is being created.
      // *   **Pending**: The endpoint service is being modified.
      // *   **Active**: The endpoint service is available.
      // *   **Deleting**: The endpoint service is being deleted.
      shared_ptr<string> serviceStatus_ {};
      // Indicates whether the endpoint service supports IPv6. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> serviceSupportIPv6_ {};
      // The type of the endpoint service.
      // 
      // *   Only **Interface** may be returned. You can specify CLB, ALB, and NLB instances as the service resources of the endpoint service.
      shared_ptr<string> serviceType_ {};
      shared_ptr<vector<Services::SupportedRegionSet>> supportedRegionSet_ {};
      // The tags added to the resource.
      shared_ptr<vector<Services::Tags>> tags_ {};
      // Indicates whether zone affinity is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> zoneAffinityEnabled_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->services_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServicesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ListVpcEndpointServicesResponseBody::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<ListVpcEndpointServicesResponseBody::Services>) };
    inline vector<ListVpcEndpointServicesResponseBody::Services> getServices() { DARABONBA_PTR_GET(services_, vector<ListVpcEndpointServicesResponseBody::Services>) };
    inline ListVpcEndpointServicesResponseBody& setServices(const vector<ListVpcEndpointServicesResponseBody::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListVpcEndpointServicesResponseBody& setServices(vector<ListVpcEndpointServicesResponseBody::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpcEndpointServicesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


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
    // The endpoint services.
    shared_ptr<vector<ListVpcEndpointServicesResponseBody::Services>> services_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
