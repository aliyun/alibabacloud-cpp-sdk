// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODYSTACK_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODYSTACK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewStackResponseBodyStackLog.hpp>
#include <vector>
#include <alibabacloud/models/PreviewStackResponseBodyStackParameters.hpp>
#include <alibabacloud/models/PreviewStackResponseBodyStackResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class PreviewStackResponseBodyStack : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewStackResponseBodyStack& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_ANY_TO_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_TO_JSON(TemplateDescription, templateDescription_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewStackResponseBodyStack& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_ANY_FROM_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_FROM_JSON(TemplateDescription, templateDescription_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    PreviewStackResponseBodyStack() = default ;
    PreviewStackResponseBodyStack(const PreviewStackResponseBodyStack &) = default ;
    PreviewStackResponseBodyStack(PreviewStackResponseBodyStack &&) = default ;
    PreviewStackResponseBodyStack(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewStackResponseBodyStack() = default ;
    PreviewStackResponseBodyStack& operator=(const PreviewStackResponseBodyStack &) = default ;
    PreviewStackResponseBodyStack& operator=(PreviewStackResponseBodyStack &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->disableRollback_ != nullptr && this->log_ != nullptr && this->parameters_ != nullptr && this->regionId_ != nullptr && this->resources_ != nullptr
        && this->stackName_ != nullptr && this->stackPolicyBody_ != nullptr && this->templateDescription_ != nullptr && this->timeoutInMinutes_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PreviewStackResponseBodyStack& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline PreviewStackResponseBodyStack& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const Models::PreviewStackResponseBodyStackLog & log() const { DARABONBA_PTR_GET_CONST(log_, Models::PreviewStackResponseBodyStackLog) };
    inline Models::PreviewStackResponseBodyStackLog log() { DARABONBA_PTR_GET(log_, Models::PreviewStackResponseBodyStackLog) };
    inline PreviewStackResponseBodyStack& setLog(const Models::PreviewStackResponseBodyStackLog & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline PreviewStackResponseBodyStack& setLog(Models::PreviewStackResponseBodyStackLog && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::PreviewStackResponseBodyStackParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::PreviewStackResponseBodyStackParameters>) };
    inline vector<Models::PreviewStackResponseBodyStackParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::PreviewStackResponseBodyStackParameters>) };
    inline PreviewStackResponseBodyStack& setParameters(const vector<Models::PreviewStackResponseBodyStackParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline PreviewStackResponseBodyStack& setParameters(vector<Models::PreviewStackResponseBodyStackParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PreviewStackResponseBodyStack& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<Models::PreviewStackResponseBodyStackResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Models::PreviewStackResponseBodyStackResources>) };
    inline vector<Models::PreviewStackResponseBodyStackResources> resources() { DARABONBA_PTR_GET(resources_, vector<Models::PreviewStackResponseBodyStackResources>) };
    inline PreviewStackResponseBodyStack& setResources(const vector<Models::PreviewStackResponseBodyStackResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline PreviewStackResponseBodyStack& setResources(vector<Models::PreviewStackResponseBodyStackResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline PreviewStackResponseBodyStack& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // stackPolicyBody Field Functions 
    bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
    void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
    inline     const Darabonba::Json & stackPolicyBody() const { DARABONBA_GET(stackPolicyBody_) };
    Darabonba::Json & stackPolicyBody() { DARABONBA_GET(stackPolicyBody_) };
    inline PreviewStackResponseBodyStack& setStackPolicyBody(const Darabonba::Json & stackPolicyBody) { DARABONBA_SET_VALUE(stackPolicyBody_, stackPolicyBody) };
    inline PreviewStackResponseBodyStack& setStackPolicyBody(Darabonba::Json & stackPolicyBody) { DARABONBA_SET_RVALUE(stackPolicyBody_, stackPolicyBody) };


    // templateDescription Field Functions 
    bool hasTemplateDescription() const { return this->templateDescription_ != nullptr;};
    void deleteTemplateDescription() { this->templateDescription_ = nullptr;};
    inline string templateDescription() const { DARABONBA_PTR_GET_DEFAULT(templateDescription_, "") };
    inline PreviewStackResponseBodyStack& setTemplateDescription(string templateDescription) { DARABONBA_PTR_SET_VALUE(templateDescription_, templateDescription) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline PreviewStackResponseBodyStack& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The description of the stack.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether rollback is disabled for the resources when the stack fails to be created.
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // The log that is generated when the stack is run.
    std::shared_ptr<Models::PreviewStackResponseBodyStackLog> log_ = nullptr;
    // The parameters of the stack.
    std::shared_ptr<vector<Models::PreviewStackResponseBodyStackParameters>> parameters_ = nullptr;
    // The region where the stack resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resources in the stack.
    std::shared_ptr<vector<Models::PreviewStackResponseBodyStackResources>> resources_ = nullptr;
    // The stack name.
    std::shared_ptr<string> stackName_ = nullptr;
    // The structure that contains the stack policy body.
    Darabonba::Json stackPolicyBody_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> templateDescription_ = nullptr;
    // The timeout period for creating the stack.
    // 
    // Unit: minutes.
    std::shared_ptr<int32_t> timeoutInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
