// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListNodePoolComponentInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePoolComponentInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(component_instances, componentInstances_);
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePoolComponentInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(component_instances, componentInstances_);
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
    };
    ListNodePoolComponentInstancesResponseBody() = default ;
    ListNodePoolComponentInstancesResponseBody(const ListNodePoolComponentInstancesResponseBody &) = default ;
    ListNodePoolComponentInstancesResponseBody(ListNodePoolComponentInstancesResponseBody &&) = default ;
    ListNodePoolComponentInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePoolComponentInstancesResponseBody() = default ;
    ListNodePoolComponentInstancesResponseBody& operator=(const ListNodePoolComponentInstancesResponseBody &) = default ;
    ListNodePoolComponentInstancesResponseBody& operator=(ListNodePoolComponentInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComponentInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentInstances& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(config_revision, configRevision_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(config_revision, configRevision_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      ComponentInstances() = default ;
      ComponentInstances(const ComponentInstances &) = default ;
      ComponentInstances(ComponentInstances &&) = default ;
      ComponentInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentInstances() = default ;
      ComponentInstances& operator=(const ComponentInstances &) = default ;
      ComponentInstances& operator=(ComponentInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_ANY_TO_JSON(custom_config, customConfig_);
          DARABONBA_PTR_TO_JSON(envs, envs_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_ANY_FROM_JSON(custom_config, customConfig_);
          DARABONBA_PTR_FROM_JSON(envs, envs_);
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
        class Envs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Envs& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Envs& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Envs() = default ;
          Envs(const Envs &) = default ;
          Envs(Envs &&) = default ;
          Envs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Envs() = default ;
          Envs& operator=(const Envs &) = default ;
          Envs& operator=(Envs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Envs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Envs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the environment variable.
          shared_ptr<string> name_ {};
          // The value of the environment variable.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->customConfig_ == nullptr
        && this->envs_ == nullptr; };
        // customConfig Field Functions 
        bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
        void deleteCustomConfig() { this->customConfig_ = nullptr;};
        inline         const Darabonba::Json & getCustomConfig() const { DARABONBA_GET(customConfig_) };
        Darabonba::Json & getCustomConfig() { DARABONBA_GET(customConfig_) };
        inline Config& setCustomConfig(const Darabonba::Json & customConfig) { DARABONBA_SET_VALUE(customConfig_, customConfig) };
        inline Config& setCustomConfig(Darabonba::Json && customConfig) { DARABONBA_SET_RVALUE(customConfig_, customConfig) };


        // envs Field Functions 
        bool hasEnvs() const { return this->envs_ != nullptr;};
        void deleteEnvs() { this->envs_ = nullptr;};
        inline const vector<Config::Envs> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<Config::Envs>) };
        inline vector<Config::Envs> getEnvs() { DARABONBA_PTR_GET(envs_, vector<Config::Envs>) };
        inline Config& setEnvs(const vector<Config::Envs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
        inline Config& setEnvs(vector<Config::Envs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


      protected:
        // The custom configuration of the component.
        Darabonba::Json customConfig_ {};
        // The environment variables of the node component.
        shared_ptr<vector<Config::Envs>> envs_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->configRevision_ == nullptr && this->name_ == nullptr && this->state_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const ComponentInstances::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, ComponentInstances::Config) };
      inline ComponentInstances::Config getConfig() { DARABONBA_PTR_GET(config_, ComponentInstances::Config) };
      inline ComponentInstances& setConfig(const ComponentInstances::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline ComponentInstances& setConfig(ComponentInstances::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // configRevision Field Functions 
      bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
      void deleteConfigRevision() { this->configRevision_ = nullptr;};
      inline string getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, "") };
      inline ComponentInstances& setConfigRevision(string configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ComponentInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ComponentInstances& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ComponentInstances& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The configuration of the component.
      shared_ptr<ComponentInstances::Config> config_ {};
      // The version number of the component configuration.
      shared_ptr<string> configRevision_ {};
      // The name of the component.
      shared_ptr<string> name_ {};
      // The state of the component.
      shared_ptr<string> state_ {};
      // The version of the component.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->componentInstances_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // componentInstances Field Functions 
    bool hasComponentInstances() const { return this->componentInstances_ != nullptr;};
    void deleteComponentInstances() { this->componentInstances_ = nullptr;};
    inline const vector<ListNodePoolComponentInstancesResponseBody::ComponentInstances> & getComponentInstances() const { DARABONBA_PTR_GET_CONST(componentInstances_, vector<ListNodePoolComponentInstancesResponseBody::ComponentInstances>) };
    inline vector<ListNodePoolComponentInstancesResponseBody::ComponentInstances> getComponentInstances() { DARABONBA_PTR_GET(componentInstances_, vector<ListNodePoolComponentInstancesResponseBody::ComponentInstances>) };
    inline ListNodePoolComponentInstancesResponseBody& setComponentInstances(const vector<ListNodePoolComponentInstancesResponseBody::ComponentInstances> & componentInstances) { DARABONBA_PTR_SET_VALUE(componentInstances_, componentInstances) };
    inline ListNodePoolComponentInstancesResponseBody& setComponentInstances(vector<ListNodePoolComponentInstancesResponseBody::ComponentInstances> && componentInstances) { DARABONBA_PTR_SET_RVALUE(componentInstances_, componentInstances) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodePoolComponentInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodePoolComponentInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The list of node component instances.
    shared_ptr<vector<ListNodePoolComponentInstancesResponseBody::ComponentInstances>> componentInstances_ {};
    // The maximum number of results to return. Default value: 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
