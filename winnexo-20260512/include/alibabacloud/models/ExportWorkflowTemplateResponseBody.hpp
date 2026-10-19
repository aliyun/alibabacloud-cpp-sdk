// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTWORKFLOWTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTWORKFLOWTEMPLATERESPONSEBODY_HPP_
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
  class ExportWorkflowTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportWorkflowTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, ExportWorkflowTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    ExportWorkflowTemplateResponseBody() = default ;
    ExportWorkflowTemplateResponseBody(const ExportWorkflowTemplateResponseBody &) = default ;
    ExportWorkflowTemplateResponseBody(ExportWorkflowTemplateResponseBody &&) = default ;
    ExportWorkflowTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportWorkflowTemplateResponseBody() = default ;
    ExportWorkflowTemplateResponseBody& operator=(const ExportWorkflowTemplateResponseBody &) = default ;
    ExportWorkflowTemplateResponseBody& operator=(ExportWorkflowTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(steps, steps_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(steps, steps_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
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
        && this->sortOrder_ == nullptr && this->specification_ == nullptr && this->stepId_ == nullptr; };
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


        // stepId Field Functions 
        bool hasStepId() const { return this->stepId_ != nullptr;};
        void deleteStepId() { this->stepId_ = nullptr;};
        inline string getStepId() const { DARABONBA_PTR_GET_DEFAULT(stepId_, "") };
        inline Steps& setStepId(string stepId) { DARABONBA_PTR_SET_VALUE(stepId_, stepId) };


      protected:
        // 模型档位
        shared_ptr<string> modelMode_ {};
        // 步骤名称
        shared_ptr<string> name_ {};
        // 智能体负责人名称
        shared_ptr<string> ownerAgentName_ {};
        // 负责人类型：MEMBER 人工 / AGENT 智能体
        shared_ptr<string> ownerType_ {};
        // 人工负责人用户ID
        shared_ptr<int64_t> ownerUserId_ {};
        // 审核人用户ID列表
        shared_ptr<vector<int64_t>> reviewerUserIds_ {};
        // 步骤顺序
        shared_ptr<int64_t> sortOrder_ {};
        // 步骤处理说明
        shared_ptr<string> specification_ {};
        // 步骤ID
        shared_ptr<string> stepId_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->steps_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Template& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // steps Field Functions 
      bool hasSteps() const { return this->steps_ != nullptr;};
      void deleteSteps() { this->steps_ = nullptr;};
      inline const vector<Template::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Template::Steps>) };
      inline vector<Template::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<Template::Steps>) };
      inline Template& setSteps(const vector<Template::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
      inline Template& setSteps(vector<Template::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    protected:
      // 模板描述
      shared_ptr<string> description_ {};
      // 模板名称
      shared_ptr<string> name_ {};
      // 规范化步骤
      shared_ptr<vector<Template::Steps>> steps_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->template_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExportWorkflowTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExportWorkflowTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportWorkflowTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const ExportWorkflowTemplateResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, ExportWorkflowTemplateResponseBody::Template) };
    inline ExportWorkflowTemplateResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, ExportWorkflowTemplateResponseBody::Template) };
    inline ExportWorkflowTemplateResponseBody& setTemplate(const ExportWorkflowTemplateResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline ExportWorkflowTemplateResponseBody& setTemplate(ExportWorkflowTemplateResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 可回流导入的精简模板定义
    shared_ptr<ExportWorkflowTemplateResponseBody::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
