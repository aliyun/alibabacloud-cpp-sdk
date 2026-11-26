// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERTODOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERTODOREQUEST_HPP_
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
  class TransferTodoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferTodoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(targetUserIds, targetUserIds_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferTodoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(targetUserIds, targetUserIds_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    TransferTodoRequest() = default ;
    TransferTodoRequest(const TransferTodoRequest &) = default ;
    TransferTodoRequest(TransferTodoRequest &&) = default ;
    TransferTodoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferTodoRequest() = default ;
    TransferTodoRequest& operator=(const TransferTodoRequest &) = default ;
    TransferTodoRequest& operator=(TransferTodoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->comment_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->targetUserIds_ == nullptr && this->tenantId_ == nullptr
        && this->todoId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline TransferTodoRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline TransferTodoRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline TransferTodoRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline TransferTodoRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // targetUserIds Field Functions 
    bool hasTargetUserIds() const { return this->targetUserIds_ != nullptr;};
    void deleteTargetUserIds() { this->targetUserIds_ = nullptr;};
    inline const vector<string> & getTargetUserIds() const { DARABONBA_PTR_GET_CONST(targetUserIds_, vector<string>) };
    inline vector<string> getTargetUserIds() { DARABONBA_PTR_GET(targetUserIds_, vector<string>) };
    inline TransferTodoRequest& setTargetUserIds(const vector<string> & targetUserIds) { DARABONBA_PTR_SET_VALUE(targetUserIds_, targetUserIds) };
    inline TransferTodoRequest& setTargetUserIds(vector<string> && targetUserIds) { DARABONBA_PTR_SET_RVALUE(targetUserIds_, targetUserIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline TransferTodoRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline TransferTodoRequest& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The handover note.
    shared_ptr<string> comment_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The list of target user IDs for the transfer (1 to 100).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> targetUserIds_ {};
    // The to-do item ID.
    shared_ptr<string> tenantId_ {};
    // The list of target user IDs for the transfer (1 to 100).
    // 
    // This parameter is required.
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
