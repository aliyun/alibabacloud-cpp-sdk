// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKCONFIGSRESPONSEBODY_HPP_
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
  class ListStackConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(configs, configs_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(configs, configs_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListStackConfigsResponseBody() = default ;
    ListStackConfigsResponseBody(const ListStackConfigsResponseBody &) = default ;
    ListStackConfigsResponseBody(ListStackConfigsResponseBody &&) = default ;
    ListStackConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackConfigsResponseBody() = default ;
    ListStackConfigsResponseBody& operator=(const ListStackConfigsResponseBody &) = default ;
    ListStackConfigsResponseBody& operator=(ListStackConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(componentConfig, componentConfig_);
        DARABONBA_PTR_TO_JSON(componentContent, componentContent_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(deploymentConfig, deploymentConfig_);
        DARABONBA_PTR_TO_JSON(deploymentContent, deploymentContent_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(componentConfig, componentConfig_);
        DARABONBA_PTR_FROM_JSON(componentContent, componentContent_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(deploymentConfig, deploymentConfig_);
        DARABONBA_PTR_FROM_JSON(deploymentContent, deploymentContent_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeploymentConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentConfig& obj) { 
          DARABONBA_PTR_TO_JSON(deployment, deployment_);
          DARABONBA_PTR_TO_JSON(publishOutput, publishOutput_);
          DARABONBA_PTR_TO_JSON(upstreamInput, upstreamInput_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(deployment, deployment_);
          DARABONBA_PTR_FROM_JSON(publishOutput, publishOutput_);
          DARABONBA_PTR_FROM_JSON(upstreamInput, upstreamInput_);
        };
        DeploymentConfig() = default ;
        DeploymentConfig(const DeploymentConfig &) = default ;
        DeploymentConfig(DeploymentConfig &&) = default ;
        DeploymentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentConfig() = default ;
        DeploymentConfig& operator=(const DeploymentConfig &) = default ;
        DeploymentConfig& operator=(DeploymentConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UpstreamInput : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UpstreamInput& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(source, source_);
          };
          friend void from_json(const Darabonba::Json& j, UpstreamInput& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(source, source_);
          };
          UpstreamInput() = default ;
          UpstreamInput(const UpstreamInput &) = default ;
          UpstreamInput(UpstreamInput &&) = default ;
          UpstreamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UpstreamInput() = default ;
          UpstreamInput& operator=(const UpstreamInput &) = default ;
          UpstreamInput& operator=(UpstreamInput &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->source_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline UpstreamInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline UpstreamInput& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> source_ {};
        };

        class PublishOutput : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublishOutput& obj) { 
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(result, result_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PublishOutput& obj) { 
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(result, result_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          PublishOutput() = default ;
          PublishOutput(const PublishOutput &) = default ;
          PublishOutput(PublishOutput &&) = default ;
          PublishOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublishOutput() = default ;
          PublishOutput& operator=(const PublishOutput &) = default ;
          PublishOutput& operator=(PublishOutput &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->result_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline PublishOutput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PublishOutput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // result Field Functions 
          bool hasResult() const { return this->result_ != nullptr;};
          void deleteResult() { this->result_ = nullptr;};
          inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
          inline PublishOutput& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline PublishOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PublishOutput& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> result_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        class Deployment : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Deployment& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Deployment& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Deployment() = default ;
          Deployment(const Deployment &) = default ;
          Deployment(Deployment &&) = default ;
          Deployment(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Deployment() = default ;
          Deployment& operator=(const Deployment &) = default ;
          Deployment& operator=(Deployment &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Deployment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->deployment_ == nullptr
        && this->publishOutput_ == nullptr && this->upstreamInput_ == nullptr; };
        // deployment Field Functions 
        bool hasDeployment() const { return this->deployment_ != nullptr;};
        void deleteDeployment() { this->deployment_ = nullptr;};
        inline const vector<DeploymentConfig::Deployment> & getDeployment() const { DARABONBA_PTR_GET_CONST(deployment_, vector<DeploymentConfig::Deployment>) };
        inline vector<DeploymentConfig::Deployment> getDeployment() { DARABONBA_PTR_GET(deployment_, vector<DeploymentConfig::Deployment>) };
        inline DeploymentConfig& setDeployment(const vector<DeploymentConfig::Deployment> & deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };
        inline DeploymentConfig& setDeployment(vector<DeploymentConfig::Deployment> && deployment) { DARABONBA_PTR_SET_RVALUE(deployment_, deployment) };


        // publishOutput Field Functions 
        bool hasPublishOutput() const { return this->publishOutput_ != nullptr;};
        void deletePublishOutput() { this->publishOutput_ = nullptr;};
        inline const vector<DeploymentConfig::PublishOutput> & getPublishOutput() const { DARABONBA_PTR_GET_CONST(publishOutput_, vector<DeploymentConfig::PublishOutput>) };
        inline vector<DeploymentConfig::PublishOutput> getPublishOutput() { DARABONBA_PTR_GET(publishOutput_, vector<DeploymentConfig::PublishOutput>) };
        inline DeploymentConfig& setPublishOutput(const vector<DeploymentConfig::PublishOutput> & publishOutput) { DARABONBA_PTR_SET_VALUE(publishOutput_, publishOutput) };
        inline DeploymentConfig& setPublishOutput(vector<DeploymentConfig::PublishOutput> && publishOutput) { DARABONBA_PTR_SET_RVALUE(publishOutput_, publishOutput) };


        // upstreamInput Field Functions 
        bool hasUpstreamInput() const { return this->upstreamInput_ != nullptr;};
        void deleteUpstreamInput() { this->upstreamInput_ = nullptr;};
        inline const vector<DeploymentConfig::UpstreamInput> & getUpstreamInput() const { DARABONBA_PTR_GET_CONST(upstreamInput_, vector<DeploymentConfig::UpstreamInput>) };
        inline vector<DeploymentConfig::UpstreamInput> getUpstreamInput() { DARABONBA_PTR_GET(upstreamInput_, vector<DeploymentConfig::UpstreamInput>) };
        inline DeploymentConfig& setUpstreamInput(const vector<DeploymentConfig::UpstreamInput> & upstreamInput) { DARABONBA_PTR_SET_VALUE(upstreamInput_, upstreamInput) };
        inline DeploymentConfig& setUpstreamInput(vector<DeploymentConfig::UpstreamInput> && upstreamInput) { DARABONBA_PTR_SET_RVALUE(upstreamInput_, upstreamInput) };


      protected:
        shared_ptr<vector<DeploymentConfig::Deployment>> deployment_ {};
        shared_ptr<vector<DeploymentConfig::PublishOutput>> publishOutput_ {};
        shared_ptr<vector<DeploymentConfig::UpstreamInput>> upstreamInput_ {};
      };

      class ComponentConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentConfig& obj) { 
          DARABONBA_PTR_TO_JSON(component, component_);
          DARABONBA_PTR_TO_JSON(output, output_);
          DARABONBA_PTR_TO_JSON(variable, variable_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(component, component_);
          DARABONBA_PTR_FROM_JSON(output, output_);
          DARABONBA_PTR_FROM_JSON(variable, variable_);
        };
        ComponentConfig() = default ;
        ComponentConfig(const ComponentConfig &) = default ;
        ComponentConfig(ComponentConfig &&) = default ;
        ComponentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentConfig() = default ;
        ComponentConfig& operator=(const ComponentConfig &) = default ;
        ComponentConfig& operator=(ComponentConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Variable : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Variable& obj) { 
            DARABONBA_PTR_TO_JSON(default, default_);
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Variable& obj) { 
            DARABONBA_PTR_FROM_JSON(default, default_);
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Variable() = default ;
          Variable(const Variable &) = default ;
          Variable(Variable &&) = default ;
          Variable(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Variable() = default ;
          Variable& operator=(const Variable &) = default ;
          Variable& operator=(Variable &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->default_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
          // default Field Functions 
          bool hasDefault() const { return this->default_ != nullptr;};
          void deleteDefault() { this->default_ = nullptr;};
          inline string getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, "") };
          inline Variable& setDefault(string _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Variable& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Variable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Variable& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> default_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> type_ {};
        };

        class Output : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Output& obj) { 
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Output& obj) { 
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Output() = default ;
          Output(const Output &) = default ;
          Output(Output &&) = default ;
          Output(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Output() = default ;
          Output& operator=(const Output &) = default ;
          Output& operator=(Output &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Output& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Output& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Output& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        class Component : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Component& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Component& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Component() = default ;
          Component(const Component &) = default ;
          Component(Component &&) = default ;
          Component(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Component() = default ;
          Component& operator=(const Component &) = default ;
          Component& operator=(Component &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Component& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->component_ == nullptr
        && this->output_ == nullptr && this->variable_ == nullptr; };
        // component Field Functions 
        bool hasComponent() const { return this->component_ != nullptr;};
        void deleteComponent() { this->component_ = nullptr;};
        inline const vector<ComponentConfig::Component> & getComponent() const { DARABONBA_PTR_GET_CONST(component_, vector<ComponentConfig::Component>) };
        inline vector<ComponentConfig::Component> getComponent() { DARABONBA_PTR_GET(component_, vector<ComponentConfig::Component>) };
        inline ComponentConfig& setComponent(const vector<ComponentConfig::Component> & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
        inline ComponentConfig& setComponent(vector<ComponentConfig::Component> && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline const vector<ComponentConfig::Output> & getOutput() const { DARABONBA_PTR_GET_CONST(output_, vector<ComponentConfig::Output>) };
        inline vector<ComponentConfig::Output> getOutput() { DARABONBA_PTR_GET(output_, vector<ComponentConfig::Output>) };
        inline ComponentConfig& setOutput(const vector<ComponentConfig::Output> & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
        inline ComponentConfig& setOutput(vector<ComponentConfig::Output> && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


        // variable Field Functions 
        bool hasVariable() const { return this->variable_ != nullptr;};
        void deleteVariable() { this->variable_ = nullptr;};
        inline const vector<ComponentConfig::Variable> & getVariable() const { DARABONBA_PTR_GET_CONST(variable_, vector<ComponentConfig::Variable>) };
        inline vector<ComponentConfig::Variable> getVariable() { DARABONBA_PTR_GET(variable_, vector<ComponentConfig::Variable>) };
        inline ComponentConfig& setVariable(const vector<ComponentConfig::Variable> & variable) { DARABONBA_PTR_SET_VALUE(variable_, variable) };
        inline ComponentConfig& setVariable(vector<ComponentConfig::Variable> && variable) { DARABONBA_PTR_SET_RVALUE(variable_, variable) };


      protected:
        shared_ptr<vector<ComponentConfig::Component>> component_ {};
        shared_ptr<vector<ComponentConfig::Output>> output_ {};
        shared_ptr<vector<ComponentConfig::Variable>> variable_ {};
      };

      virtual bool empty() const override { return this->componentConfig_ == nullptr
        && this->componentContent_ == nullptr && this->createTime_ == nullptr && this->deploymentConfig_ == nullptr && this->deploymentContent_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr; };
      // componentConfig Field Functions 
      bool hasComponentConfig() const { return this->componentConfig_ != nullptr;};
      void deleteComponentConfig() { this->componentConfig_ = nullptr;};
      inline const Configs::ComponentConfig & getComponentConfig() const { DARABONBA_PTR_GET_CONST(componentConfig_, Configs::ComponentConfig) };
      inline Configs::ComponentConfig getComponentConfig() { DARABONBA_PTR_GET(componentConfig_, Configs::ComponentConfig) };
      inline Configs& setComponentConfig(const Configs::ComponentConfig & componentConfig) { DARABONBA_PTR_SET_VALUE(componentConfig_, componentConfig) };
      inline Configs& setComponentConfig(Configs::ComponentConfig && componentConfig) { DARABONBA_PTR_SET_RVALUE(componentConfig_, componentConfig) };


      // componentContent Field Functions 
      bool hasComponentContent() const { return this->componentContent_ != nullptr;};
      void deleteComponentContent() { this->componentContent_ = nullptr;};
      inline string getComponentContent() const { DARABONBA_PTR_GET_DEFAULT(componentContent_, "") };
      inline Configs& setComponentContent(string componentContent) { DARABONBA_PTR_SET_VALUE(componentContent_, componentContent) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Configs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deploymentConfig Field Functions 
      bool hasDeploymentConfig() const { return this->deploymentConfig_ != nullptr;};
      void deleteDeploymentConfig() { this->deploymentConfig_ = nullptr;};
      inline const Configs::DeploymentConfig & getDeploymentConfig() const { DARABONBA_PTR_GET_CONST(deploymentConfig_, Configs::DeploymentConfig) };
      inline Configs::DeploymentConfig getDeploymentConfig() { DARABONBA_PTR_GET(deploymentConfig_, Configs::DeploymentConfig) };
      inline Configs& setDeploymentConfig(const Configs::DeploymentConfig & deploymentConfig) { DARABONBA_PTR_SET_VALUE(deploymentConfig_, deploymentConfig) };
      inline Configs& setDeploymentConfig(Configs::DeploymentConfig && deploymentConfig) { DARABONBA_PTR_SET_RVALUE(deploymentConfig_, deploymentConfig) };


      // deploymentContent Field Functions 
      bool hasDeploymentContent() const { return this->deploymentContent_ != nullptr;};
      void deleteDeploymentContent() { this->deploymentContent_ = nullptr;};
      inline string getDeploymentContent() const { DARABONBA_PTR_GET_DEFAULT(deploymentContent_, "") };
      inline Configs& setDeploymentContent(string deploymentContent) { DARABONBA_PTR_SET_VALUE(deploymentContent_, deploymentContent) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Configs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Configs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<Configs::ComponentConfig> componentConfig_ {};
      shared_ptr<string> componentContent_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<Configs::DeploymentConfig> deploymentConfig_ {};
      shared_ptr<string> deploymentContent_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListStackConfigsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListStackConfigsResponseBody::Configs>) };
    inline vector<ListStackConfigsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListStackConfigsResponseBody::Configs>) };
    inline ListStackConfigsResponseBody& setConfigs(const vector<ListStackConfigsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListStackConfigsResponseBody& setConfigs(vector<ListStackConfigsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListStackConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStackConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListStackConfigsResponseBody::Configs>> configs_ {};
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
