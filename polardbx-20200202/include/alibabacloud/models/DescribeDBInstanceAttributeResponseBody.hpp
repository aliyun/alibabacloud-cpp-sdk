// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody(DescribeDBInstanceAttributeResponseBody &&) = default ;
    DescribeDBInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(DescribeDBInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstance& obj) { 
        DARABONBA_PTR_TO_JSON(CanNotCreateColumnar, canNotCreateColumnar_);
        DARABONBA_PTR_TO_JSON(CnNodeClassCode, cnNodeClassCode_);
        DARABONBA_PTR_TO_JSON(CnNodeCount, cnNodeCount_);
        DARABONBA_PTR_TO_JSON(ColumnarInstanceName, columnarInstanceName_);
        DARABONBA_PTR_TO_JSON(ColumnarReadDBInstances, columnarReadDBInstances_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ConnAddrs, connAddrs_);
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(CpuType, cpuType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
        DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DifferentDNSpec, differentDNSpec_);
        DARABONBA_PTR_TO_JSON(DnNodeClassCode, dnNodeClassCode_);
        DARABONBA_PTR_TO_JSON(DnNodeCount, dnNodeCount_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(GdnInstanceName, gdnInstanceName_);
        DARABONBA_PTR_TO_JSON(GdnMemberList, gdnMemberList_);
        DARABONBA_PTR_TO_JSON(GdnRole, gdnRole_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(KindCode, kindCode_);
        DARABONBA_PTR_TO_JSON(LTSVersions, LTSVersions_);
        DARABONBA_PTR_TO_JSON(LatestMinorVersion, latestMinorVersion_);
        DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
        DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
        DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PrimaryInstanceId, primaryInstanceId_);
        DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
        DARABONBA_PTR_TO_JSON(ReadDBInstances, readDBInstances_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RightsSeparationEnabled, rightsSeparationEnabled_);
        DARABONBA_PTR_TO_JSON(RightsSeparationStatus, rightsSeparationStatus_);
        DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
        DARABONBA_PTR_TO_JSON(Series, series_);
        DARABONBA_PTR_TO_JSON(SpecCategory, specCategory_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
        DARABONBA_PTR_TO_JSON(TagSet, tagSet_);
        DARABONBA_PTR_TO_JSON(TertiaryZone, tertiaryZone_);
        DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(CanNotCreateColumnar, canNotCreateColumnar_);
        DARABONBA_PTR_FROM_JSON(CnNodeClassCode, cnNodeClassCode_);
        DARABONBA_PTR_FROM_JSON(CnNodeCount, cnNodeCount_);
        DARABONBA_PTR_FROM_JSON(ColumnarInstanceName, columnarInstanceName_);
        DARABONBA_PTR_FROM_JSON(ColumnarReadDBInstances, columnarReadDBInstances_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ConnAddrs, connAddrs_);
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(CpuType, cpuType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
        DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DifferentDNSpec, differentDNSpec_);
        DARABONBA_PTR_FROM_JSON(DnNodeClassCode, dnNodeClassCode_);
        DARABONBA_PTR_FROM_JSON(DnNodeCount, dnNodeCount_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(GdnInstanceName, gdnInstanceName_);
        DARABONBA_PTR_FROM_JSON(GdnMemberList, gdnMemberList_);
        DARABONBA_PTR_FROM_JSON(GdnRole, gdnRole_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(KindCode, kindCode_);
        DARABONBA_PTR_FROM_JSON(LTSVersions, LTSVersions_);
        DARABONBA_PTR_FROM_JSON(LatestMinorVersion, latestMinorVersion_);
        DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
        DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
        DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PrimaryInstanceId, primaryInstanceId_);
        DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
        DARABONBA_PTR_FROM_JSON(ReadDBInstances, readDBInstances_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RightsSeparationEnabled, rightsSeparationEnabled_);
        DARABONBA_PTR_FROM_JSON(RightsSeparationStatus, rightsSeparationStatus_);
        DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
        DARABONBA_PTR_FROM_JSON(SpecCategory, specCategory_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
        DARABONBA_PTR_FROM_JSON(TagSet, tagSet_);
        DARABONBA_PTR_FROM_JSON(TertiaryZone, tertiaryZone_);
        DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DBInstance() = default ;
      DBInstance(const DBInstance &) = default ;
      DBInstance(DBInstance &&) = default ;
      DBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstance() = default ;
      DBInstance& operator=(const DBInstance &) = default ;
      DBInstance& operator=(DBInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagSet& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TagSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        TagSet() = default ;
        TagSet(const TagSet &) = default ;
        TagSet(TagSet &&) = default ;
        TagSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagSet() = default ;
        TagSet& operator=(const TagSet &) = default ;
        TagSet& operator=(TagSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline TagSet& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TagSet& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class GdnMemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GdnMemberList& obj) { 
          DARABONBA_PTR_TO_JSON(MemberName, memberName_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, GdnMemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        GdnMemberList() = default ;
        GdnMemberList(const GdnMemberList &) = default ;
        GdnMemberList(GdnMemberList &&) = default ;
        GdnMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GdnMemberList() = default ;
        GdnMemberList& operator=(const GdnMemberList &) = default ;
        GdnMemberList& operator=(GdnMemberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memberName_ == nullptr
        && this->role_ == nullptr && this->status_ == nullptr; };
        // memberName Field Functions 
        bool hasMemberName() const { return this->memberName_ != nullptr;};
        void deleteMemberName() { this->memberName_ = nullptr;};
        inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
        inline GdnMemberList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline GdnMemberList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline GdnMemberList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> memberName_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> status_ {};
      };

      class DBNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBNodes& obj) { 
          DARABONBA_PTR_TO_JSON(ComputeNodeId, computeNodeId_);
          DARABONBA_PTR_TO_JSON(DataNodeId, dataNodeId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(ComputeNodeId, computeNodeId_);
          DARABONBA_PTR_FROM_JSON(DataNodeId, dataNodeId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBNodes() = default ;
        DBNodes(const DBNodes &) = default ;
        DBNodes(DBNodes &&) = default ;
        DBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBNodes() = default ;
        DBNodes& operator=(const DBNodes &) = default ;
        DBNodes& operator=(DBNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->computeNodeId_ == nullptr
        && this->dataNodeId_ == nullptr && this->id_ == nullptr && this->nodeClass_ == nullptr && this->regionId_ == nullptr && this->zoneId_ == nullptr; };
        // computeNodeId Field Functions 
        bool hasComputeNodeId() const { return this->computeNodeId_ != nullptr;};
        void deleteComputeNodeId() { this->computeNodeId_ = nullptr;};
        inline string getComputeNodeId() const { DARABONBA_PTR_GET_DEFAULT(computeNodeId_, "") };
        inline DBNodes& setComputeNodeId(string computeNodeId) { DARABONBA_PTR_SET_VALUE(computeNodeId_, computeNodeId) };


        // dataNodeId Field Functions 
        bool hasDataNodeId() const { return this->dataNodeId_ != nullptr;};
        void deleteDataNodeId() { this->dataNodeId_ = nullptr;};
        inline string getDataNodeId() const { DARABONBA_PTR_GET_DEFAULT(dataNodeId_, "") };
        inline DBNodes& setDataNodeId(string dataNodeId) { DARABONBA_PTR_SET_VALUE(dataNodeId_, dataNodeId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DBNodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // nodeClass Field Functions 
        bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
        void deleteNodeClass() { this->nodeClass_ = nullptr;};
        inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
        inline DBNodes& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBNodes& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> computeNodeId_ {};
        shared_ptr<string> dataNodeId_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> nodeClass_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> zoneId_ {};
      };

      class ConnAddrs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnAddrs& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, ConnAddrs& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
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
        && this->port_ == nullptr && this->type_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcInstanceId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline ConnAddrs& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline ConnAddrs& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


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


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline ConnAddrs& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        shared_ptr<string> connectionString_ {};
        shared_ptr<int64_t> port_ {};
        shared_ptr<string> type_ {};
        // VPC ID。
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcInstanceId_ {};
      };

      virtual bool empty() const override { return this->canNotCreateColumnar_ == nullptr
        && this->cnNodeClassCode_ == nullptr && this->cnNodeCount_ == nullptr && this->columnarInstanceName_ == nullptr && this->columnarReadDBInstances_ == nullptr && this->commodityCode_ == nullptr
        && this->connAddrs_ == nullptr && this->connectionString_ == nullptr && this->cpuType_ == nullptr && this->createTime_ == nullptr && this->DBInstanceType_ == nullptr
        && this->DBNodeClass_ == nullptr && this->DBNodeCount_ == nullptr && this->DBNodes_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr
        && this->description_ == nullptr && this->differentDNSpec_ == nullptr && this->dnNodeClassCode_ == nullptr && this->dnNodeCount_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->expireDate_ == nullptr && this->expired_ == nullptr && this->gdnInstanceName_ == nullptr && this->gdnMemberList_ == nullptr
        && this->gdnRole_ == nullptr && this->id_ == nullptr && this->kindCode_ == nullptr && this->LTSVersions_ == nullptr && this->latestMinorVersion_ == nullptr
        && this->lockMode_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->minorVersion_ == nullptr && this->network_ == nullptr
        && this->payType_ == nullptr && this->port_ == nullptr && this->primaryInstanceId_ == nullptr && this->primaryZone_ == nullptr && this->readDBInstances_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->rightsSeparationEnabled_ == nullptr && this->rightsSeparationStatus_ == nullptr && this->secondaryZone_ == nullptr
        && this->series_ == nullptr && this->specCategory_ == nullptr && this->status_ == nullptr && this->storageType_ == nullptr && this->storageUsed_ == nullptr
        && this->tagSet_ == nullptr && this->tertiaryZone_ == nullptr && this->topologyType_ == nullptr && this->type_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // canNotCreateColumnar Field Functions 
      bool hasCanNotCreateColumnar() const { return this->canNotCreateColumnar_ != nullptr;};
      void deleteCanNotCreateColumnar() { this->canNotCreateColumnar_ = nullptr;};
      inline bool getCanNotCreateColumnar() const { DARABONBA_PTR_GET_DEFAULT(canNotCreateColumnar_, false) };
      inline DBInstance& setCanNotCreateColumnar(bool canNotCreateColumnar) { DARABONBA_PTR_SET_VALUE(canNotCreateColumnar_, canNotCreateColumnar) };


      // cnNodeClassCode Field Functions 
      bool hasCnNodeClassCode() const { return this->cnNodeClassCode_ != nullptr;};
      void deleteCnNodeClassCode() { this->cnNodeClassCode_ = nullptr;};
      inline string getCnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(cnNodeClassCode_, "") };
      inline DBInstance& setCnNodeClassCode(string cnNodeClassCode) { DARABONBA_PTR_SET_VALUE(cnNodeClassCode_, cnNodeClassCode) };


      // cnNodeCount Field Functions 
      bool hasCnNodeCount() const { return this->cnNodeCount_ != nullptr;};
      void deleteCnNodeCount() { this->cnNodeCount_ = nullptr;};
      inline int32_t getCnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(cnNodeCount_, 0) };
      inline DBInstance& setCnNodeCount(int32_t cnNodeCount) { DARABONBA_PTR_SET_VALUE(cnNodeCount_, cnNodeCount) };


      // columnarInstanceName Field Functions 
      bool hasColumnarInstanceName() const { return this->columnarInstanceName_ != nullptr;};
      void deleteColumnarInstanceName() { this->columnarInstanceName_ = nullptr;};
      inline string getColumnarInstanceName() const { DARABONBA_PTR_GET_DEFAULT(columnarInstanceName_, "") };
      inline DBInstance& setColumnarInstanceName(string columnarInstanceName) { DARABONBA_PTR_SET_VALUE(columnarInstanceName_, columnarInstanceName) };


      // columnarReadDBInstances Field Functions 
      bool hasColumnarReadDBInstances() const { return this->columnarReadDBInstances_ != nullptr;};
      void deleteColumnarReadDBInstances() { this->columnarReadDBInstances_ = nullptr;};
      inline const vector<string> & getColumnarReadDBInstances() const { DARABONBA_PTR_GET_CONST(columnarReadDBInstances_, vector<string>) };
      inline vector<string> getColumnarReadDBInstances() { DARABONBA_PTR_GET(columnarReadDBInstances_, vector<string>) };
      inline DBInstance& setColumnarReadDBInstances(const vector<string> & columnarReadDBInstances) { DARABONBA_PTR_SET_VALUE(columnarReadDBInstances_, columnarReadDBInstances) };
      inline DBInstance& setColumnarReadDBInstances(vector<string> && columnarReadDBInstances) { DARABONBA_PTR_SET_RVALUE(columnarReadDBInstances_, columnarReadDBInstances) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline DBInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // connAddrs Field Functions 
      bool hasConnAddrs() const { return this->connAddrs_ != nullptr;};
      void deleteConnAddrs() { this->connAddrs_ = nullptr;};
      inline const vector<DBInstance::ConnAddrs> & getConnAddrs() const { DARABONBA_PTR_GET_CONST(connAddrs_, vector<DBInstance::ConnAddrs>) };
      inline vector<DBInstance::ConnAddrs> getConnAddrs() { DARABONBA_PTR_GET(connAddrs_, vector<DBInstance::ConnAddrs>) };
      inline DBInstance& setConnAddrs(const vector<DBInstance::ConnAddrs> & connAddrs) { DARABONBA_PTR_SET_VALUE(connAddrs_, connAddrs) };
      inline DBInstance& setConnAddrs(vector<DBInstance::ConnAddrs> && connAddrs) { DARABONBA_PTR_SET_RVALUE(connAddrs_, connAddrs) };


      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline DBInstance& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // cpuType Field Functions 
      bool hasCpuType() const { return this->cpuType_ != nullptr;};
      void deleteCpuType() { this->cpuType_ = nullptr;};
      inline string getCpuType() const { DARABONBA_PTR_GET_DEFAULT(cpuType_, "") };
      inline DBInstance& setCpuType(string cpuType) { DARABONBA_PTR_SET_VALUE(cpuType_, cpuType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBInstanceType Field Functions 
      bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
      void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
      inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
      inline DBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
      inline DBInstance& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


      // DBNodeCount Field Functions 
      bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
      void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
      inline int32_t getDBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0) };
      inline DBInstance& setDBNodeCount(int32_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


      // DBNodes Field Functions 
      bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
      void deleteDBNodes() { this->DBNodes_ = nullptr;};
      inline const vector<DBInstance::DBNodes> & getDBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<DBInstance::DBNodes>) };
      inline vector<DBInstance::DBNodes> getDBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<DBInstance::DBNodes>) };
      inline DBInstance& setDBNodes(const vector<DBInstance::DBNodes> & dBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, dBNodes) };
      inline DBInstance& setDBNodes(vector<DBInstance::DBNodes> && dBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, dBNodes) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline DBInstance& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline DBInstance& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DBInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // differentDNSpec Field Functions 
      bool hasDifferentDNSpec() const { return this->differentDNSpec_ != nullptr;};
      void deleteDifferentDNSpec() { this->differentDNSpec_ = nullptr;};
      inline bool getDifferentDNSpec() const { DARABONBA_PTR_GET_DEFAULT(differentDNSpec_, false) };
      inline DBInstance& setDifferentDNSpec(bool differentDNSpec) { DARABONBA_PTR_SET_VALUE(differentDNSpec_, differentDNSpec) };


      // dnNodeClassCode Field Functions 
      bool hasDnNodeClassCode() const { return this->dnNodeClassCode_ != nullptr;};
      void deleteDnNodeClassCode() { this->dnNodeClassCode_ = nullptr;};
      inline string getDnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(dnNodeClassCode_, "") };
      inline DBInstance& setDnNodeClassCode(string dnNodeClassCode) { DARABONBA_PTR_SET_VALUE(dnNodeClassCode_, dnNodeClassCode) };


      // dnNodeCount Field Functions 
      bool hasDnNodeCount() const { return this->dnNodeCount_ != nullptr;};
      void deleteDnNodeCount() { this->dnNodeCount_ = nullptr;};
      inline int32_t getDnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dnNodeCount_, 0) };
      inline DBInstance& setDnNodeCount(int32_t dnNodeCount) { DARABONBA_PTR_SET_VALUE(dnNodeCount_, dnNodeCount) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline DBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline DBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline DBInstance& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
      inline DBInstance& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // gdnInstanceName Field Functions 
      bool hasGdnInstanceName() const { return this->gdnInstanceName_ != nullptr;};
      void deleteGdnInstanceName() { this->gdnInstanceName_ = nullptr;};
      inline string getGdnInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gdnInstanceName_, "") };
      inline DBInstance& setGdnInstanceName(string gdnInstanceName) { DARABONBA_PTR_SET_VALUE(gdnInstanceName_, gdnInstanceName) };


      // gdnMemberList Field Functions 
      bool hasGdnMemberList() const { return this->gdnMemberList_ != nullptr;};
      void deleteGdnMemberList() { this->gdnMemberList_ = nullptr;};
      inline const vector<DBInstance::GdnMemberList> & getGdnMemberList() const { DARABONBA_PTR_GET_CONST(gdnMemberList_, vector<DBInstance::GdnMemberList>) };
      inline vector<DBInstance::GdnMemberList> getGdnMemberList() { DARABONBA_PTR_GET(gdnMemberList_, vector<DBInstance::GdnMemberList>) };
      inline DBInstance& setGdnMemberList(const vector<DBInstance::GdnMemberList> & gdnMemberList) { DARABONBA_PTR_SET_VALUE(gdnMemberList_, gdnMemberList) };
      inline DBInstance& setGdnMemberList(vector<DBInstance::GdnMemberList> && gdnMemberList) { DARABONBA_PTR_SET_RVALUE(gdnMemberList_, gdnMemberList) };


      // gdnRole Field Functions 
      bool hasGdnRole() const { return this->gdnRole_ != nullptr;};
      void deleteGdnRole() { this->gdnRole_ = nullptr;};
      inline string getGdnRole() const { DARABONBA_PTR_GET_DEFAULT(gdnRole_, "") };
      inline DBInstance& setGdnRole(string gdnRole) { DARABONBA_PTR_SET_VALUE(gdnRole_, gdnRole) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DBInstance& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // kindCode Field Functions 
      bool hasKindCode() const { return this->kindCode_ != nullptr;};
      void deleteKindCode() { this->kindCode_ = nullptr;};
      inline int32_t getKindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, 0) };
      inline DBInstance& setKindCode(int32_t kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


      // LTSVersions Field Functions 
      bool hasLTSVersions() const { return this->LTSVersions_ != nullptr;};
      void deleteLTSVersions() { this->LTSVersions_ = nullptr;};
      inline const vector<string> & getLTSVersions() const { DARABONBA_PTR_GET_CONST(LTSVersions_, vector<string>) };
      inline vector<string> getLTSVersions() { DARABONBA_PTR_GET(LTSVersions_, vector<string>) };
      inline DBInstance& setLTSVersions(const vector<string> & LTSVersions) { DARABONBA_PTR_SET_VALUE(LTSVersions_, LTSVersions) };
      inline DBInstance& setLTSVersions(vector<string> && LTSVersions) { DARABONBA_PTR_SET_RVALUE(LTSVersions_, LTSVersions) };


      // latestMinorVersion Field Functions 
      bool hasLatestMinorVersion() const { return this->latestMinorVersion_ != nullptr;};
      void deleteLatestMinorVersion() { this->latestMinorVersion_ = nullptr;};
      inline string getLatestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(latestMinorVersion_, "") };
      inline DBInstance& setLatestMinorVersion(string latestMinorVersion) { DARABONBA_PTR_SET_VALUE(latestMinorVersion_, latestMinorVersion) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline DBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // maintainEndTime Field Functions 
      bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
      void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
      inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
      inline DBInstance& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


      // maintainStartTime Field Functions 
      bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
      void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
      inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
      inline DBInstance& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline DBInstance& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
      inline DBInstance& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline DBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline DBInstance& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // primaryInstanceId Field Functions 
      bool hasPrimaryInstanceId() const { return this->primaryInstanceId_ != nullptr;};
      void deletePrimaryInstanceId() { this->primaryInstanceId_ = nullptr;};
      inline string getPrimaryInstanceId() const { DARABONBA_PTR_GET_DEFAULT(primaryInstanceId_, "") };
      inline DBInstance& setPrimaryInstanceId(string primaryInstanceId) { DARABONBA_PTR_SET_VALUE(primaryInstanceId_, primaryInstanceId) };


      // primaryZone Field Functions 
      bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
      void deletePrimaryZone() { this->primaryZone_ = nullptr;};
      inline string getPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
      inline DBInstance& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


      // readDBInstances Field Functions 
      bool hasReadDBInstances() const { return this->readDBInstances_ != nullptr;};
      void deleteReadDBInstances() { this->readDBInstances_ = nullptr;};
      inline const vector<string> & getReadDBInstances() const { DARABONBA_PTR_GET_CONST(readDBInstances_, vector<string>) };
      inline vector<string> getReadDBInstances() { DARABONBA_PTR_GET(readDBInstances_, vector<string>) };
      inline DBInstance& setReadDBInstances(const vector<string> & readDBInstances) { DARABONBA_PTR_SET_VALUE(readDBInstances_, readDBInstances) };
      inline DBInstance& setReadDBInstances(vector<string> && readDBInstances) { DARABONBA_PTR_SET_RVALUE(readDBInstances_, readDBInstances) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // rightsSeparationEnabled Field Functions 
      bool hasRightsSeparationEnabled() const { return this->rightsSeparationEnabled_ != nullptr;};
      void deleteRightsSeparationEnabled() { this->rightsSeparationEnabled_ = nullptr;};
      inline bool getRightsSeparationEnabled() const { DARABONBA_PTR_GET_DEFAULT(rightsSeparationEnabled_, false) };
      inline DBInstance& setRightsSeparationEnabled(bool rightsSeparationEnabled) { DARABONBA_PTR_SET_VALUE(rightsSeparationEnabled_, rightsSeparationEnabled) };


      // rightsSeparationStatus Field Functions 
      bool hasRightsSeparationStatus() const { return this->rightsSeparationStatus_ != nullptr;};
      void deleteRightsSeparationStatus() { this->rightsSeparationStatus_ = nullptr;};
      inline string getRightsSeparationStatus() const { DARABONBA_PTR_GET_DEFAULT(rightsSeparationStatus_, "") };
      inline DBInstance& setRightsSeparationStatus(string rightsSeparationStatus) { DARABONBA_PTR_SET_VALUE(rightsSeparationStatus_, rightsSeparationStatus) };


      // secondaryZone Field Functions 
      bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
      void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
      inline string getSecondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
      inline DBInstance& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
      inline DBInstance& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


      // specCategory Field Functions 
      bool hasSpecCategory() const { return this->specCategory_ != nullptr;};
      void deleteSpecCategory() { this->specCategory_ = nullptr;};
      inline string getSpecCategory() const { DARABONBA_PTR_GET_DEFAULT(specCategory_, "") };
      inline DBInstance& setSpecCategory(string specCategory) { DARABONBA_PTR_SET_VALUE(specCategory_, specCategory) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DBInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline DBInstance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // storageUsed Field Functions 
      bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
      void deleteStorageUsed() { this->storageUsed_ = nullptr;};
      inline int64_t getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
      inline DBInstance& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


      // tagSet Field Functions 
      bool hasTagSet() const { return this->tagSet_ != nullptr;};
      void deleteTagSet() { this->tagSet_ = nullptr;};
      inline const vector<DBInstance::TagSet> & getTagSet() const { DARABONBA_PTR_GET_CONST(tagSet_, vector<DBInstance::TagSet>) };
      inline vector<DBInstance::TagSet> getTagSet() { DARABONBA_PTR_GET(tagSet_, vector<DBInstance::TagSet>) };
      inline DBInstance& setTagSet(const vector<DBInstance::TagSet> & tagSet) { DARABONBA_PTR_SET_VALUE(tagSet_, tagSet) };
      inline DBInstance& setTagSet(vector<DBInstance::TagSet> && tagSet) { DARABONBA_PTR_SET_RVALUE(tagSet_, tagSet) };


      // tertiaryZone Field Functions 
      bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
      void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
      inline string getTertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
      inline DBInstance& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


      // topologyType Field Functions 
      bool hasTopologyType() const { return this->topologyType_ != nullptr;};
      void deleteTopologyType() { this->topologyType_ = nullptr;};
      inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
      inline DBInstance& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DBInstance& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // VPCId Field Functions 
      bool hasVPCId() const { return this->VPCId_ != nullptr;};
      void deleteVPCId() { this->VPCId_ = nullptr;};
      inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
      inline DBInstance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline DBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<bool> canNotCreateColumnar_ {};
      shared_ptr<string> cnNodeClassCode_ {};
      shared_ptr<int32_t> cnNodeCount_ {};
      shared_ptr<string> columnarInstanceName_ {};
      shared_ptr<vector<string>> columnarReadDBInstances_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<vector<DBInstance::ConnAddrs>> connAddrs_ {};
      shared_ptr<string> connectionString_ {};
      shared_ptr<string> cpuType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> DBInstanceType_ {};
      shared_ptr<string> DBNodeClass_ {};
      shared_ptr<int32_t> DBNodeCount_ {};
      shared_ptr<vector<DBInstance::DBNodes>> DBNodes_ {};
      shared_ptr<string> DBType_ {};
      shared_ptr<string> DBVersion_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> differentDNSpec_ {};
      shared_ptr<string> dnNodeClassCode_ {};
      shared_ptr<int32_t> dnNodeCount_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<string> engineVersion_ {};
      shared_ptr<string> expireDate_ {};
      shared_ptr<string> expired_ {};
      shared_ptr<string> gdnInstanceName_ {};
      shared_ptr<vector<DBInstance::GdnMemberList>> gdnMemberList_ {};
      shared_ptr<string> gdnRole_ {};
      shared_ptr<string> id_ {};
      shared_ptr<int32_t> kindCode_ {};
      // This parameter is required.
      shared_ptr<vector<string>> LTSVersions_ {};
      shared_ptr<string> latestMinorVersion_ {};
      shared_ptr<string> lockMode_ {};
      shared_ptr<string> maintainEndTime_ {};
      shared_ptr<string> maintainStartTime_ {};
      shared_ptr<string> minorVersion_ {};
      shared_ptr<string> network_ {};
      shared_ptr<string> payType_ {};
      shared_ptr<string> port_ {};
      shared_ptr<string> primaryInstanceId_ {};
      // 主可用区。
      // 
      // This parameter is required.
      shared_ptr<string> primaryZone_ {};
      shared_ptr<vector<string>> readDBInstances_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<bool> rightsSeparationEnabled_ {};
      shared_ptr<string> rightsSeparationStatus_ {};
      // 次可用区。
      shared_ptr<string> secondaryZone_ {};
      shared_ptr<string> series_ {};
      shared_ptr<string> specCategory_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<int64_t> storageUsed_ {};
      shared_ptr<vector<DBInstance::TagSet>> tagSet_ {};
      // 第三可用区。
      shared_ptr<string> tertiaryZone_ {};
      // 拓扑类型：
      // 
      // - **3azones**：三可用区；
      // - **1azone**：单可用区。
      // 
      // This parameter is required.
      shared_ptr<string> topologyType_ {};
      shared_ptr<string> type_ {};
      // VPC ID。
      shared_ptr<string> VPCId_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->DBInstance_ == nullptr
        && this->requestId_ == nullptr; };
    // DBInstance Field Functions 
    bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
    void deleteDBInstance() { this->DBInstance_ = nullptr;};
    inline const DescribeDBInstanceAttributeResponseBody::DBInstance & getDBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, DescribeDBInstanceAttributeResponseBody::DBInstance) };
    inline DescribeDBInstanceAttributeResponseBody::DBInstance getDBInstance() { DARABONBA_PTR_GET(DBInstance_, DescribeDBInstanceAttributeResponseBody::DBInstance) };
    inline DescribeDBInstanceAttributeResponseBody& setDBInstance(const DescribeDBInstanceAttributeResponseBody::DBInstance & dBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, dBInstance) };
    inline DescribeDBInstanceAttributeResponseBody& setDBInstance(DescribeDBInstanceAttributeResponseBody::DBInstance && dBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, dBInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBInstanceAttributeResponseBody::DBInstance> DBInstance_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
