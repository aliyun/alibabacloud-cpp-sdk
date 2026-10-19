// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateTodoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assigneeUserIds, assigneeUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(questions, questionsShrink_);
      DARABONBA_PTR_TO_JSON(sourceContext, sourceContextShrink_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assigneeUserIds, assigneeUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(questions, questionsShrink_);
      DARABONBA_PTR_FROM_JSON(sourceContext, sourceContextShrink_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateTodoShrinkRequest() = default ;
    CreateTodoShrinkRequest(const CreateTodoShrinkRequest &) = default ;
    CreateTodoShrinkRequest(CreateTodoShrinkRequest &&) = default ;
    CreateTodoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoShrinkRequest() = default ;
    CreateTodoShrinkRequest& operator=(const CreateTodoShrinkRequest &) = default ;
    CreateTodoShrinkRequest& operator=(CreateTodoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assigneeUserIdsShrink_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->priority_ == nullptr && this->questionsShrink_ == nullptr && this->sourceContextShrink_ == nullptr && this->sourceType_ == nullptr
        && this->tenantId_ == nullptr && this->title_ == nullptr; };
    // assigneeUserIdsShrink Field Functions 
    bool hasAssigneeUserIdsShrink() const { return this->assigneeUserIdsShrink_ != nullptr;};
    void deleteAssigneeUserIdsShrink() { this->assigneeUserIdsShrink_ = nullptr;};
    inline string getAssigneeUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(assigneeUserIdsShrink_, "") };
    inline CreateTodoShrinkRequest& setAssigneeUserIdsShrink(string assigneeUserIdsShrink) { DARABONBA_PTR_SET_VALUE(assigneeUserIdsShrink_, assigneeUserIdsShrink) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateTodoShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateTodoShrinkRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // questionsShrink Field Functions 
    bool hasQuestionsShrink() const { return this->questionsShrink_ != nullptr;};
    void deleteQuestionsShrink() { this->questionsShrink_ = nullptr;};
    inline string getQuestionsShrink() const { DARABONBA_PTR_GET_DEFAULT(questionsShrink_, "") };
    inline CreateTodoShrinkRequest& setQuestionsShrink(string questionsShrink) { DARABONBA_PTR_SET_VALUE(questionsShrink_, questionsShrink) };


    // sourceContextShrink Field Functions 
    bool hasSourceContextShrink() const { return this->sourceContextShrink_ != nullptr;};
    void deleteSourceContextShrink() { this->sourceContextShrink_ = nullptr;};
    inline string getSourceContextShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceContextShrink_, "") };
    inline CreateTodoShrinkRequest& setSourceContextShrink(string sourceContextShrink) { DARABONBA_PTR_SET_VALUE(sourceContextShrink_, sourceContextShrink) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateTodoShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateTodoShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTodoShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // 处理人平台用户ID列表（1~100，去重后生效）
    // 
    // This parameter is required.
    shared_ptr<string> assigneeUserIdsShrink_ {};
    // 协作空间 ID（可选）
    shared_ptr<string> collaborationGroupId_ {};
    // 优先级
    shared_ptr<string> priority_ {};
    // 问题清单（1~N）
    // 
    // This parameter is required.
    shared_ptr<string> questionsShrink_ {};
    // 来源上下文（原样透传落库，不校验）
    // 
    // This parameter is required.
    shared_ptr<string> sourceContextShrink_ {};
    // 待办来源（仅 OPEN_API）
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 待办标题（≤200 字）
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
