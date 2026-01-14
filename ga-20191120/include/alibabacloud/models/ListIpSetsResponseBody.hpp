// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPSETSRESPONSEBODY_HPP_
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
  class ListIpSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpSets, ipSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpSets, ipSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpSetsResponseBody() = default ;
    ListIpSetsResponseBody(const ListIpSetsResponseBody &) = default ;
    ListIpSetsResponseBody(ListIpSetsResponseBody &&) = default ;
    ListIpSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpSetsResponseBody() = default ;
    ListIpSetsResponseBody& operator=(const ListIpSetsResponseBody &) = default ;
    ListIpSetsResponseBody& operator=(ListIpSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSets& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerateRegionId, accelerateRegionId_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(IpAddressList, ipAddressList_);
        DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(IspType, ispType_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, IpSets& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerateRegionId, accelerateRegionId_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(IpAddressList, ipAddressList_);
        DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(IspType, ispType_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      IpSets() = default ;
      IpSets(const IpSets &) = default ;
      IpSets(IpSets &&) = default ;
      IpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpSets() = default ;
      IpSets& operator=(const IpSets &) = default ;
      IpSets& operator=(IpSets &&) = default ;
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
        // Indicates whether the specified actions are managed.
        // 
        // *   **true**: The specified actions are managed, and users cannot perform the actions on the managed instance.****
        // *   **false**: The specified actions are not managed, and users can perform the actions on the managed instance.
        shared_ptr<bool> isManaged_ {};
      };

      virtual bool empty() const override { return this->accelerateRegionId_ == nullptr
        && this->bandwidth_ == nullptr && this->ipAddressList_ == nullptr && this->ipSetId_ == nullptr && this->ipVersion_ == nullptr && this->ispType_ == nullptr
        && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->state_ == nullptr; };
      // accelerateRegionId Field Functions 
      bool hasAccelerateRegionId() const { return this->accelerateRegionId_ != nullptr;};
      void deleteAccelerateRegionId() { this->accelerateRegionId_ = nullptr;};
      inline string getAccelerateRegionId() const { DARABONBA_PTR_GET_DEFAULT(accelerateRegionId_, "") };
      inline IpSets& setAccelerateRegionId(string accelerateRegionId) { DARABONBA_PTR_SET_VALUE(accelerateRegionId_, accelerateRegionId) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline IpSets& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // ipAddressList Field Functions 
      bool hasIpAddressList() const { return this->ipAddressList_ != nullptr;};
      void deleteIpAddressList() { this->ipAddressList_ = nullptr;};
      inline const vector<string> & getIpAddressList() const { DARABONBA_PTR_GET_CONST(ipAddressList_, vector<string>) };
      inline vector<string> getIpAddressList() { DARABONBA_PTR_GET(ipAddressList_, vector<string>) };
      inline IpSets& setIpAddressList(const vector<string> & ipAddressList) { DARABONBA_PTR_SET_VALUE(ipAddressList_, ipAddressList) };
      inline IpSets& setIpAddressList(vector<string> && ipAddressList) { DARABONBA_PTR_SET_RVALUE(ipAddressList_, ipAddressList) };


      // ipSetId Field Functions 
      bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
      void deleteIpSetId() { this->ipSetId_ = nullptr;};
      inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
      inline IpSets& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline IpSets& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // ispType Field Functions 
      bool hasIspType() const { return this->ispType_ != nullptr;};
      void deleteIspType() { this->ispType_ = nullptr;};
      inline string getIspType() const { DARABONBA_PTR_GET_DEFAULT(ispType_, "") };
      inline IpSets& setIspType(string ispType) { DARABONBA_PTR_SET_VALUE(ispType_, ispType) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline IpSets& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline IpSets& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceManagedInfos Field Functions 
      bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
      void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
      inline const vector<IpSets::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<IpSets::ServiceManagedInfos>) };
      inline vector<IpSets::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<IpSets::ServiceManagedInfos>) };
      inline IpSets& setServiceManagedInfos(const vector<IpSets::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
      inline IpSets& setServiceManagedInfos(vector<IpSets::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline IpSets& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the acceleration region.
      shared_ptr<string> accelerateRegionId_ {};
      // The bandwidth that is allocated to the acceleration region. Unit: **Mbit/s**.
      shared_ptr<int32_t> bandwidth_ {};
      // The accelerated IP addresses.
      shared_ptr<vector<string>> ipAddressList_ {};
      // The ID of the acceleration region.
      shared_ptr<string> ipSetId_ {};
      // The IP version. Valid values:
      // 
      // *   **IPv4**
      // *   **IPv6**
      // *   **DUAL_STACK**
      shared_ptr<string> ipVersion_ {};
      // The line type of the elastic IP address (EIP) in the acceleration region. Valid values:
      // 
      // *   **BGP**: BGP (Multi-ISP) lines. This is the default value.
      // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines.
      shared_ptr<string> ispType_ {};
      // The ID of the service that manages the instance.
      // 
      // >  This parameter takes effect only if **ServiceManaged** is set to **true**.
      shared_ptr<string> serviceId_ {};
      // Indicates whether the instance is managed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> serviceManaged_ {};
      // The actions that users can perform on the managed instance.
      // 
      // > *   This parameter takes effect only if **ServiceManaged** is set to **true**.
      // >*   Users can perform only specific actions on a managed instance.
      shared_ptr<vector<IpSets::ServiceManagedInfos>> serviceManagedInfos_ {};
      // The status of the acceleration region. Valid values:
      // 
      // *   **init:** The acceleration region is being initialized.
      // *   **active:** The acceleration region is in the running state.
      // *   **updating:** The acceleration region is being configured.
      // *   **deleting:** The acceleration region is being deleted.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->ipSets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipSets Field Functions 
    bool hasIpSets() const { return this->ipSets_ != nullptr;};
    void deleteIpSets() { this->ipSets_ = nullptr;};
    inline const vector<ListIpSetsResponseBody::IpSets> & getIpSets() const { DARABONBA_PTR_GET_CONST(ipSets_, vector<ListIpSetsResponseBody::IpSets>) };
    inline vector<ListIpSetsResponseBody::IpSets> getIpSets() { DARABONBA_PTR_GET(ipSets_, vector<ListIpSetsResponseBody::IpSets>) };
    inline ListIpSetsResponseBody& setIpSets(const vector<ListIpSetsResponseBody::IpSets> & ipSets) { DARABONBA_PTR_SET_VALUE(ipSets_, ipSets) };
    inline ListIpSetsResponseBody& setIpSets(vector<ListIpSetsResponseBody::IpSets> && ipSets) { DARABONBA_PTR_SET_RVALUE(ipSets_, ipSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIpSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIpSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIpSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The acceleration regions.
    shared_ptr<vector<ListIpSetsResponseBody::IpSets>> ipSets_ {};
    // The page number of the returned page.
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
