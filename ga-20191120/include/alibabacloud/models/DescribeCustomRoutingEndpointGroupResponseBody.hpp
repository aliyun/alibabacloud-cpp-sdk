// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTGROUPRESPONSEBODY_HPP_
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
  class DescribeCustomRoutingEndpointGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomRoutingEndpointGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AccessLogSwitch, accessLogSwitch_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableAccessLog, enableAccessLog_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointGroupIpList, endpointGroupIpList_);
      DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_TO_JSON(EndpointGroupUnconfirmedIpList, endpointGroupUnconfirmedIpList_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_TO_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_TO_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_TO_JSON(SlsRegion, slsRegion_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomRoutingEndpointGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AccessLogSwitch, accessLogSwitch_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableAccessLog, enableAccessLog_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupIpList, endpointGroupIpList_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupUnconfirmedIpList, endpointGroupUnconfirmedIpList_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_FROM_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_FROM_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_FROM_JSON(SlsRegion, slsRegion_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeCustomRoutingEndpointGroupResponseBody() = default ;
    DescribeCustomRoutingEndpointGroupResponseBody(const DescribeCustomRoutingEndpointGroupResponseBody &) = default ;
    DescribeCustomRoutingEndpointGroupResponseBody(DescribeCustomRoutingEndpointGroupResponseBody &&) = default ;
    DescribeCustomRoutingEndpointGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomRoutingEndpointGroupResponseBody() = default ;
    DescribeCustomRoutingEndpointGroupResponseBody& operator=(const DescribeCustomRoutingEndpointGroupResponseBody &) = default ;
    DescribeCustomRoutingEndpointGroupResponseBody& operator=(DescribeCustomRoutingEndpointGroupResponseBody &&) = default ;
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
      // The name of the action on the managed instance. Valid values:
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
      // >  This parameter takes effect only if **Action** is set to **CreateChild**.
      shared_ptr<string> childType_ {};
      // Indicates whether the specified actions are managed. Valid values:
      // 
      // *   **true**: The specified actions are managed, and users cannot perform the specified actions on the managed instance.
      // *   **false**: The specified actions are not managed, and users can perform the specified actions on the managed instance.
      shared_ptr<bool> isManaged_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->accessLogSwitch_ == nullptr && this->description_ == nullptr && this->enableAccessLog_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointGroupIpList_ == nullptr
        && this->endpointGroupRegion_ == nullptr && this->endpointGroupUnconfirmedIpList_ == nullptr && this->listenerId_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->slsLogStoreName_ == nullptr && this->slsProjectName_ == nullptr
        && this->slsRegion_ == nullptr && this->state_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // accessLogSwitch Field Functions 
    bool hasAccessLogSwitch() const { return this->accessLogSwitch_ != nullptr;};
    void deleteAccessLogSwitch() { this->accessLogSwitch_ = nullptr;};
    inline string getAccessLogSwitch() const { DARABONBA_PTR_GET_DEFAULT(accessLogSwitch_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setAccessLogSwitch(string accessLogSwitch) { DARABONBA_PTR_SET_VALUE(accessLogSwitch_, accessLogSwitch) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAccessLog Field Functions 
    bool hasEnableAccessLog() const { return this->enableAccessLog_ != nullptr;};
    void deleteEnableAccessLog() { this->enableAccessLog_ = nullptr;};
    inline bool getEnableAccessLog() const { DARABONBA_PTR_GET_DEFAULT(enableAccessLog_, false) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setEnableAccessLog(bool enableAccessLog) { DARABONBA_PTR_SET_VALUE(enableAccessLog_, enableAccessLog) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointGroupIpList Field Functions 
    bool hasEndpointGroupIpList() const { return this->endpointGroupIpList_ != nullptr;};
    void deleteEndpointGroupIpList() { this->endpointGroupIpList_ = nullptr;};
    inline const vector<string> & getEndpointGroupIpList() const { DARABONBA_PTR_GET_CONST(endpointGroupIpList_, vector<string>) };
    inline vector<string> getEndpointGroupIpList() { DARABONBA_PTR_GET(endpointGroupIpList_, vector<string>) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setEndpointGroupIpList(const vector<string> & endpointGroupIpList) { DARABONBA_PTR_SET_VALUE(endpointGroupIpList_, endpointGroupIpList) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setEndpointGroupIpList(vector<string> && endpointGroupIpList) { DARABONBA_PTR_SET_RVALUE(endpointGroupIpList_, endpointGroupIpList) };


    // endpointGroupRegion Field Functions 
    bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
    void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
    inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


    // endpointGroupUnconfirmedIpList Field Functions 
    bool hasEndpointGroupUnconfirmedIpList() const { return this->endpointGroupUnconfirmedIpList_ != nullptr;};
    void deleteEndpointGroupUnconfirmedIpList() { this->endpointGroupUnconfirmedIpList_ = nullptr;};
    inline const vector<string> & getEndpointGroupUnconfirmedIpList() const { DARABONBA_PTR_GET_CONST(endpointGroupUnconfirmedIpList_, vector<string>) };
    inline vector<string> getEndpointGroupUnconfirmedIpList() { DARABONBA_PTR_GET(endpointGroupUnconfirmedIpList_, vector<string>) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setEndpointGroupUnconfirmedIpList(const vector<string> & endpointGroupUnconfirmedIpList) { DARABONBA_PTR_SET_VALUE(endpointGroupUnconfirmedIpList_, endpointGroupUnconfirmedIpList) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setEndpointGroupUnconfirmedIpList(vector<string> && endpointGroupUnconfirmedIpList) { DARABONBA_PTR_SET_RVALUE(endpointGroupUnconfirmedIpList_, endpointGroupUnconfirmedIpList) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceManagedInfos Field Functions 
    bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
    void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
    inline const vector<DescribeCustomRoutingEndpointGroupResponseBody::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<DescribeCustomRoutingEndpointGroupResponseBody::ServiceManagedInfos>) };
    inline vector<DescribeCustomRoutingEndpointGroupResponseBody::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<DescribeCustomRoutingEndpointGroupResponseBody::ServiceManagedInfos>) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setServiceManagedInfos(const vector<DescribeCustomRoutingEndpointGroupResponseBody::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setServiceManagedInfos(vector<DescribeCustomRoutingEndpointGroupResponseBody::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


    // slsLogStoreName Field Functions 
    bool hasSlsLogStoreName() const { return this->slsLogStoreName_ != nullptr;};
    void deleteSlsLogStoreName() { this->slsLogStoreName_ = nullptr;};
    inline string getSlsLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(slsLogStoreName_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setSlsLogStoreName(string slsLogStoreName) { DARABONBA_PTR_SET_VALUE(slsLogStoreName_, slsLogStoreName) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string getSlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


    // slsRegion Field Functions 
    bool hasSlsRegion() const { return this->slsRegion_ != nullptr;};
    void deleteSlsRegion() { this->slsRegion_ = nullptr;};
    inline string getSlsRegion() const { DARABONBA_PTR_GET_DEFAULT(slsRegion_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setSlsRegion(string slsRegion) { DARABONBA_PTR_SET_VALUE(slsRegion_, slsRegion) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeCustomRoutingEndpointGroupResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The GA instance ID.
    shared_ptr<string> acceleratorId_ {};
    // Indicates the status of the binding between the Log Service project and the endpoint group. Valid values:
    // 
    // *   **on:** The endpoint group is bound to the Log Service project.
    // *   **off:** The endpoint group is not bound to the Log Service project.
    // *   **binding:** The endpoint group is being bound to the Log Service project.
    // *   **unbinding:** The endpoint group is being unbound from the Log Service project.
    shared_ptr<string> accessLogSwitch_ {};
    // The description of the endpoint group.
    shared_ptr<string> description_ {};
    // Indicates whether the access log feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableAccessLog_ {};
    // The endpoint group ID.
    shared_ptr<string> endpointGroupId_ {};
    // The endpoint group IP addresses.
    shared_ptr<vector<string>> endpointGroupIpList_ {};
    // The region ID of the endpoint group.
    shared_ptr<string> endpointGroupRegion_ {};
    // The endpoint group IP addresses that need to be confirmed after the GA instance is upgraded.
    shared_ptr<vector<string>> endpointGroupUnconfirmedIpList_ {};
    // The custom routing listener ID.
    shared_ptr<string> listenerId_ {};
    // The name of the endpoint group.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the service that manages the GA instance.
    // 
    // >  This parameter takes effect only if **ServiceManaged** is set to **True**.
    shared_ptr<string> serviceId_ {};
    // Indicates whether the GA instance is managed. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> serviceManaged_ {};
    // The actions that users can perform on the managed instance.
    // 
    // >  This parameter takes effect only if **ServiceManaged** is set to **True**.
    // 
    // *   Users can perform only specific actions on a managed instance.
    shared_ptr<vector<DescribeCustomRoutingEndpointGroupResponseBody::ServiceManagedInfos>> serviceManagedInfos_ {};
    // The name of the Logstore.
    shared_ptr<string> slsLogStoreName_ {};
    // The name of the Log Service project.
    shared_ptr<string> slsProjectName_ {};
    // The region of the logs that are created in Log Service.
    shared_ptr<string> slsRegion_ {};
    // The status of the endpoint group. Valid values:
    // 
    // *   **init:** The endpoint group is being initialized.
    // *   **active:** The endpoint group is running normally.
    // *   **updating:** The endpoint group is being updated.
    // *   **deleting:** The ACL is being deleted.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
