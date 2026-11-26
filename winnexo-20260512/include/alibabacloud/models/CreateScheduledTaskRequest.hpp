// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKREQUEST_HPP_
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
  class CreateScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(autoPreference, autoPreference_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(outputMode, outputMode_);
      DARABONBA_PTR_TO_JSON(segments, segments_);
      DARABONBA_PTR_TO_JSON(taskDetail, taskDetail_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
      DARABONBA_PTR_TO_JSON(visibleMemberUserIds, visibleMemberUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(autoPreference, autoPreference_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(outputMode, outputMode_);
      DARABONBA_PTR_FROM_JSON(segments, segments_);
      DARABONBA_PTR_FROM_JSON(taskDetail, taskDetail_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(visibleMemberUserIds, visibleMemberUserIds_);
    };
    CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest(CreateScheduledTaskRequest &&) = default ;
    CreateScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledTaskRequest() = default ;
    CreateScheduledTaskRequest& operator=(const CreateScheduledTaskRequest &) = default ;
    CreateScheduledTaskRequest& operator=(CreateScheduledTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TriggerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TriggerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(language, language_);
        DARABONBA_PTR_TO_JSON(pushConfig, pushConfig_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(triggerMode, triggerMode_);
      };
      friend void from_json(const Darabonba::Json& j, TriggerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(language, language_);
        DARABONBA_PTR_FROM_JSON(pushConfig, pushConfig_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(triggerMode, triggerMode_);
      };
      TriggerConfig() = default ;
      TriggerConfig(const TriggerConfig &) = default ;
      TriggerConfig(TriggerConfig &&) = default ;
      TriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TriggerConfig() = default ;
      TriggerConfig& operator=(const TriggerConfig &) = default ;
      TriggerConfig& operator=(TriggerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushConfig& obj) { 
          DARABONBA_PTR_TO_JSON(channelType, channelType_);
          DARABONBA_PTR_TO_JSON(contentScope, contentScope_);
          DARABONBA_PTR_TO_JSON(deliveryMethod, deliveryMethod_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(fileFormat, fileFormat_);
          DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
          DARABONBA_PTR_TO_JSON(receiverType, receiverType_);
        };
        friend void from_json(const Darabonba::Json& j, PushConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(channelType, channelType_);
          DARABONBA_PTR_FROM_JSON(contentScope, contentScope_);
          DARABONBA_PTR_FROM_JSON(deliveryMethod, deliveryMethod_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(fileFormat, fileFormat_);
          DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
          DARABONBA_PTR_FROM_JSON(receiverType, receiverType_);
        };
        PushConfig() = default ;
        PushConfig(const PushConfig &) = default ;
        PushConfig(PushConfig &&) = default ;
        PushConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushConfig() = default ;
        PushConfig& operator=(const PushConfig &) = default ;
        PushConfig& operator=(PushConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelType_ == nullptr
        && this->contentScope_ == nullptr && this->deliveryMethod_ == nullptr && this->enabled_ == nullptr && this->fileFormat_ == nullptr && this->operatingObjectName_ == nullptr
        && this->receiverType_ == nullptr; };
        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
        inline PushConfig& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // contentScope Field Functions 
        bool hasContentScope() const { return this->contentScope_ != nullptr;};
        void deleteContentScope() { this->contentScope_ = nullptr;};
        inline string getContentScope() const { DARABONBA_PTR_GET_DEFAULT(contentScope_, "") };
        inline PushConfig& setContentScope(string contentScope) { DARABONBA_PTR_SET_VALUE(contentScope_, contentScope) };


        // deliveryMethod Field Functions 
        bool hasDeliveryMethod() const { return this->deliveryMethod_ != nullptr;};
        void deleteDeliveryMethod() { this->deliveryMethod_ = nullptr;};
        inline string getDeliveryMethod() const { DARABONBA_PTR_GET_DEFAULT(deliveryMethod_, "") };
        inline PushConfig& setDeliveryMethod(string deliveryMethod) { DARABONBA_PTR_SET_VALUE(deliveryMethod_, deliveryMethod) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline PushConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // fileFormat Field Functions 
        bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
        void deleteFileFormat() { this->fileFormat_ = nullptr;};
        inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
        inline PushConfig& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


        // operatingObjectName Field Functions 
        bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
        void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
        inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
        inline PushConfig& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


        // receiverType Field Functions 
        bool hasReceiverType() const { return this->receiverType_ != nullptr;};
        void deleteReceiverType() { this->receiverType_ = nullptr;};
        inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
        inline PushConfig& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


      protected:
        // The notification method. Valid values:
        // 
        // - **hdm_alarm_sms**: Text message.
        // - **dingtalk**: DingTalk chatbot.
        // - **hdm_alarm_sms_and_email**: Text message and email.
        // - **hdm_alarm_sms,dingtalk**: Text message and DingTalk chatbot.
        shared_ptr<string> channelType_ {};
        // The scope of the push content. Default value: all_replies.
        shared_ptr<string> contentScope_ {};
        // The push method. Default value: channel_bot.
        shared_ptr<string> deliveryMethod_ {};
        // Specifies whether the credential is enabled. Valid values:
        // 
        // - true: Enabled.
        // - false: Disabled.
        shared_ptr<bool> enabled_ {};
        // The file format, such as Excel or CSV.
        shared_ptr<string> fileFormat_ {};
        // The name of the digital employee (the name of the operating object, optional).
        shared_ptr<string> operatingObjectName_ {};
        // The type of the file receiver. Valid values:
        // 
        // - 0: Private chat.
        // - 1: Group chat.
        // - 2: DingTalk Drive.
        // - 3: Document.
        shared_ptr<string> receiverType_ {};
      };

      virtual bool empty() const override { return this->cron_ == nullptr
        && this->language_ == nullptr && this->pushConfig_ == nullptr && this->timezone_ == nullptr && this->triggerMode_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline TriggerConfig& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline TriggerConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // pushConfig Field Functions 
      bool hasPushConfig() const { return this->pushConfig_ != nullptr;};
      void deletePushConfig() { this->pushConfig_ = nullptr;};
      inline const vector<TriggerConfig::PushConfig> & getPushConfig() const { DARABONBA_PTR_GET_CONST(pushConfig_, vector<TriggerConfig::PushConfig>) };
      inline vector<TriggerConfig::PushConfig> getPushConfig() { DARABONBA_PTR_GET(pushConfig_, vector<TriggerConfig::PushConfig>) };
      inline TriggerConfig& setPushConfig(const vector<TriggerConfig::PushConfig> & pushConfig) { DARABONBA_PTR_SET_VALUE(pushConfig_, pushConfig) };
      inline TriggerConfig& setPushConfig(vector<TriggerConfig::PushConfig> && pushConfig) { DARABONBA_PTR_SET_RVALUE(pushConfig_, pushConfig) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline TriggerConfig& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // triggerMode Field Functions 
      bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
      void deleteTriggerMode() { this->triggerMode_ = nullptr;};
      inline string getTriggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, "") };
      inline TriggerConfig& setTriggerMode(string triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


    protected:
      // The periodic training information. The cron syntax is used (Minutes Hours DayofMonth Month DayofWeek). If this parameter is empty, periodic training is not performed, which is the default value. In DayofWeek, 0 indicates Sunday.
      shared_ptr<string> cron_ {};
      // The language. Valid values:
      // 
      // - zh_CN: Chinese. This is the default value.
      // - en_US: English.
      shared_ptr<string> language_ {};
      // The list of task push channels. If this parameter is empty or no channel is enabled, no push is performed.
      shared_ptr<vector<TriggerConfig::PushConfig>> pushConfig_ {};
      // The time zone.
      shared_ptr<string> timezone_ {};
      // The trigger mode. Valid values:
      // 
      // - 1: Manual trigger.
      // - 2: Scheduled trigger.
      // - 3: Code commit trigger.
      // - 5: Pipeline trigger.
      // - 6: WEBHOOK trigger.
      shared_ptr<string> triggerMode_ {};
    };

    class TaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDetail& obj) { 
        DARABONBA_PTR_TO_JSON(relatedObjects, relatedObjects_);
        DARABONBA_PTR_TO_JSON(relatedSemantics, relatedSemantics_);
        DARABONBA_PTR_TO_JSON(relatedSkills, relatedSkills_);
        DARABONBA_PTR_TO_JSON(taskUnderstand, taskUnderstand_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(relatedObjects, relatedObjects_);
        DARABONBA_PTR_FROM_JSON(relatedSemantics, relatedSemantics_);
        DARABONBA_PTR_FROM_JSON(relatedSkills, relatedSkills_);
        DARABONBA_PTR_FROM_JSON(taskUnderstand, taskUnderstand_);
      };
      TaskDetail() = default ;
      TaskDetail(const TaskDetail &) = default ;
      TaskDetail(TaskDetail &&) = default ;
      TaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDetail() = default ;
      TaskDetail& operator=(const TaskDetail &) = default ;
      TaskDetail& operator=(TaskDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedSkills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedSkills& obj) { 
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
          DARABONBA_PTR_TO_JSON(sourceIds, sourceIds_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedSkills& obj) { 
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
          DARABONBA_PTR_FROM_JSON(sourceIds, sourceIds_);
        };
        RelatedSkills() = default ;
        RelatedSkills(const RelatedSkills &) = default ;
        RelatedSkills(RelatedSkills &&) = default ;
        RelatedSkills(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedSkills() = default ;
        RelatedSkills& operator=(const RelatedSkills &) = default ;
        RelatedSkills& operator=(RelatedSkills &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->name_ == nullptr && this->skillCode_ == nullptr && this->sourceIds_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline RelatedSkills& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RelatedSkills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // skillCode Field Functions 
        bool hasSkillCode() const { return this->skillCode_ != nullptr;};
        void deleteSkillCode() { this->skillCode_ = nullptr;};
        inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
        inline RelatedSkills& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


        // sourceIds Field Functions 
        bool hasSourceIds() const { return this->sourceIds_ != nullptr;};
        void deleteSourceIds() { this->sourceIds_ = nullptr;};
        inline const vector<string> & getSourceIds() const { DARABONBA_PTR_GET_CONST(sourceIds_, vector<string>) };
        inline vector<string> getSourceIds() { DARABONBA_PTR_GET(sourceIds_, vector<string>) };
        inline RelatedSkills& setSourceIds(const vector<string> & sourceIds) { DARABONBA_PTR_SET_VALUE(sourceIds_, sourceIds) };
        inline RelatedSkills& setSourceIds(vector<string> && sourceIds) { DARABONBA_PTR_SET_RVALUE(sourceIds_, sourceIds) };


      protected:
        // The display name.
        shared_ptr<string> displayName_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The skill code.
        shared_ptr<string> skillCode_ {};
        // sourceIds
        shared_ptr<vector<string>> sourceIds_ {};
      };

      class RelatedSemantics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedSemantics& obj) { 
          DARABONBA_PTR_TO_JSON(attributes, attributes_);
          DARABONBA_PTR_TO_JSON(entity, entity_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedSemantics& obj) { 
          DARABONBA_PTR_FROM_JSON(attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(entity, entity_);
        };
        RelatedSemantics() = default ;
        RelatedSemantics(const RelatedSemantics &) = default ;
        RelatedSemantics(RelatedSemantics &&) = default ;
        RelatedSemantics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedSemantics() = default ;
        RelatedSemantics& operator=(const RelatedSemantics &) = default ;
        RelatedSemantics& operator=(RelatedSemantics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attributes_ == nullptr
        && this->entity_ == nullptr; };
        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
        inline RelatedSemantics& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


        // entity Field Functions 
        bool hasEntity() const { return this->entity_ != nullptr;};
        void deleteEntity() { this->entity_ = nullptr;};
        inline string getEntity() const { DARABONBA_PTR_GET_DEFAULT(entity_, "") };
        inline RelatedSemantics& setEntity(string entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };


      protected:
        // The file extension information.
        shared_ptr<string> attributes_ {};
        // The semantic entity name, such as customer or opportunity.
        shared_ptr<string> entity_ {};
      };

      class RelatedObjects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedObjects& obj) { 
          DARABONBA_PTR_TO_JSON(mentionType, mentionType_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(objectId, objectId_);
          DARABONBA_PTR_TO_JSON(objectType, objectType_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedObjects& obj) { 
          DARABONBA_PTR_FROM_JSON(mentionType, mentionType_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(objectId, objectId_);
          DARABONBA_PTR_FROM_JSON(objectType, objectType_);
        };
        RelatedObjects() = default ;
        RelatedObjects(const RelatedObjects &) = default ;
        RelatedObjects(RelatedObjects &&) = default ;
        RelatedObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedObjects() = default ;
        RelatedObjects& operator=(const RelatedObjects &) = default ;
        RelatedObjects& operator=(RelatedObjects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mentionType_ == nullptr
        && this->name_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr; };
        // mentionType Field Functions 
        bool hasMentionType() const { return this->mentionType_ != nullptr;};
        void deleteMentionType() { this->mentionType_ = nullptr;};
        inline string getMentionType() const { DARABONBA_PTR_GET_DEFAULT(mentionType_, "") };
        inline RelatedObjects& setMentionType(string mentionType) { DARABONBA_PTR_SET_VALUE(mentionType_, mentionType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RelatedObjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline RelatedObjects& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline RelatedObjects& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      protected:
        // The mention type, such as objects.
        shared_ptr<string> mentionType_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The object ID. Pass the project task ID.
        // 
        // - For internal enterprise applications, call the [Create a project task](https://open.dingtalk.com/document/orgapp-server/create-a-project-task) API to obtain the taskId.
        // - For third-party enterprise applications, call the [Create a project task](https://open.dingtalk.com/document/isvapp-server/create-a-project-task) API to obtain the taskId.
        shared_ptr<string> objectId_ {};
        // The relationship type. Valid values:
        // - crm_customer: Enterprise customer.
        // - crm_customer_personal: Individual customer.
        shared_ptr<string> objectType_ {};
      };

      virtual bool empty() const override { return this->relatedObjects_ == nullptr
        && this->relatedSemantics_ == nullptr && this->relatedSkills_ == nullptr && this->taskUnderstand_ == nullptr; };
      // relatedObjects Field Functions 
      bool hasRelatedObjects() const { return this->relatedObjects_ != nullptr;};
      void deleteRelatedObjects() { this->relatedObjects_ = nullptr;};
      inline const vector<TaskDetail::RelatedObjects> & getRelatedObjects() const { DARABONBA_PTR_GET_CONST(relatedObjects_, vector<TaskDetail::RelatedObjects>) };
      inline vector<TaskDetail::RelatedObjects> getRelatedObjects() { DARABONBA_PTR_GET(relatedObjects_, vector<TaskDetail::RelatedObjects>) };
      inline TaskDetail& setRelatedObjects(const vector<TaskDetail::RelatedObjects> & relatedObjects) { DARABONBA_PTR_SET_VALUE(relatedObjects_, relatedObjects) };
      inline TaskDetail& setRelatedObjects(vector<TaskDetail::RelatedObjects> && relatedObjects) { DARABONBA_PTR_SET_RVALUE(relatedObjects_, relatedObjects) };


      // relatedSemantics Field Functions 
      bool hasRelatedSemantics() const { return this->relatedSemantics_ != nullptr;};
      void deleteRelatedSemantics() { this->relatedSemantics_ = nullptr;};
      inline const vector<TaskDetail::RelatedSemantics> & getRelatedSemantics() const { DARABONBA_PTR_GET_CONST(relatedSemantics_, vector<TaskDetail::RelatedSemantics>) };
      inline vector<TaskDetail::RelatedSemantics> getRelatedSemantics() { DARABONBA_PTR_GET(relatedSemantics_, vector<TaskDetail::RelatedSemantics>) };
      inline TaskDetail& setRelatedSemantics(const vector<TaskDetail::RelatedSemantics> & relatedSemantics) { DARABONBA_PTR_SET_VALUE(relatedSemantics_, relatedSemantics) };
      inline TaskDetail& setRelatedSemantics(vector<TaskDetail::RelatedSemantics> && relatedSemantics) { DARABONBA_PTR_SET_RVALUE(relatedSemantics_, relatedSemantics) };


      // relatedSkills Field Functions 
      bool hasRelatedSkills() const { return this->relatedSkills_ != nullptr;};
      void deleteRelatedSkills() { this->relatedSkills_ = nullptr;};
      inline const vector<TaskDetail::RelatedSkills> & getRelatedSkills() const { DARABONBA_PTR_GET_CONST(relatedSkills_, vector<TaskDetail::RelatedSkills>) };
      inline vector<TaskDetail::RelatedSkills> getRelatedSkills() { DARABONBA_PTR_GET(relatedSkills_, vector<TaskDetail::RelatedSkills>) };
      inline TaskDetail& setRelatedSkills(const vector<TaskDetail::RelatedSkills> & relatedSkills) { DARABONBA_PTR_SET_VALUE(relatedSkills_, relatedSkills) };
      inline TaskDetail& setRelatedSkills(vector<TaskDetail::RelatedSkills> && relatedSkills) { DARABONBA_PTR_SET_RVALUE(relatedSkills_, relatedSkills) };


      // taskUnderstand Field Functions 
      bool hasTaskUnderstand() const { return this->taskUnderstand_ != nullptr;};
      void deleteTaskUnderstand() { this->taskUnderstand_ = nullptr;};
      inline string getTaskUnderstand() const { DARABONBA_PTR_GET_DEFAULT(taskUnderstand_, "") };
      inline TaskDetail& setTaskUnderstand(string taskUnderstand) { DARABONBA_PTR_SET_VALUE(taskUnderstand_, taskUnderstand) };


    protected:
      // The associated objects.
      shared_ptr<vector<TaskDetail::RelatedObjects>> relatedObjects_ {};
      // The associated semantics.
      shared_ptr<vector<TaskDetail::RelatedSemantics>> relatedSemantics_ {};
      // The associated skills.
      shared_ptr<vector<TaskDetail::RelatedSkills>> relatedSkills_ {};
      // The task understanding description polished by the LLM.
      shared_ptr<string> taskUnderstand_ {};
    };

    class Segments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Segments& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
        DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Segments& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
        DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Segments() = default ;
      Segments(const Segments &) = default ;
      Segments(Segments &&) = default ;
      Segments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Segments() = default ;
      Segments& operator=(const Segments &) = default ;
      Segments& operator=(Segments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->enabled_ == nullptr && this->name_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr && this->skillCode_ == nullptr
        && this->type_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Segments& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Segments& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Segments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Segments& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Segments& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // skillCode Field Functions 
      bool hasSkillCode() const { return this->skillCode_ != nullptr;};
      void deleteSkillCode() { this->skillCode_ = nullptr;};
      inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
      inline Segments& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Segments& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The card callback content.
      shared_ptr<string> content_ {};
      // Specifies whether to enable the feature.
      shared_ptr<bool> enabled_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The ID of the recommended item. The value can be a **feedId** or a mini-app ID.
      shared_ptr<string> objectId_ {};
      // The saved customer type.
      shared_ptr<string> objectType_ {};
      // The skill code. This parameter has a value when type is set to skill.
      shared_ptr<string> skillCode_ {};
      // The billing type. Currently, only fixed is supported.
      shared_ptr<string> type_ {};
    };

    class Description : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Description& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
        DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Description& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
        DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Description() = default ;
      Description(const Description &) = default ;
      Description(Description &&) = default ;
      Description(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Description() = default ;
      Description& operator=(const Description &) = default ;
      Description& operator=(Description &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->enabled_ == nullptr && this->name_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr && this->skillCode_ == nullptr
        && this->type_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Description& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Description& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Description& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Description& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Description& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // skillCode Field Functions 
      bool hasSkillCode() const { return this->skillCode_ != nullptr;};
      void deleteSkillCode() { this->skillCode_ = nullptr;};
      inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
      inline Description& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Description& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The streaming output message.
      shared_ptr<string> content_ {};
      // Specifies whether the throttling rule is enabled. A value of true indicates that the rule is enabled, and a value of false indicates that the rule is disabled.
      shared_ptr<bool> enabled_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The object ID. Pass the project task ID.
      // 
      // - For internal enterprise applications, call the [Create a project task](https://open.dingtalk.com/document/orgapp-server/create-a-project-task) API to obtain the taskId.
      // - For third-party enterprise applications, call the [Create a project task](https://open.dingtalk.com/document/isvapp-server/create-a-project-task) API to obtain the taskId.
      shared_ptr<string> objectId_ {};
      // The object type. Set the value to task, which indicates a project task.
      shared_ptr<string> objectType_ {};
      // The skill code. This parameter has a value when type is set to skill.
      shared_ptr<string> skillCode_ {};
      // The HTTP API type. Valid values: Http (common HTTP API), Rest (RESTful API), WebSocket (WebSocket API), HttpIngress (HTTP API accessed through Ingress), LLM (large language model API), and Agent (agent API).
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->autoPreference_ == nullptr && this->collaborationGroupId_ == nullptr && this->description_ == nullptr && this->digitalEmployeeName_ == nullptr && this->isOpen_ == nullptr
        && this->model_ == nullptr && this->name_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->outputMode_ == nullptr
        && this->segments_ == nullptr && this->taskDetail_ == nullptr && this->tenantId_ == nullptr && this->triggerConfig_ == nullptr && this->visibility_ == nullptr
        && this->visibleMemberUserIds_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline CreateScheduledTaskRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // autoPreference Field Functions 
    bool hasAutoPreference() const { return this->autoPreference_ != nullptr;};
    void deleteAutoPreference() { this->autoPreference_ = nullptr;};
    inline string getAutoPreference() const { DARABONBA_PTR_GET_DEFAULT(autoPreference_, "") };
    inline CreateScheduledTaskRequest& setAutoPreference(string autoPreference) { DARABONBA_PTR_SET_VALUE(autoPreference_, autoPreference) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateScheduledTaskRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const vector<CreateScheduledTaskRequest::Description> & getDescription() const { DARABONBA_PTR_GET_CONST(description_, vector<CreateScheduledTaskRequest::Description>) };
    inline vector<CreateScheduledTaskRequest::Description> getDescription() { DARABONBA_PTR_GET(description_, vector<CreateScheduledTaskRequest::Description>) };
    inline CreateScheduledTaskRequest& setDescription(const vector<CreateScheduledTaskRequest::Description> & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline CreateScheduledTaskRequest& setDescription(vector<CreateScheduledTaskRequest::Description> && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline const vector<string> & getDigitalEmployeeName() const { DARABONBA_PTR_GET_CONST(digitalEmployeeName_, vector<string>) };
    inline vector<string> getDigitalEmployeeName() { DARABONBA_PTR_GET(digitalEmployeeName_, vector<string>) };
    inline CreateScheduledTaskRequest& setDigitalEmployeeName(const vector<string> & digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };
    inline CreateScheduledTaskRequest& setDigitalEmployeeName(vector<string> && digitalEmployeeName) { DARABONBA_PTR_SET_RVALUE(digitalEmployeeName_, digitalEmployeeName) };


    // isOpen Field Functions 
    bool hasIsOpen() const { return this->isOpen_ != nullptr;};
    void deleteIsOpen() { this->isOpen_ = nullptr;};
    inline bool getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
    inline CreateScheduledTaskRequest& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateScheduledTaskRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateScheduledTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline CreateScheduledTaskRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline CreateScheduledTaskRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // outputMode Field Functions 
    bool hasOutputMode() const { return this->outputMode_ != nullptr;};
    void deleteOutputMode() { this->outputMode_ = nullptr;};
    inline string getOutputMode() const { DARABONBA_PTR_GET_DEFAULT(outputMode_, "") };
    inline CreateScheduledTaskRequest& setOutputMode(string outputMode) { DARABONBA_PTR_SET_VALUE(outputMode_, outputMode) };


    // segments Field Functions 
    bool hasSegments() const { return this->segments_ != nullptr;};
    void deleteSegments() { this->segments_ = nullptr;};
    inline const vector<CreateScheduledTaskRequest::Segments> & getSegments() const { DARABONBA_PTR_GET_CONST(segments_, vector<CreateScheduledTaskRequest::Segments>) };
    inline vector<CreateScheduledTaskRequest::Segments> getSegments() { DARABONBA_PTR_GET(segments_, vector<CreateScheduledTaskRequest::Segments>) };
    inline CreateScheduledTaskRequest& setSegments(const vector<CreateScheduledTaskRequest::Segments> & segments) { DARABONBA_PTR_SET_VALUE(segments_, segments) };
    inline CreateScheduledTaskRequest& setSegments(vector<CreateScheduledTaskRequest::Segments> && segments) { DARABONBA_PTR_SET_RVALUE(segments_, segments) };


    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline const CreateScheduledTaskRequest::TaskDetail & getTaskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, CreateScheduledTaskRequest::TaskDetail) };
    inline CreateScheduledTaskRequest::TaskDetail getTaskDetail() { DARABONBA_PTR_GET(taskDetail_, CreateScheduledTaskRequest::TaskDetail) };
    inline CreateScheduledTaskRequest& setTaskDetail(const CreateScheduledTaskRequest::TaskDetail & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
    inline CreateScheduledTaskRequest& setTaskDetail(CreateScheduledTaskRequest::TaskDetail && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateScheduledTaskRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const CreateScheduledTaskRequest::TriggerConfig & getTriggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, CreateScheduledTaskRequest::TriggerConfig) };
    inline CreateScheduledTaskRequest::TriggerConfig getTriggerConfig() { DARABONBA_PTR_GET(triggerConfig_, CreateScheduledTaskRequest::TriggerConfig) };
    inline CreateScheduledTaskRequest& setTriggerConfig(const CreateScheduledTaskRequest::TriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline CreateScheduledTaskRequest& setTriggerConfig(CreateScheduledTaskRequest::TriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateScheduledTaskRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibleMemberUserIds Field Functions 
    bool hasVisibleMemberUserIds() const { return this->visibleMemberUserIds_ != nullptr;};
    void deleteVisibleMemberUserIds() { this->visibleMemberUserIds_ = nullptr;};
    inline const vector<string> & getVisibleMemberUserIds() const { DARABONBA_PTR_GET_CONST(visibleMemberUserIds_, vector<string>) };
    inline vector<string> getVisibleMemberUserIds() { DARABONBA_PTR_GET(visibleMemberUserIds_, vector<string>) };
    inline CreateScheduledTaskRequest& setVisibleMemberUserIds(const vector<string> & visibleMemberUserIds) { DARABONBA_PTR_SET_VALUE(visibleMemberUserIds_, visibleMemberUserIds) };
    inline CreateScheduledTaskRequest& setVisibleMemberUserIds(vector<string> && visibleMemberUserIds) { DARABONBA_PTR_SET_RVALUE(visibleMemberUserIds_, visibleMemberUserIds) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // AUTO 偏好：none=默认、performance=效果优先、credit=成本优先；创建缺省为 none，固定模型可保存但不生效
    shared_ptr<string> autoPreference_ {};
    // The ID of the associated collaboration group (such as cg_101). If this parameter is passed, a group space task is created, and the caller must be a valid group member. If this parameter is empty, a personal task is created.
    shared_ptr<string> collaborationGroupId_ {};
    // The description of the to-do card type.
    shared_ptr<vector<CreateScheduledTaskRequest::Description>> description_ {};
    // The name of the currently effective digital employee. This parameter is empty if it is not configured.
    shared_ptr<vector<string>> digitalEmployeeName_ {};
    // Specifies whether public access is allowed.
    shared_ptr<bool> isOpen_ {};
    // The large model used by the assistant. The default value is empty, which indicates that DingTalk automatically selects the model.
    shared_ptr<string> model_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The output conversation mode. Default value: NEW_CONVERSATION.
    shared_ptr<string> outputMode_ {};
    // The site ID.
    shared_ptr<vector<CreateScheduledTaskRequest::Segments>> segments_ {};
    // The task details.
    shared_ptr<CreateScheduledTaskRequest::TaskDetail> taskDetail_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
    // The trigger configuration of the scheduled task. triggerMode supports manual (manual trigger) and scheduled (scheduled trigger). If scheduled is used, cron must be specified. timezone and language are injected by the server, and the client does not need to pass them. pushConfig is the list of task push channels. If it is empty or no channel is enabled, no push is performed.
    shared_ptr<CreateScheduledTaskRequest::TriggerConfig> triggerConfig_ {};
    // The visibility scope of the group task. Valid values: PRIVATE (visible only to the creator and group owner), COLLABORATIVE (visible to specified collaboration members), and PUBLIC (visible to all group members). If this parameter is not passed for a group task, the default value is PRIVATE. This field is ignored for personal tasks.
    shared_ptr<string> visibility_ {};
    // The list of user IDs of collaboration members. This parameter takes effect only when visibility is set to COLLABORATIVE and is ignored for other values. A maximum of 1,000 user IDs can be specified. You do not need to pass the IDs of the task creator and group creator because they are covered by the authentication layer. This field is ignored for personal tasks.
    shared_ptr<vector<string>> visibleMemberUserIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
