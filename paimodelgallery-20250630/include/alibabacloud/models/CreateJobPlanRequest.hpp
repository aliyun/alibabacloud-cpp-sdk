// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBPLANREQUEST_HPP_
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
  class CreateJobPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_TO_JSON(JobPlanSteps, jobPlanSteps_);
      DARABONBA_PTR_TO_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_FROM_JSON(JobPlanSteps, jobPlanSteps_);
      DARABONBA_PTR_FROM_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateJobPlanRequest() = default ;
    CreateJobPlanRequest(const CreateJobPlanRequest &) = default ;
    CreateJobPlanRequest(CreateJobPlanRequest &&) = default ;
    CreateJobPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobPlanRequest() = default ;
    CreateJobPlanRequest& operator=(const CreateJobPlanRequest &) = default ;
    CreateJobPlanRequest& operator=(CreateJobPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // **Key**
      shared_ptr<string> key_ {};
      // **Value**
      shared_ptr<string> value_ {};
    };

    class JobPlanSteps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobPlanSteps& obj) { 
        DARABONBA_PTR_TO_JSON(JobPlanStepName, jobPlanStepName_);
        DARABONBA_ANY_TO_JSON(JobPlanStepSpec, jobPlanStepSpec_);
        DARABONBA_PTR_TO_JSON(JobPlanStepType, jobPlanStepType_);
      };
      friend void from_json(const Darabonba::Json& j, JobPlanSteps& obj) { 
        DARABONBA_PTR_FROM_JSON(JobPlanStepName, jobPlanStepName_);
        DARABONBA_ANY_FROM_JSON(JobPlanStepSpec, jobPlanStepSpec_);
        DARABONBA_PTR_FROM_JSON(JobPlanStepType, jobPlanStepType_);
      };
      JobPlanSteps() = default ;
      JobPlanSteps(const JobPlanSteps &) = default ;
      JobPlanSteps(JobPlanSteps &&) = default ;
      JobPlanSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobPlanSteps() = default ;
      JobPlanSteps& operator=(const JobPlanSteps &) = default ;
      JobPlanSteps& operator=(JobPlanSteps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jobPlanStepName_ == nullptr
        && this->jobPlanStepSpec_ == nullptr && this->jobPlanStepType_ == nullptr; };
      // jobPlanStepName Field Functions 
      bool hasJobPlanStepName() const { return this->jobPlanStepName_ != nullptr;};
      void deleteJobPlanStepName() { this->jobPlanStepName_ = nullptr;};
      inline string getJobPlanStepName() const { DARABONBA_PTR_GET_DEFAULT(jobPlanStepName_, "") };
      inline JobPlanSteps& setJobPlanStepName(string jobPlanStepName) { DARABONBA_PTR_SET_VALUE(jobPlanStepName_, jobPlanStepName) };


      // jobPlanStepSpec Field Functions 
      bool hasJobPlanStepSpec() const { return this->jobPlanStepSpec_ != nullptr;};
      void deleteJobPlanStepSpec() { this->jobPlanStepSpec_ = nullptr;};
      inline       const Darabonba::Json & getJobPlanStepSpec() const { DARABONBA_GET(jobPlanStepSpec_) };
      Darabonba::Json & getJobPlanStepSpec() { DARABONBA_GET(jobPlanStepSpec_) };
      inline JobPlanSteps& setJobPlanStepSpec(const Darabonba::Json & jobPlanStepSpec) { DARABONBA_SET_VALUE(jobPlanStepSpec_, jobPlanStepSpec) };
      inline JobPlanSteps& setJobPlanStepSpec(Darabonba::Json && jobPlanStepSpec) { DARABONBA_SET_RVALUE(jobPlanStepSpec_, jobPlanStepSpec) };


      // jobPlanStepType Field Functions 
      bool hasJobPlanStepType() const { return this->jobPlanStepType_ != nullptr;};
      void deleteJobPlanStepType() { this->jobPlanStepType_ = nullptr;};
      inline string getJobPlanStepType() const { DARABONBA_PTR_GET_DEFAULT(jobPlanStepType_, "") };
      inline JobPlanSteps& setJobPlanStepType(string jobPlanStepType) { DARABONBA_PTR_SET_VALUE(jobPlanStepType_, jobPlanStepType) };


    protected:
      // The name of the job plan step.
      shared_ptr<string> jobPlanStepName_ {};
      // The detailed configuration of the job plan step.
      Darabonba::Json jobPlanStepSpec_ {};
      // The type of the job plan step.
      shared_ptr<string> jobPlanStepType_ {};
    };

    virtual bool empty() const override { return this->jobPlanName_ == nullptr
        && this->jobPlanSteps_ == nullptr && this->jobPlanType_ == nullptr && this->tag_ == nullptr && this->templateId_ == nullptr && this->workspaceId_ == nullptr; };
    // jobPlanName Field Functions 
    bool hasJobPlanName() const { return this->jobPlanName_ != nullptr;};
    void deleteJobPlanName() { this->jobPlanName_ = nullptr;};
    inline string getJobPlanName() const { DARABONBA_PTR_GET_DEFAULT(jobPlanName_, "") };
    inline CreateJobPlanRequest& setJobPlanName(string jobPlanName) { DARABONBA_PTR_SET_VALUE(jobPlanName_, jobPlanName) };


    // jobPlanSteps Field Functions 
    bool hasJobPlanSteps() const { return this->jobPlanSteps_ != nullptr;};
    void deleteJobPlanSteps() { this->jobPlanSteps_ = nullptr;};
    inline const vector<CreateJobPlanRequest::JobPlanSteps> & getJobPlanSteps() const { DARABONBA_PTR_GET_CONST(jobPlanSteps_, vector<CreateJobPlanRequest::JobPlanSteps>) };
    inline vector<CreateJobPlanRequest::JobPlanSteps> getJobPlanSteps() { DARABONBA_PTR_GET(jobPlanSteps_, vector<CreateJobPlanRequest::JobPlanSteps>) };
    inline CreateJobPlanRequest& setJobPlanSteps(const vector<CreateJobPlanRequest::JobPlanSteps> & jobPlanSteps) { DARABONBA_PTR_SET_VALUE(jobPlanSteps_, jobPlanSteps) };
    inline CreateJobPlanRequest& setJobPlanSteps(vector<CreateJobPlanRequest::JobPlanSteps> && jobPlanSteps) { DARABONBA_PTR_SET_RVALUE(jobPlanSteps_, jobPlanSteps) };


    // jobPlanType Field Functions 
    bool hasJobPlanType() const { return this->jobPlanType_ != nullptr;};
    void deleteJobPlanType() { this->jobPlanType_ = nullptr;};
    inline string getJobPlanType() const { DARABONBA_PTR_GET_DEFAULT(jobPlanType_, "") };
    inline CreateJobPlanRequest& setJobPlanType(string jobPlanType) { DARABONBA_PTR_SET_VALUE(jobPlanType_, jobPlanType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateJobPlanRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateJobPlanRequest::Tag>) };
    inline vector<CreateJobPlanRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateJobPlanRequest::Tag>) };
    inline CreateJobPlanRequest& setTag(const vector<CreateJobPlanRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateJobPlanRequest& setTag(vector<CreateJobPlanRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateJobPlanRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateJobPlanRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the job plan.
    shared_ptr<string> jobPlanName_ {};
    // The steps of the job plan.
    shared_ptr<vector<CreateJobPlanRequest::JobPlanSteps>> jobPlanSteps_ {};
    // The type of the job plan.
    shared_ptr<string> jobPlanType_ {};
    // Note: According to the Alibaba Cloud tag system specification, this parameter name is in singular form.
    shared_ptr<vector<CreateJobPlanRequest::Tag>> tag_ {};
    // The ID of the scenario-specific distillation template, obtained from ListDistillationTemplates. If this parameter is not specified, a general-purpose job plan is created.
    shared_ptr<string> templateId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
