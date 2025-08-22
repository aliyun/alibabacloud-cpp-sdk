// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTSPEC_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Location.hpp>
#include <vector>
#include <alibabacloud/models/HyperParameterDefinition.hpp>
#include <alibabacloud/models/Channel.hpp>
#include <alibabacloud/models/MetricDefinition.hpp>
#include <alibabacloud/models/ConditionExpression.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ComponentSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentSpec& obj) { 
      DARABONBA_PTR_TO_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MetricDefinitions, metricDefinitions_);
      DARABONBA_PTR_TO_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_TO_JSON(ResourceRequirements, resourceRequirements_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MetricDefinitions, metricDefinitions_);
      DARABONBA_PTR_FROM_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_FROM_JSON(ResourceRequirements, resourceRequirements_);
    };
    ComponentSpec() = default ;
    ComponentSpec(const ComponentSpec &) = default ;
    ComponentSpec(ComponentSpec &&) = default ;
    ComponentSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentSpec() = default ;
    ComponentSpec& operator=(const ComponentSpec &) = default ;
    ComponentSpec& operator=(ComponentSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeDir_ != nullptr
        && this->command_ != nullptr && this->hyperParameters_ != nullptr && this->image_ != nullptr && this->inputChannels_ != nullptr && this->jobType_ != nullptr
        && this->metricDefinitions_ != nullptr && this->outputChannels_ != nullptr && this->resourceRequirements_ != nullptr; };
    // codeDir Field Functions 
    bool hasCodeDir() const { return this->codeDir_ != nullptr;};
    void deleteCodeDir() { this->codeDir_ = nullptr;};
    inline const Location & codeDir() const { DARABONBA_PTR_GET_CONST(codeDir_, Location) };
    inline Location codeDir() { DARABONBA_PTR_GET(codeDir_, Location) };
    inline ComponentSpec& setCodeDir(const Location & codeDir) { DARABONBA_PTR_SET_VALUE(codeDir_, codeDir) };
    inline ComponentSpec& setCodeDir(Location && codeDir) { DARABONBA_PTR_SET_RVALUE(codeDir_, codeDir) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ComponentSpec& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<HyperParameterDefinition> & hyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<HyperParameterDefinition>) };
    inline vector<HyperParameterDefinition> hyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<HyperParameterDefinition>) };
    inline ComponentSpec& setHyperParameters(const vector<HyperParameterDefinition> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline ComponentSpec& setHyperParameters(vector<HyperParameterDefinition> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ComponentSpec& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<Channel> & inputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<Channel>) };
    inline vector<Channel> inputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<Channel>) };
    inline ComponentSpec& setInputChannels(const vector<Channel> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline ComponentSpec& setInputChannels(vector<Channel> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ComponentSpec& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // metricDefinitions Field Functions 
    bool hasMetricDefinitions() const { return this->metricDefinitions_ != nullptr;};
    void deleteMetricDefinitions() { this->metricDefinitions_ = nullptr;};
    inline const vector<MetricDefinition> & metricDefinitions() const { DARABONBA_PTR_GET_CONST(metricDefinitions_, vector<MetricDefinition>) };
    inline vector<MetricDefinition> metricDefinitions() { DARABONBA_PTR_GET(metricDefinitions_, vector<MetricDefinition>) };
    inline ComponentSpec& setMetricDefinitions(const vector<MetricDefinition> & metricDefinitions) { DARABONBA_PTR_SET_VALUE(metricDefinitions_, metricDefinitions) };
    inline ComponentSpec& setMetricDefinitions(vector<MetricDefinition> && metricDefinitions) { DARABONBA_PTR_SET_RVALUE(metricDefinitions_, metricDefinitions) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<Channel> & outputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<Channel>) };
    inline vector<Channel> outputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<Channel>) };
    inline ComponentSpec& setOutputChannels(const vector<Channel> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline ComponentSpec& setOutputChannels(vector<Channel> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // resourceRequirements Field Functions 
    bool hasResourceRequirements() const { return this->resourceRequirements_ != nullptr;};
    void deleteResourceRequirements() { this->resourceRequirements_ = nullptr;};
    inline const vector<ConditionExpression> & resourceRequirements() const { DARABONBA_PTR_GET_CONST(resourceRequirements_, vector<ConditionExpression>) };
    inline vector<ConditionExpression> resourceRequirements() { DARABONBA_PTR_GET(resourceRequirements_, vector<ConditionExpression>) };
    inline ComponentSpec& setResourceRequirements(const vector<ConditionExpression> & resourceRequirements) { DARABONBA_PTR_SET_VALUE(resourceRequirements_, resourceRequirements) };
    inline ComponentSpec& setResourceRequirements(vector<ConditionExpression> && resourceRequirements) { DARABONBA_PTR_SET_RVALUE(resourceRequirements_, resourceRequirements) };


  protected:
    std::shared_ptr<Location> codeDir_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<vector<HyperParameterDefinition>> hyperParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<vector<Channel>> inputChannels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<vector<MetricDefinition>> metricDefinitions_ = nullptr;
    std::shared_ptr<vector<Channel>> outputChannels_ = nullptr;
    std::shared_ptr<vector<ConditionExpression>> resourceRequirements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
