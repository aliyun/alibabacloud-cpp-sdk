// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEBUILDTASKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEBUILDTASKINSTANCESRESPONSEBODY_HPP_
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
  class ListKnowledgeBaseBuildTaskInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseBuildTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseBuildTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKnowledgeBaseBuildTaskInstancesResponseBody() = default ;
    ListKnowledgeBaseBuildTaskInstancesResponseBody(const ListKnowledgeBaseBuildTaskInstancesResponseBody &) = default ;
    ListKnowledgeBaseBuildTaskInstancesResponseBody(ListKnowledgeBaseBuildTaskInstancesResponseBody &&) = default ;
    ListKnowledgeBaseBuildTaskInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseBuildTaskInstancesResponseBody() = default ;
    ListKnowledgeBaseBuildTaskInstancesResponseBody& operator=(const ListKnowledgeBaseBuildTaskInstancesResponseBody &) = default ;
    ListKnowledgeBaseBuildTaskInstancesResponseBody& operator=(ListKnowledgeBaseBuildTaskInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigSnapshot, configSnapshot_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CurrentStage, currentStage_);
          DARABONBA_PTR_TO_JSON(Error, error_);
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(GeneratedModels, generatedModels_);
          DARABONBA_PTR_TO_JSON(InputSnapshot, inputSnapshot_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigSnapshot, configSnapshot_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CurrentStage, currentStage_);
          DARABONBA_PTR_FROM_JSON(Error, error_);
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(GeneratedModels, generatedModels_);
          DARABONBA_PTR_FROM_JSON(InputSnapshot, inputSnapshot_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        };
        Instances() = default ;
        Instances(const Instances &) = default ;
        Instances(Instances &&) = default ;
        Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instances() = default ;
        Instances& operator=(const Instances &) = default ;
        Instances& operator=(Instances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InputSnapshot : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputSnapshot& obj) { 
            DARABONBA_PTR_TO_JSON(DocumentSourceCount, documentSourceCount_);
            DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
            DARABONBA_PTR_TO_JSON(ResolvedEntities, resolvedEntities_);
            DARABONBA_PTR_TO_JSON(ResolvedEntityCount, resolvedEntityCount_);
            DARABONBA_PTR_TO_JSON(SelectedInput, selectedInput_);
          };
          friend void from_json(const Darabonba::Json& j, InputSnapshot& obj) { 
            DARABONBA_PTR_FROM_JSON(DocumentSourceCount, documentSourceCount_);
            DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
            DARABONBA_PTR_FROM_JSON(ResolvedEntities, resolvedEntities_);
            DARABONBA_PTR_FROM_JSON(ResolvedEntityCount, resolvedEntityCount_);
            DARABONBA_PTR_FROM_JSON(SelectedInput, selectedInput_);
          };
          InputSnapshot() = default ;
          InputSnapshot(const InputSnapshot &) = default ;
          InputSnapshot(InputSnapshot &&) = default ;
          InputSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputSnapshot() = default ;
          InputSnapshot& operator=(const InputSnapshot &) = default ;
          InputSnapshot& operator=(InputSnapshot &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SelectedInput : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SelectedInput& obj) { 
              DARABONBA_PTR_TO_JSON(Entities, entities_);
              DARABONBA_PTR_TO_JSON(KnowledgeObjectIds, knowledgeObjectIds_);
              DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
              DARABONBA_PTR_TO_JSON(SourceIds, sourceIds_);
              DARABONBA_PTR_TO_JSON(YamlUploadId, yamlUploadId_);
            };
            friend void from_json(const Darabonba::Json& j, SelectedInput& obj) { 
              DARABONBA_PTR_FROM_JSON(Entities, entities_);
              DARABONBA_PTR_FROM_JSON(KnowledgeObjectIds, knowledgeObjectIds_);
              DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
              DARABONBA_PTR_FROM_JSON(SourceIds, sourceIds_);
              DARABONBA_PTR_FROM_JSON(YamlUploadId, yamlUploadId_);
            };
            SelectedInput() = default ;
            SelectedInput(const SelectedInput &) = default ;
            SelectedInput(SelectedInput &&) = default ;
            SelectedInput(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SelectedInput() = default ;
            SelectedInput& operator=(const SelectedInput &) = default ;
            SelectedInput& operator=(SelectedInput &&) = default ;
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
              // The metadata entity ID returned by Data Map. The client must pass this ID as is without concatenating database, schema, or table identifiers.
              shared_ptr<string> entityId_ {};
              // The entity level, such as DATABASE, SCHEMA, or TABLE. The server validates this based on Data Map identities. The presence of an enum value does not guarantee that all engines support it.
              shared_ptr<string> entityType_ {};
            };

            virtual bool empty() const override { return this->entities_ == nullptr
        && this->knowledgeObjectIds_ == nullptr && this->projectIds_ == nullptr && this->sourceIds_ == nullptr && this->yamlUploadId_ == nullptr; };
            // entities Field Functions 
            bool hasEntities() const { return this->entities_ != nullptr;};
            void deleteEntities() { this->entities_ = nullptr;};
            inline const vector<SelectedInput::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<SelectedInput::Entities>) };
            inline vector<SelectedInput::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<SelectedInput::Entities>) };
            inline SelectedInput& setEntities(const vector<SelectedInput::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
            inline SelectedInput& setEntities(vector<SelectedInput::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


            // knowledgeObjectIds Field Functions 
            bool hasKnowledgeObjectIds() const { return this->knowledgeObjectIds_ != nullptr;};
            void deleteKnowledgeObjectIds() { this->knowledgeObjectIds_ = nullptr;};
            inline const vector<string> & getKnowledgeObjectIds() const { DARABONBA_PTR_GET_CONST(knowledgeObjectIds_, vector<string>) };
            inline vector<string> getKnowledgeObjectIds() { DARABONBA_PTR_GET(knowledgeObjectIds_, vector<string>) };
            inline SelectedInput& setKnowledgeObjectIds(const vector<string> & knowledgeObjectIds) { DARABONBA_PTR_SET_VALUE(knowledgeObjectIds_, knowledgeObjectIds) };
            inline SelectedInput& setKnowledgeObjectIds(vector<string> && knowledgeObjectIds) { DARABONBA_PTR_SET_RVALUE(knowledgeObjectIds_, knowledgeObjectIds) };


            // projectIds Field Functions 
            bool hasProjectIds() const { return this->projectIds_ != nullptr;};
            void deleteProjectIds() { this->projectIds_ = nullptr;};
            inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
            inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
            inline SelectedInput& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
            inline SelectedInput& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


            // sourceIds Field Functions 
            bool hasSourceIds() const { return this->sourceIds_ != nullptr;};
            void deleteSourceIds() { this->sourceIds_ = nullptr;};
            inline const vector<string> & getSourceIds() const { DARABONBA_PTR_GET_CONST(sourceIds_, vector<string>) };
            inline vector<string> getSourceIds() { DARABONBA_PTR_GET(sourceIds_, vector<string>) };
            inline SelectedInput& setSourceIds(const vector<string> & sourceIds) { DARABONBA_PTR_SET_VALUE(sourceIds_, sourceIds) };
            inline SelectedInput& setSourceIds(vector<string> && sourceIds) { DARABONBA_PTR_SET_RVALUE(sourceIds_, sourceIds) };


            // yamlUploadId Field Functions 
            bool hasYamlUploadId() const { return this->yamlUploadId_ != nullptr;};
            void deleteYamlUploadId() { this->yamlUploadId_ = nullptr;};
            inline string getYamlUploadId() const { DARABONBA_PTR_GET_DEFAULT(yamlUploadId_, "") };
            inline SelectedInput& setYamlUploadId(string yamlUploadId) { DARABONBA_PTR_SET_VALUE(yamlUploadId_, yamlUploadId) };


          protected:
            // The Data Map entities, such as databases, schemas, and tables, selected for data asset-scoped builds. The list is non-empty and deduplicated.
            shared_ptr<vector<SelectedInput::Entities>> entities_ {};
            // Required, non-empty, and deduplicated when building from document objects in the knowledge base. Each item is a KnowledgeObjectId with Type=DOCUMENT in the knowledge base. This field cannot be mixed with SourceIds used for external connector synchronization scopes.
            shared_ptr<vector<string>> knowledgeObjectIds_ {};
            // The DataWorks workspace IDs selected for workspace-scoped builds. The list is non-empty and deduplicated.
            shared_ptr<vector<int64_t>> projectIds_ {};
            // The IDs of the registered sources in the knowledge base. The list is deduplicated. Whether this field is required and the allowed source types depend on the task input scenario. Refer to the following table.
            shared_ptr<vector<string>> sourceIds_ {};
            // The YAML upload session ID in the knowledge base used for SEMANTIC_MODEL import tasks. This ID is bound when the task is created and cannot be mixed with other input scopes.
            shared_ptr<string> yamlUploadId_ {};
          };

          class ResolvedEntities : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResolvedEntities& obj) { 
              DARABONBA_PTR_TO_JSON(EntityId, entityId_);
              DARABONBA_PTR_TO_JSON(EntityType, entityType_);
            };
            friend void from_json(const Darabonba::Json& j, ResolvedEntities& obj) { 
              DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
              DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
            };
            ResolvedEntities() = default ;
            ResolvedEntities(const ResolvedEntities &) = default ;
            ResolvedEntities(ResolvedEntities &&) = default ;
            ResolvedEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResolvedEntities() = default ;
            ResolvedEntities& operator=(const ResolvedEntities &) = default ;
            ResolvedEntities& operator=(ResolvedEntities &&) = default ;
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
            inline ResolvedEntities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


            // entityType Field Functions 
            bool hasEntityType() const { return this->entityType_ != nullptr;};
            void deleteEntityType() { this->entityType_ = nullptr;};
            inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
            inline ResolvedEntities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


          protected:
            // The metadata entity ID returned by Data Map. The client must pass this ID as is without concatenating database, schema, or table identifiers.
            shared_ptr<string> entityId_ {};
            // The entity level, such as DATABASE, SCHEMA, or TABLE. The server validates this based on Data Map identities. The presence of an enum value does not guarantee that all engines support it.
            shared_ptr<string> entityType_ {};
          };

          virtual bool empty() const override { return this->documentSourceCount_ == nullptr
        && this->filePaths_ == nullptr && this->resolvedEntities_ == nullptr && this->resolvedEntityCount_ == nullptr && this->selectedInput_ == nullptr; };
          // documentSourceCount Field Functions 
          bool hasDocumentSourceCount() const { return this->documentSourceCount_ != nullptr;};
          void deleteDocumentSourceCount() { this->documentSourceCount_ = nullptr;};
          inline int64_t getDocumentSourceCount() const { DARABONBA_PTR_GET_DEFAULT(documentSourceCount_, 0L) };
          inline InputSnapshot& setDocumentSourceCount(int64_t documentSourceCount) { DARABONBA_PTR_SET_VALUE(documentSourceCount_, documentSourceCount) };


          // filePaths Field Functions 
          bool hasFilePaths() const { return this->filePaths_ != nullptr;};
          void deleteFilePaths() { this->filePaths_ = nullptr;};
          inline const vector<string> & getFilePaths() const { DARABONBA_PTR_GET_CONST(filePaths_, vector<string>) };
          inline vector<string> getFilePaths() { DARABONBA_PTR_GET(filePaths_, vector<string>) };
          inline InputSnapshot& setFilePaths(const vector<string> & filePaths) { DARABONBA_PTR_SET_VALUE(filePaths_, filePaths) };
          inline InputSnapshot& setFilePaths(vector<string> && filePaths) { DARABONBA_PTR_SET_RVALUE(filePaths_, filePaths) };


          // resolvedEntities Field Functions 
          bool hasResolvedEntities() const { return this->resolvedEntities_ != nullptr;};
          void deleteResolvedEntities() { this->resolvedEntities_ = nullptr;};
          inline const vector<InputSnapshot::ResolvedEntities> & getResolvedEntities() const { DARABONBA_PTR_GET_CONST(resolvedEntities_, vector<InputSnapshot::ResolvedEntities>) };
          inline vector<InputSnapshot::ResolvedEntities> getResolvedEntities() { DARABONBA_PTR_GET(resolvedEntities_, vector<InputSnapshot::ResolvedEntities>) };
          inline InputSnapshot& setResolvedEntities(const vector<InputSnapshot::ResolvedEntities> & resolvedEntities) { DARABONBA_PTR_SET_VALUE(resolvedEntities_, resolvedEntities) };
          inline InputSnapshot& setResolvedEntities(vector<InputSnapshot::ResolvedEntities> && resolvedEntities) { DARABONBA_PTR_SET_RVALUE(resolvedEntities_, resolvedEntities) };


          // resolvedEntityCount Field Functions 
          bool hasResolvedEntityCount() const { return this->resolvedEntityCount_ != nullptr;};
          void deleteResolvedEntityCount() { this->resolvedEntityCount_ = nullptr;};
          inline int64_t getResolvedEntityCount() const { DARABONBA_PTR_GET_DEFAULT(resolvedEntityCount_, 0L) };
          inline InputSnapshot& setResolvedEntityCount(int64_t resolvedEntityCount) { DARABONBA_PTR_SET_VALUE(resolvedEntityCount_, resolvedEntityCount) };


          // selectedInput Field Functions 
          bool hasSelectedInput() const { return this->selectedInput_ != nullptr;};
          void deleteSelectedInput() { this->selectedInput_ = nullptr;};
          inline const InputSnapshot::SelectedInput & getSelectedInput() const { DARABONBA_PTR_GET_CONST(selectedInput_, InputSnapshot::SelectedInput) };
          inline InputSnapshot::SelectedInput getSelectedInput() { DARABONBA_PTR_GET(selectedInput_, InputSnapshot::SelectedInput) };
          inline InputSnapshot& setSelectedInput(const InputSnapshot::SelectedInput & selectedInput) { DARABONBA_PTR_SET_VALUE(selectedInput_, selectedInput) };
          inline InputSnapshot& setSelectedInput(InputSnapshot::SelectedInput && selectedInput) { DARABONBA_PTR_SET_RVALUE(selectedInput_, selectedInput) };


        protected:
          // The number of external document sources selected for the execution. This field is not returned when not applicable.
          shared_ptr<int64_t> documentSourceCount_ {};
          // The relative file paths in the knowledge base processed for page upload builds in the execution. These paths are from the frozen upload list of the instance. OSS addresses or verification information are not returned, and the current task or file list is not re-read.
          shared_ptr<vector<string>> filePaths_ {};
          // The actual Data Map entities resolved from the project, database, or schema scope for the execution. This field is not returned when not applicable.
          shared_ptr<vector<InputSnapshot::ResolvedEntities>> resolvedEntities_ {};
          // The total number of resolved entities. An accurate count is returned even if the array is omitted due to its size.
          shared_ptr<int64_t> resolvedEntityCount_ {};
          // The snapshot of the selection conditions in the task definition when the instance was created. This snapshot does not change when the task is updated. This field is omitted if no fixed object is selected for page upload builds.
          shared_ptr<InputSnapshot::SelectedInput> selectedInput_ {};
        };

        class GeneratedModels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GeneratedModels& obj) { 
            DARABONBA_PTR_TO_JSON(ModelId, modelId_);
            DARABONBA_PTR_TO_JSON(VersionNo, versionNo_);
          };
          friend void from_json(const Darabonba::Json& j, GeneratedModels& obj) { 
            DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
            DARABONBA_PTR_FROM_JSON(VersionNo, versionNo_);
          };
          GeneratedModels() = default ;
          GeneratedModels(const GeneratedModels &) = default ;
          GeneratedModels(GeneratedModels &&) = default ;
          GeneratedModels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GeneratedModels() = default ;
          GeneratedModels& operator=(const GeneratedModels &) = default ;
          GeneratedModels& operator=(GeneratedModels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelId_ == nullptr
        && this->versionNo_ == nullptr; };
          // modelId Field Functions 
          bool hasModelId() const { return this->modelId_ != nullptr;};
          void deleteModelId() { this->modelId_ = nullptr;};
          inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
          inline GeneratedModels& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


          // versionNo Field Functions 
          bool hasVersionNo() const { return this->versionNo_ != nullptr;};
          void deleteVersionNo() { this->versionNo_ = nullptr;};
          inline int64_t getVersionNo() const { DARABONBA_PTR_GET_DEFAULT(versionNo_, 0L) };
          inline GeneratedModels& setVersionNo(int64_t versionNo) { DARABONBA_PTR_SET_VALUE(versionNo_, versionNo) };


        protected:
          // The model ID generated by the semantic layer. You can use it as a KnowledgeObjectId to read the corresponding semantic model.
          shared_ptr<string> modelId_ {};
          // The current version of the SEMANTIC_MODEL being read. Pass this value when updating content. The version can be edited in place.
          shared_ptr<int64_t> versionNo_ {};
        };

        class Error : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Error& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Message, message_);
          };
          friend void from_json(const Darabonba::Json& j, Error& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
          };
          Error() = default ;
          Error(const Error &) = default ;
          Error(Error &&) = default ;
          Error(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Error() = default ;
          Error& operator=(const Error &) = default ;
          Error& operator=(Error &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        protected:
          // The business error code, which is used to determine the error type when the request fails.
          shared_ptr<string> code_ {};
          // The secure error message returned when the request fails.
          shared_ptr<string> message_ {};
        };

        class ConfigSnapshot : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigSnapshot& obj) { 
            DARABONBA_PTR_TO_JSON(ContentLocale, contentLocale_);
            DARABONBA_PTR_TO_JSON(LlmModel, llmModel_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigSnapshot& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentLocale, contentLocale_);
            DARABONBA_PTR_FROM_JSON(LlmModel, llmModel_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
          };
          ConfigSnapshot() = default ;
          ConfigSnapshot(const ConfigSnapshot &) = default ;
          ConfigSnapshot(ConfigSnapshot &&) = default ;
          ConfigSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigSnapshot() = default ;
          ConfigSnapshot& operator=(const ConfigSnapshot &) = default ;
          ConfigSnapshot& operator=(ConfigSnapshot &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
            // The Builder compute specifications. Valid values: 4 to 16. If omitted during creation, the default value is 4. The read operation returns the effective value.
            shared_ptr<int32_t> cu_ {};
            // The DataWorks resource group ID used by the actual Builder nodes. The server verifies its availability in the workspace corresponding to the top-level ProjectId of the task.
            shared_ptr<string> resourceGroupId_ {};
          };

          virtual bool empty() const override { return this->contentLocale_ == nullptr
        && this->llmModel_ == nullptr && this->projectId_ == nullptr && this->runtimeResource_ == nullptr; };
          // contentLocale Field Functions 
          bool hasContentLocale() const { return this->contentLocale_ != nullptr;};
          void deleteContentLocale() { this->contentLocale_ = nullptr;};
          inline string getContentLocale() const { DARABONBA_PTR_GET_DEFAULT(contentLocale_, "") };
          inline ConfigSnapshot& setContentLocale(string contentLocale) { DARABONBA_PTR_SET_VALUE(contentLocale_, contentLocale) };


          // llmModel Field Functions 
          bool hasLlmModel() const { return this->llmModel_ != nullptr;};
          void deleteLlmModel() { this->llmModel_ = nullptr;};
          inline string getLlmModel() const { DARABONBA_PTR_GET_DEFAULT(llmModel_, "") };
          inline ConfigSnapshot& setLlmModel(string llmModel) { DARABONBA_PTR_SET_VALUE(llmModel_, llmModel) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline ConfigSnapshot& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // runtimeResource Field Functions 
          bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
          void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
          inline const ConfigSnapshot::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, ConfigSnapshot::RuntimeResource) };
          inline ConfigSnapshot::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, ConfigSnapshot::RuntimeResource) };
          inline ConfigSnapshot& setRuntimeResource(const ConfigSnapshot::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
          inline ConfigSnapshot& setRuntimeResource(ConfigSnapshot::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


        protected:
          // The content language used for the execution.
          shared_ptr<string> contentLocale_ {};
          // The specific model ID actually used and frozen for the execution. AUTO is not returned. This field can be empty for tasks that do not call models, such as pure synchronization tasks.
          shared_ptr<string> llmModel_ {};
          // The DataWorks workspace ID used for the execution, frozen from the task definition when the instance was created.
          shared_ptr<int64_t> projectId_ {};
          // The resource group and Builder CUs actually used for the execution.
          shared_ptr<ConfigSnapshot::RuntimeResource> runtimeResource_ {};
        };

        virtual bool empty() const override { return this->configSnapshot_ == nullptr
        && this->createTime_ == nullptr && this->currentStage_ == nullptr && this->error_ == nullptr && this->finishedTime_ == nullptr && this->generatedModels_ == nullptr
        && this->inputSnapshot_ == nullptr && this->knowledgeBaseId_ == nullptr && this->startedTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskInstanceId_ == nullptr && this->triggerType_ == nullptr; };
        // configSnapshot Field Functions 
        bool hasConfigSnapshot() const { return this->configSnapshot_ != nullptr;};
        void deleteConfigSnapshot() { this->configSnapshot_ = nullptr;};
        inline const Instances::ConfigSnapshot & getConfigSnapshot() const { DARABONBA_PTR_GET_CONST(configSnapshot_, Instances::ConfigSnapshot) };
        inline Instances::ConfigSnapshot getConfigSnapshot() { DARABONBA_PTR_GET(configSnapshot_, Instances::ConfigSnapshot) };
        inline Instances& setConfigSnapshot(const Instances::ConfigSnapshot & configSnapshot) { DARABONBA_PTR_SET_VALUE(configSnapshot_, configSnapshot) };
        inline Instances& setConfigSnapshot(Instances::ConfigSnapshot && configSnapshot) { DARABONBA_PTR_SET_RVALUE(configSnapshot_, configSnapshot) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Instances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // currentStage Field Functions 
        bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
        void deleteCurrentStage() { this->currentStage_ = nullptr;};
        inline string getCurrentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, "") };
        inline Instances& setCurrentStage(string currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline const Instances::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Instances::Error) };
        inline Instances::Error getError() { DARABONBA_PTR_GET(error_, Instances::Error) };
        inline Instances& setError(const Instances::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
        inline Instances& setError(Instances::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
        inline Instances& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // generatedModels Field Functions 
        bool hasGeneratedModels() const { return this->generatedModels_ != nullptr;};
        void deleteGeneratedModels() { this->generatedModels_ = nullptr;};
        inline const vector<Instances::GeneratedModels> & getGeneratedModels() const { DARABONBA_PTR_GET_CONST(generatedModels_, vector<Instances::GeneratedModels>) };
        inline vector<Instances::GeneratedModels> getGeneratedModels() { DARABONBA_PTR_GET(generatedModels_, vector<Instances::GeneratedModels>) };
        inline Instances& setGeneratedModels(const vector<Instances::GeneratedModels> & generatedModels) { DARABONBA_PTR_SET_VALUE(generatedModels_, generatedModels) };
        inline Instances& setGeneratedModels(vector<Instances::GeneratedModels> && generatedModels) { DARABONBA_PTR_SET_RVALUE(generatedModels_, generatedModels) };


        // inputSnapshot Field Functions 
        bool hasInputSnapshot() const { return this->inputSnapshot_ != nullptr;};
        void deleteInputSnapshot() { this->inputSnapshot_ = nullptr;};
        inline const Instances::InputSnapshot & getInputSnapshot() const { DARABONBA_PTR_GET_CONST(inputSnapshot_, Instances::InputSnapshot) };
        inline Instances::InputSnapshot getInputSnapshot() { DARABONBA_PTR_GET(inputSnapshot_, Instances::InputSnapshot) };
        inline Instances& setInputSnapshot(const Instances::InputSnapshot & inputSnapshot) { DARABONBA_PTR_SET_VALUE(inputSnapshot_, inputSnapshot) };
        inline Instances& setInputSnapshot(Instances::InputSnapshot && inputSnapshot) { DARABONBA_PTR_SET_RVALUE(inputSnapshot_, inputSnapshot) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline Instances& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // startedTime Field Functions 
        bool hasStartedTime() const { return this->startedTime_ != nullptr;};
        void deleteStartedTime() { this->startedTime_ = nullptr;};
        inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
        inline Instances& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Instances& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskInstanceId Field Functions 
        bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
        void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
        inline string getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, "") };
        inline Instances& setTaskInstanceId(string taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
        inline Instances& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      protected:
        // The snapshot of the model, content language, and runtime resources for the execution. This snapshot does not change when the task is updated.
        shared_ptr<Instances::ConfigSnapshot> configSnapshot_ {};
        // The time when the instance was created.
        shared_ptr<int64_t> createTime_ {};
        // The current business stage, returned when reliable records are available. For standard build stages and semantic model import stages, refer to the domain model. This field does not replace the overall status.
        shared_ptr<string> currentStage_ {};
        // The error code and secure error message returned when the execution fails.
        shared_ptr<Instances::Error> error_ {};
        // The time when the execution finished. This field is optional.
        shared_ptr<int64_t> finishedTime_ {};
        // The confirmed ModelId and VersionNo for model imports only. For their structure, see GetKnowledgeBaseBuildTaskInstance.
        shared_ptr<vector<Instances::GeneratedModels>> generatedModels_ {};
        // The non-sensitive input snapshot after selection and parsing for the execution. This snapshot does not change when the task is updated.
        shared_ptr<Instances::InputSnapshot> inputSnapshot_ {};
        // The ID of the knowledge base to which the instance belongs. Use it for scope validation and queries.
        shared_ptr<string> knowledgeBaseId_ {};
        // The time when the execution started. This field is optional.
        shared_ptr<int64_t> startedTime_ {};
        // The overall status of the execution.
        shared_ptr<string> status_ {};
        // The source task ID.
        shared_ptr<string> taskId_ {};
        // The task instance ID.
        shared_ptr<string> taskInstanceId_ {};
        // The trigger type of the execution, which can be manual, periodic, or a supported event.
        shared_ptr<string> triggerType_ {};
      };

      virtual bool empty() const override { return this->instances_ == nullptr
        && this->nextToken_ == nullptr; };
      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The knowledge objects that you have permissions to read on the current page.
      shared_ptr<vector<Data::Instances>> instances_ {};
      // The pagination token for the next page. This field is null if there is no next page.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeBaseBuildTaskInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeBaseBuildTaskInstancesResponseBody::Data) };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKnowledgeBaseBuildTaskInstancesResponseBody::Data) };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody& setData(const ListKnowledgeBaseBuildTaskInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody& setData(ListKnowledgeBaseBuildTaskInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKnowledgeBaseBuildTaskInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code, which is used to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<ListKnowledgeBaseBuildTaskInstancesResponseBody::Data> data_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The secure error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
