// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateCostRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedModelApiIds, affectedModelApiIds_);
      DARABONBA_PTR_TO_JSON(CacheCostPointsPerMillion, cacheCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(CacheCreationCostPointsPerMillion, cacheCreationCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(CostRuleId, costRuleId_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_TO_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_TO_JSON(ExplicitCacheCostPointsPerMillion, explicitCacheCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(ImageCostPointsPerCount, imageCostPointsPerCount_);
      DARABONBA_PTR_TO_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(InputTokenTier, inputTokenTier_);
      DARABONBA_PTR_TO_JSON(InputTokenTiers, inputTokenTiers_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(ModelServiceName, modelServiceName_);
      DARABONBA_PTR_TO_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoCostPointsPerSecond, videoCostPointsPerSecond_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedModelApiIds, affectedModelApiIds_);
      DARABONBA_PTR_FROM_JSON(CacheCostPointsPerMillion, cacheCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(CacheCreationCostPointsPerMillion, cacheCreationCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(CostRuleId, costRuleId_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_FROM_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_FROM_JSON(ExplicitCacheCostPointsPerMillion, explicitCacheCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(ImageCostPointsPerCount, imageCostPointsPerCount_);
      DARABONBA_PTR_FROM_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(InputTokenTier, inputTokenTier_);
      DARABONBA_PTR_FROM_JSON(InputTokenTiers, inputTokenTiers_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(ModelServiceName, modelServiceName_);
      DARABONBA_PTR_FROM_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoCostPointsPerSecond, videoCostPointsPerSecond_);
    };
    CreateCostRuleResponseBody() = default ;
    CreateCostRuleResponseBody(const CreateCostRuleResponseBody &) = default ;
    CreateCostRuleResponseBody(CreateCostRuleResponseBody &&) = default ;
    CreateCostRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostRuleResponseBody() = default ;
    CreateCostRuleResponseBody& operator=(const CreateCostRuleResponseBody &) = default ;
    CreateCostRuleResponseBody& operator=(CreateCostRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InputTokenTiers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InputTokenTiers& obj) { 
        DARABONBA_PTR_TO_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
        DARABONBA_PTR_TO_JSON(Tier, tier_);
      };
      friend void from_json(const Darabonba::Json& j, InputTokenTiers& obj) { 
        DARABONBA_PTR_FROM_JSON(InputCostPointsPerMillion, inputCostPointsPerMillion_);
        DARABONBA_PTR_FROM_JSON(Tier, tier_);
      };
      InputTokenTiers() = default ;
      InputTokenTiers(const InputTokenTiers &) = default ;
      InputTokenTiers(InputTokenTiers &&) = default ;
      InputTokenTiers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InputTokenTiers() = default ;
      InputTokenTiers& operator=(const InputTokenTiers &) = default ;
      InputTokenTiers& operator=(InputTokenTiers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inputCostPointsPerMillion_ == nullptr
        && this->tier_ == nullptr; };
      // inputCostPointsPerMillion Field Functions 
      bool hasInputCostPointsPerMillion() const { return this->inputCostPointsPerMillion_ != nullptr;};
      void deleteInputCostPointsPerMillion() { this->inputCostPointsPerMillion_ = nullptr;};
      inline string getInputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(inputCostPointsPerMillion_, "") };
      inline InputTokenTiers& setInputCostPointsPerMillion(string inputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(inputCostPointsPerMillion_, inputCostPointsPerMillion) };


      // tier Field Functions 
      bool hasTier() const { return this->tier_ != nullptr;};
      void deleteTier() { this->tier_ = nullptr;};
      inline string getTier() const { DARABONBA_PTR_GET_DEFAULT(tier_, "") };
      inline InputTokenTiers& setTier(string tier) { DARABONBA_PTR_SET_VALUE(tier_, tier) };


    protected:
      // The input cost points per million tokens for the tier.
      shared_ptr<string> inputCostPointsPerMillion_ {};
      // The token tier. Valid values: "" (default tier), 0-32K, 32K-64K, 64K-128K, 128K-256K, 256K-512K, 512K-1M, and 1M+.
      shared_ptr<string> tier_ {};
    };

    virtual bool empty() const override { return this->affectedModelApiIds_ == nullptr
        && this->cacheCostPointsPerMillion_ == nullptr && this->cacheCreationCostPointsPerMillion_ == nullptr && this->costRuleId_ == nullptr && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr
        && this->effectiveTargetType_ == nullptr && this->effectiveTargetValue_ == nullptr && this->explicitCacheCostPointsPerMillion_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->gwClusterId_ == nullptr && this->imageCostPointsPerCount_ == nullptr && this->inputCostPointsPerMillion_ == nullptr && this->inputTokenTier_ == nullptr && this->inputTokenTiers_ == nullptr
        && this->modelName_ == nullptr && this->modelServiceId_ == nullptr && this->modelServiceName_ == nullptr && this->outputCostPointsPerMillion_ == nullptr && this->requestId_ == nullptr
        && this->videoCostPointsPerSecond_ == nullptr; };
    // affectedModelApiIds Field Functions 
    bool hasAffectedModelApiIds() const { return this->affectedModelApiIds_ != nullptr;};
    void deleteAffectedModelApiIds() { this->affectedModelApiIds_ = nullptr;};
    inline const vector<string> & getAffectedModelApiIds() const { DARABONBA_PTR_GET_CONST(affectedModelApiIds_, vector<string>) };
    inline vector<string> getAffectedModelApiIds() { DARABONBA_PTR_GET(affectedModelApiIds_, vector<string>) };
    inline CreateCostRuleResponseBody& setAffectedModelApiIds(const vector<string> & affectedModelApiIds) { DARABONBA_PTR_SET_VALUE(affectedModelApiIds_, affectedModelApiIds) };
    inline CreateCostRuleResponseBody& setAffectedModelApiIds(vector<string> && affectedModelApiIds) { DARABONBA_PTR_SET_RVALUE(affectedModelApiIds_, affectedModelApiIds) };


    // cacheCostPointsPerMillion Field Functions 
    bool hasCacheCostPointsPerMillion() const { return this->cacheCostPointsPerMillion_ != nullptr;};
    void deleteCacheCostPointsPerMillion() { this->cacheCostPointsPerMillion_ = nullptr;};
    inline string getCacheCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(cacheCostPointsPerMillion_, "") };
    inline CreateCostRuleResponseBody& setCacheCostPointsPerMillion(string cacheCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(cacheCostPointsPerMillion_, cacheCostPointsPerMillion) };


    // cacheCreationCostPointsPerMillion Field Functions 
    bool hasCacheCreationCostPointsPerMillion() const { return this->cacheCreationCostPointsPerMillion_ != nullptr;};
    void deleteCacheCreationCostPointsPerMillion() { this->cacheCreationCostPointsPerMillion_ = nullptr;};
    inline string getCacheCreationCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(cacheCreationCostPointsPerMillion_, "") };
    inline CreateCostRuleResponseBody& setCacheCreationCostPointsPerMillion(string cacheCreationCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(cacheCreationCostPointsPerMillion_, cacheCreationCostPointsPerMillion) };


    // costRuleId Field Functions 
    bool hasCostRuleId() const { return this->costRuleId_ != nullptr;};
    void deleteCostRuleId() { this->costRuleId_ = nullptr;};
    inline string getCostRuleId() const { DARABONBA_PTR_GET_DEFAULT(costRuleId_, "") };
    inline CreateCostRuleResponseBody& setCostRuleId(string costRuleId) { DARABONBA_PTR_SET_VALUE(costRuleId_, costRuleId) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline string getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
    inline CreateCostRuleResponseBody& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline string getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
    inline CreateCostRuleResponseBody& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // effectiveTargetType Field Functions 
    bool hasEffectiveTargetType() const { return this->effectiveTargetType_ != nullptr;};
    void deleteEffectiveTargetType() { this->effectiveTargetType_ = nullptr;};
    inline string getEffectiveTargetType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetType_, "") };
    inline CreateCostRuleResponseBody& setEffectiveTargetType(string effectiveTargetType) { DARABONBA_PTR_SET_VALUE(effectiveTargetType_, effectiveTargetType) };


    // effectiveTargetValue Field Functions 
    bool hasEffectiveTargetValue() const { return this->effectiveTargetValue_ != nullptr;};
    void deleteEffectiveTargetValue() { this->effectiveTargetValue_ = nullptr;};
    inline string getEffectiveTargetValue() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetValue_, "") };
    inline CreateCostRuleResponseBody& setEffectiveTargetValue(string effectiveTargetValue) { DARABONBA_PTR_SET_VALUE(effectiveTargetValue_, effectiveTargetValue) };


    // explicitCacheCostPointsPerMillion Field Functions 
    bool hasExplicitCacheCostPointsPerMillion() const { return this->explicitCacheCostPointsPerMillion_ != nullptr;};
    void deleteExplicitCacheCostPointsPerMillion() { this->explicitCacheCostPointsPerMillion_ = nullptr;};
    inline string getExplicitCacheCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(explicitCacheCostPointsPerMillion_, "") };
    inline CreateCostRuleResponseBody& setExplicitCacheCostPointsPerMillion(string explicitCacheCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(explicitCacheCostPointsPerMillion_, explicitCacheCostPointsPerMillion) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline CreateCostRuleResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateCostRuleResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline CreateCostRuleResponseBody& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // imageCostPointsPerCount Field Functions 
    bool hasImageCostPointsPerCount() const { return this->imageCostPointsPerCount_ != nullptr;};
    void deleteImageCostPointsPerCount() { this->imageCostPointsPerCount_ = nullptr;};
    inline string getImageCostPointsPerCount() const { DARABONBA_PTR_GET_DEFAULT(imageCostPointsPerCount_, "") };
    inline CreateCostRuleResponseBody& setImageCostPointsPerCount(string imageCostPointsPerCount) { DARABONBA_PTR_SET_VALUE(imageCostPointsPerCount_, imageCostPointsPerCount) };


    // inputCostPointsPerMillion Field Functions 
    bool hasInputCostPointsPerMillion() const { return this->inputCostPointsPerMillion_ != nullptr;};
    void deleteInputCostPointsPerMillion() { this->inputCostPointsPerMillion_ = nullptr;};
    inline string getInputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(inputCostPointsPerMillion_, "") };
    inline CreateCostRuleResponseBody& setInputCostPointsPerMillion(string inputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(inputCostPointsPerMillion_, inputCostPointsPerMillion) };


    // inputTokenTier Field Functions 
    bool hasInputTokenTier() const { return this->inputTokenTier_ != nullptr;};
    void deleteInputTokenTier() { this->inputTokenTier_ = nullptr;};
    inline string getInputTokenTier() const { DARABONBA_PTR_GET_DEFAULT(inputTokenTier_, "") };
    inline CreateCostRuleResponseBody& setInputTokenTier(string inputTokenTier) { DARABONBA_PTR_SET_VALUE(inputTokenTier_, inputTokenTier) };


    // inputTokenTiers Field Functions 
    bool hasInputTokenTiers() const { return this->inputTokenTiers_ != nullptr;};
    void deleteInputTokenTiers() { this->inputTokenTiers_ = nullptr;};
    inline const vector<CreateCostRuleResponseBody::InputTokenTiers> & getInputTokenTiers() const { DARABONBA_PTR_GET_CONST(inputTokenTiers_, vector<CreateCostRuleResponseBody::InputTokenTiers>) };
    inline vector<CreateCostRuleResponseBody::InputTokenTiers> getInputTokenTiers() { DARABONBA_PTR_GET(inputTokenTiers_, vector<CreateCostRuleResponseBody::InputTokenTiers>) };
    inline CreateCostRuleResponseBody& setInputTokenTiers(const vector<CreateCostRuleResponseBody::InputTokenTiers> & inputTokenTiers) { DARABONBA_PTR_SET_VALUE(inputTokenTiers_, inputTokenTiers) };
    inline CreateCostRuleResponseBody& setInputTokenTiers(vector<CreateCostRuleResponseBody::InputTokenTiers> && inputTokenTiers) { DARABONBA_PTR_SET_RVALUE(inputTokenTiers_, inputTokenTiers) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateCostRuleResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string getModelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline CreateCostRuleResponseBody& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


    // modelServiceName Field Functions 
    bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
    void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
    inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
    inline CreateCostRuleResponseBody& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


    // outputCostPointsPerMillion Field Functions 
    bool hasOutputCostPointsPerMillion() const { return this->outputCostPointsPerMillion_ != nullptr;};
    void deleteOutputCostPointsPerMillion() { this->outputCostPointsPerMillion_ = nullptr;};
    inline string getOutputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(outputCostPointsPerMillion_, "") };
    inline CreateCostRuleResponseBody& setOutputCostPointsPerMillion(string outputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(outputCostPointsPerMillion_, outputCostPointsPerMillion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCostRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoCostPointsPerSecond Field Functions 
    bool hasVideoCostPointsPerSecond() const { return this->videoCostPointsPerSecond_ != nullptr;};
    void deleteVideoCostPointsPerSecond() { this->videoCostPointsPerSecond_ = nullptr;};
    inline string getVideoCostPointsPerSecond() const { DARABONBA_PTR_GET_DEFAULT(videoCostPointsPerSecond_, "") };
    inline CreateCostRuleResponseBody& setVideoCostPointsPerSecond(string videoCostPointsPerSecond) { DARABONBA_PTR_SET_VALUE(videoCostPointsPerSecond_, videoCostPointsPerSecond) };


  protected:
    // The list of model API IDs affected by the rule.
    shared_ptr<vector<string>> affectedModelApiIds_ {};
    // The cache read cost points per million tokens.
    shared_ptr<string> cacheCostPointsPerMillion_ {};
    // The cache creation (write) cost points per million tokens.
    shared_ptr<string> cacheCreationCostPointsPerMillion_ {};
    // The cost rule ID.
    shared_ptr<string> costRuleId_ {};
    // The effective end time.
    shared_ptr<string> effectiveEndTime_ {};
    // The effective start time.
    shared_ptr<string> effectiveStartTime_ {};
    // The effective target type. Valid values: global, consumerGroup, and consumer.
    shared_ptr<string> effectiveTargetType_ {};
    // The effective target value. This parameter has a value when the effective target type is not global.
    shared_ptr<string> effectiveTargetValue_ {};
    // The explicit cache read cost points per million tokens.
    shared_ptr<string> explicitCacheCostPointsPerMillion_ {};
    // The creation time.
    shared_ptr<string> gmtCreated_ {};
    // The modification time.
    shared_ptr<string> gmtModified_ {};
    // The ID of the gateway instance to which the cost rule belongs.
    shared_ptr<string> gwClusterId_ {};
    // The image input cost points per image.
    shared_ptr<string> imageCostPointsPerCount_ {};
    // The input cost points per million tokens.
    shared_ptr<string> inputCostPointsPerMillion_ {};
    // The input token tier. An empty value indicates the default tier.
    shared_ptr<string> inputTokenTier_ {};
    // The tiered pricing for input tokens. Pricing is applied per tier and is not cumulative. Each element contains Tier and InputCostPointsPerMillion.
    shared_ptr<vector<CreateCostRuleResponseBody::InputTokenTiers>> inputTokenTiers_ {};
    // The name of the pricing model.
    shared_ptr<string> modelName_ {};
    // The ID of the model service.
    shared_ptr<string> modelServiceId_ {};
    // The model service name.
    shared_ptr<string> modelServiceName_ {};
    // The output cost points per million tokens.
    shared_ptr<string> outputCostPointsPerMillion_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The video input cost points per second.
    shared_ptr<string> videoCostPointsPerSecond_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
