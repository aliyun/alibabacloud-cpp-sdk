// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEBUILDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEBUILDTASKREQUEST_HPP_
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
  class UpdateKnowledgeBaseBuildTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseBuildTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseBuildTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    UpdateKnowledgeBaseBuildTaskRequest() = default ;
    UpdateKnowledgeBaseBuildTaskRequest(const UpdateKnowledgeBaseBuildTaskRequest &) = default ;
    UpdateKnowledgeBaseBuildTaskRequest(UpdateKnowledgeBaseBuildTaskRequest &&) = default ;
    UpdateKnowledgeBaseBuildTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseBuildTaskRequest() = default ;
    UpdateKnowledgeBaseBuildTaskRequest& operator=(const UpdateKnowledgeBaseBuildTaskRequest &) = default ;
    UpdateKnowledgeBaseBuildTaskRequest& operator=(UpdateKnowledgeBaseBuildTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Trigger : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
        DARABONBA_PTR_TO_JSON(Cron, cron_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
      };
      friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
        DARABONBA_PTR_FROM_JSON(Cron, cron_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
      };
      Trigger() = default ;
      Trigger(const Trigger &) = default ;
      Trigger(Trigger &&) = default ;
      Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Trigger() = default ;
      Trigger& operator=(const Trigger &) = default ;
      Trigger& operator=(Trigger &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cron_ == nullptr
        && this->enabled_ == nullptr && this->mode_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Trigger& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Trigger& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Trigger& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    protected:
      // The DataWorks scheduling cron expression. This parameter is provided only when Mode is set to PERIODIC.
      shared_ptr<string> cron_ {};
      // Specifies whether periodic automatic triggering is enabled. This parameter is provided only when Mode is set to PERIODIC. This parameter does not indicate the instance status.
      shared_ptr<bool> enabled_ {};
      // The trigger mode. Valid values: MANUAL and PERIODIC. Manual tasks do not create instances automatically.
      shared_ptr<string> mode_ {};
    };

    class RuntimeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      };
      RuntimeResource() = default ;
      RuntimeResource(const RuntimeResource &) = default ;
      RuntimeResource(RuntimeResource &&) = default ;
      RuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuntimeResource() = default ;
      RuntimeResource& operator=(const RuntimeResource &) = default ;
      RuntimeResource& operator=(RuntimeResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->resourceGroupId_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline RuntimeResource& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // The compute specifications of the Builder. Valid values: 4 to 16. If this parameter is omitted during creation, the valid value is 4. The read operation returns the valid value.
      shared_ptr<int32_t> cu_ {};
      // The DataWorks resource group ID used by the actual Builder node. The server validates that it is available in the workspace corresponding to the top-level ProjectId of the task.
      shared_ptr<string> resourceGroupId_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Entities, entities_);
        DARABONBA_PTR_TO_JSON(KnowledgeObjectIds, knowledgeObjectIds_);
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(SourceIds, sourceIds_);
        DARABONBA_PTR_TO_JSON(YamlUploadId, yamlUploadId_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Entities, entities_);
        DARABONBA_PTR_FROM_JSON(KnowledgeObjectIds, knowledgeObjectIds_);
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(SourceIds, sourceIds_);
        DARABONBA_PTR_FROM_JSON(YamlUploadId, yamlUploadId_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Entities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Entities& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        };
        friend void from_json(const Darabonba::Json& j, Entities& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        };
        Entities() = default ;
        Entities(const Entities &) = default ;
        Entities(Entities &&) = default ;
        Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Entities() = default ;
        Entities& operator=(const Entities &) = default ;
        Entities& operator=(Entities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Entities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline Entities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      protected:
        // The metadata entity ID returned by Data Map. The client must pass this value as is and must not concatenate database, schema, or table identifiers.
        shared_ptr<string> entityId_ {};
        // The entity level, such as DATABASE, SCHEMA, or TABLE. The server validates this value based on the Data Map identity. The presence of an enum value does not guarantee that all engines support it.
        shared_ptr<string> entityType_ {};
      };

      virtual bool empty() const override { return this->entities_ == nullptr
        && this->knowledgeObjectIds_ == nullptr && this->projectIds_ == nullptr && this->sourceIds_ == nullptr && this->yamlUploadId_ == nullptr; };
      // entities Field Functions 
      bool hasEntities() const { return this->entities_ != nullptr;};
      void deleteEntities() { this->entities_ = nullptr;};
      inline const vector<Input::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Input::Entities>) };
      inline vector<Input::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<Input::Entities>) };
      inline Input& setEntities(const vector<Input::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
      inline Input& setEntities(vector<Input::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


      // knowledgeObjectIds Field Functions 
      bool hasKnowledgeObjectIds() const { return this->knowledgeObjectIds_ != nullptr;};
      void deleteKnowledgeObjectIds() { this->knowledgeObjectIds_ = nullptr;};
      inline const vector<string> & getKnowledgeObjectIds() const { DARABONBA_PTR_GET_CONST(knowledgeObjectIds_, vector<string>) };
      inline vector<string> getKnowledgeObjectIds() { DARABONBA_PTR_GET(knowledgeObjectIds_, vector<string>) };
      inline Input& setKnowledgeObjectIds(const vector<string> & knowledgeObjectIds) { DARABONBA_PTR_SET_VALUE(knowledgeObjectIds_, knowledgeObjectIds) };
      inline Input& setKnowledgeObjectIds(vector<string> && knowledgeObjectIds) { DARABONBA_PTR_SET_RVALUE(knowledgeObjectIds_, knowledgeObjectIds) };


      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
      inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
      inline Input& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline Input& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // sourceIds Field Functions 
      bool hasSourceIds() const { return this->sourceIds_ != nullptr;};
      void deleteSourceIds() { this->sourceIds_ = nullptr;};
      inline const vector<string> & getSourceIds() const { DARABONBA_PTR_GET_CONST(sourceIds_, vector<string>) };
      inline vector<string> getSourceIds() { DARABONBA_PTR_GET(sourceIds_, vector<string>) };
      inline Input& setSourceIds(const vector<string> & sourceIds) { DARABONBA_PTR_SET_VALUE(sourceIds_, sourceIds) };
      inline Input& setSourceIds(vector<string> && sourceIds) { DARABONBA_PTR_SET_RVALUE(sourceIds_, sourceIds) };


      // yamlUploadId Field Functions 
      bool hasYamlUploadId() const { return this->yamlUploadId_ != nullptr;};
      void deleteYamlUploadId() { this->yamlUploadId_ = nullptr;};
      inline string getYamlUploadId() const { DARABONBA_PTR_GET_DEFAULT(yamlUploadId_, "") };
      inline Input& setYamlUploadId(string yamlUploadId) { DARABONBA_PTR_SET_VALUE(yamlUploadId_, yamlUploadId) };


    protected:
      // The Data Map entities such as databases, schemas, and tables selected for data asset-scoped builds. The list cannot be empty and must contain unique values.
      shared_ptr<vector<Input::Entities>> entities_ {};
      // Required when building from document objects in this knowledge base. The list cannot be empty and must contain unique values. Each item is a KnowledgeObjectId with Type=DOCUMENT in this knowledge base. Do not mix this with SourceIds for external connector synchronization scopes.
      shared_ptr<vector<string>> knowledgeObjectIds_ {};
      // The DataWorks workspace IDs selected for workspace-scoped builds. The list cannot be empty and must contain unique values.
      shared_ptr<vector<int64_t>> projectIds_ {};
      // The IDs of registered sources in this knowledge base. The list must contain unique values. Whether this parameter is required and the allowed source types depend on the task input scenario. See the following table.
      shared_ptr<vector<string>> sourceIds_ {};
      // The YAML upload session ID in this knowledge base used for SEMANTIC_MODEL import tasks. This ID is bound when the task is created and cannot be mixed with other input scopes.
      shared_ptr<string> yamlUploadId_ {};
    };

    virtual bool empty() const override { return this->contentLocale_ == nullptr
        && this->description_ == nullptr && this->input_ == nullptr && this->knowledgeBaseId_ == nullptr && this->llmModel_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->runtimeResource_ == nullptr && this->taskId_ == nullptr && this->trigger_ == nullptr; };
    // contentLocale Field Functions 
    bool hasContentLocale() const { return this->contentLocale_ != nullptr;};
    void deleteContentLocale() { this->contentLocale_ = nullptr;};
    inline string getContentLocale() const { DARABONBA_PTR_GET_DEFAULT(contentLocale_, "") };
    inline UpdateKnowledgeBaseBuildTaskRequest& setContentLocale(string contentLocale) { DARABONBA_PTR_SET_VALUE(contentLocale_, contentLocale) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeBaseBuildTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const UpdateKnowledgeBaseBuildTaskRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, UpdateKnowledgeBaseBuildTaskRequest::Input) };
    inline UpdateKnowledgeBaseBuildTaskRequest::Input getInput() { DARABONBA_PTR_GET(input_, UpdateKnowledgeBaseBuildTaskRequest::Input) };
    inline UpdateKnowledgeBaseBuildTaskRequest& setInput(const UpdateKnowledgeBaseBuildTaskRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline UpdateKnowledgeBaseBuildTaskRequest& setInput(UpdateKnowledgeBaseBuildTaskRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeBaseBuildTaskRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // llmModel Field Functions 
    bool hasLlmModel() const { return this->llmModel_ != nullptr;};
    void deleteLlmModel() { this->llmModel_ = nullptr;};
    inline string getLlmModel() const { DARABONBA_PTR_GET_DEFAULT(llmModel_, "") };
    inline UpdateKnowledgeBaseBuildTaskRequest& setLlmModel(string llmModel) { DARABONBA_PTR_SET_VALUE(llmModel_, llmModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeBaseBuildTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateKnowledgeBaseBuildTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const UpdateKnowledgeBaseBuildTaskRequest::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, UpdateKnowledgeBaseBuildTaskRequest::RuntimeResource) };
    inline UpdateKnowledgeBaseBuildTaskRequest::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, UpdateKnowledgeBaseBuildTaskRequest::RuntimeResource) };
    inline UpdateKnowledgeBaseBuildTaskRequest& setRuntimeResource(const UpdateKnowledgeBaseBuildTaskRequest::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline UpdateKnowledgeBaseBuildTaskRequest& setRuntimeResource(UpdateKnowledgeBaseBuildTaskRequest::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateKnowledgeBaseBuildTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const UpdateKnowledgeBaseBuildTaskRequest::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, UpdateKnowledgeBaseBuildTaskRequest::Trigger) };
    inline UpdateKnowledgeBaseBuildTaskRequest::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, UpdateKnowledgeBaseBuildTaskRequest::Trigger) };
    inline UpdateKnowledgeBaseBuildTaskRequest& setTrigger(const UpdateKnowledgeBaseBuildTaskRequest::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateKnowledgeBaseBuildTaskRequest& setTrigger(UpdateKnowledgeBaseBuildTaskRequest::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The content language.
    shared_ptr<string> contentLocale_ {};
    // The new description.
    shared_ptr<string> description_ {};
    // The input configuration that completely replaces the original input.
    shared_ptr<UpdateKnowledgeBaseBuildTaskRequest::Input> input_ {};
    // The associated knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The specific model ID or AUTO.
    shared_ptr<string> llmModel_ {};
    // The new task name.
    shared_ptr<string> name_ {};
    // The workspace used for future runs.
    shared_ptr<int64_t> projectId_ {};
    // Updates the runtime resources based on the submitted fields. If ResourceGroupId or Cu is not provided, the original value is retained.
    shared_ptr<UpdateKnowledgeBaseBuildTaskRequest::RuntimeResource> runtimeResource_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The trigger configuration that completely replaces the original trigger.
    shared_ptr<UpdateKnowledgeBaseBuildTaskRequest::Trigger> trigger_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
