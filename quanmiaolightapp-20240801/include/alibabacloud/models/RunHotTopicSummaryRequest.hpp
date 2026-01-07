// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(stepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_TO_JSON(topicIds, topicIds_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(stepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_FROM_JSON(topicIds, topicIds_);
    };
    RunHotTopicSummaryRequest() = default ;
    RunHotTopicSummaryRequest(const RunHotTopicSummaryRequest &) = default ;
    RunHotTopicSummaryRequest(RunHotTopicSummaryRequest &&) = default ;
    RunHotTopicSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicSummaryRequest() = default ;
    RunHotTopicSummaryRequest& operator=(const RunHotTopicSummaryRequest &) = default ;
    RunHotTopicSummaryRequest& operator=(RunHotTopicSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StepForCustomSummaryStyleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StepForCustomSummaryStyleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(summaryImageCount, summaryImageCount_);
        DARABONBA_PTR_TO_JSON(summaryModel, summaryModel_);
        DARABONBA_PTR_TO_JSON(summaryPrompt, summaryPrompt_);
      };
      friend void from_json(const Darabonba::Json& j, StepForCustomSummaryStyleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(summaryImageCount, summaryImageCount_);
        DARABONBA_PTR_FROM_JSON(summaryModel, summaryModel_);
        DARABONBA_PTR_FROM_JSON(summaryPrompt, summaryPrompt_);
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

    virtual bool empty() const override { return this->hotTopicVersion_ == nullptr
        && this->stepForCustomSummaryStyleConfig_ == nullptr && this->topicIds_ == nullptr; };
    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline RunHotTopicSummaryRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // stepForCustomSummaryStyleConfig Field Functions 
    bool hasStepForCustomSummaryStyleConfig() const { return this->stepForCustomSummaryStyleConfig_ != nullptr;};
    void deleteStepForCustomSummaryStyleConfig() { this->stepForCustomSummaryStyleConfig_ = nullptr;};
    inline const RunHotTopicSummaryRequest::StepForCustomSummaryStyleConfig & getStepForCustomSummaryStyleConfig() const { DARABONBA_PTR_GET_CONST(stepForCustomSummaryStyleConfig_, RunHotTopicSummaryRequest::StepForCustomSummaryStyleConfig) };
    inline RunHotTopicSummaryRequest::StepForCustomSummaryStyleConfig getStepForCustomSummaryStyleConfig() { DARABONBA_PTR_GET(stepForCustomSummaryStyleConfig_, RunHotTopicSummaryRequest::StepForCustomSummaryStyleConfig) };
    inline RunHotTopicSummaryRequest& setStepForCustomSummaryStyleConfig(const RunHotTopicSummaryRequest::StepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_VALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };
    inline RunHotTopicSummaryRequest& setStepForCustomSummaryStyleConfig(RunHotTopicSummaryRequest::StepForCustomSummaryStyleConfig && stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_RVALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };


    // topicIds Field Functions 
    bool hasTopicIds() const { return this->topicIds_ != nullptr;};
    void deleteTopicIds() { this->topicIds_ = nullptr;};
    inline const vector<string> & getTopicIds() const { DARABONBA_PTR_GET_CONST(topicIds_, vector<string>) };
    inline vector<string> getTopicIds() { DARABONBA_PTR_GET(topicIds_, vector<string>) };
    inline RunHotTopicSummaryRequest& setTopicIds(const vector<string> & topicIds) { DARABONBA_PTR_SET_VALUE(topicIds_, topicIds) };
    inline RunHotTopicSummaryRequest& setTopicIds(vector<string> && topicIds) { DARABONBA_PTR_SET_RVALUE(topicIds_, topicIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotTopicVersion_ {};
    // This parameter is required.
    shared_ptr<RunHotTopicSummaryRequest::StepForCustomSummaryStyleConfig> stepForCustomSummaryStyleConfig_ {};
    // This parameter is required.
    shared_ptr<vector<string>> topicIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
