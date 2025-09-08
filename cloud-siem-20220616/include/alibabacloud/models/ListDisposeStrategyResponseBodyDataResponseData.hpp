// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDisposeStrategyResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisposeStrategyResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(EffectiveStatus, effectiveStatus_);
      DARABONBA_PTR_TO_JSON(Entity, entity_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubAliuid, subAliuid_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskUrl, taskUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisposeStrategyResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(EffectiveStatus, effectiveStatus_);
      DARABONBA_PTR_FROM_JSON(Entity, entity_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubAliuid, subAliuid_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskUrl, taskUrl_);
    };
    ListDisposeStrategyResponseBodyDataResponseData() = default ;
    ListDisposeStrategyResponseBodyDataResponseData(const ListDisposeStrategyResponseBodyDataResponseData &) = default ;
    ListDisposeStrategyResponseBodyDataResponseData(ListDisposeStrategyResponseBodyDataResponseData &&) = default ;
    ListDisposeStrategyResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisposeStrategyResponseBodyDataResponseData() = default ;
    ListDisposeStrategyResponseBodyDataResponseData& operator=(const ListDisposeStrategyResponseBodyDataResponseData &) = default ;
    ListDisposeStrategyResponseBodyDataResponseData& operator=(ListDisposeStrategyResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertUuid_ != nullptr
        && this->aliuid_ != nullptr && this->effectiveStatus_ != nullptr && this->entity_ != nullptr && this->entityId_ != nullptr && this->entityType_ != nullptr
        && this->errorMessage_ != nullptr && this->finishTime_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->incidentName_ != nullptr && this->incidentUuid_ != nullptr && this->playbookName_ != nullptr && this->playbookType_ != nullptr && this->playbookUuid_ != nullptr
        && this->scope_ != nullptr && this->sophonTaskId_ != nullptr && this->status_ != nullptr && this->subAliuid_ != nullptr && this->taskParam_ != nullptr
        && this->taskUrl_ != nullptr; };
    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string alertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // effectiveStatus Field Functions 
    bool hasEffectiveStatus() const { return this->effectiveStatus_ != nullptr;};
    void deleteEffectiveStatus() { this->effectiveStatus_ = nullptr;};
    inline int32_t effectiveStatus() const { DARABONBA_PTR_GET_DEFAULT(effectiveStatus_, 0) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setEffectiveStatus(int32_t effectiveStatus) { DARABONBA_PTR_SET_VALUE(effectiveStatus_, effectiveStatus) };


    // entity Field Functions 
    bool hasEntity() const { return this->entity_ != nullptr;};
    void deleteEntity() { this->entity_ = nullptr;};
    inline const vector<Darabonba::Json> & entity() const { DARABONBA_PTR_GET_CONST(entity_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> entity() { DARABONBA_PTR_GET(entity_, vector<Darabonba::Json>) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setEntity(const vector<Darabonba::Json> & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setEntity(vector<Darabonba::Json> && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // incidentName Field Functions 
    bool hasIncidentName() const { return this->incidentName_ != nullptr;};
    void deleteIncidentName() { this->incidentName_ = nullptr;};
    inline string incidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string playbookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookType Field Functions 
    bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
    void deletePlaybookType() { this->playbookType_ = nullptr;};
    inline string playbookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<Darabonba::Json> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> scope() { DARABONBA_PTR_GET(scope_, vector<Darabonba::Json>) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setScope(const vector<Darabonba::Json> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setScope(vector<Darabonba::Json> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string sophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subAliuid Field Functions 
    bool hasSubAliuid() const { return this->subAliuid_ != nullptr;};
    void deleteSubAliuid() { this->subAliuid_ = nullptr;};
    inline int64_t subAliuid() const { DARABONBA_PTR_GET_DEFAULT(subAliuid_, 0L) };
    inline ListDisposeStrategyResponseBodyDataResponseData& setSubAliuid(int64_t subAliuid) { DARABONBA_PTR_SET_VALUE(subAliuid_, subAliuid) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string taskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskUrl Field Functions 
    bool hasTaskUrl() const { return this->taskUrl_ != nullptr;};
    void deleteTaskUrl() { this->taskUrl_ = nullptr;};
    inline string taskUrl() const { DARABONBA_PTR_GET_DEFAULT(taskUrl_, "") };
    inline ListDisposeStrategyResponseBodyDataResponseData& setTaskUrl(string taskUrl) { DARABONBA_PTR_SET_VALUE(taskUrl_, taskUrl) };


  protected:
    // The UUID of the alert.
    std::shared_ptr<string> alertUuid_ = nullptr;
    // The ID of the Alibaba Cloud account that is associated with the policy in SIEM.
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   0: invalid
    // *   1: valid
    std::shared_ptr<int32_t> effectiveStatus_ = nullptr;
    // The details of the entity. The value is a JSON array.
    std::shared_ptr<vector<Darabonba::Json>> entity_ = nullptr;
    // The ID of the entity.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // The type of the entity. Valid values:
    // 
    // *   ip
    // *   process
    // *   file
    std::shared_ptr<string> entityType_ = nullptr;
    // The summary information about the failed task.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The end time of the task.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> incidentName_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The name of the playbook, which is the unique identifier of the playbook.
    std::shared_ptr<string> playbookName_ = nullptr;
    // The type of the playbook. Valid values:
    // 
    // *   system: user-triggered playbook
    // *   custom: event-triggered playbook
    // *   custom_alert: alert-triggered playbook
    // *   soar-manual: user-run playbook
    // *   soar-mdr: MDR-run playbook
    std::shared_ptr<string> playbookType_ = nullptr;
    // The UUID of the playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The scope of the policy.
    std::shared_ptr<vector<Darabonba::Json>> scope_ = nullptr;
    // The ID of the SOAR handling policy.
    std::shared_ptr<string> sophonTaskId_ = nullptr;
    // The running status of the playbook. Valid values:
    // 
    // *   200: successful
    // *   10: deleted
    // *   5: failed
    // *   0: initial
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the Alibaba account that is used to configure the policy.
    std::shared_ptr<int64_t> subAliuid_ = nullptr;
    // The parameters that are used to trigger the playbook. The value is in the JSON format.
    std::shared_ptr<string> taskParam_ = nullptr;
    std::shared_ptr<string> taskUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
