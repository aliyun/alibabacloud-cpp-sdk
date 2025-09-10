// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyDBInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyDBInstance& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyDBInstance& obj) { 
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
    DescribeDBInstanceAttributeResponseBodyDBInstance() = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstance(const DescribeDBInstanceAttributeResponseBodyDBInstance &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstance(DescribeDBInstanceAttributeResponseBodyDBInstance &&) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyDBInstance() = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstance& operator=(const DescribeDBInstanceAttributeResponseBodyDBInstance &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBInstance& operator=(DescribeDBInstanceAttributeResponseBodyDBInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canNotCreateColumnar_ != nullptr
        && this->cnNodeClassCode_ != nullptr && this->cnNodeCount_ != nullptr && this->columnarInstanceName_ != nullptr && this->columnarReadDBInstances_ != nullptr && this->commodityCode_ != nullptr
        && this->connAddrs_ != nullptr && this->connectionString_ != nullptr && this->cpuType_ != nullptr && this->createTime_ != nullptr && this->DBInstanceType_ != nullptr
        && this->DBNodeClass_ != nullptr && this->DBNodeCount_ != nullptr && this->DBNodes_ != nullptr && this->DBType_ != nullptr && this->DBVersion_ != nullptr
        && this->description_ != nullptr && this->differentDNSpec_ != nullptr && this->dnNodeClassCode_ != nullptr && this->dnNodeCount_ != nullptr && this->engine_ != nullptr
        && this->expireDate_ != nullptr && this->expired_ != nullptr && this->gdnInstanceName_ != nullptr && this->gdnMemberList_ != nullptr && this->gdnRole_ != nullptr
        && this->id_ != nullptr && this->kindCode_ != nullptr && this->LTSVersions_ != nullptr && this->latestMinorVersion_ != nullptr && this->lockMode_ != nullptr
        && this->maintainEndTime_ != nullptr && this->maintainStartTime_ != nullptr && this->minorVersion_ != nullptr && this->network_ != nullptr && this->payType_ != nullptr
        && this->port_ != nullptr && this->primaryInstanceId_ != nullptr && this->primaryZone_ != nullptr && this->readDBInstances_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->rightsSeparationEnabled_ != nullptr && this->rightsSeparationStatus_ != nullptr && this->secondaryZone_ != nullptr && this->series_ != nullptr
        && this->specCategory_ != nullptr && this->status_ != nullptr && this->storageType_ != nullptr && this->storageUsed_ != nullptr && this->tagSet_ != nullptr
        && this->tertiaryZone_ != nullptr && this->topologyType_ != nullptr && this->type_ != nullptr && this->VPCId_ != nullptr && this->vSwitchId_ != nullptr
        && this->zoneId_ != nullptr; };
    // canNotCreateColumnar Field Functions 
    bool hasCanNotCreateColumnar() const { return this->canNotCreateColumnar_ != nullptr;};
    void deleteCanNotCreateColumnar() { this->canNotCreateColumnar_ = nullptr;};
    inline bool canNotCreateColumnar() const { DARABONBA_PTR_GET_DEFAULT(canNotCreateColumnar_, false) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setCanNotCreateColumnar(bool canNotCreateColumnar) { DARABONBA_PTR_SET_VALUE(canNotCreateColumnar_, canNotCreateColumnar) };


    // cnNodeClassCode Field Functions 
    bool hasCnNodeClassCode() const { return this->cnNodeClassCode_ != nullptr;};
    void deleteCnNodeClassCode() { this->cnNodeClassCode_ = nullptr;};
    inline string cnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(cnNodeClassCode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setCnNodeClassCode(string cnNodeClassCode) { DARABONBA_PTR_SET_VALUE(cnNodeClassCode_, cnNodeClassCode) };


    // cnNodeCount Field Functions 
    bool hasCnNodeCount() const { return this->cnNodeCount_ != nullptr;};
    void deleteCnNodeCount() { this->cnNodeCount_ = nullptr;};
    inline int32_t cnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(cnNodeCount_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setCnNodeCount(int32_t cnNodeCount) { DARABONBA_PTR_SET_VALUE(cnNodeCount_, cnNodeCount) };


    // columnarInstanceName Field Functions 
    bool hasColumnarInstanceName() const { return this->columnarInstanceName_ != nullptr;};
    void deleteColumnarInstanceName() { this->columnarInstanceName_ = nullptr;};
    inline string columnarInstanceName() const { DARABONBA_PTR_GET_DEFAULT(columnarInstanceName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setColumnarInstanceName(string columnarInstanceName) { DARABONBA_PTR_SET_VALUE(columnarInstanceName_, columnarInstanceName) };


    // columnarReadDBInstances Field Functions 
    bool hasColumnarReadDBInstances() const { return this->columnarReadDBInstances_ != nullptr;};
    void deleteColumnarReadDBInstances() { this->columnarReadDBInstances_ = nullptr;};
    inline const vector<string> & columnarReadDBInstances() const { DARABONBA_PTR_GET_CONST(columnarReadDBInstances_, vector<string>) };
    inline vector<string> columnarReadDBInstances() { DARABONBA_PTR_GET(columnarReadDBInstances_, vector<string>) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setColumnarReadDBInstances(const vector<string> & columnarReadDBInstances) { DARABONBA_PTR_SET_VALUE(columnarReadDBInstances_, columnarReadDBInstances) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setColumnarReadDBInstances(vector<string> && columnarReadDBInstances) { DARABONBA_PTR_SET_RVALUE(columnarReadDBInstances_, columnarReadDBInstances) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // connAddrs Field Functions 
    bool hasConnAddrs() const { return this->connAddrs_ != nullptr;};
    void deleteConnAddrs() { this->connAddrs_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs> & connAddrs() const { DARABONBA_PTR_GET_CONST(connAddrs_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs> connAddrs() { DARABONBA_PTR_GET(connAddrs_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs>) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setConnAddrs(const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs> & connAddrs) { DARABONBA_PTR_SET_VALUE(connAddrs_, connAddrs) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setConnAddrs(vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs> && connAddrs) { DARABONBA_PTR_SET_RVALUE(connAddrs_, connAddrs) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // cpuType Field Functions 
    bool hasCpuType() const { return this->cpuType_ != nullptr;};
    void deleteCpuType() { this->cpuType_ = nullptr;};
    inline string cpuType() const { DARABONBA_PTR_GET_DEFAULT(cpuType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setCpuType(string cpuType) { DARABONBA_PTR_SET_VALUE(cpuType_, cpuType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int32_t DBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDBNodeCount(int32_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes> & DBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes> DBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes>) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDBNodes(const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes> & DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDBNodes(vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes> && DBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, DBNodes) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // differentDNSpec Field Functions 
    bool hasDifferentDNSpec() const { return this->differentDNSpec_ != nullptr;};
    void deleteDifferentDNSpec() { this->differentDNSpec_ = nullptr;};
    inline bool differentDNSpec() const { DARABONBA_PTR_GET_DEFAULT(differentDNSpec_, false) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDifferentDNSpec(bool differentDNSpec) { DARABONBA_PTR_SET_VALUE(differentDNSpec_, differentDNSpec) };


    // dnNodeClassCode Field Functions 
    bool hasDnNodeClassCode() const { return this->dnNodeClassCode_ != nullptr;};
    void deleteDnNodeClassCode() { this->dnNodeClassCode_ = nullptr;};
    inline string dnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(dnNodeClassCode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDnNodeClassCode(string dnNodeClassCode) { DARABONBA_PTR_SET_VALUE(dnNodeClassCode_, dnNodeClassCode) };


    // dnNodeCount Field Functions 
    bool hasDnNodeCount() const { return this->dnNodeCount_ != nullptr;};
    void deleteDnNodeCount() { this->dnNodeCount_ = nullptr;};
    inline int32_t dnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dnNodeCount_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setDnNodeCount(int32_t dnNodeCount) { DARABONBA_PTR_SET_VALUE(dnNodeCount_, dnNodeCount) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // gdnInstanceName Field Functions 
    bool hasGdnInstanceName() const { return this->gdnInstanceName_ != nullptr;};
    void deleteGdnInstanceName() { this->gdnInstanceName_ = nullptr;};
    inline string gdnInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gdnInstanceName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setGdnInstanceName(string gdnInstanceName) { DARABONBA_PTR_SET_VALUE(gdnInstanceName_, gdnInstanceName) };


    // gdnMemberList Field Functions 
    bool hasGdnMemberList() const { return this->gdnMemberList_ != nullptr;};
    void deleteGdnMemberList() { this->gdnMemberList_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList> & gdnMemberList() const { DARABONBA_PTR_GET_CONST(gdnMemberList_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList> gdnMemberList() { DARABONBA_PTR_GET(gdnMemberList_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList>) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setGdnMemberList(const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList> & gdnMemberList) { DARABONBA_PTR_SET_VALUE(gdnMemberList_, gdnMemberList) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setGdnMemberList(vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList> && gdnMemberList) { DARABONBA_PTR_SET_RVALUE(gdnMemberList_, gdnMemberList) };


    // gdnRole Field Functions 
    bool hasGdnRole() const { return this->gdnRole_ != nullptr;};
    void deleteGdnRole() { this->gdnRole_ = nullptr;};
    inline string gdnRole() const { DARABONBA_PTR_GET_DEFAULT(gdnRole_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setGdnRole(string gdnRole) { DARABONBA_PTR_SET_VALUE(gdnRole_, gdnRole) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // kindCode Field Functions 
    bool hasKindCode() const { return this->kindCode_ != nullptr;};
    void deleteKindCode() { this->kindCode_ = nullptr;};
    inline int32_t kindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setKindCode(int32_t kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


    // LTSVersions Field Functions 
    bool hasLTSVersions() const { return this->LTSVersions_ != nullptr;};
    void deleteLTSVersions() { this->LTSVersions_ = nullptr;};
    inline const vector<string> & LTSVersions() const { DARABONBA_PTR_GET_CONST(LTSVersions_, vector<string>) };
    inline vector<string> LTSVersions() { DARABONBA_PTR_GET(LTSVersions_, vector<string>) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setLTSVersions(const vector<string> & LTSVersions) { DARABONBA_PTR_SET_VALUE(LTSVersions_, LTSVersions) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setLTSVersions(vector<string> && LTSVersions) { DARABONBA_PTR_SET_RVALUE(LTSVersions_, LTSVersions) };


    // latestMinorVersion Field Functions 
    bool hasLatestMinorVersion() const { return this->latestMinorVersion_ != nullptr;};
    void deleteLatestMinorVersion() { this->latestMinorVersion_ = nullptr;};
    inline string latestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(latestMinorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setLatestMinorVersion(string latestMinorVersion) { DARABONBA_PTR_SET_VALUE(latestMinorVersion_, latestMinorVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // primaryInstanceId Field Functions 
    bool hasPrimaryInstanceId() const { return this->primaryInstanceId_ != nullptr;};
    void deletePrimaryInstanceId() { this->primaryInstanceId_ = nullptr;};
    inline string primaryInstanceId() const { DARABONBA_PTR_GET_DEFAULT(primaryInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setPrimaryInstanceId(string primaryInstanceId) { DARABONBA_PTR_SET_VALUE(primaryInstanceId_, primaryInstanceId) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string primaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // readDBInstances Field Functions 
    bool hasReadDBInstances() const { return this->readDBInstances_ != nullptr;};
    void deleteReadDBInstances() { this->readDBInstances_ = nullptr;};
    inline const vector<string> & readDBInstances() const { DARABONBA_PTR_GET_CONST(readDBInstances_, vector<string>) };
    inline vector<string> readDBInstances() { DARABONBA_PTR_GET(readDBInstances_, vector<string>) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setReadDBInstances(const vector<string> & readDBInstances) { DARABONBA_PTR_SET_VALUE(readDBInstances_, readDBInstances) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setReadDBInstances(vector<string> && readDBInstances) { DARABONBA_PTR_SET_RVALUE(readDBInstances_, readDBInstances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rightsSeparationEnabled Field Functions 
    bool hasRightsSeparationEnabled() const { return this->rightsSeparationEnabled_ != nullptr;};
    void deleteRightsSeparationEnabled() { this->rightsSeparationEnabled_ = nullptr;};
    inline bool rightsSeparationEnabled() const { DARABONBA_PTR_GET_DEFAULT(rightsSeparationEnabled_, false) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setRightsSeparationEnabled(bool rightsSeparationEnabled) { DARABONBA_PTR_SET_VALUE(rightsSeparationEnabled_, rightsSeparationEnabled) };


    // rightsSeparationStatus Field Functions 
    bool hasRightsSeparationStatus() const { return this->rightsSeparationStatus_ != nullptr;};
    void deleteRightsSeparationStatus() { this->rightsSeparationStatus_ = nullptr;};
    inline string rightsSeparationStatus() const { DARABONBA_PTR_GET_DEFAULT(rightsSeparationStatus_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setRightsSeparationStatus(string rightsSeparationStatus) { DARABONBA_PTR_SET_VALUE(rightsSeparationStatus_, rightsSeparationStatus) };


    // secondaryZone Field Functions 
    bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
    void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
    inline string secondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // specCategory Field Functions 
    bool hasSpecCategory() const { return this->specCategory_ != nullptr;};
    void deleteSpecCategory() { this->specCategory_ = nullptr;};
    inline string specCategory() const { DARABONBA_PTR_GET_DEFAULT(specCategory_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setSpecCategory(string specCategory) { DARABONBA_PTR_SET_VALUE(specCategory_, specCategory) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // tagSet Field Functions 
    bool hasTagSet() const { return this->tagSet_ != nullptr;};
    void deleteTagSet() { this->tagSet_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet> & tagSet() const { DARABONBA_PTR_GET_CONST(tagSet_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet> tagSet() { DARABONBA_PTR_GET(tagSet_, vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet>) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setTagSet(const vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet> & tagSet) { DARABONBA_PTR_SET_VALUE(tagSet_, tagSet) };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setTagSet(vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet> && tagSet) { DARABONBA_PTR_SET_RVALUE(tagSet_, tagSet) };


    // tertiaryZone Field Functions 
    bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
    void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
    inline string tertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string topologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> canNotCreateColumnar_ = nullptr;
    std::shared_ptr<string> cnNodeClassCode_ = nullptr;
    std::shared_ptr<int32_t> cnNodeCount_ = nullptr;
    std::shared_ptr<string> columnarInstanceName_ = nullptr;
    std::shared_ptr<vector<string>> columnarReadDBInstances_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs>> connAddrs_ = nullptr;
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> cpuType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<int32_t> DBNodeCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes>> DBNodes_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> differentDNSpec_ = nullptr;
    std::shared_ptr<string> dnNodeClassCode_ = nullptr;
    std::shared_ptr<int32_t> dnNodeCount_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<string> expired_ = nullptr;
    std::shared_ptr<string> gdnInstanceName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList>> gdnMemberList_ = nullptr;
    std::shared_ptr<string> gdnRole_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> kindCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> LTSVersions_ = nullptr;
    std::shared_ptr<string> latestMinorVersion_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    std::shared_ptr<string> minorVersion_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> primaryInstanceId_ = nullptr;
    // 主可用区。
    // 
    // This parameter is required.
    std::shared_ptr<string> primaryZone_ = nullptr;
    std::shared_ptr<vector<string>> readDBInstances_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<bool> rightsSeparationEnabled_ = nullptr;
    std::shared_ptr<string> rightsSeparationStatus_ = nullptr;
    // 次可用区。
    std::shared_ptr<string> secondaryZone_ = nullptr;
    std::shared_ptr<string> series_ = nullptr;
    std::shared_ptr<string> specCategory_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<int64_t> storageUsed_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet>> tagSet_ = nullptr;
    // 第三可用区。
    std::shared_ptr<string> tertiaryZone_ = nullptr;
    // 拓扑类型：
    // 
    // - **3azones**：三可用区；
    // - **1azone**：单可用区。
    // 
    // This parameter is required.
    std::shared_ptr<string> topologyType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
