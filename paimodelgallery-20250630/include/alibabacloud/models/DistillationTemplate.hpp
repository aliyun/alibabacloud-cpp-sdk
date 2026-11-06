// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTILLATIONTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_DISTILLATIONTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class DistillationTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistillationTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_TO_JSON(CapabilityTags, capabilityTags_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DefaultConfig, defaultConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputDatasetMustBeDirectory, inputDatasetMustBeDirectory_);
      DARABONBA_PTR_TO_JSON(InputExampleUri, inputExampleUri_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(ModelSlots, modelSlots_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(PipelineStages, pipelineStages_);
      DARABONBA_PTR_TO_JSON(PresetConfig, presetConfig_);
      DARABONBA_PTR_TO_JSON(ProcessorExampleUri, processorExampleUri_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateKind, templateKind_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrainingOptions, trainingOptions_);
    };
    friend void from_json(const Darabonba::Json& j, DistillationTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_FROM_JSON(CapabilityTags, capabilityTags_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DefaultConfig, defaultConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputDatasetMustBeDirectory, inputDatasetMustBeDirectory_);
      DARABONBA_PTR_FROM_JSON(InputExampleUri, inputExampleUri_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(ModelSlots, modelSlots_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(PipelineStages, pipelineStages_);
      DARABONBA_PTR_FROM_JSON(PresetConfig, presetConfig_);
      DARABONBA_PTR_FROM_JSON(ProcessorExampleUri, processorExampleUri_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateKind, templateKind_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrainingOptions, trainingOptions_);
    };
    DistillationTemplate() = default ;
    DistillationTemplate(const DistillationTemplate &) = default ;
    DistillationTemplate(DistillationTemplate &&) = default ;
    DistillationTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistillationTemplate() = default ;
    DistillationTemplate& operator=(const DistillationTemplate &) = default ;
    DistillationTemplate& operator=(DistillationTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrainingOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrainingOptions& obj) { 
        DARABONBA_PTR_TO_JSON(ModelTasks, modelTasks_);
        DARABONBA_PTR_TO_JSON(TrainingMethods, trainingMethods_);
        DARABONBA_PTR_TO_JSON(TrainingType, trainingType_);
      };
      friend void from_json(const Darabonba::Json& j, TrainingOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelTasks, modelTasks_);
        DARABONBA_PTR_FROM_JSON(TrainingMethods, trainingMethods_);
        DARABONBA_PTR_FROM_JSON(TrainingType, trainingType_);
      };
      TrainingOptions() = default ;
      TrainingOptions(const TrainingOptions &) = default ;
      TrainingOptions(TrainingOptions &&) = default ;
      TrainingOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrainingOptions() = default ;
      TrainingOptions& operator=(const TrainingOptions &) = default ;
      TrainingOptions& operator=(TrainingOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelTasks_ == nullptr
        && this->trainingMethods_ == nullptr && this->trainingType_ == nullptr; };
      // modelTasks Field Functions 
      bool hasModelTasks() const { return this->modelTasks_ != nullptr;};
      void deleteModelTasks() { this->modelTasks_ = nullptr;};
      inline const vector<string> & getModelTasks() const { DARABONBA_PTR_GET_CONST(modelTasks_, vector<string>) };
      inline vector<string> getModelTasks() { DARABONBA_PTR_GET(modelTasks_, vector<string>) };
      inline TrainingOptions& setModelTasks(const vector<string> & modelTasks) { DARABONBA_PTR_SET_VALUE(modelTasks_, modelTasks) };
      inline TrainingOptions& setModelTasks(vector<string> && modelTasks) { DARABONBA_PTR_SET_RVALUE(modelTasks_, modelTasks) };


      // trainingMethods Field Functions 
      bool hasTrainingMethods() const { return this->trainingMethods_ != nullptr;};
      void deleteTrainingMethods() { this->trainingMethods_ = nullptr;};
      inline const vector<string> & getTrainingMethods() const { DARABONBA_PTR_GET_CONST(trainingMethods_, vector<string>) };
      inline vector<string> getTrainingMethods() { DARABONBA_PTR_GET(trainingMethods_, vector<string>) };
      inline TrainingOptions& setTrainingMethods(const vector<string> & trainingMethods) { DARABONBA_PTR_SET_VALUE(trainingMethods_, trainingMethods) };
      inline TrainingOptions& setTrainingMethods(vector<string> && trainingMethods) { DARABONBA_PTR_SET_RVALUE(trainingMethods_, trainingMethods) };


      // trainingType Field Functions 
      bool hasTrainingType() const { return this->trainingType_ != nullptr;};
      void deleteTrainingType() { this->trainingType_ = nullptr;};
      inline string getTrainingType() const { DARABONBA_PTR_GET_DEFAULT(trainingType_, "") };
      inline TrainingOptions& setTrainingType(string trainingType) { DARABONBA_PTR_SET_VALUE(trainingType_, trainingType) };


    protected:
      shared_ptr<vector<string>> modelTasks_ {};
      shared_ptr<vector<string>> trainingMethods_ {};
      shared_ptr<string> trainingType_ {};
    };

    class PresetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PresetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, PresetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      PresetConfig() = default ;
      PresetConfig(const PresetConfig &) = default ;
      PresetConfig(PresetConfig &&) = default ;
      PresetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PresetConfig() = default ;
      PresetConfig& operator=(const PresetConfig &) = default ;
      PresetConfig& operator=(PresetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->label_ == nullptr
        && this->value_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline PresetConfig& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline PresetConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> label_ {};
      shared_ptr<string> value_ {};
    };

    class PipelineStages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PipelineStages& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, PipelineStages& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      PipelineStages() = default ;
      PipelineStages(const PipelineStages &) = default ;
      PipelineStages(PipelineStages &&) = default ;
      PipelineStages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PipelineStages() = default ;
      PipelineStages& operator=(const PipelineStages &) = default ;
      PipelineStages& operator=(PipelineStages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr && this->name_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PipelineStages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline PipelineStages& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PipelineStages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> key_ {};
      shared_ptr<string> name_ {};
    };

    class ModelSlots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelSlots& obj) { 
        DARABONBA_PTR_TO_JSON(Backends, backends_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Required, required_);
      };
      friend void from_json(const Darabonba::Json& j, ModelSlots& obj) { 
        DARABONBA_PTR_FROM_JSON(Backends, backends_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Required, required_);
      };
      ModelSlots() = default ;
      ModelSlots(const ModelSlots &) = default ;
      ModelSlots(ModelSlots &&) = default ;
      ModelSlots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelSlots() = default ;
      ModelSlots& operator=(const ModelSlots &) = default ;
      ModelSlots& operator=(ModelSlots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Backends : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backends& obj) { 
          DARABONBA_PTR_TO_JSON(Channel, channel_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Backends& obj) { 
          DARABONBA_PTR_FROM_JSON(Channel, channel_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Backends() = default ;
        Backends(const Backends &) = default ;
        Backends(Backends &&) = default ;
        Backends(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Backends() = default ;
        Backends& operator=(const Backends &) = default ;
        Backends& operator=(Backends &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channel_ == nullptr
        && this->type_ == nullptr; };
        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline Backends& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Backends& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> channel_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->backends_ == nullptr
        && this->description_ == nullptr && this->key_ == nullptr && this->name_ == nullptr && this->required_ == nullptr; };
      // backends Field Functions 
      bool hasBackends() const { return this->backends_ != nullptr;};
      void deleteBackends() { this->backends_ = nullptr;};
      inline const vector<ModelSlots::Backends> & getBackends() const { DARABONBA_PTR_GET_CONST(backends_, vector<ModelSlots::Backends>) };
      inline vector<ModelSlots::Backends> getBackends() { DARABONBA_PTR_GET(backends_, vector<ModelSlots::Backends>) };
      inline ModelSlots& setBackends(const vector<ModelSlots::Backends> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
      inline ModelSlots& setBackends(vector<ModelSlots::Backends> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ModelSlots& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ModelSlots& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ModelSlots& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline ModelSlots& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    protected:
      shared_ptr<vector<ModelSlots::Backends>> backends_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> key_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> required_ {};
    };

    virtual bool empty() const override { return this->algorithmName_ == nullptr
        && this->algorithmProvider_ == nullptr && this->algorithmVersion_ == nullptr && this->capabilityTags_ == nullptr && this->category_ == nullptr && this->defaultConfig_ == nullptr
        && this->description_ == nullptr && this->inputDatasetMustBeDirectory_ == nullptr && this->inputExampleUri_ == nullptr && this->jobType_ == nullptr && this->modelSlots_ == nullptr
        && this->orderNumber_ == nullptr && this->pipelineStages_ == nullptr && this->presetConfig_ == nullptr && this->processorExampleUri_ == nullptr && this->templateId_ == nullptr
        && this->templateKind_ == nullptr && this->templateName_ == nullptr && this->trainingOptions_ == nullptr; };
    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string getAlgorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline DistillationTemplate& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // algorithmProvider Field Functions 
    bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
    void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
    inline string getAlgorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
    inline DistillationTemplate& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


    // algorithmVersion Field Functions 
    bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
    void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
    inline string getAlgorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
    inline DistillationTemplate& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


    // capabilityTags Field Functions 
    bool hasCapabilityTags() const { return this->capabilityTags_ != nullptr;};
    void deleteCapabilityTags() { this->capabilityTags_ = nullptr;};
    inline const vector<string> & getCapabilityTags() const { DARABONBA_PTR_GET_CONST(capabilityTags_, vector<string>) };
    inline vector<string> getCapabilityTags() { DARABONBA_PTR_GET(capabilityTags_, vector<string>) };
    inline DistillationTemplate& setCapabilityTags(const vector<string> & capabilityTags) { DARABONBA_PTR_SET_VALUE(capabilityTags_, capabilityTags) };
    inline DistillationTemplate& setCapabilityTags(vector<string> && capabilityTags) { DARABONBA_PTR_SET_RVALUE(capabilityTags_, capabilityTags) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DistillationTemplate& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // defaultConfig Field Functions 
    bool hasDefaultConfig() const { return this->defaultConfig_ != nullptr;};
    void deleteDefaultConfig() { this->defaultConfig_ = nullptr;};
    inline string getDefaultConfig() const { DARABONBA_PTR_GET_DEFAULT(defaultConfig_, "") };
    inline DistillationTemplate& setDefaultConfig(string defaultConfig) { DARABONBA_PTR_SET_VALUE(defaultConfig_, defaultConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DistillationTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputDatasetMustBeDirectory Field Functions 
    bool hasInputDatasetMustBeDirectory() const { return this->inputDatasetMustBeDirectory_ != nullptr;};
    void deleteInputDatasetMustBeDirectory() { this->inputDatasetMustBeDirectory_ = nullptr;};
    inline bool getInputDatasetMustBeDirectory() const { DARABONBA_PTR_GET_DEFAULT(inputDatasetMustBeDirectory_, false) };
    inline DistillationTemplate& setInputDatasetMustBeDirectory(bool inputDatasetMustBeDirectory) { DARABONBA_PTR_SET_VALUE(inputDatasetMustBeDirectory_, inputDatasetMustBeDirectory) };


    // inputExampleUri Field Functions 
    bool hasInputExampleUri() const { return this->inputExampleUri_ != nullptr;};
    void deleteInputExampleUri() { this->inputExampleUri_ = nullptr;};
    inline string getInputExampleUri() const { DARABONBA_PTR_GET_DEFAULT(inputExampleUri_, "") };
    inline DistillationTemplate& setInputExampleUri(string inputExampleUri) { DARABONBA_PTR_SET_VALUE(inputExampleUri_, inputExampleUri) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DistillationTemplate& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // modelSlots Field Functions 
    bool hasModelSlots() const { return this->modelSlots_ != nullptr;};
    void deleteModelSlots() { this->modelSlots_ = nullptr;};
    inline const vector<DistillationTemplate::ModelSlots> & getModelSlots() const { DARABONBA_PTR_GET_CONST(modelSlots_, vector<DistillationTemplate::ModelSlots>) };
    inline vector<DistillationTemplate::ModelSlots> getModelSlots() { DARABONBA_PTR_GET(modelSlots_, vector<DistillationTemplate::ModelSlots>) };
    inline DistillationTemplate& setModelSlots(const vector<DistillationTemplate::ModelSlots> & modelSlots) { DARABONBA_PTR_SET_VALUE(modelSlots_, modelSlots) };
    inline DistillationTemplate& setModelSlots(vector<DistillationTemplate::ModelSlots> && modelSlots) { DARABONBA_PTR_SET_RVALUE(modelSlots_, modelSlots) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline int32_t getOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, 0) };
    inline DistillationTemplate& setOrderNumber(int32_t orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // pipelineStages Field Functions 
    bool hasPipelineStages() const { return this->pipelineStages_ != nullptr;};
    void deletePipelineStages() { this->pipelineStages_ = nullptr;};
    inline const vector<DistillationTemplate::PipelineStages> & getPipelineStages() const { DARABONBA_PTR_GET_CONST(pipelineStages_, vector<DistillationTemplate::PipelineStages>) };
    inline vector<DistillationTemplate::PipelineStages> getPipelineStages() { DARABONBA_PTR_GET(pipelineStages_, vector<DistillationTemplate::PipelineStages>) };
    inline DistillationTemplate& setPipelineStages(const vector<DistillationTemplate::PipelineStages> & pipelineStages) { DARABONBA_PTR_SET_VALUE(pipelineStages_, pipelineStages) };
    inline DistillationTemplate& setPipelineStages(vector<DistillationTemplate::PipelineStages> && pipelineStages) { DARABONBA_PTR_SET_RVALUE(pipelineStages_, pipelineStages) };


    // presetConfig Field Functions 
    bool hasPresetConfig() const { return this->presetConfig_ != nullptr;};
    void deletePresetConfig() { this->presetConfig_ = nullptr;};
    inline const vector<DistillationTemplate::PresetConfig> & getPresetConfig() const { DARABONBA_PTR_GET_CONST(presetConfig_, vector<DistillationTemplate::PresetConfig>) };
    inline vector<DistillationTemplate::PresetConfig> getPresetConfig() { DARABONBA_PTR_GET(presetConfig_, vector<DistillationTemplate::PresetConfig>) };
    inline DistillationTemplate& setPresetConfig(const vector<DistillationTemplate::PresetConfig> & presetConfig) { DARABONBA_PTR_SET_VALUE(presetConfig_, presetConfig) };
    inline DistillationTemplate& setPresetConfig(vector<DistillationTemplate::PresetConfig> && presetConfig) { DARABONBA_PTR_SET_RVALUE(presetConfig_, presetConfig) };


    // processorExampleUri Field Functions 
    bool hasProcessorExampleUri() const { return this->processorExampleUri_ != nullptr;};
    void deleteProcessorExampleUri() { this->processorExampleUri_ = nullptr;};
    inline string getProcessorExampleUri() const { DARABONBA_PTR_GET_DEFAULT(processorExampleUri_, "") };
    inline DistillationTemplate& setProcessorExampleUri(string processorExampleUri) { DARABONBA_PTR_SET_VALUE(processorExampleUri_, processorExampleUri) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DistillationTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateKind Field Functions 
    bool hasTemplateKind() const { return this->templateKind_ != nullptr;};
    void deleteTemplateKind() { this->templateKind_ = nullptr;};
    inline string getTemplateKind() const { DARABONBA_PTR_GET_DEFAULT(templateKind_, "") };
    inline DistillationTemplate& setTemplateKind(string templateKind) { DARABONBA_PTR_SET_VALUE(templateKind_, templateKind) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DistillationTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trainingOptions Field Functions 
    bool hasTrainingOptions() const { return this->trainingOptions_ != nullptr;};
    void deleteTrainingOptions() { this->trainingOptions_ = nullptr;};
    inline const vector<DistillationTemplate::TrainingOptions> & getTrainingOptions() const { DARABONBA_PTR_GET_CONST(trainingOptions_, vector<DistillationTemplate::TrainingOptions>) };
    inline vector<DistillationTemplate::TrainingOptions> getTrainingOptions() { DARABONBA_PTR_GET(trainingOptions_, vector<DistillationTemplate::TrainingOptions>) };
    inline DistillationTemplate& setTrainingOptions(const vector<DistillationTemplate::TrainingOptions> & trainingOptions) { DARABONBA_PTR_SET_VALUE(trainingOptions_, trainingOptions) };
    inline DistillationTemplate& setTrainingOptions(vector<DistillationTemplate::TrainingOptions> && trainingOptions) { DARABONBA_PTR_SET_RVALUE(trainingOptions_, trainingOptions) };


  protected:
    shared_ptr<string> algorithmName_ {};
    shared_ptr<string> algorithmProvider_ {};
    shared_ptr<string> algorithmVersion_ {};
    shared_ptr<vector<string>> capabilityTags_ {};
    shared_ptr<string> category_ {};
    shared_ptr<string> defaultConfig_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> inputDatasetMustBeDirectory_ {};
    shared_ptr<string> inputExampleUri_ {};
    shared_ptr<string> jobType_ {};
    shared_ptr<vector<DistillationTemplate::ModelSlots>> modelSlots_ {};
    shared_ptr<int32_t> orderNumber_ {};
    shared_ptr<vector<DistillationTemplate::PipelineStages>> pipelineStages_ {};
    shared_ptr<vector<DistillationTemplate::PresetConfig>> presetConfig_ {};
    shared_ptr<string> processorExampleUri_ {};
    shared_ptr<string> templateId_ {};
    shared_ptr<string> templateKind_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<vector<DistillationTemplate::TrainingOptions>> trainingOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
