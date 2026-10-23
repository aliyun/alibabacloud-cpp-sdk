// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERTODOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERTODOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class TransferTodoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferTodoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(targetUserIds, targetUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferTodoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(targetUserIds, targetUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    TransferTodoShrinkRequest() = default ;
    TransferTodoShrinkRequest(const TransferTodoShrinkRequest &) = default ;
    TransferTodoShrinkRequest(TransferTodoShrinkRequest &&) = default ;
    TransferTodoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferTodoShrinkRequest() = default ;
    TransferTodoShrinkRequest& operator=(const TransferTodoShrinkRequest &) = default ;
    TransferTodoShrinkRequest& operator=(TransferTodoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->targetUserIdsShrink_ == nullptr && this->tenantId_ == nullptr && this->todoId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline TransferTodoShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // targetUserIdsShrink Field Functions 
    bool hasTargetUserIdsShrink() const { return this->targetUserIdsShrink_ != nullptr;};
    void deleteTargetUserIdsShrink() { this->targetUserIdsShrink_ = nullptr;};
    inline string getTargetUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetUserIdsShrink_, "") };
    inline TransferTodoShrinkRequest& setTargetUserIdsShrink(string targetUserIdsShrink) { DARABONBA_PTR_SET_VALUE(targetUserIdsShrink_, targetUserIdsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline TransferTodoShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline TransferTodoShrinkRequest& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // The handover description.
    shared_ptr<string> comment_ {};
    // The list of target user IDs to whom the task is reassigned. You can specify 1 to 100 user IDs.
    // 
    // This parameter is required.
    shared_ptr<string> targetUserIdsShrink_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The ID of the to-do task.
    // 
    // This parameter is required.
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
