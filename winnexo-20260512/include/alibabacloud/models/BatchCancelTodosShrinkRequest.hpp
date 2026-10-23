// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCANCELTODOSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCANCELTODOSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class BatchCancelTodosShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCancelTodosShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoIds, todoIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCancelTodosShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoIds, todoIdsShrink_);
    };
    BatchCancelTodosShrinkRequest() = default ;
    BatchCancelTodosShrinkRequest(const BatchCancelTodosShrinkRequest &) = default ;
    BatchCancelTodosShrinkRequest(BatchCancelTodosShrinkRequest &&) = default ;
    BatchCancelTodosShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCancelTodosShrinkRequest() = default ;
    BatchCancelTodosShrinkRequest& operator=(const BatchCancelTodosShrinkRequest &) = default ;
    BatchCancelTodosShrinkRequest& operator=(BatchCancelTodosShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->todoIdsShrink_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline BatchCancelTodosShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoIdsShrink Field Functions 
    bool hasTodoIdsShrink() const { return this->todoIdsShrink_ != nullptr;};
    void deleteTodoIdsShrink() { this->todoIdsShrink_ = nullptr;};
    inline string getTodoIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(todoIdsShrink_, "") };
    inline BatchCancelTodosShrinkRequest& setTodoIdsShrink(string todoIdsShrink) { DARABONBA_PTR_SET_VALUE(todoIdsShrink_, todoIdsShrink) };


  protected:
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The list of to-do IDs. You can specify 1 to 100 IDs.
    // 
    // This parameter is required.
    shared_ptr<string> todoIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
