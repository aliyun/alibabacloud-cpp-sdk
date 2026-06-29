// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKTEMPLATEOPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TASKTEMPLATEOPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuestionOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TaskTemplateOptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskTemplateOptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(PreOptions, preOptions_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, TaskTemplateOptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(PreOptions, preOptions_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    TaskTemplateOptionConfig() = default ;
    TaskTemplateOptionConfig(const TaskTemplateOptionConfig &) = default ;
    TaskTemplateOptionConfig(TaskTemplateOptionConfig &&) = default ;
    TaskTemplateOptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskTemplateOptionConfig() = default ;
    TaskTemplateOptionConfig& operator=(const TaskTemplateOptionConfig &) = default ;
    TaskTemplateOptionConfig& operator=(TaskTemplateOptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultResult_ == nullptr
        && this->options_ == nullptr && this->preOptions_ == nullptr && this->rule_ == nullptr; };
    // defaultResult Field Functions 
    bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
    void deleteDefaultResult() { this->defaultResult_ = nullptr;};
    inline string getDefaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
    inline TaskTemplateOptionConfig& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<QuestionOption> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<QuestionOption>) };
    inline vector<QuestionOption> getOptions() { DARABONBA_PTR_GET(options_, vector<QuestionOption>) };
    inline TaskTemplateOptionConfig& setOptions(const vector<QuestionOption> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline TaskTemplateOptionConfig& setOptions(vector<QuestionOption> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // preOptions Field Functions 
    bool hasPreOptions() const { return this->preOptions_ != nullptr;};
    void deletePreOptions() { this->preOptions_ = nullptr;};
    inline const vector<string> & getPreOptions() const { DARABONBA_PTR_GET_CONST(preOptions_, vector<string>) };
    inline vector<string> getPreOptions() { DARABONBA_PTR_GET(preOptions_, vector<string>) };
    inline TaskTemplateOptionConfig& setPreOptions(const vector<string> & preOptions) { DARABONBA_PTR_SET_VALUE(preOptions_, preOptions) };
    inline TaskTemplateOptionConfig& setPreOptions(vector<string> && preOptions) { DARABONBA_PTR_SET_RVALUE(preOptions_, preOptions) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline TaskTemplateOptionConfig& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


  protected:
    // The default value must be adapted according to the question type. For a Radio or text box question, directly enter the tag value. For a Multiple Choice question, configure it as ["{tag 1}", "{tag 2}"].
    shared_ptr<string> defaultResult_ {};
    // Select the list of question options.
    shared_ptr<vector<QuestionOption>> options_ {};
    // List of preset options for text-type questions.
    shared_ptr<vector<string>> preOptions_ {};
    // Validation rule item; valid only for fill-in-the-blank text-type questions.
    shared_ptr<string> rule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
