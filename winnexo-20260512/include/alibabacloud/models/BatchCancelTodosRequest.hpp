// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCANCELTODOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCANCELTODOSREQUEST_HPP_
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
  class BatchCancelTodosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCancelTodosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoIds, todoIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCancelTodosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoIds, todoIds_);
    };
    BatchCancelTodosRequest() = default ;
    BatchCancelTodosRequest(const BatchCancelTodosRequest &) = default ;
    BatchCancelTodosRequest(BatchCancelTodosRequest &&) = default ;
    BatchCancelTodosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCancelTodosRequest() = default ;
    BatchCancelTodosRequest& operator=(const BatchCancelTodosRequest &) = default ;
    BatchCancelTodosRequest& operator=(BatchCancelTodosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->todoIds_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline BatchCancelTodosRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoIds Field Functions 
    bool hasTodoIds() const { return this->todoIds_ != nullptr;};
    void deleteTodoIds() { this->todoIds_ = nullptr;};
    inline const vector<string> & getTodoIds() const { DARABONBA_PTR_GET_CONST(todoIds_, vector<string>) };
    inline vector<string> getTodoIds() { DARABONBA_PTR_GET(todoIds_, vector<string>) };
    inline BatchCancelTodosRequest& setTodoIds(const vector<string> & todoIds) { DARABONBA_PTR_SET_VALUE(todoIds_, todoIds) };
    inline BatchCancelTodosRequest& setTodoIds(vector<string> && todoIds) { DARABONBA_PTR_SET_RVALUE(todoIds_, todoIds) };


  protected:
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 待办ID列表（1~100）
    // 
    // This parameter is required.
    shared_ptr<vector<string>> todoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
