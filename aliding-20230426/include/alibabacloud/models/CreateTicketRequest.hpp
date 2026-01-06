// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(Notify, notify_);
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_TO_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SceneContext, sceneContext_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(Notify, notify_);
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_FROM_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SceneContext, sceneContext_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateTicketRequest() = default ;
    CreateTicketRequest(const CreateTicketRequest &) = default ;
    CreateTicketRequest(CreateTicketRequest &&) = default ;
    CreateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequest() = default ;
    CreateTicketRequest& operator=(const CreateTicketRequest &) = default ;
    CreateTicketRequest& operator=(CreateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class SceneContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SceneContext& obj) { 
        DARABONBA_PTR_TO_JSON(GroupMsgs, groupMsgs_);
        DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
        DARABONBA_PTR_TO_JSON(RelevantorUserIds, relevantorUserIds_);
        DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      };
      friend void from_json(const Darabonba::Json& j, SceneContext& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupMsgs, groupMsgs_);
        DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
        DARABONBA_PTR_FROM_JSON(RelevantorUserIds, relevantorUserIds_);
        DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      };
      SceneContext() = default ;
      SceneContext(const SceneContext &) = default ;
      SceneContext(SceneContext &&) = default ;
      SceneContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SceneContext() = default ;
      SceneContext& operator=(const SceneContext &) = default ;
      SceneContext& operator=(SceneContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GroupMsgs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupMsgs& obj) { 
          DARABONBA_PTR_TO_JSON(Anchor, anchor_);
          DARABONBA_PTR_TO_JSON(OpenMsgId, openMsgId_);
        };
        friend void from_json(const Darabonba::Json& j, GroupMsgs& obj) { 
          DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
          DARABONBA_PTR_FROM_JSON(OpenMsgId, openMsgId_);
        };
        GroupMsgs() = default ;
        GroupMsgs(const GroupMsgs &) = default ;
        GroupMsgs(GroupMsgs &&) = default ;
        GroupMsgs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupMsgs() = default ;
        GroupMsgs& operator=(const GroupMsgs &) = default ;
        GroupMsgs& operator=(GroupMsgs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->anchor_ == nullptr
        && this->openMsgId_ == nullptr; };
        // anchor Field Functions 
        bool hasAnchor() const { return this->anchor_ != nullptr;};
        void deleteAnchor() { this->anchor_ = nullptr;};
        inline bool getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, false) };
        inline GroupMsgs& setAnchor(bool anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


        // openMsgId Field Functions 
        bool hasOpenMsgId() const { return this->openMsgId_ != nullptr;};
        void deleteOpenMsgId() { this->openMsgId_ = nullptr;};
        inline string getOpenMsgId() const { DARABONBA_PTR_GET_DEFAULT(openMsgId_, "") };
        inline GroupMsgs& setOpenMsgId(string openMsgId) { DARABONBA_PTR_SET_VALUE(openMsgId_, openMsgId) };


      protected:
        shared_ptr<bool> anchor_ {};
        shared_ptr<string> openMsgId_ {};
      };

      virtual bool empty() const override { return this->groupMsgs_ == nullptr
        && this->openConversationId_ == nullptr && this->relevantorUserIds_ == nullptr && this->topicId_ == nullptr; };
      // groupMsgs Field Functions 
      bool hasGroupMsgs() const { return this->groupMsgs_ != nullptr;};
      void deleteGroupMsgs() { this->groupMsgs_ = nullptr;};
      inline const vector<SceneContext::GroupMsgs> & getGroupMsgs() const { DARABONBA_PTR_GET_CONST(groupMsgs_, vector<SceneContext::GroupMsgs>) };
      inline vector<SceneContext::GroupMsgs> getGroupMsgs() { DARABONBA_PTR_GET(groupMsgs_, vector<SceneContext::GroupMsgs>) };
      inline SceneContext& setGroupMsgs(const vector<SceneContext::GroupMsgs> & groupMsgs) { DARABONBA_PTR_SET_VALUE(groupMsgs_, groupMsgs) };
      inline SceneContext& setGroupMsgs(vector<SceneContext::GroupMsgs> && groupMsgs) { DARABONBA_PTR_SET_RVALUE(groupMsgs_, groupMsgs) };


      // openConversationId Field Functions 
      bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
      void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
      inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
      inline SceneContext& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


      // relevantorUserIds Field Functions 
      bool hasRelevantorUserIds() const { return this->relevantorUserIds_ != nullptr;};
      void deleteRelevantorUserIds() { this->relevantorUserIds_ = nullptr;};
      inline const vector<string> & getRelevantorUserIds() const { DARABONBA_PTR_GET_CONST(relevantorUserIds_, vector<string>) };
      inline vector<string> getRelevantorUserIds() { DARABONBA_PTR_GET(relevantorUserIds_, vector<string>) };
      inline SceneContext& setRelevantorUserIds(const vector<string> & relevantorUserIds) { DARABONBA_PTR_SET_VALUE(relevantorUserIds_, relevantorUserIds) };
      inline SceneContext& setRelevantorUserIds(vector<string> && relevantorUserIds) { DARABONBA_PTR_SET_RVALUE(relevantorUserIds_, relevantorUserIds) };


      // topicId Field Functions 
      bool hasTopicId() const { return this->topicId_ != nullptr;};
      void deleteTopicId() { this->topicId_ = nullptr;};
      inline string getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
      inline SceneContext& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    protected:
      shared_ptr<vector<SceneContext::GroupMsgs>> groupMsgs_ {};
      shared_ptr<string> openConversationId_ {};
      shared_ptr<vector<string>> relevantorUserIds_ {};
      shared_ptr<string> topicId_ {};
    };

    class Notify : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Notify& obj) { 
        DARABONBA_PTR_TO_JSON(GroupNoticeReceiverUserIds, groupNoticeReceiverUserIds_);
        DARABONBA_PTR_TO_JSON(NoticeAllGroupMember, noticeAllGroupMember_);
        DARABONBA_PTR_TO_JSON(WorkNoticeReceiverUserIds, workNoticeReceiverUserIds_);
      };
      friend void from_json(const Darabonba::Json& j, Notify& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupNoticeReceiverUserIds, groupNoticeReceiverUserIds_);
        DARABONBA_PTR_FROM_JSON(NoticeAllGroupMember, noticeAllGroupMember_);
        DARABONBA_PTR_FROM_JSON(WorkNoticeReceiverUserIds, workNoticeReceiverUserIds_);
      };
      Notify() = default ;
      Notify(const Notify &) = default ;
      Notify(Notify &&) = default ;
      Notify(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Notify() = default ;
      Notify& operator=(const Notify &) = default ;
      Notify& operator=(Notify &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupNoticeReceiverUserIds_ == nullptr
        && this->noticeAllGroupMember_ == nullptr && this->workNoticeReceiverUserIds_ == nullptr; };
      // groupNoticeReceiverUserIds Field Functions 
      bool hasGroupNoticeReceiverUserIds() const { return this->groupNoticeReceiverUserIds_ != nullptr;};
      void deleteGroupNoticeReceiverUserIds() { this->groupNoticeReceiverUserIds_ = nullptr;};
      inline const vector<string> & getGroupNoticeReceiverUserIds() const { DARABONBA_PTR_GET_CONST(groupNoticeReceiverUserIds_, vector<string>) };
      inline vector<string> getGroupNoticeReceiverUserIds() { DARABONBA_PTR_GET(groupNoticeReceiverUserIds_, vector<string>) };
      inline Notify& setGroupNoticeReceiverUserIds(const vector<string> & groupNoticeReceiverUserIds) { DARABONBA_PTR_SET_VALUE(groupNoticeReceiverUserIds_, groupNoticeReceiverUserIds) };
      inline Notify& setGroupNoticeReceiverUserIds(vector<string> && groupNoticeReceiverUserIds) { DARABONBA_PTR_SET_RVALUE(groupNoticeReceiverUserIds_, groupNoticeReceiverUserIds) };


      // noticeAllGroupMember Field Functions 
      bool hasNoticeAllGroupMember() const { return this->noticeAllGroupMember_ != nullptr;};
      void deleteNoticeAllGroupMember() { this->noticeAllGroupMember_ = nullptr;};
      inline bool getNoticeAllGroupMember() const { DARABONBA_PTR_GET_DEFAULT(noticeAllGroupMember_, false) };
      inline Notify& setNoticeAllGroupMember(bool noticeAllGroupMember) { DARABONBA_PTR_SET_VALUE(noticeAllGroupMember_, noticeAllGroupMember) };


      // workNoticeReceiverUserIds Field Functions 
      bool hasWorkNoticeReceiverUserIds() const { return this->workNoticeReceiverUserIds_ != nullptr;};
      void deleteWorkNoticeReceiverUserIds() { this->workNoticeReceiverUserIds_ = nullptr;};
      inline const vector<string> & getWorkNoticeReceiverUserIds() const { DARABONBA_PTR_GET_CONST(workNoticeReceiverUserIds_, vector<string>) };
      inline vector<string> getWorkNoticeReceiverUserIds() { DARABONBA_PTR_GET(workNoticeReceiverUserIds_, vector<string>) };
      inline Notify& setWorkNoticeReceiverUserIds(const vector<string> & workNoticeReceiverUserIds) { DARABONBA_PTR_SET_VALUE(workNoticeReceiverUserIds_, workNoticeReceiverUserIds) };
      inline Notify& setWorkNoticeReceiverUserIds(vector<string> && workNoticeReceiverUserIds) { DARABONBA_PTR_SET_RVALUE(workNoticeReceiverUserIds_, workNoticeReceiverUserIds) };


    protected:
      shared_ptr<vector<string>> groupNoticeReceiverUserIds_ {};
      shared_ptr<bool> noticeAllGroupMember_ {};
      shared_ptr<vector<string>> workNoticeReceiverUserIds_ {};
    };

    virtual bool empty() const override { return this->customFields_ == nullptr
        && this->notify_ == nullptr && this->openTeamId_ == nullptr && this->openTemplateBizId_ == nullptr && this->processorUserIds_ == nullptr && this->scene_ == nullptr
        && this->sceneContext_ == nullptr && this->tenantContext_ == nullptr && this->title_ == nullptr; };
    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline string getCustomFields() const { DARABONBA_PTR_GET_DEFAULT(customFields_, "") };
    inline CreateTicketRequest& setCustomFields(string customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };


    // notify Field Functions 
    bool hasNotify() const { return this->notify_ != nullptr;};
    void deleteNotify() { this->notify_ = nullptr;};
    inline const CreateTicketRequest::Notify & getNotify() const { DARABONBA_PTR_GET_CONST(notify_, CreateTicketRequest::Notify) };
    inline CreateTicketRequest::Notify getNotify() { DARABONBA_PTR_GET(notify_, CreateTicketRequest::Notify) };
    inline CreateTicketRequest& setNotify(const CreateTicketRequest::Notify & notify) { DARABONBA_PTR_SET_VALUE(notify_, notify) };
    inline CreateTicketRequest& setNotify(CreateTicketRequest::Notify && notify) { DARABONBA_PTR_SET_RVALUE(notify_, notify) };


    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string getOpenTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline CreateTicketRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTemplateBizId Field Functions 
    bool hasOpenTemplateBizId() const { return this->openTemplateBizId_ != nullptr;};
    void deleteOpenTemplateBizId() { this->openTemplateBizId_ = nullptr;};
    inline string getOpenTemplateBizId() const { DARABONBA_PTR_GET_DEFAULT(openTemplateBizId_, "") };
    inline CreateTicketRequest& setOpenTemplateBizId(string openTemplateBizId) { DARABONBA_PTR_SET_VALUE(openTemplateBizId_, openTemplateBizId) };


    // processorUserIds Field Functions 
    bool hasProcessorUserIds() const { return this->processorUserIds_ != nullptr;};
    void deleteProcessorUserIds() { this->processorUserIds_ = nullptr;};
    inline const vector<string> & getProcessorUserIds() const { DARABONBA_PTR_GET_CONST(processorUserIds_, vector<string>) };
    inline vector<string> getProcessorUserIds() { DARABONBA_PTR_GET(processorUserIds_, vector<string>) };
    inline CreateTicketRequest& setProcessorUserIds(const vector<string> & processorUserIds) { DARABONBA_PTR_SET_VALUE(processorUserIds_, processorUserIds) };
    inline CreateTicketRequest& setProcessorUserIds(vector<string> && processorUserIds) { DARABONBA_PTR_SET_RVALUE(processorUserIds_, processorUserIds) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateTicketRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sceneContext Field Functions 
    bool hasSceneContext() const { return this->sceneContext_ != nullptr;};
    void deleteSceneContext() { this->sceneContext_ = nullptr;};
    inline const CreateTicketRequest::SceneContext & getSceneContext() const { DARABONBA_PTR_GET_CONST(sceneContext_, CreateTicketRequest::SceneContext) };
    inline CreateTicketRequest::SceneContext getSceneContext() { DARABONBA_PTR_GET(sceneContext_, CreateTicketRequest::SceneContext) };
    inline CreateTicketRequest& setSceneContext(const CreateTicketRequest::SceneContext & sceneContext) { DARABONBA_PTR_SET_VALUE(sceneContext_, sceneContext) };
    inline CreateTicketRequest& setSceneContext(CreateTicketRequest::SceneContext && sceneContext) { DARABONBA_PTR_SET_RVALUE(sceneContext_, sceneContext) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateTicketRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateTicketRequest::TenantContext) };
    inline CreateTicketRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateTicketRequest::TenantContext) };
    inline CreateTicketRequest& setTenantContext(const CreateTicketRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateTicketRequest& setTenantContext(CreateTicketRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> customFields_ {};
    shared_ptr<CreateTicketRequest::Notify> notify_ {};
    // This parameter is required.
    shared_ptr<string> openTeamId_ {};
    // This parameter is required.
    shared_ptr<string> openTemplateBizId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> processorUserIds_ {};
    // This parameter is required.
    shared_ptr<string> scene_ {};
    shared_ptr<CreateTicketRequest::SceneContext> sceneContext_ {};
    shared_ptr<CreateTicketRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
