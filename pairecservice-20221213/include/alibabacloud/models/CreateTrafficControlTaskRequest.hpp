// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateTrafficControlTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficControlTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BehaviorTableMetaId, behaviorTableMetaId_);
      DARABONBA_PTR_TO_JSON(ControlGranularity, controlGranularity_);
      DARABONBA_PTR_TO_JSON(ControlLogic, controlLogic_);
      DARABONBA_PTR_TO_JSON(ControlType, controlType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectiveSceneIds, effectiveSceneIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(FlinkResourceId, flinkResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_TO_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_TO_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_TO_JSON(ItemTableMetaId, itemTableMetaId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PreExperimentIds, preExperimentIds_);
      DARABONBA_PTR_TO_JSON(ProdExperimentIds, prodExperimentIds_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceIds, serviceIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatisBehaviorConditionArray, statisBehaviorConditionArray_);
      DARABONBA_PTR_TO_JSON(StatisBehaviorConditionExpress, statisBehaviorConditionExpress_);
      DARABONBA_PTR_TO_JSON(StatisBehaviorConditionType, statisBehaviorConditionType_);
      DARABONBA_PTR_TO_JSON(TrafficControlTargets, trafficControlTargets_);
      DARABONBA_PTR_TO_JSON(UserConditionArray, userConditionArray_);
      DARABONBA_PTR_TO_JSON(UserConditionExpress, userConditionExpress_);
      DARABONBA_PTR_TO_JSON(UserConditionType, userConditionType_);
      DARABONBA_PTR_TO_JSON(UserTableMetaId, userTableMetaId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficControlTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BehaviorTableMetaId, behaviorTableMetaId_);
      DARABONBA_PTR_FROM_JSON(ControlGranularity, controlGranularity_);
      DARABONBA_PTR_FROM_JSON(ControlLogic, controlLogic_);
      DARABONBA_PTR_FROM_JSON(ControlType, controlType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectiveSceneIds, effectiveSceneIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(FlinkResourceId, flinkResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemConditionArray, itemConditionArray_);
      DARABONBA_PTR_FROM_JSON(ItemConditionExpress, itemConditionExpress_);
      DARABONBA_PTR_FROM_JSON(ItemConditionType, itemConditionType_);
      DARABONBA_PTR_FROM_JSON(ItemTableMetaId, itemTableMetaId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PreExperimentIds, preExperimentIds_);
      DARABONBA_PTR_FROM_JSON(ProdExperimentIds, prodExperimentIds_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceIds, serviceIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatisBehaviorConditionArray, statisBehaviorConditionArray_);
      DARABONBA_PTR_FROM_JSON(StatisBehaviorConditionExpress, statisBehaviorConditionExpress_);
      DARABONBA_PTR_FROM_JSON(StatisBehaviorConditionType, statisBehaviorConditionType_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTargets, trafficControlTargets_);
      DARABONBA_PTR_FROM_JSON(UserConditionArray, userConditionArray_);
      DARABONBA_PTR_FROM_JSON(UserConditionExpress, userConditionExpress_);
      DARABONBA_PTR_FROM_JSON(UserConditionType, userConditionType_);
      DARABONBA_PTR_FROM_JSON(UserTableMetaId, userTableMetaId_);
    };
    CreateTrafficControlTaskRequest() = default ;
    CreateTrafficControlTaskRequest(const CreateTrafficControlTaskRequest &) = default ;
    CreateTrafficControlTaskRequest(CreateTrafficControlTaskRequest &&) = default ;
    CreateTrafficControlTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficControlTaskRequest() = default ;
    CreateTrafficControlTaskRequest& operator=(const CreateTrafficControlTaskRequest &) = default ;
    CreateTrafficControlTaskRequest& operator=(CreateTrafficControlTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficControlTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficControlTargets& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(ItemConditionArray, itemConditionArray_);
        DARABONBA_PTR_TO_JSON(ItemConditionExpress, itemConditionExpress_);
        DARABONBA_PTR_TO_JSON(ItemConditionType, itemConditionType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NewProductRegulation, newProductRegulation_);
        DARABONBA_PTR_TO_JSON(RecallName, recallName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StatisPeriod, statisPeriod_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ToleranceValue, toleranceValue_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficControlTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(ItemConditionArray, itemConditionArray_);
        DARABONBA_PTR_FROM_JSON(ItemConditionExpress, itemConditionExpress_);
        DARABONBA_PTR_FROM_JSON(ItemConditionType, itemConditionType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NewProductRegulation, newProductRegulation_);
        DARABONBA_PTR_FROM_JSON(RecallName, recallName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StatisPeriod, statisPeriod_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ToleranceValue, toleranceValue_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TrafficControlTargets() = default ;
      TrafficControlTargets(const TrafficControlTargets &) = default ;
      TrafficControlTargets(TrafficControlTargets &&) = default ;
      TrafficControlTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficControlTargets() = default ;
      TrafficControlTargets& operator=(const TrafficControlTargets &) = default ;
      TrafficControlTargets& operator=(TrafficControlTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->event_ == nullptr && this->itemConditionArray_ == nullptr && this->itemConditionExpress_ == nullptr && this->itemConditionType_ == nullptr && this->name_ == nullptr
        && this->newProductRegulation_ == nullptr && this->recallName_ == nullptr && this->startTime_ == nullptr && this->statisPeriod_ == nullptr && this->status_ == nullptr
        && this->toleranceValue_ == nullptr && this->value_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TrafficControlTargets& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline TrafficControlTargets& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // itemConditionArray Field Functions 
      bool hasItemConditionArray() const { return this->itemConditionArray_ != nullptr;};
      void deleteItemConditionArray() { this->itemConditionArray_ = nullptr;};
      inline string getItemConditionArray() const { DARABONBA_PTR_GET_DEFAULT(itemConditionArray_, "") };
      inline TrafficControlTargets& setItemConditionArray(string itemConditionArray) { DARABONBA_PTR_SET_VALUE(itemConditionArray_, itemConditionArray) };


      // itemConditionExpress Field Functions 
      bool hasItemConditionExpress() const { return this->itemConditionExpress_ != nullptr;};
      void deleteItemConditionExpress() { this->itemConditionExpress_ = nullptr;};
      inline string getItemConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(itemConditionExpress_, "") };
      inline TrafficControlTargets& setItemConditionExpress(string itemConditionExpress) { DARABONBA_PTR_SET_VALUE(itemConditionExpress_, itemConditionExpress) };


      // itemConditionType Field Functions 
      bool hasItemConditionType() const { return this->itemConditionType_ != nullptr;};
      void deleteItemConditionType() { this->itemConditionType_ = nullptr;};
      inline string getItemConditionType() const { DARABONBA_PTR_GET_DEFAULT(itemConditionType_, "") };
      inline TrafficControlTargets& setItemConditionType(string itemConditionType) { DARABONBA_PTR_SET_VALUE(itemConditionType_, itemConditionType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TrafficControlTargets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // newProductRegulation Field Functions 
      bool hasNewProductRegulation() const { return this->newProductRegulation_ != nullptr;};
      void deleteNewProductRegulation() { this->newProductRegulation_ = nullptr;};
      inline bool getNewProductRegulation() const { DARABONBA_PTR_GET_DEFAULT(newProductRegulation_, false) };
      inline TrafficControlTargets& setNewProductRegulation(bool newProductRegulation) { DARABONBA_PTR_SET_VALUE(newProductRegulation_, newProductRegulation) };


      // recallName Field Functions 
      bool hasRecallName() const { return this->recallName_ != nullptr;};
      void deleteRecallName() { this->recallName_ = nullptr;};
      inline string getRecallName() const { DARABONBA_PTR_GET_DEFAULT(recallName_, "") };
      inline TrafficControlTargets& setRecallName(string recallName) { DARABONBA_PTR_SET_VALUE(recallName_, recallName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TrafficControlTargets& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // statisPeriod Field Functions 
      bool hasStatisPeriod() const { return this->statisPeriod_ != nullptr;};
      void deleteStatisPeriod() { this->statisPeriod_ = nullptr;};
      inline string getStatisPeriod() const { DARABONBA_PTR_GET_DEFAULT(statisPeriod_, "") };
      inline TrafficControlTargets& setStatisPeriod(string statisPeriod) { DARABONBA_PTR_SET_VALUE(statisPeriod_, statisPeriod) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TrafficControlTargets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // toleranceValue Field Functions 
      bool hasToleranceValue() const { return this->toleranceValue_ != nullptr;};
      void deleteToleranceValue() { this->toleranceValue_ = nullptr;};
      inline int64_t getToleranceValue() const { DARABONBA_PTR_GET_DEFAULT(toleranceValue_, 0L) };
      inline TrafficControlTargets& setToleranceValue(int64_t toleranceValue) { DARABONBA_PTR_SET_VALUE(toleranceValue_, toleranceValue) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline TrafficControlTargets& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> event_ {};
      shared_ptr<string> itemConditionArray_ {};
      shared_ptr<string> itemConditionExpress_ {};
      shared_ptr<string> itemConditionType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> newProductRegulation_ {};
      shared_ptr<string> recallName_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> statisPeriod_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> toleranceValue_ {};
      shared_ptr<float> value_ {};
    };

    virtual bool empty() const override { return this->behaviorTableMetaId_ == nullptr
        && this->controlGranularity_ == nullptr && this->controlLogic_ == nullptr && this->controlType_ == nullptr && this->description_ == nullptr && this->effectiveSceneIds_ == nullptr
        && this->endTime_ == nullptr && this->executionTime_ == nullptr && this->flinkResourceId_ == nullptr && this->instanceId_ == nullptr && this->itemConditionArray_ == nullptr
        && this->itemConditionExpress_ == nullptr && this->itemConditionType_ == nullptr && this->itemTableMetaId_ == nullptr && this->name_ == nullptr && this->preExperimentIds_ == nullptr
        && this->prodExperimentIds_ == nullptr && this->sceneId_ == nullptr && this->serviceId_ == nullptr && this->serviceIds_ == nullptr && this->startTime_ == nullptr
        && this->statisBehaviorConditionArray_ == nullptr && this->statisBehaviorConditionExpress_ == nullptr && this->statisBehaviorConditionType_ == nullptr && this->trafficControlTargets_ == nullptr && this->userConditionArray_ == nullptr
        && this->userConditionExpress_ == nullptr && this->userConditionType_ == nullptr && this->userTableMetaId_ == nullptr; };
    // behaviorTableMetaId Field Functions 
    bool hasBehaviorTableMetaId() const { return this->behaviorTableMetaId_ != nullptr;};
    void deleteBehaviorTableMetaId() { this->behaviorTableMetaId_ = nullptr;};
    inline string getBehaviorTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(behaviorTableMetaId_, "") };
    inline CreateTrafficControlTaskRequest& setBehaviorTableMetaId(string behaviorTableMetaId) { DARABONBA_PTR_SET_VALUE(behaviorTableMetaId_, behaviorTableMetaId) };


    // controlGranularity Field Functions 
    bool hasControlGranularity() const { return this->controlGranularity_ != nullptr;};
    void deleteControlGranularity() { this->controlGranularity_ = nullptr;};
    inline string getControlGranularity() const { DARABONBA_PTR_GET_DEFAULT(controlGranularity_, "") };
    inline CreateTrafficControlTaskRequest& setControlGranularity(string controlGranularity) { DARABONBA_PTR_SET_VALUE(controlGranularity_, controlGranularity) };


    // controlLogic Field Functions 
    bool hasControlLogic() const { return this->controlLogic_ != nullptr;};
    void deleteControlLogic() { this->controlLogic_ = nullptr;};
    inline string getControlLogic() const { DARABONBA_PTR_GET_DEFAULT(controlLogic_, "") };
    inline CreateTrafficControlTaskRequest& setControlLogic(string controlLogic) { DARABONBA_PTR_SET_VALUE(controlLogic_, controlLogic) };


    // controlType Field Functions 
    bool hasControlType() const { return this->controlType_ != nullptr;};
    void deleteControlType() { this->controlType_ = nullptr;};
    inline string getControlType() const { DARABONBA_PTR_GET_DEFAULT(controlType_, "") };
    inline CreateTrafficControlTaskRequest& setControlType(string controlType) { DARABONBA_PTR_SET_VALUE(controlType_, controlType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTrafficControlTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectiveSceneIds Field Functions 
    bool hasEffectiveSceneIds() const { return this->effectiveSceneIds_ != nullptr;};
    void deleteEffectiveSceneIds() { this->effectiveSceneIds_ = nullptr;};
    inline const vector<int32_t> & getEffectiveSceneIds() const { DARABONBA_PTR_GET_CONST(effectiveSceneIds_, vector<int32_t>) };
    inline vector<int32_t> getEffectiveSceneIds() { DARABONBA_PTR_GET(effectiveSceneIds_, vector<int32_t>) };
    inline CreateTrafficControlTaskRequest& setEffectiveSceneIds(const vector<int32_t> & effectiveSceneIds) { DARABONBA_PTR_SET_VALUE(effectiveSceneIds_, effectiveSceneIds) };
    inline CreateTrafficControlTaskRequest& setEffectiveSceneIds(vector<int32_t> && effectiveSceneIds) { DARABONBA_PTR_SET_RVALUE(effectiveSceneIds_, effectiveSceneIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateTrafficControlTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline CreateTrafficControlTaskRequest& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // flinkResourceId Field Functions 
    bool hasFlinkResourceId() const { return this->flinkResourceId_ != nullptr;};
    void deleteFlinkResourceId() { this->flinkResourceId_ = nullptr;};
    inline string getFlinkResourceId() const { DARABONBA_PTR_GET_DEFAULT(flinkResourceId_, "") };
    inline CreateTrafficControlTaskRequest& setFlinkResourceId(string flinkResourceId) { DARABONBA_PTR_SET_VALUE(flinkResourceId_, flinkResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateTrafficControlTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemConditionArray Field Functions 
    bool hasItemConditionArray() const { return this->itemConditionArray_ != nullptr;};
    void deleteItemConditionArray() { this->itemConditionArray_ = nullptr;};
    inline string getItemConditionArray() const { DARABONBA_PTR_GET_DEFAULT(itemConditionArray_, "") };
    inline CreateTrafficControlTaskRequest& setItemConditionArray(string itemConditionArray) { DARABONBA_PTR_SET_VALUE(itemConditionArray_, itemConditionArray) };


    // itemConditionExpress Field Functions 
    bool hasItemConditionExpress() const { return this->itemConditionExpress_ != nullptr;};
    void deleteItemConditionExpress() { this->itemConditionExpress_ = nullptr;};
    inline string getItemConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(itemConditionExpress_, "") };
    inline CreateTrafficControlTaskRequest& setItemConditionExpress(string itemConditionExpress) { DARABONBA_PTR_SET_VALUE(itemConditionExpress_, itemConditionExpress) };


    // itemConditionType Field Functions 
    bool hasItemConditionType() const { return this->itemConditionType_ != nullptr;};
    void deleteItemConditionType() { this->itemConditionType_ = nullptr;};
    inline string getItemConditionType() const { DARABONBA_PTR_GET_DEFAULT(itemConditionType_, "") };
    inline CreateTrafficControlTaskRequest& setItemConditionType(string itemConditionType) { DARABONBA_PTR_SET_VALUE(itemConditionType_, itemConditionType) };


    // itemTableMetaId Field Functions 
    bool hasItemTableMetaId() const { return this->itemTableMetaId_ != nullptr;};
    void deleteItemTableMetaId() { this->itemTableMetaId_ = nullptr;};
    inline string getItemTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(itemTableMetaId_, "") };
    inline CreateTrafficControlTaskRequest& setItemTableMetaId(string itemTableMetaId) { DARABONBA_PTR_SET_VALUE(itemTableMetaId_, itemTableMetaId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTrafficControlTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // preExperimentIds Field Functions 
    bool hasPreExperimentIds() const { return this->preExperimentIds_ != nullptr;};
    void deletePreExperimentIds() { this->preExperimentIds_ = nullptr;};
    inline string getPreExperimentIds() const { DARABONBA_PTR_GET_DEFAULT(preExperimentIds_, "") };
    inline CreateTrafficControlTaskRequest& setPreExperimentIds(string preExperimentIds) { DARABONBA_PTR_SET_VALUE(preExperimentIds_, preExperimentIds) };


    // prodExperimentIds Field Functions 
    bool hasProdExperimentIds() const { return this->prodExperimentIds_ != nullptr;};
    void deleteProdExperimentIds() { this->prodExperimentIds_ = nullptr;};
    inline string getProdExperimentIds() const { DARABONBA_PTR_GET_DEFAULT(prodExperimentIds_, "") };
    inline CreateTrafficControlTaskRequest& setProdExperimentIds(string prodExperimentIds) { DARABONBA_PTR_SET_VALUE(prodExperimentIds_, prodExperimentIds) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreateTrafficControlTaskRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateTrafficControlTaskRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<int32_t> & getServiceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<int32_t>) };
    inline vector<int32_t> getServiceIds() { DARABONBA_PTR_GET(serviceIds_, vector<int32_t>) };
    inline CreateTrafficControlTaskRequest& setServiceIds(const vector<int32_t> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline CreateTrafficControlTaskRequest& setServiceIds(vector<int32_t> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateTrafficControlTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisBehaviorConditionArray Field Functions 
    bool hasStatisBehaviorConditionArray() const { return this->statisBehaviorConditionArray_ != nullptr;};
    void deleteStatisBehaviorConditionArray() { this->statisBehaviorConditionArray_ = nullptr;};
    inline string getStatisBehaviorConditionArray() const { DARABONBA_PTR_GET_DEFAULT(statisBehaviorConditionArray_, "") };
    inline CreateTrafficControlTaskRequest& setStatisBehaviorConditionArray(string statisBehaviorConditionArray) { DARABONBA_PTR_SET_VALUE(statisBehaviorConditionArray_, statisBehaviorConditionArray) };


    // statisBehaviorConditionExpress Field Functions 
    bool hasStatisBehaviorConditionExpress() const { return this->statisBehaviorConditionExpress_ != nullptr;};
    void deleteStatisBehaviorConditionExpress() { this->statisBehaviorConditionExpress_ = nullptr;};
    inline string getStatisBehaviorConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(statisBehaviorConditionExpress_, "") };
    inline CreateTrafficControlTaskRequest& setStatisBehaviorConditionExpress(string statisBehaviorConditionExpress) { DARABONBA_PTR_SET_VALUE(statisBehaviorConditionExpress_, statisBehaviorConditionExpress) };


    // statisBehaviorConditionType Field Functions 
    bool hasStatisBehaviorConditionType() const { return this->statisBehaviorConditionType_ != nullptr;};
    void deleteStatisBehaviorConditionType() { this->statisBehaviorConditionType_ = nullptr;};
    inline string getStatisBehaviorConditionType() const { DARABONBA_PTR_GET_DEFAULT(statisBehaviorConditionType_, "") };
    inline CreateTrafficControlTaskRequest& setStatisBehaviorConditionType(string statisBehaviorConditionType) { DARABONBA_PTR_SET_VALUE(statisBehaviorConditionType_, statisBehaviorConditionType) };


    // trafficControlTargets Field Functions 
    bool hasTrafficControlTargets() const { return this->trafficControlTargets_ != nullptr;};
    void deleteTrafficControlTargets() { this->trafficControlTargets_ = nullptr;};
    inline const vector<CreateTrafficControlTaskRequest::TrafficControlTargets> & getTrafficControlTargets() const { DARABONBA_PTR_GET_CONST(trafficControlTargets_, vector<CreateTrafficControlTaskRequest::TrafficControlTargets>) };
    inline vector<CreateTrafficControlTaskRequest::TrafficControlTargets> getTrafficControlTargets() { DARABONBA_PTR_GET(trafficControlTargets_, vector<CreateTrafficControlTaskRequest::TrafficControlTargets>) };
    inline CreateTrafficControlTaskRequest& setTrafficControlTargets(const vector<CreateTrafficControlTaskRequest::TrafficControlTargets> & trafficControlTargets) { DARABONBA_PTR_SET_VALUE(trafficControlTargets_, trafficControlTargets) };
    inline CreateTrafficControlTaskRequest& setTrafficControlTargets(vector<CreateTrafficControlTaskRequest::TrafficControlTargets> && trafficControlTargets) { DARABONBA_PTR_SET_RVALUE(trafficControlTargets_, trafficControlTargets) };


    // userConditionArray Field Functions 
    bool hasUserConditionArray() const { return this->userConditionArray_ != nullptr;};
    void deleteUserConditionArray() { this->userConditionArray_ = nullptr;};
    inline string getUserConditionArray() const { DARABONBA_PTR_GET_DEFAULT(userConditionArray_, "") };
    inline CreateTrafficControlTaskRequest& setUserConditionArray(string userConditionArray) { DARABONBA_PTR_SET_VALUE(userConditionArray_, userConditionArray) };


    // userConditionExpress Field Functions 
    bool hasUserConditionExpress() const { return this->userConditionExpress_ != nullptr;};
    void deleteUserConditionExpress() { this->userConditionExpress_ = nullptr;};
    inline string getUserConditionExpress() const { DARABONBA_PTR_GET_DEFAULT(userConditionExpress_, "") };
    inline CreateTrafficControlTaskRequest& setUserConditionExpress(string userConditionExpress) { DARABONBA_PTR_SET_VALUE(userConditionExpress_, userConditionExpress) };


    // userConditionType Field Functions 
    bool hasUserConditionType() const { return this->userConditionType_ != nullptr;};
    void deleteUserConditionType() { this->userConditionType_ = nullptr;};
    inline string getUserConditionType() const { DARABONBA_PTR_GET_DEFAULT(userConditionType_, "") };
    inline CreateTrafficControlTaskRequest& setUserConditionType(string userConditionType) { DARABONBA_PTR_SET_VALUE(userConditionType_, userConditionType) };


    // userTableMetaId Field Functions 
    bool hasUserTableMetaId() const { return this->userTableMetaId_ != nullptr;};
    void deleteUserTableMetaId() { this->userTableMetaId_ = nullptr;};
    inline string getUserTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(userTableMetaId_, "") };
    inline CreateTrafficControlTaskRequest& setUserTableMetaId(string userTableMetaId) { DARABONBA_PTR_SET_VALUE(userTableMetaId_, userTableMetaId) };


  protected:
    shared_ptr<string> behaviorTableMetaId_ {};
    shared_ptr<string> controlGranularity_ {};
    shared_ptr<string> controlLogic_ {};
    shared_ptr<string> controlType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<int32_t>> effectiveSceneIds_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> executionTime_ {};
    shared_ptr<string> flinkResourceId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> itemConditionArray_ {};
    shared_ptr<string> itemConditionExpress_ {};
    shared_ptr<string> itemConditionType_ {};
    shared_ptr<string> itemTableMetaId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> preExperimentIds_ {};
    shared_ptr<string> prodExperimentIds_ {};
    shared_ptr<string> sceneId_ {};
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    shared_ptr<vector<int32_t>> serviceIds_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> statisBehaviorConditionArray_ {};
    shared_ptr<string> statisBehaviorConditionExpress_ {};
    shared_ptr<string> statisBehaviorConditionType_ {};
    shared_ptr<vector<CreateTrafficControlTaskRequest::TrafficControlTargets>> trafficControlTargets_ {};
    shared_ptr<string> userConditionArray_ {};
    shared_ptr<string> userConditionExpress_ {};
    shared_ptr<string> userConditionType_ {};
    shared_ptr<string> userTableMetaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
