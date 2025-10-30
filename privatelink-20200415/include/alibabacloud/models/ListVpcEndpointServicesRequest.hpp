// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointServicesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    ListVpcEndpointServicesRequest() = default ;
    ListVpcEndpointServicesRequest(const ListVpcEndpointServicesRequest &) = default ;
    ListVpcEndpointServicesRequest(ListVpcEndpointServicesRequest &&) = default ;
    ListVpcEndpointServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesRequest() = default ;
    ListVpcEndpointServicesRequest& operator=(const ListVpcEndpointServicesRequest &) = default ;
    ListVpcEndpointServicesRequest& operator=(ListVpcEndpointServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->autoAcceptEnabled_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceId_ == nullptr && return this->serviceBusinessStatus_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->serviceResourceType_ == nullptr
        && return this->serviceStatus_ == nullptr && return this->tag_ == nullptr && return this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListVpcEndpointServicesRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool autoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline ListVpcEndpointServicesRequest& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServicesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServicesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcEndpointServicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcEndpointServicesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListVpcEndpointServicesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // serviceBusinessStatus Field Functions 
    bool hasServiceBusinessStatus() const { return this->serviceBusinessStatus_ != nullptr;};
    void deleteServiceBusinessStatus() { this->serviceBusinessStatus_ = nullptr;};
    inline string serviceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceBusinessStatus_, "") };
    inline ListVpcEndpointServicesRequest& setServiceBusinessStatus(string serviceBusinessStatus) { DARABONBA_PTR_SET_VALUE(serviceBusinessStatus_, serviceBusinessStatus) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointServicesRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListVpcEndpointServicesRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string serviceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline ListVpcEndpointServicesRequest& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline ListVpcEndpointServicesRequest& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListVpcEndpointServicesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListVpcEndpointServicesRequestTag>) };
    inline vector<ListVpcEndpointServicesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListVpcEndpointServicesRequestTag>) };
    inline ListVpcEndpointServicesRequest& setTag(const vector<ListVpcEndpointServicesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListVpcEndpointServicesRequest& setTag(vector<ListVpcEndpointServicesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline ListVpcEndpointServicesRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // Specifies whether to automatically accept endpoint connection requests. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> autoAcceptEnabled_ = nullptr;
    // The number of entries per page. Valid values: **1** to **1000**. Default value: **50**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If this is your first request and no next requests are to be performed, you do not need to specify this parameter.
    // *   If a next request is to be performed, set the parameter to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID of the endpoint service.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The service resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The service state of the endpoint service. Valid values:
    // 
    // *   **Normal**: The endpoint service runs as expected.
    // *   **FinancialLocked**: The endpoint service is locked due to overdue payments.
    std::shared_ptr<string> serviceBusinessStatus_ = nullptr;
    // The endpoint service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service resource. Valid values:
    // 
    // *   **slb**: a Classic Load Balancer (CLB) instance
    // *   **alb**: an Application Load Balancer (ALB) instance
    std::shared_ptr<string> serviceResourceType_ = nullptr;
    // The state of the endpoint service. Valid values:
    // 
    // *   **Creating**: The endpoint service is being created.
    // *   **Pending**: The endpoint service is being modified.
    // *   **Active**: The endpoint service is available.
    // *   **Deleting**: The endpoint service is being deleted
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListVpcEndpointServicesRequestTag>> tag_ = nullptr;
    // Specifies whether to first resolve the domain name of the nearest endpoint that is associated with the endpoint service. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
