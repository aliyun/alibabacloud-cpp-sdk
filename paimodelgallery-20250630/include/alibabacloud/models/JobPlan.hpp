// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBPLAN_HPP_
#define ALIBABACLOUD_MODELS_JOBPLAN_HPP_
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
  class JobPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobPlan& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(JobPlanCurrentStep, jobPlanCurrentStep_);
      DARABONBA_PTR_TO_JSON(JobPlanId, jobPlanId_);
      DARABONBA_PTR_TO_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_TO_JSON(JobPlanSteps, jobPlanSteps_);
      DARABONBA_PTR_TO_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, JobPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(JobPlanCurrentStep, jobPlanCurrentStep_);
      DARABONBA_PTR_FROM_JSON(JobPlanId, jobPlanId_);
      DARABONBA_PTR_FROM_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_FROM_JSON(JobPlanSteps, jobPlanSteps_);
      DARABONBA_PTR_FROM_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    JobPlan() = default ;
    JobPlan(const JobPlan &) = default ;
    JobPlan(JobPlan &&) = default ;
    JobPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobPlan() = default ;
    JobPlan& operator=(const JobPlan &) = default ;
    JobPlan& operator=(JobPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class JobPlanSteps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobPlanSteps& obj) { 
        DARABONBA_PTR_TO_JSON(JobPlanStepId, jobPlanStepId_);
        DARABONBA_PTR_TO_JSON(JobPlanStepName, jobPlanStepName_);
        DARABONBA_ANY_TO_JSON(JobPlanStepSpec, jobPlanStepSpec_);
        DARABONBA_PTR_TO_JSON(JobPlanStepType, jobPlanStepType_);
      };
      friend void from_json(const Darabonba::Json& j, JobPlanSteps& obj) { 
        DARABONBA_PTR_FROM_JSON(JobPlanStepId, jobPlanStepId_);
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
      virtual bool empty() const override { return this->jobPlanStepId_ == nullptr
        && this->jobPlanStepName_ == nullptr && this->jobPlanStepSpec_ == nullptr && this->jobPlanStepType_ == nullptr; };
      // jobPlanStepId Field Functions 
      bool hasJobPlanStepId() const { return this->jobPlanStepId_ != nullptr;};
      void deleteJobPlanStepId() { this->jobPlanStepId_ = nullptr;};
      inline string getJobPlanStepId() const { DARABONBA_PTR_GET_DEFAULT(jobPlanStepId_, "") };
      inline JobPlanSteps& setJobPlanStepId(string jobPlanStepId) { DARABONBA_PTR_SET_VALUE(jobPlanStepId_, jobPlanStepId) };


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
      shared_ptr<string> jobPlanStepId_ {};
      shared_ptr<string> jobPlanStepName_ {};
      Darabonba::Json jobPlanStepSpec_ {};
      shared_ptr<string> jobPlanStepType_ {};
    };

    virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->jobPlanCurrentStep_ == nullptr && this->jobPlanId_ == nullptr && this->jobPlanName_ == nullptr && this->jobPlanSteps_ == nullptr
        && this->jobPlanType_ == nullptr && this->ownerId_ == nullptr && this->tags_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->userId_ == nullptr && this->workspaceId_ == nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline JobPlan& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline JobPlan& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // jobPlanCurrentStep Field Functions 
    bool hasJobPlanCurrentStep() const { return this->jobPlanCurrentStep_ != nullptr;};
    void deleteJobPlanCurrentStep() { this->jobPlanCurrentStep_ = nullptr;};
    inline string getJobPlanCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(jobPlanCurrentStep_, "") };
    inline JobPlan& setJobPlanCurrentStep(string jobPlanCurrentStep) { DARABONBA_PTR_SET_VALUE(jobPlanCurrentStep_, jobPlanCurrentStep) };


    // jobPlanId Field Functions 
    bool hasJobPlanId() const { return this->jobPlanId_ != nullptr;};
    void deleteJobPlanId() { this->jobPlanId_ = nullptr;};
    inline string getJobPlanId() const { DARABONBA_PTR_GET_DEFAULT(jobPlanId_, "") };
    inline JobPlan& setJobPlanId(string jobPlanId) { DARABONBA_PTR_SET_VALUE(jobPlanId_, jobPlanId) };


    // jobPlanName Field Functions 
    bool hasJobPlanName() const { return this->jobPlanName_ != nullptr;};
    void deleteJobPlanName() { this->jobPlanName_ = nullptr;};
    inline string getJobPlanName() const { DARABONBA_PTR_GET_DEFAULT(jobPlanName_, "") };
    inline JobPlan& setJobPlanName(string jobPlanName) { DARABONBA_PTR_SET_VALUE(jobPlanName_, jobPlanName) };


    // jobPlanSteps Field Functions 
    bool hasJobPlanSteps() const { return this->jobPlanSteps_ != nullptr;};
    void deleteJobPlanSteps() { this->jobPlanSteps_ = nullptr;};
    inline const vector<JobPlan::JobPlanSteps> & getJobPlanSteps() const { DARABONBA_PTR_GET_CONST(jobPlanSteps_, vector<JobPlan::JobPlanSteps>) };
    inline vector<JobPlan::JobPlanSteps> getJobPlanSteps() { DARABONBA_PTR_GET(jobPlanSteps_, vector<JobPlan::JobPlanSteps>) };
    inline JobPlan& setJobPlanSteps(const vector<JobPlan::JobPlanSteps> & jobPlanSteps) { DARABONBA_PTR_SET_VALUE(jobPlanSteps_, jobPlanSteps) };
    inline JobPlan& setJobPlanSteps(vector<JobPlan::JobPlanSteps> && jobPlanSteps) { DARABONBA_PTR_SET_RVALUE(jobPlanSteps_, jobPlanSteps) };


    // jobPlanType Field Functions 
    bool hasJobPlanType() const { return this->jobPlanType_ != nullptr;};
    void deleteJobPlanType() { this->jobPlanType_ = nullptr;};
    inline string getJobPlanType() const { DARABONBA_PTR_GET_DEFAULT(jobPlanType_, "") };
    inline JobPlan& setJobPlanType(string jobPlanType) { DARABONBA_PTR_SET_VALUE(jobPlanType_, jobPlanType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline JobPlan& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<JobPlan::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<JobPlan::Tags>) };
    inline vector<JobPlan::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<JobPlan::Tags>) };
    inline JobPlan& setTags(const vector<JobPlan::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline JobPlan& setTags(vector<JobPlan::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline JobPlan& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline JobPlan& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline JobPlan& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline JobPlan& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> jobPlanCurrentStep_ {};
    shared_ptr<string> jobPlanId_ {};
    shared_ptr<string> jobPlanName_ {};
    shared_ptr<vector<JobPlan::JobPlanSteps>> jobPlanSteps_ {};
    shared_ptr<string> jobPlanType_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<vector<JobPlan::Tags>> tags_ {};
    // The distillation template ID used when creating the task plan. An empty value indicates that this is not a scenario-specific distillation task.
    shared_ptr<string> templateId_ {};
    // The display name of the distillation template used, localized based on the language specified in the request.
    shared_ptr<string> templateName_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
