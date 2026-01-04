// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCGATEWAYENDPOINTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCGATEWAYENDPOINTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcGatewayEndpointAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcGatewayEndpointAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTables, routeTables_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcGatewayEndpointAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTables, routeTables_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetVpcGatewayEndpointAttributeResponseBody() = default ;
    GetVpcGatewayEndpointAttributeResponseBody(const GetVpcGatewayEndpointAttributeResponseBody &) = default ;
    GetVpcGatewayEndpointAttributeResponseBody(GetVpcGatewayEndpointAttributeResponseBody &&) = default ;
    GetVpcGatewayEndpointAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcGatewayEndpointAttributeResponseBody() = default ;
    GetVpcGatewayEndpointAttributeResponseBody& operator=(const GetVpcGatewayEndpointAttributeResponseBody &) = default ;
    GetVpcGatewayEndpointAttributeResponseBody& operator=(GetVpcGatewayEndpointAttributeResponseBody &&) = default ;
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
      // The key of tag N added to the resource.
      shared_ptr<string> key_ {};
      // The value of tag N added to the resource.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->endpointDescription_ == nullptr && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->endpointStatus_ == nullptr && this->policyDocument_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeTables_ == nullptr && this->serviceName_ == nullptr && this->tags_ == nullptr
        && this->vpcId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string getEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string getEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeTables Field Functions 
    bool hasRouteTables() const { return this->routeTables_ != nullptr;};
    void deleteRouteTables() { this->routeTables_ = nullptr;};
    inline const vector<string> & getRouteTables() const { DARABONBA_PTR_GET_CONST(routeTables_, vector<string>) };
    inline vector<string> getRouteTables() { DARABONBA_PTR_GET(routeTables_, vector<string>) };
    inline GetVpcGatewayEndpointAttributeResponseBody& setRouteTables(const vector<string> & routeTables) { DARABONBA_PTR_SET_VALUE(routeTables_, routeTables) };
    inline GetVpcGatewayEndpointAttributeResponseBody& setRouteTables(vector<string> && routeTables) { DARABONBA_PTR_SET_RVALUE(routeTables_, routeTables) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetVpcGatewayEndpointAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetVpcGatewayEndpointAttributeResponseBody::Tags>) };
    inline vector<GetVpcGatewayEndpointAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetVpcGatewayEndpointAttributeResponseBody::Tags>) };
    inline GetVpcGatewayEndpointAttributeResponseBody& setTags(const vector<GetVpcGatewayEndpointAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetVpcGatewayEndpointAttributeResponseBody& setTags(vector<GetVpcGatewayEndpointAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetVpcGatewayEndpointAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The time when the endpoint was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> creationTime_ {};
    // The description of the gateway endpoint.
    shared_ptr<string> endpointDescription_ {};
    // The ID of the gateway endpoint.
    shared_ptr<string> endpointId_ {};
    // The name of the gateway endpoint.
    shared_ptr<string> endpointName_ {};
    // The status of the gateway endpoint. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Associating**
    // *   **Dissociating**
    // *   **Deleting**
    shared_ptr<string> endpointStatus_ {};
    // The access policy for the cloud service.
    shared_ptr<string> policyDocument_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the gateway endpoint belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the route table associated with the gateway endpoint.
    shared_ptr<vector<string>> routeTables_ {};
    // The name of the endpoint service.
    shared_ptr<string> serviceName_ {};
    // The tag list.
    shared_ptr<vector<GetVpcGatewayEndpointAttributeResponseBody::Tags>> tags_ {};
    // The ID of the virtual private cloud (VPC) to which the gateway endpoint belongs.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
