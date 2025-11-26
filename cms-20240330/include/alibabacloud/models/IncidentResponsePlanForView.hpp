// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTRESPONSEPLANFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTRESPONSEPLANFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushingSetting.hpp>
#include <alibabacloud/models/RepeatNotifySetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentResponsePlanForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentResponsePlanForView& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
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
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentResponsePlanForView& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
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
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    IncidentResponsePlanForView() = default ;
    IncidentResponsePlanForView(const IncidentResponsePlanForView &) = default ;
    IncidentResponsePlanForView(IncidentResponsePlanForView &&) = default ;
    IncidentResponsePlanForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentResponsePlanForView() = default ;
    IncidentResponsePlanForView& operator=(const IncidentResponsePlanForView &) = default ;
    IncidentResponsePlanForView& operator=(IncidentResponsePlanForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRecoverSeconds_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->escalationId_ == nullptr && return this->mode_ == nullptr
        && return this->name_ == nullptr && return this->pushingSetting_ == nullptr && return this->repeatNotifySetting_ == nullptr && return this->source_ == nullptr && return this->syncFromType_ == nullptr
        && return this->type_ == nullptr && return this->updateTime_ == nullptr && return this->uuid_ == nullptr && return this->workspace_ == nullptr; };
    // autoRecoverSeconds Field Functions 
    bool hasAutoRecoverSeconds() const { return this->autoRecoverSeconds_ != nullptr;};
    void deleteAutoRecoverSeconds() { this->autoRecoverSeconds_ = nullptr;};
    inline int64_t autoRecoverSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverSeconds_, 0L) };
    inline IncidentResponsePlanForView& setAutoRecoverSeconds(int64_t autoRecoverSeconds) { DARABONBA_PTR_SET_VALUE(autoRecoverSeconds_, autoRecoverSeconds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline IncidentResponsePlanForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentResponsePlanForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline IncidentResponsePlanForView& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // escalationId Field Functions 
    bool hasEscalationId() const { return this->escalationId_ != nullptr;};
    void deleteEscalationId() { this->escalationId_ = nullptr;};
    inline const vector<string> & escalationId() const { DARABONBA_PTR_GET_CONST(escalationId_, vector<string>) };
    inline vector<string> escalationId() { DARABONBA_PTR_GET(escalationId_, vector<string>) };
    inline IncidentResponsePlanForView& setEscalationId(const vector<string> & escalationId) { DARABONBA_PTR_SET_VALUE(escalationId_, escalationId) };
    inline IncidentResponsePlanForView& setEscalationId(vector<string> && escalationId) { DARABONBA_PTR_SET_RVALUE(escalationId_, escalationId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline IncidentResponsePlanForView& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentResponsePlanForView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const PushingSetting & pushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, PushingSetting) };
    inline PushingSetting pushingSetting() { DARABONBA_PTR_GET(pushingSetting_, PushingSetting) };
    inline IncidentResponsePlanForView& setPushingSetting(const PushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline IncidentResponsePlanForView& setPushingSetting(PushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // repeatNotifySetting Field Functions 
    bool hasRepeatNotifySetting() const { return this->repeatNotifySetting_ != nullptr;};
    void deleteRepeatNotifySetting() { this->repeatNotifySetting_ = nullptr;};
    inline const RepeatNotifySetting & repeatNotifySetting() const { DARABONBA_PTR_GET_CONST(repeatNotifySetting_, RepeatNotifySetting) };
    inline RepeatNotifySetting repeatNotifySetting() { DARABONBA_PTR_GET(repeatNotifySetting_, RepeatNotifySetting) };
    inline IncidentResponsePlanForView& setRepeatNotifySetting(const RepeatNotifySetting & repeatNotifySetting) { DARABONBA_PTR_SET_VALUE(repeatNotifySetting_, repeatNotifySetting) };
    inline IncidentResponsePlanForView& setRepeatNotifySetting(RepeatNotifySetting && repeatNotifySetting) { DARABONBA_PTR_SET_RVALUE(repeatNotifySetting_, repeatNotifySetting) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IncidentResponsePlanForView& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // syncFromType Field Functions 
    bool hasSyncFromType() const { return this->syncFromType_ != nullptr;};
    void deleteSyncFromType() { this->syncFromType_ = nullptr;};
    inline string syncFromType() const { DARABONBA_PTR_GET_DEFAULT(syncFromType_, "") };
    inline IncidentResponsePlanForView& setSyncFromType(string syncFromType) { DARABONBA_PTR_SET_VALUE(syncFromType_, syncFromType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IncidentResponsePlanForView& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline IncidentResponsePlanForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline IncidentResponsePlanForView& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline IncidentResponsePlanForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<int64_t> autoRecoverSeconds_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<vector<string>> escalationId_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<PushingSetting> pushingSetting_ = nullptr;
    std::shared_ptr<RepeatNotifySetting> repeatNotifySetting_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> syncFromType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
