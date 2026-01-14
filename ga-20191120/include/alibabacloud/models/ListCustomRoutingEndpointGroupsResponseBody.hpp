// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPSRESPONSEBODY_HPP_
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
  class ListCustomRoutingEndpointGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomRoutingEndpointGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointGroups, endpointGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomRoutingEndpointGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointGroups, endpointGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomRoutingEndpointGroupsResponseBody() = default ;
    ListCustomRoutingEndpointGroupsResponseBody(const ListCustomRoutingEndpointGroupsResponseBody &) = default ;
    ListCustomRoutingEndpointGroupsResponseBody(ListCustomRoutingEndpointGroupsResponseBody &&) = default ;
    ListCustomRoutingEndpointGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomRoutingEndpointGroupsResponseBody() = default ;
    ListCustomRoutingEndpointGroupsResponseBody& operator=(const ListCustomRoutingEndpointGroupsResponseBody &) = default ;
    ListCustomRoutingEndpointGroupsResponseBody& operator=(ListCustomRoutingEndpointGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_TO_JSON(EndpointGroupIpList, endpointGroupIpList_);
        DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_TO_JSON(EndpointGroupUnconfirmedIpList, endpointGroupUnconfirmedIpList_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupIpList, endpointGroupIpList_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupUnconfirmedIpList, endpointGroupUnconfirmedIpList_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      EndpointGroups() = default ;
      EndpointGroups(const EndpointGroups &) = default ;
      EndpointGroups(EndpointGroups &&) = default ;
      EndpointGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointGroups() = default ;
      EndpointGroups& operator=(const EndpointGroups &) = default ;
      EndpointGroups& operator=(EndpointGroups &&) = default ;
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
        // Indicates whether the specified actions are managed.
        // 
        // *   **true**: Users cannot perform the specified actions on the managed instance.
        // *   **false**: Users can perform the specified actions on the managed instance.
        shared_ptr<bool> isManaged_ {};
      };

      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->description_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointGroupIpList_ == nullptr && this->endpointGroupRegion_ == nullptr && this->endpointGroupUnconfirmedIpList_ == nullptr
        && this->listenerId_ == nullptr && this->name_ == nullptr && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr
        && this->state_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline EndpointGroups& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EndpointGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpointGroupId Field Functions 
      bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
      void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
      inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
      inline EndpointGroups& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


      // endpointGroupIpList Field Functions 
      bool hasEndpointGroupIpList() const { return this->endpointGroupIpList_ != nullptr;};
      void deleteEndpointGroupIpList() { this->endpointGroupIpList_ = nullptr;};
      inline const vector<string> & getEndpointGroupIpList() const { DARABONBA_PTR_GET_CONST(endpointGroupIpList_, vector<string>) };
      inline vector<string> getEndpointGroupIpList() { DARABONBA_PTR_GET(endpointGroupIpList_, vector<string>) };
      inline EndpointGroups& setEndpointGroupIpList(const vector<string> & endpointGroupIpList) { DARABONBA_PTR_SET_VALUE(endpointGroupIpList_, endpointGroupIpList) };
      inline EndpointGroups& setEndpointGroupIpList(vector<string> && endpointGroupIpList) { DARABONBA_PTR_SET_RVALUE(endpointGroupIpList_, endpointGroupIpList) };


      // endpointGroupRegion Field Functions 
      bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
      void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
      inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
      inline EndpointGroups& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


      // endpointGroupUnconfirmedIpList Field Functions 
      bool hasEndpointGroupUnconfirmedIpList() const { return this->endpointGroupUnconfirmedIpList_ != nullptr;};
      void deleteEndpointGroupUnconfirmedIpList() { this->endpointGroupUnconfirmedIpList_ = nullptr;};
      inline const vector<string> & getEndpointGroupUnconfirmedIpList() const { DARABONBA_PTR_GET_CONST(endpointGroupUnconfirmedIpList_, vector<string>) };
      inline vector<string> getEndpointGroupUnconfirmedIpList() { DARABONBA_PTR_GET(endpointGroupUnconfirmedIpList_, vector<string>) };
      inline EndpointGroups& setEndpointGroupUnconfirmedIpList(const vector<string> & endpointGroupUnconfirmedIpList) { DARABONBA_PTR_SET_VALUE(endpointGroupUnconfirmedIpList_, endpointGroupUnconfirmedIpList) };
      inline EndpointGroups& setEndpointGroupUnconfirmedIpList(vector<string> && endpointGroupUnconfirmedIpList) { DARABONBA_PTR_SET_RVALUE(endpointGroupUnconfirmedIpList_, endpointGroupUnconfirmedIpList) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline EndpointGroups& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EndpointGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline EndpointGroups& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline EndpointGroups& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceManagedInfos Field Functions 
      bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
      void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
      inline const vector<EndpointGroups::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<EndpointGroups::ServiceManagedInfos>) };
      inline vector<EndpointGroups::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<EndpointGroups::ServiceManagedInfos>) };
      inline EndpointGroups& setServiceManagedInfos(const vector<EndpointGroups::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
      inline EndpointGroups& setServiceManagedInfos(vector<EndpointGroups::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline EndpointGroups& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The description of the endpoint group.
      shared_ptr<string> description_ {};
      // The ID of the endpoint group.
      shared_ptr<string> endpointGroupId_ {};
      // The endpoint group IP addresses.
      shared_ptr<vector<string>> endpointGroupIpList_ {};
      // The ID of the region where the endpoint group is created.
      shared_ptr<string> endpointGroupRegion_ {};
      // The endpoint group IP addresses to be confirmed after the GA instance is upgraded.
      shared_ptr<vector<string>> endpointGroupUnconfirmedIpList_ {};
      // The ID of the custom routing listener.
      shared_ptr<string> listenerId_ {};
      // The name of the endpoint group.
      shared_ptr<string> name_ {};
      // The ID of the service that manages the instance.
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
      // > 
      // 
      // *   This parameter takes effect only if **ServiceManaged** is set to **True**.
      // 
      // *   Users can perform only specific actions on a managed instance.
      shared_ptr<vector<EndpointGroups::ServiceManagedInfos>> serviceManagedInfos_ {};
      // The status of the endpoint group. Valid values:
      // 
      // *   **init**
      // *   **active**
      // *   **updating**
      // *   **deleting**
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->endpointGroups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // endpointGroups Field Functions 
    bool hasEndpointGroups() const { return this->endpointGroups_ != nullptr;};
    void deleteEndpointGroups() { this->endpointGroups_ = nullptr;};
    inline const vector<ListCustomRoutingEndpointGroupsResponseBody::EndpointGroups> & getEndpointGroups() const { DARABONBA_PTR_GET_CONST(endpointGroups_, vector<ListCustomRoutingEndpointGroupsResponseBody::EndpointGroups>) };
    inline vector<ListCustomRoutingEndpointGroupsResponseBody::EndpointGroups> getEndpointGroups() { DARABONBA_PTR_GET(endpointGroups_, vector<ListCustomRoutingEndpointGroupsResponseBody::EndpointGroups>) };
    inline ListCustomRoutingEndpointGroupsResponseBody& setEndpointGroups(const vector<ListCustomRoutingEndpointGroupsResponseBody::EndpointGroups> & endpointGroups) { DARABONBA_PTR_SET_VALUE(endpointGroups_, endpointGroups) };
    inline ListCustomRoutingEndpointGroupsResponseBody& setEndpointGroups(vector<ListCustomRoutingEndpointGroupsResponseBody::EndpointGroups> && endpointGroups) { DARABONBA_PTR_SET_RVALUE(endpointGroups_, endpointGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomRoutingEndpointGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomRoutingEndpointGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomRoutingEndpointGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomRoutingEndpointGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configuration information about the endpoint group.
    shared_ptr<vector<ListCustomRoutingEndpointGroupsResponseBody::EndpointGroups>> endpointGroups_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
