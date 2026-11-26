// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFREEEXPLORATIONWORKITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFREEEXPLORATIONWORKITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateFreeExplorationWorkItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFreeExplorationWorkItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentNames, agentNamesShrink_);
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFreeExplorationWorkItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentNames, agentNamesShrink_);
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(visibility, visibility_);
    };
    CreateFreeExplorationWorkItemShrinkRequest() = default ;
    CreateFreeExplorationWorkItemShrinkRequest(const CreateFreeExplorationWorkItemShrinkRequest &) = default ;
    CreateFreeExplorationWorkItemShrinkRequest(CreateFreeExplorationWorkItemShrinkRequest &&) = default ;
    CreateFreeExplorationWorkItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFreeExplorationWorkItemShrinkRequest() = default ;
    CreateFreeExplorationWorkItemShrinkRequest& operator=(const CreateFreeExplorationWorkItemShrinkRequest &) = default ;
    CreateFreeExplorationWorkItemShrinkRequest& operator=(CreateFreeExplorationWorkItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentNamesShrink_ == nullptr
        && this->appToken_ == nullptr && this->collaborationGroupId_ == nullptr && this->memberUserIdsShrink_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr
        && this->tenantId_ == nullptr && this->title_ == nullptr && this->visibility_ == nullptr; };
    // agentNamesShrink Field Functions 
    bool hasAgentNamesShrink() const { return this->agentNamesShrink_ != nullptr;};
    void deleteAgentNamesShrink() { this->agentNamesShrink_ = nullptr;};
    inline string getAgentNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(agentNamesShrink_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setAgentNamesShrink(string agentNamesShrink) { DARABONBA_PTR_SET_VALUE(agentNamesShrink_, agentNamesShrink) };


    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // memberUserIdsShrink Field Functions 
    bool hasMemberUserIdsShrink() const { return this->memberUserIdsShrink_ != nullptr;};
    void deleteMemberUserIdsShrink() { this->memberUserIdsShrink_ = nullptr;};
    inline string getMemberUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(memberUserIdsShrink_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setMemberUserIdsShrink(string memberUserIdsShrink) { DARABONBA_PTR_SET_VALUE(memberUserIdsShrink_, memberUserIdsShrink) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The technical names of the selected digital workers.
    // 
    // This parameter is required.
    shared_ptr<string> agentNamesShrink_ {};
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The ID of the collaboration workspace to which the work item belongs.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The actual members of the topic, including the creator. For public topics, members of the entire workspace are not enumerated.
    shared_ptr<string> memberUserIdsShrink_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The title of the work item.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The actual visibility scope. Valid values: PRIVATE, COLLABORATIVE, and PUBLIC.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
