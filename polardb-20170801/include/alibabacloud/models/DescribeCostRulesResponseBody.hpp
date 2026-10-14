// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTRULESRESPONSEBODY_HPP_
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
  class DescribeCostRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeCostRulesResponseBody() = default ;
    DescribeCostRulesResponseBody(const DescribeCostRulesResponseBody &) = default ;
    DescribeCostRulesResponseBody(DescribeCostRulesResponseBody &&) = default ;
    DescribeCostRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostRulesResponseBody() = default ;
    DescribeCostRulesResponseBody& operator=(const DescribeCostRulesResponseBody &) = default ;
    DescribeCostRulesResponseBody& operator=(DescribeCostRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
        DARABONBA_PTR_TO_JSON(ModelServiceName, modelServiceName_);
        DARABONBA_PTR_TO_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
        DARABONBA_PTR_TO_JSON(VideoCostPointsPerSecond, videoCostPointsPerSecond_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
        DARABONBA_PTR_FROM_JSON(ModelServiceName, modelServiceName_);
        DARABONBA_PTR_FROM_JSON(OutputCostPointsPerMillion, outputCostPointsPerMillion_);
        DARABONBA_PTR_FROM_JSON(VideoCostPointsPerSecond, videoCostPointsPerSecond_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
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

      virtual bool empty() const override { return this->cacheCostPointsPerMillion_ == nullptr
        && this->cacheCreationCostPointsPerMillion_ == nullptr && this->costRuleId_ == nullptr && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->effectiveTargetType_ == nullptr
        && this->effectiveTargetValue_ == nullptr && this->explicitCacheCostPointsPerMillion_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->gwClusterId_ == nullptr
        && this->imageCostPointsPerCount_ == nullptr && this->inputCostPointsPerMillion_ == nullptr && this->inputTokenTier_ == nullptr && this->inputTokenTiers_ == nullptr && this->model_ == nullptr
        && this->modelServiceId_ == nullptr && this->modelServiceName_ == nullptr && this->outputCostPointsPerMillion_ == nullptr && this->videoCostPointsPerSecond_ == nullptr; };
      // cacheCostPointsPerMillion Field Functions 
      bool hasCacheCostPointsPerMillion() const { return this->cacheCostPointsPerMillion_ != nullptr;};
      void deleteCacheCostPointsPerMillion() { this->cacheCostPointsPerMillion_ = nullptr;};
      inline string getCacheCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(cacheCostPointsPerMillion_, "") };
      inline Items& setCacheCostPointsPerMillion(string cacheCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(cacheCostPointsPerMillion_, cacheCostPointsPerMillion) };


      // cacheCreationCostPointsPerMillion Field Functions 
      bool hasCacheCreationCostPointsPerMillion() const { return this->cacheCreationCostPointsPerMillion_ != nullptr;};
      void deleteCacheCreationCostPointsPerMillion() { this->cacheCreationCostPointsPerMillion_ = nullptr;};
      inline string getCacheCreationCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(cacheCreationCostPointsPerMillion_, "") };
      inline Items& setCacheCreationCostPointsPerMillion(string cacheCreationCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(cacheCreationCostPointsPerMillion_, cacheCreationCostPointsPerMillion) };


      // costRuleId Field Functions 
      bool hasCostRuleId() const { return this->costRuleId_ != nullptr;};
      void deleteCostRuleId() { this->costRuleId_ = nullptr;};
      inline string getCostRuleId() const { DARABONBA_PTR_GET_DEFAULT(costRuleId_, "") };
      inline Items& setCostRuleId(string costRuleId) { DARABONBA_PTR_SET_VALUE(costRuleId_, costRuleId) };


      // effectiveEndTime Field Functions 
      bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
      void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
      inline string getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
      inline Items& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


      // effectiveStartTime Field Functions 
      bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
      void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
      inline string getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
      inline Items& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


      // effectiveTargetType Field Functions 
      bool hasEffectiveTargetType() const { return this->effectiveTargetType_ != nullptr;};
      void deleteEffectiveTargetType() { this->effectiveTargetType_ = nullptr;};
      inline string getEffectiveTargetType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetType_, "") };
      inline Items& setEffectiveTargetType(string effectiveTargetType) { DARABONBA_PTR_SET_VALUE(effectiveTargetType_, effectiveTargetType) };


      // effectiveTargetValue Field Functions 
      bool hasEffectiveTargetValue() const { return this->effectiveTargetValue_ != nullptr;};
      void deleteEffectiveTargetValue() { this->effectiveTargetValue_ = nullptr;};
      inline string getEffectiveTargetValue() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetValue_, "") };
      inline Items& setEffectiveTargetValue(string effectiveTargetValue) { DARABONBA_PTR_SET_VALUE(effectiveTargetValue_, effectiveTargetValue) };


      // explicitCacheCostPointsPerMillion Field Functions 
      bool hasExplicitCacheCostPointsPerMillion() const { return this->explicitCacheCostPointsPerMillion_ != nullptr;};
      void deleteExplicitCacheCostPointsPerMillion() { this->explicitCacheCostPointsPerMillion_ = nullptr;};
      inline string getExplicitCacheCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(explicitCacheCostPointsPerMillion_, "") };
      inline Items& setExplicitCacheCostPointsPerMillion(string explicitCacheCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(explicitCacheCostPointsPerMillion_, explicitCacheCostPointsPerMillion) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Items& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // gwClusterId Field Functions 
      bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
      void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
      inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
      inline Items& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


      // imageCostPointsPerCount Field Functions 
      bool hasImageCostPointsPerCount() const { return this->imageCostPointsPerCount_ != nullptr;};
      void deleteImageCostPointsPerCount() { this->imageCostPointsPerCount_ = nullptr;};
      inline string getImageCostPointsPerCount() const { DARABONBA_PTR_GET_DEFAULT(imageCostPointsPerCount_, "") };
      inline Items& setImageCostPointsPerCount(string imageCostPointsPerCount) { DARABONBA_PTR_SET_VALUE(imageCostPointsPerCount_, imageCostPointsPerCount) };


      // inputCostPointsPerMillion Field Functions 
      bool hasInputCostPointsPerMillion() const { return this->inputCostPointsPerMillion_ != nullptr;};
      void deleteInputCostPointsPerMillion() { this->inputCostPointsPerMillion_ = nullptr;};
      inline string getInputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(inputCostPointsPerMillion_, "") };
      inline Items& setInputCostPointsPerMillion(string inputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(inputCostPointsPerMillion_, inputCostPointsPerMillion) };


      // inputTokenTier Field Functions 
      bool hasInputTokenTier() const { return this->inputTokenTier_ != nullptr;};
      void deleteInputTokenTier() { this->inputTokenTier_ = nullptr;};
      inline string getInputTokenTier() const { DARABONBA_PTR_GET_DEFAULT(inputTokenTier_, "") };
      inline Items& setInputTokenTier(string inputTokenTier) { DARABONBA_PTR_SET_VALUE(inputTokenTier_, inputTokenTier) };


      // inputTokenTiers Field Functions 
      bool hasInputTokenTiers() const { return this->inputTokenTiers_ != nullptr;};
      void deleteInputTokenTiers() { this->inputTokenTiers_ = nullptr;};
      inline const vector<Items::InputTokenTiers> & getInputTokenTiers() const { DARABONBA_PTR_GET_CONST(inputTokenTiers_, vector<Items::InputTokenTiers>) };
      inline vector<Items::InputTokenTiers> getInputTokenTiers() { DARABONBA_PTR_GET(inputTokenTiers_, vector<Items::InputTokenTiers>) };
      inline Items& setInputTokenTiers(const vector<Items::InputTokenTiers> & inputTokenTiers) { DARABONBA_PTR_SET_VALUE(inputTokenTiers_, inputTokenTiers) };
      inline Items& setInputTokenTiers(vector<Items::InputTokenTiers> && inputTokenTiers) { DARABONBA_PTR_SET_RVALUE(inputTokenTiers_, inputTokenTiers) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Items& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // modelServiceId Field Functions 
      bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
      void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
      inline string getModelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
      inline Items& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


      // modelServiceName Field Functions 
      bool hasModelServiceName() const { return this->modelServiceName_ != nullptr;};
      void deleteModelServiceName() { this->modelServiceName_ = nullptr;};
      inline string getModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(modelServiceName_, "") };
      inline Items& setModelServiceName(string modelServiceName) { DARABONBA_PTR_SET_VALUE(modelServiceName_, modelServiceName) };


      // outputCostPointsPerMillion Field Functions 
      bool hasOutputCostPointsPerMillion() const { return this->outputCostPointsPerMillion_ != nullptr;};
      void deleteOutputCostPointsPerMillion() { this->outputCostPointsPerMillion_ = nullptr;};
      inline string getOutputCostPointsPerMillion() const { DARABONBA_PTR_GET_DEFAULT(outputCostPointsPerMillion_, "") };
      inline Items& setOutputCostPointsPerMillion(string outputCostPointsPerMillion) { DARABONBA_PTR_SET_VALUE(outputCostPointsPerMillion_, outputCostPointsPerMillion) };


      // videoCostPointsPerSecond Field Functions 
      bool hasVideoCostPointsPerSecond() const { return this->videoCostPointsPerSecond_ != nullptr;};
      void deleteVideoCostPointsPerSecond() { this->videoCostPointsPerSecond_ = nullptr;};
      inline string getVideoCostPointsPerSecond() const { DARABONBA_PTR_GET_DEFAULT(videoCostPointsPerSecond_, "") };
      inline Items& setVideoCostPointsPerSecond(string videoCostPointsPerSecond) { DARABONBA_PTR_SET_VALUE(videoCostPointsPerSecond_, videoCostPointsPerSecond) };


    protected:
      // The cache read cost points per million tokens. Default value: 0.
      shared_ptr<string> cacheCostPointsPerMillion_ {};
      // The cache creation or write cost points per million tokens.
      shared_ptr<string> cacheCreationCostPointsPerMillion_ {};
      // The ID of the cost rule.
      shared_ptr<string> costRuleId_ {};
      // The end time of the effective period.
      shared_ptr<string> effectiveEndTime_ {};
      // The start time of the effective period.
      shared_ptr<string> effectiveStartTime_ {};
      // The type of the effective target.
      shared_ptr<string> effectiveTargetType_ {};
      // The value of the effective target.
      shared_ptr<string> effectiveTargetValue_ {};
      // The explicit cache read cost points per million tokens.
      shared_ptr<string> explicitCacheCostPointsPerMillion_ {};
      // The time when the cost rule was created.
      shared_ptr<string> gmtCreated_ {};
      // The time when the cost rule was last updated.
      shared_ptr<string> gmtModified_ {};
      // The gateway instance ID.
      shared_ptr<string> gwClusterId_ {};
      // The image input cost points per image.
      shared_ptr<string> imageCostPointsPerCount_ {};
      // The input cost points per million tokens. Default value: 0.
      shared_ptr<string> inputCostPointsPerMillion_ {};
      // The input token tier. An empty value indicates a legacy or default rule.
      shared_ptr<string> inputTokenTier_ {};
      // The non-cumulative tiered pricing for input tokens. Each element includes the tier and the input cost points per million tokens.
      shared_ptr<vector<Items::InputTokenTiers>> inputTokenTiers_ {};
      // The name of the model.
      shared_ptr<string> model_ {};
      // The ID of the model service.
      shared_ptr<string> modelServiceId_ {};
      // The model service name.
      shared_ptr<string> modelServiceName_ {};
      // The output cost points per million tokens. Default value: 0.
      shared_ptr<string> outputCostPointsPerMillion_ {};
      // The video input cost points per second.
      shared_ptr<string> videoCostPointsPerSecond_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeCostRulesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeCostRulesResponseBody::Items>) };
    inline vector<DescribeCostRulesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeCostRulesResponseBody::Items>) };
    inline DescribeCostRulesResponseBody& setItems(const vector<DescribeCostRulesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCostRulesResponseBody& setItems(vector<DescribeCostRulesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCostRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeCostRulesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCostRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCostRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeCostRulesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The list of cost rules.
    shared_ptr<vector<DescribeCostRulesResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The number of entries per page. Valid values: 30, 50, and 100. Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
