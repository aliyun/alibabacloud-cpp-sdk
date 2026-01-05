// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
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
  class GetWorkflowInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstance, workflowInstance_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstance, workflowInstance_);
    };
    GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody(GetWorkflowInstanceResponseBody &&) = default ;
    GetWorkflowInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody& operator=(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody& operator=(GetWorkflowInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkflowInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkflowInstance& obj) { 
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
      friend void from_json(const Darabonba::Json& j, WorkflowInstance& obj) { 
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
      WorkflowInstance() = default ;
      WorkflowInstance(const WorkflowInstance &) = default ;
      WorkflowInstance(WorkflowInstance &&) = default ;
      WorkflowInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkflowInstance() = default ;
      WorkflowInstance& operator=(const WorkflowInstance &) = default ;
      WorkflowInstance& operator=(WorkflowInstance &&) = default ;
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
      inline WorkflowInstance& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline WorkflowInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline WorkflowInstance& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline WorkflowInstance& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // finishedTime Field Functions 
      bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
      void deleteFinishedTime() { this->finishedTime_ = nullptr;};
      inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
      inline WorkflowInstance& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline WorkflowInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline WorkflowInstance& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline WorkflowInstance& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WorkflowInstance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline WorkflowInstance& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline WorkflowInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // startedTime Field Functions 
      bool hasStartedTime() const { return this->startedTime_ != nullptr;};
      void deleteStartedTime() { this->startedTime_ = nullptr;};
      inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
      inline WorkflowInstance& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline WorkflowInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<WorkflowInstance::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<WorkflowInstance::Tags>) };
      inline vector<WorkflowInstance::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<WorkflowInstance::Tags>) };
      inline WorkflowInstance& setTags(const vector<WorkflowInstance::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline WorkflowInstance& setTags(vector<WorkflowInstance::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline WorkflowInstance& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unifiedWorkflowInstanceId Field Functions 
      bool hasUnifiedWorkflowInstanceId() const { return this->unifiedWorkflowInstanceId_ != nullptr;};
      void deleteUnifiedWorkflowInstanceId() { this->unifiedWorkflowInstanceId_ = nullptr;};
      inline int64_t getUnifiedWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unifiedWorkflowInstanceId_, 0L) };
      inline WorkflowInstance& setUnifiedWorkflowInstanceId(int64_t unifiedWorkflowInstanceId) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceId_, unifiedWorkflowInstanceId) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
      inline WorkflowInstance& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      // workflowParameters Field Functions 
      bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
      void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
      inline string getWorkflowParameters() const { DARABONBA_PTR_GET_DEFAULT(workflowParameters_, "") };
      inline WorkflowInstance& setWorkflowParameters(string workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };


      // workflowTaskInstanceId Field Functions 
      bool hasWorkflowTaskInstanceId() const { return this->workflowTaskInstanceId_ != nullptr;};
      void deleteWorkflowTaskInstanceId() { this->workflowTaskInstanceId_ = nullptr;};
      inline int64_t getWorkflowTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowTaskInstanceId_, 0L) };
      inline WorkflowInstance& setWorkflowTaskInstanceId(int64_t workflowTaskInstanceId) { DARABONBA_PTR_SET_VALUE(workflowTaskInstanceId_, workflowTaskInstanceId) };


    protected:
      // The data timestamp.
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
      // The ID of the workflow instance.
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
      shared_ptr<vector<WorkflowInstance::Tags>> tags_ {};
      // The type of the workflow instance. Valid values:
      // 
      // *   Normal: Scheduled execution
      // *   Manual: Manually triggered node
      // *   SmokeTest: Testing
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

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->workflowInstance_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowInstance Field Functions 
    bool hasWorkflowInstance() const { return this->workflowInstance_ != nullptr;};
    void deleteWorkflowInstance() { this->workflowInstance_ = nullptr;};
    inline const GetWorkflowInstanceResponseBody::WorkflowInstance & getWorkflowInstance() const { DARABONBA_PTR_GET_CONST(workflowInstance_, GetWorkflowInstanceResponseBody::WorkflowInstance) };
    inline GetWorkflowInstanceResponseBody::WorkflowInstance getWorkflowInstance() { DARABONBA_PTR_GET(workflowInstance_, GetWorkflowInstanceResponseBody::WorkflowInstance) };
    inline GetWorkflowInstanceResponseBody& setWorkflowInstance(const GetWorkflowInstanceResponseBody::WorkflowInstance & workflowInstance) { DARABONBA_PTR_SET_VALUE(workflowInstance_, workflowInstance) };
    inline GetWorkflowInstanceResponseBody& setWorkflowInstance(GetWorkflowInstanceResponseBody::WorkflowInstance && workflowInstance) { DARABONBA_PTR_SET_RVALUE(workflowInstance_, workflowInstance) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the workflow instance.
    shared_ptr<GetWorkflowInstanceResponseBody::WorkflowInstance> workflowInstance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
