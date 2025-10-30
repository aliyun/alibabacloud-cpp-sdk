// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListVpcEndpointsRequest() = default ;
    ListVpcEndpointsRequest(const ListVpcEndpointsRequest &) = default ;
    ListVpcEndpointsRequest(ListVpcEndpointsRequest &&) = default ;
    ListVpcEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointsRequest() = default ;
    ListVpcEndpointsRequest& operator=(const ListVpcEndpointsRequest &) = default ;
    ListVpcEndpointsRequest& operator=(ListVpcEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->connectionStatus_ == nullptr && return this->endpointId_ == nullptr && return this->endpointName_ == nullptr && return this->endpointStatus_ == nullptr && return this->endpointType_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceName_ == nullptr
        && return this->tag_ == nullptr && return this->vpcId_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListVpcEndpointsRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline ListVpcEndpointsRequest& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListVpcEndpointsRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline ListVpcEndpointsRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string endpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline ListVpcEndpointsRequest& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline ListVpcEndpointsRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcEndpointsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcEndpointsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListVpcEndpointsRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListVpcEndpointsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListVpcEndpointsRequestTag>) };
    inline vector<ListVpcEndpointsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListVpcEndpointsRequestTag>) };
    inline ListVpcEndpointsRequest& setTag(const vector<ListVpcEndpointsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListVpcEndpointsRequest& setTag(vector<ListVpcEndpointsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVpcEndpointsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The state of the endpoint connection. Valid values:
    // 
    // *   **Pending**: The endpoint connection is being modified.
    // *   **Connecting**: The endpoint connection is being established.
    // *   **Connected**: The endpoint connection is established.
    // *   **Disconnecting**: The endpoint is being disconnected from the endpoint service.
    // *   **Disconnected**: The endpoint is disconnected from the endpoint service.
    // *   **Deleting**: The connection is being deleted.
    // *   **ServiceDeleted**: The corresponding endpoint service has been deleted.
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The ID of the endpoint.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The name of the endpoint.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The state of the endpoint. Valid values:
    // 
    // *   **Creating**: The endpoint is being created.
    // *   **Active**: The endpoint is available.
    // *   **Pending**: The endpoint is being modified.
    // *   **Deleting**: The endpoint is being deleted.
    std::shared_ptr<string> endpointStatus_ = nullptr;
    // The type of the endpoint. Valid values:
    // 
    // *   **Interface**: interface endpoint
    // *   **Reverse**: reverse endpoint
    std::shared_ptr<string> endpointType_ = nullptr;
    // The number of entries per page. Valid values: **1** to **1000**. Default value: **50**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If this is your first request and no next requests are to be performed, you do not need to specify this parameter.
    // *   If a next request is to be performed, set the parameter to the value of **NextToken** that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID of the endpoint.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListVpcEndpointsRequestTag>> tag_ = nullptr;
    // The ID of the VPC to which the endpoint belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
