// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWORKFLOWTEMPLATEDRAFTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWORKFLOWTEMPLATEDRAFTRESPONSEBODY_HPP_
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
  class GenerateWorkflowTemplateDraftResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWorkflowTemplateDraftResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(draft, draft_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWorkflowTemplateDraftResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(draft, draft_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GenerateWorkflowTemplateDraftResponseBody() = default ;
    GenerateWorkflowTemplateDraftResponseBody(const GenerateWorkflowTemplateDraftResponseBody &) = default ;
    GenerateWorkflowTemplateDraftResponseBody(GenerateWorkflowTemplateDraftResponseBody &&) = default ;
    GenerateWorkflowTemplateDraftResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWorkflowTemplateDraftResponseBody() = default ;
    GenerateWorkflowTemplateDraftResponseBody& operator=(const GenerateWorkflowTemplateDraftResponseBody &) = default ;
    GenerateWorkflowTemplateDraftResponseBody& operator=(GenerateWorkflowTemplateDraftResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Draft : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Draft& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(steps, steps_);
      };
      friend void from_json(const Darabonba::Json& j, Draft& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(steps, steps_);
      };
      Draft() = default ;
      Draft(const Draft &) = default ;
      Draft(Draft &&) = default ;
      Draft(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Draft() = default ;
      Draft& operator=(const Draft &) = default ;
      Draft& operator=(Draft &&) = default ;
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
        // The name of the step.
        shared_ptr<string> name_ {};
        // The name of the responsible agent.
        shared_ptr<string> ownerAgentName_ {};
        // The type of the owner. Valid values: MEMBER: Human. AGENT: Agent.
        shared_ptr<string> ownerType_ {};
        // The user ID of the human owner.
        shared_ptr<int64_t> ownerUserId_ {};
        // The list of user IDs of the reviewers.
        shared_ptr<vector<int64_t>> reviewerUserIds_ {};
        // The order of the step.
        shared_ptr<int64_t> sortOrder_ {};
        // The processing instructions for the step.
        shared_ptr<string> specification_ {};
        // The array of structured segments for the step instructions. Supported types include text, mention, skill, app, files, and web_search. The fields and nested attachments of each segment are retained as returned by the backend.
        shared_ptr<vector<Darabonba::Json>> specificationJson_ {};
        // The ID of the step.
        shared_ptr<string> stepId_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->steps_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Draft& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Draft& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // steps Field Functions 
      bool hasSteps() const { return this->steps_ != nullptr;};
      void deleteSteps() { this->steps_ = nullptr;};
      inline const vector<Draft::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Draft::Steps>) };
      inline vector<Draft::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<Draft::Steps>) };
      inline Draft& setSteps(const vector<Draft::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
      inline Draft& setSteps(vector<Draft::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    protected:
      // The description of the template.
      shared_ptr<string> description_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The ordered steps.
      shared_ptr<vector<Draft::Steps>> steps_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->draft_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateWorkflowTemplateDraftResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // draft Field Functions 
    bool hasDraft() const { return this->draft_ != nullptr;};
    void deleteDraft() { this->draft_ = nullptr;};
    inline const GenerateWorkflowTemplateDraftResponseBody::Draft & getDraft() const { DARABONBA_PTR_GET_CONST(draft_, GenerateWorkflowTemplateDraftResponseBody::Draft) };
    inline GenerateWorkflowTemplateDraftResponseBody::Draft getDraft() { DARABONBA_PTR_GET(draft_, GenerateWorkflowTemplateDraftResponseBody::Draft) };
    inline GenerateWorkflowTemplateDraftResponseBody& setDraft(const GenerateWorkflowTemplateDraftResponseBody::Draft & draft) { DARABONBA_PTR_SET_VALUE(draft_, draft) };
    inline GenerateWorkflowTemplateDraftResponseBody& setDraft(GenerateWorkflowTemplateDraftResponseBody::Draft && draft) { DARABONBA_PTR_SET_RVALUE(draft_, draft) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateWorkflowTemplateDraftResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateWorkflowTemplateDraftResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The generated non-persistent template draft.
    shared_ptr<GenerateWorkflowTemplateDraftResponseBody::Draft> draft_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
