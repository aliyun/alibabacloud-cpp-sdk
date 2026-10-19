// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTODOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTODOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SubmitTodoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTodoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(answers, answersShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTodoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(answers, answersShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    SubmitTodoShrinkRequest() = default ;
    SubmitTodoShrinkRequest(const SubmitTodoShrinkRequest &) = default ;
    SubmitTodoShrinkRequest(SubmitTodoShrinkRequest &&) = default ;
    SubmitTodoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTodoShrinkRequest() = default ;
    SubmitTodoShrinkRequest& operator=(const SubmitTodoShrinkRequest &) = default ;
    SubmitTodoShrinkRequest& operator=(SubmitTodoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answersShrink_ == nullptr
        && this->tenantId_ == nullptr && this->todoId_ == nullptr; };
    // answersShrink Field Functions 
    bool hasAnswersShrink() const { return this->answersShrink_ != nullptr;};
    void deleteAnswersShrink() { this->answersShrink_ = nullptr;};
    inline string getAnswersShrink() const { DARABONBA_PTR_GET_DEFAULT(answersShrink_, "") };
    inline SubmitTodoShrinkRequest& setAnswersShrink(string answersShrink) { DARABONBA_PTR_SET_VALUE(answersShrink_, answersShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SubmitTodoShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline SubmitTodoShrinkRequest& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // 作答数组（question 原文须与待办问题对齐）
    // 
    // This parameter is required.
    shared_ptr<string> answersShrink_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 待办ID
    // 
    // This parameter is required.
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
