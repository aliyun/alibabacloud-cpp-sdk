// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListWorkflowInstancesResponseBody() = default ;
    ListWorkflowInstancesResponseBody(const ListWorkflowInstancesResponseBody &) = default ;
    ListWorkflowInstancesResponseBody(ListWorkflowInstancesResponseBody &&) = default ;
    ListWorkflowInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowInstancesResponseBody() = default ;
    ListWorkflowInstancesResponseBody& operator=(const ListWorkflowInstancesResponseBody &) = default ;
    ListWorkflowInstancesResponseBody& operator=(ListWorkflowInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(WorkflowInstances, workflowInstances_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(WorkflowInstances, workflowInstances_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkflowInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkflowInstances& obj) { 
          DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
          DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParameters_);
          DARABONBA_PTR_TO_JSON(WorkflowTaskInstanceId, workflowTaskInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, WorkflowInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
          DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
          DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParameters_);
          DARABONBA_PTR_FROM_JSON(WorkflowTaskInstanceId, workflowTaskInstanceId_);
        };
        WorkflowInstances() = default ;
        WorkflowInstances(const WorkflowInstances &) = default ;
        WorkflowInstances(WorkflowInstances &&) = default ;
        WorkflowInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkflowInstances() = default ;
        WorkflowInstances& operator=(const WorkflowInstances &) = default ;
        WorkflowInstances& operator=(WorkflowInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of a tag.
          shared_ptr<string> key_ {};
          // The value of a tag.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->envType_ == nullptr && this->finishedTime_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr
        && this->startedTime_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->unifiedWorkflowInstanceId_ == nullptr
        && this->workflowId_ == nullptr && this->workflowParameters_ == nullptr && this->workflowTaskInstanceId_ == nullptr; };
        // bizDate Field Functions 
        bool hasBizDate() const { return this->bizDate_ != nullptr;};
        void deleteBizDate() { this->bizDate_ = nullptr;};
        inline int64_t getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
        inline WorkflowInstances& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline WorkflowInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline WorkflowInstances& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline WorkflowInstances& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
        inline WorkflowInstances& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline WorkflowInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline WorkflowInstances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline WorkflowInstances& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline WorkflowInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline WorkflowInstances& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline WorkflowInstances& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // startedTime Field Functions 
        bool hasStartedTime() const { return this->startedTime_ != nullptr;};
        void deleteStartedTime() { this->startedTime_ = nullptr;};
        inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
        inline WorkflowInstances& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline WorkflowInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<WorkflowInstances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<WorkflowInstances::Tags>) };
        inline vector<WorkflowInstances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<WorkflowInstances::Tags>) };
        inline WorkflowInstances& setTags(const vector<WorkflowInstances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline WorkflowInstances& setTags(vector<WorkflowInstances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline WorkflowInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // unifiedWorkflowInstanceId Field Functions 
        bool hasUnifiedWorkflowInstanceId() const { return this->unifiedWorkflowInstanceId_ != nullptr;};
        void deleteUnifiedWorkflowInstanceId() { this->unifiedWorkflowInstanceId_ = nullptr;};
        inline int64_t getUnifiedWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unifiedWorkflowInstanceId_, 0L) };
        inline WorkflowInstances& setUnifiedWorkflowInstanceId(int64_t unifiedWorkflowInstanceId) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceId_, unifiedWorkflowInstanceId) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
        inline WorkflowInstances& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


        // workflowParameters Field Functions 
        bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
        void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
        inline string getWorkflowParameters() const { DARABONBA_PTR_GET_DEFAULT(workflowParameters_, "") };
        inline WorkflowInstances& setWorkflowParameters(string workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };


        // workflowTaskInstanceId Field Functions 
        bool hasWorkflowTaskInstanceId() const { return this->workflowTaskInstanceId_ != nullptr;};
        void deleteWorkflowTaskInstanceId() { this->workflowTaskInstanceId_ = nullptr;};
        inline int64_t getWorkflowTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowTaskInstanceId_, 0L) };
        inline WorkflowInstances& setWorkflowTaskInstanceId(int64_t workflowTaskInstanceId) { DARABONBA_PTR_SET_VALUE(workflowTaskInstanceId_, workflowTaskInstanceId) };


      protected:
        shared_ptr<int64_t> bizDate_ {};
        // The creation time.
        shared_ptr<int64_t> createTime_ {};
        // The account ID of the creator.
        shared_ptr<string> createUser_ {};
        // The environment of the workspace. Valid values:
        // 
        // *   Prod
        // *   Dev
        shared_ptr<string> envType_ {};
        // The time when the instance finished running.
        shared_ptr<int64_t> finishedTime_ {};
        // The workflow instance ID.
        shared_ptr<int64_t> id_ {};
        // The modification time.
        shared_ptr<int64_t> modifyTime_ {};
        // The account ID of the modifier.
        shared_ptr<string> modifyUser_ {};
        // The name of the workflow instance.
        shared_ptr<string> name_ {};
        // The account ID of the workflow owner.
        shared_ptr<string> owner_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The time when the instance started to run.
        shared_ptr<int64_t> startedTime_ {};
        // The status of the workflow instance. Valid values:
        // 
        // *   NotRun: The instance is not run.
        // *   Running: The instance is running.
        // *   WaitTime: The instance is waiting for the scheduling time to arrive.
        // *   CheckingCondition: Branch conditions are being checked for the instance.
        // *   WaitResource: The instance is waiting for resources.
        // *   Failure: The instance fails to be run.
        // *   Success: The instance is successfully run.
        // *   Checking: Data quality is being checked for the instance.
        shared_ptr<string> status_ {};
        // The task tag.
        shared_ptr<vector<WorkflowInstances::Tags>> tags_ {};
        // The type of the workflow instance. Valid values:
        // 
        // *   Normal: Scheduled execution
        // *   Manual: Manually triggered node
        // *   SmokeTest: Smoke test
        // *   SupplementData: Data backfill
        // *   ManualWorkflow: Manually triggered workflow
        // *   TriggerWorkflow: Triggered Workflow
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> unifiedWorkflowInstanceId_ {};
        // The ID of the workflow to which the instance belongs.
        shared_ptr<int64_t> workflowId_ {};
        // The workflow parameters.
        shared_ptr<string> workflowParameters_ {};
        // The task instance ID corresponding to the workflow instance.
        shared_ptr<int64_t> workflowTaskInstanceId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->workflowInstances_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // workflowInstances Field Functions 
      bool hasWorkflowInstances() const { return this->workflowInstances_ != nullptr;};
      void deleteWorkflowInstances() { this->workflowInstances_ = nullptr;};
      inline const vector<PagingInfo::WorkflowInstances> & getWorkflowInstances() const { DARABONBA_PTR_GET_CONST(workflowInstances_, vector<PagingInfo::WorkflowInstances>) };
      inline vector<PagingInfo::WorkflowInstances> getWorkflowInstances() { DARABONBA_PTR_GET(workflowInstances_, vector<PagingInfo::WorkflowInstances>) };
      inline PagingInfo& setWorkflowInstances(const vector<PagingInfo::WorkflowInstances> & workflowInstances) { DARABONBA_PTR_SET_VALUE(workflowInstances_, workflowInstances) };
      inline PagingInfo& setWorkflowInstances(vector<PagingInfo::WorkflowInstances> && workflowInstances) { DARABONBA_PTR_SET_RVALUE(workflowInstances_, workflowInstances) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
      // The workflow instances.
      shared_ptr<vector<PagingInfo::WorkflowInstances>> workflowInstances_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListWorkflowInstancesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListWorkflowInstancesResponseBody::PagingInfo) };
    inline ListWorkflowInstancesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListWorkflowInstancesResponseBody::PagingInfo) };
    inline ListWorkflowInstancesResponseBody& setPagingInfo(const ListWorkflowInstancesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListWorkflowInstancesResponseBody& setPagingInfo(ListWorkflowInstancesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkflowInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Pagination information.
    shared_ptr<ListWorkflowInstancesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
