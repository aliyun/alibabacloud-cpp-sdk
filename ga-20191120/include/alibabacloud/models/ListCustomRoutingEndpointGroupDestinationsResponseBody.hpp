// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPDESTINATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPDESTINATIONSRESPONSEBODY_HPP_
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
  class ListCustomRoutingEndpointGroupDestinationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomRoutingEndpointGroupDestinationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Destinations, destinations_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomRoutingEndpointGroupDestinationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomRoutingEndpointGroupDestinationsResponseBody() = default ;
    ListCustomRoutingEndpointGroupDestinationsResponseBody(const ListCustomRoutingEndpointGroupDestinationsResponseBody &) = default ;
    ListCustomRoutingEndpointGroupDestinationsResponseBody(ListCustomRoutingEndpointGroupDestinationsResponseBody &&) = default ;
    ListCustomRoutingEndpointGroupDestinationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomRoutingEndpointGroupDestinationsResponseBody() = default ;
    ListCustomRoutingEndpointGroupDestinationsResponseBody& operator=(const ListCustomRoutingEndpointGroupDestinationsResponseBody &) = default ;
    ListCustomRoutingEndpointGroupDestinationsResponseBody& operator=(ListCustomRoutingEndpointGroupDestinationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Destinations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Destinations& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
        DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(Protocols, protocols_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_TO_JSON(ToPort, toPort_);
      };
      friend void from_json(const Darabonba::Json& j, Destinations& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
      };
      Destinations() = default ;
      Destinations(const Destinations &) = default ;
      Destinations(Destinations &&) = default ;
      Destinations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Destinations() = default ;
      Destinations& operator=(const Destinations &) = default ;
      Destinations& operator=(Destinations &&) = default ;
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
        // The name of the action that you can perform on the managed instance. Valid values:
        // 
        // *   **Create**: Create an instance.
        // *   **Update**: Update the current instance.
        // *   **Delete**: Delete the current instance.
        // *   **Associate**: Reference the current instance.
        // *   **UserUnmanaged**: Unmanage the instance.
        // *   **CreateChild**: Create a child resource in the current instance.
        shared_ptr<string> action_ {};
        // The type of the child resource. Valid values:
        // 
        // *   **Listener**: listener.
        // *   **IpSet**: acceleration region.
        // *   **EndpointGroup**: endpoint group.
        // *   **ForwardingRule**: forwarding rule.
        // *   **Endpoint**: endpoint.
        // *   **EndpointGroupDestination**: protocol mapping of an endpoint group associated with a custom routing listener.
        // *   **EndpointPolicy**: traffic policy of an endpoint associated with a custom routing listener.
        // 
        // >  This parameter takes effect only if **Action** is set to **CreateChild**.
        shared_ptr<string> childType_ {};
        // Indicates whether the specified actions are managed. Valid values:
        // 
        // *   **true**: The specified actions are managed, and you cannot perform the specified actions on the managed instance.
        // *   **false**: The specified actions are not managed, and you can perform the specified actions on the managed instance.
        shared_ptr<bool> isManaged_ {};
      };

      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->destinationId_ == nullptr && this->endpointGroupId_ == nullptr && this->fromPort_ == nullptr && this->listenerId_ == nullptr && this->protocols_ == nullptr
        && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->toPort_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline Destinations& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // destinationId Field Functions 
      bool hasDestinationId() const { return this->destinationId_ != nullptr;};
      void deleteDestinationId() { this->destinationId_ = nullptr;};
      inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
      inline Destinations& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


      // endpointGroupId Field Functions 
      bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
      void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
      inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
      inline Destinations& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


      // fromPort Field Functions 
      bool hasFromPort() const { return this->fromPort_ != nullptr;};
      void deleteFromPort() { this->fromPort_ = nullptr;};
      inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
      inline Destinations& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline Destinations& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // protocols Field Functions 
      bool hasProtocols() const { return this->protocols_ != nullptr;};
      void deleteProtocols() { this->protocols_ = nullptr;};
      inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
      inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
      inline Destinations& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
      inline Destinations& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Destinations& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Destinations& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceManagedInfos Field Functions 
      bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
      void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
      inline const vector<Destinations::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<Destinations::ServiceManagedInfos>) };
      inline vector<Destinations::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<Destinations::ServiceManagedInfos>) };
      inline Destinations& setServiceManagedInfos(const vector<Destinations::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
      inline Destinations& setServiceManagedInfos(vector<Destinations::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


      // toPort Field Functions 
      bool hasToPort() const { return this->toPort_ != nullptr;};
      void deleteToPort() { this->toPort_ = nullptr;};
      inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
      inline Destinations& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


    protected:
      // The GA instance ID.
      shared_ptr<string> acceleratorId_ {};
      // The ID of the endpoint group mapping.
      shared_ptr<string> destinationId_ {};
      // The endpoint group ID.
      shared_ptr<string> endpointGroupId_ {};
      // The first port of the backend service port range.
      shared_ptr<int32_t> fromPort_ {};
      // The listener ID.
      shared_ptr<string> listenerId_ {};
      // The backend service protocols of the endpoint group. Valid values:
      // 
      // *   **TCP**
      // *   **UDP**
      // *   **TCP,UDP**
      shared_ptr<vector<string>> protocols_ {};
      // The ID of the service that manages the GA instance.
      // 
      // >  This parameter takes effect only if **ServiceManaged** is set to **True**.
      shared_ptr<string> serviceId_ {};
      // Indicates whether the GA instance is managed. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> serviceManaged_ {};
      // The actions that you can perform on the managed instance.
      // 
      // >  - This parameter takes effect only if **ServiceManaged** is set to **True**.
      // >  - You can perform only specific actions on the managed instance.
      shared_ptr<vector<Destinations::ServiceManagedInfos>> serviceManagedInfos_ {};
      // The last port of the backend service port range.
      shared_ptr<int32_t> toPort_ {};
    };

    virtual bool empty() const override { return this->destinations_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // destinations Field Functions 
    bool hasDestinations() const { return this->destinations_ != nullptr;};
    void deleteDestinations() { this->destinations_ = nullptr;};
    inline const vector<ListCustomRoutingEndpointGroupDestinationsResponseBody::Destinations> & getDestinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<ListCustomRoutingEndpointGroupDestinationsResponseBody::Destinations>) };
    inline vector<ListCustomRoutingEndpointGroupDestinationsResponseBody::Destinations> getDestinations() { DARABONBA_PTR_GET(destinations_, vector<ListCustomRoutingEndpointGroupDestinationsResponseBody::Destinations>) };
    inline ListCustomRoutingEndpointGroupDestinationsResponseBody& setDestinations(const vector<ListCustomRoutingEndpointGroupDestinationsResponseBody::Destinations> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
    inline ListCustomRoutingEndpointGroupDestinationsResponseBody& setDestinations(vector<ListCustomRoutingEndpointGroupDestinationsResponseBody::Destinations> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomRoutingEndpointGroupDestinationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomRoutingEndpointGroupDestinationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomRoutingEndpointGroupDestinationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomRoutingEndpointGroupDestinationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the endpoint group mappings.
    shared_ptr<vector<ListCustomRoutingEndpointGroupDestinationsResponseBody::Destinations>> destinations_ {};
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
