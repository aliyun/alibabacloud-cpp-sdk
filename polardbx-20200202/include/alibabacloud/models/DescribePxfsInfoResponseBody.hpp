// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPXFSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPXFSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribePxfsInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePxfsInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePxfsInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePxfsInfoResponseBody() = default ;
    DescribePxfsInfoResponseBody(const DescribePxfsInfoResponseBody &) = default ;
    DescribePxfsInfoResponseBody(DescribePxfsInfoResponseBody &&) = default ;
    DescribePxfsInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePxfsInfoResponseBody() = default ;
    DescribePxfsInfoResponseBody& operator=(const DescribePxfsInfoResponseBody &) = default ;
    DescribePxfsInfoResponseBody& operator=(DescribePxfsInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
          DARABONBA_PTR_TO_JSON(ConnAddrs, connAddrs_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_TO_JSON(PxfsInstanceId, pxfsInstanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
          DARABONBA_PTR_FROM_JSON(ConnAddrs, connAddrs_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_FROM_JSON(PxfsInstanceId, pxfsInstanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        class ConnAddrs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnAddrs& obj) { 
            DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
            DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
            DARABONBA_PTR_TO_JSON(TlsEnabled, tlsEnabled_);
            DARABONBA_PTR_TO_JSON(Transport, transport_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          };
          friend void from_json(const Darabonba::Json& j, ConnAddrs& obj) { 
            DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
            DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
            DARABONBA_PTR_FROM_JSON(TlsEnabled, tlsEnabled_);
            DARABONBA_PTR_FROM_JSON(Transport, transport_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          };
          ConnAddrs() = default ;
          ConnAddrs(const ConnAddrs &) = default ;
          ConnAddrs(ConnAddrs &&) = default ;
          ConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnAddrs() = default ;
          ConnAddrs& operator=(const ConnAddrs &) = default ;
          ConnAddrs& operator=(ConnAddrs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->endpoint_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->tlsEnabled_ == nullptr && this->transport_ == nullptr
        && this->type_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
          // connectionString Field Functions 
          bool hasConnectionString() const { return this->connectionString_ != nullptr;};
          void deleteConnectionString() { this->connectionString_ = nullptr;};
          inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
          inline ConnAddrs& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline ConnAddrs& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline ConnAddrs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline ConnAddrs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          // tlsEnabled Field Functions 
          bool hasTlsEnabled() const { return this->tlsEnabled_ != nullptr;};
          void deleteTlsEnabled() { this->tlsEnabled_ = nullptr;};
          inline bool getTlsEnabled() const { DARABONBA_PTR_GET_DEFAULT(tlsEnabled_, false) };
          inline ConnAddrs& setTlsEnabled(bool tlsEnabled) { DARABONBA_PTR_SET_VALUE(tlsEnabled_, tlsEnabled) };


          // transport Field Functions 
          bool hasTransport() const { return this->transport_ != nullptr;};
          void deleteTransport() { this->transport_ = nullptr;};
          inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
          inline ConnAddrs& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ConnAddrs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // VPCId Field Functions 
          bool hasVPCId() const { return this->VPCId_ != nullptr;};
          void deleteVPCId() { this->VPCId_ = nullptr;};
          inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
          inline ConnAddrs& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline ConnAddrs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        protected:
          // The connection string.
          shared_ptr<string> connectionString_ {};
          // The endpoint.
          shared_ptr<string> endpoint_ {};
          // The port number.
          shared_ptr<int32_t> port_ {};
          // The access protocol.
          shared_ptr<string> protocol_ {};
          // Indicates whether TLS is enabled.
          shared_ptr<bool> tlsEnabled_ {};
          // The transport protocol.
          shared_ptr<string> transport_ {};
          // The connection type.
          shared_ptr<string> type_ {};
          // The virtual private cloud (VPC) ID.
          shared_ptr<string> VPCId_ {};
          // The vSwitch ID.
          shared_ptr<string> vSwitchId_ {};
        };

        virtual bool empty() const override { return this->classCode_ == nullptr
        && this->connAddrs_ == nullptr && this->createTime_ == nullptr && this->DBInstanceName_ == nullptr && this->instanceId_ == nullptr && this->nodeCount_ == nullptr
        && this->pxfsInstanceId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->storageSize_ == nullptr && this->storageType_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->version_ == nullptr && this->zoneId_ == nullptr; };
        // classCode Field Functions 
        bool hasClassCode() const { return this->classCode_ != nullptr;};
        void deleteClassCode() { this->classCode_ = nullptr;};
        inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
        inline Instance& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


        // connAddrs Field Functions 
        bool hasConnAddrs() const { return this->connAddrs_ != nullptr;};
        void deleteConnAddrs() { this->connAddrs_ = nullptr;};
        inline const vector<Instance::ConnAddrs> & getConnAddrs() const { DARABONBA_PTR_GET_CONST(connAddrs_, vector<Instance::ConnAddrs>) };
        inline vector<Instance::ConnAddrs> getConnAddrs() { DARABONBA_PTR_GET(connAddrs_, vector<Instance::ConnAddrs>) };
        inline Instance& setConnAddrs(const vector<Instance::ConnAddrs> & connAddrs) { DARABONBA_PTR_SET_VALUE(connAddrs_, connAddrs) };
        inline Instance& setConnAddrs(vector<Instance::ConnAddrs> && connAddrs) { DARABONBA_PTR_SET_RVALUE(connAddrs_, connAddrs) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Instance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBInstanceName Field Functions 
        bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
        void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
        inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
        inline Instance& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeCount Field Functions 
        bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
        void deleteNodeCount() { this->nodeCount_ = nullptr;};
        inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
        inline Instance& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


        // pxfsInstanceId Field Functions 
        bool hasPxfsInstanceId() const { return this->pxfsInstanceId_ != nullptr;};
        void deletePxfsInstanceId() { this->pxfsInstanceId_ = nullptr;};
        inline string getPxfsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pxfsInstanceId_, "") };
        inline Instance& setPxfsInstanceId(string pxfsInstanceId) { DARABONBA_PTR_SET_VALUE(pxfsInstanceId_, pxfsInstanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Instance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
        inline Instance& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Instance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline Instance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Instance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Instance& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Instance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The node specification.
        shared_ptr<string> classCode_ {};
        // The list of connection addresses.
        shared_ptr<vector<Instance::ConnAddrs>> connAddrs_ {};
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The PolarDB-X instance ID.
        shared_ptr<string> DBInstanceName_ {};
        // The associated instance ID.
        shared_ptr<string> instanceId_ {};
        // The number of nodes.
        shared_ptr<int32_t> nodeCount_ {};
        // The Agent file service instance ID.
        shared_ptr<string> pxfsInstanceId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The storage size.
        shared_ptr<int64_t> storageSize_ {};
        // The storage type.
        shared_ptr<string> storageType_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> VPCId_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The current version.
        shared_ptr<string> version_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const Data::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, Data::Instance) };
      inline Data::Instance getInstance() { DARABONBA_PTR_GET(instance_, Data::Instance) };
      inline Data& setInstance(const Data::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Data& setInstance(Data::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      // The instance information.
      shared_ptr<Data::Instance> instance_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authorization action. Same as described above.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The authorization action. Same as described above.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The type of missing permission.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribePxfsInfoResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribePxfsInfoResponseBody::AccessDeniedDetail) };
    inline DescribePxfsInfoResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribePxfsInfoResponseBody::AccessDeniedDetail) };
    inline DescribePxfsInfoResponseBody& setAccessDeniedDetail(const DescribePxfsInfoResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribePxfsInfoResponseBody& setAccessDeniedDetail(DescribePxfsInfoResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePxfsInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePxfsInfoResponseBody::Data) };
    inline DescribePxfsInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePxfsInfoResponseBody::Data) };
    inline DescribePxfsInfoResponseBody& setData(const DescribePxfsInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePxfsInfoResponseBody& setData(DescribePxfsInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePxfsInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<DescribePxfsInfoResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The response data.
    shared_ptr<DescribePxfsInfoResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
