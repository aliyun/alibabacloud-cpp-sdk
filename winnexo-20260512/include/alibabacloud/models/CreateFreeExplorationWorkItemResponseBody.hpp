// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFREEEXPLORATIONWORKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFREEEXPLORATIONWORKITEMRESPONSEBODY_HPP_
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
  class CreateFreeExplorationWorkItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFreeExplorationWorkItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentNames, agentNames_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(createdByUserId, createdByUserId_);
      DARABONBA_PTR_TO_JSON(itemType, itemType_);
      DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFreeExplorationWorkItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentNames, agentNames_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(createdByUserId, createdByUserId_);
      DARABONBA_PTR_FROM_JSON(itemType, itemType_);
      DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(visibility, visibility_);
    };
    CreateFreeExplorationWorkItemResponseBody() = default ;
    CreateFreeExplorationWorkItemResponseBody(const CreateFreeExplorationWorkItemResponseBody &) = default ;
    CreateFreeExplorationWorkItemResponseBody(CreateFreeExplorationWorkItemResponseBody &&) = default ;
    CreateFreeExplorationWorkItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFreeExplorationWorkItemResponseBody() = default ;
    CreateFreeExplorationWorkItemResponseBody& operator=(const CreateFreeExplorationWorkItemResponseBody &) = default ;
    CreateFreeExplorationWorkItemResponseBody& operator=(CreateFreeExplorationWorkItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentNames_ == nullptr
        && this->code_ == nullptr && this->collaborationGroupId_ == nullptr && this->conversationId_ == nullptr && this->createdByUserId_ == nullptr && this->itemType_ == nullptr
        && this->memberUserIds_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->title_ == nullptr && this->visibility_ == nullptr; };
    // agentNames Field Functions 
    bool hasAgentNames() const { return this->agentNames_ != nullptr;};
    void deleteAgentNames() { this->agentNames_ = nullptr;};
    inline const vector<string> & getAgentNames() const { DARABONBA_PTR_GET_CONST(agentNames_, vector<string>) };
    inline vector<string> getAgentNames() { DARABONBA_PTR_GET(agentNames_, vector<string>) };
    inline CreateFreeExplorationWorkItemResponseBody& setAgentNames(const vector<string> & agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };
    inline CreateFreeExplorationWorkItemResponseBody& setAgentNames(vector<string> && agentNames) { DARABONBA_PTR_SET_RVALUE(agentNames_, agentNames) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // createdByUserId Field Functions 
    bool hasCreatedByUserId() const { return this->createdByUserId_ != nullptr;};
    void deleteCreatedByUserId() { this->createdByUserId_ = nullptr;};
    inline int64_t getCreatedByUserId() const { DARABONBA_PTR_GET_DEFAULT(createdByUserId_, 0L) };
    inline CreateFreeExplorationWorkItemResponseBody& setCreatedByUserId(int64_t createdByUserId) { DARABONBA_PTR_SET_VALUE(createdByUserId_, createdByUserId) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // memberUserIds Field Functions 
    bool hasMemberUserIds() const { return this->memberUserIds_ != nullptr;};
    void deleteMemberUserIds() { this->memberUserIds_ = nullptr;};
    inline const vector<int64_t> & getMemberUserIds() const { DARABONBA_PTR_GET_CONST(memberUserIds_, vector<int64_t>) };
    inline vector<int64_t> getMemberUserIds() { DARABONBA_PTR_GET(memberUserIds_, vector<int64_t>) };
    inline CreateFreeExplorationWorkItemResponseBody& setMemberUserIds(const vector<int64_t> & memberUserIds) { DARABONBA_PTR_SET_VALUE(memberUserIds_, memberUserIds) };
    inline CreateFreeExplorationWorkItemResponseBody& setMemberUserIds(vector<int64_t> && memberUserIds) { DARABONBA_PTR_SET_RVALUE(memberUserIds_, memberUserIds) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateFreeExplorationWorkItemResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // 已选择的数字员工技术名称
    shared_ptr<vector<string>> agentNames_ {};
    // 业务状态码，成功为200
    shared_ptr<string> code_ {};
    // 所属协作空间 ID
    shared_ptr<string> collaborationGroupId_ {};
    // 真实群话题 ID，可在 queryWorkItemFeed 中关联；不可作为 Workflow workItemId
    shared_ptr<string> conversationId_ {};
    // 平台创建人用户 ID
    shared_ptr<int64_t> createdByUserId_ {};
    // 工作项模式，固定 FREE_EXPLORATION
    shared_ptr<string> itemType_ {};
    // 实际话题成员，含创建人；公开档不枚举全空间成员
    shared_ptr<vector<int64_t>> memberUserIds_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 工作项标题
    shared_ptr<string> title_ {};
    // 实际可见范围 PRIVATE/COLLABORATIVE/PUBLIC
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
