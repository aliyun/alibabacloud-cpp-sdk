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
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFreeExplorationWorkItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentNames, agentNamesShrink_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIdsShrink_);
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
        && this->collaborationGroupId_ == nullptr && this->memberUserIdsShrink_ == nullptr && this->tenantId_ == nullptr && this->title_ == nullptr && this->visibility_ == nullptr; };
    // agentNamesShrink Field Functions 
    bool hasAgentNamesShrink() const { return this->agentNamesShrink_ != nullptr;};
    void deleteAgentNamesShrink() { this->agentNamesShrink_ = nullptr;};
    inline string getAgentNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(agentNamesShrink_, "") };
    inline CreateFreeExplorationWorkItemShrinkRequest& setAgentNamesShrink(string agentNamesShrink) { DARABONBA_PTR_SET_VALUE(agentNamesShrink_, agentNamesShrink) };


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
    // 空间内数字员工技术名称，1–5 个，不可重复
    // 
    // This parameter is required.
    shared_ptr<string> agentNamesShrink_ {};
    // 协作空间 ID；调用者须为有效成员
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 协作档至少一个创建人以外的有效空间成员；最多 1000 人；私密和公开档忽略；创建人始终加入
    shared_ptr<string> memberUserIdsShrink_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 自由探索工作项标题，去首尾空格后 1–200 字符
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // 可见范围：PRIVATE 私密；COLLABORATIVE 指定成员协作；PUBLIC 空间内公开
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
