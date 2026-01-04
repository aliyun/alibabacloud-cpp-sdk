// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCGATEWAYENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCGATEWAYENDPOINTSRESPONSEBODY_HPP_
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
  class ListVpcGatewayEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcGatewayEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcGatewayEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcGatewayEndpointsResponseBody() = default ;
    ListVpcGatewayEndpointsResponseBody(const ListVpcGatewayEndpointsResponseBody &) = default ;
    ListVpcGatewayEndpointsResponseBody(ListVpcGatewayEndpointsResponseBody &&) = default ;
    ListVpcGatewayEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcGatewayEndpointsResponseBody() = default ;
    ListVpcGatewayEndpointsResponseBody& operator=(const ListVpcGatewayEndpointsResponseBody &) = default ;
    ListVpcGatewayEndpointsResponseBody& operator=(ListVpcGatewayEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
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
        // The key of tag N added to the resource.
        shared_ptr<string> key_ {};
        // The value of tag N added to the resource.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->associatedRouteTables_ == nullptr
        && this->creationTime_ == nullptr && this->endpointDescription_ == nullptr && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->endpointStatus_ == nullptr
        && this->policyDocument_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceName_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
      // associatedRouteTables Field Functions 
      bool hasAssociatedRouteTables() const { return this->associatedRouteTables_ != nullptr;};
      void deleteAssociatedRouteTables() { this->associatedRouteTables_ = nullptr;};
      inline const vector<string> & getAssociatedRouteTables() const { DARABONBA_PTR_GET_CONST(associatedRouteTables_, vector<string>) };
      inline vector<string> getAssociatedRouteTables() { DARABONBA_PTR_GET(associatedRouteTables_, vector<string>) };
      inline Endpoints& setAssociatedRouteTables(const vector<string> & associatedRouteTables) { DARABONBA_PTR_SET_VALUE(associatedRouteTables_, associatedRouteTables) };
      inline Endpoints& setAssociatedRouteTables(vector<string> && associatedRouteTables) { DARABONBA_PTR_SET_RVALUE(associatedRouteTables_, associatedRouteTables) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Endpoints& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // endpointDescription Field Functions 
      bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
      void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
      inline string getEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
      inline Endpoints& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


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


      // policyDocument Field Functions 
      bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
      void deletePolicyDocument() { this->policyDocument_ = nullptr;};
      inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
      inline Endpoints& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Endpoints& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Endpoints& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


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


    protected:
      // The ID of the route table associated with the gateway endpoint.
      shared_ptr<vector<string>> associatedRouteTables_ {};
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
      // 
      // For more information about the syntax and structure of the access policy, see [Policy syntax and structure](https://help.aliyun.com/document_detail/93739.html).
      shared_ptr<string> policyDocument_ {};
      // The ID of the resource group to which the gateway endpoint belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The name of the endpoint service.
      shared_ptr<string> serviceName_ {};
      // The tag list.
      shared_ptr<vector<Endpoints::Tags>> tags_ {};
      // The ID of the virtual private cloud (VPC) to which the gateway endpoint belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<ListVpcGatewayEndpointsResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ListVpcGatewayEndpointsResponseBody::Endpoints>) };
    inline vector<ListVpcGatewayEndpointsResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<ListVpcGatewayEndpointsResponseBody::Endpoints>) };
    inline ListVpcGatewayEndpointsResponseBody& setEndpoints(const vector<ListVpcGatewayEndpointsResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListVpcGatewayEndpointsResponseBody& setEndpoints(vector<ListVpcGatewayEndpointsResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListVpcGatewayEndpointsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcGatewayEndpointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcGatewayEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListVpcGatewayEndpointsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of gateway endpoints.
    shared_ptr<vector<ListVpcGatewayEndpointsResponseBody::Endpoints>> endpoints_ {};
    // The number of entries per page.
    shared_ptr<int64_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
