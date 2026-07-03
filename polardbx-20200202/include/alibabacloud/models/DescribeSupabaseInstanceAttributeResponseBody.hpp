// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPABASEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPABASEINSTANCEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeSupabaseInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupabaseInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupabaseInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSupabaseInstanceAttributeResponseBody() = default ;
    DescribeSupabaseInstanceAttributeResponseBody(const DescribeSupabaseInstanceAttributeResponseBody &) = default ;
    DescribeSupabaseInstanceAttributeResponseBody(DescribeSupabaseInstanceAttributeResponseBody &&) = default ;
    DescribeSupabaseInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupabaseInstanceAttributeResponseBody() = default ;
    DescribeSupabaseInstanceAttributeResponseBody& operator=(const DescribeSupabaseInstanceAttributeResponseBody &) = default ;
    DescribeSupabaseInstanceAttributeResponseBody& operator=(DescribeSupabaseInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnAddrs, connAddrs_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
        DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(PolarDBXDBInstanceName, polarDBXDBInstanceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupabaseClassCode, supabaseClassCode_);
        DARABONBA_PTR_TO_JSON(TenantMode, tenantMode_);
        DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnAddrs, connAddrs_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
        DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(PolarDBXDBInstanceName, polarDBXDBInstanceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupabaseClassCode, supabaseClassCode_);
        DARABONBA_PTR_FROM_JSON(TenantMode, tenantMode_);
        DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classCode_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->zoneId_ == nullptr; };
        // classCode Field Functions 
        bool hasClassCode() const { return this->classCode_ != nullptr;};
        void deleteClassCode() { this->classCode_ = nullptr;};
        inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
        inline Nodes& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Nodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Nodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The class code.
        shared_ptr<string> classCode_ {};
        // The node ID.
        shared_ptr<string> id_ {};
        // The node name.
        shared_ptr<string> name_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      class ConnAddrs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnAddrs& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, ConnAddrs& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
        && this->netType_ == nullptr && this->port_ == nullptr && this->vpcId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline ConnAddrs& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline ConnAddrs& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline ConnAddrs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline ConnAddrs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The endpoint.
        shared_ptr<string> connectionString_ {};
        // The network type.
        shared_ptr<string> netType_ {};
        // The port.
        shared_ptr<int32_t> port_ {};
        // VPC ID
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->connAddrs_ == nullptr
        && this->createTime_ == nullptr && this->DBInstanceName_ == nullptr && this->engineVersion_ == nullptr && this->expired_ == nullptr && this->lockMode_ == nullptr
        && this->minorVersion_ == nullptr && this->nodeClass_ == nullptr && this->nodeCount_ == nullptr && this->nodes_ == nullptr && this->polarDBXDBInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->supabaseClassCode_ == nullptr && this->tenantMode_ == nullptr && this->topologyType_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // connAddrs Field Functions 
      bool hasConnAddrs() const { return this->connAddrs_ != nullptr;};
      void deleteConnAddrs() { this->connAddrs_ = nullptr;};
      inline const vector<Data::ConnAddrs> & getConnAddrs() const { DARABONBA_PTR_GET_CONST(connAddrs_, vector<Data::ConnAddrs>) };
      inline vector<Data::ConnAddrs> getConnAddrs() { DARABONBA_PTR_GET(connAddrs_, vector<Data::ConnAddrs>) };
      inline Data& setConnAddrs(const vector<Data::ConnAddrs> & connAddrs) { DARABONBA_PTR_SET_VALUE(connAddrs_, connAddrs) };
      inline Data& setConnAddrs(vector<Data::ConnAddrs> && connAddrs) { DARABONBA_PTR_SET_RVALUE(connAddrs_, connAddrs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Data& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
      inline Data& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline Data& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline Data& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // nodeClass Field Functions 
      bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
      void deleteNodeClass() { this->nodeClass_ = nullptr;};
      inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
      inline Data& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
      inline Data& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // polarDBXDBInstanceName Field Functions 
      bool hasPolarDBXDBInstanceName() const { return this->polarDBXDBInstanceName_ != nullptr;};
      void deletePolarDBXDBInstanceName() { this->polarDBXDBInstanceName_ = nullptr;};
      inline string getPolarDBXDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(polarDBXDBInstanceName_, "") };
      inline Data& setPolarDBXDBInstanceName(string polarDBXDBInstanceName) { DARABONBA_PTR_SET_VALUE(polarDBXDBInstanceName_, polarDBXDBInstanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supabaseClassCode Field Functions 
      bool hasSupabaseClassCode() const { return this->supabaseClassCode_ != nullptr;};
      void deleteSupabaseClassCode() { this->supabaseClassCode_ = nullptr;};
      inline string getSupabaseClassCode() const { DARABONBA_PTR_GET_DEFAULT(supabaseClassCode_, "") };
      inline Data& setSupabaseClassCode(string supabaseClassCode) { DARABONBA_PTR_SET_VALUE(supabaseClassCode_, supabaseClassCode) };


      // tenantMode Field Functions 
      bool hasTenantMode() const { return this->tenantMode_ != nullptr;};
      void deleteTenantMode() { this->tenantMode_ = nullptr;};
      inline bool getTenantMode() const { DARABONBA_PTR_GET_DEFAULT(tenantMode_, false) };
      inline Data& setTenantMode(bool tenantMode) { DARABONBA_PTR_SET_VALUE(tenantMode_, tenantMode) };


      // topologyType Field Functions 
      bool hasTopologyType() const { return this->topologyType_ != nullptr;};
      void deleteTopologyType() { this->topologyType_ = nullptr;};
      inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
      inline Data& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The list of endpoints.
      shared_ptr<vector<Data::ConnAddrs>> connAddrs_ {};
      // The time when the instance was created.
      shared_ptr<string> createTime_ {};
      // The instance name.
      shared_ptr<string> DBInstanceName_ {};
      // The database engine version.
      shared_ptr<string> engineVersion_ {};
      // Indicates whether the instance has expired.
      shared_ptr<bool> expired_ {};
      // The lock mode.
      shared_ptr<string> lockMode_ {};
      // The minor engine version.
      shared_ptr<string> minorVersion_ {};
      // The node specifications.
      shared_ptr<string> nodeClass_ {};
      // The number of nodes.
      shared_ptr<int32_t> nodeCount_ {};
      // The list of nodes.
      shared_ptr<vector<Data::Nodes>> nodes_ {};
      // The name of the associated PolarDB-X instance.
      shared_ptr<string> polarDBXDBInstanceName_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The instance status.
      shared_ptr<string> status_ {};
      // The Supabase class code.
      shared_ptr<string> supabaseClassCode_ {};
      // The multi-tenant mode.
      shared_ptr<bool> tenantMode_ {};
      // The topology type.
      shared_ptr<string> topologyType_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
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
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The display name of the authentication principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The type of the authentication principal.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The type of the permission denial.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeSupabaseInstanceAttributeResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeSupabaseInstanceAttributeResponseBody::AccessDeniedDetail) };
    inline DescribeSupabaseInstanceAttributeResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeSupabaseInstanceAttributeResponseBody::AccessDeniedDetail) };
    inline DescribeSupabaseInstanceAttributeResponseBody& setAccessDeniedDetail(const DescribeSupabaseInstanceAttributeResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeSupabaseInstanceAttributeResponseBody& setAccessDeniedDetail(DescribeSupabaseInstanceAttributeResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSupabaseInstanceAttributeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSupabaseInstanceAttributeResponseBody::Data) };
    inline DescribeSupabaseInstanceAttributeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSupabaseInstanceAttributeResponseBody::Data) };
    inline DescribeSupabaseInstanceAttributeResponseBody& setData(const DescribeSupabaseInstanceAttributeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSupabaseInstanceAttributeResponseBody& setData(DescribeSupabaseInstanceAttributeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupabaseInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<DescribeSupabaseInstanceAttributeResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The instance details.
    shared_ptr<DescribeSupabaseInstanceAttributeResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
