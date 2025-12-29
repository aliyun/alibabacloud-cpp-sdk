// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAddonResponseBody() = default ;
    GetAddonResponseBody(const GetAddonResponseBody &) = default ;
    GetAddonResponseBody(GetAddonResponseBody &&) = default ;
    GetAddonResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBody() = default ;
    GetAddonResponseBody& operator=(const GetAddonResponseBody &) = default ;
    GetAddonResponseBody& operator=(GetAddonResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(categories, categories_);
        DARABONBA_PTR_TO_JSON(dashboards, dashboards_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(environments, environments_);
        DARABONBA_PTR_TO_JSON(icon, icon_);
        DARABONBA_PTR_TO_JSON(keywords, keywords_);
        DARABONBA_PTR_TO_JSON(language, language_);
        DARABONBA_PTR_TO_JSON(latestReleaseCreateTime, latestReleaseCreateTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(once, once_);
        DARABONBA_PTR_TO_JSON(scene, scene_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(categories, categories_);
        DARABONBA_PTR_FROM_JSON(dashboards, dashboards_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(environments, environments_);
        DARABONBA_PTR_FROM_JSON(icon, icon_);
        DARABONBA_PTR_FROM_JSON(keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(language, language_);
        DARABONBA_PTR_FROM_JSON(latestReleaseCreateTime, latestReleaseCreateTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(once, once_);
        DARABONBA_PTR_FROM_JSON(scene, scene_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
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
      class Environments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Environments& obj) { 
          DARABONBA_PTR_TO_JSON(commonSchemaRefs, commonSchemaRefs_);
          DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(label, label_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(policies, policies_);
          DARABONBA_PTR_TO_JSON(policyType, policyType_);
        };
        friend void from_json(const Darabonba::Json& j, Environments& obj) { 
          DARABONBA_PTR_FROM_JSON(commonSchemaRefs, commonSchemaRefs_);
          DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(label, label_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(policies, policies_);
          DARABONBA_PTR_FROM_JSON(policyType, policyType_);
        };
        Environments() = default ;
        Environments(const Environments &) = default ;
        Environments(Environments &&) = default ;
        Environments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Environments() = default ;
        Environments& operator=(const Environments &) = default ;
        Environments& operator=(Environments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Policies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Policies& obj) { 
            DARABONBA_PTR_TO_JSON(alertDefaultStatus, alertDefaultStatus_);
            DARABONBA_PTR_TO_JSON(defaultInstall, defaultInstall_);
            DARABONBA_PTR_TO_JSON(enableServiceAccount, enableServiceAccount_);
            DARABONBA_PTR_TO_JSON(metricCheckRule, metricCheckRule_);
            DARABONBA_PTR_TO_JSON(needRestartAfterIntegration, needRestartAfterIntegration_);
            DARABONBA_PTR_TO_JSON(protocols, protocols_);
            DARABONBA_PTR_TO_JSON(targetAddonName, targetAddonName_);
          };
          friend void from_json(const Darabonba::Json& j, Policies& obj) { 
            DARABONBA_PTR_FROM_JSON(alertDefaultStatus, alertDefaultStatus_);
            DARABONBA_PTR_FROM_JSON(defaultInstall, defaultInstall_);
            DARABONBA_PTR_FROM_JSON(enableServiceAccount, enableServiceAccount_);
            DARABONBA_PTR_FROM_JSON(metricCheckRule, metricCheckRule_);
            DARABONBA_PTR_FROM_JSON(needRestartAfterIntegration, needRestartAfterIntegration_);
            DARABONBA_PTR_FROM_JSON(protocols, protocols_);
            DARABONBA_PTR_FROM_JSON(targetAddonName, targetAddonName_);
          };
          Policies() = default ;
          Policies(const Policies &) = default ;
          Policies(Policies &&) = default ;
          Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Policies() = default ;
          Policies& operator=(const Policies &) = default ;
          Policies& operator=(Policies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Protocols : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Protocols& obj) { 
              DARABONBA_PTR_TO_JSON(description, description_);
              DARABONBA_PTR_TO_JSON(icon, icon_);
              DARABONBA_PTR_TO_JSON(label, label_);
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Protocols& obj) { 
              DARABONBA_PTR_FROM_JSON(description, description_);
              DARABONBA_PTR_FROM_JSON(icon, icon_);
              DARABONBA_PTR_FROM_JSON(label, label_);
              DARABONBA_PTR_FROM_JSON(name, name_);
            };
            Protocols() = default ;
            Protocols(const Protocols &) = default ;
            Protocols(Protocols &&) = default ;
            Protocols(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Protocols() = default ;
            Protocols& operator=(const Protocols &) = default ;
            Protocols& operator=(Protocols &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->icon_ == nullptr && this->label_ == nullptr && this->name_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Protocols& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // icon Field Functions 
            bool hasIcon() const { return this->icon_ != nullptr;};
            void deleteIcon() { this->icon_ = nullptr;};
            inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
            inline Protocols& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline Protocols& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Protocols& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> description_ {};
            shared_ptr<string> icon_ {};
            shared_ptr<string> label_ {};
            shared_ptr<string> name_ {};
          };

          class MetricCheckRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MetricCheckRule& obj) { 
              DARABONBA_PTR_TO_JSON(promQL, promQL_);
            };
            friend void from_json(const Darabonba::Json& j, MetricCheckRule& obj) { 
              DARABONBA_PTR_FROM_JSON(promQL, promQL_);
            };
            MetricCheckRule() = default ;
            MetricCheckRule(const MetricCheckRule &) = default ;
            MetricCheckRule(MetricCheckRule &&) = default ;
            MetricCheckRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MetricCheckRule() = default ;
            MetricCheckRule& operator=(const MetricCheckRule &) = default ;
            MetricCheckRule& operator=(MetricCheckRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->promQL_ == nullptr; };
            // promQL Field Functions 
            bool hasPromQL() const { return this->promQL_ != nullptr;};
            void deletePromQL() { this->promQL_ = nullptr;};
            inline const vector<string> & getPromQL() const { DARABONBA_PTR_GET_CONST(promQL_, vector<string>) };
            inline vector<string> getPromQL() { DARABONBA_PTR_GET(promQL_, vector<string>) };
            inline MetricCheckRule& setPromQL(const vector<string> & promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };
            inline MetricCheckRule& setPromQL(vector<string> && promQL) { DARABONBA_PTR_SET_RVALUE(promQL_, promQL) };


          protected:
            shared_ptr<vector<string>> promQL_ {};
          };

          virtual bool empty() const override { return this->alertDefaultStatus_ == nullptr
        && this->defaultInstall_ == nullptr && this->enableServiceAccount_ == nullptr && this->metricCheckRule_ == nullptr && this->needRestartAfterIntegration_ == nullptr && this->protocols_ == nullptr
        && this->targetAddonName_ == nullptr; };
          // alertDefaultStatus Field Functions 
          bool hasAlertDefaultStatus() const { return this->alertDefaultStatus_ != nullptr;};
          void deleteAlertDefaultStatus() { this->alertDefaultStatus_ = nullptr;};
          inline string getAlertDefaultStatus() const { DARABONBA_PTR_GET_DEFAULT(alertDefaultStatus_, "") };
          inline Policies& setAlertDefaultStatus(string alertDefaultStatus) { DARABONBA_PTR_SET_VALUE(alertDefaultStatus_, alertDefaultStatus) };


          // defaultInstall Field Functions 
          bool hasDefaultInstall() const { return this->defaultInstall_ != nullptr;};
          void deleteDefaultInstall() { this->defaultInstall_ = nullptr;};
          inline bool getDefaultInstall() const { DARABONBA_PTR_GET_DEFAULT(defaultInstall_, false) };
          inline Policies& setDefaultInstall(bool defaultInstall) { DARABONBA_PTR_SET_VALUE(defaultInstall_, defaultInstall) };


          // enableServiceAccount Field Functions 
          bool hasEnableServiceAccount() const { return this->enableServiceAccount_ != nullptr;};
          void deleteEnableServiceAccount() { this->enableServiceAccount_ = nullptr;};
          inline bool getEnableServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(enableServiceAccount_, false) };
          inline Policies& setEnableServiceAccount(bool enableServiceAccount) { DARABONBA_PTR_SET_VALUE(enableServiceAccount_, enableServiceAccount) };


          // metricCheckRule Field Functions 
          bool hasMetricCheckRule() const { return this->metricCheckRule_ != nullptr;};
          void deleteMetricCheckRule() { this->metricCheckRule_ = nullptr;};
          inline const Policies::MetricCheckRule & getMetricCheckRule() const { DARABONBA_PTR_GET_CONST(metricCheckRule_, Policies::MetricCheckRule) };
          inline Policies::MetricCheckRule getMetricCheckRule() { DARABONBA_PTR_GET(metricCheckRule_, Policies::MetricCheckRule) };
          inline Policies& setMetricCheckRule(const Policies::MetricCheckRule & metricCheckRule) { DARABONBA_PTR_SET_VALUE(metricCheckRule_, metricCheckRule) };
          inline Policies& setMetricCheckRule(Policies::MetricCheckRule && metricCheckRule) { DARABONBA_PTR_SET_RVALUE(metricCheckRule_, metricCheckRule) };


          // needRestartAfterIntegration Field Functions 
          bool hasNeedRestartAfterIntegration() const { return this->needRestartAfterIntegration_ != nullptr;};
          void deleteNeedRestartAfterIntegration() { this->needRestartAfterIntegration_ = nullptr;};
          inline bool getNeedRestartAfterIntegration() const { DARABONBA_PTR_GET_DEFAULT(needRestartAfterIntegration_, false) };
          inline Policies& setNeedRestartAfterIntegration(bool needRestartAfterIntegration) { DARABONBA_PTR_SET_VALUE(needRestartAfterIntegration_, needRestartAfterIntegration) };


          // protocols Field Functions 
          bool hasProtocols() const { return this->protocols_ != nullptr;};
          void deleteProtocols() { this->protocols_ = nullptr;};
          inline const vector<Policies::Protocols> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<Policies::Protocols>) };
          inline vector<Policies::Protocols> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<Policies::Protocols>) };
          inline Policies& setProtocols(const vector<Policies::Protocols> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
          inline Policies& setProtocols(vector<Policies::Protocols> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


          // targetAddonName Field Functions 
          bool hasTargetAddonName() const { return this->targetAddonName_ != nullptr;};
          void deleteTargetAddonName() { this->targetAddonName_ = nullptr;};
          inline string getTargetAddonName() const { DARABONBA_PTR_GET_DEFAULT(targetAddonName_, "") };
          inline Policies& setTargetAddonName(string targetAddonName) { DARABONBA_PTR_SET_VALUE(targetAddonName_, targetAddonName) };


        protected:
          shared_ptr<string> alertDefaultStatus_ {};
          shared_ptr<bool> defaultInstall_ {};
          shared_ptr<bool> enableServiceAccount_ {};
          shared_ptr<Policies::MetricCheckRule> metricCheckRule_ {};
          shared_ptr<bool> needRestartAfterIntegration_ {};
          shared_ptr<vector<Policies::Protocols>> protocols_ {};
          shared_ptr<string> targetAddonName_ {};
        };

        class Dependencies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Dependencies& obj) { 
            DARABONBA_PTR_TO_JSON(clusterTypes, clusterTypes_);
            DARABONBA_PTR_TO_JSON(features, features_);
            DARABONBA_PTR_TO_JSON(services, services_);
          };
          friend void from_json(const Darabonba::Json& j, Dependencies& obj) { 
            DARABONBA_PTR_FROM_JSON(clusterTypes, clusterTypes_);
            DARABONBA_PTR_FROM_JSON(features, features_);
            DARABONBA_PTR_FROM_JSON(services, services_);
          };
          Dependencies() = default ;
          Dependencies(const Dependencies &) = default ;
          Dependencies(Dependencies &&) = default ;
          Dependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Dependencies() = default ;
          Dependencies& operator=(const Dependencies &) = default ;
          Dependencies& operator=(Dependencies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clusterTypes_ == nullptr
        && this->features_ == nullptr && this->services_ == nullptr; };
          // clusterTypes Field Functions 
          bool hasClusterTypes() const { return this->clusterTypes_ != nullptr;};
          void deleteClusterTypes() { this->clusterTypes_ = nullptr;};
          inline const vector<string> & getClusterTypes() const { DARABONBA_PTR_GET_CONST(clusterTypes_, vector<string>) };
          inline vector<string> getClusterTypes() { DARABONBA_PTR_GET(clusterTypes_, vector<string>) };
          inline Dependencies& setClusterTypes(const vector<string> & clusterTypes) { DARABONBA_PTR_SET_VALUE(clusterTypes_, clusterTypes) };
          inline Dependencies& setClusterTypes(vector<string> && clusterTypes) { DARABONBA_PTR_SET_RVALUE(clusterTypes_, clusterTypes) };


          // features Field Functions 
          bool hasFeatures() const { return this->features_ != nullptr;};
          void deleteFeatures() { this->features_ = nullptr;};
          inline const map<string, bool> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, map<string, bool>) };
          inline map<string, bool> getFeatures() { DARABONBA_PTR_GET(features_, map<string, bool>) };
          inline Dependencies& setFeatures(const map<string, bool> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
          inline Dependencies& setFeatures(map<string, bool> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


          // services Field Functions 
          bool hasServices() const { return this->services_ != nullptr;};
          void deleteServices() { this->services_ = nullptr;};
          inline const vector<string> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<string>) };
          inline vector<string> getServices() { DARABONBA_PTR_GET(services_, vector<string>) };
          inline Dependencies& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
          inline Dependencies& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


        protected:
          shared_ptr<vector<string>> clusterTypes_ {};
          shared_ptr<map<string, bool>> features_ {};
          shared_ptr<vector<string>> services_ {};
        };

        class CommonSchemaRefs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommonSchemaRefs& obj) { 
            DARABONBA_PTR_TO_JSON(group, group_);
            DARABONBA_PTR_TO_JSON(version, version_);
          };
          friend void from_json(const Darabonba::Json& j, CommonSchemaRefs& obj) { 
            DARABONBA_PTR_FROM_JSON(group, group_);
            DARABONBA_PTR_FROM_JSON(version, version_);
          };
          CommonSchemaRefs() = default ;
          CommonSchemaRefs(const CommonSchemaRefs &) = default ;
          CommonSchemaRefs(CommonSchemaRefs &&) = default ;
          CommonSchemaRefs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CommonSchemaRefs() = default ;
          CommonSchemaRefs& operator=(const CommonSchemaRefs &) = default ;
          CommonSchemaRefs& operator=(CommonSchemaRefs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->group_ == nullptr
        && this->version_ == nullptr; };
          // group Field Functions 
          bool hasGroup() const { return this->group_ != nullptr;};
          void deleteGroup() { this->group_ = nullptr;};
          inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
          inline CommonSchemaRefs& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline CommonSchemaRefs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<string> group_ {};
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->commonSchemaRefs_ == nullptr
        && this->dependencies_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->label_ == nullptr && this->name_ == nullptr
        && this->policies_ == nullptr && this->policyType_ == nullptr; };
        // commonSchemaRefs Field Functions 
        bool hasCommonSchemaRefs() const { return this->commonSchemaRefs_ != nullptr;};
        void deleteCommonSchemaRefs() { this->commonSchemaRefs_ = nullptr;};
        inline const vector<Environments::CommonSchemaRefs> & getCommonSchemaRefs() const { DARABONBA_PTR_GET_CONST(commonSchemaRefs_, vector<Environments::CommonSchemaRefs>) };
        inline vector<Environments::CommonSchemaRefs> getCommonSchemaRefs() { DARABONBA_PTR_GET(commonSchemaRefs_, vector<Environments::CommonSchemaRefs>) };
        inline Environments& setCommonSchemaRefs(const vector<Environments::CommonSchemaRefs> & commonSchemaRefs) { DARABONBA_PTR_SET_VALUE(commonSchemaRefs_, commonSchemaRefs) };
        inline Environments& setCommonSchemaRefs(vector<Environments::CommonSchemaRefs> && commonSchemaRefs) { DARABONBA_PTR_SET_RVALUE(commonSchemaRefs_, commonSchemaRefs) };


        // dependencies Field Functions 
        bool hasDependencies() const { return this->dependencies_ != nullptr;};
        void deleteDependencies() { this->dependencies_ = nullptr;};
        inline const Environments::Dependencies & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, Environments::Dependencies) };
        inline Environments::Dependencies getDependencies() { DARABONBA_PTR_GET(dependencies_, Environments::Dependencies) };
        inline Environments& setDependencies(const Environments::Dependencies & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
        inline Environments& setDependencies(Environments::Dependencies && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Environments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Environments& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Environments& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Environments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policies Field Functions 
        bool hasPolicies() const { return this->policies_ != nullptr;};
        void deletePolicies() { this->policies_ = nullptr;};
        inline const Environments::Policies & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, Environments::Policies) };
        inline Environments::Policies getPolicies() { DARABONBA_PTR_GET(policies_, Environments::Policies) };
        inline Environments& setPolicies(const Environments::Policies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
        inline Environments& setPolicies(Environments::Policies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline Environments& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      protected:
        shared_ptr<vector<Environments::CommonSchemaRefs>> commonSchemaRefs_ {};
        shared_ptr<Environments::Dependencies> dependencies_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<string> label_ {};
        shared_ptr<string> name_ {};
        shared_ptr<Environments::Policies> policies_ {};
        shared_ptr<string> policyType_ {};
      };

      class Dashboards : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dashboards& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Dashboards& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Dashboards() = default ;
        Dashboards(const Dashboards &) = default ;
        Dashboards(Dashboards &&) = default ;
        Dashboards(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dashboards() = default ;
        Dashboards& operator=(const Dashboards &) = default ;
        Dashboards& operator=(Dashboards &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->url_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Dashboards& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Dashboards& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Dashboards& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->categories_ == nullptr && this->dashboards_ == nullptr && this->description_ == nullptr && this->environments_ == nullptr && this->icon_ == nullptr
        && this->keywords_ == nullptr && this->language_ == nullptr && this->latestReleaseCreateTime_ == nullptr && this->name_ == nullptr && this->once_ == nullptr
        && this->scene_ == nullptr && this->version_ == nullptr && this->weight_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Data& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline Data& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline Data& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // dashboards Field Functions 
      bool hasDashboards() const { return this->dashboards_ != nullptr;};
      void deleteDashboards() { this->dashboards_ = nullptr;};
      inline const vector<Data::Dashboards> & getDashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<Data::Dashboards>) };
      inline vector<Data::Dashboards> getDashboards() { DARABONBA_PTR_GET(dashboards_, vector<Data::Dashboards>) };
      inline Data& setDashboards(const vector<Data::Dashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
      inline Data& setDashboards(vector<Data::Dashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // environments Field Functions 
      bool hasEnvironments() const { return this->environments_ != nullptr;};
      void deleteEnvironments() { this->environments_ = nullptr;};
      inline const vector<Data::Environments> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<Data::Environments>) };
      inline vector<Data::Environments> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<Data::Environments>) };
      inline Data& setEnvironments(const vector<Data::Environments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
      inline Data& setEnvironments(vector<Data::Environments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Data& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
      inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
      inline Data& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
      inline Data& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Data& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // latestReleaseCreateTime Field Functions 
      bool hasLatestReleaseCreateTime() const { return this->latestReleaseCreateTime_ != nullptr;};
      void deleteLatestReleaseCreateTime() { this->latestReleaseCreateTime_ = nullptr;};
      inline string getLatestReleaseCreateTime() const { DARABONBA_PTR_GET_DEFAULT(latestReleaseCreateTime_, "") };
      inline Data& setLatestReleaseCreateTime(string latestReleaseCreateTime) { DARABONBA_PTR_SET_VALUE(latestReleaseCreateTime_, latestReleaseCreateTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // once Field Functions 
      bool hasOnce() const { return this->once_ != nullptr;};
      void deleteOnce() { this->once_ = nullptr;};
      inline bool getOnce() const { DARABONBA_PTR_GET_DEFAULT(once_, false) };
      inline Data& setOnce(bool once) { DARABONBA_PTR_SET_VALUE(once_, once) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Data& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
      inline Data& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<vector<string>> categories_ {};
      shared_ptr<vector<Data::Dashboards>> dashboards_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<Data::Environments>> environments_ {};
      shared_ptr<string> icon_ {};
      shared_ptr<vector<string>> keywords_ {};
      shared_ptr<string> language_ {};
      shared_ptr<string> latestReleaseCreateTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> once_ {};
      shared_ptr<string> scene_ {};
      shared_ptr<string> version_ {};
      shared_ptr<string> weight_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAddonResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAddonResponseBody::Data) };
    inline GetAddonResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAddonResponseBody::Data) };
    inline GetAddonResponseBody& setData(const GetAddonResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAddonResponseBody& setData(GetAddonResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAddonResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
