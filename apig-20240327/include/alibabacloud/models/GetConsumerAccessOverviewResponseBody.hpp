// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERACCESSOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERACCESSOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetConsumerAccessOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerAccessOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerAccessOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetConsumerAccessOverviewResponseBody() = default ;
    GetConsumerAccessOverviewResponseBody(const GetConsumerAccessOverviewResponseBody &) = default ;
    GetConsumerAccessOverviewResponseBody(GetConsumerAccessOverviewResponseBody &&) = default ;
    GetConsumerAccessOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerAccessOverviewResponseBody() = default ;
    GetConsumerAccessOverviewResponseBody& operator=(const GetConsumerAccessOverviewResponseBody &) = default ;
    GetConsumerAccessOverviewResponseBody& operator=(GetConsumerAccessOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(complete, complete_);
        DARABONBA_PTR_TO_JSON(gateway, gateway_);
        DARABONBA_PTR_TO_JSON(identityDescription, identityDescription_);
        DARABONBA_PTR_TO_JSON(impacts, impacts_);
        DARABONBA_PTR_TO_JSON(modelTpmLimits, modelTpmLimits_);
        DARABONBA_PTR_TO_JSON(quotas, quotas_);
        DARABONBA_PTR_TO_JSON(resources, resources_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(complete, complete_);
        DARABONBA_PTR_FROM_JSON(gateway, gateway_);
        DARABONBA_PTR_FROM_JSON(identityDescription, identityDescription_);
        DARABONBA_PTR_FROM_JSON(impacts, impacts_);
        DARABONBA_PTR_FROM_JSON(modelTpmLimits, modelTpmLimits_);
        DARABONBA_PTR_FROM_JSON(quotas, quotas_);
        DARABONBA_PTR_FROM_JSON(resources, resources_);
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
      class Resources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resources& obj) { 
          DARABONBA_PTR_TO_JSON(allModels, allModels_);
          DARABONBA_PTR_TO_JSON(allTools, allTools_);
          DARABONBA_PTR_TO_JSON(consumerGroupName, consumerGroupName_);
          DARABONBA_PTR_TO_JSON(entitlementState, entitlementState_);
          DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(modelGroups, modelGroups_);
          DARABONBA_PTR_TO_JSON(models, models_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(tools, tools_);
        };
        friend void from_json(const Darabonba::Json& j, Resources& obj) { 
          DARABONBA_PTR_FROM_JSON(allModels, allModels_);
          DARABONBA_PTR_FROM_JSON(allTools, allTools_);
          DARABONBA_PTR_FROM_JSON(consumerGroupName, consumerGroupName_);
          DARABONBA_PTR_FROM_JSON(entitlementState, entitlementState_);
          DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(modelGroups, modelGroups_);
          DARABONBA_PTR_FROM_JSON(models, models_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(tools, tools_);
        };
        Resources() = default ;
        Resources(const Resources &) = default ;
        Resources(Resources &&) = default ;
        Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resources() = default ;
        Resources& operator=(const Resources &) = default ;
        Resources& operator=(Resources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Models : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Models& obj) { 
            DARABONBA_PTR_TO_JSON(consumerGroupName, consumerGroupName_);
            DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
            DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
            DARABONBA_PTR_TO_JSON(modelSourceName, modelSourceName_);
            DARABONBA_PTR_TO_JSON(modelType, modelType_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Models& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerGroupName, consumerGroupName_);
            DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
            DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
            DARABONBA_PTR_FROM_JSON(modelSourceName, modelSourceName_);
            DARABONBA_PTR_FROM_JSON(modelType, modelType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Models() = default ;
          Models(const Models &) = default ;
          Models(Models &&) = default ;
          Models(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Models() = default ;
          Models& operator=(const Models &) = default ;
          Models& operator=(Models &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->consumerGroupName_ == nullptr
        && this->modelCardId_ == nullptr && this->modelSourceId_ == nullptr && this->modelSourceName_ == nullptr && this->modelType_ == nullptr && this->name_ == nullptr; };
          // consumerGroupName Field Functions 
          bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
          void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
          inline string getConsumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
          inline Models& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


          // modelCardId Field Functions 
          bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
          void deleteModelCardId() { this->modelCardId_ = nullptr;};
          inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
          inline Models& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


          // modelSourceId Field Functions 
          bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
          void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
          inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
          inline Models& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


          // modelSourceName Field Functions 
          bool hasModelSourceName() const { return this->modelSourceName_ != nullptr;};
          void deleteModelSourceName() { this->modelSourceName_ = nullptr;};
          inline string getModelSourceName() const { DARABONBA_PTR_GET_DEFAULT(modelSourceName_, "") };
          inline Models& setModelSourceName(string modelSourceName) { DARABONBA_PTR_SET_VALUE(modelSourceName_, modelSourceName) };


          // modelType Field Functions 
          bool hasModelType() const { return this->modelType_ != nullptr;};
          void deleteModelType() { this->modelType_ = nullptr;};
          inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
          inline Models& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Models& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name of the consumer group that grants this authorization.
          shared_ptr<string> consumerGroupName_ {};
          // The model identifier. A standard model uses the source model card ID, while a logical model endpoint uses a vm- prefix.
          shared_ptr<string> modelCardId_ {};
          // The model source ID. Use the modelSourceId returned by CreateAiModelSource.
          shared_ptr<string> modelSourceId_ {};
          // The display name of the model source.
          shared_ptr<string> modelSourceName_ {};
          // The model type. Valid values: Model and LogicalModel.
          shared_ptr<string> modelType_ {};
          // The name of the consumer.
          shared_ptr<string> name_ {};
        };

        class ModelGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModelGroups& obj) { 
            DARABONBA_PTR_TO_JSON(consumerGroupName, consumerGroupName_);
            DARABONBA_PTR_TO_JSON(modelGroupId, modelGroupId_);
            DARABONBA_PTR_TO_JSON(models, models_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ModelGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerGroupName, consumerGroupName_);
            DARABONBA_PTR_FROM_JSON(modelGroupId, modelGroupId_);
            DARABONBA_PTR_FROM_JSON(models, models_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          ModelGroups() = default ;
          ModelGroups(const ModelGroups &) = default ;
          ModelGroups(ModelGroups &&) = default ;
          ModelGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModelGroups() = default ;
          ModelGroups& operator=(const ModelGroups &) = default ;
          ModelGroups& operator=(ModelGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Models : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Models& obj) { 
              DARABONBA_PTR_TO_JSON(consumerGroupName, consumerGroupName_);
              DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
              DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
              DARABONBA_PTR_TO_JSON(modelSourceName, modelSourceName_);
              DARABONBA_PTR_TO_JSON(modelType, modelType_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Models& obj) { 
              DARABONBA_PTR_FROM_JSON(consumerGroupName, consumerGroupName_);
              DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
              DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
              DARABONBA_PTR_FROM_JSON(modelSourceName, modelSourceName_);
              DARABONBA_PTR_FROM_JSON(modelType, modelType_);
              DARABONBA_PTR_FROM_JSON(name, name_);
            };
            Models() = default ;
            Models(const Models &) = default ;
            Models(Models &&) = default ;
            Models(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Models() = default ;
            Models& operator=(const Models &) = default ;
            Models& operator=(Models &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->consumerGroupName_ == nullptr
        && this->modelCardId_ == nullptr && this->modelSourceId_ == nullptr && this->modelSourceName_ == nullptr && this->modelType_ == nullptr && this->name_ == nullptr; };
            // consumerGroupName Field Functions 
            bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
            void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
            inline string getConsumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
            inline Models& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


            // modelCardId Field Functions 
            bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
            void deleteModelCardId() { this->modelCardId_ = nullptr;};
            inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
            inline Models& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


            // modelSourceId Field Functions 
            bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
            void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
            inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
            inline Models& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


            // modelSourceName Field Functions 
            bool hasModelSourceName() const { return this->modelSourceName_ != nullptr;};
            void deleteModelSourceName() { this->modelSourceName_ = nullptr;};
            inline string getModelSourceName() const { DARABONBA_PTR_GET_DEFAULT(modelSourceName_, "") };
            inline Models& setModelSourceName(string modelSourceName) { DARABONBA_PTR_SET_VALUE(modelSourceName_, modelSourceName) };


            // modelType Field Functions 
            bool hasModelType() const { return this->modelType_ != nullptr;};
            void deleteModelType() { this->modelType_ = nullptr;};
            inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
            inline Models& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Models& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            // The name of the consumer group that grants this authorization.
            shared_ptr<string> consumerGroupName_ {};
            // The model identifier. A standard model uses the source model card ID, while a logical model endpoint uses a vm- prefix.
            shared_ptr<string> modelCardId_ {};
            // The model source ID. Use the modelSourceId returned by CreateAiModelSource.
            shared_ptr<string> modelSourceId_ {};
            // The display name of the model source.
            shared_ptr<string> modelSourceName_ {};
            // The model type. Valid values: Model and LogicalModel.
            shared_ptr<string> modelType_ {};
            // The name of the consumer.
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->consumerGroupName_ == nullptr
        && this->modelGroupId_ == nullptr && this->models_ == nullptr && this->name_ == nullptr; };
          // consumerGroupName Field Functions 
          bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
          void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
          inline string getConsumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
          inline ModelGroups& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


          // modelGroupId Field Functions 
          bool hasModelGroupId() const { return this->modelGroupId_ != nullptr;};
          void deleteModelGroupId() { this->modelGroupId_ = nullptr;};
          inline string getModelGroupId() const { DARABONBA_PTR_GET_DEFAULT(modelGroupId_, "") };
          inline ModelGroups& setModelGroupId(string modelGroupId) { DARABONBA_PTR_SET_VALUE(modelGroupId_, modelGroupId) };


          // models Field Functions 
          bool hasModels() const { return this->models_ != nullptr;};
          void deleteModels() { this->models_ = nullptr;};
          inline const vector<ModelGroups::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<ModelGroups::Models>) };
          inline vector<ModelGroups::Models> getModels() { DARABONBA_PTR_GET(models_, vector<ModelGroups::Models>) };
          inline ModelGroups& setModels(const vector<ModelGroups::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
          inline ModelGroups& setModels(vector<ModelGroups::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ModelGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name of the consumer group that grants this authorization.
          shared_ptr<string> consumerGroupName_ {};
          // The model group ID. Use the modelGroupId returned by CreateModelGroup.
          shared_ptr<string> modelGroupId_ {};
          // The list of accessible model endpoints within the current resource scope.
          shared_ptr<vector<ModelGroups::Models>> models_ {};
          // The name of the consumer.
          shared_ptr<string> name_ {};
        };

        class EntitlementState : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EntitlementState& obj) { 
            DARABONBA_PTR_TO_JSON(appliedRevision, appliedRevision_);
            DARABONBA_PTR_TO_JSON(desiredRevision, desiredRevision_);
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(status, status_);
          };
          friend void from_json(const Darabonba::Json& j, EntitlementState& obj) { 
            DARABONBA_PTR_FROM_JSON(appliedRevision, appliedRevision_);
            DARABONBA_PTR_FROM_JSON(desiredRevision, desiredRevision_);
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(status, status_);
          };
          EntitlementState() = default ;
          EntitlementState(const EntitlementState &) = default ;
          EntitlementState(EntitlementState &&) = default ;
          EntitlementState(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EntitlementState() = default ;
          EntitlementState& operator=(const EntitlementState &) = default ;
          EntitlementState& operator=(EntitlementState &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appliedRevision_ == nullptr
        && this->desiredRevision_ == nullptr && this->errorMessage_ == nullptr && this->status_ == nullptr; };
          // appliedRevision Field Functions 
          bool hasAppliedRevision() const { return this->appliedRevision_ != nullptr;};
          void deleteAppliedRevision() { this->appliedRevision_ = nullptr;};
          inline int64_t getAppliedRevision() const { DARABONBA_PTR_GET_DEFAULT(appliedRevision_, 0L) };
          inline EntitlementState& setAppliedRevision(int64_t appliedRevision) { DARABONBA_PTR_SET_VALUE(appliedRevision_, appliedRevision) };


          // desiredRevision Field Functions 
          bool hasDesiredRevision() const { return this->desiredRevision_ != nullptr;};
          void deleteDesiredRevision() { this->desiredRevision_ = nullptr;};
          inline int64_t getDesiredRevision() const { DARABONBA_PTR_GET_DEFAULT(desiredRevision_, 0L) };
          inline EntitlementState& setDesiredRevision(int64_t desiredRevision) { DARABONBA_PTR_SET_VALUE(desiredRevision_, desiredRevision) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline EntitlementState& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline EntitlementState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The applied authorization revision number.
          shared_ptr<int64_t> appliedRevision_ {};
          // The expected authorization revision number to be delivered.
          shared_ptr<int64_t> desiredRevision_ {};
          // The error description when processing fails. Empty when no error occurs.
          shared_ptr<string> errorMessage_ {};
          // The status of the entitlement delivery. Valid values: Pending, Applying, Committed, and Failed.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->allModels_ == nullptr
        && this->allTools_ == nullptr && this->consumerGroupName_ == nullptr && this->entitlementState_ == nullptr && this->expireTime_ == nullptr && this->modelGroups_ == nullptr
        && this->models_ == nullptr && this->name_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->tools_ == nullptr; };
        // allModels Field Functions 
        bool hasAllModels() const { return this->allModels_ != nullptr;};
        void deleteAllModels() { this->allModels_ = nullptr;};
        inline bool getAllModels() const { DARABONBA_PTR_GET_DEFAULT(allModels_, false) };
        inline Resources& setAllModels(bool allModels) { DARABONBA_PTR_SET_VALUE(allModels_, allModels) };


        // allTools Field Functions 
        bool hasAllTools() const { return this->allTools_ != nullptr;};
        void deleteAllTools() { this->allTools_ = nullptr;};
        inline bool getAllTools() const { DARABONBA_PTR_GET_DEFAULT(allTools_, false) };
        inline Resources& setAllTools(bool allTools) { DARABONBA_PTR_SET_VALUE(allTools_, allTools) };


        // consumerGroupName Field Functions 
        bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
        void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
        inline string getConsumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
        inline Resources& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


        // entitlementState Field Functions 
        bool hasEntitlementState() const { return this->entitlementState_ != nullptr;};
        void deleteEntitlementState() { this->entitlementState_ = nullptr;};
        inline const Resources::EntitlementState & getEntitlementState() const { DARABONBA_PTR_GET_CONST(entitlementState_, Resources::EntitlementState) };
        inline Resources::EntitlementState getEntitlementState() { DARABONBA_PTR_GET(entitlementState_, Resources::EntitlementState) };
        inline Resources& setEntitlementState(const Resources::EntitlementState & entitlementState) { DARABONBA_PTR_SET_VALUE(entitlementState_, entitlementState) };
        inline Resources& setEntitlementState(Resources::EntitlementState && entitlementState) { DARABONBA_PTR_SET_RVALUE(entitlementState_, entitlementState) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Resources& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // modelGroups Field Functions 
        bool hasModelGroups() const { return this->modelGroups_ != nullptr;};
        void deleteModelGroups() { this->modelGroups_ = nullptr;};
        inline const vector<Resources::ModelGroups> & getModelGroups() const { DARABONBA_PTR_GET_CONST(modelGroups_, vector<Resources::ModelGroups>) };
        inline vector<Resources::ModelGroups> getModelGroups() { DARABONBA_PTR_GET(modelGroups_, vector<Resources::ModelGroups>) };
        inline Resources& setModelGroups(const vector<Resources::ModelGroups> & modelGroups) { DARABONBA_PTR_SET_VALUE(modelGroups_, modelGroups) };
        inline Resources& setModelGroups(vector<Resources::ModelGroups> && modelGroups) { DARABONBA_PTR_SET_RVALUE(modelGroups_, modelGroups) };


        // models Field Functions 
        bool hasModels() const { return this->models_ != nullptr;};
        void deleteModels() { this->models_ = nullptr;};
        inline const vector<Resources::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<Resources::Models>) };
        inline vector<Resources::Models> getModels() { DARABONBA_PTR_GET(models_, vector<Resources::Models>) };
        inline Resources& setModels(const vector<Resources::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
        inline Resources& setModels(vector<Resources::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Resources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // tools Field Functions 
        bool hasTools() const { return this->tools_ != nullptr;};
        void deleteTools() { this->tools_ = nullptr;};
        inline const vector<string> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
        inline vector<string> getTools() { DARABONBA_PTR_GET(tools_, vector<string>) };
        inline Resources& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
        inline Resources& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


      protected:
        // Specifies whether the authorization scope of the resource includes all models.
        shared_ptr<bool> allModels_ {};
        // Specifies whether the authorization scope of the MCP resource includes all tools.
        shared_ptr<bool> allTools_ {};
        // The name of the consumer group that grants this authorization.
        shared_ptr<string> consumerGroupName_ {};
        // The existing desired and applied states of the model entitlement projection. Omitted when no state row exists.
        shared_ptr<Resources::EntitlementState> entitlementState_ {};
        // The expiration time. The value is null for long-term authorizations, an RFC 3339 formatted string for short-term authorizations with lossless projection, and omitted when unknown.
        shared_ptr<string> expireTime_ {};
        // The accessible model groups and their model collections.
        shared_ptr<vector<Resources::ModelGroups>> modelGroups_ {};
        // The list of accessible model endpoints within the current resource scope.
        shared_ptr<vector<Resources::Models>> models_ {};
        // The name of the consumer.
        shared_ptr<string> name_ {};
        // The immutable identifier of the authorized resource.
        shared_ptr<string> resourceId_ {};
        // The resource type. Valid values: ModelApi, MCP, and Agent.
        shared_ptr<string> resourceType_ {};
        // The list of MCP tool names that are allowed to be called within the resource scope.
        shared_ptr<vector<string>> tools_ {};
      };

      class Quotas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
          DARABONBA_PTR_TO_JSON(limit, limit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(periodMultiplier, periodMultiplier_);
          DARABONBA_PTR_TO_JSON(periodType, periodType_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(subjectId, subjectId_);
          DARABONBA_PTR_TO_JSON(subjectName, subjectName_);
          DARABONBA_PTR_TO_JSON(subjectType, subjectType_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
          DARABONBA_PTR_TO_JSON(used, used_);
          DARABONBA_PTR_TO_JSON(windowAlignment, windowAlignment_);
        };
        friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
          DARABONBA_PTR_FROM_JSON(limit, limit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(periodMultiplier, periodMultiplier_);
          DARABONBA_PTR_FROM_JSON(periodType, periodType_);
          DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(subjectId, subjectId_);
          DARABONBA_PTR_FROM_JSON(subjectName, subjectName_);
          DARABONBA_PTR_FROM_JSON(subjectType, subjectType_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
          DARABONBA_PTR_FROM_JSON(used, used_);
          DARABONBA_PTR_FROM_JSON(windowAlignment, windowAlignment_);
        };
        Quotas() = default ;
        Quotas(const Quotas &) = default ;
        Quotas(Quotas &&) = default ;
        Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Quotas() = default ;
        Quotas& operator=(const Quotas &) = default ;
        Quotas& operator=(Quotas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->limit_ == nullptr
        && this->name_ == nullptr && this->periodMultiplier_ == nullptr && this->periodType_ == nullptr && this->ruleId_ == nullptr && this->subjectId_ == nullptr
        && this->subjectName_ == nullptr && this->subjectType_ == nullptr && this->unit_ == nullptr && this->used_ == nullptr && this->windowAlignment_ == nullptr; };
        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
        inline Quotas& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Quotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // periodMultiplier Field Functions 
        bool hasPeriodMultiplier() const { return this->periodMultiplier_ != nullptr;};
        void deletePeriodMultiplier() { this->periodMultiplier_ = nullptr;};
        inline int64_t getPeriodMultiplier() const { DARABONBA_PTR_GET_DEFAULT(periodMultiplier_, 0L) };
        inline Quotas& setPeriodMultiplier(int64_t periodMultiplier) { DARABONBA_PTR_SET_VALUE(periodMultiplier_, periodMultiplier) };


        // periodType Field Functions 
        bool hasPeriodType() const { return this->periodType_ != nullptr;};
        void deletePeriodType() { this->periodType_ = nullptr;};
        inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
        inline Quotas& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Quotas& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // subjectId Field Functions 
        bool hasSubjectId() const { return this->subjectId_ != nullptr;};
        void deleteSubjectId() { this->subjectId_ = nullptr;};
        inline string getSubjectId() const { DARABONBA_PTR_GET_DEFAULT(subjectId_, "") };
        inline Quotas& setSubjectId(string subjectId) { DARABONBA_PTR_SET_VALUE(subjectId_, subjectId) };


        // subjectName Field Functions 
        bool hasSubjectName() const { return this->subjectName_ != nullptr;};
        void deleteSubjectName() { this->subjectName_ = nullptr;};
        inline string getSubjectName() const { DARABONBA_PTR_GET_DEFAULT(subjectName_, "") };
        inline Quotas& setSubjectName(string subjectName) { DARABONBA_PTR_SET_VALUE(subjectName_, subjectName) };


        // subjectType Field Functions 
        bool hasSubjectType() const { return this->subjectType_ != nullptr;};
        void deleteSubjectType() { this->subjectType_ = nullptr;};
        inline string getSubjectType() const { DARABONBA_PTR_GET_DEFAULT(subjectType_, "") };
        inline Quotas& setSubjectType(string subjectType) { DARABONBA_PTR_SET_VALUE(subjectType_, subjectType) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Quotas& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline double getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0.0) };
        inline Quotas& setUsed(double used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // windowAlignment Field Functions 
        bool hasWindowAlignment() const { return this->windowAlignment_ != nullptr;};
        void deleteWindowAlignment() { this->windowAlignment_ = nullptr;};
        inline string getWindowAlignment() const { DARABONBA_PTR_GET_DEFAULT(windowAlignment_, "") };
        inline Quotas& setWindowAlignment(string windowAlignment) { DARABONBA_PTR_SET_VALUE(windowAlignment_, windowAlignment) };


      protected:
        // The quota limit for the current rule, using the same unit of measurement as the unit field.
        shared_ptr<int64_t> limit_ {};
        // The name of the consumer.
        shared_ptr<string> name_ {};
        // The multiplier for the custom period.
        shared_ptr<int64_t> periodMultiplier_ {};
        // The type of the quota period. Valid values: day, week, and month.
        shared_ptr<string> periodType_ {};
        // The ID of the quota rule.
        shared_ptr<string> ruleId_ {};
        // The ID of the subject to which the quota belongs.
        shared_ptr<string> subjectId_ {};
        // The name of the subject to which the quota belongs.
        shared_ptr<string> subjectName_ {};
        // The type of the quota subject. Valid values: consumer and consumer_group.
        shared_ptr<string> subjectType_ {};
        // The unit of measurement for the quota.
        shared_ptr<string> unit_ {};
        // The used quota within the period corresponding to the current rule, using the same unit of measurement as the unit field.
        shared_ptr<double> used_ {};
        // The alignment of the period window. Valid values: calendar for natural periods and epoch for custom base periods.
        shared_ptr<string> windowAlignment_ {};
      };

      class ModelTpmLimits : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelTpmLimits& obj) { 
          DARABONBA_PTR_TO_JSON(consumerTpm, consumerTpm_);
          DARABONBA_PTR_TO_JSON(globalTpm, globalTpm_);
          DARABONBA_PTR_TO_JSON(modelId, modelId_);
        };
        friend void from_json(const Darabonba::Json& j, ModelTpmLimits& obj) { 
          DARABONBA_PTR_FROM_JSON(consumerTpm, consumerTpm_);
          DARABONBA_PTR_FROM_JSON(globalTpm, globalTpm_);
          DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        };
        ModelTpmLimits() = default ;
        ModelTpmLimits(const ModelTpmLimits &) = default ;
        ModelTpmLimits(ModelTpmLimits &&) = default ;
        ModelTpmLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelTpmLimits() = default ;
        ModelTpmLimits& operator=(const ModelTpmLimits &) = default ;
        ModelTpmLimits& operator=(ModelTpmLimits &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerTpm_ == nullptr
        && this->globalTpm_ == nullptr && this->modelId_ == nullptr; };
        // consumerTpm Field Functions 
        bool hasConsumerTpm() const { return this->consumerTpm_ != nullptr;};
        void deleteConsumerTpm() { this->consumerTpm_ = nullptr;};
        inline int64_t getConsumerTpm() const { DARABONBA_PTR_GET_DEFAULT(consumerTpm_, 0L) };
        inline ModelTpmLimits& setConsumerTpm(int64_t consumerTpm) { DARABONBA_PTR_SET_VALUE(consumerTpm_, consumerTpm) };


        // globalTpm Field Functions 
        bool hasGlobalTpm() const { return this->globalTpm_ != nullptr;};
        void deleteGlobalTpm() { this->globalTpm_ = nullptr;};
        inline int64_t getGlobalTpm() const { DARABONBA_PTR_GET_DEFAULT(globalTpm_, 0L) };
        inline ModelTpmLimits& setGlobalTpm(int64_t globalTpm) { DARABONBA_PTR_SET_VALUE(globalTpm_, globalTpm) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
        inline ModelTpmLimits& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      protected:
        // The maximum tokens per minute for the current consumer using this model. Returned only when a rule is configured for the consumer.
        shared_ptr<int64_t> consumerTpm_ {};
        // The maximum tokens per minute shared by all consumers for this model within the instance. Returned only when a global limit is configured.
        shared_ptr<int64_t> globalTpm_ {};
        // The actual model card ID starting with msc- or the logical model ID starting with vm-.
        shared_ptr<string> modelId_ {};
      };

      class Impacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Impacts& obj) { 
          DARABONBA_PTR_TO_JSON(authorizationCounts, authorizationCounts_);
          DARABONBA_PTR_TO_JSON(gateway, gateway_);
          DARABONBA_PTR_TO_JSON(resources, resources_);
        };
        friend void from_json(const Darabonba::Json& j, Impacts& obj) { 
          DARABONBA_PTR_FROM_JSON(authorizationCounts, authorizationCounts_);
          DARABONBA_PTR_FROM_JSON(gateway, gateway_);
          DARABONBA_PTR_FROM_JSON(resources, resources_);
        };
        Impacts() = default ;
        Impacts(const Impacts &) = default ;
        Impacts(Impacts &&) = default ;
        Impacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Impacts() = default ;
        Impacts& operator=(const Impacts &) = default ;
        Impacts& operator=(Impacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Gateway : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Gateway& obj) { 
            DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Gateway& obj) { 
            DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Gateway() = default ;
          Gateway(const Gateway &) = default ;
          Gateway(Gateway &&) = default ;
          Gateway(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Gateway() = default ;
          Gateway& operator=(const Gateway &) = default ;
          Gateway& operator=(Gateway &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr; };
          // gatewayId Field Functions 
          bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
          void deleteGatewayId() { this->gatewayId_ = nullptr;};
          inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
          inline Gateway& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Gateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the AI gateway instance to which the resource belongs.
          shared_ptr<string> gatewayId_ {};
          // The name of the consumer.
          shared_ptr<string> name_ {};
        };

        class AuthorizationCounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorizationCounts& obj) { 
            DARABONBA_PTR_TO_JSON(agentApis, agentApis_);
            DARABONBA_PTR_TO_JSON(mcpServers, mcpServers_);
            DARABONBA_PTR_TO_JSON(modelApis, modelApis_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorizationCounts& obj) { 
            DARABONBA_PTR_FROM_JSON(agentApis, agentApis_);
            DARABONBA_PTR_FROM_JSON(mcpServers, mcpServers_);
            DARABONBA_PTR_FROM_JSON(modelApis, modelApis_);
          };
          AuthorizationCounts() = default ;
          AuthorizationCounts(const AuthorizationCounts &) = default ;
          AuthorizationCounts(AuthorizationCounts &&) = default ;
          AuthorizationCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthorizationCounts() = default ;
          AuthorizationCounts& operator=(const AuthorizationCounts &) = default ;
          AuthorizationCounts& operator=(AuthorizationCounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agentApis_ == nullptr
        && this->mcpServers_ == nullptr && this->modelApis_ == nullptr; };
          // agentApis Field Functions 
          bool hasAgentApis() const { return this->agentApis_ != nullptr;};
          void deleteAgentApis() { this->agentApis_ = nullptr;};
          inline int32_t getAgentApis() const { DARABONBA_PTR_GET_DEFAULT(agentApis_, 0) };
          inline AuthorizationCounts& setAgentApis(int32_t agentApis) { DARABONBA_PTR_SET_VALUE(agentApis_, agentApis) };


          // mcpServers Field Functions 
          bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
          void deleteMcpServers() { this->mcpServers_ = nullptr;};
          inline int32_t getMcpServers() const { DARABONBA_PTR_GET_DEFAULT(mcpServers_, 0) };
          inline AuthorizationCounts& setMcpServers(int32_t mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };


          // modelApis Field Functions 
          bool hasModelApis() const { return this->modelApis_ != nullptr;};
          void deleteModelApis() { this->modelApis_ = nullptr;};
          inline int32_t getModelApis() const { DARABONBA_PTR_GET_DEFAULT(modelApis_, 0) };
          inline AuthorizationCounts& setModelApis(int32_t modelApis) { DARABONBA_PTR_SET_VALUE(modelApis_, modelApis) };


        protected:
          // The number of agent APIs with configured authorizations.
          shared_ptr<int32_t> agentApis_ {};
          // The number of MCP services with configured authorizations.
          shared_ptr<int32_t> mcpServers_ {};
          // The number of model APIs with configured authorizations.
          shared_ptr<int32_t> modelApis_ {};
        };

        virtual bool empty() const override { return this->authorizationCounts_ == nullptr
        && this->gateway_ == nullptr && this->resources_ == nullptr; };
        // authorizationCounts Field Functions 
        bool hasAuthorizationCounts() const { return this->authorizationCounts_ != nullptr;};
        void deleteAuthorizationCounts() { this->authorizationCounts_ = nullptr;};
        inline const Impacts::AuthorizationCounts & getAuthorizationCounts() const { DARABONBA_PTR_GET_CONST(authorizationCounts_, Impacts::AuthorizationCounts) };
        inline Impacts::AuthorizationCounts getAuthorizationCounts() { DARABONBA_PTR_GET(authorizationCounts_, Impacts::AuthorizationCounts) };
        inline Impacts& setAuthorizationCounts(const Impacts::AuthorizationCounts & authorizationCounts) { DARABONBA_PTR_SET_VALUE(authorizationCounts_, authorizationCounts) };
        inline Impacts& setAuthorizationCounts(Impacts::AuthorizationCounts && authorizationCounts) { DARABONBA_PTR_SET_RVALUE(authorizationCounts_, authorizationCounts) };


        // gateway Field Functions 
        bool hasGateway() const { return this->gateway_ != nullptr;};
        void deleteGateway() { this->gateway_ = nullptr;};
        inline const Impacts::Gateway & getGateway() const { DARABONBA_PTR_GET_CONST(gateway_, Impacts::Gateway) };
        inline Impacts::Gateway getGateway() { DARABONBA_PTR_GET(gateway_, Impacts::Gateway) };
        inline Impacts& setGateway(const Impacts::Gateway & gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };
        inline Impacts& setGateway(Impacts::Gateway && gateway) { DARABONBA_PTR_SET_RVALUE(gateway_, gateway) };


        // resources Field Functions 
        bool hasResources() const { return this->resources_ != nullptr;};
        void deleteResources() { this->resources_ = nullptr;};
        inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
        inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
        inline Impacts& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
        inline Impacts& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      protected:
        // The number of authorization configurations by resource type.
        shared_ptr<Impacts::AuthorizationCounts> authorizationCounts_ {};
        // The gateway identifier and name in the current context.
        shared_ptr<Impacts::Gateway> gateway_ {};
        // The collection of resources for which the consumer has been granted authorization.
        shared_ptr<vector<string>> resources_ {};
      };

      class Gateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Gateway& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Gateway& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Gateway() = default ;
        Gateway(const Gateway &) = default ;
        Gateway(Gateway &&) = default ;
        Gateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Gateway() = default ;
        Gateway& operator=(const Gateway &) = default ;
        Gateway& operator=(Gateway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr; };
        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Gateway& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Gateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the AI gateway instance to which the resource belongs.
        shared_ptr<string> gatewayId_ {};
        // The name of the consumer.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->complete_ == nullptr
        && this->gateway_ == nullptr && this->identityDescription_ == nullptr && this->impacts_ == nullptr && this->modelTpmLimits_ == nullptr && this->quotas_ == nullptr
        && this->resources_ == nullptr; };
      // complete Field Functions 
      bool hasComplete() const { return this->complete_ != nullptr;};
      void deleteComplete() { this->complete_ = nullptr;};
      inline bool getComplete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
      inline Data& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


      // gateway Field Functions 
      bool hasGateway() const { return this->gateway_ != nullptr;};
      void deleteGateway() { this->gateway_ = nullptr;};
      inline const Data::Gateway & getGateway() const { DARABONBA_PTR_GET_CONST(gateway_, Data::Gateway) };
      inline Data::Gateway getGateway() { DARABONBA_PTR_GET(gateway_, Data::Gateway) };
      inline Data& setGateway(const Data::Gateway & gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };
      inline Data& setGateway(Data::Gateway && gateway) { DARABONBA_PTR_SET_RVALUE(gateway_, gateway) };


      // identityDescription Field Functions 
      bool hasIdentityDescription() const { return this->identityDescription_ != nullptr;};
      void deleteIdentityDescription() { this->identityDescription_ = nullptr;};
      inline string getIdentityDescription() const { DARABONBA_PTR_GET_DEFAULT(identityDescription_, "") };
      inline Data& setIdentityDescription(string identityDescription) { DARABONBA_PTR_SET_VALUE(identityDescription_, identityDescription) };


      // impacts Field Functions 
      bool hasImpacts() const { return this->impacts_ != nullptr;};
      void deleteImpacts() { this->impacts_ = nullptr;};
      inline const vector<Data::Impacts> & getImpacts() const { DARABONBA_PTR_GET_CONST(impacts_, vector<Data::Impacts>) };
      inline vector<Data::Impacts> getImpacts() { DARABONBA_PTR_GET(impacts_, vector<Data::Impacts>) };
      inline Data& setImpacts(const vector<Data::Impacts> & impacts) { DARABONBA_PTR_SET_VALUE(impacts_, impacts) };
      inline Data& setImpacts(vector<Data::Impacts> && impacts) { DARABONBA_PTR_SET_RVALUE(impacts_, impacts) };


      // modelTpmLimits Field Functions 
      bool hasModelTpmLimits() const { return this->modelTpmLimits_ != nullptr;};
      void deleteModelTpmLimits() { this->modelTpmLimits_ = nullptr;};
      inline const vector<Data::ModelTpmLimits> & getModelTpmLimits() const { DARABONBA_PTR_GET_CONST(modelTpmLimits_, vector<Data::ModelTpmLimits>) };
      inline vector<Data::ModelTpmLimits> getModelTpmLimits() { DARABONBA_PTR_GET(modelTpmLimits_, vector<Data::ModelTpmLimits>) };
      inline Data& setModelTpmLimits(const vector<Data::ModelTpmLimits> & modelTpmLimits) { DARABONBA_PTR_SET_VALUE(modelTpmLimits_, modelTpmLimits) };
      inline Data& setModelTpmLimits(vector<Data::ModelTpmLimits> && modelTpmLimits) { DARABONBA_PTR_SET_RVALUE(modelTpmLimits_, modelTpmLimits) };


      // quotas Field Functions 
      bool hasQuotas() const { return this->quotas_ != nullptr;};
      void deleteQuotas() { this->quotas_ = nullptr;};
      inline const vector<Data::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<Data::Quotas>) };
      inline vector<Data::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<Data::Quotas>) };
      inline Data& setQuotas(const vector<Data::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
      inline Data& setQuotas(vector<Data::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<Data::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Data::Resources>) };
      inline vector<Data::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<Data::Resources>) };
      inline Data& setResources(const vector<Data::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline Data& setResources(vector<Data::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    protected:
      // Indicates whether the query result is complete. A successful response returns a complete projection.
      shared_ptr<bool> complete_ {};
      // The gateway identifier and name in the current context.
      shared_ptr<Data::Gateway> gateway_ {};
      // The description text of the consumer.
      shared_ptr<string> identityDescription_ {};
      // The impact of authorization configurations for the consumer in readable gateways within the local region.
      shared_ptr<vector<Data::Impacts>> impacts_ {};
      // The list of models with configured global or current consumer TPM limits in the target dedicated instance. Returned when includeModelTpm is set to true, and an empty array when no matching models exist.
      shared_ptr<vector<Data::ModelTpmLimits>> modelTpmLimits_ {};
      // The quota rules and usage for the consumer and its associated consumer group.
      shared_ptr<vector<Data::Quotas>> quotas_ {};
      // The collection of resources for which the consumer has been granted authorization.
      shared_ptr<vector<Data::Resources>> resources_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumerAccessOverviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConsumerAccessOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConsumerAccessOverviewResponseBody::Data) };
    inline GetConsumerAccessOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConsumerAccessOverviewResponseBody::Data) };
    inline GetConsumerAccessOverviewResponseBody& setData(const GetConsumerAccessOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumerAccessOverviewResponseBody& setData(GetConsumerAccessOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerAccessOverviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerAccessOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. It returns Ok for a successful request or a specific business error code for a failed request.
    shared_ptr<string> code_ {};
    // The business result returned by the consumer operation.
    shared_ptr<GetConsumerAccessOverviewResponseBody::Data> data_ {};
    // The response message that describes the request processing result.
    shared_ptr<string> message_ {};
    // The ID of the request generated by the system to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
