// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEVIAENDPOINTRESPONSEBODYDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEVIAENDPOINTRESPONSEBODYDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs.hpp>
#include <alibabacloud/models/DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes.hpp>
#include <alibabacloud/models/DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceViaEndpointResponseBodyDBInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceViaEndpointResponseBodyDBInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CnNodeClassCode, cnNodeClassCode_);
      DARABONBA_PTR_TO_JSON(CnNodeCount, cnNodeCount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConnAddrs, connAddrs_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnNodeClassCode, dnNodeClassCode_);
      DARABONBA_PTR_TO_JSON(DnNodeCount, dnNodeCount_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
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
      DARABONBA_PTR_TO_JSON(ReadDBInstances, readDBInstances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RightsSeparationEnabled, rightsSeparationEnabled_);
      DARABONBA_PTR_TO_JSON(RightsSeparationStatus, rightsSeparationStatus_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(TagSet, tagSet_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceViaEndpointResponseBodyDBInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CnNodeClassCode, cnNodeClassCode_);
      DARABONBA_PTR_FROM_JSON(CnNodeCount, cnNodeCount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConnAddrs, connAddrs_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnNodeClassCode, dnNodeClassCode_);
      DARABONBA_PTR_FROM_JSON(DnNodeCount, dnNodeCount_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
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
      DARABONBA_PTR_FROM_JSON(ReadDBInstances, readDBInstances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RightsSeparationEnabled, rightsSeparationEnabled_);
      DARABONBA_PTR_FROM_JSON(RightsSeparationStatus, rightsSeparationStatus_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(TagSet, tagSet_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceViaEndpointResponseBodyDBInstance() = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstance(const DescribeDBInstanceViaEndpointResponseBodyDBInstance &) = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstance(DescribeDBInstanceViaEndpointResponseBodyDBInstance &&) = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceViaEndpointResponseBodyDBInstance() = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstance& operator=(const DescribeDBInstanceViaEndpointResponseBodyDBInstance &) = default ;
    DescribeDBInstanceViaEndpointResponseBodyDBInstance& operator=(DescribeDBInstanceViaEndpointResponseBodyDBInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnNodeClassCode_ == nullptr
        && return this->cnNodeCount_ == nullptr && return this->commodityCode_ == nullptr && return this->connAddrs_ == nullptr && return this->connectionString_ == nullptr && return this->createTime_ == nullptr
        && return this->DBInstanceType_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodeCount_ == nullptr && return this->DBNodes_ == nullptr && return this->DBType_ == nullptr
        && return this->DBVersion_ == nullptr && return this->description_ == nullptr && return this->dnNodeClassCode_ == nullptr && return this->dnNodeCount_ == nullptr && return this->engine_ == nullptr
        && return this->expireDate_ == nullptr && return this->expired_ == nullptr && return this->id_ == nullptr && return this->kindCode_ == nullptr && return this->LTSVersions_ == nullptr
        && return this->latestMinorVersion_ == nullptr && return this->lockMode_ == nullptr && return this->maintainEndTime_ == nullptr && return this->maintainStartTime_ == nullptr && return this->minorVersion_ == nullptr
        && return this->network_ == nullptr && return this->payType_ == nullptr && return this->port_ == nullptr && return this->readDBInstances_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->rightsSeparationEnabled_ == nullptr && return this->rightsSeparationStatus_ == nullptr && return this->series_ == nullptr && return this->status_ == nullptr
        && return this->storageUsed_ == nullptr && return this->tagSet_ == nullptr && return this->type_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // cnNodeClassCode Field Functions 
    bool hasCnNodeClassCode() const { return this->cnNodeClassCode_ != nullptr;};
    void deleteCnNodeClassCode() { this->cnNodeClassCode_ = nullptr;};
    inline string cnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(cnNodeClassCode_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setCnNodeClassCode(string cnNodeClassCode) { DARABONBA_PTR_SET_VALUE(cnNodeClassCode_, cnNodeClassCode) };


    // cnNodeCount Field Functions 
    bool hasCnNodeCount() const { return this->cnNodeCount_ != nullptr;};
    void deleteCnNodeCount() { this->cnNodeCount_ = nullptr;};
    inline int32_t cnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(cnNodeCount_, 0) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setCnNodeCount(int32_t cnNodeCount) { DARABONBA_PTR_SET_VALUE(cnNodeCount_, cnNodeCount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // connAddrs Field Functions 
    bool hasConnAddrs() const { return this->connAddrs_ != nullptr;};
    void deleteConnAddrs() { this->connAddrs_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs> & connAddrs() const { DARABONBA_PTR_GET_CONST(connAddrs_, vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs>) };
    inline vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs> connAddrs() { DARABONBA_PTR_GET(connAddrs_, vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs>) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setConnAddrs(const vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs> & connAddrs) { DARABONBA_PTR_SET_VALUE(connAddrs_, connAddrs) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setConnAddrs(vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs> && connAddrs) { DARABONBA_PTR_SET_RVALUE(connAddrs_, connAddrs) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int32_t DBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDBNodeCount(int32_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes> & DBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes>) };
    inline vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes> DBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes>) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDBNodes(const vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes> & DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDBNodes(vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes> && DBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, DBNodes) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnNodeClassCode Field Functions 
    bool hasDnNodeClassCode() const { return this->dnNodeClassCode_ != nullptr;};
    void deleteDnNodeClassCode() { this->dnNodeClassCode_ = nullptr;};
    inline string dnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(dnNodeClassCode_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDnNodeClassCode(string dnNodeClassCode) { DARABONBA_PTR_SET_VALUE(dnNodeClassCode_, dnNodeClassCode) };


    // dnNodeCount Field Functions 
    bool hasDnNodeCount() const { return this->dnNodeCount_ != nullptr;};
    void deleteDnNodeCount() { this->dnNodeCount_ = nullptr;};
    inline int32_t dnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dnNodeCount_, 0) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setDnNodeCount(int32_t dnNodeCount) { DARABONBA_PTR_SET_VALUE(dnNodeCount_, dnNodeCount) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // kindCode Field Functions 
    bool hasKindCode() const { return this->kindCode_ != nullptr;};
    void deleteKindCode() { this->kindCode_ = nullptr;};
    inline int32_t kindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, 0) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setKindCode(int32_t kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


    // LTSVersions Field Functions 
    bool hasLTSVersions() const { return this->LTSVersions_ != nullptr;};
    void deleteLTSVersions() { this->LTSVersions_ = nullptr;};
    inline const vector<string> & LTSVersions() const { DARABONBA_PTR_GET_CONST(LTSVersions_, vector<string>) };
    inline vector<string> LTSVersions() { DARABONBA_PTR_GET(LTSVersions_, vector<string>) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setLTSVersions(const vector<string> & LTSVersions) { DARABONBA_PTR_SET_VALUE(LTSVersions_, LTSVersions) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setLTSVersions(vector<string> && LTSVersions) { DARABONBA_PTR_SET_RVALUE(LTSVersions_, LTSVersions) };


    // latestMinorVersion Field Functions 
    bool hasLatestMinorVersion() const { return this->latestMinorVersion_ != nullptr;};
    void deleteLatestMinorVersion() { this->latestMinorVersion_ = nullptr;};
    inline string latestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(latestMinorVersion_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setLatestMinorVersion(string latestMinorVersion) { DARABONBA_PTR_SET_VALUE(latestMinorVersion_, latestMinorVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // readDBInstances Field Functions 
    bool hasReadDBInstances() const { return this->readDBInstances_ != nullptr;};
    void deleteReadDBInstances() { this->readDBInstances_ = nullptr;};
    inline const vector<string> & readDBInstances() const { DARABONBA_PTR_GET_CONST(readDBInstances_, vector<string>) };
    inline vector<string> readDBInstances() { DARABONBA_PTR_GET(readDBInstances_, vector<string>) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setReadDBInstances(const vector<string> & readDBInstances) { DARABONBA_PTR_SET_VALUE(readDBInstances_, readDBInstances) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setReadDBInstances(vector<string> && readDBInstances) { DARABONBA_PTR_SET_RVALUE(readDBInstances_, readDBInstances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rightsSeparationEnabled Field Functions 
    bool hasRightsSeparationEnabled() const { return this->rightsSeparationEnabled_ != nullptr;};
    void deleteRightsSeparationEnabled() { this->rightsSeparationEnabled_ = nullptr;};
    inline bool rightsSeparationEnabled() const { DARABONBA_PTR_GET_DEFAULT(rightsSeparationEnabled_, false) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setRightsSeparationEnabled(bool rightsSeparationEnabled) { DARABONBA_PTR_SET_VALUE(rightsSeparationEnabled_, rightsSeparationEnabled) };


    // rightsSeparationStatus Field Functions 
    bool hasRightsSeparationStatus() const { return this->rightsSeparationStatus_ != nullptr;};
    void deleteRightsSeparationStatus() { this->rightsSeparationStatus_ = nullptr;};
    inline string rightsSeparationStatus() const { DARABONBA_PTR_GET_DEFAULT(rightsSeparationStatus_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setRightsSeparationStatus(string rightsSeparationStatus) { DARABONBA_PTR_SET_VALUE(rightsSeparationStatus_, rightsSeparationStatus) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // tagSet Field Functions 
    bool hasTagSet() const { return this->tagSet_ != nullptr;};
    void deleteTagSet() { this->tagSet_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet> & tagSet() const { DARABONBA_PTR_GET_CONST(tagSet_, vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet>) };
    inline vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet> tagSet() { DARABONBA_PTR_GET(tagSet_, vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet>) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setTagSet(const vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet> & tagSet) { DARABONBA_PTR_SET_VALUE(tagSet_, tagSet) };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setTagSet(vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet> && tagSet) { DARABONBA_PTR_SET_RVALUE(tagSet_, tagSet) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceViaEndpointResponseBodyDBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> cnNodeClassCode_ = nullptr;
    std::shared_ptr<int32_t> cnNodeCount_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs>> connAddrs_ = nullptr;
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<int32_t> DBNodeCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes>> DBNodes_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> dnNodeClassCode_ = nullptr;
    std::shared_ptr<int32_t> dnNodeCount_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<string> expired_ = nullptr;
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
    std::shared_ptr<vector<string>> readDBInstances_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<bool> rightsSeparationEnabled_ = nullptr;
    std::shared_ptr<string> rightsSeparationStatus_ = nullptr;
    std::shared_ptr<string> series_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> storageUsed_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet>> tagSet_ = nullptr;
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
