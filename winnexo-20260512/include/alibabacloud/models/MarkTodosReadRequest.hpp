// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKTODOSREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MARKTODOSREADREQUEST_HPP_
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
  class MarkTodosReadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarkTodosReadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(markAllRead, markAllRead_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoIds, todoIds_);
    };
    friend void from_json(const Darabonba::Json& j, MarkTodosReadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(markAllRead, markAllRead_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoIds, todoIds_);
    };
    MarkTodosReadRequest() = default ;
    MarkTodosReadRequest(const MarkTodosReadRequest &) = default ;
    MarkTodosReadRequest(MarkTodosReadRequest &&) = default ;
    MarkTodosReadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarkTodosReadRequest() = default ;
    MarkTodosReadRequest& operator=(const MarkTodosReadRequest &) = default ;
    MarkTodosReadRequest& operator=(MarkTodosReadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->markAllRead_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->tenantId_ == nullptr && this->todoIds_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline MarkTodosReadRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // markAllRead Field Functions 
    bool hasMarkAllRead() const { return this->markAllRead_ != nullptr;};
    void deleteMarkAllRead() { this->markAllRead_ = nullptr;};
    inline bool getMarkAllRead() const { DARABONBA_PTR_GET_DEFAULT(markAllRead_, false) };
    inline MarkTodosReadRequest& setMarkAllRead(bool markAllRead) { DARABONBA_PTR_SET_VALUE(markAllRead_, markAllRead) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline MarkTodosReadRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline MarkTodosReadRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline MarkTodosReadRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoIds Field Functions 
    bool hasTodoIds() const { return this->todoIds_ != nullptr;};
    void deleteTodoIds() { this->todoIds_ = nullptr;};
    inline const vector<string> & getTodoIds() const { DARABONBA_PTR_GET_CONST(todoIds_, vector<string>) };
    inline vector<string> getTodoIds() { DARABONBA_PTR_GET(todoIds_, vector<string>) };
    inline MarkTodosReadRequest& setTodoIds(const vector<string> & todoIds) { DARABONBA_PTR_SET_VALUE(todoIds_, todoIds) };
    inline MarkTodosReadRequest& setTodoIds(vector<string> && todoIds) { DARABONBA_PTR_SET_RVALUE(todoIds_, todoIds) };


  protected:
    // The platform application token issued by the console. If you specify this parameter, the operation is performed as the user specified by opsUserId or opsUserCode.
    shared_ptr<string> appToken_ {};
    // Specifies whether to mark all to-do items as read. This parameter takes precedence over todoIds.
    shared_ptr<bool> markAllRead_ {};
    // The code of the proxy user, which is unique within the tenant. This parameter is used only when the application credential is configured as source_uid.
    shared_ptr<string> opsUserCode_ {};
    // The ID of the proxy user, which is the WINNEXO platform user ID. This parameter is used only when the application credential is configured as winnexo_uid.
    shared_ptr<string> opsUserId_ {};
    // The list of to-do IDs. You can specify up to 100 IDs. This parameter is ignored when markAllRead is set to true.
    shared_ptr<string> tenantId_ {};
    // The list of to-do IDs. You can specify up to 100 IDs. This parameter is ignored when markAllRead is set to true.
    shared_ptr<vector<string>> todoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
