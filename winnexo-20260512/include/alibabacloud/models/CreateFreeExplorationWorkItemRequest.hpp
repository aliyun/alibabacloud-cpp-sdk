// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFREEEXPLORATIONWORKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFREEEXPLORATIONWORKITEMREQUEST_HPP_
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
  class CreateFreeExplorationWorkItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFreeExplorationWorkItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentNames, agentNames_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFreeExplorationWorkItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentNames, agentNames_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(visibility, visibility_);
    };
    CreateFreeExplorationWorkItemRequest() = default ;
    CreateFreeExplorationWorkItemRequest(const CreateFreeExplorationWorkItemRequest &) = default ;
    CreateFreeExplorationWorkItemRequest(CreateFreeExplorationWorkItemRequest &&) = default ;
    CreateFreeExplorationWorkItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFreeExplorationWorkItemRequest() = default ;
    CreateFreeExplorationWorkItemRequest& operator=(const CreateFreeExplorationWorkItemRequest &) = default ;
    CreateFreeExplorationWorkItemRequest& operator=(CreateFreeExplorationWorkItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentNames_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->memberUserIds_ == nullptr && this->tenantId_ == nullptr && this->title_ == nullptr && this->visibility_ == nullptr; };
    // agentNames Field Functions 
    bool hasAgentNames() const { return this->agentNames_ != nullptr;};
    void deleteAgentNames() { this->agentNames_ = nullptr;};
    inline const vector<string> & getAgentNames() const { DARABONBA_PTR_GET_CONST(agentNames_, vector<string>) };
    inline vector<string> getAgentNames() { DARABONBA_PTR_GET(agentNames_, vector<string>) };
    inline CreateFreeExplorationWorkItemRequest& setAgentNames(const vector<string> & agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };
    inline CreateFreeExplorationWorkItemRequest& setAgentNames(vector<string> && agentNames) { DARABONBA_PTR_SET_RVALUE(agentNames_, agentNames) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateFreeExplorationWorkItemRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // memberUserIds Field Functions 
    bool hasMemberUserIds() const { return this->memberUserIds_ != nullptr;};
    void deleteMemberUserIds() { this->memberUserIds_ = nullptr;};
    inline const vector<int64_t> & getMemberUserIds() const { DARABONBA_PTR_GET_CONST(memberUserIds_, vector<int64_t>) };
    inline vector<int64_t> getMemberUserIds() { DARABONBA_PTR_GET(memberUserIds_, vector<int64_t>) };
    inline CreateFreeExplorationWorkItemRequest& setMemberUserIds(const vector<int64_t> & memberUserIds) { DARABONBA_PTR_SET_VALUE(memberUserIds_, memberUserIds) };
    inline CreateFreeExplorationWorkItemRequest& setMemberUserIds(vector<int64_t> && memberUserIds) { DARABONBA_PTR_SET_RVALUE(memberUserIds_, memberUserIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateFreeExplorationWorkItemRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateFreeExplorationWorkItemRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateFreeExplorationWorkItemRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // 空间内数字员工技术名称，1–5 个，不可重复
    // 
    // This parameter is required.
    shared_ptr<vector<string>> agentNames_ {};
    // 协作空间 ID；调用者须为有效成员
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 协作档至少一个创建人以外的有效空间成员；最多 1000 人；私密和公开档忽略；创建人始终加入
    shared_ptr<vector<int64_t>> memberUserIds_ {};
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
