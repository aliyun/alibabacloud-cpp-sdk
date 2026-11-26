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
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoIds, todoIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCancelTodosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
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
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->tenantId_ == nullptr && this->todoIds_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline BatchCancelTodosRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline BatchCancelTodosRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline BatchCancelTodosRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


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
    // The platform application token issued by the console. If specified, the operation is executed as the user specified by opsUserId or opsUserCode.
    shared_ptr<string> appToken_ {};
    // The proxy user code, which is unique within the tenant. This parameter is used only when the application credential is configured as source_uid.
    shared_ptr<string> opsUserCode_ {};
    // The proxy user ID, which is the WINNEXO platform user ID. This parameter is used only when the application credential is configured as winnexo_uid.
    shared_ptr<string> opsUserId_ {};
    // The list of to-do item IDs. You can specify 1 to 100 IDs.
    shared_ptr<string> tenantId_ {};
    // The list of to-do item IDs. You can specify 1 to 100 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> todoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
