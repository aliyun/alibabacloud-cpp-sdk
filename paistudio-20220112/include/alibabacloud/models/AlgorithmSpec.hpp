// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMSPEC_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlgorithmSpecComputeResource.hpp>
#include <alibabacloud/models/AlgorithmSpecCustomization.hpp>
#include <alibabacloud/PaiStudio20220112.hpp>
#include <alibabacloud/models/AlgorithmSpecProgressDefinitions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AlgorithmSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlgorithmSpec& obj) { 
      DARABONBA_PTR_TO_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Customization, customization_);
      DARABONBA_PTR_TO_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MetricDefinitions, metricDefinitions_);
      DARABONBA_PTR_TO_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_TO_JSON(ProgressDefinitions, progressDefinitions_);
      DARABONBA_PTR_TO_JSON(ResourceRequirements, resourceRequirements_);
      DARABONBA_PTR_TO_JSON(SupportedInstanceTypes, supportedInstanceTypes_);
      DARABONBA_PTR_TO_JSON(SupportsDistributedTraining, supportsDistributedTraining_);
    };
    friend void from_json(const Darabonba::Json& j, AlgorithmSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Customization, customization_);
      DARABONBA_PTR_FROM_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MetricDefinitions, metricDefinitions_);
      DARABONBA_PTR_FROM_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_FROM_JSON(ProgressDefinitions, progressDefinitions_);
      DARABONBA_PTR_FROM_JSON(ResourceRequirements, resourceRequirements_);
      DARABONBA_PTR_FROM_JSON(SupportedInstanceTypes, supportedInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(SupportsDistributedTraining, supportsDistributedTraining_);
    };
    AlgorithmSpec() = default ;
    AlgorithmSpec(const AlgorithmSpec &) = default ;
    AlgorithmSpec(AlgorithmSpec &&) = default ;
    AlgorithmSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlgorithmSpec() = default ;
    AlgorithmSpec& operator=(const AlgorithmSpec &) = default ;
    AlgorithmSpec& operator=(AlgorithmSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeDir_ != nullptr
        && this->command_ != nullptr && this->computeResource_ != nullptr && this->customization_ != nullptr && this->hyperParameters_ != nullptr && this->image_ != nullptr
        && this->inputChannels_ != nullptr && this->jobType_ != nullptr && this->metricDefinitions_ != nullptr && this->outputChannels_ != nullptr && this->progressDefinitions_ != nullptr
        && this->resourceRequirements_ != nullptr && this->supportedInstanceTypes_ != nullptr && this->supportsDistributedTraining_ != nullptr; };
    // codeDir Field Functions 
    bool hasCodeDir() const { return this->codeDir_ != nullptr;};
    void deleteCodeDir() { this->codeDir_ = nullptr;};
    inline const Location & codeDir() const { DARABONBA_PTR_GET_CONST(codeDir_, Location) };
    inline Location codeDir() { DARABONBA_PTR_GET(codeDir_, Location) };
    inline AlgorithmSpec& setCodeDir(const Location & codeDir) { DARABONBA_PTR_SET_VALUE(codeDir_, codeDir) };
    inline AlgorithmSpec& setCodeDir(Location && codeDir) { DARABONBA_PTR_SET_RVALUE(codeDir_, codeDir) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline AlgorithmSpec& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline AlgorithmSpec& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const AlgorithmSpecComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, AlgorithmSpecComputeResource) };
    inline AlgorithmSpecComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, AlgorithmSpecComputeResource) };
    inline AlgorithmSpec& setComputeResource(const AlgorithmSpecComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline AlgorithmSpec& setComputeResource(AlgorithmSpecComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // customization Field Functions 
    bool hasCustomization() const { return this->customization_ != nullptr;};
    void deleteCustomization() { this->customization_ = nullptr;};
    inline const AlgorithmSpecCustomization & customization() const { DARABONBA_PTR_GET_CONST(customization_, AlgorithmSpecCustomization) };
    inline AlgorithmSpecCustomization customization() { DARABONBA_PTR_GET(customization_, AlgorithmSpecCustomization) };
    inline AlgorithmSpec& setCustomization(const AlgorithmSpecCustomization & customization) { DARABONBA_PTR_SET_VALUE(customization_, customization) };
    inline AlgorithmSpec& setCustomization(AlgorithmSpecCustomization && customization) { DARABONBA_PTR_SET_RVALUE(customization_, customization) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<HyperParameterDefinition> & hyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<HyperParameterDefinition>) };
    inline vector<HyperParameterDefinition> hyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<HyperParameterDefinition>) };
    inline AlgorithmSpec& setHyperParameters(const vector<HyperParameterDefinition> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline AlgorithmSpec& setHyperParameters(vector<HyperParameterDefinition> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline AlgorithmSpec& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<Channel> & inputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<Channel>) };
    inline vector<Channel> inputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<Channel>) };
    inline AlgorithmSpec& setInputChannels(const vector<Channel> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline AlgorithmSpec& setInputChannels(vector<Channel> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline AlgorithmSpec& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // metricDefinitions Field Functions 
    bool hasMetricDefinitions() const { return this->metricDefinitions_ != nullptr;};
    void deleteMetricDefinitions() { this->metricDefinitions_ = nullptr;};
    inline const vector<MetricDefinition> & metricDefinitions() const { DARABONBA_PTR_GET_CONST(metricDefinitions_, vector<MetricDefinition>) };
    inline vector<MetricDefinition> metricDefinitions() { DARABONBA_PTR_GET(metricDefinitions_, vector<MetricDefinition>) };
    inline AlgorithmSpec& setMetricDefinitions(const vector<MetricDefinition> & metricDefinitions) { DARABONBA_PTR_SET_VALUE(metricDefinitions_, metricDefinitions) };
    inline AlgorithmSpec& setMetricDefinitions(vector<MetricDefinition> && metricDefinitions) { DARABONBA_PTR_SET_RVALUE(metricDefinitions_, metricDefinitions) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<Channel> & outputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<Channel>) };
    inline vector<Channel> outputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<Channel>) };
    inline AlgorithmSpec& setOutputChannels(const vector<Channel> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline AlgorithmSpec& setOutputChannels(vector<Channel> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // progressDefinitions Field Functions 
    bool hasProgressDefinitions() const { return this->progressDefinitions_ != nullptr;};
    void deleteProgressDefinitions() { this->progressDefinitions_ = nullptr;};
    inline const AlgorithmSpecProgressDefinitions & progressDefinitions() const { DARABONBA_PTR_GET_CONST(progressDefinitions_, AlgorithmSpecProgressDefinitions) };
    inline AlgorithmSpecProgressDefinitions progressDefinitions() { DARABONBA_PTR_GET(progressDefinitions_, AlgorithmSpecProgressDefinitions) };
    inline AlgorithmSpec& setProgressDefinitions(const AlgorithmSpecProgressDefinitions & progressDefinitions) { DARABONBA_PTR_SET_VALUE(progressDefinitions_, progressDefinitions) };
    inline AlgorithmSpec& setProgressDefinitions(AlgorithmSpecProgressDefinitions && progressDefinitions) { DARABONBA_PTR_SET_RVALUE(progressDefinitions_, progressDefinitions) };


    // resourceRequirements Field Functions 
    bool hasResourceRequirements() const { return this->resourceRequirements_ != nullptr;};
    void deleteResourceRequirements() { this->resourceRequirements_ = nullptr;};
    inline const vector<ConditionExpression> & resourceRequirements() const { DARABONBA_PTR_GET_CONST(resourceRequirements_, vector<ConditionExpression>) };
    inline vector<ConditionExpression> resourceRequirements() { DARABONBA_PTR_GET(resourceRequirements_, vector<ConditionExpression>) };
    inline AlgorithmSpec& setResourceRequirements(const vector<ConditionExpression> & resourceRequirements) { DARABONBA_PTR_SET_VALUE(resourceRequirements_, resourceRequirements) };
    inline AlgorithmSpec& setResourceRequirements(vector<ConditionExpression> && resourceRequirements) { DARABONBA_PTR_SET_RVALUE(resourceRequirements_, resourceRequirements) };


    // supportedInstanceTypes Field Functions 
    bool hasSupportedInstanceTypes() const { return this->supportedInstanceTypes_ != nullptr;};
    void deleteSupportedInstanceTypes() { this->supportedInstanceTypes_ = nullptr;};
    inline const vector<string> & supportedInstanceTypes() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypes_, vector<string>) };
    inline vector<string> supportedInstanceTypes() { DARABONBA_PTR_GET(supportedInstanceTypes_, vector<string>) };
    inline AlgorithmSpec& setSupportedInstanceTypes(const vector<string> & supportedInstanceTypes) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypes_, supportedInstanceTypes) };
    inline AlgorithmSpec& setSupportedInstanceTypes(vector<string> && supportedInstanceTypes) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypes_, supportedInstanceTypes) };


    // supportsDistributedTraining Field Functions 
    bool hasSupportsDistributedTraining() const { return this->supportsDistributedTraining_ != nullptr;};
    void deleteSupportsDistributedTraining() { this->supportsDistributedTraining_ = nullptr;};
    inline bool supportsDistributedTraining() const { DARABONBA_PTR_GET_DEFAULT(supportsDistributedTraining_, false) };
    inline AlgorithmSpec& setSupportsDistributedTraining(bool supportsDistributedTraining) { DARABONBA_PTR_SET_VALUE(supportsDistributedTraining_, supportsDistributedTraining) };


  protected:
    std::shared_ptr<Location> codeDir_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> command_ = nullptr;
    std::shared_ptr<AlgorithmSpecComputeResource> computeResource_ = nullptr;
    std::shared_ptr<AlgorithmSpecCustomization> customization_ = nullptr;
    std::shared_ptr<vector<HyperParameterDefinition>> hyperParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<vector<Channel>> inputChannels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<vector<MetricDefinition>> metricDefinitions_ = nullptr;
    std::shared_ptr<vector<Channel>> outputChannels_ = nullptr;
    std::shared_ptr<AlgorithmSpecProgressDefinitions> progressDefinitions_ = nullptr;
    std::shared_ptr<vector<ConditionExpression>> resourceRequirements_ = nullptr;
    std::shared_ptr<vector<string>> supportedInstanceTypes_ = nullptr;
    std::shared_ptr<bool> supportsDistributedTraining_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
