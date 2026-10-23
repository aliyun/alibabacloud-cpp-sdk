// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTODODETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTODODETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetTodoDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTodoDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTodoDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    GetTodoDetailRequest() = default ;
    GetTodoDetailRequest(const GetTodoDetailRequest &) = default ;
    GetTodoDetailRequest(GetTodoDetailRequest &&) = default ;
    GetTodoDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTodoDetailRequest() = default ;
    GetTodoDetailRequest& operator=(const GetTodoDetailRequest &) = default ;
    GetTodoDetailRequest& operator=(GetTodoDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->todoId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetTodoDetailRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline GetTodoDetailRequest& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The ID of the to-do item.
    // 
    // This parameter is required.
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
