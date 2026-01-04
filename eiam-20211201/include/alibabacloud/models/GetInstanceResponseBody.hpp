// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultEndpoint, defaultEndpoint_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
        DARABONBA_PTR_TO_JSON(EgressAddresses, egressAddresses_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultEndpoint, defaultEndpoint_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
        DARABONBA_PTR_FROM_JSON(EgressAddresses, egressAddresses_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainConfig& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
          DARABONBA_PTR_TO_JSON(InitDomain, initDomain_);
          DARABONBA_PTR_TO_JSON(InitDomainAutoRedirectStatus, initDomainAutoRedirectStatus_);
        };
        friend void from_json(const Darabonba::Json& j, DomainConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
          DARABONBA_PTR_FROM_JSON(InitDomain, initDomain_);
          DARABONBA_PTR_FROM_JSON(InitDomainAutoRedirectStatus, initDomainAutoRedirectStatus_);
        };
        DomainConfig() = default ;
        DomainConfig(const DomainConfig &) = default ;
        DomainConfig(DomainConfig &&) = default ;
        DomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainConfig() = default ;
        DomainConfig& operator=(const DomainConfig &) = default ;
        DomainConfig& operator=(DomainConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultDomain_ == nullptr
        && this->initDomain_ == nullptr && this->initDomainAutoRedirectStatus_ == nullptr; };
        // defaultDomain Field Functions 
        bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
        void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
        inline string getDefaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
        inline DomainConfig& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


        // initDomain Field Functions 
        bool hasInitDomain() const { return this->initDomain_ != nullptr;};
        void deleteInitDomain() { this->initDomain_ = nullptr;};
        inline string getInitDomain() const { DARABONBA_PTR_GET_DEFAULT(initDomain_, "") };
        inline DomainConfig& setInitDomain(string initDomain) { DARABONBA_PTR_SET_VALUE(initDomain_, initDomain) };


        // initDomainAutoRedirectStatus Field Functions 
        bool hasInitDomainAutoRedirectStatus() const { return this->initDomainAutoRedirectStatus_ != nullptr;};
        void deleteInitDomainAutoRedirectStatus() { this->initDomainAutoRedirectStatus_ = nullptr;};
        inline string getInitDomainAutoRedirectStatus() const { DARABONBA_PTR_GET_DEFAULT(initDomainAutoRedirectStatus_, "") };
        inline DomainConfig& setInitDomainAutoRedirectStatus(string initDomainAutoRedirectStatus) { DARABONBA_PTR_SET_VALUE(initDomainAutoRedirectStatus_, initDomainAutoRedirectStatus) };


      protected:
        // The default domain of the instance.
        shared_ptr<string> defaultDomain_ {};
        // The init domain of the instance.
        shared_ptr<string> initDomain_ {};
        // Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<string> initDomainAutoRedirectStatus_ {};
      };

      class DefaultEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefaultEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DefaultEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DefaultEndpoint() = default ;
        DefaultEndpoint(const DefaultEndpoint &) = default ;
        DefaultEndpoint(DefaultEndpoint &&) = default ;
        DefaultEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DefaultEndpoint() = default ;
        DefaultEndpoint& operator=(const DefaultEndpoint &) = default ;
        DefaultEndpoint& operator=(DefaultEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->status_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline DefaultEndpoint& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DefaultEndpoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The endpoint of the instance.
        shared_ptr<string> endpoint_ {};
        // The status of the endpoint. Valid values:
        // 
        // *   resolved
        // *   unresolved
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultEndpoint_ == nullptr && this->description_ == nullptr && this->domainConfig_ == nullptr && this->egressAddresses_ == nullptr && this->instanceId_ == nullptr
        && this->managedServiceCode_ == nullptr && this->serviceManaged_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Instance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultEndpoint Field Functions 
      bool hasDefaultEndpoint() const { return this->defaultEndpoint_ != nullptr;};
      void deleteDefaultEndpoint() { this->defaultEndpoint_ = nullptr;};
      inline const Instance::DefaultEndpoint & getDefaultEndpoint() const { DARABONBA_PTR_GET_CONST(defaultEndpoint_, Instance::DefaultEndpoint) };
      inline Instance::DefaultEndpoint getDefaultEndpoint() { DARABONBA_PTR_GET(defaultEndpoint_, Instance::DefaultEndpoint) };
      inline Instance& setDefaultEndpoint(const Instance::DefaultEndpoint & defaultEndpoint) { DARABONBA_PTR_SET_VALUE(defaultEndpoint_, defaultEndpoint) };
      inline Instance& setDefaultEndpoint(Instance::DefaultEndpoint && defaultEndpoint) { DARABONBA_PTR_SET_RVALUE(defaultEndpoint_, defaultEndpoint) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Instance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainConfig Field Functions 
      bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
      void deleteDomainConfig() { this->domainConfig_ = nullptr;};
      inline const Instance::DomainConfig & getDomainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, Instance::DomainConfig) };
      inline Instance::DomainConfig getDomainConfig() { DARABONBA_PTR_GET(domainConfig_, Instance::DomainConfig) };
      inline Instance& setDomainConfig(const Instance::DomainConfig & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
      inline Instance& setDomainConfig(Instance::DomainConfig && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


      // egressAddresses Field Functions 
      bool hasEgressAddresses() const { return this->egressAddresses_ != nullptr;};
      void deleteEgressAddresses() { this->egressAddresses_ = nullptr;};
      inline const vector<string> & getEgressAddresses() const { DARABONBA_PTR_GET_CONST(egressAddresses_, vector<string>) };
      inline vector<string> getEgressAddresses() { DARABONBA_PTR_GET(egressAddresses_, vector<string>) };
      inline Instance& setEgressAddresses(const vector<string> & egressAddresses) { DARABONBA_PTR_SET_VALUE(egressAddresses_, egressAddresses) };
      inline Instance& setEgressAddresses(vector<string> && egressAddresses) { DARABONBA_PTR_SET_RVALUE(egressAddresses_, egressAddresses) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // managedServiceCode Field Functions 
      bool hasManagedServiceCode() const { return this->managedServiceCode_ != nullptr;};
      void deleteManagedServiceCode() { this->managedServiceCode_ = nullptr;};
      inline string getManagedServiceCode() const { DARABONBA_PTR_GET_DEFAULT(managedServiceCode_, "") };
      inline Instance& setManagedServiceCode(string managedServiceCode) { DARABONBA_PTR_SET_VALUE(managedServiceCode_, managedServiceCode) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Instance& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the instance was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // The default endpoint of the instance.
      shared_ptr<Instance::DefaultEndpoint> defaultEndpoint_ {};
      // The description of the instance.
      shared_ptr<string> description_ {};
      // The default domain of the instance.
      shared_ptr<Instance::DomainConfig> domainConfig_ {};
      // The outbound public CIDR blocks of the instance. For example, when you synchronize Active Directory (AD) accounts, the IDaaS EIAM instance accesses your AD service by using the outbound public CIDR blocks.
      shared_ptr<vector<string>> egressAddresses_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> managedServiceCode_ {};
      shared_ptr<bool> serviceManaged_ {};
      // The status of the instance. Valid values:
      // 
      // *   creating
      // *   running
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instance_ == nullptr
        && this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const GetInstanceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, GetInstanceResponseBody::Instance) };
    inline GetInstanceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, GetInstanceResponseBody::Instance) };
    inline GetInstanceResponseBody& setInstance(const GetInstanceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline GetInstanceResponseBody& setInstance(GetInstanceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the instance.
    shared_ptr<GetInstanceResponseBody::Instance> instance_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
