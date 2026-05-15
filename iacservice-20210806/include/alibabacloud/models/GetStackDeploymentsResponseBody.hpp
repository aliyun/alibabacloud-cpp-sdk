// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKDEPLOYMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKDEPLOYMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetStackDeploymentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackDeploymentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deployments, deployments_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackDeploymentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deployments, deployments_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetStackDeploymentsResponseBody() = default ;
    GetStackDeploymentsResponseBody(const GetStackDeploymentsResponseBody &) = default ;
    GetStackDeploymentsResponseBody(GetStackDeploymentsResponseBody &&) = default ;
    GetStackDeploymentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackDeploymentsResponseBody() = default ;
    GetStackDeploymentsResponseBody& operator=(const GetStackDeploymentsResponseBody &) = default ;
    GetStackDeploymentsResponseBody& operator=(GetStackDeploymentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Deployments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Deployments& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(configVersion, configVersion_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
        DARABONBA_PTR_TO_JSON(deploymentNo, deploymentNo_);
        DARABONBA_PTR_TO_JSON(deploymentVersion, deploymentVersion_);
        DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(executeType, executeType_);
        DARABONBA_PTR_TO_JSON(failedReason, failedReason_);
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
        DARABONBA_PTR_TO_JSON(outputs, outputs_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(planOutputs, planOutputs_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Deployments& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(configVersion, configVersion_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
        DARABONBA_PTR_FROM_JSON(deploymentNo, deploymentNo_);
        DARABONBA_PTR_FROM_JSON(deploymentVersion, deploymentVersion_);
        DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(executeType, executeType_);
        DARABONBA_PTR_FROM_JSON(failedReason, failedReason_);
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        DARABONBA_PTR_FROM_JSON(outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(planOutputs, planOutputs_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      };
      Deployments() = default ;
      Deployments(const Deployments &) = default ;
      Deployments(Deployments &&) = default ;
      Deployments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Deployments() = default ;
      Deployments& operator=(const Deployments &) = default ;
      Deployments& operator=(Deployments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PlanOutputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PlanOutputs& obj) { 
          DARABONBA_PTR_TO_JSON(moduleAction, moduleAction_);
          DARABONBA_PTR_TO_JSON(moduleActionDetail, moduleActionDetail_);
          DARABONBA_PTR_TO_JSON(resourceChanges, resourceChanges_);
          DARABONBA_PTR_TO_JSON(stackModuleName, stackModuleName_);
        };
        friend void from_json(const Darabonba::Json& j, PlanOutputs& obj) { 
          DARABONBA_PTR_FROM_JSON(moduleAction, moduleAction_);
          DARABONBA_PTR_FROM_JSON(moduleActionDetail, moduleActionDetail_);
          DARABONBA_PTR_FROM_JSON(resourceChanges, resourceChanges_);
          DARABONBA_PTR_FROM_JSON(stackModuleName, stackModuleName_);
        };
        PlanOutputs() = default ;
        PlanOutputs(const PlanOutputs &) = default ;
        PlanOutputs(PlanOutputs &&) = default ;
        PlanOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PlanOutputs() = default ;
        PlanOutputs& operator=(const PlanOutputs &) = default ;
        PlanOutputs& operator=(PlanOutputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceChanges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceChanges& obj) { 
            DARABONBA_PTR_TO_JSON(change, change_);
            DARABONBA_PTR_TO_JSON(resourceActions, resourceActions_);
            DARABONBA_PTR_TO_JSON(resourceIdentifier, resourceIdentifier_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceChanges& obj) { 
            DARABONBA_PTR_FROM_JSON(change, change_);
            DARABONBA_PTR_FROM_JSON(resourceActions, resourceActions_);
            DARABONBA_PTR_FROM_JSON(resourceIdentifier, resourceIdentifier_);
          };
          ResourceChanges() = default ;
          ResourceChanges(const ResourceChanges &) = default ;
          ResourceChanges(ResourceChanges &&) = default ;
          ResourceChanges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceChanges() = default ;
          ResourceChanges& operator=(const ResourceChanges &) = default ;
          ResourceChanges& operator=(ResourceChanges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->change_ == nullptr
        && this->resourceActions_ == nullptr && this->resourceIdentifier_ == nullptr; };
          // change Field Functions 
          bool hasChange() const { return this->change_ != nullptr;};
          void deleteChange() { this->change_ = nullptr;};
          inline string getChange() const { DARABONBA_PTR_GET_DEFAULT(change_, "") };
          inline ResourceChanges& setChange(string change) { DARABONBA_PTR_SET_VALUE(change_, change) };


          // resourceActions Field Functions 
          bool hasResourceActions() const { return this->resourceActions_ != nullptr;};
          void deleteResourceActions() { this->resourceActions_ = nullptr;};
          inline const vector<string> & getResourceActions() const { DARABONBA_PTR_GET_CONST(resourceActions_, vector<string>) };
          inline vector<string> getResourceActions() { DARABONBA_PTR_GET(resourceActions_, vector<string>) };
          inline ResourceChanges& setResourceActions(const vector<string> & resourceActions) { DARABONBA_PTR_SET_VALUE(resourceActions_, resourceActions) };
          inline ResourceChanges& setResourceActions(vector<string> && resourceActions) { DARABONBA_PTR_SET_RVALUE(resourceActions_, resourceActions) };


          // resourceIdentifier Field Functions 
          bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
          void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
          inline string getResourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceIdentifier_, "") };
          inline ResourceChanges& setResourceIdentifier(string resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };


        protected:
          shared_ptr<string> change_ {};
          shared_ptr<vector<string>> resourceActions_ {};
          shared_ptr<string> resourceIdentifier_ {};
        };

        class ModuleActionDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModuleActionDetail& obj) { 
            DARABONBA_PTR_TO_JSON(add, add_);
            DARABONBA_PTR_TO_JSON(change, change_);
            DARABONBA_PTR_TO_JSON(destroy, destroy_);
          };
          friend void from_json(const Darabonba::Json& j, ModuleActionDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(add, add_);
            DARABONBA_PTR_FROM_JSON(change, change_);
            DARABONBA_PTR_FROM_JSON(destroy, destroy_);
          };
          ModuleActionDetail() = default ;
          ModuleActionDetail(const ModuleActionDetail &) = default ;
          ModuleActionDetail(ModuleActionDetail &&) = default ;
          ModuleActionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModuleActionDetail() = default ;
          ModuleActionDetail& operator=(const ModuleActionDetail &) = default ;
          ModuleActionDetail& operator=(ModuleActionDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->add_ == nullptr
        && this->change_ == nullptr && this->destroy_ == nullptr; };
          // add Field Functions 
          bool hasAdd() const { return this->add_ != nullptr;};
          void deleteAdd() { this->add_ = nullptr;};
          inline int32_t getAdd() const { DARABONBA_PTR_GET_DEFAULT(add_, 0) };
          inline ModuleActionDetail& setAdd(int32_t add) { DARABONBA_PTR_SET_VALUE(add_, add) };


          // change Field Functions 
          bool hasChange() const { return this->change_ != nullptr;};
          void deleteChange() { this->change_ = nullptr;};
          inline int32_t getChange() const { DARABONBA_PTR_GET_DEFAULT(change_, 0) };
          inline ModuleActionDetail& setChange(int32_t change) { DARABONBA_PTR_SET_VALUE(change_, change) };


          // destroy Field Functions 
          bool hasDestroy() const { return this->destroy_ != nullptr;};
          void deleteDestroy() { this->destroy_ = nullptr;};
          inline int32_t getDestroy() const { DARABONBA_PTR_GET_DEFAULT(destroy_, 0) };
          inline ModuleActionDetail& setDestroy(int32_t destroy) { DARABONBA_PTR_SET_VALUE(destroy_, destroy) };


        protected:
          shared_ptr<int32_t> add_ {};
          shared_ptr<int32_t> change_ {};
          shared_ptr<int32_t> destroy_ {};
        };

        virtual bool empty() const override { return this->moduleAction_ == nullptr
        && this->moduleActionDetail_ == nullptr && this->resourceChanges_ == nullptr && this->stackModuleName_ == nullptr; };
        // moduleAction Field Functions 
        bool hasModuleAction() const { return this->moduleAction_ != nullptr;};
        void deleteModuleAction() { this->moduleAction_ = nullptr;};
        inline string getModuleAction() const { DARABONBA_PTR_GET_DEFAULT(moduleAction_, "") };
        inline PlanOutputs& setModuleAction(string moduleAction) { DARABONBA_PTR_SET_VALUE(moduleAction_, moduleAction) };


        // moduleActionDetail Field Functions 
        bool hasModuleActionDetail() const { return this->moduleActionDetail_ != nullptr;};
        void deleteModuleActionDetail() { this->moduleActionDetail_ = nullptr;};
        inline const PlanOutputs::ModuleActionDetail & getModuleActionDetail() const { DARABONBA_PTR_GET_CONST(moduleActionDetail_, PlanOutputs::ModuleActionDetail) };
        inline PlanOutputs::ModuleActionDetail getModuleActionDetail() { DARABONBA_PTR_GET(moduleActionDetail_, PlanOutputs::ModuleActionDetail) };
        inline PlanOutputs& setModuleActionDetail(const PlanOutputs::ModuleActionDetail & moduleActionDetail) { DARABONBA_PTR_SET_VALUE(moduleActionDetail_, moduleActionDetail) };
        inline PlanOutputs& setModuleActionDetail(PlanOutputs::ModuleActionDetail && moduleActionDetail) { DARABONBA_PTR_SET_RVALUE(moduleActionDetail_, moduleActionDetail) };


        // resourceChanges Field Functions 
        bool hasResourceChanges() const { return this->resourceChanges_ != nullptr;};
        void deleteResourceChanges() { this->resourceChanges_ = nullptr;};
        inline const vector<PlanOutputs::ResourceChanges> & getResourceChanges() const { DARABONBA_PTR_GET_CONST(resourceChanges_, vector<PlanOutputs::ResourceChanges>) };
        inline vector<PlanOutputs::ResourceChanges> getResourceChanges() { DARABONBA_PTR_GET(resourceChanges_, vector<PlanOutputs::ResourceChanges>) };
        inline PlanOutputs& setResourceChanges(const vector<PlanOutputs::ResourceChanges> & resourceChanges) { DARABONBA_PTR_SET_VALUE(resourceChanges_, resourceChanges) };
        inline PlanOutputs& setResourceChanges(vector<PlanOutputs::ResourceChanges> && resourceChanges) { DARABONBA_PTR_SET_RVALUE(resourceChanges_, resourceChanges) };


        // stackModuleName Field Functions 
        bool hasStackModuleName() const { return this->stackModuleName_ != nullptr;};
        void deleteStackModuleName() { this->stackModuleName_ = nullptr;};
        inline string getStackModuleName() const { DARABONBA_PTR_GET_DEFAULT(stackModuleName_, "") };
        inline PlanOutputs& setStackModuleName(string stackModuleName) { DARABONBA_PTR_SET_VALUE(stackModuleName_, stackModuleName) };


      protected:
        shared_ptr<string> moduleAction_ {};
        shared_ptr<PlanOutputs::ModuleActionDetail> moduleActionDetail_ {};
        shared_ptr<vector<PlanOutputs::ResourceChanges>> resourceChanges_ {};
        shared_ptr<string> stackModuleName_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sensitive, sensitive_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sensitive, sensitive_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->sensitive_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline Parameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Parameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sensitive Field Functions 
        bool hasSensitive() const { return this->sensitive_ != nullptr;};
        void deleteSensitive() { this->sensitive_ = nullptr;};
        inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
        inline Parameters& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> sensitive_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      class Outputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(expression, expression_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(expression, expression_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Outputs() = default ;
        Outputs(const Outputs &) = default ;
        Outputs(Outputs &&) = default ;
        Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outputs() = default ;
        Outputs& operator=(const Outputs &) = default ;
        Outputs& operator=(Outputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->expression_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Outputs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline Outputs& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Outputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Outputs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Outputs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> expression_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(autoApply, autoApply_);
          DARABONBA_PTR_TO_JSON(isDestroy, isDestroy_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(autoApply, autoApply_);
          DARABONBA_PTR_FROM_JSON(isDestroy, isDestroy_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoApply_ == nullptr
        && this->isDestroy_ == nullptr; };
        // autoApply Field Functions 
        bool hasAutoApply() const { return this->autoApply_ != nullptr;};
        void deleteAutoApply() { this->autoApply_ = nullptr;};
        inline bool getAutoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
        inline Config& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


        // isDestroy Field Functions 
        bool hasIsDestroy() const { return this->isDestroy_ != nullptr;};
        void deleteIsDestroy() { this->isDestroy_ = nullptr;};
        inline bool getIsDestroy() const { DARABONBA_PTR_GET_DEFAULT(isDestroy_, false) };
        inline Config& setIsDestroy(bool isDestroy) { DARABONBA_PTR_SET_VALUE(isDestroy_, isDestroy) };


      protected:
        shared_ptr<bool> autoApply_ {};
        shared_ptr<bool> isDestroy_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->configVersion_ == nullptr && this->createTime_ == nullptr && this->deploymentName_ == nullptr && this->deploymentNo_ == nullptr && this->deploymentVersion_ == nullptr
        && this->elapsedTime_ == nullptr && this->executeType_ == nullptr && this->failedReason_ == nullptr && this->jobId_ == nullptr && this->outputs_ == nullptr
        && this->parameters_ == nullptr && this->planOutputs_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Deployments::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Deployments::Config) };
      inline Deployments::Config getConfig() { DARABONBA_PTR_GET(config_, Deployments::Config) };
      inline Deployments& setConfig(const Deployments::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Deployments& setConfig(Deployments::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // configVersion Field Functions 
      bool hasConfigVersion() const { return this->configVersion_ != nullptr;};
      void deleteConfigVersion() { this->configVersion_ = nullptr;};
      inline string getConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(configVersion_, "") };
      inline Deployments& setConfigVersion(string configVersion) { DARABONBA_PTR_SET_VALUE(configVersion_, configVersion) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Deployments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deploymentName Field Functions 
      bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
      void deleteDeploymentName() { this->deploymentName_ = nullptr;};
      inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
      inline Deployments& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


      // deploymentNo Field Functions 
      bool hasDeploymentNo() const { return this->deploymentNo_ != nullptr;};
      void deleteDeploymentNo() { this->deploymentNo_ = nullptr;};
      inline string getDeploymentNo() const { DARABONBA_PTR_GET_DEFAULT(deploymentNo_, "") };
      inline Deployments& setDeploymentNo(string deploymentNo) { DARABONBA_PTR_SET_VALUE(deploymentNo_, deploymentNo) };


      // deploymentVersion Field Functions 
      bool hasDeploymentVersion() const { return this->deploymentVersion_ != nullptr;};
      void deleteDeploymentVersion() { this->deploymentVersion_ = nullptr;};
      inline string getDeploymentVersion() const { DARABONBA_PTR_GET_DEFAULT(deploymentVersion_, "") };
      inline Deployments& setDeploymentVersion(string deploymentVersion) { DARABONBA_PTR_SET_VALUE(deploymentVersion_, deploymentVersion) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline Deployments& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // executeType Field Functions 
      bool hasExecuteType() const { return this->executeType_ != nullptr;};
      void deleteExecuteType() { this->executeType_ = nullptr;};
      inline string getExecuteType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, "") };
      inline Deployments& setExecuteType(string executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


      // failedReason Field Functions 
      bool hasFailedReason() const { return this->failedReason_ != nullptr;};
      void deleteFailedReason() { this->failedReason_ = nullptr;};
      inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
      inline Deployments& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Deployments& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const vector<Deployments::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Deployments::Outputs>) };
      inline vector<Deployments::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<Deployments::Outputs>) };
      inline Deployments& setOutputs(const vector<Deployments::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline Deployments& setOutputs(vector<Deployments::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<Deployments::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Deployments::Parameters>) };
      inline vector<Deployments::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Deployments::Parameters>) };
      inline Deployments& setParameters(const vector<Deployments::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Deployments& setParameters(vector<Deployments::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // planOutputs Field Functions 
      bool hasPlanOutputs() const { return this->planOutputs_ != nullptr;};
      void deletePlanOutputs() { this->planOutputs_ = nullptr;};
      inline const vector<Deployments::PlanOutputs> & getPlanOutputs() const { DARABONBA_PTR_GET_CONST(planOutputs_, vector<Deployments::PlanOutputs>) };
      inline vector<Deployments::PlanOutputs> getPlanOutputs() { DARABONBA_PTR_GET(planOutputs_, vector<Deployments::PlanOutputs>) };
      inline Deployments& setPlanOutputs(const vector<Deployments::PlanOutputs> & planOutputs) { DARABONBA_PTR_SET_VALUE(planOutputs_, planOutputs) };
      inline Deployments& setPlanOutputs(vector<Deployments::PlanOutputs> && planOutputs) { DARABONBA_PTR_SET_RVALUE(planOutputs_, planOutputs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Deployments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Deployments& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<Deployments::Config> config_ {};
      shared_ptr<string> configVersion_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> deploymentName_ {};
      shared_ptr<string> deploymentNo_ {};
      shared_ptr<string> deploymentVersion_ {};
      shared_ptr<int64_t> elapsedTime_ {};
      shared_ptr<string> executeType_ {};
      shared_ptr<string> failedReason_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<vector<Deployments::Outputs>> outputs_ {};
      shared_ptr<vector<Deployments::Parameters>> parameters_ {};
      shared_ptr<vector<Deployments::PlanOutputs>> planOutputs_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->deployments_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deployments Field Functions 
    bool hasDeployments() const { return this->deployments_ != nullptr;};
    void deleteDeployments() { this->deployments_ = nullptr;};
    inline const vector<GetStackDeploymentsResponseBody::Deployments> & getDeployments() const { DARABONBA_PTR_GET_CONST(deployments_, vector<GetStackDeploymentsResponseBody::Deployments>) };
    inline vector<GetStackDeploymentsResponseBody::Deployments> getDeployments() { DARABONBA_PTR_GET(deployments_, vector<GetStackDeploymentsResponseBody::Deployments>) };
    inline GetStackDeploymentsResponseBody& setDeployments(const vector<GetStackDeploymentsResponseBody::Deployments> & deployments) { DARABONBA_PTR_SET_VALUE(deployments_, deployments) };
    inline GetStackDeploymentsResponseBody& setDeployments(vector<GetStackDeploymentsResponseBody::Deployments> && deployments) { DARABONBA_PTR_SET_RVALUE(deployments_, deployments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackDeploymentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetStackDeploymentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<GetStackDeploymentsResponseBody::Deployments>> deployments_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
