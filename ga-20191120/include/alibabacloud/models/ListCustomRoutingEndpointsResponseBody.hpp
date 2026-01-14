// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTSRESPONSEBODY_HPP_
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
  class ListCustomRoutingEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomRoutingEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomRoutingEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomRoutingEndpointsResponseBody() = default ;
    ListCustomRoutingEndpointsResponseBody(const ListCustomRoutingEndpointsResponseBody &) = default ;
    ListCustomRoutingEndpointsResponseBody(ListCustomRoutingEndpointsResponseBody &&) = default ;
    ListCustomRoutingEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomRoutingEndpointsResponseBody() = default ;
    ListCustomRoutingEndpointsResponseBody& operator=(const ListCustomRoutingEndpointsResponseBody &) = default ;
    ListCustomRoutingEndpointsResponseBody& operator=(ListCustomRoutingEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_TO_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_FROM_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class ServiceManagedInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceManagedInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ChildType, childType_);
          DARABONBA_PTR_TO_JSON(IsManaged, isManaged_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceManagedInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ChildType, childType_);
          DARABONBA_PTR_FROM_JSON(IsManaged, isManaged_);
        };
        ServiceManagedInfos() = default ;
        ServiceManagedInfos(const ServiceManagedInfos &) = default ;
        ServiceManagedInfos(ServiceManagedInfos &&) = default ;
        ServiceManagedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceManagedInfos() = default ;
        ServiceManagedInfos& operator=(const ServiceManagedInfos &) = default ;
        ServiceManagedInfos& operator=(ServiceManagedInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->childType_ == nullptr && this->isManaged_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ServiceManagedInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // childType Field Functions 
        bool hasChildType() const { return this->childType_ != nullptr;};
        void deleteChildType() { this->childType_ = nullptr;};
        inline string getChildType() const { DARABONBA_PTR_GET_DEFAULT(childType_, "") };
        inline ServiceManagedInfos& setChildType(string childType) { DARABONBA_PTR_SET_VALUE(childType_, childType) };


        // isManaged Field Functions 
        bool hasIsManaged() const { return this->isManaged_ != nullptr;};
        void deleteIsManaged() { this->isManaged_ = nullptr;};
        inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
        inline ServiceManagedInfos& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


      protected:
        // The name of the action performed on the managed instance. Valid values:
        // 
        // *   **Create**
        // *   **Update**
        // *   **Delete**
        // *   **Associate**
        // *   **UserUnmanaged**
        // *   **CreateChild**
        shared_ptr<string> action_ {};
        // The type of the child resource. Valid values:
        // 
        // *   **Listener**: listener
        // *   **IpSet**: acceleration region
        // *   **EndpointGroup**: endpoint group
        // *   **ForwardingRule**: forwarding rule
        // *   **Endpoint**: endpoint
        // *   **EndpointGroupDestination**: protocol mapping of an endpoint group associated with a custom routing listener
        // *   **EndpointPolicy**: traffic policy of an endpoint associated with a custom routing listener
        // 
        // >  This parameter is valid only if **Action** is set to **CreateChild**.
        shared_ptr<string> childType_ {};
        // Indicates whether the specified actions are managed. Valid values:
        // 
        // *   **true**: The specified actions are managed, and users cannot perform the specified actions on the managed resource.
        // *   **false**: The specified actions are not managed, and users can perform the specified actions on the managed resource.
        shared_ptr<bool> isManaged_ {};
      };

      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->endpoint_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointId_ == nullptr && this->listenerId_ == nullptr && this->serviceId_ == nullptr
        && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->trafficToEndpointPolicy_ == nullptr && this->type_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline Endpoints& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Endpoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


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


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline Endpoints& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Endpoints& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Endpoints& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceManagedInfos Field Functions 
      bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
      void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
      inline const vector<Endpoints::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<Endpoints::ServiceManagedInfos>) };
      inline vector<Endpoints::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<Endpoints::ServiceManagedInfos>) };
      inline Endpoints& setServiceManagedInfos(const vector<Endpoints::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
      inline Endpoints& setServiceManagedInfos(vector<Endpoints::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


      // trafficToEndpointPolicy Field Functions 
      bool hasTrafficToEndpointPolicy() const { return this->trafficToEndpointPolicy_ != nullptr;};
      void deleteTrafficToEndpointPolicy() { this->trafficToEndpointPolicy_ = nullptr;};
      inline string getTrafficToEndpointPolicy() const { DARABONBA_PTR_GET_DEFAULT(trafficToEndpointPolicy_, "") };
      inline Endpoints& setTrafficToEndpointPolicy(string trafficToEndpointPolicy) { DARABONBA_PTR_SET_VALUE(trafficToEndpointPolicy_, trafficToEndpointPolicy) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Endpoints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the GA instance with which the endpoint is associated.
      shared_ptr<string> acceleratorId_ {};
      // The name of the vSwitch that is specified as an endpoint.
      shared_ptr<string> endpoint_ {};
      // The ID of the endpoint group to which the endpoint belongs.
      shared_ptr<string> endpointGroupId_ {};
      // The endpoint ID.
      shared_ptr<string> endpointId_ {};
      // The ID of the listener to which the endpoint belongs.
      shared_ptr<string> listenerId_ {};
      // The ID of the service that manages the GA instance.
      // 
      // >  This parameter is valid only if **ServiceManaged** is set to **True**.
      shared_ptr<string> serviceId_ {};
      // Indicates whether the GA instance is managed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> serviceManaged_ {};
      // The actions that users can perform on the managed instance.
      // 
      // >  This parameter is valid only if **ServiceManaged** is set to **True**.
      // 
      // *   Users can perform only specific actions on a managed instance.
      shared_ptr<vector<Endpoints::ServiceManagedInfos>> serviceManagedInfos_ {};
      // The access policy of traffic that is destined for the endpoint. Valid values:
      // 
      // *   **AllowAll**: allows all traffic to the endpoint.
      // *   **DenyAll**: denies all traffic to the endpoint.
      // *   **AllowCustom**: allows traffic only to specified destinations.
      shared_ptr<string> trafficToEndpointPolicy_ {};
      // The backend service type of the endpoint.
      // 
      // Only **PrivateSubNet** may be returned, which indicates a private CIDR block.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<ListCustomRoutingEndpointsResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ListCustomRoutingEndpointsResponseBody::Endpoints>) };
    inline vector<ListCustomRoutingEndpointsResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<ListCustomRoutingEndpointsResponseBody::Endpoints>) };
    inline ListCustomRoutingEndpointsResponseBody& setEndpoints(const vector<ListCustomRoutingEndpointsResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListCustomRoutingEndpointsResponseBody& setEndpoints(vector<ListCustomRoutingEndpointsResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomRoutingEndpointsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomRoutingEndpointsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomRoutingEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomRoutingEndpointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the endpoints.
    shared_ptr<vector<ListCustomRoutingEndpointsResponseBody::Endpoints>> endpoints_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
