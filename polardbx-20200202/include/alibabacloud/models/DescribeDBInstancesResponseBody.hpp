// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
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
  class DescribeDBInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody(DescribeDBInstancesResponseBody &&) = default ;
    DescribeDBInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody& operator=(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody& operator=(DescribeDBInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstances& obj) { 
        DARABONBA_PTR_TO_JSON(CdcInstanceName, cdcInstanceName_);
        DARABONBA_PTR_TO_JSON(CnNodeClassCode, cnNodeClassCode_);
        DARABONBA_PTR_TO_JSON(CnNodeCount, cnNodeCount_);
        DARABONBA_PTR_TO_JSON(ColumnarInstanceName, columnarInstanceName_);
        DARABONBA_PTR_TO_JSON(ColumnarReadDBInstances, columnarReadDBInstances_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ContainBinlogX, containBinlogX_);
        DARABONBA_PTR_TO_JSON(CpuType, cpuType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DnNodeClassCode, dnNodeClassCode_);
        DARABONBA_PTR_TO_JSON(DnNodeCount, dnNodeCount_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
        DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
        DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(PrimaryInstanceId, primaryInstanceId_);
        DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
        DARABONBA_PTR_TO_JSON(ReadDBInstances, readDBInstances_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
        DARABONBA_PTR_TO_JSON(Series, series_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
        DARABONBA_PTR_TO_JSON(SupportBinlogX, supportBinlogX_);
        DARABONBA_PTR_TO_JSON(TagSet, tagSet_);
        DARABONBA_PTR_TO_JSON(TertiaryZone, tertiaryZone_);
        DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_TO_JSON(gdnRole, gdnRole_);
        DARABONBA_PTR_TO_JSON(isInGdn, isInGdn_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(CdcInstanceName, cdcInstanceName_);
        DARABONBA_PTR_FROM_JSON(CnNodeClassCode, cnNodeClassCode_);
        DARABONBA_PTR_FROM_JSON(CnNodeCount, cnNodeCount_);
        DARABONBA_PTR_FROM_JSON(ColumnarInstanceName, columnarInstanceName_);
        DARABONBA_PTR_FROM_JSON(ColumnarReadDBInstances, columnarReadDBInstances_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ContainBinlogX, containBinlogX_);
        DARABONBA_PTR_FROM_JSON(CpuType, cpuType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DnNodeClassCode, dnNodeClassCode_);
        DARABONBA_PTR_FROM_JSON(DnNodeCount, dnNodeCount_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
        DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
        DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(PrimaryInstanceId, primaryInstanceId_);
        DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
        DARABONBA_PTR_FROM_JSON(ReadDBInstances, readDBInstances_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
        DARABONBA_PTR_FROM_JSON(SupportBinlogX, supportBinlogX_);
        DARABONBA_PTR_FROM_JSON(TagSet, tagSet_);
        DARABONBA_PTR_FROM_JSON(TertiaryZone, tertiaryZone_);
        DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_FROM_JSON(gdnRole, gdnRole_);
        DARABONBA_PTR_FROM_JSON(isInGdn, isInGdn_);
      };
      DBInstances() = default ;
      DBInstances(const DBInstances &) = default ;
      DBInstances(DBInstances &&) = default ;
      DBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstances() = default ;
      DBInstances& operator=(const DBInstances &) = default ;
      DBInstances& operator=(DBInstances &&) = default ;
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

      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
        && this->id_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->zoneId_ == nullptr; };
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


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Nodes& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Nodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> classCode_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->cdcInstanceName_ == nullptr
        && this->cnNodeClassCode_ == nullptr && this->cnNodeCount_ == nullptr && this->columnarInstanceName_ == nullptr && this->columnarReadDBInstances_ == nullptr && this->commodityCode_ == nullptr
        && this->containBinlogX_ == nullptr && this->cpuType_ == nullptr && this->createTime_ == nullptr && this->DBInstanceName_ == nullptr && this->DBType_ == nullptr
        && this->DBVersion_ == nullptr && this->description_ == nullptr && this->dnNodeClassCode_ == nullptr && this->dnNodeCount_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->id_ == nullptr && this->lockMode_ == nullptr
        && this->lockReason_ == nullptr && this->minorVersion_ == nullptr && this->network_ == nullptr && this->nodeClass_ == nullptr && this->nodeCount_ == nullptr
        && this->nodes_ == nullptr && this->payType_ == nullptr && this->primaryInstanceId_ == nullptr && this->primaryZone_ == nullptr && this->readDBInstances_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryZone_ == nullptr && this->series_ == nullptr && this->status_ == nullptr
        && this->storageType_ == nullptr && this->storageUsed_ == nullptr && this->supportBinlogX_ == nullptr && this->tagSet_ == nullptr && this->tertiaryZone_ == nullptr
        && this->topologyType_ == nullptr && this->type_ == nullptr && this->VPCId_ == nullptr && this->zoneId_ == nullptr && this->gdnRole_ == nullptr
        && this->isInGdn_ == nullptr; };
      // cdcInstanceName Field Functions 
      bool hasCdcInstanceName() const { return this->cdcInstanceName_ != nullptr;};
      void deleteCdcInstanceName() { this->cdcInstanceName_ = nullptr;};
      inline string getCdcInstanceName() const { DARABONBA_PTR_GET_DEFAULT(cdcInstanceName_, "") };
      inline DBInstances& setCdcInstanceName(string cdcInstanceName) { DARABONBA_PTR_SET_VALUE(cdcInstanceName_, cdcInstanceName) };


      // cnNodeClassCode Field Functions 
      bool hasCnNodeClassCode() const { return this->cnNodeClassCode_ != nullptr;};
      void deleteCnNodeClassCode() { this->cnNodeClassCode_ = nullptr;};
      inline string getCnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(cnNodeClassCode_, "") };
      inline DBInstances& setCnNodeClassCode(string cnNodeClassCode) { DARABONBA_PTR_SET_VALUE(cnNodeClassCode_, cnNodeClassCode) };


      // cnNodeCount Field Functions 
      bool hasCnNodeCount() const { return this->cnNodeCount_ != nullptr;};
      void deleteCnNodeCount() { this->cnNodeCount_ = nullptr;};
      inline int32_t getCnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(cnNodeCount_, 0) };
      inline DBInstances& setCnNodeCount(int32_t cnNodeCount) { DARABONBA_PTR_SET_VALUE(cnNodeCount_, cnNodeCount) };


      // columnarInstanceName Field Functions 
      bool hasColumnarInstanceName() const { return this->columnarInstanceName_ != nullptr;};
      void deleteColumnarInstanceName() { this->columnarInstanceName_ = nullptr;};
      inline string getColumnarInstanceName() const { DARABONBA_PTR_GET_DEFAULT(columnarInstanceName_, "") };
      inline DBInstances& setColumnarInstanceName(string columnarInstanceName) { DARABONBA_PTR_SET_VALUE(columnarInstanceName_, columnarInstanceName) };


      // columnarReadDBInstances Field Functions 
      bool hasColumnarReadDBInstances() const { return this->columnarReadDBInstances_ != nullptr;};
      void deleteColumnarReadDBInstances() { this->columnarReadDBInstances_ = nullptr;};
      inline const vector<string> & getColumnarReadDBInstances() const { DARABONBA_PTR_GET_CONST(columnarReadDBInstances_, vector<string>) };
      inline vector<string> getColumnarReadDBInstances() { DARABONBA_PTR_GET(columnarReadDBInstances_, vector<string>) };
      inline DBInstances& setColumnarReadDBInstances(const vector<string> & columnarReadDBInstances) { DARABONBA_PTR_SET_VALUE(columnarReadDBInstances_, columnarReadDBInstances) };
      inline DBInstances& setColumnarReadDBInstances(vector<string> && columnarReadDBInstances) { DARABONBA_PTR_SET_RVALUE(columnarReadDBInstances_, columnarReadDBInstances) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline DBInstances& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // containBinlogX Field Functions 
      bool hasContainBinlogX() const { return this->containBinlogX_ != nullptr;};
      void deleteContainBinlogX() { this->containBinlogX_ = nullptr;};
      inline bool getContainBinlogX() const { DARABONBA_PTR_GET_DEFAULT(containBinlogX_, false) };
      inline DBInstances& setContainBinlogX(bool containBinlogX) { DARABONBA_PTR_SET_VALUE(containBinlogX_, containBinlogX) };


      // cpuType Field Functions 
      bool hasCpuType() const { return this->cpuType_ != nullptr;};
      void deleteCpuType() { this->cpuType_ = nullptr;};
      inline string getCpuType() const { DARABONBA_PTR_GET_DEFAULT(cpuType_, "") };
      inline DBInstances& setCpuType(string cpuType) { DARABONBA_PTR_SET_VALUE(cpuType_, cpuType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DBInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline DBInstances& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline DBInstances& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline DBInstances& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DBInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dnNodeClassCode Field Functions 
      bool hasDnNodeClassCode() const { return this->dnNodeClassCode_ != nullptr;};
      void deleteDnNodeClassCode() { this->dnNodeClassCode_ = nullptr;};
      inline string getDnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(dnNodeClassCode_, "") };
      inline DBInstances& setDnNodeClassCode(string dnNodeClassCode) { DARABONBA_PTR_SET_VALUE(dnNodeClassCode_, dnNodeClassCode) };


      // dnNodeCount Field Functions 
      bool hasDnNodeCount() const { return this->dnNodeCount_ != nullptr;};
      void deleteDnNodeCount() { this->dnNodeCount_ = nullptr;};
      inline int32_t getDnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dnNodeCount_, 0) };
      inline DBInstances& setDnNodeCount(int32_t dnNodeCount) { DARABONBA_PTR_SET_VALUE(dnNodeCount_, dnNodeCount) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline DBInstances& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline DBInstances& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline DBInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
      inline DBInstances& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DBInstances& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline DBInstances& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline DBInstances& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline DBInstances& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
      inline DBInstances& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // nodeClass Field Functions 
      bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
      void deleteNodeClass() { this->nodeClass_ = nullptr;};
      inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
      inline DBInstances& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
      inline DBInstances& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<DBInstances::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DBInstances::Nodes>) };
      inline vector<DBInstances::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<DBInstances::Nodes>) };
      inline DBInstances& setNodes(const vector<DBInstances::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline DBInstances& setNodes(vector<DBInstances::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline DBInstances& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // primaryInstanceId Field Functions 
      bool hasPrimaryInstanceId() const { return this->primaryInstanceId_ != nullptr;};
      void deletePrimaryInstanceId() { this->primaryInstanceId_ = nullptr;};
      inline string getPrimaryInstanceId() const { DARABONBA_PTR_GET_DEFAULT(primaryInstanceId_, "") };
      inline DBInstances& setPrimaryInstanceId(string primaryInstanceId) { DARABONBA_PTR_SET_VALUE(primaryInstanceId_, primaryInstanceId) };


      // primaryZone Field Functions 
      bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
      void deletePrimaryZone() { this->primaryZone_ = nullptr;};
      inline string getPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
      inline DBInstances& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


      // readDBInstances Field Functions 
      bool hasReadDBInstances() const { return this->readDBInstances_ != nullptr;};
      void deleteReadDBInstances() { this->readDBInstances_ = nullptr;};
      inline const vector<string> & getReadDBInstances() const { DARABONBA_PTR_GET_CONST(readDBInstances_, vector<string>) };
      inline vector<string> getReadDBInstances() { DARABONBA_PTR_GET(readDBInstances_, vector<string>) };
      inline DBInstances& setReadDBInstances(const vector<string> & readDBInstances) { DARABONBA_PTR_SET_VALUE(readDBInstances_, readDBInstances) };
      inline DBInstances& setReadDBInstances(vector<string> && readDBInstances) { DARABONBA_PTR_SET_RVALUE(readDBInstances_, readDBInstances) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DBInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DBInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // secondaryZone Field Functions 
      bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
      void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
      inline string getSecondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
      inline DBInstances& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
      inline DBInstances& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DBInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline DBInstances& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // storageUsed Field Functions 
      bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
      void deleteStorageUsed() { this->storageUsed_ = nullptr;};
      inline int64_t getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
      inline DBInstances& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


      // supportBinlogX Field Functions 
      bool hasSupportBinlogX() const { return this->supportBinlogX_ != nullptr;};
      void deleteSupportBinlogX() { this->supportBinlogX_ = nullptr;};
      inline bool getSupportBinlogX() const { DARABONBA_PTR_GET_DEFAULT(supportBinlogX_, false) };
      inline DBInstances& setSupportBinlogX(bool supportBinlogX) { DARABONBA_PTR_SET_VALUE(supportBinlogX_, supportBinlogX) };


      // tagSet Field Functions 
      bool hasTagSet() const { return this->tagSet_ != nullptr;};
      void deleteTagSet() { this->tagSet_ = nullptr;};
      inline const vector<DBInstances::TagSet> & getTagSet() const { DARABONBA_PTR_GET_CONST(tagSet_, vector<DBInstances::TagSet>) };
      inline vector<DBInstances::TagSet> getTagSet() { DARABONBA_PTR_GET(tagSet_, vector<DBInstances::TagSet>) };
      inline DBInstances& setTagSet(const vector<DBInstances::TagSet> & tagSet) { DARABONBA_PTR_SET_VALUE(tagSet_, tagSet) };
      inline DBInstances& setTagSet(vector<DBInstances::TagSet> && tagSet) { DARABONBA_PTR_SET_RVALUE(tagSet_, tagSet) };


      // tertiaryZone Field Functions 
      bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
      void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
      inline string getTertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
      inline DBInstances& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


      // topologyType Field Functions 
      bool hasTopologyType() const { return this->topologyType_ != nullptr;};
      void deleteTopologyType() { this->topologyType_ = nullptr;};
      inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
      inline DBInstances& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DBInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // VPCId Field Functions 
      bool hasVPCId() const { return this->VPCId_ != nullptr;};
      void deleteVPCId() { this->VPCId_ = nullptr;};
      inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
      inline DBInstances& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // gdnRole Field Functions 
      bool hasGdnRole() const { return this->gdnRole_ != nullptr;};
      void deleteGdnRole() { this->gdnRole_ = nullptr;};
      inline string getGdnRole() const { DARABONBA_PTR_GET_DEFAULT(gdnRole_, "") };
      inline DBInstances& setGdnRole(string gdnRole) { DARABONBA_PTR_SET_VALUE(gdnRole_, gdnRole) };


      // isInGdn Field Functions 
      bool hasIsInGdn() const { return this->isInGdn_ != nullptr;};
      void deleteIsInGdn() { this->isInGdn_ = nullptr;};
      inline bool getIsInGdn() const { DARABONBA_PTR_GET_DEFAULT(isInGdn_, false) };
      inline DBInstances& setIsInGdn(bool isInGdn) { DARABONBA_PTR_SET_VALUE(isInGdn_, isInGdn) };


    protected:
      shared_ptr<string> cdcInstanceName_ {};
      shared_ptr<string> cnNodeClassCode_ {};
      shared_ptr<int32_t> cnNodeCount_ {};
      shared_ptr<string> columnarInstanceName_ {};
      shared_ptr<vector<string>> columnarReadDBInstances_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<bool> containBinlogX_ {};
      shared_ptr<string> cpuType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<string> DBType_ {};
      shared_ptr<string> DBVersion_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> dnNodeClassCode_ {};
      shared_ptr<int32_t> dnNodeCount_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<string> engineVersion_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<bool> expired_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> lockMode_ {};
      shared_ptr<string> lockReason_ {};
      shared_ptr<string> minorVersion_ {};
      shared_ptr<string> network_ {};
      shared_ptr<string> nodeClass_ {};
      shared_ptr<int32_t> nodeCount_ {};
      shared_ptr<vector<DBInstances::Nodes>> nodes_ {};
      shared_ptr<string> payType_ {};
      shared_ptr<string> primaryInstanceId_ {};
      // 主可用区。
      // 
      // This parameter is required.
      shared_ptr<string> primaryZone_ {};
      shared_ptr<vector<string>> readDBInstances_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      // 次可用区。
      shared_ptr<string> secondaryZone_ {};
      shared_ptr<string> series_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<int64_t> storageUsed_ {};
      shared_ptr<bool> supportBinlogX_ {};
      shared_ptr<vector<DBInstances::TagSet>> tagSet_ {};
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
      shared_ptr<string> zoneId_ {};
      shared_ptr<string> gdnRole_ {};
      shared_ptr<bool> isInGdn_ {};
    };

    virtual bool empty() const override { return this->DBInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNumber_ == nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<DescribeDBInstancesResponseBody::DBInstances> & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<DescribeDBInstancesResponseBody::DBInstances>) };
    inline vector<DescribeDBInstancesResponseBody::DBInstances> getDBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<DescribeDBInstancesResponseBody::DBInstances>) };
    inline DescribeDBInstancesResponseBody& setDBInstances(const vector<DescribeDBInstancesResponseBody::DBInstances> & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
    inline DescribeDBInstancesResponseBody& setDBInstances(vector<DescribeDBInstancesResponseBody::DBInstances> && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline DescribeDBInstancesResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    shared_ptr<vector<DescribeDBInstancesResponseBody::DBInstances>> DBInstances_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
