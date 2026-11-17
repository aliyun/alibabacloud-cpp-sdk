// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEBUILDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEBUILDTASKREQUEST_HPP_
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
  class CreateKnowledgeBaseBuildTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseBuildTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseBuildTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateKnowledgeBaseBuildTaskRequest() = default ;
    CreateKnowledgeBaseBuildTaskRequest(const CreateKnowledgeBaseBuildTaskRequest &) = default ;
    CreateKnowledgeBaseBuildTaskRequest(CreateKnowledgeBaseBuildTaskRequest &&) = default ;
    CreateKnowledgeBaseBuildTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseBuildTaskRequest() = default ;
    CreateKnowledgeBaseBuildTaskRequest& operator=(const CreateKnowledgeBaseBuildTaskRequest &) = default ;
    CreateKnowledgeBaseBuildTaskRequest& operator=(CreateKnowledgeBaseBuildTaskRequest &&) = default ;
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
      // The DataWorks scheduling cron expression. This parameter is provided only when the mode is set to PERIODIC.
      shared_ptr<string> cron_ {};
      // Specifies whether to enable or disable automatic periodic triggering. This parameter is provided only when the mode is set to PERIODIC and does not indicate the instance status.
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
      // The Builder compute specifications. Valid values: 4 to 16. If this parameter is omitted during creation, the default value is 4. The actual valid value is returned in read operations.
      shared_ptr<int32_t> cu_ {};
      // The ID of the DataWorks resource group used by the actual Builder nodes. The server validates that the resource group is available in the workspace corresponding to the top-level ProjectId of the task.
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
      // Required when building from document objects in the current knowledge base. The list cannot be empty and must contain unique values. Each item is the KnowledgeObjectId of a DOCUMENT type object in the current knowledge base. This parameter cannot be mixed with SourceIds for external connector synchronization scopes.
      shared_ptr<vector<string>> knowledgeObjectIds_ {};
      // The IDs of the DataWorks workspaces selected for workspace-scoped builds. The list cannot be empty and must contain unique values.
      shared_ptr<vector<int64_t>> projectIds_ {};
      // The IDs of the registered sources in the current knowledge base. The list must contain unique values. Whether this parameter is required and the allowed source types depend on the task input scenario. For more information, see the following table.
      shared_ptr<vector<string>> sourceIds_ {};
      // The YAML upload session ID in the current knowledge base used for SEMANTIC_MODEL import tasks. This ID is bound when the task is created and cannot be mixed with other input scopes.
      shared_ptr<string> yamlUploadId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->contentLocale_ == nullptr && this->description_ == nullptr && this->input_ == nullptr && this->knowledgeBaseId_ == nullptr && this->llmModel_ == nullptr
        && this->name_ == nullptr && this->projectId_ == nullptr && this->runtimeResource_ == nullptr && this->trigger_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateKnowledgeBaseBuildTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentLocale Field Functions 
    bool hasContentLocale() const { return this->contentLocale_ != nullptr;};
    void deleteContentLocale() { this->contentLocale_ = nullptr;};
    inline string getContentLocale() const { DARABONBA_PTR_GET_DEFAULT(contentLocale_, "") };
    inline CreateKnowledgeBaseBuildTaskRequest& setContentLocale(string contentLocale) { DARABONBA_PTR_SET_VALUE(contentLocale_, contentLocale) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseBuildTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const CreateKnowledgeBaseBuildTaskRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, CreateKnowledgeBaseBuildTaskRequest::Input) };
    inline CreateKnowledgeBaseBuildTaskRequest::Input getInput() { DARABONBA_PTR_GET(input_, CreateKnowledgeBaseBuildTaskRequest::Input) };
    inline CreateKnowledgeBaseBuildTaskRequest& setInput(const CreateKnowledgeBaseBuildTaskRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateKnowledgeBaseBuildTaskRequest& setInput(CreateKnowledgeBaseBuildTaskRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline CreateKnowledgeBaseBuildTaskRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // llmModel Field Functions 
    bool hasLlmModel() const { return this->llmModel_ != nullptr;};
    void deleteLlmModel() { this->llmModel_ = nullptr;};
    inline string getLlmModel() const { DARABONBA_PTR_GET_DEFAULT(llmModel_, "") };
    inline CreateKnowledgeBaseBuildTaskRequest& setLlmModel(string llmModel) { DARABONBA_PTR_SET_VALUE(llmModel_, llmModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseBuildTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateKnowledgeBaseBuildTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const CreateKnowledgeBaseBuildTaskRequest::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, CreateKnowledgeBaseBuildTaskRequest::RuntimeResource) };
    inline CreateKnowledgeBaseBuildTaskRequest::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, CreateKnowledgeBaseBuildTaskRequest::RuntimeResource) };
    inline CreateKnowledgeBaseBuildTaskRequest& setRuntimeResource(const CreateKnowledgeBaseBuildTaskRequest::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline CreateKnowledgeBaseBuildTaskRequest& setRuntimeResource(CreateKnowledgeBaseBuildTaskRequest::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const CreateKnowledgeBaseBuildTaskRequest::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, CreateKnowledgeBaseBuildTaskRequest::Trigger) };
    inline CreateKnowledgeBaseBuildTaskRequest::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, CreateKnowledgeBaseBuildTaskRequest::Trigger) };
    inline CreateKnowledgeBaseBuildTaskRequest& setTrigger(const CreateKnowledgeBaseBuildTaskRequest::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline CreateKnowledgeBaseBuildTaskRequest& setTrigger(CreateKnowledgeBaseBuildTaskRequest::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateKnowledgeBaseBuildTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The idempotency token for the creation request.
    shared_ptr<string> clientToken_ {};
    // The language of the content.
    shared_ptr<string> contentLocale_ {};
    // The description of the task. The description can be up to 1,024 characters in length. If this parameter is omitted, no description is set.
    shared_ptr<string> description_ {};
    // Specifies the input scope by selecting projects, entities, sources, or files based on the type.
    // 
    // This parameter is required.
    shared_ptr<CreateKnowledgeBaseBuildTaskRequest::Input> input_ {};
    // The ID of the knowledge base to which the task belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The specific model ID or AUTO.
    shared_ptr<string> llmModel_ {};
    // The name of the task.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the workspace where the task runs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The resource group and Builder compute units (CUs).
    // 
    // This parameter is required.
    shared_ptr<CreateKnowledgeBaseBuildTaskRequest::RuntimeResource> runtimeResource_ {};
    // The manual or periodic trigger configuration.
    shared_ptr<CreateKnowledgeBaseBuildTaskRequest::Trigger> trigger_ {};
    // The available build types.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
