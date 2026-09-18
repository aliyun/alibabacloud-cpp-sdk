// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBPLANRESPONSEBODY_HPP_
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
  class GetJobPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(JobPlanCurrentStep, jobPlanCurrentStep_);
      DARABONBA_PTR_TO_JSON(JobPlanId, jobPlanId_);
      DARABONBA_PTR_TO_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_TO_JSON(JobPlanSteps, jobPlanSteps_);
      DARABONBA_PTR_TO_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(JobPlanCurrentStep, jobPlanCurrentStep_);
      DARABONBA_PTR_FROM_JSON(JobPlanId, jobPlanId_);
      DARABONBA_PTR_FROM_JSON(JobPlanName, jobPlanName_);
      DARABONBA_PTR_FROM_JSON(JobPlanSteps, jobPlanSteps_);
      DARABONBA_PTR_FROM_JSON(JobPlanType, jobPlanType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetJobPlanResponseBody() = default ;
    GetJobPlanResponseBody(const GetJobPlanResponseBody &) = default ;
    GetJobPlanResponseBody(GetJobPlanResponseBody &&) = default ;
    GetJobPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobPlanResponseBody() = default ;
    GetJobPlanResponseBody& operator=(const GetJobPlanResponseBody &) = default ;
    GetJobPlanResponseBody& operator=(GetJobPlanResponseBody &&) = default ;
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
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
      // The generated PAIFlow PipelineRunId.
      shared_ptr<string> jobPlanStepId_ {};
      // The job plan step name.
      shared_ptr<string> jobPlanStepName_ {};
      // The job plan step configuration.
      Darabonba::Json jobPlanStepSpec_ {};
      // The job plan step type.
      shared_ptr<string> jobPlanStepType_ {};
    };

    virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->jobPlanCurrentStep_ == nullptr && this->jobPlanId_ == nullptr && this->jobPlanName_ == nullptr && this->jobPlanSteps_ == nullptr
        && this->jobPlanType_ == nullptr && this->ownerId_ == nullptr && this->requestId_ == nullptr && this->tags_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->userId_ == nullptr && this->workspaceId_ == nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetJobPlanResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetJobPlanResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // jobPlanCurrentStep Field Functions 
    bool hasJobPlanCurrentStep() const { return this->jobPlanCurrentStep_ != nullptr;};
    void deleteJobPlanCurrentStep() { this->jobPlanCurrentStep_ = nullptr;};
    inline string getJobPlanCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(jobPlanCurrentStep_, "") };
    inline GetJobPlanResponseBody& setJobPlanCurrentStep(string jobPlanCurrentStep) { DARABONBA_PTR_SET_VALUE(jobPlanCurrentStep_, jobPlanCurrentStep) };


    // jobPlanId Field Functions 
    bool hasJobPlanId() const { return this->jobPlanId_ != nullptr;};
    void deleteJobPlanId() { this->jobPlanId_ = nullptr;};
    inline string getJobPlanId() const { DARABONBA_PTR_GET_DEFAULT(jobPlanId_, "") };
    inline GetJobPlanResponseBody& setJobPlanId(string jobPlanId) { DARABONBA_PTR_SET_VALUE(jobPlanId_, jobPlanId) };


    // jobPlanName Field Functions 
    bool hasJobPlanName() const { return this->jobPlanName_ != nullptr;};
    void deleteJobPlanName() { this->jobPlanName_ = nullptr;};
    inline string getJobPlanName() const { DARABONBA_PTR_GET_DEFAULT(jobPlanName_, "") };
    inline GetJobPlanResponseBody& setJobPlanName(string jobPlanName) { DARABONBA_PTR_SET_VALUE(jobPlanName_, jobPlanName) };


    // jobPlanSteps Field Functions 
    bool hasJobPlanSteps() const { return this->jobPlanSteps_ != nullptr;};
    void deleteJobPlanSteps() { this->jobPlanSteps_ = nullptr;};
    inline const vector<GetJobPlanResponseBody::JobPlanSteps> & getJobPlanSteps() const { DARABONBA_PTR_GET_CONST(jobPlanSteps_, vector<GetJobPlanResponseBody::JobPlanSteps>) };
    inline vector<GetJobPlanResponseBody::JobPlanSteps> getJobPlanSteps() { DARABONBA_PTR_GET(jobPlanSteps_, vector<GetJobPlanResponseBody::JobPlanSteps>) };
    inline GetJobPlanResponseBody& setJobPlanSteps(const vector<GetJobPlanResponseBody::JobPlanSteps> & jobPlanSteps) { DARABONBA_PTR_SET_VALUE(jobPlanSteps_, jobPlanSteps) };
    inline GetJobPlanResponseBody& setJobPlanSteps(vector<GetJobPlanResponseBody::JobPlanSteps> && jobPlanSteps) { DARABONBA_PTR_SET_RVALUE(jobPlanSteps_, jobPlanSteps) };


    // jobPlanType Field Functions 
    bool hasJobPlanType() const { return this->jobPlanType_ != nullptr;};
    void deleteJobPlanType() { this->jobPlanType_ = nullptr;};
    inline string getJobPlanType() const { DARABONBA_PTR_GET_DEFAULT(jobPlanType_, "") };
    inline GetJobPlanResponseBody& setJobPlanType(string jobPlanType) { DARABONBA_PTR_SET_VALUE(jobPlanType_, jobPlanType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetJobPlanResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetJobPlanResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetJobPlanResponseBody::Tags>) };
    inline vector<GetJobPlanResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetJobPlanResponseBody::Tags>) };
    inline GetJobPlanResponseBody& setTags(const vector<GetJobPlanResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetJobPlanResponseBody& setTags(vector<GetJobPlanResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetJobPlanResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetJobPlanResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetJobPlanResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetJobPlanResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The creation time of the job plan.
    shared_ptr<string> gmtCreateTime_ {};
    // The last modified time of the job plan.
    shared_ptr<string> gmtModifiedTime_ {};
    // The current step.
    shared_ptr<string> jobPlanCurrentStep_ {};
    // The job plan ID.
    shared_ptr<string> jobPlanId_ {};
    // The job plan name, which is unique within the workspace.
    shared_ptr<string> jobPlanName_ {};
    // The job plan steps.
    shared_ptr<vector<GetJobPlanResponseBody::JobPlanSteps>> jobPlanSteps_ {};
    // The job plan type.
    shared_ptr<string> jobPlanType_ {};
    // The Alibaba Cloud account ID that owns the job plan.
    shared_ptr<string> ownerId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of tags.
    shared_ptr<vector<GetJobPlanResponseBody::Tags>> tags_ {};
    // The distillation template ID used to create the job plan. An empty value indicates that this is not a scenario-based distillation task.
    shared_ptr<string> templateId_ {};
    // The display name of the distillation template, localized based on the requested language.
    shared_ptr<string> templateName_ {};
    // The Alibaba Cloud account ID that created the job plan.
    shared_ptr<string> userId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
