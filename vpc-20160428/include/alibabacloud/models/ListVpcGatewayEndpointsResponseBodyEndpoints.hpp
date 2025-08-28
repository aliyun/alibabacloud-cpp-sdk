// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCGATEWAYENDPOINTSRESPONSEBODYENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCGATEWAYENDPOINTSRESPONSEBODYENDPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcGatewayEndpointsResponseBodyEndpointsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpcGatewayEndpointsResponseBodyEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcGatewayEndpointsResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedRouteTables, associatedRouteTables_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcGatewayEndpointsResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedRouteTables, associatedRouteTables_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListVpcGatewayEndpointsResponseBodyEndpoints() = default ;
    ListVpcGatewayEndpointsResponseBodyEndpoints(const ListVpcGatewayEndpointsResponseBodyEndpoints &) = default ;
    ListVpcGatewayEndpointsResponseBodyEndpoints(ListVpcGatewayEndpointsResponseBodyEndpoints &&) = default ;
    ListVpcGatewayEndpointsResponseBodyEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcGatewayEndpointsResponseBodyEndpoints() = default ;
    ListVpcGatewayEndpointsResponseBodyEndpoints& operator=(const ListVpcGatewayEndpointsResponseBodyEndpoints &) = default ;
    ListVpcGatewayEndpointsResponseBodyEndpoints& operator=(ListVpcGatewayEndpointsResponseBodyEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedRouteTables_ != nullptr
        && this->creationTime_ != nullptr && this->endpointDescription_ != nullptr && this->endpointId_ != nullptr && this->endpointName_ != nullptr && this->endpointStatus_ != nullptr
        && this->policyDocument_ != nullptr && this->resourceGroupId_ != nullptr && this->serviceName_ != nullptr && this->tags_ != nullptr && this->vpcId_ != nullptr; };
    // associatedRouteTables Field Functions 
    bool hasAssociatedRouteTables() const { return this->associatedRouteTables_ != nullptr;};
    void deleteAssociatedRouteTables() { this->associatedRouteTables_ = nullptr;};
    inline const vector<string> & associatedRouteTables() const { DARABONBA_PTR_GET_CONST(associatedRouteTables_, vector<string>) };
    inline vector<string> associatedRouteTables() { DARABONBA_PTR_GET(associatedRouteTables_, vector<string>) };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setAssociatedRouteTables(const vector<string> & associatedRouteTables) { DARABONBA_PTR_SET_VALUE(associatedRouteTables_, associatedRouteTables) };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setAssociatedRouteTables(vector<string> && associatedRouteTables) { DARABONBA_PTR_SET_RVALUE(associatedRouteTables_, associatedRouteTables) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string endpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string endpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListVpcGatewayEndpointsResponseBodyEndpointsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListVpcGatewayEndpointsResponseBodyEndpointsTags>) };
    inline vector<Models::ListVpcGatewayEndpointsResponseBodyEndpointsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListVpcGatewayEndpointsResponseBodyEndpointsTags>) };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setTags(const vector<Models::ListVpcGatewayEndpointsResponseBodyEndpointsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setTags(vector<Models::ListVpcGatewayEndpointsResponseBodyEndpointsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVpcGatewayEndpointsResponseBodyEndpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the route table associated with the gateway endpoint.
    std::shared_ptr<vector<string>> associatedRouteTables_ = nullptr;
    // The time when the endpoint was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the gateway endpoint.
    std::shared_ptr<string> endpointDescription_ = nullptr;
    // The ID of the gateway endpoint.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The name of the gateway endpoint.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The status of the gateway endpoint. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Associating**
    // *   **Dissociating**
    // *   **Deleting**
    std::shared_ptr<string> endpointStatus_ = nullptr;
    // The access policy for the cloud service.
    // 
    // For more information about the syntax and structure of the access policy, see [Policy syntax and structure](https://help.aliyun.com/document_detail/93739.html).
    std::shared_ptr<string> policyDocument_ = nullptr;
    // The ID of the resource group to which the gateway endpoint belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the endpoint service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListVpcGatewayEndpointsResponseBodyEndpointsTags>> tags_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the gateway endpoint belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
