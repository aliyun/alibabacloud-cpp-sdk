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
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTodoDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
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
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->tenantId_ == nullptr && this->todoId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline GetTodoDetailRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline GetTodoDetailRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline GetTodoDetailRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


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
    // The platform application token issued by the console. If specified, the operation is executed as the user identified by opsUserId or opsUserCode.
    shared_ptr<string> appToken_ {};
    // The proxy user code, which is unique within the tenant. This parameter is used only when the application credential is configured as source_uid.
    shared_ptr<string> opsUserCode_ {};
    // The proxy user ID, which is the WINNEXO platform user ID. This parameter is used only when the application credential is configured as winnexo_uid.
    shared_ptr<string> opsUserId_ {};
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
