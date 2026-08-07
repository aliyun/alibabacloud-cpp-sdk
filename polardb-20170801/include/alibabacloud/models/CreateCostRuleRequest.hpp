// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateCostRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheCostPointsPerMillion, cacheCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_TO_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheCostPointsPerMillion, cacheCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_FROM_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateCostRuleRequest() = default ;
    CreateCostRuleRequest(const CreateCostRuleRequest &) = default ;
    CreateCostRuleRequest(CreateCostRuleRequest &&) = default ;
    CreateCostRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostRuleRequest() = default ;
    CreateCostRuleRequest& operator=(const CreateCostRuleRequest &) = default ;
    CreateCostRuleRequest& operator=(CreateCostRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheCostPointsPerMillion_ == nullptr
        && this->effectiveTargetType_ == nullptr && this->effectiveTargetValue_ == nullptr && this->gwClusterId_ == nullptr && this->inputCostPointsPerMillion_ == nullptr && this->modelName_ == nullptr
        && this->modelServiceId_ == nullptr && this->outputCostPointsPerMillion_ == nullptr && this->regionId_ == nullptr; };
    // cacheCostPointsPerMillion Field Functions 
    bool hasCacheCostPointsPerMillion() const { return this->cacheCostPointsPerMillion_ != nullptr;};
    void deleteCacheCostPointsPerMillion() { this->cacheCostPointsPerMillion_ = nullptr;};
    inline string getCacheCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(cacheCostPointsPerMillion_, "") };
    inline CreateCostRuleRequest& setCacheCostPointsPerMillion(string cacheCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(cacheCostPointsPerMillion_, cacheCostPointsPerMillion) };


    // effectiveTargetType Field Functions 
    bool hasEffectiveTargetType() const { return this->effectiveTargetType_ != nullptr;};
    void deleteEffectiveTargetType() { this->effectiveTargetType_ = nullptr;};
    inline string getEffectiveTargetType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetType_, "") };
    inline CreateCostRuleRequest& setEffectiveTargetType(string effectiveTargetType) { DARABONBA_PTR_SET_VALUE(effectiveTargetType_, effectiveTargetType) };


    // effectiveTargetValue Field Functions 
    bool hasEffectiveTargetValue() const { return this->effectiveTargetValue_ != nullptr;};
    void deleteEffectiveTargetValue() { this->effectiveTargetValue_ = nullptr;};
    inline string getEffectiveTargetValue() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetValue_, "") };
    inline CreateCostRuleRequest& setEffectiveTargetValue(string effectiveTargetValue) { DARABONBA_PTR_SET_VALUE(effectiveTargetValue_, effectiveTargetValue) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline CreateCostRuleRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // inputCostPointsPerMillion Field Functions 
    bool hasInputCostPointsPerMillion() const { return this->inputCostPointsPerMillion_ != nullptr;};
    void deleteInputCostPointsPerMillion() { this->inputCostPointsPerMillion_ = nullptr;};
    inline string getInputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(inputCostPointsPerMillion_, "") };
    inline CreateCostRuleRequest& setInputCostPointsPerMillion(string inputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(inputCostPointsPerMillion_, inputCostPointsPerMillion) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateCostRuleRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string getModelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline CreateCostRuleRequest& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


    // outputCostPointsPerMillion Field Functions 
    bool hasOutputCostPointsPerMillion() const { return this->outputCostPointsPerMillion_ != nullptr;};
    void deleteOutputCostPointsPerMillion() { this->outputCostPointsPerMillion_ = nullptr;};
    inline string getOutputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(outputCostPointsPerMillion_, "") };
    inline CreateCostRuleRequest& setOutputCostPointsPerMillion(string outputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(outputCostPointsPerMillion_, outputCostPointsPerMillion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCostRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cost points per million cached tokens. Default value: 0.
    shared_ptr<string> cacheCostPointsPerMillion_ {};
    // The effective target type. Valid values:
    // 
    // - global
    // - consumerGroup
    // - consumer
    // 
    // Default value: global.
    shared_ptr<string> effectiveTargetType_ {};
    // The effective target value. This parameter is required when EffectiveTargetType is not set to global.
    shared_ptr<string> effectiveTargetValue_ {};
    // The gateway instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    // The cost points per million input tokens. Default value: 0.
    shared_ptr<string> inputCostPointsPerMillion_ {};
    // The model name, such as gpt-4 or qwen-turbo.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The model service ID.
    // 
    // This parameter is required.
    shared_ptr<string> modelServiceId_ {};
    // The cost points per million output tokens. Default value: 0.
    shared_ptr<string> outputCostPointsPerMillion_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
