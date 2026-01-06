// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(actionList, actionList_);
      DARABONBA_PTR_TO_JSON(contentFieldList, contentFieldList_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(dueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(executorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_TO_JSON(notifyConfigs, notifyConfigs_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(participantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(remindNotifyConfigs, remindNotifyConfigs_);
      DARABONBA_PTR_TO_JSON(reminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(actionList, actionList_);
      DARABONBA_PTR_FROM_JSON(contentFieldList, contentFieldList_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(dueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(executorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_FROM_JSON(notifyConfigs, notifyConfigs_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(participantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(remindNotifyConfigs, remindNotifyConfigs_);
      DARABONBA_PTR_FROM_JSON(reminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
    };
    CreateTodoTaskRequest() = default ;
    CreateTodoTaskRequest(const CreateTodoTaskRequest &) = default ;
    CreateTodoTaskRequest(CreateTodoTaskRequest &&) = default ;
    CreateTodoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskRequest() = default ;
    CreateTodoTaskRequest& operator=(const CreateTodoTaskRequest &) = default ;
    CreateTodoTaskRequest& operator=(CreateTodoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemindNotifyConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemindNotifyConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(dingNotify, dingNotify_);
        DARABONBA_PTR_TO_JSON(sendTodoApn, sendTodoApn_);
      };
      friend void from_json(const Darabonba::Json& j, RemindNotifyConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(dingNotify, dingNotify_);
        DARABONBA_PTR_FROM_JSON(sendTodoApn, sendTodoApn_);
      };
      RemindNotifyConfigs() = default ;
      RemindNotifyConfigs(const RemindNotifyConfigs &) = default ;
      RemindNotifyConfigs(RemindNotifyConfigs &&) = default ;
      RemindNotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemindNotifyConfigs() = default ;
      RemindNotifyConfigs& operator=(const RemindNotifyConfigs &) = default ;
      RemindNotifyConfigs& operator=(RemindNotifyConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dingNotify_ == nullptr
        && this->sendTodoApn_ == nullptr; };
      // dingNotify Field Functions 
      bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
      void deleteDingNotify() { this->dingNotify_ = nullptr;};
      inline string getDingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
      inline RemindNotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


      // sendTodoApn Field Functions 
      bool hasSendTodoApn() const { return this->sendTodoApn_ != nullptr;};
      void deleteSendTodoApn() { this->sendTodoApn_ = nullptr;};
      inline string getSendTodoApn() const { DARABONBA_PTR_GET_DEFAULT(sendTodoApn_, "") };
      inline RemindNotifyConfigs& setSendTodoApn(string sendTodoApn) { DARABONBA_PTR_SET_VALUE(sendTodoApn_, sendTodoApn) };


    protected:
      shared_ptr<string> dingNotify_ {};
      shared_ptr<string> sendTodoApn_ {};
    };

    class NotifyConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotifyConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(dingNotify, dingNotify_);
        DARABONBA_PTR_TO_JSON(sendAssistantChat, sendAssistantChat_);
        DARABONBA_PTR_TO_JSON(sendTodoApn, sendTodoApn_);
      };
      friend void from_json(const Darabonba::Json& j, NotifyConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(dingNotify, dingNotify_);
        DARABONBA_PTR_FROM_JSON(sendAssistantChat, sendAssistantChat_);
        DARABONBA_PTR_FROM_JSON(sendTodoApn, sendTodoApn_);
      };
      NotifyConfigs() = default ;
      NotifyConfigs(const NotifyConfigs &) = default ;
      NotifyConfigs(NotifyConfigs &&) = default ;
      NotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotifyConfigs() = default ;
      NotifyConfigs& operator=(const NotifyConfigs &) = default ;
      NotifyConfigs& operator=(NotifyConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dingNotify_ == nullptr
        && this->sendAssistantChat_ == nullptr && this->sendTodoApn_ == nullptr; };
      // dingNotify Field Functions 
      bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
      void deleteDingNotify() { this->dingNotify_ = nullptr;};
      inline string getDingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
      inline NotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


      // sendAssistantChat Field Functions 
      bool hasSendAssistantChat() const { return this->sendAssistantChat_ != nullptr;};
      void deleteSendAssistantChat() { this->sendAssistantChat_ = nullptr;};
      inline string getSendAssistantChat() const { DARABONBA_PTR_GET_DEFAULT(sendAssistantChat_, "") };
      inline NotifyConfigs& setSendAssistantChat(string sendAssistantChat) { DARABONBA_PTR_SET_VALUE(sendAssistantChat_, sendAssistantChat) };


      // sendTodoApn Field Functions 
      bool hasSendTodoApn() const { return this->sendTodoApn_ != nullptr;};
      void deleteSendTodoApn() { this->sendTodoApn_ = nullptr;};
      inline string getSendTodoApn() const { DARABONBA_PTR_GET_DEFAULT(sendTodoApn_, "") };
      inline NotifyConfigs& setSendTodoApn(string sendTodoApn) { DARABONBA_PTR_SET_VALUE(sendTodoApn_, sendTodoApn) };


    protected:
      shared_ptr<string> dingNotify_ {};
      shared_ptr<string> sendAssistantChat_ {};
      shared_ptr<string> sendTodoApn_ {};
    };

    class DetailUrl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetailUrl& obj) { 
        DARABONBA_PTR_TO_JSON(appUrl, appUrl_);
        DARABONBA_PTR_TO_JSON(pcUrl, pcUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DetailUrl& obj) { 
        DARABONBA_PTR_FROM_JSON(appUrl, appUrl_);
        DARABONBA_PTR_FROM_JSON(pcUrl, pcUrl_);
      };
      DetailUrl() = default ;
      DetailUrl(const DetailUrl &) = default ;
      DetailUrl(DetailUrl &&) = default ;
      DetailUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetailUrl() = default ;
      DetailUrl& operator=(const DetailUrl &) = default ;
      DetailUrl& operator=(DetailUrl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appUrl_ == nullptr
        && this->pcUrl_ == nullptr; };
      // appUrl Field Functions 
      bool hasAppUrl() const { return this->appUrl_ != nullptr;};
      void deleteAppUrl() { this->appUrl_ = nullptr;};
      inline string getAppUrl() const { DARABONBA_PTR_GET_DEFAULT(appUrl_, "") };
      inline DetailUrl& setAppUrl(string appUrl) { DARABONBA_PTR_SET_VALUE(appUrl_, appUrl) };


      // pcUrl Field Functions 
      bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
      void deletePcUrl() { this->pcUrl_ = nullptr;};
      inline string getPcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
      inline DetailUrl& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


    protected:
      shared_ptr<string> appUrl_ {};
      shared_ptr<string> pcUrl_ {};
    };

    class ContentFieldList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContentFieldList& obj) { 
        DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
        DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      };
      friend void from_json(const Darabonba::Json& j, ContentFieldList& obj) { 
        DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
        DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
      };
      ContentFieldList() = default ;
      ContentFieldList(const ContentFieldList &) = default ;
      ContentFieldList(ContentFieldList &&) = default ;
      ContentFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContentFieldList() = default ;
      ContentFieldList& operator=(const ContentFieldList &) = default ;
      ContentFieldList& operator=(ContentFieldList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldKey_ == nullptr
        && this->fieldValue_ == nullptr; };
      // fieldKey Field Functions 
      bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
      void deleteFieldKey() { this->fieldKey_ = nullptr;};
      inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
      inline ContentFieldList& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline ContentFieldList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    protected:
      // fieldKey
      shared_ptr<string> fieldKey_ {};
      // fieldValue
      shared_ptr<string> fieldValue_ {};
    };

    class ActionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActionList& obj) { 
        DARABONBA_PTR_TO_JSON(actionKey, actionKey_);
        DARABONBA_PTR_TO_JSON(actionType, actionType_);
        DARABONBA_PTR_TO_JSON(buttonStyleType, buttonStyleType_);
        DARABONBA_PTR_TO_JSON(param, param_);
        DARABONBA_PTR_TO_JSON(pcUrl, pcUrl_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, ActionList& obj) { 
        DARABONBA_PTR_FROM_JSON(actionKey, actionKey_);
        DARABONBA_PTR_FROM_JSON(actionType, actionType_);
        DARABONBA_PTR_FROM_JSON(buttonStyleType, buttonStyleType_);
        DARABONBA_PTR_FROM_JSON(param, param_);
        DARABONBA_PTR_FROM_JSON(pcUrl, pcUrl_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      ActionList() = default ;
      ActionList(const ActionList &) = default ;
      ActionList(ActionList &&) = default ;
      ActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActionList() = default ;
      ActionList& operator=(const ActionList &) = default ;
      ActionList& operator=(ActionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Param : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Param& obj) { 
          DARABONBA_PTR_TO_JSON(body, body_);
          DARABONBA_PTR_TO_JSON(header, header_);
        };
        friend void from_json(const Darabonba::Json& j, Param& obj) { 
          DARABONBA_PTR_FROM_JSON(body, body_);
          DARABONBA_PTR_FROM_JSON(header, header_);
        };
        Param() = default ;
        Param(const Param &) = default ;
        Param(Param &&) = default ;
        Param(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Param() = default ;
        Param& operator=(const Param &) = default ;
        Param& operator=(Param &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->body_ == nullptr
        && this->header_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
        inline Param& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


        // header Field Functions 
        bool hasHeader() const { return this->header_ != nullptr;};
        void deleteHeader() { this->header_ = nullptr;};
        inline const map<string, string> & getHeader() const { DARABONBA_PTR_GET_CONST(header_, map<string, string>) };
        inline map<string, string> getHeader() { DARABONBA_PTR_GET(header_, map<string, string>) };
        inline Param& setHeader(const map<string, string> & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
        inline Param& setHeader(map<string, string> && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


      protected:
        shared_ptr<string> body_ {};
        shared_ptr<map<string, string>> header_ {};
      };

      virtual bool empty() const override { return this->actionKey_ == nullptr
        && this->actionType_ == nullptr && this->buttonStyleType_ == nullptr && this->param_ == nullptr && this->pcUrl_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr; };
      // actionKey Field Functions 
      bool hasActionKey() const { return this->actionKey_ != nullptr;};
      void deleteActionKey() { this->actionKey_ = nullptr;};
      inline string getActionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
      inline ActionList& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
      inline ActionList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // buttonStyleType Field Functions 
      bool hasButtonStyleType() const { return this->buttonStyleType_ != nullptr;};
      void deleteButtonStyleType() { this->buttonStyleType_ = nullptr;};
      inline int32_t getButtonStyleType() const { DARABONBA_PTR_GET_DEFAULT(buttonStyleType_, 0) };
      inline ActionList& setButtonStyleType(int32_t buttonStyleType) { DARABONBA_PTR_SET_VALUE(buttonStyleType_, buttonStyleType) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline const ActionList::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, ActionList::Param) };
      inline ActionList::Param getParam() { DARABONBA_PTR_GET(param_, ActionList::Param) };
      inline ActionList& setParam(const ActionList::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
      inline ActionList& setParam(ActionList::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


      // pcUrl Field Functions 
      bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
      void deletePcUrl() { this->pcUrl_ = nullptr;};
      inline string getPcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
      inline ActionList& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ActionList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline ActionList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> actionKey_ {};
      shared_ptr<int32_t> actionType_ {};
      shared_ptr<int32_t> buttonStyleType_ {};
      shared_ptr<ActionList::Param> param_ {};
      shared_ptr<string> pcUrl_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

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

    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && this->actionList_ == nullptr && this->contentFieldList_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->detailUrl_ == nullptr
        && this->dueTime_ == nullptr && this->executorIds_ == nullptr && this->isOnlyShowExecutor_ == nullptr && this->notifyConfigs_ == nullptr && this->operatorId_ == nullptr
        && this->participantIds_ == nullptr && this->priority_ == nullptr && this->remindNotifyConfigs_ == nullptr && this->reminderTimeStamp_ == nullptr && this->sourceId_ == nullptr
        && this->subject_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateTodoTaskRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateTodoTaskRequest::TenantContext) };
    inline CreateTodoTaskRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateTodoTaskRequest::TenantContext) };
    inline CreateTodoTaskRequest& setTenantContext(const CreateTodoTaskRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateTodoTaskRequest& setTenantContext(CreateTodoTaskRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline const vector<CreateTodoTaskRequest::ActionList> & getActionList() const { DARABONBA_PTR_GET_CONST(actionList_, vector<CreateTodoTaskRequest::ActionList>) };
    inline vector<CreateTodoTaskRequest::ActionList> getActionList() { DARABONBA_PTR_GET(actionList_, vector<CreateTodoTaskRequest::ActionList>) };
    inline CreateTodoTaskRequest& setActionList(const vector<CreateTodoTaskRequest::ActionList> & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
    inline CreateTodoTaskRequest& setActionList(vector<CreateTodoTaskRequest::ActionList> && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


    // contentFieldList Field Functions 
    bool hasContentFieldList() const { return this->contentFieldList_ != nullptr;};
    void deleteContentFieldList() { this->contentFieldList_ = nullptr;};
    inline const vector<CreateTodoTaskRequest::ContentFieldList> & getContentFieldList() const { DARABONBA_PTR_GET_CONST(contentFieldList_, vector<CreateTodoTaskRequest::ContentFieldList>) };
    inline vector<CreateTodoTaskRequest::ContentFieldList> getContentFieldList() { DARABONBA_PTR_GET(contentFieldList_, vector<CreateTodoTaskRequest::ContentFieldList>) };
    inline CreateTodoTaskRequest& setContentFieldList(const vector<CreateTodoTaskRequest::ContentFieldList> & contentFieldList) { DARABONBA_PTR_SET_VALUE(contentFieldList_, contentFieldList) };
    inline CreateTodoTaskRequest& setContentFieldList(vector<CreateTodoTaskRequest::ContentFieldList> && contentFieldList) { DARABONBA_PTR_SET_RVALUE(contentFieldList_, contentFieldList) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTodoTaskRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTodoTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline const CreateTodoTaskRequest::DetailUrl & getDetailUrl() const { DARABONBA_PTR_GET_CONST(detailUrl_, CreateTodoTaskRequest::DetailUrl) };
    inline CreateTodoTaskRequest::DetailUrl getDetailUrl() { DARABONBA_PTR_GET(detailUrl_, CreateTodoTaskRequest::DetailUrl) };
    inline CreateTodoTaskRequest& setDetailUrl(const CreateTodoTaskRequest::DetailUrl & detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };
    inline CreateTodoTaskRequest& setDetailUrl(CreateTodoTaskRequest::DetailUrl && detailUrl) { DARABONBA_PTR_SET_RVALUE(detailUrl_, detailUrl) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreateTodoTaskRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreateTodoTaskRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreateTodoTaskRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // isOnlyShowExecutor Field Functions 
    bool hasIsOnlyShowExecutor() const { return this->isOnlyShowExecutor_ != nullptr;};
    void deleteIsOnlyShowExecutor() { this->isOnlyShowExecutor_ = nullptr;};
    inline bool getIsOnlyShowExecutor() const { DARABONBA_PTR_GET_DEFAULT(isOnlyShowExecutor_, false) };
    inline CreateTodoTaskRequest& setIsOnlyShowExecutor(bool isOnlyShowExecutor) { DARABONBA_PTR_SET_VALUE(isOnlyShowExecutor_, isOnlyShowExecutor) };


    // notifyConfigs Field Functions 
    bool hasNotifyConfigs() const { return this->notifyConfigs_ != nullptr;};
    void deleteNotifyConfigs() { this->notifyConfigs_ = nullptr;};
    inline const CreateTodoTaskRequest::NotifyConfigs & getNotifyConfigs() const { DARABONBA_PTR_GET_CONST(notifyConfigs_, CreateTodoTaskRequest::NotifyConfigs) };
    inline CreateTodoTaskRequest::NotifyConfigs getNotifyConfigs() { DARABONBA_PTR_GET(notifyConfigs_, CreateTodoTaskRequest::NotifyConfigs) };
    inline CreateTodoTaskRequest& setNotifyConfigs(const CreateTodoTaskRequest::NotifyConfigs & notifyConfigs) { DARABONBA_PTR_SET_VALUE(notifyConfigs_, notifyConfigs) };
    inline CreateTodoTaskRequest& setNotifyConfigs(CreateTodoTaskRequest::NotifyConfigs && notifyConfigs) { DARABONBA_PTR_SET_RVALUE(notifyConfigs_, notifyConfigs) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline CreateTodoTaskRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & getParticipantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> getParticipantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline CreateTodoTaskRequest& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline CreateTodoTaskRequest& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTodoTaskRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // remindNotifyConfigs Field Functions 
    bool hasRemindNotifyConfigs() const { return this->remindNotifyConfigs_ != nullptr;};
    void deleteRemindNotifyConfigs() { this->remindNotifyConfigs_ = nullptr;};
    inline const CreateTodoTaskRequest::RemindNotifyConfigs & getRemindNotifyConfigs() const { DARABONBA_PTR_GET_CONST(remindNotifyConfigs_, CreateTodoTaskRequest::RemindNotifyConfigs) };
    inline CreateTodoTaskRequest::RemindNotifyConfigs getRemindNotifyConfigs() { DARABONBA_PTR_GET(remindNotifyConfigs_, CreateTodoTaskRequest::RemindNotifyConfigs) };
    inline CreateTodoTaskRequest& setRemindNotifyConfigs(const CreateTodoTaskRequest::RemindNotifyConfigs & remindNotifyConfigs) { DARABONBA_PTR_SET_VALUE(remindNotifyConfigs_, remindNotifyConfigs) };
    inline CreateTodoTaskRequest& setRemindNotifyConfigs(CreateTodoTaskRequest::RemindNotifyConfigs && remindNotifyConfigs) { DARABONBA_PTR_SET_RVALUE(remindNotifyConfigs_, remindNotifyConfigs) };


    // reminderTimeStamp Field Functions 
    bool hasReminderTimeStamp() const { return this->reminderTimeStamp_ != nullptr;};
    void deleteReminderTimeStamp() { this->reminderTimeStamp_ = nullptr;};
    inline int64_t getReminderTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(reminderTimeStamp_, 0L) };
    inline CreateTodoTaskRequest& setReminderTimeStamp(int64_t reminderTimeStamp) { DARABONBA_PTR_SET_VALUE(reminderTimeStamp_, reminderTimeStamp) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateTodoTaskRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateTodoTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    shared_ptr<CreateTodoTaskRequest::TenantContext> tenantContext_ {};
    shared_ptr<vector<CreateTodoTaskRequest::ActionList>> actionList_ {};
    shared_ptr<vector<CreateTodoTaskRequest::ContentFieldList>> contentFieldList_ {};
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<CreateTodoTaskRequest::DetailUrl> detailUrl_ {};
    shared_ptr<int64_t> dueTime_ {};
    shared_ptr<vector<string>> executorIds_ {};
    shared_ptr<bool> isOnlyShowExecutor_ {};
    shared_ptr<CreateTodoTaskRequest::NotifyConfigs> notifyConfigs_ {};
    shared_ptr<string> operatorId_ {};
    shared_ptr<vector<string>> participantIds_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<CreateTodoTaskRequest::RemindNotifyConfigs> remindNotifyConfigs_ {};
    shared_ptr<int64_t> reminderTimeStamp_ {};
    shared_ptr<string> sourceId_ {};
    // This parameter is required.
    shared_ptr<string> subject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
