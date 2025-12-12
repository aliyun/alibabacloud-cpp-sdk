// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGCONFIGSRESPONSEBODYDATASCALECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGCONFIGSRESPONSEBODYDATASCALECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListAutoScalingConfigsResponseBodyDataScaleConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingConfigsResponseBodyDataScaleConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(EffectiveTimeEnd, effectiveTimeEnd_);
      DARABONBA_PTR_TO_JSON(EffectiveTimeStart, effectiveTimeStart_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodesMax, nodesMax_);
      DARABONBA_PTR_TO_JSON(NodesMin, nodesMin_);
      DARABONBA_PTR_TO_JSON(ScaleRuleList, scaleRuleList_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(StorageCapacityMax, storageCapacityMax_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingConfigsResponseBodyDataScaleConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(EffectiveTimeEnd, effectiveTimeEnd_);
      DARABONBA_PTR_FROM_JSON(EffectiveTimeStart, effectiveTimeStart_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodesMax, nodesMax_);
      DARABONBA_PTR_FROM_JSON(NodesMin, nodesMin_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleList, scaleRuleList_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(StorageCapacityMax, storageCapacityMax_);
    };
    ListAutoScalingConfigsResponseBodyDataScaleConfigs() = default ;
    ListAutoScalingConfigsResponseBodyDataScaleConfigs(const ListAutoScalingConfigsResponseBodyDataScaleConfigs &) = default ;
    ListAutoScalingConfigsResponseBodyDataScaleConfigs(ListAutoScalingConfigsResponseBodyDataScaleConfigs &&) = default ;
    ListAutoScalingConfigsResponseBodyDataScaleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingConfigsResponseBodyDataScaleConfigs() = default ;
    ListAutoScalingConfigsResponseBodyDataScaleConfigs& operator=(const ListAutoScalingConfigsResponseBodyDataScaleConfigs &) = default ;
    ListAutoScalingConfigsResponseBodyDataScaleConfigs& operator=(ListAutoScalingConfigsResponseBodyDataScaleConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->configName_ == nullptr && return this->effectiveTimeEnd_ == nullptr && return this->effectiveTimeStart_ == nullptr && return this->enabled_ == nullptr && return this->engine_ == nullptr
        && return this->instanceId_ == nullptr && return this->nodesMax_ == nullptr && return this->nodesMin_ == nullptr && return this->scaleRuleList_ == nullptr && return this->scaleType_ == nullptr
        && return this->specId_ == nullptr && return this->storageCapacityMax_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string configName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // effectiveTimeEnd Field Functions 
    bool hasEffectiveTimeEnd() const { return this->effectiveTimeEnd_ != nullptr;};
    void deleteEffectiveTimeEnd() { this->effectiveTimeEnd_ = nullptr;};
    inline string effectiveTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeEnd_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setEffectiveTimeEnd(string effectiveTimeEnd) { DARABONBA_PTR_SET_VALUE(effectiveTimeEnd_, effectiveTimeEnd) };


    // effectiveTimeStart Field Functions 
    bool hasEffectiveTimeStart() const { return this->effectiveTimeStart_ != nullptr;};
    void deleteEffectiveTimeStart() { this->effectiveTimeStart_ = nullptr;};
    inline string effectiveTimeStart() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeStart_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setEffectiveTimeStart(string effectiveTimeStart) { DARABONBA_PTR_SET_VALUE(effectiveTimeStart_, effectiveTimeStart) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodesMax Field Functions 
    bool hasNodesMax() const { return this->nodesMax_ != nullptr;};
    void deleteNodesMax() { this->nodesMax_ = nullptr;};
    inline int32_t nodesMax() const { DARABONBA_PTR_GET_DEFAULT(nodesMax_, 0) };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setNodesMax(int32_t nodesMax) { DARABONBA_PTR_SET_VALUE(nodesMax_, nodesMax) };


    // nodesMin Field Functions 
    bool hasNodesMin() const { return this->nodesMin_ != nullptr;};
    void deleteNodesMin() { this->nodesMin_ = nullptr;};
    inline int32_t nodesMin() const { DARABONBA_PTR_GET_DEFAULT(nodesMin_, 0) };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setNodesMin(int32_t nodesMin) { DARABONBA_PTR_SET_VALUE(nodesMin_, nodesMin) };


    // scaleRuleList Field Functions 
    bool hasScaleRuleList() const { return this->scaleRuleList_ != nullptr;};
    void deleteScaleRuleList() { this->scaleRuleList_ = nullptr;};
    inline const vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList> & scaleRuleList() const { DARABONBA_PTR_GET_CONST(scaleRuleList_, vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList>) };
    inline vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList> scaleRuleList() { DARABONBA_PTR_GET(scaleRuleList_, vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList>) };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setScaleRuleList(const vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList> & scaleRuleList) { DARABONBA_PTR_SET_VALUE(scaleRuleList_, scaleRuleList) };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setScaleRuleList(vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList> && scaleRuleList) { DARABONBA_PTR_SET_RVALUE(scaleRuleList_, scaleRuleList) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // storageCapacityMax Field Functions 
    bool hasStorageCapacityMax() const { return this->storageCapacityMax_ != nullptr;};
    void deleteStorageCapacityMax() { this->storageCapacityMax_ = nullptr;};
    inline int64_t storageCapacityMax() const { DARABONBA_PTR_GET_DEFAULT(storageCapacityMax_, 0L) };
    inline ListAutoScalingConfigsResponseBodyDataScaleConfigs& setStorageCapacityMax(int64_t storageCapacityMax) { DARABONBA_PTR_SET_VALUE(storageCapacityMax_, storageCapacityMax) };


  protected:
    std::shared_ptr<string> configId_ = nullptr;
    std::shared_ptr<string> configName_ = nullptr;
    std::shared_ptr<string> effectiveTimeEnd_ = nullptr;
    std::shared_ptr<string> effectiveTimeStart_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> nodesMax_ = nullptr;
    std::shared_ptr<int32_t> nodesMin_ = nullptr;
    std::shared_ptr<vector<Models::ListAutoScalingConfigsResponseBodyDataScaleConfigsScaleRuleList>> scaleRuleList_ = nullptr;
    std::shared_ptr<string> scaleType_ = nullptr;
    std::shared_ptr<string> specId_ = nullptr;
    std::shared_ptr<int64_t> storageCapacityMax_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
