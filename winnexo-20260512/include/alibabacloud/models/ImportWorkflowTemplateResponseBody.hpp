// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ImportWorkflowTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(createdByUserId, createdByUserId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(effectiveVersion, effectiveVersion_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(steps, steps_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionStatus, versionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(createdByUserId, createdByUserId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(effectiveVersion, effectiveVersion_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(steps, steps_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionStatus, versionStatus_);
    };
    ImportWorkflowTemplateResponseBody() = default ;
    ImportWorkflowTemplateResponseBody(const ImportWorkflowTemplateResponseBody &) = default ;
    ImportWorkflowTemplateResponseBody(ImportWorkflowTemplateResponseBody &&) = default ;
    ImportWorkflowTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowTemplateResponseBody() = default ;
    ImportWorkflowTemplateResponseBody& operator=(const ImportWorkflowTemplateResponseBody &) = default ;
    ImportWorkflowTemplateResponseBody& operator=(ImportWorkflowTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Steps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Steps& obj) { 
        DARABONBA_PTR_TO_JSON(modelMode, modelMode_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ownerAgentName, ownerAgentName_);
        DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
        DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(reviewerUserIds, reviewerUserIds_);
        DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
        DARABONBA_PTR_TO_JSON(specification, specification_);
        DARABONBA_PTR_TO_JSON(specificationJson, specificationJson_);
        DARABONBA_PTR_TO_JSON(stepId, stepId_);
      };
      friend void from_json(const Darabonba::Json& j, Steps& obj) { 
        DARABONBA_PTR_FROM_JSON(modelMode, modelMode_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ownerAgentName, ownerAgentName_);
        DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
        DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(reviewerUserIds, reviewerUserIds_);
        DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
        DARABONBA_PTR_FROM_JSON(specification, specification_);
        DARABONBA_PTR_FROM_JSON(specificationJson, specificationJson_);
        DARABONBA_PTR_FROM_JSON(stepId, stepId_);
      };
      Steps() = default ;
      Steps(const Steps &) = default ;
      Steps(Steps &&) = default ;
      Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Steps() = default ;
      Steps& operator=(const Steps &) = default ;
      Steps& operator=(Steps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelMode_ == nullptr
        && this->name_ == nullptr && this->ownerAgentName_ == nullptr && this->ownerType_ == nullptr && this->ownerUserId_ == nullptr && this->reviewerUserIds_ == nullptr
        && this->sortOrder_ == nullptr && this->specification_ == nullptr && this->specificationJson_ == nullptr && this->stepId_ == nullptr; };
      // modelMode Field Functions 
      bool hasModelMode() const { return this->modelMode_ != nullptr;};
      void deleteModelMode() { this->modelMode_ = nullptr;};
      inline string getModelMode() const { DARABONBA_PTR_GET_DEFAULT(modelMode_, "") };
      inline Steps& setModelMode(string modelMode) { DARABONBA_PTR_SET_VALUE(modelMode_, modelMode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Steps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerAgentName Field Functions 
      bool hasOwnerAgentName() const { return this->ownerAgentName_ != nullptr;};
      void deleteOwnerAgentName() { this->ownerAgentName_ = nullptr;};
      inline string getOwnerAgentName() const { DARABONBA_PTR_GET_DEFAULT(ownerAgentName_, "") };
      inline Steps& setOwnerAgentName(string ownerAgentName) { DARABONBA_PTR_SET_VALUE(ownerAgentName_, ownerAgentName) };


      // ownerType Field Functions 
      bool hasOwnerType() const { return this->ownerType_ != nullptr;};
      void deleteOwnerType() { this->ownerType_ = nullptr;};
      inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
      inline Steps& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline int64_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
      inline Steps& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // reviewerUserIds Field Functions 
      bool hasReviewerUserIds() const { return this->reviewerUserIds_ != nullptr;};
      void deleteReviewerUserIds() { this->reviewerUserIds_ = nullptr;};
      inline const vector<int64_t> & getReviewerUserIds() const { DARABONBA_PTR_GET_CONST(reviewerUserIds_, vector<int64_t>) };
      inline vector<int64_t> getReviewerUserIds() { DARABONBA_PTR_GET(reviewerUserIds_, vector<int64_t>) };
      inline Steps& setReviewerUserIds(const vector<int64_t> & reviewerUserIds) { DARABONBA_PTR_SET_VALUE(reviewerUserIds_, reviewerUserIds) };
      inline Steps& setReviewerUserIds(vector<int64_t> && reviewerUserIds) { DARABONBA_PTR_SET_RVALUE(reviewerUserIds_, reviewerUserIds) };


      // sortOrder Field Functions 
      bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
      void deleteSortOrder() { this->sortOrder_ = nullptr;};
      inline int64_t getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0L) };
      inline Steps& setSortOrder(int64_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


      // specification Field Functions 
      bool hasSpecification() const { return this->specification_ != nullptr;};
      void deleteSpecification() { this->specification_ = nullptr;};
      inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
      inline Steps& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


      // specificationJson Field Functions 
      bool hasSpecificationJson() const { return this->specificationJson_ != nullptr;};
      void deleteSpecificationJson() { this->specificationJson_ = nullptr;};
      inline const vector<Darabonba::Json> & getSpecificationJson() const { DARABONBA_PTR_GET_CONST(specificationJson_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getSpecificationJson() { DARABONBA_PTR_GET(specificationJson_, vector<Darabonba::Json>) };
      inline Steps& setSpecificationJson(const vector<Darabonba::Json> & specificationJson) { DARABONBA_PTR_SET_VALUE(specificationJson_, specificationJson) };
      inline Steps& setSpecificationJson(vector<Darabonba::Json> && specificationJson) { DARABONBA_PTR_SET_RVALUE(specificationJson_, specificationJson) };


      // stepId Field Functions 
      bool hasStepId() const { return this->stepId_ != nullptr;};
      void deleteStepId() { this->stepId_ = nullptr;};
      inline string getStepId() const { DARABONBA_PTR_GET_DEFAULT(stepId_, "") };
      inline Steps& setStepId(string stepId) { DARABONBA_PTR_SET_VALUE(stepId_, stepId) };


    protected:
      // The model tier.
      shared_ptr<string> modelMode_ {};
      // The step name.
      shared_ptr<string> name_ {};
      // The name of the responsible agent.
      shared_ptr<string> ownerAgentName_ {};
      // The type of the responsible party. Valid values:
      // - MEMBER: human.
      // - AGENT: agent.
      shared_ptr<string> ownerType_ {};
      // The user ID of the human responsible party.
      shared_ptr<int64_t> ownerUserId_ {};
      // The list of user IDs for the reviewers.
      shared_ptr<vector<int64_t>> reviewerUserIds_ {};
      // The step order.
      shared_ptr<int64_t> sortOrder_ {};
      // The processing instructions for the step.
      shared_ptr<string> specification_ {};
      // The structured array of processing instructions for the step. This array supports text, mention, skill, app, files, and web_search types. All fragment fields and nested attachments are preserved exactly as returned by the backend.
      shared_ptr<vector<Darabonba::Json>> specificationJson_ {};
      // The step ID.
      shared_ptr<string> stepId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->createdByUserId_ == nullptr && this->description_ == nullptr && this->effectiveVersion_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->message_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->steps_ == nullptr && this->templateId_ == nullptr
        && this->version_ == nullptr && this->versionStatus_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImportWorkflowTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createdByUserId Field Functions 
    bool hasCreatedByUserId() const { return this->createdByUserId_ != nullptr;};
    void deleteCreatedByUserId() { this->createdByUserId_ = nullptr;};
    inline int64_t getCreatedByUserId() const { DARABONBA_PTR_GET_DEFAULT(createdByUserId_, 0L) };
    inline ImportWorkflowTemplateResponseBody& setCreatedByUserId(int64_t createdByUserId) { DARABONBA_PTR_SET_VALUE(createdByUserId_, createdByUserId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportWorkflowTemplateResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectiveVersion Field Functions 
    bool hasEffectiveVersion() const { return this->effectiveVersion_ != nullptr;};
    void deleteEffectiveVersion() { this->effectiveVersion_ = nullptr;};
    inline string getEffectiveVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersion_, "") };
    inline ImportWorkflowTemplateResponseBody& setEffectiveVersion(string effectiveVersion) { DARABONBA_PTR_SET_VALUE(effectiveVersion_, effectiveVersion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ImportWorkflowTemplateResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ImportWorkflowTemplateResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportWorkflowTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportWorkflowTemplateResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportWorkflowTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<ImportWorkflowTemplateResponseBody::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<ImportWorkflowTemplateResponseBody::Steps>) };
    inline vector<ImportWorkflowTemplateResponseBody::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<ImportWorkflowTemplateResponseBody::Steps>) };
    inline ImportWorkflowTemplateResponseBody& setSteps(const vector<ImportWorkflowTemplateResponseBody::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline ImportWorkflowTemplateResponseBody& setSteps(vector<ImportWorkflowTemplateResponseBody::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ImportWorkflowTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ImportWorkflowTemplateResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionStatus Field Functions 
    bool hasVersionStatus() const { return this->versionStatus_ != nullptr;};
    void deleteVersionStatus() { this->versionStatus_ = nullptr;};
    inline string getVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(versionStatus_, "") };
    inline ImportWorkflowTemplateResponseBody& setVersionStatus(string versionStatus) { DARABONBA_PTR_SET_VALUE(versionStatus_, versionStatus) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The user ID of the creator.
    shared_ptr<int64_t> createdByUserId_ {};
    // The template description.
    shared_ptr<string> description_ {};
    // The current effective version number of the template. An empty value indicates that only a draft exists and the template cannot be used for work items. Importing a template always creates a v1 draft, so this field is empty.
    shared_ptr<string> effectiveVersion_ {};
    // The creation time in ISO 8601 format.
    shared_ptr<string> gmtCreate_ {};
    // The modification time in ISO 8601 format.
    shared_ptr<string> gmtModified_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The template name.
    shared_ptr<string> name_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
    // The ordered steps.
    shared_ptr<vector<ImportWorkflowTemplateResponseBody::Steps>> steps_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
    // The version number generated by this import.
    shared_ptr<string> version_ {};
    // The version status. Valid values:
    // - DRAFT: draft.
    // - SUBMITTED: submitted.
    // The status is always set to DRAFT for imported templates.
    shared_ptr<string> versionStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
