// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSRESPONSEBODY_HPP_
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
  class ListVpcEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcEndpointsResponseBody() = default ;
    ListVpcEndpointsResponseBody(const ListVpcEndpointsResponseBody &) = default ;
    ListVpcEndpointsResponseBody(ListVpcEndpointsResponseBody &&) = default ;
    ListVpcEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointsResponseBody() = default ;
    ListVpcEndpointsResponseBody& operator=(const ListVpcEndpointsResponseBody &) = default ;
    ListVpcEndpointsResponseBody& operator=(ListVpcEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
        DARABONBA_PTR_TO_JSON(EndpointBusinessStatus, endpointBusinessStatus_);
        DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
        DARABONBA_PTR_TO_JSON(EndpointDomain, endpointDomain_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_TO_JSON(EndpointStatus, endpointStatus_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
        DARABONBA_PTR_FROM_JSON(EndpointBusinessStatus, endpointBusinessStatus_);
        DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
        DARABONBA_PTR_FROM_JSON(EndpointDomain, endpointDomain_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_FROM_JSON(EndpointStatus, endpointStatus_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
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

      virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->bandwidth_ == nullptr && this->connectionStatus_ == nullptr && this->createTime_ == nullptr && this->crossRegionBandwidth_ == nullptr && this->endpointBusinessStatus_ == nullptr
        && this->endpointDescription_ == nullptr && this->endpointDomain_ == nullptr && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->endpointStatus_ == nullptr
        && this->endpointType_ == nullptr && this->policyDocument_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwner_ == nullptr
        && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceRegionId_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr
        && this->zoneAffinityEnabled_ == nullptr; };
      // addressIpVersion Field Functions 
      bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
      void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
      inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
      inline Endpoints& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
      inline Endpoints& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline Endpoints& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Endpoints& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossRegionBandwidth Field Functions 
      bool hasCrossRegionBandwidth() const { return this->crossRegionBandwidth_ != nullptr;};
      void deleteCrossRegionBandwidth() { this->crossRegionBandwidth_ = nullptr;};
      inline int32_t getCrossRegionBandwidth() const { DARABONBA_PTR_GET_DEFAULT(crossRegionBandwidth_, 0) };
      inline Endpoints& setCrossRegionBandwidth(int32_t crossRegionBandwidth) { DARABONBA_PTR_SET_VALUE(crossRegionBandwidth_, crossRegionBandwidth) };


      // endpointBusinessStatus Field Functions 
      bool hasEndpointBusinessStatus() const { return this->endpointBusinessStatus_ != nullptr;};
      void deleteEndpointBusinessStatus() { this->endpointBusinessStatus_ = nullptr;};
      inline string getEndpointBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointBusinessStatus_, "") };
      inline Endpoints& setEndpointBusinessStatus(string endpointBusinessStatus) { DARABONBA_PTR_SET_VALUE(endpointBusinessStatus_, endpointBusinessStatus) };


      // endpointDescription Field Functions 
      bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
      void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
      inline string getEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
      inline Endpoints& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


      // endpointDomain Field Functions 
      bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
      void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
      inline string getEndpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
      inline Endpoints& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Endpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointName Field Functions 
      bool hasEndpointName() const { return this->endpointName_ != nullptr;};
      void deleteEndpointName() { this->endpointName_ = nullptr;};
      inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
      inline Endpoints& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


      // endpointStatus Field Functions 
      bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
      void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
      inline string getEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
      inline Endpoints& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // policyDocument Field Functions 
      bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
      void deletePolicyDocument() { this->policyDocument_ = nullptr;};
      inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
      inline Endpoints& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Endpoints& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Endpoints& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceOwner Field Functions 
      bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
      void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
      inline bool getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, false) };
      inline Endpoints& setResourceOwner(bool resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Endpoints& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Endpoints& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // serviceRegionId Field Functions 
      bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
      void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
      inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
      inline Endpoints& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Endpoints::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Endpoints::Tags>) };
      inline vector<Endpoints::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Endpoints::Tags>) };
      inline Endpoints& setTags(const vector<Endpoints::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Endpoints& setTags(vector<Endpoints::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneAffinityEnabled Field Functions 
      bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
      void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
      inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
      inline Endpoints& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    protected:
      // The protocol. Valid values:
      // 
      // *   **IPv4**
      // *   **DualStack**
      shared_ptr<string> addressIpVersion_ {};
      // The bandwidth of the endpoint connection. Unit: Mbit/s.
      shared_ptr<int64_t> bandwidth_ {};
      // The state of the endpoint connection. Valid values:
      // 
      // *   **Pending**: The endpoint connection is being modified.
      // *   **Connecting**: The endpoint connection is being established.
      // *   **Connected**: The endpoint connection is established.
      // *   **Disconnecting**: The endpoint is being disconnected from the endpoint service.
      // *   **Disconnected**: The endpoint is disconnected from the endpoint service.
      // *   **Deleting**: The endpoint connection is being deleted.
      // *   **ServiceDeleted**: The corresponding service is deleted.
      shared_ptr<string> connectionStatus_ {};
      // The time when the endpoint was created.
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> crossRegionBandwidth_ {};
      // The service state of the endpoint. Valid values:
      // 
      // *   **Normal**: The endpoint runs as expected.
      // *   **FinancialLocked**: The endpoint is locked due to overdue payments.
      shared_ptr<string> endpointBusinessStatus_ {};
      // The description of the endpoint.
      shared_ptr<string> endpointDescription_ {};
      // The domain name of the endpoint.
      shared_ptr<string> endpointDomain_ {};
      // The ID of the endpoint.
      shared_ptr<string> endpointId_ {};
      // The name of the endpoint.
      shared_ptr<string> endpointName_ {};
      // The state of the endpoint. Valid values:
      // 
      // *   **Creating**: The endpoint is being created.
      // *   **Active**: The endpoint is available.
      // *   **Pending**: The endpoint is being modified.
      // *   **Deleting**: The endpoint is being deleted.
      shared_ptr<string> endpointStatus_ {};
      // The type of the endpoint. Valid values:
      // 
      // *   **Interface**: interface endpoint
      // *   **Reverse**: reverse endpoint
      shared_ptr<string> endpointType_ {};
      // The Resource Access Management (RAM) policy. For more information about policy definitions, see [Policy elements](https://help.aliyun.com/document_detail/93738.html).
      shared_ptr<string> policyDocument_ {};
      // The region ID of the endpoint.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether the endpoint and the endpoint service belong to the same Alibaba Cloud account. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> resourceOwner_ {};
      // The ID of the endpoint service that is associated with the endpoint.
      shared_ptr<string> serviceId_ {};
      // The name of the endpoint service that is associated with the endpoint.
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> serviceRegionId_ {};
      // The tags added to the resource.
      shared_ptr<vector<Endpoints::Tags>> tags_ {};
      // The ID of the virtual private cloud (VPC) to which the endpoint belongs.
      shared_ptr<string> vpcId_ {};
      // Indicates whether the domain name of the nearest endpoint that is associated with the endpoint service is resolved first. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> zoneAffinityEnabled_ {};
    };

    virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<ListVpcEndpointsResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ListVpcEndpointsResponseBody::Endpoints>) };
    inline vector<ListVpcEndpointsResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<ListVpcEndpointsResponseBody::Endpoints>) };
    inline ListVpcEndpointsResponseBody& setEndpoints(const vector<ListVpcEndpointsResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListVpcEndpointsResponseBody& setEndpoints(vector<ListVpcEndpointsResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpcEndpointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the endpoints.
    shared_ptr<vector<ListVpcEndpointsResponseBody::Endpoints>> endpoints_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If this is your first request and no next requests are to be performed, you do not need to specify this parameter.
    // *   If a next request is to be performed, set the parameter to the value of **NextToken** that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
