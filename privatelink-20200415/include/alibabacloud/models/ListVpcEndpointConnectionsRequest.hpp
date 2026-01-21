// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointOwnerId, endpointOwnerId_);
      DARABONBA_PTR_TO_JSON(EniId, eniId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplacedResourceId, replacedResourceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointOwnerId, endpointOwnerId_);
      DARABONBA_PTR_FROM_JSON(EniId, eniId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplacedResourceId, replacedResourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    ListVpcEndpointConnectionsRequest() = default ;
    ListVpcEndpointConnectionsRequest(const ListVpcEndpointConnectionsRequest &) = default ;
    ListVpcEndpointConnectionsRequest(ListVpcEndpointConnectionsRequest &&) = default ;
    ListVpcEndpointConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointConnectionsRequest() = default ;
    ListVpcEndpointConnectionsRequest& operator=(const ListVpcEndpointConnectionsRequest &) = default ;
    ListVpcEndpointConnectionsRequest& operator=(ListVpcEndpointConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->endpointId_ == nullptr && this->endpointOwnerId_ == nullptr && this->eniId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->regionId_ == nullptr && this->replacedResourceId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->serviceId_ == nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline ListVpcEndpointConnectionsRequest& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListVpcEndpointConnectionsRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointOwnerId Field Functions 
    bool hasEndpointOwnerId() const { return this->endpointOwnerId_ != nullptr;};
    void deleteEndpointOwnerId() { this->endpointOwnerId_ = nullptr;};
    inline int64_t getEndpointOwnerId() const { DARABONBA_PTR_GET_DEFAULT(endpointOwnerId_, 0L) };
    inline ListVpcEndpointConnectionsRequest& setEndpointOwnerId(int64_t endpointOwnerId) { DARABONBA_PTR_SET_VALUE(endpointOwnerId_, endpointOwnerId) };


    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline ListVpcEndpointConnectionsRequest& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointConnectionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointConnectionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcEndpointConnectionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replacedResourceId Field Functions 
    bool hasReplacedResourceId() const { return this->replacedResourceId_ != nullptr;};
    void deleteReplacedResourceId() { this->replacedResourceId_ = nullptr;};
    inline string getReplacedResourceId() const { DARABONBA_PTR_GET_DEFAULT(replacedResourceId_, "") };
    inline ListVpcEndpointConnectionsRequest& setReplacedResourceId(string replacedResourceId) { DARABONBA_PTR_SET_VALUE(replacedResourceId_, replacedResourceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcEndpointConnectionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListVpcEndpointConnectionsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointConnectionsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The state of the endpoint connection. Valid values:
    // 
    // *   **Pending**: The endpoint connection is being modified.
    // *   **Connecting**: The endpoint connection is being established.
    // *   **Connected**: The endpoint connection is established.
    // *   **Disconnecting**: The endpoint is being disconnected from the endpoint service.
    // *   **Disconnected**: The endpoint is disconnected from the endpoint service.
    // *   **Deleting**: The connection is being deleted.
    // *   **ServiceDeleted**: The corresponding endpoint service has been deleted.
    shared_ptr<string> connectionStatus_ {};
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The ID of the Alibaba Cloud account to which the endpoint belongs.
    shared_ptr<int64_t> endpointOwnerId_ {};
    // The ID of the endpoint elastic network interface (ENI).
    shared_ptr<string> eniId_ {};
    // The number of entries to return on each page. Valid values: **1** to **50**. Default value: **50**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If this is your first request and no next requests are to be performed, you do not need to specify this parameter.
    // *   If a next request is to be performed, set the value to the value of **NextToken** that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    // The region ID of the endpoint connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the replaced service resource in smooth migration scenarios.
    shared_ptr<string> replacedResourceId_ {};
    // The ID of the resource group to which the endpoint belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The service resource ID.
    shared_ptr<string> resourceId_ {};
    // The endpoint service ID.
    shared_ptr<string> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
