// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTGROUPDESTINATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTGROUPDESTINATIONSRESPONSEBODY_HPP_
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
  class DescribeCustomRoutingEndpointGroupDestinationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomRoutingEndpointGroupDestinationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(ToPort, toPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomRoutingEndpointGroupDestinationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
    };
    DescribeCustomRoutingEndpointGroupDestinationsResponseBody() = default ;
    DescribeCustomRoutingEndpointGroupDestinationsResponseBody(const DescribeCustomRoutingEndpointGroupDestinationsResponseBody &) = default ;
    DescribeCustomRoutingEndpointGroupDestinationsResponseBody(DescribeCustomRoutingEndpointGroupDestinationsResponseBody &&) = default ;
    DescribeCustomRoutingEndpointGroupDestinationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomRoutingEndpointGroupDestinationsResponseBody() = default ;
    DescribeCustomRoutingEndpointGroupDestinationsResponseBody& operator=(const DescribeCustomRoutingEndpointGroupDestinationsResponseBody &) = default ;
    DescribeCustomRoutingEndpointGroupDestinationsResponseBody& operator=(DescribeCustomRoutingEndpointGroupDestinationsResponseBody &&) = default ;
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
      // Managed policy action name, Valid values:
      // 
      // - Create
      // - Update
      // - Delete
      // - Associate
      // - UserUnmanaged
      // - CreateChild
      shared_ptr<string> action_ {};
      // Sub resource type, Valid values:
      // 
      // - Listener
      // - IpSet
      // - EndpointGroup
      // - ForwardingRule
      // - Endpoint
      // - EndpointGroupDestination
      // - EndpointPolicy
      // 
      // >Only valid when the Action parameter is CreateChild.
      shared_ptr<string> childType_ {};
      // Is the managed policy action managed, Valid values:
      // 
      // - true: The managed policy action is managed, and users do not have permission to perform the operation specified in the Action on the managed instance.
      // 
      // - false: The managed policy action is not managed, and users have permission to perform the operation specified in the Action on the managed instance.
      shared_ptr<bool> isManaged_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->destinationId_ == nullptr && this->endpointGroupId_ == nullptr && this->fromPort_ == nullptr && this->listenerId_ == nullptr && this->protocols_ == nullptr
        && this->requestId_ == nullptr && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->state_ == nullptr
        && this->toPort_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // destinationId Field Functions 
    bool hasDestinationId() const { return this->destinationId_ != nullptr;};
    void deleteDestinationId() { this->destinationId_ = nullptr;};
    inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // fromPort Field Functions 
    bool hasFromPort() const { return this->fromPort_ != nullptr;};
    void deleteFromPort() { this->fromPort_ = nullptr;};
    inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceManagedInfos Field Functions 
    bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
    void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
    inline const vector<DescribeCustomRoutingEndpointGroupDestinationsResponseBody::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<DescribeCustomRoutingEndpointGroupDestinationsResponseBody::ServiceManagedInfos>) };
    inline vector<DescribeCustomRoutingEndpointGroupDestinationsResponseBody::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<DescribeCustomRoutingEndpointGroupDestinationsResponseBody::ServiceManagedInfos>) };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setServiceManagedInfos(const vector<DescribeCustomRoutingEndpointGroupDestinationsResponseBody::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setServiceManagedInfos(vector<DescribeCustomRoutingEndpointGroupDestinationsResponseBody::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // toPort Field Functions 
    bool hasToPort() const { return this->toPort_ != nullptr;};
    void deleteToPort() { this->toPort_ = nullptr;};
    inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
    inline DescribeCustomRoutingEndpointGroupDestinationsResponseBody& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


  protected:
    // The ID of the Global Accelerator (GA) instance.
    shared_ptr<string> acceleratorId_ {};
    // The ID of the endpoint group mapping configuration.
    shared_ptr<string> destinationId_ {};
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroupId_ {};
    // The start port of the backend service port range of the endpoint group.
    shared_ptr<int32_t> fromPort_ {};
    // The ID of the listener.
    shared_ptr<string> listenerId_ {};
    // The backend service protocol of the endpoint group.
    // 
    // *   **TCP**: TCP
    // *   **UDP**: UDP
    // *   **TCP,UDP**: TCP and UDP
    shared_ptr<vector<string>> protocols_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The service ID to which the managed instance belongs.
    // 
    // >  Valid only when the ServiceManaged parameter is True.
    shared_ptr<string> serviceId_ {};
    // Is it a managed instance. Valid values:
    // 
    // - true
    // - false
    shared_ptr<bool> serviceManaged_ {};
    // A list of action policies that users can execute on this managed instance.
    shared_ptr<vector<DescribeCustomRoutingEndpointGroupDestinationsResponseBody::ServiceManagedInfos>> serviceManagedInfos_ {};
    // The status of the endpoint group mapping configuration.
    // 
    // *   **init**: being initialized.
    // *   **active**: normal.
    // *   **updating**: being updated.
    // *   **deleting**: being deleted.
    shared_ptr<string> state_ {};
    // The end port of the backend service port range of the endpoint group.
    shared_ptr<int32_t> toPort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
