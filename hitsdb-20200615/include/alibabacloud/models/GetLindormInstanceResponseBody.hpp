// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormInstanceResponseBodyEngineList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_TO_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_TO_JSON(ArchiveStorage, archiveStorage_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_TO_JSON(CoreDiskCategory, coreDiskCategory_);
      DARABONBA_PTR_TO_JSON(CoreNum, coreNum_);
      DARABONBA_PTR_TO_JSON(CoreSingleStorage, coreSingleStorage_);
      DARABONBA_PTR_TO_JSON(CoreSpec, coreSpec_);
      DARABONBA_PTR_TO_JSON(CreateMilliseconds, createMilliseconds_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskThreshold, diskThreshold_);
      DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_TO_JSON(EnableBlob, enableBlob_);
      DARABONBA_PTR_TO_JSON(EnableCdc, enableCdc_);
      DARABONBA_PTR_TO_JSON(EnableCompute, enableCompute_);
      DARABONBA_PTR_TO_JSON(EnableKms, enableKms_);
      DARABONBA_PTR_TO_JSON(EnableLProxy, enableLProxy_);
      DARABONBA_PTR_TO_JSON(EnableLTS, enableLTS_);
      DARABONBA_PTR_TO_JSON(EnableLsqlVersionV3, enableLsqlVersionV3_);
      DARABONBA_PTR_TO_JSON(EnableMLCtrl, enableMLCtrl_);
      DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(EnableShs, enableShs_);
      DARABONBA_PTR_TO_JSON(EnableStoreTDE, enableStoreTDE_);
      DARABONBA_PTR_TO_JSON(EnableStream, enableStream_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpiredMilliseconds, expiredMilliseconds_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceStorage, instanceStorage_);
      DARABONBA_PTR_TO_JSON(LogDiskCategory, logDiskCategory_);
      DARABONBA_PTR_TO_JSON(LogNum, logNum_);
      DARABONBA_PTR_TO_JSON(LogSingleStorage, logSingleStorage_);
      DARABONBA_PTR_TO_JSON(LogSpec, logSpec_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_FROM_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_FROM_JSON(ArchiveStorage, archiveStorage_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_FROM_JSON(CoreDiskCategory, coreDiskCategory_);
      DARABONBA_PTR_FROM_JSON(CoreNum, coreNum_);
      DARABONBA_PTR_FROM_JSON(CoreSingleStorage, coreSingleStorage_);
      DARABONBA_PTR_FROM_JSON(CoreSpec, coreSpec_);
      DARABONBA_PTR_FROM_JSON(CreateMilliseconds, createMilliseconds_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskThreshold, diskThreshold_);
      DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_FROM_JSON(EnableBlob, enableBlob_);
      DARABONBA_PTR_FROM_JSON(EnableCdc, enableCdc_);
      DARABONBA_PTR_FROM_JSON(EnableCompute, enableCompute_);
      DARABONBA_PTR_FROM_JSON(EnableKms, enableKms_);
      DARABONBA_PTR_FROM_JSON(EnableLProxy, enableLProxy_);
      DARABONBA_PTR_FROM_JSON(EnableLTS, enableLTS_);
      DARABONBA_PTR_FROM_JSON(EnableLsqlVersionV3, enableLsqlVersionV3_);
      DARABONBA_PTR_FROM_JSON(EnableMLCtrl, enableMLCtrl_);
      DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(EnableShs, enableShs_);
      DARABONBA_PTR_FROM_JSON(EnableStoreTDE, enableStoreTDE_);
      DARABONBA_PTR_FROM_JSON(EnableStream, enableStream_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredMilliseconds, expiredMilliseconds_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceStorage, instanceStorage_);
      DARABONBA_PTR_FROM_JSON(LogDiskCategory, logDiskCategory_);
      DARABONBA_PTR_FROM_JSON(LogNum, logNum_);
      DARABONBA_PTR_FROM_JSON(LogSingleStorage, logSingleStorage_);
      DARABONBA_PTR_FROM_JSON(LogSpec, logSpec_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetLindormInstanceResponseBody() = default ;
    GetLindormInstanceResponseBody(const GetLindormInstanceResponseBody &) = default ;
    GetLindormInstanceResponseBody(GetLindormInstanceResponseBody &&) = default ;
    GetLindormInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceResponseBody() = default ;
    GetLindormInstanceResponseBody& operator=(const GetLindormInstanceResponseBody &) = default ;
    GetLindormInstanceResponseBody& operator=(GetLindormInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->arbiterVSwitchId_ != nullptr && this->arbiterZoneId_ != nullptr && this->archVersion_ != nullptr && this->archiveStorage_ != nullptr && this->autoRenew_ != nullptr
        && this->coldStorage_ != nullptr && this->coreDiskCategory_ != nullptr && this->coreNum_ != nullptr && this->coreSingleStorage_ != nullptr && this->coreSpec_ != nullptr
        && this->createMilliseconds_ != nullptr && this->createTime_ != nullptr && this->deletionProtection_ != nullptr && this->diskCategory_ != nullptr && this->diskThreshold_ != nullptr
        && this->diskUsage_ != nullptr && this->enableBlob_ != nullptr && this->enableCdc_ != nullptr && this->enableCompute_ != nullptr && this->enableKms_ != nullptr
        && this->enableLProxy_ != nullptr && this->enableLTS_ != nullptr && this->enableLsqlVersionV3_ != nullptr && this->enableMLCtrl_ != nullptr && this->enableSSL_ != nullptr
        && this->enableShs_ != nullptr && this->enableStoreTDE_ != nullptr && this->enableStream_ != nullptr && this->engineList_ != nullptr && this->engineType_ != nullptr
        && this->expireTime_ != nullptr && this->expiredMilliseconds_ != nullptr && this->instanceAlias_ != nullptr && this->instanceId_ != nullptr && this->instanceStatus_ != nullptr
        && this->instanceStorage_ != nullptr && this->logDiskCategory_ != nullptr && this->logNum_ != nullptr && this->logSingleStorage_ != nullptr && this->logSpec_ != nullptr
        && this->maintainEndTime_ != nullptr && this->maintainStartTime_ != nullptr && this->multiZoneCombination_ != nullptr && this->networkType_ != nullptr && this->payType_ != nullptr
        && this->primaryVSwitchId_ != nullptr && this->primaryZoneId_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->serviceType_ != nullptr && this->standbyVSwitchId_ != nullptr && this->standbyZoneId_ != nullptr && this->vpcId_ != nullptr && this->vswitchId_ != nullptr
        && this->zoneId_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetLindormInstanceResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string arbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline GetLindormInstanceResponseBody& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string arbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline GetLindormInstanceResponseBody& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // archVersion Field Functions 
    bool hasArchVersion() const { return this->archVersion_ != nullptr;};
    void deleteArchVersion() { this->archVersion_ = nullptr;};
    inline string archVersion() const { DARABONBA_PTR_GET_DEFAULT(archVersion_, "") };
    inline GetLindormInstanceResponseBody& setArchVersion(string archVersion) { DARABONBA_PTR_SET_VALUE(archVersion_, archVersion) };


    // archiveStorage Field Functions 
    bool hasArchiveStorage() const { return this->archiveStorage_ != nullptr;};
    void deleteArchiveStorage() { this->archiveStorage_ = nullptr;};
    inline int32_t archiveStorage() const { DARABONBA_PTR_GET_DEFAULT(archiveStorage_, 0) };
    inline GetLindormInstanceResponseBody& setArchiveStorage(int32_t archiveStorage) { DARABONBA_PTR_SET_VALUE(archiveStorage_, archiveStorage) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline GetLindormInstanceResponseBody& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline int32_t coldStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0) };
    inline GetLindormInstanceResponseBody& setColdStorage(int32_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // coreDiskCategory Field Functions 
    bool hasCoreDiskCategory() const { return this->coreDiskCategory_ != nullptr;};
    void deleteCoreDiskCategory() { this->coreDiskCategory_ = nullptr;};
    inline string coreDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(coreDiskCategory_, "") };
    inline GetLindormInstanceResponseBody& setCoreDiskCategory(string coreDiskCategory) { DARABONBA_PTR_SET_VALUE(coreDiskCategory_, coreDiskCategory) };


    // coreNum Field Functions 
    bool hasCoreNum() const { return this->coreNum_ != nullptr;};
    void deleteCoreNum() { this->coreNum_ = nullptr;};
    inline int32_t coreNum() const { DARABONBA_PTR_GET_DEFAULT(coreNum_, 0) };
    inline GetLindormInstanceResponseBody& setCoreNum(int32_t coreNum) { DARABONBA_PTR_SET_VALUE(coreNum_, coreNum) };


    // coreSingleStorage Field Functions 
    bool hasCoreSingleStorage() const { return this->coreSingleStorage_ != nullptr;};
    void deleteCoreSingleStorage() { this->coreSingleStorage_ = nullptr;};
    inline int32_t coreSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(coreSingleStorage_, 0) };
    inline GetLindormInstanceResponseBody& setCoreSingleStorage(int32_t coreSingleStorage) { DARABONBA_PTR_SET_VALUE(coreSingleStorage_, coreSingleStorage) };


    // coreSpec Field Functions 
    bool hasCoreSpec() const { return this->coreSpec_ != nullptr;};
    void deleteCoreSpec() { this->coreSpec_ = nullptr;};
    inline string coreSpec() const { DARABONBA_PTR_GET_DEFAULT(coreSpec_, "") };
    inline GetLindormInstanceResponseBody& setCoreSpec(string coreSpec) { DARABONBA_PTR_SET_VALUE(coreSpec_, coreSpec) };


    // createMilliseconds Field Functions 
    bool hasCreateMilliseconds() const { return this->createMilliseconds_ != nullptr;};
    void deleteCreateMilliseconds() { this->createMilliseconds_ = nullptr;};
    inline int64_t createMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(createMilliseconds_, 0L) };
    inline GetLindormInstanceResponseBody& setCreateMilliseconds(int64_t createMilliseconds) { DARABONBA_PTR_SET_VALUE(createMilliseconds_, createMilliseconds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLindormInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline GetLindormInstanceResponseBody& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline GetLindormInstanceResponseBody& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskThreshold Field Functions 
    bool hasDiskThreshold() const { return this->diskThreshold_ != nullptr;};
    void deleteDiskThreshold() { this->diskThreshold_ = nullptr;};
    inline string diskThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskThreshold_, "") };
    inline GetLindormInstanceResponseBody& setDiskThreshold(string diskThreshold) { DARABONBA_PTR_SET_VALUE(diskThreshold_, diskThreshold) };


    // diskUsage Field Functions 
    bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
    void deleteDiskUsage() { this->diskUsage_ = nullptr;};
    inline string diskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, "") };
    inline GetLindormInstanceResponseBody& setDiskUsage(string diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


    // enableBlob Field Functions 
    bool hasEnableBlob() const { return this->enableBlob_ != nullptr;};
    void deleteEnableBlob() { this->enableBlob_ = nullptr;};
    inline bool enableBlob() const { DARABONBA_PTR_GET_DEFAULT(enableBlob_, false) };
    inline GetLindormInstanceResponseBody& setEnableBlob(bool enableBlob) { DARABONBA_PTR_SET_VALUE(enableBlob_, enableBlob) };


    // enableCdc Field Functions 
    bool hasEnableCdc() const { return this->enableCdc_ != nullptr;};
    void deleteEnableCdc() { this->enableCdc_ = nullptr;};
    inline bool enableCdc() const { DARABONBA_PTR_GET_DEFAULT(enableCdc_, false) };
    inline GetLindormInstanceResponseBody& setEnableCdc(bool enableCdc) { DARABONBA_PTR_SET_VALUE(enableCdc_, enableCdc) };


    // enableCompute Field Functions 
    bool hasEnableCompute() const { return this->enableCompute_ != nullptr;};
    void deleteEnableCompute() { this->enableCompute_ = nullptr;};
    inline bool enableCompute() const { DARABONBA_PTR_GET_DEFAULT(enableCompute_, false) };
    inline GetLindormInstanceResponseBody& setEnableCompute(bool enableCompute) { DARABONBA_PTR_SET_VALUE(enableCompute_, enableCompute) };


    // enableKms Field Functions 
    bool hasEnableKms() const { return this->enableKms_ != nullptr;};
    void deleteEnableKms() { this->enableKms_ = nullptr;};
    inline bool enableKms() const { DARABONBA_PTR_GET_DEFAULT(enableKms_, false) };
    inline GetLindormInstanceResponseBody& setEnableKms(bool enableKms) { DARABONBA_PTR_SET_VALUE(enableKms_, enableKms) };


    // enableLProxy Field Functions 
    bool hasEnableLProxy() const { return this->enableLProxy_ != nullptr;};
    void deleteEnableLProxy() { this->enableLProxy_ = nullptr;};
    inline bool enableLProxy() const { DARABONBA_PTR_GET_DEFAULT(enableLProxy_, false) };
    inline GetLindormInstanceResponseBody& setEnableLProxy(bool enableLProxy) { DARABONBA_PTR_SET_VALUE(enableLProxy_, enableLProxy) };


    // enableLTS Field Functions 
    bool hasEnableLTS() const { return this->enableLTS_ != nullptr;};
    void deleteEnableLTS() { this->enableLTS_ = nullptr;};
    inline bool enableLTS() const { DARABONBA_PTR_GET_DEFAULT(enableLTS_, false) };
    inline GetLindormInstanceResponseBody& setEnableLTS(bool enableLTS) { DARABONBA_PTR_SET_VALUE(enableLTS_, enableLTS) };


    // enableLsqlVersionV3 Field Functions 
    bool hasEnableLsqlVersionV3() const { return this->enableLsqlVersionV3_ != nullptr;};
    void deleteEnableLsqlVersionV3() { this->enableLsqlVersionV3_ = nullptr;};
    inline bool enableLsqlVersionV3() const { DARABONBA_PTR_GET_DEFAULT(enableLsqlVersionV3_, false) };
    inline GetLindormInstanceResponseBody& setEnableLsqlVersionV3(bool enableLsqlVersionV3) { DARABONBA_PTR_SET_VALUE(enableLsqlVersionV3_, enableLsqlVersionV3) };


    // enableMLCtrl Field Functions 
    bool hasEnableMLCtrl() const { return this->enableMLCtrl_ != nullptr;};
    void deleteEnableMLCtrl() { this->enableMLCtrl_ = nullptr;};
    inline bool enableMLCtrl() const { DARABONBA_PTR_GET_DEFAULT(enableMLCtrl_, false) };
    inline GetLindormInstanceResponseBody& setEnableMLCtrl(bool enableMLCtrl) { DARABONBA_PTR_SET_VALUE(enableMLCtrl_, enableMLCtrl) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool enableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline GetLindormInstanceResponseBody& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // enableShs Field Functions 
    bool hasEnableShs() const { return this->enableShs_ != nullptr;};
    void deleteEnableShs() { this->enableShs_ = nullptr;};
    inline bool enableShs() const { DARABONBA_PTR_GET_DEFAULT(enableShs_, false) };
    inline GetLindormInstanceResponseBody& setEnableShs(bool enableShs) { DARABONBA_PTR_SET_VALUE(enableShs_, enableShs) };


    // enableStoreTDE Field Functions 
    bool hasEnableStoreTDE() const { return this->enableStoreTDE_ != nullptr;};
    void deleteEnableStoreTDE() { this->enableStoreTDE_ = nullptr;};
    inline bool enableStoreTDE() const { DARABONBA_PTR_GET_DEFAULT(enableStoreTDE_, false) };
    inline GetLindormInstanceResponseBody& setEnableStoreTDE(bool enableStoreTDE) { DARABONBA_PTR_SET_VALUE(enableStoreTDE_, enableStoreTDE) };


    // enableStream Field Functions 
    bool hasEnableStream() const { return this->enableStream_ != nullptr;};
    void deleteEnableStream() { this->enableStream_ = nullptr;};
    inline bool enableStream() const { DARABONBA_PTR_GET_DEFAULT(enableStream_, false) };
    inline GetLindormInstanceResponseBody& setEnableStream(bool enableStream) { DARABONBA_PTR_SET_VALUE(enableStream_, enableStream) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<GetLindormInstanceResponseBodyEngineList> & engineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<GetLindormInstanceResponseBodyEngineList>) };
    inline vector<GetLindormInstanceResponseBodyEngineList> engineList() { DARABONBA_PTR_GET(engineList_, vector<GetLindormInstanceResponseBodyEngineList>) };
    inline GetLindormInstanceResponseBody& setEngineList(const vector<GetLindormInstanceResponseBodyEngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline GetLindormInstanceResponseBody& setEngineList(vector<GetLindormInstanceResponseBodyEngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline int32_t engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, 0) };
    inline GetLindormInstanceResponseBody& setEngineType(int32_t engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetLindormInstanceResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expiredMilliseconds Field Functions 
    bool hasExpiredMilliseconds() const { return this->expiredMilliseconds_ != nullptr;};
    void deleteExpiredMilliseconds() { this->expiredMilliseconds_ = nullptr;};
    inline int64_t expiredMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(expiredMilliseconds_, 0L) };
    inline GetLindormInstanceResponseBody& setExpiredMilliseconds(int64_t expiredMilliseconds) { DARABONBA_PTR_SET_VALUE(expiredMilliseconds_, expiredMilliseconds) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline GetLindormInstanceResponseBody& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetLindormInstanceResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceStorage Field Functions 
    bool hasInstanceStorage() const { return this->instanceStorage_ != nullptr;};
    void deleteInstanceStorage() { this->instanceStorage_ = nullptr;};
    inline string instanceStorage() const { DARABONBA_PTR_GET_DEFAULT(instanceStorage_, "") };
    inline GetLindormInstanceResponseBody& setInstanceStorage(string instanceStorage) { DARABONBA_PTR_SET_VALUE(instanceStorage_, instanceStorage) };


    // logDiskCategory Field Functions 
    bool hasLogDiskCategory() const { return this->logDiskCategory_ != nullptr;};
    void deleteLogDiskCategory() { this->logDiskCategory_ = nullptr;};
    inline string logDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(logDiskCategory_, "") };
    inline GetLindormInstanceResponseBody& setLogDiskCategory(string logDiskCategory) { DARABONBA_PTR_SET_VALUE(logDiskCategory_, logDiskCategory) };


    // logNum Field Functions 
    bool hasLogNum() const { return this->logNum_ != nullptr;};
    void deleteLogNum() { this->logNum_ = nullptr;};
    inline int32_t logNum() const { DARABONBA_PTR_GET_DEFAULT(logNum_, 0) };
    inline GetLindormInstanceResponseBody& setLogNum(int32_t logNum) { DARABONBA_PTR_SET_VALUE(logNum_, logNum) };


    // logSingleStorage Field Functions 
    bool hasLogSingleStorage() const { return this->logSingleStorage_ != nullptr;};
    void deleteLogSingleStorage() { this->logSingleStorage_ = nullptr;};
    inline int32_t logSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(logSingleStorage_, 0) };
    inline GetLindormInstanceResponseBody& setLogSingleStorage(int32_t logSingleStorage) { DARABONBA_PTR_SET_VALUE(logSingleStorage_, logSingleStorage) };


    // logSpec Field Functions 
    bool hasLogSpec() const { return this->logSpec_ != nullptr;};
    void deleteLogSpec() { this->logSpec_ = nullptr;};
    inline string logSpec() const { DARABONBA_PTR_GET_DEFAULT(logSpec_, "") };
    inline GetLindormInstanceResponseBody& setLogSpec(string logSpec) { DARABONBA_PTR_SET_VALUE(logSpec_, logSpec) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline GetLindormInstanceResponseBody& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline GetLindormInstanceResponseBody& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // multiZoneCombination Field Functions 
    bool hasMultiZoneCombination() const { return this->multiZoneCombination_ != nullptr;};
    void deleteMultiZoneCombination() { this->multiZoneCombination_ = nullptr;};
    inline string multiZoneCombination() const { DARABONBA_PTR_GET_DEFAULT(multiZoneCombination_, "") };
    inline GetLindormInstanceResponseBody& setMultiZoneCombination(string multiZoneCombination) { DARABONBA_PTR_SET_VALUE(multiZoneCombination_, multiZoneCombination) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetLindormInstanceResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetLindormInstanceResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string primaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline GetLindormInstanceResponseBody& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string primaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline GetLindormInstanceResponseBody& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLindormInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLindormInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetLindormInstanceResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string standbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline GetLindormInstanceResponseBody& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string standbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline GetLindormInstanceResponseBody& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetLindormInstanceResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline GetLindormInstanceResponseBody& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetLindormInstanceResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // 16-digit AliUid of the Alibaba Cloud primary account (main account).
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Multi-AZ instance, coordinating Availability Zone virtual switch ID, which must be located in the Availability Zone corresponding to ArbiterZoneId.
    std::shared_ptr<string> arbiterVSwitchId_ = nullptr;
    // Multi-zone instance, coordinating Availability Zone ID.
    std::shared_ptr<string> arbiterZoneId_ = nullptr;
    // The architecture of the instance. Valid values:
    // 
    // *   **1.0**: The instance is deployed in a single zone.
    // *   **2.0**: The instance is deployed across multiple zones.
    std::shared_ptr<string> archVersion_ = nullptr;
    // The Archive storage size of the instance.
    std::shared_ptr<int32_t> archiveStorage_ = nullptr;
    // Indicates whether auto-renewal is enabled, with the following returns:
    // - **true**: Enabled. 
    // - **false**: Disabled.
    // > This parameter is returned when the instance\\"s payment type is prepaid.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The Capacity storage size of the instance.
    std::shared_ptr<int32_t> coldStorage_ = nullptr;
    // The disk type of the core nodes. This parameter is returned only for multi-zone instances. Valid values:
    // 
    // *   **cloud_efficiency**: This instance uses the Standard type of storage.
    // *   **cloud_ssd**: This instance uses the Performance type of storage.
    // *   **cloud_essd**: This instance uses ESSDs for storage.
    // *   **cloud_essd_pl0**: This instance uses PL0 ESSDs for storage.
    std::shared_ptr<string> coreDiskCategory_ = nullptr;
    // Multi-zone instance, number of core nodes.
    std::shared_ptr<int32_t> coreNum_ = nullptr;
    // Multi-zone instance, core single-node disk capacity.
    std::shared_ptr<int32_t> coreSingleStorage_ = nullptr;
    // Multi-zone instance, core node specification.
    std::shared_ptr<string> coreSpec_ = nullptr;
    // The timestamp in milliseconds between the instance creation time and 1970-01-01 00:00:00.
    std::shared_ptr<int64_t> createMilliseconds_ = nullptr;
    // The storage capacity of the disk of a single log node. This parameter is returned only for multi-zone instances.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether deletion protection is enabled, returning:
    // - **true**: Enabled.
    // - **false**: Disabled.
    std::shared_ptr<string> deletionProtection_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **cloud_efficiency**: This instance uses the Standard type of storage.
    // *   **cloud_ssd**: This instance uses the Performance type of storage.
    // *   **cloud_essd**: This instance uses ESSDs for storage.
    // *   **cloud_essd_pl0**: This instance uses PL0 ESSDs for storage.
    // *   **capacity_cloud_storage**: This instance uses the Capacity type of storage.
    // *   **local_ssd_pro**: This instance uses local SSDs for storage.
    // *   **local_hdd_pro**: This instance uses local HDDs for storage.
    std::shared_ptr<string> diskCategory_ = nullptr;
    // The threshold for disk space.
    std::shared_ptr<string> diskThreshold_ = nullptr;
    // Disk space usage rate.
    std::shared_ptr<string> diskUsage_ = nullptr;
    // Indicates whether LBlob is enabled for the instance. Valid values:
    // 
    // true: LBlob is enabled for the instance. false: LBlob is not enabled for the instance.
    std::shared_ptr<bool> enableBlob_ = nullptr;
    // Indicates whether the data subscription feature for the instance is enabled. Returns:
    // - **true**: Enabled. 
    // - **false**: Not enabled.
    std::shared_ptr<bool> enableCdc_ = nullptr;
    // Indicates whether the instance\\"s compute engine is enabled, returning:
    // - **true**: Enabled. 
    // - **false**: Not enabled.
    std::shared_ptr<bool> enableCompute_ = nullptr;
    // Indicates whether the Key Management Service (KMS) is enabled, returning:
    // - **true**: Enabled.
    // - **false**: Disabled.
    std::shared_ptr<bool> enableKms_ = nullptr;
    // Indicates whether LindormTable supports the Thrift and CQL protocols. If these protocols are not supported. You can call the SwitchLProxyService operation to enable or disable the support on these protocols for LindormTable.
    // 
    // True: LindormTable supports the Thrift and CQL protocols.
    // 
    // False: LindormTable does not support the Thrift and CQL protocols.
    std::shared_ptr<bool> enableLProxy_ = nullptr;
    // Indicates whether the LTS engine is activated for the instance. Valid values:
    // 
    // *   **true**: The LTS engine is activated for the instance.
    // *   **false**: The LTS engine is not activated for the instance.
    std::shared_ptr<bool> enableLTS_ = nullptr;
    // Indicates whether LindormTable of the instance supports LindormSQL V3 that is compatible with MySQL. By default, LindormTable of instances that are purchased after October 24, 2023 supports LindormSQL V3. If your instance is purchased before this date and want to enable LindormSQL V3, contact the technical support.
    // 
    // *   True: LindormTable supports LindormSQL V3.
    // *   False: LindormTable does not support LindormSQL V3.
    std::shared_ptr<bool> enableLsqlVersionV3_ = nullptr;
    // Indicates whether AI control nodes are enabled for the instance.
    // 
    // *   True: AI control nodes are enabled for the instance.
    // *   False: AI control nodes are not enabled for the instance.
    std::shared_ptr<bool> enableMLCtrl_ = nullptr;
    // Indicates whether SSL link encryption is enabled, returning:
    // - **true**: Enabled. 
    // - **false**: Disabled.
    std::shared_ptr<bool> enableSSL_ = nullptr;
    // Whether to enable the Compute Engine History Server.
    std::shared_ptr<bool> enableShs_ = nullptr;
    // Indicates whether the Transparent Data Encryption (TDE) is enabled, returning:
    // - **true**: Enabled. 
    // - **false**: Disabled.
    std::shared_ptr<bool> enableStoreTDE_ = nullptr;
    // Indicates whether the instance has the stream engine enabled. Return values:
    // - **true**: Stream engine is enabled. 
    // - **false**: Stream engine is not enabled.
    std::shared_ptr<bool> enableStream_ = nullptr;
    // The list of engines supported by the instance.
    std::shared_ptr<vector<GetLindormInstanceResponseBodyEngineList>> engineList_ = nullptr;
    // Supported engine types, the return value is obtained by performing addition operations on the values of the following engine types.
    // - 1: Search Engine 
    // - 2: Time Series Engine
    // - 4: Wide Table Engine
    // - 8: File Engine
    // > For example: If EngineType is 15, where 15 = 8 + 4 + 2 + 1, it indicates that the instance supports Search Engine, Time Series Engine, Wide Table Engine, and File Engine. If EngineType is 6, where 6 = 4 + 2, it signifies that the instance supports Time Series Engine and Wide Table Engine.
    std::shared_ptr<int32_t> engineType_ = nullptr;
    // Expiration time of the instance, format: **yyyy-MM-dd HH:mm:ss**.
    // > This parameter is only returned when the payment type is pre-paid.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The millisecond value between the instance expiration time and 1970-01-01 00:00:00.
    std::shared_ptr<int64_t> expiredMilliseconds_ = nullptr;
    // Instance name.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   **CREATING**: The instance is being created.
    // *   **ACTIVATION**: The instance is running.
    // *   **COLD_EXPANDING**: The Capacity storage of the instance is being scaled up.
    // *   **MINOR_VERSION_TRANSING**: The minor version of the instance is being updated.
    // *   **RESIZING**: The nodes in the instance are being scaled up.
    // *   **SHRINKING**: The nodes in the instance are being scaled down.
    // *   **CLASS_CHANGING**: The specification of the instance is being changed.
    // *   **SSL_SWITCHING: SSL**: The SSL configurations of the instance are being changed.
    // *   **CDC_OPENING**: Data subscription is being enabled for the instance.
    // *   **TRANSFER**: The data of the instance is being transferred.
    // *   **DATABASE_TRANSFER**: The data of the instance is being transferred to databases.
    // *   **GUARD_CREATING**: A disaster recovery instance is being created.
    // *   **BACKUP_RECOVERING**: The data of the instance is being restored from a backup.
    // *   **DATABASE_IMPORTING**: Data is being imported to the instance.
    // *   **NET_MODIFYING**: The network configurations of the instance are being changed.
    // *   **NET_SWITCHING**: The network of the instance is being switched between a virtual private cloud (VPC) and the Internet.
    // *   **NET_CREATING**: The connection to the instance is being created.
    // *   **NET_DELETING**: The connection to the instance is being deleted.
    // *   **DELETING**: The instance is being deleted.
    // *   **RESTARTING**: The instance is restarting.
    // *   **LOCKED**: The instance is locked because it expires.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // Instance\\"s storage capacity.
    std::shared_ptr<string> instanceStorage_ = nullptr;
    // Multi-zone instance, log node disk type, returns:
    // - **cloud_efficiency**: Standard cloud storage. 
    // - **cloud_ssd**: Performance cloud storage.
    std::shared_ptr<string> logDiskCategory_ = nullptr;
    // Multi-zone instance, number of log nodes.
    std::shared_ptr<int32_t> logNum_ = nullptr;
    // The storage capacity of the disk of a single log node. This parameter is returned only for multi-zone instances.
    std::shared_ptr<int32_t> logSingleStorage_ = nullptr;
    // Multi-zone instance, log node specification.
    std::shared_ptr<string> logSpec_ = nullptr;
    // Maintainable end time.
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    // Maintainable start time.
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    // Multi-zone combinations. For support details on zone combinations, please refer to the product page.
    // - **ap-southeast-5abc-aliyun**: Indonesia (Jakarta) A+B+C. 
    // - **cn-hangzhou-ehi-aliyun**: East China 1 (Hangzhou) E+H+I.
    // - **cn-beijing-acd-aliyun**: North China 2 (Beijing) A+C+D.
    // - **ap-southeast-1-abc-aliyun**: Singapore A+B+C.
    // - **cn-zhangjiakou-abc-aliyun**: North China 3 (Zhangjiakou) A+B+C.
    // - **cn-shanghai-efg-aliyun**: East China 2 (Shanghai) E+F+G.
    // - **cn-shanghai-abd-aliyun**: East China 2 (Shanghai) A+B+D.
    // - **cn-hangzhou-bef-aliyun**: East China 1 (Hangzhou) B+E+F.
    // - **cn-hangzhou-bce-aliyun**: East China 1 (Hangzhou) B+C+E.
    // - **cn-beijing-fgh-aliyun**: North China 2 (Beijing) F+G+H.
    // - **cn-shenzhen-abc-aliyun**: South China 1 (Shenzhen) A+B+C.
    std::shared_ptr<string> multiZoneCombination_ = nullptr;
    // Instance\\"s network type.
    std::shared_ptr<string> networkType_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // PREPAY: subscription.
    // POSTPAY: pay-as-you-go.
    std::shared_ptr<string> payType_ = nullptr;
    // Multi-zone instance, the virtual switch ID of the primary availability zone, which must be in the availability zone corresponding to PrimaryZoneId.
    std::shared_ptr<string> primaryVSwitchId_ = nullptr;
    // Multi-zone instance, availability zone ID of the primary zone.
    std::shared_ptr<string> primaryZoneId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Instance type, valid values:
    // - **lindorm**: represents a Lindorm single-zone instance.
    // - **lindorm_multizone**: represents a Lindorm multi-zone instance.
    // - **serverless_lindorm**: represents a Lindorm Serverless instance.
    // - **lindorm_standalone**: represents a Lindorm standalone instance.
    // - **lts**: represents the Lindorm Data Channel Service type.
    std::shared_ptr<string> serviceType_ = nullptr;
    // Multi-zone instance, the virtual switch ID of the backup availability zone, which must be in the availability zone corresponding to StandbyZoneId.
    std::shared_ptr<string> standbyVSwitchId_ = nullptr;
    // Multi-zone instance, backup availability zone\\"s availability zone ID.
    std::shared_ptr<string> standbyZoneId_ = nullptr;
    // The type of the log nodes. This parameter is returned only for multi-zone instances.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The number of the log nodes. This parameter is returned only for multi-zone instances.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // Availability Zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
