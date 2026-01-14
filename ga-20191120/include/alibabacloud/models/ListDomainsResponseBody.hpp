// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODY_HPP_
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
  class ListDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDomainsResponseBody() = default ;
    ListDomainsResponseBody(const ListDomainsResponseBody &) = default ;
    ListDomainsResponseBody(ListDomainsResponseBody &&) = default ;
    ListDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsResponseBody() = default ;
    ListDomainsResponseBody& operator=(const ListDomainsResponseBody &) = default ;
    ListDomainsResponseBody& operator=(ListDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(Accelerators, accelerators_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(Accelerators, accelerators_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Accelerators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Accelerators& obj) { 
          DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
        };
        friend void from_json(const Darabonba::Json& j, Accelerators& obj) { 
          DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
        };
        Accelerators() = default ;
        Accelerators(const Accelerators &) = default ;
        Accelerators(Accelerators &&) = default ;
        Accelerators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Accelerators() = default ;
        Accelerators& operator=(const Accelerators &) = default ;
        Accelerators& operator=(Accelerators &&) = default ;
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
        && this->name_ == nullptr && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr; };
        // acceleratorId Field Functions 
        bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
        void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
        inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
        inline Accelerators& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Accelerators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline Accelerators& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // serviceManaged Field Functions 
        bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
        void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
        inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
        inline Accelerators& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


        // serviceManagedInfos Field Functions 
        bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
        void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
        inline const vector<Accelerators::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<Accelerators::ServiceManagedInfos>) };
        inline vector<Accelerators::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<Accelerators::ServiceManagedInfos>) };
        inline Accelerators& setServiceManagedInfos(const vector<Accelerators::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
        inline Accelerators& setServiceManagedInfos(vector<Accelerators::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


      protected:
        // The ID of the GA instance.
        shared_ptr<string> acceleratorId_ {};
        // The name of the GA instance.
        shared_ptr<string> name_ {};
        // The ID of the service that manages the GA instance.
        // 
        // >  This parameter takes effect only if **ServiceManaged** is set to **True**.
        shared_ptr<string> serviceId_ {};
        // Indicates whether the GA instance is managed. Valid values:
        // 
        // *   **true**: The GA instance is managed.
        // *   **false**: The GA instance is not managed.
        shared_ptr<bool> serviceManaged_ {};
        // The actions that you can perform on the managed instance.
        // 
        // >  This parameter takes effect only if **ServiceManaged** is set to **True**.
        // 
        // *   You can perform only specific actions on a managed instance.
        shared_ptr<vector<Accelerators::ServiceManagedInfos>> serviceManagedInfos_ {};
      };

      virtual bool empty() const override { return this->accelerators_ == nullptr
        && this->domain_ == nullptr && this->state_ == nullptr; };
      // accelerators Field Functions 
      bool hasAccelerators() const { return this->accelerators_ != nullptr;};
      void deleteAccelerators() { this->accelerators_ = nullptr;};
      inline const vector<Domains::Accelerators> & getAccelerators() const { DARABONBA_PTR_GET_CONST(accelerators_, vector<Domains::Accelerators>) };
      inline vector<Domains::Accelerators> getAccelerators() { DARABONBA_PTR_GET(accelerators_, vector<Domains::Accelerators>) };
      inline Domains& setAccelerators(const vector<Domains::Accelerators> & accelerators) { DARABONBA_PTR_SET_VALUE(accelerators_, accelerators) };
      inline Domains& setAccelerators(vector<Domains::Accelerators> && accelerators) { DARABONBA_PTR_SET_RVALUE(accelerators_, accelerators) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Domains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Domains& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // A list of GA instances.
      shared_ptr<vector<Domains::Accelerators>> accelerators_ {};
      // The accelerated domain name.
      shared_ptr<string> domain_ {};
      // The ICP filing status of the accelerated domain name. Valid values:
      // 
      // *   **illegal:** The domain name is illegal.
      // *   **inactive:** The domain name has not completed ICP filing.
      // *   **active:** The domain name has a valid ICP number.
      // *   **unknown:** The ICP filing status is unknown.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<ListDomainsResponseBody::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<ListDomainsResponseBody::Domains>) };
    inline vector<ListDomainsResponseBody::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<ListDomainsResponseBody::Domains>) };
    inline ListDomainsResponseBody& setDomains(const vector<ListDomainsResponseBody::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListDomainsResponseBody& setDomains(vector<ListDomainsResponseBody::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDomainsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDomainsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDomainsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of accelerated domain names.
    shared_ptr<vector<ListDomainsResponseBody::Domains>> domains_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
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
