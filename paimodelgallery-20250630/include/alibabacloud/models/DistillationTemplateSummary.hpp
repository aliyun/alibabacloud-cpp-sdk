// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTILLATIONTEMPLATESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DISTILLATIONTEMPLATESUMMARY_HPP_
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
  class DistillationTemplateSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistillationTemplateSummary& obj) { 
      DARABONBA_PTR_TO_JSON(CapabilityTags, capabilityTags_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(PipelineStages, pipelineStages_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrainingOptions, trainingOptions_);
    };
    friend void from_json(const Darabonba::Json& j, DistillationTemplateSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(CapabilityTags, capabilityTags_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(PipelineStages, pipelineStages_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrainingOptions, trainingOptions_);
    };
    DistillationTemplateSummary() = default ;
    DistillationTemplateSummary(const DistillationTemplateSummary &) = default ;
    DistillationTemplateSummary(DistillationTemplateSummary &&) = default ;
    DistillationTemplateSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistillationTemplateSummary() = default ;
    DistillationTemplateSummary& operator=(const DistillationTemplateSummary &) = default ;
    DistillationTemplateSummary& operator=(DistillationTemplateSummary &&) = default ;
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
      // The available Model Gallery Task values for the student model.
      shared_ptr<vector<string>> modelTasks_ {};
      // The list of supported training method families.
      shared_ptr<vector<string>> trainingMethods_ {};
      // The training type. The frontend uses this value to select the training workflow and display text.
      shared_ptr<string> trainingType_ {};
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
      // The stage description, localized based on the language specified in the request.
      shared_ptr<string> description_ {};
      // The stage identifier, which corresponds to the pipeline[].stage value in the algorithm configuration.
      shared_ptr<string> key_ {};
      // The stage display name, localized based on the language specified in the request.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->capabilityTags_ == nullptr
        && this->category_ == nullptr && this->description_ == nullptr && this->jobType_ == nullptr && this->orderNumber_ == nullptr && this->pipelineStages_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->trainingOptions_ == nullptr; };
    // capabilityTags Field Functions 
    bool hasCapabilityTags() const { return this->capabilityTags_ != nullptr;};
    void deleteCapabilityTags() { this->capabilityTags_ = nullptr;};
    inline const vector<string> & getCapabilityTags() const { DARABONBA_PTR_GET_CONST(capabilityTags_, vector<string>) };
    inline vector<string> getCapabilityTags() { DARABONBA_PTR_GET(capabilityTags_, vector<string>) };
    inline DistillationTemplateSummary& setCapabilityTags(const vector<string> & capabilityTags) { DARABONBA_PTR_SET_VALUE(capabilityTags_, capabilityTags) };
    inline DistillationTemplateSummary& setCapabilityTags(vector<string> && capabilityTags) { DARABONBA_PTR_SET_RVALUE(capabilityTags_, capabilityTags) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DistillationTemplateSummary& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DistillationTemplateSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DistillationTemplateSummary& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline int32_t getOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, 0) };
    inline DistillationTemplateSummary& setOrderNumber(int32_t orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // pipelineStages Field Functions 
    bool hasPipelineStages() const { return this->pipelineStages_ != nullptr;};
    void deletePipelineStages() { this->pipelineStages_ = nullptr;};
    inline const vector<DistillationTemplateSummary::PipelineStages> & getPipelineStages() const { DARABONBA_PTR_GET_CONST(pipelineStages_, vector<DistillationTemplateSummary::PipelineStages>) };
    inline vector<DistillationTemplateSummary::PipelineStages> getPipelineStages() { DARABONBA_PTR_GET(pipelineStages_, vector<DistillationTemplateSummary::PipelineStages>) };
    inline DistillationTemplateSummary& setPipelineStages(const vector<DistillationTemplateSummary::PipelineStages> & pipelineStages) { DARABONBA_PTR_SET_VALUE(pipelineStages_, pipelineStages) };
    inline DistillationTemplateSummary& setPipelineStages(vector<DistillationTemplateSummary::PipelineStages> && pipelineStages) { DARABONBA_PTR_SET_RVALUE(pipelineStages_, pipelineStages) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DistillationTemplateSummary& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DistillationTemplateSummary& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trainingOptions Field Functions 
    bool hasTrainingOptions() const { return this->trainingOptions_ != nullptr;};
    void deleteTrainingOptions() { this->trainingOptions_ = nullptr;};
    inline const vector<DistillationTemplateSummary::TrainingOptions> & getTrainingOptions() const { DARABONBA_PTR_GET_CONST(trainingOptions_, vector<DistillationTemplateSummary::TrainingOptions>) };
    inline vector<DistillationTemplateSummary::TrainingOptions> getTrainingOptions() { DARABONBA_PTR_GET(trainingOptions_, vector<DistillationTemplateSummary::TrainingOptions>) };
    inline DistillationTemplateSummary& setTrainingOptions(const vector<DistillationTemplateSummary::TrainingOptions> & trainingOptions) { DARABONBA_PTR_SET_VALUE(trainingOptions_, trainingOptions) };
    inline DistillationTemplateSummary& setTrainingOptions(vector<DistillationTemplateSummary::TrainingOptions> && trainingOptions) { DARABONBA_PTR_SET_RVALUE(trainingOptions_, trainingOptions) };


  protected:
    // The list of capability tags, used for scenario card display.
    shared_ptr<vector<string>> capabilityTags_ {};
    // The template category. The frontend uses this value to filter scenario cards.
    shared_ptr<string> category_ {};
    // The template description, localized based on the language specified in the request. The description specifies applicable scenarios and outputs.
    shared_ptr<string> description_ {};
    // The algorithm job type. The value is the same as TemplateId.
    shared_ptr<string> jobType_ {};
    // The display order. A smaller value indicates a higher position.
    shared_ptr<int32_t> orderNumber_ {};
    // The list of pipeline stages. The order of the stages represents the execution order.
    shared_ptr<vector<DistillationTemplateSummary::PipelineStages>> pipelineStages_ {};
    // The distillation template ID, which is the same as the algorithm job_type. Pass this value as TemplateId when creating a task plan.
    shared_ptr<string> templateId_ {};
    // The template display name, localized based on the language specified in the request.
    shared_ptr<string> templateName_ {};
    // The capability declaration for the second stage, in which the distilled data is used to train the student model. An empty value indicates that the template supports only the distillation stage.
    shared_ptr<vector<DistillationTemplateSummary::TrainingOptions>> trainingOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
