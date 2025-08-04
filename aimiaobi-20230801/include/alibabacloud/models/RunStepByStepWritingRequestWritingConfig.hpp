// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTWRITINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUESTWRITINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunStepByStepWritingRequestWritingConfigPromptTag.hpp>
#include <alibabacloud/models/RunStepByStepWritingRequestWritingConfigTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingRequestWritingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingRequestWritingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(PromptTag, promptTag_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(SummaryReturnType, summaryReturnType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UseSearch, useSearch_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingRequestWritingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(PromptTag, promptTag_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(SummaryReturnType, summaryReturnType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UseSearch, useSearch_);
    };
    RunStepByStepWritingRequestWritingConfig() = default ;
    RunStepByStepWritingRequestWritingConfig(const RunStepByStepWritingRequestWritingConfig &) = default ;
    RunStepByStepWritingRequestWritingConfig(RunStepByStepWritingRequestWritingConfig &&) = default ;
    RunStepByStepWritingRequestWritingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingRequestWritingConfig() = default ;
    RunStepByStepWritingRequestWritingConfig& operator=(const RunStepByStepWritingRequestWritingConfig &) = default ;
    RunStepByStepWritingRequestWritingConfig& operator=(RunStepByStepWritingRequestWritingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->keywords_ != nullptr && this->promptTag_ != nullptr && this->scene_ != nullptr && this->step_ != nullptr && this->summaryReturnType_ != nullptr
        && this->tags_ != nullptr && this->useSearch_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline RunStepByStepWritingRequestWritingConfig& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline RunStepByStepWritingRequestWritingConfig& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline RunStepByStepWritingRequestWritingConfig& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // promptTag Field Functions 
    bool hasPromptTag() const { return this->promptTag_ != nullptr;};
    void deletePromptTag() { this->promptTag_ = nullptr;};
    inline const Models::RunStepByStepWritingRequestWritingConfigPromptTag & promptTag() const { DARABONBA_PTR_GET_CONST(promptTag_, Models::RunStepByStepWritingRequestWritingConfigPromptTag) };
    inline Models::RunStepByStepWritingRequestWritingConfigPromptTag promptTag() { DARABONBA_PTR_GET(promptTag_, Models::RunStepByStepWritingRequestWritingConfigPromptTag) };
    inline RunStepByStepWritingRequestWritingConfig& setPromptTag(const Models::RunStepByStepWritingRequestWritingConfigPromptTag & promptTag) { DARABONBA_PTR_SET_VALUE(promptTag_, promptTag) };
    inline RunStepByStepWritingRequestWritingConfig& setPromptTag(Models::RunStepByStepWritingRequestWritingConfigPromptTag && promptTag) { DARABONBA_PTR_SET_RVALUE(promptTag_, promptTag) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline RunStepByStepWritingRequestWritingConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline RunStepByStepWritingRequestWritingConfig& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // summaryReturnType Field Functions 
    bool hasSummaryReturnType() const { return this->summaryReturnType_ != nullptr;};
    void deleteSummaryReturnType() { this->summaryReturnType_ = nullptr;};
    inline string summaryReturnType() const { DARABONBA_PTR_GET_DEFAULT(summaryReturnType_, "") };
    inline RunStepByStepWritingRequestWritingConfig& setSummaryReturnType(string summaryReturnType) { DARABONBA_PTR_SET_VALUE(summaryReturnType_, summaryReturnType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::RunStepByStepWritingRequestWritingConfigTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::RunStepByStepWritingRequestWritingConfigTags>) };
    inline vector<Models::RunStepByStepWritingRequestWritingConfigTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::RunStepByStepWritingRequestWritingConfigTags>) };
    inline RunStepByStepWritingRequestWritingConfig& setTags(const vector<Models::RunStepByStepWritingRequestWritingConfigTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunStepByStepWritingRequestWritingConfig& setTags(vector<Models::RunStepByStepWritingRequestWritingConfigTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool useSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunStepByStepWritingRequestWritingConfig& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<Models::RunStepByStepWritingRequestWritingConfigPromptTag> promptTag_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> step_ = nullptr;
    std::shared_ptr<string> summaryReturnType_ = nullptr;
    std::shared_ptr<vector<Models::RunStepByStepWritingRequestWritingConfigTags>> tags_ = nullptr;
    std::shared_ptr<bool> useSearch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
