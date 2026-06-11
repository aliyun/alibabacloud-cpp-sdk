// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTRESPONSEPLANFORSNSVIEW_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTRESPONSEPLANFORSNSVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentResponsePlanForSNSView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentResponsePlanForSNSView& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(escalationId, escalationId_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentResponsePlanForSNSView& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(escalationId, escalationId_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    IncidentResponsePlanForSNSView() = default ;
    IncidentResponsePlanForSNSView(const IncidentResponsePlanForSNSView &) = default ;
    IncidentResponsePlanForSNSView(IncidentResponsePlanForSNSView &&) = default ;
    IncidentResponsePlanForSNSView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentResponsePlanForSNSView() = default ;
    IncidentResponsePlanForSNSView& operator=(const IncidentResponsePlanForSNSView &) = default ;
    IncidentResponsePlanForSNSView& operator=(IncidentResponsePlanForSNSView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RepeatNotifySetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RepeatNotifySetting& obj) { 
        DARABONBA_PTR_TO_JSON(endIncidentState, endIncidentState_);
        DARABONBA_PTR_TO_JSON(repeatInterval, repeatInterval_);
      };
      friend void from_json(const Darabonba::Json& j, RepeatNotifySetting& obj) { 
        DARABONBA_PTR_FROM_JSON(endIncidentState, endIncidentState_);
        DARABONBA_PTR_FROM_JSON(repeatInterval, repeatInterval_);
      };
      RepeatNotifySetting() = default ;
      RepeatNotifySetting(const RepeatNotifySetting &) = default ;
      RepeatNotifySetting(RepeatNotifySetting &&) = default ;
      RepeatNotifySetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RepeatNotifySetting() = default ;
      RepeatNotifySetting& operator=(const RepeatNotifySetting &) = default ;
      RepeatNotifySetting& operator=(RepeatNotifySetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endIncidentState_ == nullptr
        && this->repeatInterval_ == nullptr; };
      // endIncidentState Field Functions 
      bool hasEndIncidentState() const { return this->endIncidentState_ != nullptr;};
      void deleteEndIncidentState() { this->endIncidentState_ = nullptr;};
      inline string getEndIncidentState() const { DARABONBA_PTR_GET_DEFAULT(endIncidentState_, "") };
      inline RepeatNotifySetting& setEndIncidentState(string endIncidentState) { DARABONBA_PTR_SET_VALUE(endIncidentState_, endIncidentState) };


      // repeatInterval Field Functions 
      bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
      void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
      inline int32_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
      inline RepeatNotifySetting& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    protected:
      // The incident state at which repeated notifications stop. For example, `resolved`.
      shared_ptr<string> endIncidentState_ {};
      // The interval, in seconds, for repeated notifications.
      shared_ptr<int32_t> repeatInterval_ {};
    };

    class PushingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
        DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
      };
      friend void from_json(const Darabonba::Json& j, PushingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
        DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
      };
      PushingSetting() = default ;
      PushingSetting(const PushingSetting &) = default ;
      PushingSetting(PushingSetting &&) = default ;
      PushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushingSetting() = default ;
      PushingSetting& operator=(const PushingSetting &) = default ;
      PushingSetting& operator=(PushingSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && this->restoreActionIds_ == nullptr && this->templateUuid_ == nullptr; };
      // alertActionIds Field Functions 
      bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
      void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
      inline const vector<string> & getAlertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
      inline vector<string> getAlertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
      inline PushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
      inline PushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


      // restoreActionIds Field Functions 
      bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
      void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
      inline const vector<string> & getRestoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
      inline vector<string> getRestoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
      inline PushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
      inline PushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


      // templateUuid Field Functions 
      bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
      void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
      inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
      inline PushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    protected:
      // The IDs of actions to run when an alert is triggered.
      shared_ptr<vector<string>> alertActionIds_ {};
      // The IDs of actions to run when the incident is resolved.
      shared_ptr<vector<string>> restoreActionIds_ {};
      // The ID of the notification template.
      shared_ptr<string> templateUuid_ {};
    };

    virtual bool empty() const override { return this->autoRecoverSeconds_ == nullptr
        && this->createTime_ == nullptr && this->enable_ == nullptr && this->escalationId_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr
        && this->pushingSetting_ == nullptr && this->repeatNotifySetting_ == nullptr && this->source_ == nullptr && this->syncFromType_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->uuid_ == nullptr; };
    // autoRecoverSeconds Field Functions 
    bool hasAutoRecoverSeconds() const { return this->autoRecoverSeconds_ != nullptr;};
    void deleteAutoRecoverSeconds() { this->autoRecoverSeconds_ = nullptr;};
    inline int64_t getAutoRecoverSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverSeconds_, 0L) };
    inline IncidentResponsePlanForSNSView& setAutoRecoverSeconds(int64_t autoRecoverSeconds) { DARABONBA_PTR_SET_VALUE(autoRecoverSeconds_, autoRecoverSeconds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline IncidentResponsePlanForSNSView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline IncidentResponsePlanForSNSView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // escalationId Field Functions 
    bool hasEscalationId() const { return this->escalationId_ != nullptr;};
    void deleteEscalationId() { this->escalationId_ = nullptr;};
    inline const vector<string> & getEscalationId() const { DARABONBA_PTR_GET_CONST(escalationId_, vector<string>) };
    inline vector<string> getEscalationId() { DARABONBA_PTR_GET(escalationId_, vector<string>) };
    inline IncidentResponsePlanForSNSView& setEscalationId(const vector<string> & escalationId) { DARABONBA_PTR_SET_VALUE(escalationId_, escalationId) };
    inline IncidentResponsePlanForSNSView& setEscalationId(vector<string> && escalationId) { DARABONBA_PTR_SET_RVALUE(escalationId_, escalationId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline IncidentResponsePlanForSNSView& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentResponsePlanForSNSView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const IncidentResponsePlanForSNSView::PushingSetting & getPushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, IncidentResponsePlanForSNSView::PushingSetting) };
    inline IncidentResponsePlanForSNSView::PushingSetting getPushingSetting() { DARABONBA_PTR_GET(pushingSetting_, IncidentResponsePlanForSNSView::PushingSetting) };
    inline IncidentResponsePlanForSNSView& setPushingSetting(const IncidentResponsePlanForSNSView::PushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline IncidentResponsePlanForSNSView& setPushingSetting(IncidentResponsePlanForSNSView::PushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // repeatNotifySetting Field Functions 
    bool hasRepeatNotifySetting() const { return this->repeatNotifySetting_ != nullptr;};
    void deleteRepeatNotifySetting() { this->repeatNotifySetting_ = nullptr;};
    inline const IncidentResponsePlanForSNSView::RepeatNotifySetting & getRepeatNotifySetting() const { DARABONBA_PTR_GET_CONST(repeatNotifySetting_, IncidentResponsePlanForSNSView::RepeatNotifySetting) };
    inline IncidentResponsePlanForSNSView::RepeatNotifySetting getRepeatNotifySetting() { DARABONBA_PTR_GET(repeatNotifySetting_, IncidentResponsePlanForSNSView::RepeatNotifySetting) };
    inline IncidentResponsePlanForSNSView& setRepeatNotifySetting(const IncidentResponsePlanForSNSView::RepeatNotifySetting & repeatNotifySetting) { DARABONBA_PTR_SET_VALUE(repeatNotifySetting_, repeatNotifySetting) };
    inline IncidentResponsePlanForSNSView& setRepeatNotifySetting(IncidentResponsePlanForSNSView::RepeatNotifySetting && repeatNotifySetting) { DARABONBA_PTR_SET_RVALUE(repeatNotifySetting_, repeatNotifySetting) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IncidentResponsePlanForSNSView& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // syncFromType Field Functions 
    bool hasSyncFromType() const { return this->syncFromType_ != nullptr;};
    void deleteSyncFromType() { this->syncFromType_ = nullptr;};
    inline string getSyncFromType() const { DARABONBA_PTR_GET_DEFAULT(syncFromType_, "") };
    inline IncidentResponsePlanForSNSView& setSyncFromType(string syncFromType) { DARABONBA_PTR_SET_VALUE(syncFromType_, syncFromType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IncidentResponsePlanForSNSView& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline IncidentResponsePlanForSNSView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline IncidentResponsePlanForSNSView& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The duration, in seconds, after which an incident without new alerts is automatically resolved.
    shared_ptr<int64_t> autoRecoverSeconds_ {};
    // The time when the incident response plan was created, in UTC and in the `YYYY-MM-DDThh:mm:ssZ` format.
    shared_ptr<string> createTime_ {};
    // Indicates if the incident response plan is enabled. Valid values: `true` and `false`.
    shared_ptr<bool> enable_ {};
    // The IDs of the escalation policies.
    shared_ptr<vector<string>> escalationId_ {};
    // The mode of the incident response plan. Valid values: `AUTO` and `MANUAL`.
    shared_ptr<string> mode_ {};
    // The name of the incident response plan.
    shared_ptr<string> name_ {};
    // The settings for sending notifications.
    shared_ptr<IncidentResponsePlanForSNSView::PushingSetting> pushingSetting_ {};
    // The settings for repeated notifications.
    shared_ptr<IncidentResponsePlanForSNSView::RepeatNotifySetting> repeatNotifySetting_ {};
    // The source of the incident.
    shared_ptr<string> source_ {};
    // The synchronization source type.
    shared_ptr<string> syncFromType_ {};
    // The type of the incident response plan.
    shared_ptr<string> type_ {};
    // The time when the incident response plan was last updated, in UTC and in the `YYYY-MM-DDThh:mm:ssZ` format.
    shared_ptr<string> updateTime_ {};
    // The unique ID of the incident response plan.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
