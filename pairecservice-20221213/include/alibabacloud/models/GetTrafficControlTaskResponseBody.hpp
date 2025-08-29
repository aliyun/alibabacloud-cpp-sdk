// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTrafficControlTaskResponseBodyTrafficControlTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BehaviorTableMetaId, behaviorTableMetaId_);
      DARABONBA_PTR_TO_JSON(ControlGranularity, controlGranularity_);
      DARABONBA_PTR_TO_JSON(ControlLogic, controlLogic_);
      DARABONBA_PTR_TO_JSON(ControlType, controlType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectiveSceneIds, effectiveSceneIds_);
      DARABONBA_PTR_TO_JSON(EffectiveSceneNames, effectiveSceneNames_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EverPublished, everPublished_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(FlinkResourceId, flinkResourceId_);
      DARABONBA_PTR_TO_JSON(FlinkResourceName, flinkResourceName_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_TO_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_TO_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_TO_JSON(ItemTableMetaId, itemTableMetaId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PreExperimentIds, preExperimentIds_);
      DARABONBA_PTR_TO_JSON(PrepubStatus, prepubStatus_);
      DARABONBA_PTR_TO_JSON(ProdExperimentIds, prodExperimentIds_);
      DARABONBA_PTR_TO_JSON(ProductStatus, productStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceIds, serviceIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatisBehaviorConditionArray, statisBehaviorConditionArray_);
      DARABONBA_PTR_TO_JSON(StatisBehaviorConditionExpress, statisBehaviorConditionExpress_);
      DARABONBA_PTR_TO_JSON(StatisBehaviorConditionType, statisBehaviorConditionType_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargets, trafficControlTargets_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_TO_JSON(UserConditionArray, userConditionArray_);
      DARABONBA_PTR_TO_JSON(UserConditionExpress, userConditionExpress_);
      DARABONBA_PTR_TO_JSON(UserConditionType, userConditionType_);
      DARABONBA_PTR_TO_JSON(UserTableMetaId, userTableMetaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BehaviorTableMetaId, behaviorTableMetaId_);
      DARABONBA_PTR_FROM_JSON(ControlGranularity, controlGranularity_);
      DARABONBA_PTR_FROM_JSON(ControlLogic, controlLogic_);
      DARABONBA_PTR_FROM_JSON(ControlType, controlType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectiveSceneIds, effectiveSceneIds_);
      DARABONBA_PTR_FROM_JSON(EffectiveSceneNames, effectiveSceneNames_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EverPublished, everPublished_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(FlinkResourceId, flinkResourceId_);
      DARABONBA_PTR_FROM_JSON(FlinkResourceName, flinkResourceName_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_FROM_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_FROM_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_FROM_JSON(ItemTableMetaId, itemTableMetaId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PreExperimentIds, preExperimentIds_);
      DARABONBA_PTR_FROM_JSON(PrepubStatus, prepubStatus_);
      DARABONBA_PTR_FROM_JSON(ProdExperimentIds, prodExperimentIds_);
      DARABONBA_PTR_FROM_JSON(ProductStatus, productStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceIds, serviceIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatisBehaviorConditionArray, statisBehaviorConditionArray_);
      DARABONBA_PTR_FROM_JSON(StatisBehaviorConditionExpress, statisBehaviorConditionExpress_);
      DARABONBA_PTR_FROM_JSON(StatisBehaviorConditionType, statisBehaviorConditionType_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargets, trafficControlTargets_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_FROM_JSON(UserConditionArray, userConditionArray_);
      DARABONBA_PTR_FROM_JSON(UserConditionExpress, userConditionExpress_);
      DARABONBA_PTR_FROM_JSON(UserConditionType, userConditionType_);
      DARABONBA_PTR_FROM_JSON(UserTableMetaId, userTableMetaId_);
    };
    GetTrafficControlTaskResponseBody() = default ;
    GetTrafficControlTaskResponseBody(const GetTrafficControlTaskResponseBody &) = default ;
    GetTrafficControlTaskResponseBody(GetTrafficControlTaskResponseBody &&) = default ;
    GetTrafficControlTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskResponseBody() = default ;
    GetTrafficControlTaskResponseBody& operator=(const GetTrafficControlTaskResponseBody &) = default ;
    GetTrafficControlTaskResponseBody& operator=(GetTrafficControlTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->behaviorTableMetaId_ != nullptr
        && this->controlGranularity_ != nullptr && this->controlLogic_ != nullptr && this->controlType_ != nullptr && this->description_ != nullptr && this->effectiveSceneIds_ != nullptr
        && this->effectiveSceneNames_ != nullptr && this->endTime_ != nullptr && this->everPublished_ != nullptr && this->executionTime_ != nullptr && this->flinkResourceId_ != nullptr
        && this->flinkResourceName_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->itemConditionArray_ != nullptr && this->itemConditionExpress_ != nullptr
        && this->itemConditionType_ != nullptr && this->itemTableMetaId_ != nullptr && this->name_ != nullptr && this->preExperimentIds_ != nullptr && this->prepubStatus_ != nullptr
        && this->prodExperimentIds_ != nullptr && this->productStatus_ != nullptr && this->requestId_ != nullptr && this->sceneId_ != nullptr && this->sceneName_ != nullptr
        && this->serviceId_ != nullptr && this->serviceIds_ != nullptr && this->startTime_ != nullptr && this->statisBehaviorConditionArray_ != nullptr && this->statisBehaviorConditionExpress_ != nullptr
        && this->statisBehaviorConditionType_ != nullptr && this->trafficControlTargets_ != nullptr && this->trafficControlTaskId_ != nullptr && this->userConditionArray_ != nullptr && this->userConditionExpress_ != nullptr
        && this->userConditionType_ != nullptr && this->userTableMetaId_ != nullptr; };
    // behaviorTableMetaId Field Functions 
    bool hasBehaviorTableMetaId() const { return this->behaviorTableMetaId_ != nullptr;};
    void deleteBehaviorTableMetaId() { this->behaviorTableMetaId_ = nullptr;};
    inline string behaviorTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(behaviorTableMetaId_, "") };
    inline GetTrafficControlTaskResponseBody& setBehaviorTableMetaId(string behaviorTableMetaId) { DARABONBA_PTR_SET_VALUE(behaviorTableMetaId_, behaviorTableMetaId) };


    // controlGranularity Field Functions 
    bool hasControlGranularity() const { return this->controlGranularity_ != nullptr;};
    void deleteControlGranularity() { this->controlGranularity_ = nullptr;};
    inline string controlGranularity() const { DARABONBA_PTR_GET_DEFAULT(controlGranularity_, "") };
    inline GetTrafficControlTaskResponseBody& setControlGranularity(string controlGranularity) { DARABONBA_PTR_SET_VALUE(controlGranularity_, controlGranularity) };


    // controlLogic Field Functions 
    bool hasControlLogic() const { return this->controlLogic_ != nullptr;};
    void deleteControlLogic() { this->controlLogic_ = nullptr;};
    inline string controlLogic() const { DARABONBA_PTR_GET_DEFAULT(controlLogic_, "") };
    inline GetTrafficControlTaskResponseBody& setControlLogic(string controlLogic) { DARABONBA_PTR_SET_VALUE(controlLogic_, controlLogic) };


    // controlType Field Functions 
    bool hasControlType() const { return this->controlType_ != nullptr;};
    void deleteControlType() { this->controlType_ = nullptr;};
    inline string controlType() const { DARABONBA_PTR_GET_DEFAULT(controlType_, "") };
    inline GetTrafficControlTaskResponseBody& setControlType(string controlType) { DARABONBA_PTR_SET_VALUE(controlType_, controlType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTrafficControlTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectiveSceneIds Field Functions 
    bool hasEffectiveSceneIds() const { return this->effectiveSceneIds_ != nullptr;};
    void deleteEffectiveSceneIds() { this->effectiveSceneIds_ = nullptr;};
    inline const vector<int32_t> & effectiveSceneIds() const { DARABONBA_PTR_GET_CONST(effectiveSceneIds_, vector<int32_t>) };
    inline vector<int32_t> effectiveSceneIds() { DARABONBA_PTR_GET(effectiveSceneIds_, vector<int32_t>) };
    inline GetTrafficControlTaskResponseBody& setEffectiveSceneIds(const vector<int32_t> & effectiveSceneIds) { DARABONBA_PTR_SET_VALUE(effectiveSceneIds_, effectiveSceneIds) };
    inline GetTrafficControlTaskResponseBody& setEffectiveSceneIds(vector<int32_t> && effectiveSceneIds) { DARABONBA_PTR_SET_RVALUE(effectiveSceneIds_, effectiveSceneIds) };


    // effectiveSceneNames Field Functions 
    bool hasEffectiveSceneNames() const { return this->effectiveSceneNames_ != nullptr;};
    void deleteEffectiveSceneNames() { this->effectiveSceneNames_ = nullptr;};
    inline const vector<string> & effectiveSceneNames() const { DARABONBA_PTR_GET_CONST(effectiveSceneNames_, vector<string>) };
    inline vector<string> effectiveSceneNames() { DARABONBA_PTR_GET(effectiveSceneNames_, vector<string>) };
    inline GetTrafficControlTaskResponseBody& setEffectiveSceneNames(const vector<string> & effectiveSceneNames) { DARABONBA_PTR_SET_VALUE(effectiveSceneNames_, effectiveSceneNames) };
    inline GetTrafficControlTaskResponseBody& setEffectiveSceneNames(vector<string> && effectiveSceneNames) { DARABONBA_PTR_SET_RVALUE(effectiveSceneNames_, effectiveSceneNames) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTrafficControlTaskResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // everPublished Field Functions 
    bool hasEverPublished() const { return this->everPublished_ != nullptr;};
    void deleteEverPublished() { this->everPublished_ = nullptr;};
    inline bool everPublished() const { DARABONBA_PTR_GET_DEFAULT(everPublished_, false) };
    inline GetTrafficControlTaskResponseBody& setEverPublished(bool everPublished) { DARABONBA_PTR_SET_VALUE(everPublished_, everPublished) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string executionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline GetTrafficControlTaskResponseBody& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // flinkResourceId Field Functions 
    bool hasFlinkResourceId() const { return this->flinkResourceId_ != nullptr;};
    void deleteFlinkResourceId() { this->flinkResourceId_ = nullptr;};
    inline string flinkResourceId() const { DARABONBA_PTR_GET_DEFAULT(flinkResourceId_, "") };
    inline GetTrafficControlTaskResponseBody& setFlinkResourceId(string flinkResourceId) { DARABONBA_PTR_SET_VALUE(flinkResourceId_, flinkResourceId) };


    // flinkResourceName Field Functions 
    bool hasFlinkResourceName() const { return this->flinkResourceName_ != nullptr;};
    void deleteFlinkResourceName() { this->flinkResourceName_ = nullptr;};
    inline string flinkResourceName() const { DARABONBA_PTR_GET_DEFAULT(flinkResourceName_, "") };
    inline GetTrafficControlTaskResponseBody& setFlinkResourceName(string flinkResourceName) { DARABONBA_PTR_SET_VALUE(flinkResourceName_, flinkResourceName) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetTrafficControlTaskResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetTrafficControlTaskResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // itemConditionArray Field Functions 
    bool hasItemConditionArray() const { return this->itemConditionArray_ != nullptr;};
    void deleteItemConditionArray() { this->itemConditionArray_ = nullptr;};
    inline string itemConditionArray() const { DARABONBA_PTR_GET_DEFAULT(itemConditionArray_, "") };
    inline GetTrafficControlTaskResponseBody& setItemConditionArray(string itemConditionArray) { DARABONBA_PTR_SET_VALUE(itemConditionArray_, itemConditionArray) };


    // itemConditionExpress Field Functions 
    bool hasItemConditionExpress() const { return this->itemConditionExpress_ != nullptr;};
    void deleteItemConditionExpress() { this->itemConditionExpress_ = nullptr;};
    inline string itemConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(itemConditionExpress_, "") };
    inline GetTrafficControlTaskResponseBody& setItemConditionExpress(string itemConditionExpress) { DARABONBA_PTR_SET_VALUE(itemConditionExpress_, itemConditionExpress) };


    // itemConditionType Field Functions 
    bool hasItemConditionType() const { return this->itemConditionType_ != nullptr;};
    void deleteItemConditionType() { this->itemConditionType_ = nullptr;};
    inline string itemConditionType() const { DARABONBA_PTR_GET_DEFAULT(itemConditionType_, "") };
    inline GetTrafficControlTaskResponseBody& setItemConditionType(string itemConditionType) { DARABONBA_PTR_SET_VALUE(itemConditionType_, itemConditionType) };


    // itemTableMetaId Field Functions 
    bool hasItemTableMetaId() const { return this->itemTableMetaId_ != nullptr;};
    void deleteItemTableMetaId() { this->itemTableMetaId_ = nullptr;};
    inline string itemTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(itemTableMetaId_, "") };
    inline GetTrafficControlTaskResponseBody& setItemTableMetaId(string itemTableMetaId) { DARABONBA_PTR_SET_VALUE(itemTableMetaId_, itemTableMetaId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTrafficControlTaskResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // preExperimentIds Field Functions 
    bool hasPreExperimentIds() const { return this->preExperimentIds_ != nullptr;};
    void deletePreExperimentIds() { this->preExperimentIds_ = nullptr;};
    inline string preExperimentIds() const { DARABONBA_PTR_GET_DEFAULT(preExperimentIds_, "") };
    inline GetTrafficControlTaskResponseBody& setPreExperimentIds(string preExperimentIds) { DARABONBA_PTR_SET_VALUE(preExperimentIds_, preExperimentIds) };


    // prepubStatus Field Functions 
    bool hasPrepubStatus() const { return this->prepubStatus_ != nullptr;};
    void deletePrepubStatus() { this->prepubStatus_ = nullptr;};
    inline string prepubStatus() const { DARABONBA_PTR_GET_DEFAULT(prepubStatus_, "") };
    inline GetTrafficControlTaskResponseBody& setPrepubStatus(string prepubStatus) { DARABONBA_PTR_SET_VALUE(prepubStatus_, prepubStatus) };


    // prodExperimentIds Field Functions 
    bool hasProdExperimentIds() const { return this->prodExperimentIds_ != nullptr;};
    void deleteProdExperimentIds() { this->prodExperimentIds_ = nullptr;};
    inline string prodExperimentIds() const { DARABONBA_PTR_GET_DEFAULT(prodExperimentIds_, "") };
    inline GetTrafficControlTaskResponseBody& setProdExperimentIds(string prodExperimentIds) { DARABONBA_PTR_SET_VALUE(prodExperimentIds_, prodExperimentIds) };


    // productStatus Field Functions 
    bool hasProductStatus() const { return this->productStatus_ != nullptr;};
    void deleteProductStatus() { this->productStatus_ = nullptr;};
    inline string productStatus() const { DARABONBA_PTR_GET_DEFAULT(productStatus_, "") };
    inline GetTrafficControlTaskResponseBody& setProductStatus(string productStatus) { DARABONBA_PTR_SET_VALUE(productStatus_, productStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrafficControlTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetTrafficControlTaskResponseBody& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline GetTrafficControlTaskResponseBody& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetTrafficControlTaskResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<int32_t> & serviceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<int32_t>) };
    inline vector<int32_t> serviceIds() { DARABONBA_PTR_GET(serviceIds_, vector<int32_t>) };
    inline GetTrafficControlTaskResponseBody& setServiceIds(const vector<int32_t> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline GetTrafficControlTaskResponseBody& setServiceIds(vector<int32_t> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetTrafficControlTaskResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisBehaviorConditionArray Field Functions 
    bool hasStatisBehaviorConditionArray() const { return this->statisBehaviorConditionArray_ != nullptr;};
    void deleteStatisBehaviorConditionArray() { this->statisBehaviorConditionArray_ = nullptr;};
    inline string statisBehaviorConditionArray() const { DARABONBA_PTR_GET_DEFAULT(statisBehaviorConditionArray_, "") };
    inline GetTrafficControlTaskResponseBody& setStatisBehaviorConditionArray(string statisBehaviorConditionArray) { DARABONBA_PTR_SET_VALUE(statisBehaviorConditionArray_, statisBehaviorConditionArray) };


    // statisBehaviorConditionExpress Field Functions 
    bool hasStatisBehaviorConditionExpress() const { return this->statisBehaviorConditionExpress_ != nullptr;};
    void deleteStatisBehaviorConditionExpress() { this->statisBehaviorConditionExpress_ = nullptr;};
    inline string statisBehaviorConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(statisBehaviorConditionExpress_, "") };
    inline GetTrafficControlTaskResponseBody& setStatisBehaviorConditionExpress(string statisBehaviorConditionExpress) { DARABONBA_PTR_SET_VALUE(statisBehaviorConditionExpress_, statisBehaviorConditionExpress) };


    // statisBehaviorConditionType Field Functions 
    bool hasStatisBehaviorConditionType() const { return this->statisBehaviorConditionType_ != nullptr;};
    void deleteStatisBehaviorConditionType() { this->statisBehaviorConditionType_ = nullptr;};
    inline string statisBehaviorConditionType() const { DARABONBA_PTR_GET_DEFAULT(statisBehaviorConditionType_, "") };
    inline GetTrafficControlTaskResponseBody& setStatisBehaviorConditionType(string statisBehaviorConditionType) { DARABONBA_PTR_SET_VALUE(statisBehaviorConditionType_, statisBehaviorConditionType) };


    // trafficControlTargets Field Functions 
    bool hasTrafficControlTargets() const { return this->trafficControlTargets_ != nullptr;};
    void deleteTrafficControlTargets() { this->trafficControlTargets_ = nullptr;};
    inline const vector<GetTrafficControlTaskResponseBodyTrafficControlTargets> & trafficControlTargets() const { DARABONBA_PTR_GET_CONST(trafficControlTargets_, vector<GetTrafficControlTaskResponseBodyTrafficControlTargets>) };
    inline vector<GetTrafficControlTaskResponseBodyTrafficControlTargets> trafficControlTargets() { DARABONBA_PTR_GET(trafficControlTargets_, vector<GetTrafficControlTaskResponseBodyTrafficControlTargets>) };
    inline GetTrafficControlTaskResponseBody& setTrafficControlTargets(const vector<GetTrafficControlTaskResponseBodyTrafficControlTargets> & trafficControlTargets) { DARABONBA_PTR_SET_VALUE(trafficControlTargets_, trafficControlTargets) };
    inline GetTrafficControlTaskResponseBody& setTrafficControlTargets(vector<GetTrafficControlTaskResponseBodyTrafficControlTargets> && trafficControlTargets) { DARABONBA_PTR_SET_RVALUE(trafficControlTargets_, trafficControlTargets) };


    // trafficControlTaskId Field Functions 
    bool hasTrafficControlTaskId() const { return this->trafficControlTaskId_ != nullptr;};
    void deleteTrafficControlTaskId() { this->trafficControlTaskId_ = nullptr;};
    inline string trafficControlTaskId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskId_, "") };
    inline GetTrafficControlTaskResponseBody& setTrafficControlTaskId(string trafficControlTaskId) { DARABONBA_PTR_SET_VALUE(trafficControlTaskId_, trafficControlTaskId) };


    // userConditionArray Field Functions 
    bool hasUserConditionArray() const { return this->userConditionArray_ != nullptr;};
    void deleteUserConditionArray() { this->userConditionArray_ = nullptr;};
    inline string userConditionArray() const { DARABONBA_PTR_GET_DEFAULT(userConditionArray_, "") };
    inline GetTrafficControlTaskResponseBody& setUserConditionArray(string userConditionArray) { DARABONBA_PTR_SET_VALUE(userConditionArray_, userConditionArray) };


    // userConditionExpress Field Functions 
    bool hasUserConditionExpress() const { return this->userConditionExpress_ != nullptr;};
    void deleteUserConditionExpress() { this->userConditionExpress_ = nullptr;};
    inline string userConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(userConditionExpress_, "") };
    inline GetTrafficControlTaskResponseBody& setUserConditionExpress(string userConditionExpress) { DARABONBA_PTR_SET_VALUE(userConditionExpress_, userConditionExpress) };


    // userConditionType Field Functions 
    bool hasUserConditionType() const { return this->userConditionType_ != nullptr;};
    void deleteUserConditionType() { this->userConditionType_ = nullptr;};
    inline string userConditionType() const { DARABONBA_PTR_GET_DEFAULT(userConditionType_, "") };
    inline GetTrafficControlTaskResponseBody& setUserConditionType(string userConditionType) { DARABONBA_PTR_SET_VALUE(userConditionType_, userConditionType) };


    // userTableMetaId Field Functions 
    bool hasUserTableMetaId() const { return this->userTableMetaId_ != nullptr;};
    void deleteUserTableMetaId() { this->userTableMetaId_ = nullptr;};
    inline string userTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(userTableMetaId_, "") };
    inline GetTrafficControlTaskResponseBody& setUserTableMetaId(string userTableMetaId) { DARABONBA_PTR_SET_VALUE(userTableMetaId_, userTableMetaId) };


  protected:
    std::shared_ptr<string> behaviorTableMetaId_ = nullptr;
    std::shared_ptr<string> controlGranularity_ = nullptr;
    std::shared_ptr<string> controlLogic_ = nullptr;
    std::shared_ptr<string> controlType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<int32_t>> effectiveSceneIds_ = nullptr;
    std::shared_ptr<vector<string>> effectiveSceneNames_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<bool> everPublished_ = nullptr;
    std::shared_ptr<string> executionTime_ = nullptr;
    std::shared_ptr<string> flinkResourceId_ = nullptr;
    std::shared_ptr<string> flinkResourceName_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> itemConditionArray_ = nullptr;
    std::shared_ptr<string> itemConditionExpress_ = nullptr;
    std::shared_ptr<string> itemConditionType_ = nullptr;
    std::shared_ptr<string> itemTableMetaId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> preExperimentIds_ = nullptr;
    std::shared_ptr<string> prepubStatus_ = nullptr;
    std::shared_ptr<string> prodExperimentIds_ = nullptr;
    std::shared_ptr<string> productStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<vector<int32_t>> serviceIds_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> statisBehaviorConditionArray_ = nullptr;
    std::shared_ptr<string> statisBehaviorConditionExpress_ = nullptr;
    std::shared_ptr<string> statisBehaviorConditionType_ = nullptr;
    std::shared_ptr<vector<GetTrafficControlTaskResponseBodyTrafficControlTargets>> trafficControlTargets_ = nullptr;
    std::shared_ptr<string> trafficControlTaskId_ = nullptr;
    std::shared_ptr<string> userConditionArray_ = nullptr;
    std::shared_ptr<string> userConditionExpress_ = nullptr;
    std::shared_ptr<string> userConditionType_ = nullptr;
    std::shared_ptr<string> userTableMetaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
