// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTODOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTODOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetTodoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTodoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTodoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    GetTodoRequest() = default ;
    GetTodoRequest(const GetTodoRequest &) = default ;
    GetTodoRequest(GetTodoRequest &&) = default ;
    GetTodoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTodoRequest() = default ;
    GetTodoRequest& operator=(const GetTodoRequest &) = default ;
    GetTodoRequest& operator=(GetTodoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr
        && this->tenantId_ == nullptr && this->todoId_ == nullptr && this->workItemId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetTodoRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetTodoRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline GetTodoRequest& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline GetTodoRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // The ID of the assistant message. This parameter is used to query multiple to-do items by message.
    shared_ptr<string> messageId_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The ID of the to-do item (get).
    shared_ptr<string> todoId_ {};
    // The ID of the work item. This parameter is used to query multiple to-do items by source.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
