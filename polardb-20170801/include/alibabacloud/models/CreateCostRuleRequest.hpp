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
      DARABONBA_PTR_TO_JSON(CacheCreationCostPointsPerMillion, cacheCreationCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_TO_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_TO_JSON(ExplicitCacheCostPointsPerMillion, explicitCacheCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(ImageCostPointsPerCount, imageCostPointsPerCount_);
      DARABONBA_PTR_TO_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(InputTokenTiers, inputTokenTiers_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VideoCostPointsPerSecond, videoCostPointsPerSecond_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheCostPointsPerMillion, cacheCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(CacheCreationCostPointsPerMillion, cacheCreationCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_FROM_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_FROM_JSON(ExplicitCacheCostPointsPerMillion, explicitCacheCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(ImageCostPointsPerCount, imageCostPointsPerCount_);
      DARABONBA_PTR_FROM_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(InputTokenTiers, inputTokenTiers_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VideoCostPointsPerSecond, videoCostPointsPerSecond_);
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
        && this->cacheCreationCostPointsPerMillion_ == nullptr && this->effectiveStartTime_ == nullptr && this->effectiveTargetType_ == nullptr && this->effectiveTargetValue_ == nullptr && this->explicitCacheCostPointsPerMillion_ == nullptr
        && this->gwClusterId_ == nullptr && this->imageCostPointsPerCount_ == nullptr && this->inputCostPointsPerMillion_ == nullptr && this->inputTokenTiers_ == nullptr && this->modelName_ == nullptr
        && this->modelServiceId_ == nullptr && this->outputCostPointsPerMillion_ == nullptr && this->regionId_ == nullptr && this->videoCostPointsPerSecond_ == nullptr; };
    // cacheCostPointsPerMillion Field Functions 
    bool hasCacheCostPointsPerMillion() const { return this->cacheCostPointsPerMillion_ != nullptr;};
    void deleteCacheCostPointsPerMillion() { this->cacheCostPointsPerMillion_ = nullptr;};
    inline string getCacheCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(cacheCostPointsPerMillion_, "") };
    inline CreateCostRuleRequest& setCacheCostPointsPerMillion(string cacheCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(cacheCostPointsPerMillion_, cacheCostPointsPerMillion) };


    // cacheCreationCostPointsPerMillion Field Functions 
    bool hasCacheCreationCostPointsPerMillion() const { return this->cacheCreationCostPointsPerMillion_ != nullptr;};
    void deleteCacheCreationCostPointsPerMillion() { this->cacheCreationCostPointsPerMillion_ = nullptr;};
    inline string getCacheCreationCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(cacheCreationCostPointsPerMillion_, "") };
    inline CreateCostRuleRequest& setCacheCreationCostPointsPerMillion(string cacheCreationCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(cacheCreationCostPointsPerMillion_, cacheCreationCostPointsPerMillion) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline string getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
    inline CreateCostRuleRequest& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


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


    // explicitCacheCostPointsPerMillion Field Functions 
    bool hasExplicitCacheCostPointsPerMillion() const { return this->explicitCacheCostPointsPerMillion_ != nullptr;};
    void deleteExplicitCacheCostPointsPerMillion() { this->explicitCacheCostPointsPerMillion_ = nullptr;};
    inline string getExplicitCacheCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(explicitCacheCostPointsPerMillion_, "") };
    inline CreateCostRuleRequest& setExplicitCacheCostPointsPerMillion(string explicitCacheCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(explicitCacheCostPointsPerMillion_, explicitCacheCostPointsPerMillion) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline CreateCostRuleRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // imageCostPointsPerCount Field Functions 
    bool hasImageCostPointsPerCount() const { return this->imageCostPointsPerCount_ != nullptr;};
    void deleteImageCostPointsPerCount() { this->imageCostPointsPerCount_ = nullptr;};
    inline string getImageCostPointsPerCount() const { DARABONBA_PTR_GET_DEFAULT(imageCostPointsPerCount_, "") };
    inline CreateCostRuleRequest& setImageCostPointsPerCount(string imageCostPointsPerCount) { DARABONBA_PTR_SET_VALUE(imageCostPointsPerCount_, imageCostPointsPerCount) };


    // inputCostPointsPerMillion Field Functions 
    bool hasInputCostPointsPerMillion() const { return this->inputCostPointsPerMillion_ != nullptr;};
    void deleteInputCostPointsPerMillion() { this->inputCostPointsPerMillion_ = nullptr;};
    inline string getInputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(inputCostPointsPerMillion_, "") };
    inline CreateCostRuleRequest& setInputCostPointsPerMillion(string inputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(inputCostPointsPerMillion_, inputCostPointsPerMillion) };


    // inputTokenTiers Field Functions 
    bool hasInputTokenTiers() const { return this->inputTokenTiers_ != nullptr;};
    void deleteInputTokenTiers() { this->inputTokenTiers_ = nullptr;};
    inline string getInputTokenTiers() const { DARABONBA_PTR_GET_DEFAULT(inputTokenTiers_, "") };
    inline CreateCostRuleRequest& setInputTokenTiers(string inputTokenTiers) { DARABONBA_PTR_SET_VALUE(inputTokenTiers_, inputTokenTiers) };


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


    // videoCostPointsPerSecond Field Functions 
    bool hasVideoCostPointsPerSecond() const { return this->videoCostPointsPerSecond_ != nullptr;};
    void deleteVideoCostPointsPerSecond() { this->videoCostPointsPerSecond_ = nullptr;};
    inline string getVideoCostPointsPerSecond() const { DARABONBA_PTR_GET_DEFAULT(videoCostPointsPerSecond_, "") };
    inline CreateCostRuleRequest& setVideoCostPointsPerSecond(string videoCostPointsPerSecond) { DARABONBA_PTR_SET_VALUE(videoCostPointsPerSecond_, videoCostPointsPerSecond) };


  protected:
    // The cache read cost points per million tokens. Default value: 0.
    shared_ptr<string> cacheCostPointsPerMillion_ {};
    // The cache creation cost points per million tokens.
    shared_ptr<string> cacheCreationCostPointsPerMillion_ {};
    // The effective start time in the yyyy-MM-dd HH:mm:ss format. If this parameter is not specified, the rule takes effect immediately.
    shared_ptr<string> effectiveStartTime_ {};
    // The effective target type. Valid values: global, consumerGroup, and consumer. Default value: global.
    shared_ptr<string> effectiveTargetType_ {};
    // The effective target value. This parameter is required when the effective target type is not global.
    shared_ptr<string> effectiveTargetValue_ {};
    // The explicit cache read cost points per million tokens.
    shared_ptr<string> explicitCacheCostPointsPerMillion_ {};
    // The gateway instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    // The image input cost points per image.
    shared_ptr<string> imageCostPointsPerCount_ {};
    // The input cost points per million tokens. Default value: 0.
    shared_ptr<string> inputCostPointsPerMillion_ {};
    // The tiered price for input tokens (non-cumulative). The value is a JSON array character string. Each element contains Tier and InputCostPointsPerMillion. Valid values for Tier: "" (default tier), 0-32K, 32K-64K, 64K-128K, 128K-256K, 256K-512K, 512K-1M, and 1M+. Example: [{"Tier":"0-32K","InputCostPointsPerMillion":"1000"},{"Tier":"32K-64K","InputCostPointsPerMillion":"1800"}]. If this parameter is specified, it takes precedence over InputCostPointsPerMillion. An empty array [] is not allowed.
    shared_ptr<string> inputTokenTiers_ {};
    // The name of the model, such as gpt-4 or qwen-turbo.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The ID of the model service.
    // 
    // This parameter is required.
    shared_ptr<string> modelServiceId_ {};
    // The output cost points per million tokens. Default value: 0.
    shared_ptr<string> outputCostPointsPerMillion_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The video input cost points per second.
    shared_ptr<string> videoCostPointsPerSecond_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
