// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultElasticPolicy.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultGatewayEntry.hpp>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultInitConfig.hpp>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultInternetSlb.hpp>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultMaintenancePeriod.hpp>
#include <alibabacloud/models/ListGatewayResponseBodyDataResultSlb.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AhasOn, ahasOn_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(ArmsOn, armsOn_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(Elastic, elastic_);
      DARABONBA_PTR_TO_JSON(ElasticInstanceId, elasticInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticPolicy, elasticPolicy_);
      DARABONBA_PTR_TO_JSON(ElasticReplica, elasticReplica_);
      DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(GatewayEntry, gatewayEntry_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GatewayVersion, gatewayVersion_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InitConfig, initConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetSlb, internetSlb_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(MaintenancePeriod, maintenancePeriod_);
      DARABONBA_PTR_TO_JSON(MseTag, mseTag_);
      DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_TO_JSON(MustUpgrade, mustUpgrade_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Replica, replica_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RollBack, rollBack_);
      DARABONBA_PTR_TO_JSON(Slb, slb_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(SupportWasm, supportWasm_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TotalReplica, totalReplica_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
      DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Vswitch2, vswitch2_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AhasOn, ahasOn_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(ArmsOn, armsOn_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(Elastic, elastic_);
      DARABONBA_PTR_FROM_JSON(ElasticInstanceId, elasticInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticPolicy, elasticPolicy_);
      DARABONBA_PTR_FROM_JSON(ElasticReplica, elasticReplica_);
      DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(GatewayEntry, gatewayEntry_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GatewayVersion, gatewayVersion_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InitConfig, initConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetSlb, internetSlb_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(MaintenancePeriod, maintenancePeriod_);
      DARABONBA_PTR_FROM_JSON(MseTag, mseTag_);
      DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_FROM_JSON(MustUpgrade, mustUpgrade_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Replica, replica_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RollBack, rollBack_);
      DARABONBA_PTR_FROM_JSON(Slb, slb_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(SupportWasm, supportWasm_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TotalReplica, totalReplica_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
      DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Vswitch2, vswitch2_);
    };
    ListGatewayResponseBodyDataResult() = default ;
    ListGatewayResponseBodyDataResult(const ListGatewayResponseBodyDataResult &) = default ;
    ListGatewayResponseBodyDataResult(ListGatewayResponseBodyDataResult &&) = default ;
    ListGatewayResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyDataResult() = default ;
    ListGatewayResponseBodyDataResult& operator=(const ListGatewayResponseBodyDataResult &) = default ;
    ListGatewayResponseBodyDataResult& operator=(ListGatewayResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ahasOn_ == nullptr
        && return this->appVersion_ == nullptr && return this->armsOn_ == nullptr && return this->chargeType_ == nullptr && return this->currentVersion_ == nullptr && return this->elastic_ == nullptr
        && return this->elasticInstanceId_ == nullptr && return this->elasticPolicy_ == nullptr && return this->elasticReplica_ == nullptr && return this->elasticType_ == nullptr && return this->endDate_ == nullptr
        && return this->gatewayEntry_ == nullptr && return this->gatewayType_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->gatewayVersion_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->initConfig_ == nullptr && return this->instanceId_ == nullptr && return this->internetSlb_ == nullptr
        && return this->latestVersion_ == nullptr && return this->maintenancePeriod_ == nullptr && return this->mseTag_ == nullptr && return this->mseVersion_ == nullptr && return this->mustUpgrade_ == nullptr
        && return this->name_ == nullptr && return this->primaryUser_ == nullptr && return this->region_ == nullptr && return this->replica_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->rollBack_ == nullptr && return this->slb_ == nullptr && return this->spec_ == nullptr && return this->status_ == nullptr && return this->statusDesc_ == nullptr
        && return this->supportWasm_ == nullptr && return this->tag_ == nullptr && return this->totalReplica_ == nullptr && return this->upgrade_ == nullptr && return this->versionLifecycle_ == nullptr
        && return this->vpcId_ == nullptr && return this->vswitch2_ == nullptr; };
    // ahasOn Field Functions 
    bool hasAhasOn() const { return this->ahasOn_ != nullptr;};
    void deleteAhasOn() { this->ahasOn_ = nullptr;};
    inline bool ahasOn() const { DARABONBA_PTR_GET_DEFAULT(ahasOn_, false) };
    inline ListGatewayResponseBodyDataResult& setAhasOn(bool ahasOn) { DARABONBA_PTR_SET_VALUE(ahasOn_, ahasOn) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListGatewayResponseBodyDataResult& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // armsOn Field Functions 
    bool hasArmsOn() const { return this->armsOn_ != nullptr;};
    void deleteArmsOn() { this->armsOn_ = nullptr;};
    inline bool armsOn() const { DARABONBA_PTR_GET_DEFAULT(armsOn_, false) };
    inline ListGatewayResponseBodyDataResult& setArmsOn(bool armsOn) { DARABONBA_PTR_SET_VALUE(armsOn_, armsOn) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListGatewayResponseBodyDataResult& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline ListGatewayResponseBodyDataResult& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // elastic Field Functions 
    bool hasElastic() const { return this->elastic_ != nullptr;};
    void deleteElastic() { this->elastic_ = nullptr;};
    inline bool elastic() const { DARABONBA_PTR_GET_DEFAULT(elastic_, false) };
    inline ListGatewayResponseBodyDataResult& setElastic(bool elastic) { DARABONBA_PTR_SET_VALUE(elastic_, elastic) };


    // elasticInstanceId Field Functions 
    bool hasElasticInstanceId() const { return this->elasticInstanceId_ != nullptr;};
    void deleteElasticInstanceId() { this->elasticInstanceId_ = nullptr;};
    inline string elasticInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticInstanceId_, "") };
    inline ListGatewayResponseBodyDataResult& setElasticInstanceId(string elasticInstanceId) { DARABONBA_PTR_SET_VALUE(elasticInstanceId_, elasticInstanceId) };


    // elasticPolicy Field Functions 
    bool hasElasticPolicy() const { return this->elasticPolicy_ != nullptr;};
    void deleteElasticPolicy() { this->elasticPolicy_ = nullptr;};
    inline const Models::ListGatewayResponseBodyDataResultElasticPolicy & elasticPolicy() const { DARABONBA_PTR_GET_CONST(elasticPolicy_, Models::ListGatewayResponseBodyDataResultElasticPolicy) };
    inline Models::ListGatewayResponseBodyDataResultElasticPolicy elasticPolicy() { DARABONBA_PTR_GET(elasticPolicy_, Models::ListGatewayResponseBodyDataResultElasticPolicy) };
    inline ListGatewayResponseBodyDataResult& setElasticPolicy(const Models::ListGatewayResponseBodyDataResultElasticPolicy & elasticPolicy) { DARABONBA_PTR_SET_VALUE(elasticPolicy_, elasticPolicy) };
    inline ListGatewayResponseBodyDataResult& setElasticPolicy(Models::ListGatewayResponseBodyDataResultElasticPolicy && elasticPolicy) { DARABONBA_PTR_SET_RVALUE(elasticPolicy_, elasticPolicy) };


    // elasticReplica Field Functions 
    bool hasElasticReplica() const { return this->elasticReplica_ != nullptr;};
    void deleteElasticReplica() { this->elasticReplica_ = nullptr;};
    inline int32_t elasticReplica() const { DARABONBA_PTR_GET_DEFAULT(elasticReplica_, 0) };
    inline ListGatewayResponseBodyDataResult& setElasticReplica(int32_t elasticReplica) { DARABONBA_PTR_SET_VALUE(elasticReplica_, elasticReplica) };


    // elasticType Field Functions 
    bool hasElasticType() const { return this->elasticType_ != nullptr;};
    void deleteElasticType() { this->elasticType_ = nullptr;};
    inline string elasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
    inline ListGatewayResponseBodyDataResult& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListGatewayResponseBodyDataResult& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // gatewayEntry Field Functions 
    bool hasGatewayEntry() const { return this->gatewayEntry_ != nullptr;};
    void deleteGatewayEntry() { this->gatewayEntry_ = nullptr;};
    inline const vector<Models::ListGatewayResponseBodyDataResultGatewayEntry> & gatewayEntry() const { DARABONBA_PTR_GET_CONST(gatewayEntry_, vector<Models::ListGatewayResponseBodyDataResultGatewayEntry>) };
    inline vector<Models::ListGatewayResponseBodyDataResultGatewayEntry> gatewayEntry() { DARABONBA_PTR_GET(gatewayEntry_, vector<Models::ListGatewayResponseBodyDataResultGatewayEntry>) };
    inline ListGatewayResponseBodyDataResult& setGatewayEntry(const vector<Models::ListGatewayResponseBodyDataResultGatewayEntry> & gatewayEntry) { DARABONBA_PTR_SET_VALUE(gatewayEntry_, gatewayEntry) };
    inline ListGatewayResponseBodyDataResult& setGatewayEntry(vector<Models::ListGatewayResponseBodyDataResultGatewayEntry> && gatewayEntry) { DARABONBA_PTR_SET_RVALUE(gatewayEntry_, gatewayEntry) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListGatewayResponseBodyDataResult& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayResponseBodyDataResult& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gatewayVersion Field Functions 
    bool hasGatewayVersion() const { return this->gatewayVersion_ != nullptr;};
    void deleteGatewayVersion() { this->gatewayVersion_ = nullptr;};
    inline string gatewayVersion() const { DARABONBA_PTR_GET_DEFAULT(gatewayVersion_, "") };
    inline ListGatewayResponseBodyDataResult& setGatewayVersion(string gatewayVersion) { DARABONBA_PTR_SET_VALUE(gatewayVersion_, gatewayVersion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListGatewayResponseBodyDataResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListGatewayResponseBodyDataResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGatewayResponseBodyDataResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // initConfig Field Functions 
    bool hasInitConfig() const { return this->initConfig_ != nullptr;};
    void deleteInitConfig() { this->initConfig_ = nullptr;};
    inline const Models::ListGatewayResponseBodyDataResultInitConfig & initConfig() const { DARABONBA_PTR_GET_CONST(initConfig_, Models::ListGatewayResponseBodyDataResultInitConfig) };
    inline Models::ListGatewayResponseBodyDataResultInitConfig initConfig() { DARABONBA_PTR_GET(initConfig_, Models::ListGatewayResponseBodyDataResultInitConfig) };
    inline ListGatewayResponseBodyDataResult& setInitConfig(const Models::ListGatewayResponseBodyDataResultInitConfig & initConfig) { DARABONBA_PTR_SET_VALUE(initConfig_, initConfig) };
    inline ListGatewayResponseBodyDataResult& setInitConfig(Models::ListGatewayResponseBodyDataResultInitConfig && initConfig) { DARABONBA_PTR_SET_RVALUE(initConfig_, initConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListGatewayResponseBodyDataResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetSlb Field Functions 
    bool hasInternetSlb() const { return this->internetSlb_ != nullptr;};
    void deleteInternetSlb() { this->internetSlb_ = nullptr;};
    inline const vector<Models::ListGatewayResponseBodyDataResultInternetSlb> & internetSlb() const { DARABONBA_PTR_GET_CONST(internetSlb_, vector<Models::ListGatewayResponseBodyDataResultInternetSlb>) };
    inline vector<Models::ListGatewayResponseBodyDataResultInternetSlb> internetSlb() { DARABONBA_PTR_GET(internetSlb_, vector<Models::ListGatewayResponseBodyDataResultInternetSlb>) };
    inline ListGatewayResponseBodyDataResult& setInternetSlb(const vector<Models::ListGatewayResponseBodyDataResultInternetSlb> & internetSlb) { DARABONBA_PTR_SET_VALUE(internetSlb_, internetSlb) };
    inline ListGatewayResponseBodyDataResult& setInternetSlb(vector<Models::ListGatewayResponseBodyDataResultInternetSlb> && internetSlb) { DARABONBA_PTR_SET_RVALUE(internetSlb_, internetSlb) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline ListGatewayResponseBodyDataResult& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // maintenancePeriod Field Functions 
    bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
    void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
    inline const Models::ListGatewayResponseBodyDataResultMaintenancePeriod & maintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, Models::ListGatewayResponseBodyDataResultMaintenancePeriod) };
    inline Models::ListGatewayResponseBodyDataResultMaintenancePeriod maintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, Models::ListGatewayResponseBodyDataResultMaintenancePeriod) };
    inline ListGatewayResponseBodyDataResult& setMaintenancePeriod(const Models::ListGatewayResponseBodyDataResultMaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
    inline ListGatewayResponseBodyDataResult& setMaintenancePeriod(Models::ListGatewayResponseBodyDataResultMaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


    // mseTag Field Functions 
    bool hasMseTag() const { return this->mseTag_ != nullptr;};
    void deleteMseTag() { this->mseTag_ = nullptr;};
    inline string mseTag() const { DARABONBA_PTR_GET_DEFAULT(mseTag_, "") };
    inline ListGatewayResponseBodyDataResult& setMseTag(string mseTag) { DARABONBA_PTR_SET_VALUE(mseTag_, mseTag) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string mseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline ListGatewayResponseBodyDataResult& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // mustUpgrade Field Functions 
    bool hasMustUpgrade() const { return this->mustUpgrade_ != nullptr;};
    void deleteMustUpgrade() { this->mustUpgrade_ = nullptr;};
    inline bool mustUpgrade() const { DARABONBA_PTR_GET_DEFAULT(mustUpgrade_, false) };
    inline ListGatewayResponseBodyDataResult& setMustUpgrade(bool mustUpgrade) { DARABONBA_PTR_SET_VALUE(mustUpgrade_, mustUpgrade) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline ListGatewayResponseBodyDataResult& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListGatewayResponseBodyDataResult& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline ListGatewayResponseBodyDataResult& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListGatewayResponseBodyDataResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rollBack Field Functions 
    bool hasRollBack() const { return this->rollBack_ != nullptr;};
    void deleteRollBack() { this->rollBack_ = nullptr;};
    inline bool rollBack() const { DARABONBA_PTR_GET_DEFAULT(rollBack_, false) };
    inline ListGatewayResponseBodyDataResult& setRollBack(bool rollBack) { DARABONBA_PTR_SET_VALUE(rollBack_, rollBack) };


    // slb Field Functions 
    bool hasSlb() const { return this->slb_ != nullptr;};
    void deleteSlb() { this->slb_ = nullptr;};
    inline const vector<Models::ListGatewayResponseBodyDataResultSlb> & slb() const { DARABONBA_PTR_GET_CONST(slb_, vector<Models::ListGatewayResponseBodyDataResultSlb>) };
    inline vector<Models::ListGatewayResponseBodyDataResultSlb> slb() { DARABONBA_PTR_GET(slb_, vector<Models::ListGatewayResponseBodyDataResultSlb>) };
    inline ListGatewayResponseBodyDataResult& setSlb(const vector<Models::ListGatewayResponseBodyDataResultSlb> & slb) { DARABONBA_PTR_SET_VALUE(slb_, slb) };
    inline ListGatewayResponseBodyDataResult& setSlb(vector<Models::ListGatewayResponseBodyDataResultSlb> && slb) { DARABONBA_PTR_SET_RVALUE(slb_, slb) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListGatewayResponseBodyDataResult& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListGatewayResponseBodyDataResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListGatewayResponseBodyDataResult& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // supportWasm Field Functions 
    bool hasSupportWasm() const { return this->supportWasm_ != nullptr;};
    void deleteSupportWasm() { this->supportWasm_ = nullptr;};
    inline bool supportWasm() const { DARABONBA_PTR_GET_DEFAULT(supportWasm_, false) };
    inline ListGatewayResponseBodyDataResult& setSupportWasm(bool supportWasm) { DARABONBA_PTR_SET_VALUE(supportWasm_, supportWasm) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListGatewayResponseBodyDataResult& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // totalReplica Field Functions 
    bool hasTotalReplica() const { return this->totalReplica_ != nullptr;};
    void deleteTotalReplica() { this->totalReplica_ = nullptr;};
    inline int32_t totalReplica() const { DARABONBA_PTR_GET_DEFAULT(totalReplica_, 0) };
    inline ListGatewayResponseBodyDataResult& setTotalReplica(int32_t totalReplica) { DARABONBA_PTR_SET_VALUE(totalReplica_, totalReplica) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline ListGatewayResponseBodyDataResult& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


    // versionLifecycle Field Functions 
    bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
    void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
    inline string versionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
    inline ListGatewayResponseBodyDataResult& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGatewayResponseBodyDataResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitch2 Field Functions 
    bool hasVswitch2() const { return this->vswitch2_ != nullptr;};
    void deleteVswitch2() { this->vswitch2_ = nullptr;};
    inline string vswitch2() const { DARABONBA_PTR_GET_DEFAULT(vswitch2_, "") };
    inline ListGatewayResponseBodyDataResult& setVswitch2(string vswitch2) { DARABONBA_PTR_SET_VALUE(vswitch2_, vswitch2) };


  protected:
    // Indicates whether Application High Availability Service (AHAS) is activated.
    std::shared_ptr<bool> ahasOn_ = nullptr;
    // The version of the application.
    std::shared_ptr<string> appVersion_ = nullptr;
    // Indicates whether Application Real-Time Monitoring Service (ARMS) is activated.
    std::shared_ptr<bool> armsOn_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The current version of the gateway.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // Indicates whether auto scale-out is enabled.
    std::shared_ptr<bool> elastic_ = nullptr;
    // The ID of the elastic gateway. This parameter is returned if auto scale-out is used.
    std::shared_ptr<string> elasticInstanceId_ = nullptr;
    // The auto scale-out policy.
    std::shared_ptr<Models::ListGatewayResponseBodyDataResultElasticPolicy> elasticPolicy_ = nullptr;
    // The number of replicas that are automatically scaled out.
    std::shared_ptr<int32_t> elasticReplica_ = nullptr;
    // The type of auto scale-out. Valid value:
    // 
    // *   CronHPA: scale-out by time
    std::shared_ptr<string> elasticType_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewayResponseBodyDataResultGatewayEntry>> gatewayEntry_ = nullptr;
    // The gateway type.
    std::shared_ptr<string> gatewayType_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The version of the gateway.
    std::shared_ptr<string> gatewayVersion_ = nullptr;
    // The time when the gateway was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the gateway was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The gateway ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The configurations.
    std::shared_ptr<Models::ListGatewayResponseBodyDataResultInitConfig> initConfig_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The details of the Internet-facing SLB instances.
    std::shared_ptr<vector<Models::ListGatewayResponseBodyDataResultInternetSlb>> internetSlb_ = nullptr;
    // The latest version of the gateway.
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<Models::ListGatewayResponseBodyDataResultMaintenancePeriod> maintenancePeriod_ = nullptr;
    // The resource tag.
    std::shared_ptr<string> mseTag_ = nullptr;
    std::shared_ptr<string> mseVersion_ = nullptr;
    // Indicates whether the instance was forcefully upgraded.
    std::shared_ptr<bool> mustUpgrade_ = nullptr;
    // The gateway name.
    std::shared_ptr<string> name_ = nullptr;
    // The user information.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The number of replicas.
    std::shared_ptr<int32_t> replica_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether rollbacks are allowed.
    std::shared_ptr<bool> rollBack_ = nullptr;
    // The details of Server Load Balancer (SLB) instances.
    std::shared_ptr<vector<Models::ListGatewayResponseBodyDataResultSlb>> slb_ = nullptr;
    // The specifications of the gateway.
    std::shared_ptr<string> spec_ = nullptr;
    // The gateway state. Valid values:
    // 
    // *   0: The gateway is being created.
    // *   1: The gateway failed to be created.
    // *   2: The gateway is running.
    // *   3: The gateway is being changed.
    // *   4: The gateway is scaling in.
    // *   6: The gateway is scaling out.
    // *   8: The gateway is being deleted.
    // *   9: The gateway is suspended and is to be released.
    // *   10: The gateway is restarting.
    // *   11: The gateway is being rebuilt.
    // *   12: The gateway is being upgraded.
    // *   13: The gateway failed to be upgraded.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The description of the gateway state.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // Indicates whether WebAssembly (Wasm) is supported.
    std::shared_ptr<bool> supportWasm_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
    // The total number of replicas, including the number of replicas that are automatically scaled out.
    std::shared_ptr<int32_t> totalReplica_ = nullptr;
    // Indicates whether the instance was upgraded.
    std::shared_ptr<bool> upgrade_ = nullptr;
    std::shared_ptr<string> versionLifecycle_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the gateway belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the secondary vSwitch.
    std::shared_ptr<string> vswitch2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
