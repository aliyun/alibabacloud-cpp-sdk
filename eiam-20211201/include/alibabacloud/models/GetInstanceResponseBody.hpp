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
        DARABONBA_PTR_TO_JSON(CrossRegionReplication, crossRegionReplication_);
        DARABONBA_PTR_TO_JSON(CrossRegionReplicationRole, crossRegionReplicationRole_);
        DARABONBA_PTR_TO_JSON(DefaultEndpoint, defaultEndpoint_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
        DARABONBA_PTR_TO_JSON(EgressAddresses, egressAddresses_);
        DARABONBA_PTR_TO_JSON(InstanceFailoverStatus, instanceFailoverStatus_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_TO_JSON(ReplicationConfiguration, replicationConfiguration_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossRegionReplication, crossRegionReplication_);
        DARABONBA_PTR_FROM_JSON(CrossRegionReplicationRole, crossRegionReplicationRole_);
        DARABONBA_PTR_FROM_JSON(DefaultEndpoint, defaultEndpoint_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
        DARABONBA_PTR_FROM_JSON(EgressAddresses, egressAddresses_);
        DARABONBA_PTR_FROM_JSON(InstanceFailoverStatus, instanceFailoverStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ManagedServiceCode, managedServiceCode_);
        DARABONBA_PTR_FROM_JSON(ReplicationConfiguration, replicationConfiguration_);
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
      class ReplicationConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReplicationConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(BackupInstanceId, backupInstanceId_);
          DARABONBA_PTR_TO_JSON(BackupInstanceRegionId, backupInstanceRegionId_);
          DARABONBA_PTR_TO_JSON(PrimaryInstanceId, primaryInstanceId_);
          DARABONBA_PTR_TO_JSON(PrimaryInstanceRegionId, primaryInstanceRegionId_);
          DARABONBA_PTR_TO_JSON(ReplicationCreateTime, replicationCreateTime_);
        };
        friend void from_json(const Darabonba::Json& j, ReplicationConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupInstanceId, backupInstanceId_);
          DARABONBA_PTR_FROM_JSON(BackupInstanceRegionId, backupInstanceRegionId_);
          DARABONBA_PTR_FROM_JSON(PrimaryInstanceId, primaryInstanceId_);
          DARABONBA_PTR_FROM_JSON(PrimaryInstanceRegionId, primaryInstanceRegionId_);
          DARABONBA_PTR_FROM_JSON(ReplicationCreateTime, replicationCreateTime_);
        };
        ReplicationConfiguration() = default ;
        ReplicationConfiguration(const ReplicationConfiguration &) = default ;
        ReplicationConfiguration(ReplicationConfiguration &&) = default ;
        ReplicationConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReplicationConfiguration() = default ;
        ReplicationConfiguration& operator=(const ReplicationConfiguration &) = default ;
        ReplicationConfiguration& operator=(ReplicationConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupInstanceId_ == nullptr
        && this->backupInstanceRegionId_ == nullptr && this->primaryInstanceId_ == nullptr && this->primaryInstanceRegionId_ == nullptr && this->replicationCreateTime_ == nullptr; };
        // backupInstanceId Field Functions 
        bool hasBackupInstanceId() const { return this->backupInstanceId_ != nullptr;};
        void deleteBackupInstanceId() { this->backupInstanceId_ = nullptr;};
        inline string getBackupInstanceId() const { DARABONBA_PTR_GET_DEFAULT(backupInstanceId_, "") };
        inline ReplicationConfiguration& setBackupInstanceId(string backupInstanceId) { DARABONBA_PTR_SET_VALUE(backupInstanceId_, backupInstanceId) };


        // backupInstanceRegionId Field Functions 
        bool hasBackupInstanceRegionId() const { return this->backupInstanceRegionId_ != nullptr;};
        void deleteBackupInstanceRegionId() { this->backupInstanceRegionId_ = nullptr;};
        inline string getBackupInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(backupInstanceRegionId_, "") };
        inline ReplicationConfiguration& setBackupInstanceRegionId(string backupInstanceRegionId) { DARABONBA_PTR_SET_VALUE(backupInstanceRegionId_, backupInstanceRegionId) };


        // primaryInstanceId Field Functions 
        bool hasPrimaryInstanceId() const { return this->primaryInstanceId_ != nullptr;};
        void deletePrimaryInstanceId() { this->primaryInstanceId_ = nullptr;};
        inline string getPrimaryInstanceId() const { DARABONBA_PTR_GET_DEFAULT(primaryInstanceId_, "") };
        inline ReplicationConfiguration& setPrimaryInstanceId(string primaryInstanceId) { DARABONBA_PTR_SET_VALUE(primaryInstanceId_, primaryInstanceId) };


        // primaryInstanceRegionId Field Functions 
        bool hasPrimaryInstanceRegionId() const { return this->primaryInstanceRegionId_ != nullptr;};
        void deletePrimaryInstanceRegionId() { this->primaryInstanceRegionId_ = nullptr;};
        inline string getPrimaryInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(primaryInstanceRegionId_, "") };
        inline ReplicationConfiguration& setPrimaryInstanceRegionId(string primaryInstanceRegionId) { DARABONBA_PTR_SET_VALUE(primaryInstanceRegionId_, primaryInstanceRegionId) };


        // replicationCreateTime Field Functions 
        bool hasReplicationCreateTime() const { return this->replicationCreateTime_ != nullptr;};
        void deleteReplicationCreateTime() { this->replicationCreateTime_ = nullptr;};
        inline int64_t getReplicationCreateTime() const { DARABONBA_PTR_GET_DEFAULT(replicationCreateTime_, 0L) };
        inline ReplicationConfiguration& setReplicationCreateTime(int64_t replicationCreateTime) { DARABONBA_PTR_SET_VALUE(replicationCreateTime_, replicationCreateTime) };


      protected:
        shared_ptr<string> backupInstanceId_ {};
        shared_ptr<string> backupInstanceRegionId_ {};
        shared_ptr<string> primaryInstanceId_ {};
        shared_ptr<string> primaryInstanceRegionId_ {};
        shared_ptr<int64_t> replicationCreateTime_ {};
      };

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
        // The default domain name of the instance.
        shared_ptr<string> defaultDomain_ {};
        // The initialization domain name of the instance.
        shared_ptr<string> initDomain_ {};
        // The automatic redirect status of the initialization domain name. Valid values:
        // - enabled: Enabled.
        // 
        // - disabled: Disabled.
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
        // The domain name of the instance.
        shared_ptr<string> endpoint_ {};
        // The status of the instance domain name. Valid values:
        // - resolved: Resolved.
        // - unresolved: Not resolved.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->crossRegionReplication_ == nullptr && this->crossRegionReplicationRole_ == nullptr && this->defaultEndpoint_ == nullptr && this->description_ == nullptr && this->domainConfig_ == nullptr
        && this->egressAddresses_ == nullptr && this->instanceFailoverStatus_ == nullptr && this->instanceId_ == nullptr && this->managedServiceCode_ == nullptr && this->replicationConfiguration_ == nullptr
        && this->serviceManaged_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Instance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossRegionReplication Field Functions 
      bool hasCrossRegionReplication() const { return this->crossRegionReplication_ != nullptr;};
      void deleteCrossRegionReplication() { this->crossRegionReplication_ = nullptr;};
      inline string getCrossRegionReplication() const { DARABONBA_PTR_GET_DEFAULT(crossRegionReplication_, "") };
      inline Instance& setCrossRegionReplication(string crossRegionReplication) { DARABONBA_PTR_SET_VALUE(crossRegionReplication_, crossRegionReplication) };


      // crossRegionReplicationRole Field Functions 
      bool hasCrossRegionReplicationRole() const { return this->crossRegionReplicationRole_ != nullptr;};
      void deleteCrossRegionReplicationRole() { this->crossRegionReplicationRole_ = nullptr;};
      inline string getCrossRegionReplicationRole() const { DARABONBA_PTR_GET_DEFAULT(crossRegionReplicationRole_, "") };
      inline Instance& setCrossRegionReplicationRole(string crossRegionReplicationRole) { DARABONBA_PTR_SET_VALUE(crossRegionReplicationRole_, crossRegionReplicationRole) };


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


      // instanceFailoverStatus Field Functions 
      bool hasInstanceFailoverStatus() const { return this->instanceFailoverStatus_ != nullptr;};
      void deleteInstanceFailoverStatus() { this->instanceFailoverStatus_ = nullptr;};
      inline string getInstanceFailoverStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceFailoverStatus_, "") };
      inline Instance& setInstanceFailoverStatus(string instanceFailoverStatus) { DARABONBA_PTR_SET_VALUE(instanceFailoverStatus_, instanceFailoverStatus) };


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


      // replicationConfiguration Field Functions 
      bool hasReplicationConfiguration() const { return this->replicationConfiguration_ != nullptr;};
      void deleteReplicationConfiguration() { this->replicationConfiguration_ = nullptr;};
      inline const Instance::ReplicationConfiguration & getReplicationConfiguration() const { DARABONBA_PTR_GET_CONST(replicationConfiguration_, Instance::ReplicationConfiguration) };
      inline Instance::ReplicationConfiguration getReplicationConfiguration() { DARABONBA_PTR_GET(replicationConfiguration_, Instance::ReplicationConfiguration) };
      inline Instance& setReplicationConfiguration(const Instance::ReplicationConfiguration & replicationConfiguration) { DARABONBA_PTR_SET_VALUE(replicationConfiguration_, replicationConfiguration) };
      inline Instance& setReplicationConfiguration(Instance::ReplicationConfiguration && replicationConfiguration) { DARABONBA_PTR_SET_RVALUE(replicationConfiguration_, replicationConfiguration) };


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
      // The time when the instance was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> crossRegionReplication_ {};
      shared_ptr<string> crossRegionReplicationRole_ {};
      // The default domain name of the instance. This field is no longer maintained. Use the DomainConfig fields or refer to the query domain name list operation instead.
      shared_ptr<Instance::DefaultEndpoint> defaultEndpoint_ {};
      // The description of the instance.
      shared_ptr<string> description_ {};
      // The domain name configuration of the instance.
      shared_ptr<Instance::DomainConfig> domainConfig_ {};
      // The public egress CIDR blocks of the instance. For example, during Active Directory (AD) account synchronization, the EIAM instance accesses your AD server through these public CIDR blocks.
      shared_ptr<vector<string>> egressAddresses_ {};
      shared_ptr<string> instanceFailoverStatus_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The ServiceCode of the Alibaba Cloud service that manages the instance.
      shared_ptr<string> managedServiceCode_ {};
      shared_ptr<Instance::ReplicationConfiguration> replicationConfiguration_ {};
      // Indicates whether the instance is managed by an Alibaba Cloud service.
      shared_ptr<bool> serviceManaged_ {};
      // The instance status. Valid values:
      // - creating: Being created.
      // - running: Running.
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
    // The instance information.
    shared_ptr<GetInstanceResponseBody::Instance> instance_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
