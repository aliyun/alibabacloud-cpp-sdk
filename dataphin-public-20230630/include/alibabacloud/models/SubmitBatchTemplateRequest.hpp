// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitBatchTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommand_);
    };
    SubmitBatchTemplateRequest() = default ;
    SubmitBatchTemplateRequest(const SubmitBatchTemplateRequest &) = default ;
    SubmitBatchTemplateRequest(SubmitBatchTemplateRequest &&) = default ;
    SubmitBatchTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchTemplateRequest() = default ;
    SubmitBatchTemplateRequest& operator=(const SubmitBatchTemplateRequest &) = default ;
    SubmitBatchTemplateRequest& operator=(SubmitBatchTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      SubmitCommand() = default ;
      SubmitCommand(const SubmitCommand &) = default ;
      SubmitCommand(SubmitCommand &&) = default ;
      SubmitCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitCommand() = default ;
      SubmitCommand& operator=(const SubmitCommand &) = default ;
      SubmitCommand& operator=(SubmitCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->templateId_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline SubmitCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline SubmitCommand& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The submission comment.
      shared_ptr<string> comment_ {};
      // The template ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->projectId_ == nullptr && this->submitCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitBatchTemplateRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline SubmitBatchTemplateRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SubmitBatchTemplateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // submitCommand Field Functions 
    bool hasSubmitCommand() const { return this->submitCommand_ != nullptr;};
    void deleteSubmitCommand() { this->submitCommand_ = nullptr;};
    inline const SubmitBatchTemplateRequest::SubmitCommand & getSubmitCommand() const { DARABONBA_PTR_GET_CONST(submitCommand_, SubmitBatchTemplateRequest::SubmitCommand) };
    inline SubmitBatchTemplateRequest::SubmitCommand getSubmitCommand() { DARABONBA_PTR_GET(submitCommand_, SubmitBatchTemplateRequest::SubmitCommand) };
    inline SubmitBatchTemplateRequest& setSubmitCommand(const SubmitBatchTemplateRequest::SubmitCommand & submitCommand) { DARABONBA_PTR_SET_VALUE(submitCommand_, submitCommand) };
    inline SubmitBatchTemplateRequest& setSubmitCommand(SubmitBatchTemplateRequest::SubmitCommand && submitCommand) { DARABONBA_PTR_SET_RVALUE(submitCommand_, submitCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The template submission instruction.
    // 
    // This parameter is required.
    shared_ptr<SubmitBatchTemplateRequest::SubmitCommand> submitCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
