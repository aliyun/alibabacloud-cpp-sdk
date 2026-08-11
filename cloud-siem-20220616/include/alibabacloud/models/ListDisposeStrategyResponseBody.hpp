// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODY_HPP_
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
  class ListDisposeStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisposeStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisposeStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDisposeStrategyResponseBody() = default ;
    ListDisposeStrategyResponseBody(const ListDisposeStrategyResponseBody &) = default ;
    ListDisposeStrategyResponseBody(ListDisposeStrategyResponseBody &&) = default ;
    ListDisposeStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisposeStrategyResponseBody() = default ;
    ListDisposeStrategyResponseBody& operator=(const ListDisposeStrategyResponseBody &) = default ;
    ListDisposeStrategyResponseBody& operator=(ListDisposeStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Groups, groups_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Groups, groups_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(AlertName, alertName_);
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
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
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
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertName_ == nullptr
        && this->alertUuid_ == nullptr && this->aliuid_ == nullptr && this->effectiveStatus_ == nullptr && this->entity_ == nullptr && this->entityId_ == nullptr
        && this->entityType_ == nullptr && this->errorMessage_ == nullptr && this->finishTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->incidentName_ == nullptr && this->incidentUuid_ == nullptr && this->playbookName_ == nullptr && this->playbookType_ == nullptr
        && this->playbookUuid_ == nullptr && this->scope_ == nullptr && this->sophonTaskId_ == nullptr && this->status_ == nullptr && this->subAliuid_ == nullptr
        && this->taskParam_ == nullptr && this->taskUrl_ == nullptr; };
        // alertName Field Functions 
        bool hasAlertName() const { return this->alertName_ != nullptr;};
        void deleteAlertName() { this->alertName_ = nullptr;};
        inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
        inline ResponseData& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


        // alertUuid Field Functions 
        bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
        void deleteAlertUuid() { this->alertUuid_ = nullptr;};
        inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
        inline ResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


        // aliuid Field Functions 
        bool hasAliuid() const { return this->aliuid_ != nullptr;};
        void deleteAliuid() { this->aliuid_ = nullptr;};
        inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
        inline ResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


        // effectiveStatus Field Functions 
        bool hasEffectiveStatus() const { return this->effectiveStatus_ != nullptr;};
        void deleteEffectiveStatus() { this->effectiveStatus_ = nullptr;};
        inline int32_t getEffectiveStatus() const { DARABONBA_PTR_GET_DEFAULT(effectiveStatus_, 0) };
        inline ResponseData& setEffectiveStatus(int32_t effectiveStatus) { DARABONBA_PTR_SET_VALUE(effectiveStatus_, effectiveStatus) };


        // entity Field Functions 
        bool hasEntity() const { return this->entity_ != nullptr;};
        void deleteEntity() { this->entity_ = nullptr;};
        inline const vector<Darabonba::Json> & getEntity() const { DARABONBA_PTR_GET_CONST(entity_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getEntity() { DARABONBA_PTR_GET(entity_, vector<Darabonba::Json>) };
        inline ResponseData& setEntity(const vector<Darabonba::Json> & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
        inline ResponseData& setEntity(vector<Darabonba::Json> && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
        inline ResponseData& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline ResponseData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ResponseData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline ResponseData& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // incidentName Field Functions 
        bool hasIncidentName() const { return this->incidentName_ != nullptr;};
        void deleteIncidentName() { this->incidentName_ = nullptr;};
        inline string getIncidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
        inline ResponseData& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


        // incidentUuid Field Functions 
        bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
        void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
        inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
        inline ResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


        // playbookName Field Functions 
        bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
        void deletePlaybookName() { this->playbookName_ = nullptr;};
        inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
        inline ResponseData& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


        // playbookType Field Functions 
        bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
        void deletePlaybookType() { this->playbookType_ = nullptr;};
        inline string getPlaybookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
        inline ResponseData& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


        // playbookUuid Field Functions 
        bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
        void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
        inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
        inline ResponseData& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline const vector<Darabonba::Json> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getScope() { DARABONBA_PTR_GET(scope_, vector<Darabonba::Json>) };
        inline ResponseData& setScope(const vector<Darabonba::Json> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
        inline ResponseData& setScope(vector<Darabonba::Json> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


        // sophonTaskId Field Functions 
        bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
        void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
        inline string getSophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
        inline ResponseData& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subAliuid Field Functions 
        bool hasSubAliuid() const { return this->subAliuid_ != nullptr;};
        void deleteSubAliuid() { this->subAliuid_ = nullptr;};
        inline int64_t getSubAliuid() const { DARABONBA_PTR_GET_DEFAULT(subAliuid_, 0L) };
        inline ResponseData& setSubAliuid(int64_t subAliuid) { DARABONBA_PTR_SET_VALUE(subAliuid_, subAliuid) };


        // taskParam Field Functions 
        bool hasTaskParam() const { return this->taskParam_ != nullptr;};
        void deleteTaskParam() { this->taskParam_ = nullptr;};
        inline string getTaskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
        inline ResponseData& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


        // taskUrl Field Functions 
        bool hasTaskUrl() const { return this->taskUrl_ != nullptr;};
        void deleteTaskUrl() { this->taskUrl_ = nullptr;};
        inline string getTaskUrl() const { DARABONBA_PTR_GET_DEFAULT(taskUrl_, "") };
        inline ResponseData& setTaskUrl(string taskUrl) { DARABONBA_PTR_SET_VALUE(taskUrl_, taskUrl) };


      protected:
        shared_ptr<string> alertName_ {};
        // The alert UUID.
        shared_ptr<string> alertUuid_ {};
        // The SIEM primary account ID associated with the policy.
        shared_ptr<int64_t> aliuid_ {};
        // The policy status. Valid values:
        shared_ptr<int32_t> effectiveStatus_ {};
        // The entity details in JSON array format.
        shared_ptr<vector<Darabonba::Json>> entity_ {};
        // The entity ID.
        shared_ptr<int64_t> entityId_ {};
        // The entity type. Valid values:
        shared_ptr<string> entityType_ {};
        // The failure summary of the task.
        shared_ptr<string> errorMessage_ {};
        // The end time of the task.
        shared_ptr<string> finishTime_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The policy ID.
        shared_ptr<int64_t> id_ {};
        // The incident name.
        shared_ptr<string> incidentName_ {};
        // The globally unique UUID of the incident.
        shared_ptr<string> incidentUuid_ {};
        // The unique identifier name of the playbook.
        shared_ptr<string> playbookName_ {};
        // The playbook type. Valid values:
        // - system: manual handling
        // - custom: event-triggered playbook
        // - custom_alert: alert-triggered playbook
        // - soar-manual: manually run playbook
        // - soar-mdr: MDR-run playbook
        shared_ptr<string> playbookType_ {};
        // The playbook UUID.
        shared_ptr<string> playbookUuid_ {};
        // The disposition scope.
        shared_ptr<vector<Darabonba::Json>> scope_ {};
        // The SOAR disposal policy ID.
        shared_ptr<string> sophonTaskId_ {};
        // The playbook invocation status. Valid values:
        shared_ptr<int32_t> status_ {};
        // The Alibaba Cloud account ID that configured the policy.
        shared_ptr<int64_t> subAliuid_ {};
        // The playbook trigger parameters in JSON format.
        shared_ptr<string> taskParam_ {};
        // The playbook URL.
        shared_ptr<string> taskUrl_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The current page number of the list.
        shared_ptr<int32_t> currentPage_ {};
        // The number of records returned per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of records.
        shared_ptr<int64_t> totalCount_ {};
      };

      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_TO_JSON(FirstOccurrenceTime, firstOccurrenceTime_);
          DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
          DARABONBA_PTR_TO_JSON(GroupKey, groupKey_);
          DARABONBA_PTR_TO_JSON(GroupMeta, groupMeta_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupTitle, groupTitle_);
          DARABONBA_PTR_TO_JSON(LastOccurrenceTime, lastOccurrenceTime_);
          DARABONBA_PTR_TO_JSON(LatestModifiedTime, latestModifiedTime_);
          DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
          DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_FROM_JSON(FirstOccurrenceTime, firstOccurrenceTime_);
          DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
          DARABONBA_PTR_FROM_JSON(GroupKey, groupKey_);
          DARABONBA_PTR_FROM_JSON(GroupMeta, groupMeta_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupTitle, groupTitle_);
          DARABONBA_PTR_FROM_JSON(LastOccurrenceTime, lastOccurrenceTime_);
          DARABONBA_PTR_FROM_JSON(LatestModifiedTime, latestModifiedTime_);
          DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
          DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        Groups() = default ;
        Groups(const Groups &) = default ;
        Groups(Groups &&) = default ;
        Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Groups() = default ;
        Groups& operator=(const Groups &) = default ;
        Groups& operator=(Groups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class GroupMeta : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GroupMeta& obj) { 
            DARABONBA_ANY_TO_JSON(GroupInfo, groupInfo_);
          };
          friend void from_json(const Darabonba::Json& j, GroupMeta& obj) { 
            DARABONBA_ANY_FROM_JSON(GroupInfo, groupInfo_);
          };
          GroupMeta() = default ;
          GroupMeta(const GroupMeta &) = default ;
          GroupMeta(GroupMeta &&) = default ;
          GroupMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GroupMeta() = default ;
          GroupMeta& operator=(const GroupMeta &) = default ;
          GroupMeta& operator=(GroupMeta &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->groupInfo_ == nullptr; };
          // groupInfo Field Functions 
          bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
          void deleteGroupInfo() { this->groupInfo_ = nullptr;};
          inline           const Darabonba::Json & getGroupInfo() const { DARABONBA_GET(groupInfo_) };
          Darabonba::Json & getGroupInfo() { DARABONBA_GET(groupInfo_) };
          inline GroupMeta& setGroupInfo(const Darabonba::Json & groupInfo) { DARABONBA_SET_VALUE(groupInfo_, groupInfo) };
          inline GroupMeta& setGroupInfo(Darabonba::Json && groupInfo) { DARABONBA_SET_RVALUE(groupInfo_, groupInfo) };


        protected:
          Darabonba::Json groupInfo_ {};
        };

        virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->firstOccurrenceTime_ == nullptr && this->groupBy_ == nullptr && this->groupKey_ == nullptr && this->groupMeta_ == nullptr && this->groupName_ == nullptr
        && this->groupTitle_ == nullptr && this->lastOccurrenceTime_ == nullptr && this->latestModifiedTime_ == nullptr && this->runningCount_ == nullptr && this->successCount_ == nullptr
        && this->totalCount_ == nullptr; };
        // failedCount Field Functions 
        bool hasFailedCount() const { return this->failedCount_ != nullptr;};
        void deleteFailedCount() { this->failedCount_ = nullptr;};
        inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
        inline Groups& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


        // firstOccurrenceTime Field Functions 
        bool hasFirstOccurrenceTime() const { return this->firstOccurrenceTime_ != nullptr;};
        void deleteFirstOccurrenceTime() { this->firstOccurrenceTime_ = nullptr;};
        inline int64_t getFirstOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(firstOccurrenceTime_, 0L) };
        inline Groups& setFirstOccurrenceTime(int64_t firstOccurrenceTime) { DARABONBA_PTR_SET_VALUE(firstOccurrenceTime_, firstOccurrenceTime) };


        // groupBy Field Functions 
        bool hasGroupBy() const { return this->groupBy_ != nullptr;};
        void deleteGroupBy() { this->groupBy_ = nullptr;};
        inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
        inline Groups& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


        // groupKey Field Functions 
        bool hasGroupKey() const { return this->groupKey_ != nullptr;};
        void deleteGroupKey() { this->groupKey_ = nullptr;};
        inline string getGroupKey() const { DARABONBA_PTR_GET_DEFAULT(groupKey_, "") };
        inline Groups& setGroupKey(string groupKey) { DARABONBA_PTR_SET_VALUE(groupKey_, groupKey) };


        // groupMeta Field Functions 
        bool hasGroupMeta() const { return this->groupMeta_ != nullptr;};
        void deleteGroupMeta() { this->groupMeta_ = nullptr;};
        inline const Groups::GroupMeta & getGroupMeta() const { DARABONBA_PTR_GET_CONST(groupMeta_, Groups::GroupMeta) };
        inline Groups::GroupMeta getGroupMeta() { DARABONBA_PTR_GET(groupMeta_, Groups::GroupMeta) };
        inline Groups& setGroupMeta(const Groups::GroupMeta & groupMeta) { DARABONBA_PTR_SET_VALUE(groupMeta_, groupMeta) };
        inline Groups& setGroupMeta(Groups::GroupMeta && groupMeta) { DARABONBA_PTR_SET_RVALUE(groupMeta_, groupMeta) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupTitle Field Functions 
        bool hasGroupTitle() const { return this->groupTitle_ != nullptr;};
        void deleteGroupTitle() { this->groupTitle_ = nullptr;};
        inline string getGroupTitle() const { DARABONBA_PTR_GET_DEFAULT(groupTitle_, "") };
        inline Groups& setGroupTitle(string groupTitle) { DARABONBA_PTR_SET_VALUE(groupTitle_, groupTitle) };


        // lastOccurrenceTime Field Functions 
        bool hasLastOccurrenceTime() const { return this->lastOccurrenceTime_ != nullptr;};
        void deleteLastOccurrenceTime() { this->lastOccurrenceTime_ = nullptr;};
        inline int64_t getLastOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(lastOccurrenceTime_, 0L) };
        inline Groups& setLastOccurrenceTime(int64_t lastOccurrenceTime) { DARABONBA_PTR_SET_VALUE(lastOccurrenceTime_, lastOccurrenceTime) };


        // latestModifiedTime Field Functions 
        bool hasLatestModifiedTime() const { return this->latestModifiedTime_ != nullptr;};
        void deleteLatestModifiedTime() { this->latestModifiedTime_ = nullptr;};
        inline int64_t getLatestModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(latestModifiedTime_, 0L) };
        inline Groups& setLatestModifiedTime(int64_t latestModifiedTime) { DARABONBA_PTR_SET_VALUE(latestModifiedTime_, latestModifiedTime) };


        // runningCount Field Functions 
        bool hasRunningCount() const { return this->runningCount_ != nullptr;};
        void deleteRunningCount() { this->runningCount_ = nullptr;};
        inline int64_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0L) };
        inline Groups& setRunningCount(int64_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


        // successCount Field Functions 
        bool hasSuccessCount() const { return this->successCount_ != nullptr;};
        void deleteSuccessCount() { this->successCount_ = nullptr;};
        inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
        inline Groups& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline Groups& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<int64_t> failedCount_ {};
        shared_ptr<int64_t> firstOccurrenceTime_ {};
        shared_ptr<string> groupBy_ {};
        shared_ptr<string> groupKey_ {};
        shared_ptr<Groups::GroupMeta> groupMeta_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> groupTitle_ {};
        shared_ptr<int64_t> lastOccurrenceTime_ {};
        shared_ptr<int64_t> latestModifiedTime_ {};
        shared_ptr<int64_t> runningCount_ {};
        shared_ptr<int64_t> successCount_ {};
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->groups_ == nullptr
        && this->pageInfo_ == nullptr && this->responseData_ == nullptr; };
      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<Data::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Data::Groups>) };
      inline vector<Data::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<Data::Groups>) };
      inline Data& setGroups(const vector<Data::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline Data& setGroups(vector<Data::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      shared_ptr<vector<Data::Groups>> groups_ {};
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListDisposeStrategyResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDisposeStrategyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDisposeStrategyResponseBody::Data) };
    inline ListDisposeStrategyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDisposeStrategyResponseBody::Data) };
    inline ListDisposeStrategyResponseBody& setData(const ListDisposeStrategyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDisposeStrategyResponseBody& setData(ListDisposeStrategyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDisposeStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDisposeStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDisposeStrategyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request status code.
    shared_ptr<int32_t> code_ {};
    // The request return value.
    shared_ptr<ListDisposeStrategyResponseBody::Data> data_ {};
    // The request return message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
