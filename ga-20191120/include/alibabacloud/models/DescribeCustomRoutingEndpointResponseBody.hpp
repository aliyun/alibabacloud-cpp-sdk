// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTRESPONSEBODY_HPP_
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
  class DescribeCustomRoutingEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomRoutingEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomRoutingEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCustomRoutingEndpointResponseBody() = default ;
    DescribeCustomRoutingEndpointResponseBody(const DescribeCustomRoutingEndpointResponseBody &) = default ;
    DescribeCustomRoutingEndpointResponseBody(DescribeCustomRoutingEndpointResponseBody &&) = default ;
    DescribeCustomRoutingEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomRoutingEndpointResponseBody() = default ;
    DescribeCustomRoutingEndpointResponseBody& operator=(const DescribeCustomRoutingEndpointResponseBody &) = default ;
    DescribeCustomRoutingEndpointResponseBody& operator=(DescribeCustomRoutingEndpointResponseBody &&) = default ;
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
        && this->endpoint_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointId_ == nullptr && this->listenerId_ == nullptr && this->requestId_ == nullptr
        && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->state_ == nullptr && this->trafficToEndpointPolicy_ == nullptr
        && this->type_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeCustomRoutingEndpointResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceManagedInfos Field Functions 
    bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
    void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
    inline const vector<DescribeCustomRoutingEndpointResponseBody::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<DescribeCustomRoutingEndpointResponseBody::ServiceManagedInfos>) };
    inline vector<DescribeCustomRoutingEndpointResponseBody::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<DescribeCustomRoutingEndpointResponseBody::ServiceManagedInfos>) };
    inline DescribeCustomRoutingEndpointResponseBody& setServiceManagedInfos(const vector<DescribeCustomRoutingEndpointResponseBody::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
    inline DescribeCustomRoutingEndpointResponseBody& setServiceManagedInfos(vector<DescribeCustomRoutingEndpointResponseBody::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // trafficToEndpointPolicy Field Functions 
    bool hasTrafficToEndpointPolicy() const { return this->trafficToEndpointPolicy_ != nullptr;};
    void deleteTrafficToEndpointPolicy() { this->trafficToEndpointPolicy_ = nullptr;};
    inline string getTrafficToEndpointPolicy() const { DARABONBA_PTR_GET_DEFAULT(trafficToEndpointPolicy_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setTrafficToEndpointPolicy(string trafficToEndpointPolicy) { DARABONBA_PTR_SET_VALUE(trafficToEndpointPolicy_, trafficToEndpointPolicy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCustomRoutingEndpointResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the GA instance with which the endpoint is associated.
    shared_ptr<string> acceleratorId_ {};
    // The name of the endpoint (vSwitch).
    shared_ptr<string> endpoint_ {};
    // The ID of the endpoint group to which the endpoint belongs.
    shared_ptr<string> endpointGroupId_ {};
    // The ID of the endpoint.
    shared_ptr<string> endpointId_ {};
    // The ID of the listener with which the endpoint is associated.
    shared_ptr<string> listenerId_ {};
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
    shared_ptr<vector<DescribeCustomRoutingEndpointResponseBody::ServiceManagedInfos>> serviceManagedInfos_ {};
    // The status of the endpoint.
    shared_ptr<string> state_ {};
    // The access policy of traffic for the specified endpoint. Valid values:
    // 
    // *   **AllowAll**: allows all traffic to the endpoint.
    // *   **DenyAll**: denies all traffic to the endpoint.
    // *   **AllowCustom**: allows traffic only to specified destinations.
    shared_ptr<string> trafficToEndpointPolicy_ {};
    // The backend service type of the endpoint.
    // 
    // Set the value to **PrivateSubNet**, which indicates private CIDR blocks.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
