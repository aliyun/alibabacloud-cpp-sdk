// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMSPEC_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMSPEC_HPP_
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
    class ProgressDefinitions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProgressDefinitions& obj) { 
        DARABONBA_PTR_TO_JSON(OverallProgress, overallProgress_);
        DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
      };
      friend void from_json(const Darabonba::Json& j, ProgressDefinitions& obj) { 
        DARABONBA_PTR_FROM_JSON(OverallProgress, overallProgress_);
        DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
      };
      ProgressDefinitions() = default ;
      ProgressDefinitions(const ProgressDefinitions &) = default ;
      ProgressDefinitions(ProgressDefinitions &&) = default ;
      ProgressDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProgressDefinitions() = default ;
      ProgressDefinitions& operator=(const ProgressDefinitions &) = default ;
      ProgressDefinitions& operator=(ProgressDefinitions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemainingTime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemainingTime& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Regex, regex_);
        };
        friend void from_json(const Darabonba::Json& j, RemainingTime& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Regex, regex_);
        };
        RemainingTime() = default ;
        RemainingTime(const RemainingTime &) = default ;
        RemainingTime(RemainingTime &&) = default ;
        RemainingTime(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemainingTime() = default ;
        RemainingTime& operator=(const RemainingTime &) = default ;
        RemainingTime& operator=(RemainingTime &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->regex_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RemainingTime& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regex Field Functions 
        bool hasRegex() const { return this->regex_ != nullptr;};
        void deleteRegex() { this->regex_ = nullptr;};
        inline string getRegex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
        inline RemainingTime& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> regex_ {};
      };

      class OverallProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OverallProgress& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Regex, regex_);
        };
        friend void from_json(const Darabonba::Json& j, OverallProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Regex, regex_);
        };
        OverallProgress() = default ;
        OverallProgress(const OverallProgress &) = default ;
        OverallProgress(OverallProgress &&) = default ;
        OverallProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OverallProgress() = default ;
        OverallProgress& operator=(const OverallProgress &) = default ;
        OverallProgress& operator=(OverallProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->regex_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline OverallProgress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regex Field Functions 
        bool hasRegex() const { return this->regex_ != nullptr;};
        void deleteRegex() { this->regex_ = nullptr;};
        inline string getRegex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
        inline OverallProgress& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> regex_ {};
      };

      virtual bool empty() const override { return this->overallProgress_ == nullptr
        && this->remainingTime_ == nullptr; };
      // overallProgress Field Functions 
      bool hasOverallProgress() const { return this->overallProgress_ != nullptr;};
      void deleteOverallProgress() { this->overallProgress_ = nullptr;};
      inline const ProgressDefinitions::OverallProgress & getOverallProgress() const { DARABONBA_PTR_GET_CONST(overallProgress_, ProgressDefinitions::OverallProgress) };
      inline ProgressDefinitions::OverallProgress getOverallProgress() { DARABONBA_PTR_GET(overallProgress_, ProgressDefinitions::OverallProgress) };
      inline ProgressDefinitions& setOverallProgress(const ProgressDefinitions::OverallProgress & overallProgress) { DARABONBA_PTR_SET_VALUE(overallProgress_, overallProgress) };
      inline ProgressDefinitions& setOverallProgress(ProgressDefinitions::OverallProgress && overallProgress) { DARABONBA_PTR_SET_RVALUE(overallProgress_, overallProgress) };


      // remainingTime Field Functions 
      bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
      void deleteRemainingTime() { this->remainingTime_ = nullptr;};
      inline const ProgressDefinitions::RemainingTime & getRemainingTime() const { DARABONBA_PTR_GET_CONST(remainingTime_, ProgressDefinitions::RemainingTime) };
      inline ProgressDefinitions::RemainingTime getRemainingTime() { DARABONBA_PTR_GET(remainingTime_, ProgressDefinitions::RemainingTime) };
      inline ProgressDefinitions& setRemainingTime(const ProgressDefinitions::RemainingTime & remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };
      inline ProgressDefinitions& setRemainingTime(ProgressDefinitions::RemainingTime && remainingTime) { DARABONBA_PTR_SET_RVALUE(remainingTime_, remainingTime) };


    protected:
      shared_ptr<ProgressDefinitions::OverallProgress> overallProgress_ {};
      shared_ptr<ProgressDefinitions::RemainingTime> remainingTime_ {};
    };

    class Customization : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Customization& obj) { 
        DARABONBA_PTR_TO_JSON(CodeDir, codeDir_);
      };
      friend void from_json(const Darabonba::Json& j, Customization& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeDir, codeDir_);
      };
      Customization() = default ;
      Customization(const Customization &) = default ;
      Customization(Customization &&) = default ;
      Customization(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Customization() = default ;
      Customization& operator=(const Customization &) = default ;
      Customization& operator=(Customization &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->codeDir_ == nullptr; };
      // codeDir Field Functions 
      bool hasCodeDir() const { return this->codeDir_ != nullptr;};
      void deleteCodeDir() { this->codeDir_ = nullptr;};
      inline bool getCodeDir() const { DARABONBA_PTR_GET_DEFAULT(codeDir_, false) };
      inline Customization& setCodeDir(bool codeDir) { DARABONBA_PTR_SET_VALUE(codeDir_, codeDir) };


    protected:
      shared_ptr<bool> codeDir_ {};
    };

    class ComputeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComputeResource& obj) { 
        DARABONBA_PTR_TO_JSON(Policy, policy_);
      };
      friend void from_json(const Darabonba::Json& j, ComputeResource& obj) { 
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
      };
      ComputeResource() = default ;
      ComputeResource(const ComputeResource &) = default ;
      ComputeResource(ComputeResource &&) = default ;
      ComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComputeResource() = default ;
      ComputeResource& operator=(const ComputeResource &) = default ;
      ComputeResource& operator=(ComputeResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Policy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policy& obj) { 
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Policy& obj) { 
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Policy() = default ;
        Policy(const Policy &) = default ;
        Policy(Policy &&) = default ;
        Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Policy() = default ;
        Policy& operator=(const Policy &) = default ;
        Policy& operator=(Policy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->value_ == nullptr
        && this->version_ == nullptr; };
        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Policy& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Policy& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // This parameter is required.
        shared_ptr<string> value_ {};
        // This parameter is required.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->policy_ == nullptr; };
      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline const ComputeResource::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, ComputeResource::Policy) };
      inline ComputeResource::Policy getPolicy() { DARABONBA_PTR_GET(policy_, ComputeResource::Policy) };
      inline ComputeResource& setPolicy(const ComputeResource::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
      inline ComputeResource& setPolicy(ComputeResource::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    protected:
      // This parameter is required.
      shared_ptr<ComputeResource::Policy> policy_ {};
    };

    virtual bool empty() const override { return this->codeDir_ == nullptr
        && this->command_ == nullptr && this->computeResource_ == nullptr && this->customization_ == nullptr && this->hyperParameters_ == nullptr && this->image_ == nullptr
        && this->inputChannels_ == nullptr && this->jobType_ == nullptr && this->metricDefinitions_ == nullptr && this->outputChannels_ == nullptr && this->progressDefinitions_ == nullptr
        && this->resourceRequirements_ == nullptr && this->supportedInstanceTypes_ == nullptr && this->supportsDistributedTraining_ == nullptr; };
    // codeDir Field Functions 
    bool hasCodeDir() const { return this->codeDir_ != nullptr;};
    void deleteCodeDir() { this->codeDir_ = nullptr;};
    inline const Location & getCodeDir() const { DARABONBA_PTR_GET_CONST(codeDir_, Location) };
    inline Location getCodeDir() { DARABONBA_PTR_GET(codeDir_, Location) };
    inline AlgorithmSpec& setCodeDir(const Location & codeDir) { DARABONBA_PTR_SET_VALUE(codeDir_, codeDir) };
    inline AlgorithmSpec& setCodeDir(Location && codeDir) { DARABONBA_PTR_SET_RVALUE(codeDir_, codeDir) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline AlgorithmSpec& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline AlgorithmSpec& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const AlgorithmSpec::ComputeResource & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, AlgorithmSpec::ComputeResource) };
    inline AlgorithmSpec::ComputeResource getComputeResource() { DARABONBA_PTR_GET(computeResource_, AlgorithmSpec::ComputeResource) };
    inline AlgorithmSpec& setComputeResource(const AlgorithmSpec::ComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline AlgorithmSpec& setComputeResource(AlgorithmSpec::ComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // customization Field Functions 
    bool hasCustomization() const { return this->customization_ != nullptr;};
    void deleteCustomization() { this->customization_ = nullptr;};
    inline const AlgorithmSpec::Customization & getCustomization() const { DARABONBA_PTR_GET_CONST(customization_, AlgorithmSpec::Customization) };
    inline AlgorithmSpec::Customization getCustomization() { DARABONBA_PTR_GET(customization_, AlgorithmSpec::Customization) };
    inline AlgorithmSpec& setCustomization(const AlgorithmSpec::Customization & customization) { DARABONBA_PTR_SET_VALUE(customization_, customization) };
    inline AlgorithmSpec& setCustomization(AlgorithmSpec::Customization && customization) { DARABONBA_PTR_SET_RVALUE(customization_, customization) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<HyperParameterDefinition> & getHyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<HyperParameterDefinition>) };
    inline vector<HyperParameterDefinition> getHyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<HyperParameterDefinition>) };
    inline AlgorithmSpec& setHyperParameters(const vector<HyperParameterDefinition> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline AlgorithmSpec& setHyperParameters(vector<HyperParameterDefinition> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline AlgorithmSpec& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<Channel> & getInputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<Channel>) };
    inline vector<Channel> getInputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<Channel>) };
    inline AlgorithmSpec& setInputChannels(const vector<Channel> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline AlgorithmSpec& setInputChannels(vector<Channel> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline AlgorithmSpec& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // metricDefinitions Field Functions 
    bool hasMetricDefinitions() const { return this->metricDefinitions_ != nullptr;};
    void deleteMetricDefinitions() { this->metricDefinitions_ = nullptr;};
    inline const vector<MetricDefinition> & getMetricDefinitions() const { DARABONBA_PTR_GET_CONST(metricDefinitions_, vector<MetricDefinition>) };
    inline vector<MetricDefinition> getMetricDefinitions() { DARABONBA_PTR_GET(metricDefinitions_, vector<MetricDefinition>) };
    inline AlgorithmSpec& setMetricDefinitions(const vector<MetricDefinition> & metricDefinitions) { DARABONBA_PTR_SET_VALUE(metricDefinitions_, metricDefinitions) };
    inline AlgorithmSpec& setMetricDefinitions(vector<MetricDefinition> && metricDefinitions) { DARABONBA_PTR_SET_RVALUE(metricDefinitions_, metricDefinitions) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<Channel> & getOutputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<Channel>) };
    inline vector<Channel> getOutputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<Channel>) };
    inline AlgorithmSpec& setOutputChannels(const vector<Channel> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline AlgorithmSpec& setOutputChannels(vector<Channel> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // progressDefinitions Field Functions 
    bool hasProgressDefinitions() const { return this->progressDefinitions_ != nullptr;};
    void deleteProgressDefinitions() { this->progressDefinitions_ = nullptr;};
    inline const AlgorithmSpec::ProgressDefinitions & getProgressDefinitions() const { DARABONBA_PTR_GET_CONST(progressDefinitions_, AlgorithmSpec::ProgressDefinitions) };
    inline AlgorithmSpec::ProgressDefinitions getProgressDefinitions() { DARABONBA_PTR_GET(progressDefinitions_, AlgorithmSpec::ProgressDefinitions) };
    inline AlgorithmSpec& setProgressDefinitions(const AlgorithmSpec::ProgressDefinitions & progressDefinitions) { DARABONBA_PTR_SET_VALUE(progressDefinitions_, progressDefinitions) };
    inline AlgorithmSpec& setProgressDefinitions(AlgorithmSpec::ProgressDefinitions && progressDefinitions) { DARABONBA_PTR_SET_RVALUE(progressDefinitions_, progressDefinitions) };


    // resourceRequirements Field Functions 
    bool hasResourceRequirements() const { return this->resourceRequirements_ != nullptr;};
    void deleteResourceRequirements() { this->resourceRequirements_ = nullptr;};
    inline const vector<ConditionExpression> & getResourceRequirements() const { DARABONBA_PTR_GET_CONST(resourceRequirements_, vector<ConditionExpression>) };
    inline vector<ConditionExpression> getResourceRequirements() { DARABONBA_PTR_GET(resourceRequirements_, vector<ConditionExpression>) };
    inline AlgorithmSpec& setResourceRequirements(const vector<ConditionExpression> & resourceRequirements) { DARABONBA_PTR_SET_VALUE(resourceRequirements_, resourceRequirements) };
    inline AlgorithmSpec& setResourceRequirements(vector<ConditionExpression> && resourceRequirements) { DARABONBA_PTR_SET_RVALUE(resourceRequirements_, resourceRequirements) };


    // supportedInstanceTypes Field Functions 
    bool hasSupportedInstanceTypes() const { return this->supportedInstanceTypes_ != nullptr;};
    void deleteSupportedInstanceTypes() { this->supportedInstanceTypes_ = nullptr;};
    inline const vector<string> & getSupportedInstanceTypes() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypes_, vector<string>) };
    inline vector<string> getSupportedInstanceTypes() { DARABONBA_PTR_GET(supportedInstanceTypes_, vector<string>) };
    inline AlgorithmSpec& setSupportedInstanceTypes(const vector<string> & supportedInstanceTypes) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypes_, supportedInstanceTypes) };
    inline AlgorithmSpec& setSupportedInstanceTypes(vector<string> && supportedInstanceTypes) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypes_, supportedInstanceTypes) };


    // supportsDistributedTraining Field Functions 
    bool hasSupportsDistributedTraining() const { return this->supportsDistributedTraining_ != nullptr;};
    void deleteSupportsDistributedTraining() { this->supportsDistributedTraining_ = nullptr;};
    inline bool getSupportsDistributedTraining() const { DARABONBA_PTR_GET_DEFAULT(supportsDistributedTraining_, false) };
    inline AlgorithmSpec& setSupportsDistributedTraining(bool supportsDistributedTraining) { DARABONBA_PTR_SET_VALUE(supportsDistributedTraining_, supportsDistributedTraining) };


  protected:
    shared_ptr<Location> codeDir_ {};
    // This parameter is required.
    shared_ptr<vector<string>> command_ {};
    shared_ptr<AlgorithmSpec::ComputeResource> computeResource_ {};
    shared_ptr<AlgorithmSpec::Customization> customization_ {};
    shared_ptr<vector<HyperParameterDefinition>> hyperParameters_ {};
    // This parameter is required.
    shared_ptr<string> image_ {};
    shared_ptr<vector<Channel>> inputChannels_ {};
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    shared_ptr<vector<MetricDefinition>> metricDefinitions_ {};
    shared_ptr<vector<Channel>> outputChannels_ {};
    shared_ptr<AlgorithmSpec::ProgressDefinitions> progressDefinitions_ {};
    shared_ptr<vector<ConditionExpression>> resourceRequirements_ {};
    shared_ptr<vector<string>> supportedInstanceTypes_ {};
    shared_ptr<bool> supportsDistributedTraining_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
