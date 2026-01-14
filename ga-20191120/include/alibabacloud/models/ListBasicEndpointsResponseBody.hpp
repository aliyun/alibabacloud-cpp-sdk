// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASICENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASICENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListBasicEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBasicEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBasicEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBasicEndpointsResponseBody() = default ;
    ListBasicEndpointsResponseBody(const ListBasicEndpointsResponseBody &) = default ;
    ListBasicEndpointsResponseBody(ListBasicEndpointsResponseBody &&) = default ;
    ListBasicEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBasicEndpointsResponseBody() = default ;
    ListBasicEndpointsResponseBody& operator=(const ListBasicEndpointsResponseBody &) = default ;
    ListBasicEndpointsResponseBody& operator=(ListBasicEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(EndpointAddress, endpointAddress_);
        DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(EndpointSubAddress, endpointSubAddress_);
        DARABONBA_PTR_TO_JSON(EndpointSubAddressType, endpointSubAddressType_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(EndpointZoneId, endpointZoneId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(EndpointAddress, endpointAddress_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointSubAddress, endpointSubAddress_);
        DARABONBA_PTR_FROM_JSON(EndpointSubAddressType, endpointSubAddressType_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(EndpointZoneId, endpointZoneId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(State, state_);
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
      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->endpointAddress_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointId_ == nullptr && this->endpointSubAddress_ == nullptr && this->endpointSubAddressType_ == nullptr
        && this->endpointType_ == nullptr && this->endpointZoneId_ == nullptr && this->name_ == nullptr && this->state_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline Endpoints& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // endpointAddress Field Functions 
      bool hasEndpointAddress() const { return this->endpointAddress_ != nullptr;};
      void deleteEndpointAddress() { this->endpointAddress_ = nullptr;};
      inline string getEndpointAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointAddress_, "") };
      inline Endpoints& setEndpointAddress(string endpointAddress) { DARABONBA_PTR_SET_VALUE(endpointAddress_, endpointAddress) };


      // endpointGroupId Field Functions 
      bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
      void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
      inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
      inline Endpoints& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Endpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointSubAddress Field Functions 
      bool hasEndpointSubAddress() const { return this->endpointSubAddress_ != nullptr;};
      void deleteEndpointSubAddress() { this->endpointSubAddress_ = nullptr;};
      inline string getEndpointSubAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddress_, "") };
      inline Endpoints& setEndpointSubAddress(string endpointSubAddress) { DARABONBA_PTR_SET_VALUE(endpointSubAddress_, endpointSubAddress) };


      // endpointSubAddressType Field Functions 
      bool hasEndpointSubAddressType() const { return this->endpointSubAddressType_ != nullptr;};
      void deleteEndpointSubAddressType() { this->endpointSubAddressType_ = nullptr;};
      inline string getEndpointSubAddressType() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddressType_, "") };
      inline Endpoints& setEndpointSubAddressType(string endpointSubAddressType) { DARABONBA_PTR_SET_VALUE(endpointSubAddressType_, endpointSubAddressType) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // endpointZoneId Field Functions 
      bool hasEndpointZoneId() const { return this->endpointZoneId_ != nullptr;};
      void deleteEndpointZoneId() { this->endpointZoneId_ = nullptr;};
      inline string getEndpointZoneId() const { DARABONBA_PTR_GET_DEFAULT(endpointZoneId_, "") };
      inline Endpoints& setEndpointZoneId(string endpointZoneId) { DARABONBA_PTR_SET_VALUE(endpointZoneId_, endpointZoneId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Endpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Endpoints& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the basic GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The address of the endpoint.
      shared_ptr<string> endpointAddress_ {};
      // The ID of the endpoint group to which the endpoint belongs.
      shared_ptr<string> endpointGroupId_ {};
      // The ID of the endpoint that is associated with the basic GA instance.
      shared_ptr<string> endpointId_ {};
      // The secondary address of the endpoint.
      // 
      // This parameter is returned if the endpoint type is **ECS**, **ENI**, or **NLB**.
      // 
      // *   If the endpoint type is **ECS**, **EndpointSubAddress** returns the primary or secondary private IP address of the primary ENI.
      // *   If the endpoint type is **ENI**, **EndpointSubAddress** returns the primary or secondary private IP address of the secondary ENI.
      // *   If the endpoint type is **NLB**, **EndpointSubAddress** returns the primary private IP address of the NLB backend server.
      shared_ptr<string> endpointSubAddress_ {};
      // The secondary address type of the endpoint.
      // 
      // *   **primary**: a primary private IP address.
      // *   **secondary**: a secondary private IP address.
      // 
      // This parameter is returned if the type of the endpoint is set to **ECS**, **ENI**, or **NLB**. If the endpoint type is set to **NLB**, **primary** is returned.
      shared_ptr<string> endpointSubAddressType_ {};
      // The type of endpoint. Valid values:
      // 
      // *   **ENI**: ENI.
      // *   **SLB**: CLB instance.
      // *   **ECS**: ECS instance.
      // *   **NLB**: NLB instance.
      shared_ptr<string> endpointType_ {};
      // The zone ID of the endpoint.
      // 
      // This parameter is returned only when the endpoint type is set to **NLB**.
      shared_ptr<string> endpointZoneId_ {};
      // The name of the endpoint.
      shared_ptr<string> name_ {};
      // The status of the endpoint. Valid values:
      // 
      // *   **init**: The endpoint is being initialized.
      // *   **active**: The endpoint is available.
      // *   **updating**: The endpoint is being configured.
      // *   **binding**: The endpoint is being associated.
      // *   **unbinding**: The endpoint is being disassociated.
      // *   **deleting**: The endpoint is being deleted.
      // *   **bound**: The endpoint is associated.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<ListBasicEndpointsResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ListBasicEndpointsResponseBody::Endpoints>) };
    inline vector<ListBasicEndpointsResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<ListBasicEndpointsResponseBody::Endpoints>) };
    inline ListBasicEndpointsResponseBody& setEndpoints(const vector<ListBasicEndpointsResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListBasicEndpointsResponseBody& setEndpoints(vector<ListBasicEndpointsResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListBasicEndpointsResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBasicEndpointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBasicEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListBasicEndpointsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The endpoints that are associated with the basic GA instance.
    shared_ptr<vector<ListBasicEndpointsResponseBody::Endpoints>> endpoints_ {};
    // The number of entries returned per page.
    shared_ptr<string> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** is not returned, it indicates that no additional results exist.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
