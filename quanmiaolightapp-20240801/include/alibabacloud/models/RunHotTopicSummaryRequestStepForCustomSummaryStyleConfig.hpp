// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYREQUESTSTEPFORCUSTOMSUMMARYSTYLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYREQUESTSTEPFORCUSTOMSUMMARYSTYLECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(summaryImageCount, summaryImageCount_);
      DARABONBA_PTR_TO_JSON(summaryModel, summaryModel_);
      DARABONBA_PTR_TO_JSON(summaryPrompt, summaryPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(summaryImageCount, summaryImageCount_);
      DARABONBA_PTR_FROM_JSON(summaryModel, summaryModel_);
      DARABONBA_PTR_FROM_JSON(summaryPrompt, summaryPrompt_);
    };
    RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig() = default ;
    RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig(const RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig &) = default ;
    RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig(RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig &&) = default ;
    RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig() = default ;
    RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig& operator=(const RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig &) = default ;
    RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig& operator=(RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->summaryImageCount_ == nullptr
        && return this->summaryModel_ == nullptr && return this->summaryPrompt_ == nullptr; };
    // summaryImageCount Field Functions 
    bool hasSummaryImageCount() const { return this->summaryImageCount_ != nullptr;};
    void deleteSummaryImageCount() { this->summaryImageCount_ = nullptr;};
    inline int32_t summaryImageCount() const { DARABONBA_PTR_GET_DEFAULT(summaryImageCount_, 0) };
    inline RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig& setSummaryImageCount(int32_t summaryImageCount) { DARABONBA_PTR_SET_VALUE(summaryImageCount_, summaryImageCount) };


    // summaryModel Field Functions 
    bool hasSummaryModel() const { return this->summaryModel_ != nullptr;};
    void deleteSummaryModel() { this->summaryModel_ = nullptr;};
    inline string summaryModel() const { DARABONBA_PTR_GET_DEFAULT(summaryModel_, "") };
    inline RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig& setSummaryModel(string summaryModel) { DARABONBA_PTR_SET_VALUE(summaryModel_, summaryModel) };


    // summaryPrompt Field Functions 
    bool hasSummaryPrompt() const { return this->summaryPrompt_ != nullptr;};
    void deleteSummaryPrompt() { this->summaryPrompt_ = nullptr;};
    inline string summaryPrompt() const { DARABONBA_PTR_GET_DEFAULT(summaryPrompt_, "") };
    inline RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig& setSummaryPrompt(string summaryPrompt) { DARABONBA_PTR_SET_VALUE(summaryPrompt_, summaryPrompt) };


  protected:
    std::shared_ptr<int32_t> summaryImageCount_ = nullptr;
    std::shared_ptr<string> summaryModel_ = nullptr;
    std::shared_ptr<string> summaryPrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
