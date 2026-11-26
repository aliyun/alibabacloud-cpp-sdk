// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETKNOWLEDGEBASEVISIBILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETKNOWLEDGEBASEVISIBILITYREQUEST_HPP_
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
  class SetKnowledgeBaseVisibilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetKnowledgeBaseVisibilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(cascadeMode, cascadeMode_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(targetId, targetId_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(userIds, userIds_);
      DARABONBA_PTR_TO_JSON(visibilityMode, visibilityMode_);
    };
    friend void from_json(const Darabonba::Json& j, SetKnowledgeBaseVisibilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(cascadeMode, cascadeMode_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(targetId, targetId_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(userIds, userIds_);
      DARABONBA_PTR_FROM_JSON(visibilityMode, visibilityMode_);
    };
    SetKnowledgeBaseVisibilityRequest() = default ;
    SetKnowledgeBaseVisibilityRequest(const SetKnowledgeBaseVisibilityRequest &) = default ;
    SetKnowledgeBaseVisibilityRequest(SetKnowledgeBaseVisibilityRequest &&) = default ;
    SetKnowledgeBaseVisibilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetKnowledgeBaseVisibilityRequest() = default ;
    SetKnowledgeBaseVisibilityRequest& operator=(const SetKnowledgeBaseVisibilityRequest &) = default ;
    SetKnowledgeBaseVisibilityRequest& operator=(SetKnowledgeBaseVisibilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->cascadeMode_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr
        && this->tenantId_ == nullptr && this->userGroupIds_ == nullptr && this->userIds_ == nullptr && this->visibilityMode_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // cascadeMode Field Functions 
    bool hasCascadeMode() const { return this->cascadeMode_ != nullptr;};
    void deleteCascadeMode() { this->cascadeMode_ = nullptr;};
    inline string getCascadeMode() const { DARABONBA_PTR_GET_DEFAULT(cascadeMode_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setCascadeMode(string cascadeMode) { DARABONBA_PTR_SET_VALUE(cascadeMode_, cascadeMode) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline SetKnowledgeBaseVisibilityRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline SetKnowledgeBaseVisibilityRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline SetKnowledgeBaseVisibilityRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline SetKnowledgeBaseVisibilityRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    // visibilityMode Field Functions 
    bool hasVisibilityMode() const { return this->visibilityMode_ != nullptr;};
    void deleteVisibilityMode() { this->visibilityMode_ = nullptr;};
    inline string getVisibilityMode() const { DARABONBA_PTR_GET_DEFAULT(visibilityMode_, "") };
    inline SetKnowledgeBaseVisibilityRequest& setVisibilityMode(string visibilityMode) { DARABONBA_PTR_SET_VALUE(visibilityMode_, visibilityMode) };


  protected:
    // token
    shared_ptr<string> appToken_ {};
    // Specifies how to handle subfolders.
    shared_ptr<string> cascadeMode_ {};
    // The user code.
    shared_ptr<string> opsUserCode_ {};
    // The ID of the operator.
    shared_ptr<string> opsUserId_ {};
    // The target ID, which varies based on the target type.
    // - If the type is period, specify the period ID.
    // - If the type is objective, specify the objective ID.
    // - If the type is kr, specify the keyResult ID.
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
    // The type of the current permission. Valid values:
    // - period: period type
    // - objective: objective type
    // - kr: keyResult type
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The ID of the tenant to which the resource belongs. If this parameter is not specified, the current tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The collection of user groups.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The collection of user IDs.
    shared_ptr<vector<string>> userIds_ {};
    // The visibility scope mode.
    // 
    // This parameter is required.
    shared_ptr<string> visibilityMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
