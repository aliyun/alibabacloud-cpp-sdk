// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomHotTopicBroadcastJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomHotTopicBroadcastJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotTopicBroadcastConfig, hotTopicBroadcastConfig_);
      DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomHotTopicBroadcastJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotTopicBroadcastConfig, hotTopicBroadcastConfig_);
      DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitCustomHotTopicBroadcastJobRequest() = default ;
    SubmitCustomHotTopicBroadcastJobRequest(const SubmitCustomHotTopicBroadcastJobRequest &) = default ;
    SubmitCustomHotTopicBroadcastJobRequest(SubmitCustomHotTopicBroadcastJobRequest &&) = default ;
    SubmitCustomHotTopicBroadcastJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomHotTopicBroadcastJobRequest() = default ;
    SubmitCustomHotTopicBroadcastJobRequest& operator=(const SubmitCustomHotTopicBroadcastJobRequest &) = default ;
    SubmitCustomHotTopicBroadcastJobRequest& operator=(SubmitCustomHotTopicBroadcastJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HotTopicBroadcastConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HotTopicBroadcastConfig& obj) { 
        DARABONBA_PTR_TO_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
        DARABONBA_PTR_TO_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfig_);
      };
      friend void from_json(const Darabonba::Json& j, HotTopicBroadcastConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
        DARABONBA_PTR_FROM_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfig_);
      };
      HotTopicBroadcastConfig() = default ;
      HotTopicBroadcastConfig(const HotTopicBroadcastConfig &) = default ;
      HotTopicBroadcastConfig(HotTopicBroadcastConfig &&) = default ;
      HotTopicBroadcastConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HotTopicBroadcastConfig() = default ;
      HotTopicBroadcastConfig& operator=(const HotTopicBroadcastConfig &) = default ;
      HotTopicBroadcastConfig& operator=(HotTopicBroadcastConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StepForNewsBroadcastContentConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StepForNewsBroadcastContentConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Categories, categories_);
          DARABONBA_PTR_TO_JSON(CustomHotValueWeights, customHotValueWeights_);
          DARABONBA_PTR_TO_JSON(TopicCount, topicCount_);
        };
        friend void from_json(const Darabonba::Json& j, StepForNewsBroadcastContentConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Categories, categories_);
          DARABONBA_PTR_FROM_JSON(CustomHotValueWeights, customHotValueWeights_);
          DARABONBA_PTR_FROM_JSON(TopicCount, topicCount_);
        };
        StepForNewsBroadcastContentConfig() = default ;
        StepForNewsBroadcastContentConfig(const StepForNewsBroadcastContentConfig &) = default ;
        StepForNewsBroadcastContentConfig(StepForNewsBroadcastContentConfig &&) = default ;
        StepForNewsBroadcastContentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StepForNewsBroadcastContentConfig() = default ;
        StepForNewsBroadcastContentConfig& operator=(const StepForNewsBroadcastContentConfig &) = default ;
        StepForNewsBroadcastContentConfig& operator=(StepForNewsBroadcastContentConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CustomHotValueWeights : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomHotValueWeights& obj) { 
            DARABONBA_PTR_TO_JSON(Dimension, dimension_);
            DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, CustomHotValueWeights& obj) { 
            DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
            DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
          };
          CustomHotValueWeights() = default ;
          CustomHotValueWeights(const CustomHotValueWeights &) = default ;
          CustomHotValueWeights(CustomHotValueWeights &&) = default ;
          CustomHotValueWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomHotValueWeights() = default ;
          CustomHotValueWeights& operator=(const CustomHotValueWeights &) = default ;
          CustomHotValueWeights& operator=(CustomHotValueWeights &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dimension_ == nullptr
        && this->dimensionName_ == nullptr && this->weight_ == nullptr; };
          // dimension Field Functions 
          bool hasDimension() const { return this->dimension_ != nullptr;};
          void deleteDimension() { this->dimension_ = nullptr;};
          inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
          inline CustomHotValueWeights& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


          // dimensionName Field Functions 
          bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
          void deleteDimensionName() { this->dimensionName_ = nullptr;};
          inline string getDimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
          inline CustomHotValueWeights& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline CustomHotValueWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          shared_ptr<string> dimension_ {};
          shared_ptr<string> dimensionName_ {};
          shared_ptr<int32_t> weight_ {};
        };

        virtual bool empty() const override { return this->categories_ == nullptr
        && this->customHotValueWeights_ == nullptr && this->topicCount_ == nullptr; };
        // categories Field Functions 
        bool hasCategories() const { return this->categories_ != nullptr;};
        void deleteCategories() { this->categories_ = nullptr;};
        inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
        inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
        inline StepForNewsBroadcastContentConfig& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
        inline StepForNewsBroadcastContentConfig& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


        // customHotValueWeights Field Functions 
        bool hasCustomHotValueWeights() const { return this->customHotValueWeights_ != nullptr;};
        void deleteCustomHotValueWeights() { this->customHotValueWeights_ = nullptr;};
        inline const vector<StepForNewsBroadcastContentConfig::CustomHotValueWeights> & getCustomHotValueWeights() const { DARABONBA_PTR_GET_CONST(customHotValueWeights_, vector<StepForNewsBroadcastContentConfig::CustomHotValueWeights>) };
        inline vector<StepForNewsBroadcastContentConfig::CustomHotValueWeights> getCustomHotValueWeights() { DARABONBA_PTR_GET(customHotValueWeights_, vector<StepForNewsBroadcastContentConfig::CustomHotValueWeights>) };
        inline StepForNewsBroadcastContentConfig& setCustomHotValueWeights(const vector<StepForNewsBroadcastContentConfig::CustomHotValueWeights> & customHotValueWeights) { DARABONBA_PTR_SET_VALUE(customHotValueWeights_, customHotValueWeights) };
        inline StepForNewsBroadcastContentConfig& setCustomHotValueWeights(vector<StepForNewsBroadcastContentConfig::CustomHotValueWeights> && customHotValueWeights) { DARABONBA_PTR_SET_RVALUE(customHotValueWeights_, customHotValueWeights) };


        // topicCount Field Functions 
        bool hasTopicCount() const { return this->topicCount_ != nullptr;};
        void deleteTopicCount() { this->topicCount_ = nullptr;};
        inline int32_t getTopicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0) };
        inline StepForNewsBroadcastContentConfig& setTopicCount(int32_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


      protected:
        shared_ptr<vector<string>> categories_ {};
        shared_ptr<vector<StepForNewsBroadcastContentConfig::CustomHotValueWeights>> customHotValueWeights_ {};
        shared_ptr<int32_t> topicCount_ {};
      };

      class StepForCustomSummaryStyleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StepForCustomSummaryStyleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SummaryImageCount, summaryImageCount_);
          DARABONBA_PTR_TO_JSON(SummaryModel, summaryModel_);
          DARABONBA_PTR_TO_JSON(SummaryPrompt, summaryPrompt_);
        };
        friend void from_json(const Darabonba::Json& j, StepForCustomSummaryStyleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SummaryImageCount, summaryImageCount_);
          DARABONBA_PTR_FROM_JSON(SummaryModel, summaryModel_);
          DARABONBA_PTR_FROM_JSON(SummaryPrompt, summaryPrompt_);
        };
        StepForCustomSummaryStyleConfig() = default ;
        StepForCustomSummaryStyleConfig(const StepForCustomSummaryStyleConfig &) = default ;
        StepForCustomSummaryStyleConfig(StepForCustomSummaryStyleConfig &&) = default ;
        StepForCustomSummaryStyleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StepForCustomSummaryStyleConfig() = default ;
        StepForCustomSummaryStyleConfig& operator=(const StepForCustomSummaryStyleConfig &) = default ;
        StepForCustomSummaryStyleConfig& operator=(StepForCustomSummaryStyleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->summaryImageCount_ == nullptr
        && this->summaryModel_ == nullptr && this->summaryPrompt_ == nullptr; };
        // summaryImageCount Field Functions 
        bool hasSummaryImageCount() const { return this->summaryImageCount_ != nullptr;};
        void deleteSummaryImageCount() { this->summaryImageCount_ = nullptr;};
        inline int32_t getSummaryImageCount() const { DARABONBA_PTR_GET_DEFAULT(summaryImageCount_, 0) };
        inline StepForCustomSummaryStyleConfig& setSummaryImageCount(int32_t summaryImageCount) { DARABONBA_PTR_SET_VALUE(summaryImageCount_, summaryImageCount) };


        // summaryModel Field Functions 
        bool hasSummaryModel() const { return this->summaryModel_ != nullptr;};
        void deleteSummaryModel() { this->summaryModel_ = nullptr;};
        inline string getSummaryModel() const { DARABONBA_PTR_GET_DEFAULT(summaryModel_, "") };
        inline StepForCustomSummaryStyleConfig& setSummaryModel(string summaryModel) { DARABONBA_PTR_SET_VALUE(summaryModel_, summaryModel) };


        // summaryPrompt Field Functions 
        bool hasSummaryPrompt() const { return this->summaryPrompt_ != nullptr;};
        void deleteSummaryPrompt() { this->summaryPrompt_ = nullptr;};
        inline string getSummaryPrompt() const { DARABONBA_PTR_GET_DEFAULT(summaryPrompt_, "") };
        inline StepForCustomSummaryStyleConfig& setSummaryPrompt(string summaryPrompt) { DARABONBA_PTR_SET_VALUE(summaryPrompt_, summaryPrompt) };


      protected:
        shared_ptr<int32_t> summaryImageCount_ {};
        shared_ptr<string> summaryModel_ {};
        shared_ptr<string> summaryPrompt_ {};
      };

      virtual bool empty() const override { return this->stepForCustomSummaryStyleConfig_ == nullptr
        && this->stepForNewsBroadcastContentConfig_ == nullptr; };
      // stepForCustomSummaryStyleConfig Field Functions 
      bool hasStepForCustomSummaryStyleConfig() const { return this->stepForCustomSummaryStyleConfig_ != nullptr;};
      void deleteStepForCustomSummaryStyleConfig() { this->stepForCustomSummaryStyleConfig_ = nullptr;};
      inline const HotTopicBroadcastConfig::StepForCustomSummaryStyleConfig & getStepForCustomSummaryStyleConfig() const { DARABONBA_PTR_GET_CONST(stepForCustomSummaryStyleConfig_, HotTopicBroadcastConfig::StepForCustomSummaryStyleConfig) };
      inline HotTopicBroadcastConfig::StepForCustomSummaryStyleConfig getStepForCustomSummaryStyleConfig() { DARABONBA_PTR_GET(stepForCustomSummaryStyleConfig_, HotTopicBroadcastConfig::StepForCustomSummaryStyleConfig) };
      inline HotTopicBroadcastConfig& setStepForCustomSummaryStyleConfig(const HotTopicBroadcastConfig::StepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_VALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };
      inline HotTopicBroadcastConfig& setStepForCustomSummaryStyleConfig(HotTopicBroadcastConfig::StepForCustomSummaryStyleConfig && stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_RVALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };


      // stepForNewsBroadcastContentConfig Field Functions 
      bool hasStepForNewsBroadcastContentConfig() const { return this->stepForNewsBroadcastContentConfig_ != nullptr;};
      void deleteStepForNewsBroadcastContentConfig() { this->stepForNewsBroadcastContentConfig_ = nullptr;};
      inline const HotTopicBroadcastConfig::StepForNewsBroadcastContentConfig & getStepForNewsBroadcastContentConfig() const { DARABONBA_PTR_GET_CONST(stepForNewsBroadcastContentConfig_, HotTopicBroadcastConfig::StepForNewsBroadcastContentConfig) };
      inline HotTopicBroadcastConfig::StepForNewsBroadcastContentConfig getStepForNewsBroadcastContentConfig() { DARABONBA_PTR_GET(stepForNewsBroadcastContentConfig_, HotTopicBroadcastConfig::StepForNewsBroadcastContentConfig) };
      inline HotTopicBroadcastConfig& setStepForNewsBroadcastContentConfig(const HotTopicBroadcastConfig::StepForNewsBroadcastContentConfig & stepForNewsBroadcastContentConfig) { DARABONBA_PTR_SET_VALUE(stepForNewsBroadcastContentConfig_, stepForNewsBroadcastContentConfig) };
      inline HotTopicBroadcastConfig& setStepForNewsBroadcastContentConfig(HotTopicBroadcastConfig::StepForNewsBroadcastContentConfig && stepForNewsBroadcastContentConfig) { DARABONBA_PTR_SET_RVALUE(stepForNewsBroadcastContentConfig_, stepForNewsBroadcastContentConfig) };


    protected:
      // This parameter is required.
      shared_ptr<HotTopicBroadcastConfig::StepForCustomSummaryStyleConfig> stepForCustomSummaryStyleConfig_ {};
      // This parameter is required.
      shared_ptr<HotTopicBroadcastConfig::StepForNewsBroadcastContentConfig> stepForNewsBroadcastContentConfig_ {};
    };

    virtual bool empty() const override { return this->hotTopicBroadcastConfig_ == nullptr
        && this->hotTopicVersion_ == nullptr && this->topics_ == nullptr && this->workspaceId_ == nullptr; };
    // hotTopicBroadcastConfig Field Functions 
    bool hasHotTopicBroadcastConfig() const { return this->hotTopicBroadcastConfig_ != nullptr;};
    void deleteHotTopicBroadcastConfig() { this->hotTopicBroadcastConfig_ = nullptr;};
    inline const SubmitCustomHotTopicBroadcastJobRequest::HotTopicBroadcastConfig & getHotTopicBroadcastConfig() const { DARABONBA_PTR_GET_CONST(hotTopicBroadcastConfig_, SubmitCustomHotTopicBroadcastJobRequest::HotTopicBroadcastConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequest::HotTopicBroadcastConfig getHotTopicBroadcastConfig() { DARABONBA_PTR_GET(hotTopicBroadcastConfig_, SubmitCustomHotTopicBroadcastJobRequest::HotTopicBroadcastConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setHotTopicBroadcastConfig(const SubmitCustomHotTopicBroadcastJobRequest::HotTopicBroadcastConfig & hotTopicBroadcastConfig) { DARABONBA_PTR_SET_VALUE(hotTopicBroadcastConfig_, hotTopicBroadcastConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setHotTopicBroadcastConfig(SubmitCustomHotTopicBroadcastJobRequest::HotTopicBroadcastConfig && hotTopicBroadcastConfig) { DARABONBA_PTR_SET_RVALUE(hotTopicBroadcastConfig_, hotTopicBroadcastConfig) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline SubmitCustomHotTopicBroadcastJobRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitCustomHotTopicBroadcastJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<SubmitCustomHotTopicBroadcastJobRequest::HotTopicBroadcastConfig> hotTopicBroadcastConfig_ {};
    shared_ptr<string> hotTopicVersion_ {};
    shared_ptr<vector<string>> topics_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
