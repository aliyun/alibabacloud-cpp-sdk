// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELAPILISTAPIINFO_HPP_
#define ALIBABACLOUD_MODELS_MODELAPILISTAPIINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelSelection.hpp>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
#include <alibabacloud/models/HttpApiDomainInfo.hpp>
#include <alibabacloud/models/AuthConfig.hpp>
#include <map>
#include <alibabacloud/models/ModelApiListApiInfoDeployCntMapValue.hpp>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/ModelApiDomainInfo.hpp>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <alibabacloud/models/ModelApiPolicyConfig.hpp>
#include <alibabacloud/models/HttpApiVersionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ModelApiListApiInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelApiListApiInfo& obj) { 
      DARABONBA_PTR_TO_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_TO_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(creationClientToken, creationClientToken_);
      DARABONBA_PTR_TO_JSON(deleteStatus, deleteStatus_);
      DARABONBA_PTR_TO_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(deployErrorMessage, deployErrorMessage_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(ingressInfo, ingressInfo_);
      DARABONBA_PTR_TO_JSON(modelApiInfo, modelApiInfo_);
      DARABONBA_PTR_TO_JSON(modelCardRuntimeDiagnostics, modelCardRuntimeDiagnostics_);
      DARABONBA_PTR_TO_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(versionInfo, versionInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModelApiListApiInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_FROM_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(creationClientToken, creationClientToken_);
      DARABONBA_PTR_FROM_JSON(deleteStatus, deleteStatus_);
      DARABONBA_PTR_FROM_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(deployErrorMessage, deployErrorMessage_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(ingressInfo, ingressInfo_);
      DARABONBA_PTR_FROM_JSON(modelApiInfo, modelApiInfo_);
      DARABONBA_PTR_FROM_JSON(modelCardRuntimeDiagnostics, modelCardRuntimeDiagnostics_);
      DARABONBA_PTR_FROM_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(versionInfo, versionInfo_);
    };
    ModelApiListApiInfo() = default ;
    ModelApiListApiInfo(const ModelApiListApiInfo &) = default ;
    ModelApiListApiInfo(ModelApiListApiInfo &&) = default ;
    ModelApiListApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelApiListApiInfo() = default ;
    ModelApiListApiInfo& operator=(const ModelApiListApiInfo &) = default ;
    ModelApiListApiInfo& operator=(ModelApiListApiInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelCardRuntimeDiagnostics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelCardRuntimeDiagnostics& obj) { 
        DARABONBA_PTR_TO_JSON(deployConfigIndex, deployConfigIndex_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(invalidConfiguration, invalidConfiguration_);
        DARABONBA_PTR_TO_JSON(reasons, reasons_);
      };
      friend void from_json(const Darabonba::Json& j, ModelCardRuntimeDiagnostics& obj) { 
        DARABONBA_PTR_FROM_JSON(deployConfigIndex, deployConfigIndex_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(invalidConfiguration, invalidConfiguration_);
        DARABONBA_PTR_FROM_JSON(reasons, reasons_);
      };
      ModelCardRuntimeDiagnostics() = default ;
      ModelCardRuntimeDiagnostics(const ModelCardRuntimeDiagnostics &) = default ;
      ModelCardRuntimeDiagnostics(ModelCardRuntimeDiagnostics &&) = default ;
      ModelCardRuntimeDiagnostics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelCardRuntimeDiagnostics() = default ;
      ModelCardRuntimeDiagnostics& operator=(const ModelCardRuntimeDiagnostics &) = default ;
      ModelCardRuntimeDiagnostics& operator=(ModelCardRuntimeDiagnostics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deployConfigIndex_ == nullptr
        && this->gatewayId_ == nullptr && this->invalidConfiguration_ == nullptr && this->reasons_ == nullptr; };
      // deployConfigIndex Field Functions 
      bool hasDeployConfigIndex() const { return this->deployConfigIndex_ != nullptr;};
      void deleteDeployConfigIndex() { this->deployConfigIndex_ = nullptr;};
      inline int32_t getDeployConfigIndex() const { DARABONBA_PTR_GET_DEFAULT(deployConfigIndex_, 0) };
      inline ModelCardRuntimeDiagnostics& setDeployConfigIndex(int32_t deployConfigIndex) { DARABONBA_PTR_SET_VALUE(deployConfigIndex_, deployConfigIndex) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline ModelCardRuntimeDiagnostics& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // invalidConfiguration Field Functions 
      bool hasInvalidConfiguration() const { return this->invalidConfiguration_ != nullptr;};
      void deleteInvalidConfiguration() { this->invalidConfiguration_ = nullptr;};
      inline bool getInvalidConfiguration() const { DARABONBA_PTR_GET_DEFAULT(invalidConfiguration_, false) };
      inline ModelCardRuntimeDiagnostics& setInvalidConfiguration(bool invalidConfiguration) { DARABONBA_PTR_SET_VALUE(invalidConfiguration_, invalidConfiguration) };


      // reasons Field Functions 
      bool hasReasons() const { return this->reasons_ != nullptr;};
      void deleteReasons() { this->reasons_ = nullptr;};
      inline const vector<string> & getReasons() const { DARABONBA_PTR_GET_CONST(reasons_, vector<string>) };
      inline vector<string> getReasons() { DARABONBA_PTR_GET(reasons_, vector<string>) };
      inline ModelCardRuntimeDiagnostics& setReasons(const vector<string> & reasons) { DARABONBA_PTR_SET_VALUE(reasons_, reasons) };
      inline ModelCardRuntimeDiagnostics& setReasons(vector<string> && reasons) { DARABONBA_PTR_SET_RVALUE(reasons_, reasons) };


    protected:
      // The index of the corresponding deployment configuration.
      shared_ptr<int32_t> deployConfigIndex_ {};
      // The gateway instance ID.
      shared_ptr<string> gatewayId_ {};
      // Indicates whether the marker of the deployment configuration is invalid.
      shared_ptr<bool> invalidConfiguration_ {};
      // The list of reasons for invalidity.
      shared_ptr<vector<string>> reasons_ {};
    };

    class ModelApiInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelApiInfo& obj) { 
        DARABONBA_PTR_TO_JSON(directSupplyFallbackEnabled, directSupplyFallbackEnabled_);
        DARABONBA_PTR_TO_JSON(exposureMode, exposureMode_);
        DARABONBA_PTR_TO_JSON(modelSelection, modelSelection_);
        DARABONBA_PTR_TO_JSON(resolvedModelSelection, resolvedModelSelection_);
        DARABONBA_PTR_TO_JSON(routingMode, routingMode_);
      };
      friend void from_json(const Darabonba::Json& j, ModelApiInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(directSupplyFallbackEnabled, directSupplyFallbackEnabled_);
        DARABONBA_PTR_FROM_JSON(exposureMode, exposureMode_);
        DARABONBA_PTR_FROM_JSON(modelSelection, modelSelection_);
        DARABONBA_PTR_FROM_JSON(resolvedModelSelection, resolvedModelSelection_);
        DARABONBA_PTR_FROM_JSON(routingMode, routingMode_);
      };
      ModelApiInfo() = default ;
      ModelApiInfo(const ModelApiInfo &) = default ;
      ModelApiInfo(ModelApiInfo &&) = default ;
      ModelApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelApiInfo() = default ;
      ModelApiInfo& operator=(const ModelApiInfo &) = default ;
      ModelApiInfo& operator=(ModelApiInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResolvedModelSelection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResolvedModelSelection& obj) { 
          DARABONBA_PTR_TO_JSON(complete, complete_);
          DARABONBA_PTR_TO_JSON(modelCardIds, modelCardIds_);
        };
        friend void from_json(const Darabonba::Json& j, ResolvedModelSelection& obj) { 
          DARABONBA_PTR_FROM_JSON(complete, complete_);
          DARABONBA_PTR_FROM_JSON(modelCardIds, modelCardIds_);
        };
        ResolvedModelSelection() = default ;
        ResolvedModelSelection(const ResolvedModelSelection &) = default ;
        ResolvedModelSelection(ResolvedModelSelection &&) = default ;
        ResolvedModelSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResolvedModelSelection() = default ;
        ResolvedModelSelection& operator=(const ResolvedModelSelection &) = default ;
        ResolvedModelSelection& operator=(ResolvedModelSelection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->complete_ == nullptr
        && this->modelCardIds_ == nullptr; };
        // complete Field Functions 
        bool hasComplete() const { return this->complete_ != nullptr;};
        void deleteComplete() { this->complete_ = nullptr;};
        inline bool getComplete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
        inline ResolvedModelSelection& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


        // modelCardIds Field Functions 
        bool hasModelCardIds() const { return this->modelCardIds_ != nullptr;};
        void deleteModelCardIds() { this->modelCardIds_ = nullptr;};
        inline const vector<string> & getModelCardIds() const { DARABONBA_PTR_GET_CONST(modelCardIds_, vector<string>) };
        inline vector<string> getModelCardIds() { DARABONBA_PTR_GET(modelCardIds_, vector<string>) };
        inline ResolvedModelSelection& setModelCardIds(const vector<string> & modelCardIds) { DARABONBA_PTR_SET_VALUE(modelCardIds_, modelCardIds) };
        inline ResolvedModelSelection& setModelCardIds(vector<string> && modelCardIds) { DARABONBA_PTR_SET_RVALUE(modelCardIds_, modelCardIds) };


      protected:
        // Indicates whether the group expansion collection for the current configuration is completely read. A complete empty group returns true and an empty array. A missing, invalid group, or read failure returns false. This does not represent the online release or consumer permission status.
        shared_ptr<bool> complete_ {};
        // The model card IDs of the publicly selected models for the current configuration, stably sorted and deduplicated. Logical models retain their own IDs, excluding fallback-only targets or underlying execution cards of logical models. If complete is false, this is an empty array and must not be interpreted as zero models.
        shared_ptr<vector<string>> modelCardIds_ {};
      };

      virtual bool empty() const override { return this->directSupplyFallbackEnabled_ == nullptr
        && this->exposureMode_ == nullptr && this->modelSelection_ == nullptr && this->resolvedModelSelection_ == nullptr && this->routingMode_ == nullptr; };
      // directSupplyFallbackEnabled Field Functions 
      bool hasDirectSupplyFallbackEnabled() const { return this->directSupplyFallbackEnabled_ != nullptr;};
      void deleteDirectSupplyFallbackEnabled() { this->directSupplyFallbackEnabled_ = nullptr;};
      inline bool getDirectSupplyFallbackEnabled() const { DARABONBA_PTR_GET_DEFAULT(directSupplyFallbackEnabled_, false) };
      inline ModelApiInfo& setDirectSupplyFallbackEnabled(bool directSupplyFallbackEnabled) { DARABONBA_PTR_SET_VALUE(directSupplyFallbackEnabled_, directSupplyFallbackEnabled) };


      // exposureMode Field Functions 
      bool hasExposureMode() const { return this->exposureMode_ != nullptr;};
      void deleteExposureMode() { this->exposureMode_ = nullptr;};
      inline string getExposureMode() const { DARABONBA_PTR_GET_DEFAULT(exposureMode_, "") };
      inline ModelApiInfo& setExposureMode(string exposureMode) { DARABONBA_PTR_SET_VALUE(exposureMode_, exposureMode) };


      // modelSelection Field Functions 
      bool hasModelSelection() const { return this->modelSelection_ != nullptr;};
      void deleteModelSelection() { this->modelSelection_ = nullptr;};
      inline const ModelSelection & getModelSelection() const { DARABONBA_PTR_GET_CONST(modelSelection_, ModelSelection) };
      inline ModelSelection getModelSelection() { DARABONBA_PTR_GET(modelSelection_, ModelSelection) };
      inline ModelApiInfo& setModelSelection(const ModelSelection & modelSelection) { DARABONBA_PTR_SET_VALUE(modelSelection_, modelSelection) };
      inline ModelApiInfo& setModelSelection(ModelSelection && modelSelection) { DARABONBA_PTR_SET_RVALUE(modelSelection_, modelSelection) };


      // resolvedModelSelection Field Functions 
      bool hasResolvedModelSelection() const { return this->resolvedModelSelection_ != nullptr;};
      void deleteResolvedModelSelection() { this->resolvedModelSelection_ = nullptr;};
      inline const ModelApiInfo::ResolvedModelSelection & getResolvedModelSelection() const { DARABONBA_PTR_GET_CONST(resolvedModelSelection_, ModelApiInfo::ResolvedModelSelection) };
      inline ModelApiInfo::ResolvedModelSelection getResolvedModelSelection() { DARABONBA_PTR_GET(resolvedModelSelection_, ModelApiInfo::ResolvedModelSelection) };
      inline ModelApiInfo& setResolvedModelSelection(const ModelApiInfo::ResolvedModelSelection & resolvedModelSelection) { DARABONBA_PTR_SET_VALUE(resolvedModelSelection_, resolvedModelSelection) };
      inline ModelApiInfo& setResolvedModelSelection(ModelApiInfo::ResolvedModelSelection && resolvedModelSelection) { DARABONBA_PTR_SET_RVALUE(resolvedModelSelection_, resolvedModelSelection) };


      // routingMode Field Functions 
      bool hasRoutingMode() const { return this->routingMode_ != nullptr;};
      void deleteRoutingMode() { this->routingMode_ = nullptr;};
      inline string getRoutingMode() const { DARABONBA_PTR_GET_DEFAULT(routingMode_, "") };
      inline ModelApiInfo& setRoutingMode(string routingMode) { DARABONBA_PTR_SET_VALUE(routingMode_, routingMode) };


    protected:
      // The save state of the direct supply fallback. A value of false indicates that it is disabled. This only reflects the saved configuration and does not indicate successful release or activation.
      shared_ptr<bool> directSupplyFallbackEnabled_ {};
      // The model exposure mode. Only SELECTED is supported in the first phase.
      shared_ptr<string> exposureMode_ {};
      // The model selection configuration.
      shared_ptr<ModelSelection> modelSelection_ {};
      // The read-only public model collection for the current configuration. If complete is false, the collection is unknown, and partial members must not be used as the full count.
      shared_ptr<ModelApiInfo::ResolvedModelSelection> resolvedModelSelection_ {};
      // The routing mode. Only Direct is supported in the first phase.
      shared_ptr<string> routingMode_ {};
    };

    class IngressInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngressInfo& obj) { 
        DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_TO_JSON(ingressClass, ingressClass_);
        DARABONBA_PTR_TO_JSON(k8sClusterInfo, k8sClusterInfo_);
        DARABONBA_PTR_TO_JSON(overrideIngressIp, overrideIngressIp_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(watchNamespace, watchNamespace_);
      };
      friend void from_json(const Darabonba::Json& j, IngressInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_FROM_JSON(ingressClass, ingressClass_);
        DARABONBA_PTR_FROM_JSON(k8sClusterInfo, k8sClusterInfo_);
        DARABONBA_PTR_FROM_JSON(overrideIngressIp, overrideIngressIp_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(watchNamespace, watchNamespace_);
      };
      IngressInfo() = default ;
      IngressInfo(const IngressInfo &) = default ;
      IngressInfo(IngressInfo &&) = default ;
      IngressInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngressInfo() = default ;
      IngressInfo& operator=(const IngressInfo &) = default ;
      IngressInfo& operator=(IngressInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class K8sClusterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const K8sClusterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        };
        friend void from_json(const Darabonba::Json& j, K8sClusterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        };
        K8sClusterInfo() = default ;
        K8sClusterInfo(const K8sClusterInfo &) = default ;
        K8sClusterInfo(K8sClusterInfo &&) = default ;
        K8sClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~K8sClusterInfo() = default ;
        K8sClusterInfo& operator=(const K8sClusterInfo &) = default ;
        K8sClusterInfo& operator=(K8sClusterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline K8sClusterInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      protected:
        // The cluster ID.
        shared_ptr<string> clusterId_ {};
      };

      class EnvironmentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnvironmentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        };
        friend void from_json(const Darabonba::Json& j, EnvironmentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        };
        EnvironmentInfo() = default ;
        EnvironmentInfo(const EnvironmentInfo &) = default ;
        EnvironmentInfo(EnvironmentInfo &&) = default ;
        EnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnvironmentInfo() = default ;
        EnvironmentInfo& operator=(const EnvironmentInfo &) = default ;
        EnvironmentInfo& operator=(EnvironmentInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->environmentId_ == nullptr; };
        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline EnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      protected:
        // The environment ID.
        shared_ptr<string> environmentId_ {};
      };

      virtual bool empty() const override { return this->environmentInfo_ == nullptr
        && this->ingressClass_ == nullptr && this->k8sClusterInfo_ == nullptr && this->overrideIngressIp_ == nullptr && this->sourceId_ == nullptr && this->watchNamespace_ == nullptr; };
      // environmentInfo Field Functions 
      bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
      void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
      inline const IngressInfo::EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, IngressInfo::EnvironmentInfo) };
      inline IngressInfo::EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, IngressInfo::EnvironmentInfo) };
      inline IngressInfo& setEnvironmentInfo(const IngressInfo::EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
      inline IngressInfo& setEnvironmentInfo(IngressInfo::EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


      // ingressClass Field Functions 
      bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
      void deleteIngressClass() { this->ingressClass_ = nullptr;};
      inline string getIngressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
      inline IngressInfo& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


      // k8sClusterInfo Field Functions 
      bool hasK8sClusterInfo() const { return this->k8sClusterInfo_ != nullptr;};
      void deleteK8sClusterInfo() { this->k8sClusterInfo_ = nullptr;};
      inline const IngressInfo::K8sClusterInfo & getK8sClusterInfo() const { DARABONBA_PTR_GET_CONST(k8sClusterInfo_, IngressInfo::K8sClusterInfo) };
      inline IngressInfo::K8sClusterInfo getK8sClusterInfo() { DARABONBA_PTR_GET(k8sClusterInfo_, IngressInfo::K8sClusterInfo) };
      inline IngressInfo& setK8sClusterInfo(const IngressInfo::K8sClusterInfo & k8sClusterInfo) { DARABONBA_PTR_SET_VALUE(k8sClusterInfo_, k8sClusterInfo) };
      inline IngressInfo& setK8sClusterInfo(IngressInfo::K8sClusterInfo && k8sClusterInfo) { DARABONBA_PTR_SET_RVALUE(k8sClusterInfo_, k8sClusterInfo) };


      // overrideIngressIp Field Functions 
      bool hasOverrideIngressIp() const { return this->overrideIngressIp_ != nullptr;};
      void deleteOverrideIngressIp() { this->overrideIngressIp_ = nullptr;};
      inline bool getOverrideIngressIp() const { DARABONBA_PTR_GET_DEFAULT(overrideIngressIp_, false) };
      inline IngressInfo& setOverrideIngressIp(bool overrideIngressIp) { DARABONBA_PTR_SET_VALUE(overrideIngressIp_, overrideIngressIp) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline IngressInfo& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // watchNamespace Field Functions 
      bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
      void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
      inline string getWatchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
      inline IngressInfo& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


    protected:
      // The environment context.
      shared_ptr<IngressInfo::EnvironmentInfo> environmentInfo_ {};
      // The ingress class being listened to.
      shared_ptr<string> ingressClass_ {};
      // The Kubernetes cluster information.
      shared_ptr<IngressInfo::K8sClusterInfo> k8sClusterInfo_ {};
      // Specifies whether to update the address in the ingress status.
      shared_ptr<bool> overrideIngressIp_ {};
      // The source ID.
      shared_ptr<string> sourceId_ {};
      // The watched namespace.
      shared_ptr<string> watchNamespace_ {};
    };

    class Environments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Environments& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
        DARABONBA_PTR_TO_JSON(backendType, backendType_);
        DARABONBA_PTR_TO_JSON(customDomains, customDomains_);
        DARABONBA_PTR_TO_JSON(deployErrorMessage, deployErrorMessage_);
        DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
        DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
      };
      friend void from_json(const Darabonba::Json& j, Environments& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
        DARABONBA_PTR_FROM_JSON(backendType, backendType_);
        DARABONBA_PTR_FROM_JSON(customDomains, customDomains_);
        DARABONBA_PTR_FROM_JSON(deployErrorMessage, deployErrorMessage_);
        DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
        DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
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
      class SubDomains : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubDomains& obj) { 
          DARABONBA_PTR_TO_JSON(domainId, domainId_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(networkType, networkType_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, SubDomains& obj) { 
          DARABONBA_PTR_FROM_JSON(domainId, domainId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(networkType, networkType_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        SubDomains() = default ;
        SubDomains(const SubDomains &) = default ;
        SubDomains(SubDomains &&) = default ;
        SubDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubDomains() = default ;
        SubDomains& operator=(const SubDomains &) = default ;
        SubDomains& operator=(SubDomains &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr && this->networkType_ == nullptr && this->protocol_ == nullptr; };
        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
        inline SubDomains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SubDomains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SubDomains& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline SubDomains& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The ID of the domain name.
        shared_ptr<string> domainId_ {};
        // The domain name.
        shared_ptr<string> name_ {};
        // The network type.
        shared_ptr<string> networkType_ {};
        // The access protocol.
        shared_ptr<string> protocol_ {};
      };

      class ServiceConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_TO_JSON(match, match_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_FROM_JSON(match, match_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        ServiceConfigs() = default ;
        ServiceConfigs(const ServiceConfigs &) = default ;
        ServiceConfigs(ServiceConfigs &&) = default ;
        ServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceConfigs() = default ;
        ServiceConfigs& operator=(const ServiceConfigs &) = default ;
        ServiceConfigs& operator=(ServiceConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayServiceId_ == nullptr
        && this->match_ == nullptr && this->name_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->serviceId_ == nullptr
        && this->version_ == nullptr && this->weight_ == nullptr; };
        // gatewayServiceId Field Functions 
        bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
        void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
        inline string getGatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
        inline ServiceConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


        // match Field Functions 
        bool hasMatch() const { return this->match_ != nullptr;};
        void deleteMatch() { this->match_ = nullptr;};
        inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
        inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
        inline ServiceConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
        inline ServiceConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline ServiceConfigs& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline ServiceConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline ServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ServiceConfigs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline ServiceConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The ID of the service.
        shared_ptr<string> gatewayServiceId_ {};
        // The match conditions.
        shared_ptr<HttpApiBackendMatchConditions> match_ {};
        // The name of the service.
        shared_ptr<string> name_ {};
        // The service port.
        shared_ptr<string> port_ {};
        // The protocol.
        shared_ptr<string> protocol_ {};
        // The ID of the service.
        shared_ptr<string> serviceId_ {};
        // The service version.
        shared_ptr<string> version_ {};
        // The weight.
        shared_ptr<int32_t> weight_ {};
      };

      class GatewayInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GatewayInfo& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, GatewayInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        GatewayInfo() = default ;
        GatewayInfo(const GatewayInfo &) = default ;
        GatewayInfo(GatewayInfo &&) = default ;
        GatewayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GatewayInfo() = default ;
        GatewayInfo& operator=(const GatewayInfo &) = default ;
        GatewayInfo& operator=(GatewayInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayEdition_ == nullptr
        && this->gatewayId_ == nullptr && this->name_ == nullptr; };
        // gatewayEdition Field Functions 
        bool hasGatewayEdition() const { return this->gatewayEdition_ != nullptr;};
        void deleteGatewayEdition() { this->gatewayEdition_ = nullptr;};
        inline string getGatewayEdition() const { DARABONBA_PTR_GET_DEFAULT(gatewayEdition_, "") };
        inline GatewayInfo& setGatewayEdition(string gatewayEdition) { DARABONBA_PTR_SET_VALUE(gatewayEdition_, gatewayEdition) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline GatewayInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline GatewayInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The edition of the gateway instance. Valid values: Professional, Serverless, MultiTenantServerless, and Unknown.
        shared_ptr<string> gatewayEdition_ {};
        // The gateway instance ID.
        shared_ptr<string> gatewayId_ {};
        // The name of the gateway instance.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->backendScene_ == nullptr && this->backendType_ == nullptr && this->customDomains_ == nullptr && this->deployErrorMessage_ == nullptr && this->deployStatus_ == nullptr
        && this->environmentId_ == nullptr && this->gatewayInfo_ == nullptr && this->name_ == nullptr && this->serviceConfigs_ == nullptr && this->subDomains_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Environments& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // backendScene Field Functions 
      bool hasBackendScene() const { return this->backendScene_ != nullptr;};
      void deleteBackendScene() { this->backendScene_ = nullptr;};
      inline string getBackendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
      inline Environments& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


      // backendType Field Functions 
      bool hasBackendType() const { return this->backendType_ != nullptr;};
      void deleteBackendType() { this->backendType_ = nullptr;};
      inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
      inline Environments& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


      // customDomains Field Functions 
      bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
      void deleteCustomDomains() { this->customDomains_ = nullptr;};
      inline const vector<HttpApiDomainInfo> & getCustomDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<HttpApiDomainInfo>) };
      inline vector<HttpApiDomainInfo> getCustomDomains() { DARABONBA_PTR_GET(customDomains_, vector<HttpApiDomainInfo>) };
      inline Environments& setCustomDomains(const vector<HttpApiDomainInfo> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
      inline Environments& setCustomDomains(vector<HttpApiDomainInfo> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


      // deployErrorMessage Field Functions 
      bool hasDeployErrorMessage() const { return this->deployErrorMessage_ != nullptr;};
      void deleteDeployErrorMessage() { this->deployErrorMessage_ = nullptr;};
      inline string getDeployErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(deployErrorMessage_, "") };
      inline Environments& setDeployErrorMessage(string deployErrorMessage) { DARABONBA_PTR_SET_VALUE(deployErrorMessage_, deployErrorMessage) };


      // deployStatus Field Functions 
      bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
      void deleteDeployStatus() { this->deployStatus_ = nullptr;};
      inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
      inline Environments& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Environments& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // gatewayInfo Field Functions 
      bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
      void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
      inline const Environments::GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Environments::GatewayInfo) };
      inline Environments::GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Environments::GatewayInfo) };
      inline Environments& setGatewayInfo(const Environments::GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
      inline Environments& setGatewayInfo(Environments::GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Environments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // serviceConfigs Field Functions 
      bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
      void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
      inline const vector<Environments::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<Environments::ServiceConfigs>) };
      inline vector<Environments::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<Environments::ServiceConfigs>) };
      inline Environments& setServiceConfigs(const vector<Environments::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
      inline Environments& setServiceConfigs(vector<Environments::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


      // subDomains Field Functions 
      bool hasSubDomains() const { return this->subDomains_ != nullptr;};
      void deleteSubDomains() { this->subDomains_ = nullptr;};
      inline const vector<Environments::SubDomains> & getSubDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<Environments::SubDomains>) };
      inline vector<Environments::SubDomains> getSubDomains() { DARABONBA_PTR_GET(subDomains_, vector<Environments::SubDomains>) };
      inline Environments& setSubDomains(const vector<Environments::SubDomains> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
      inline Environments& setSubDomains(vector<Environments::SubDomains> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


    protected:
      // The alias of the environment.
      shared_ptr<string> alias_ {};
      // The release scenario.
      shared_ptr<string> backendScene_ {};
      // The backend type.
      shared_ptr<string> backendType_ {};
      // The custom domain name information published by the user.
      shared_ptr<vector<HttpApiDomainInfo>> customDomains_ {};
      // The read-only reason for the release failure.
      shared_ptr<string> deployErrorMessage_ {};
      // The release status of the API in the current environment.
      shared_ptr<string> deployStatus_ {};
      // The ID of the environment.
      shared_ptr<string> environmentId_ {};
      // The gateway instance information to which the current environment belongs.
      shared_ptr<Environments::GatewayInfo> gatewayInfo_ {};
      // The name of the environment.
      shared_ptr<string> name_ {};
      // The existing service configurations.
      shared_ptr<vector<Environments::ServiceConfigs>> serviceConfigs_ {};
      // The list of default domain names for the environment.
      shared_ptr<vector<Environments::SubDomains>> subDomains_ {};
    };

    virtual bool empty() const override { return this->agentProtocols_ == nullptr
        && this->aiProtocols_ == nullptr && this->authConfig_ == nullptr && this->basePath_ == nullptr && this->creationClientToken_ == nullptr && this->deleteStatus_ == nullptr
        && this->deployCntMap_ == nullptr && this->deployConfigs_ == nullptr && this->deployErrorMessage_ == nullptr && this->description_ == nullptr && this->domainIds_ == nullptr
        && this->domainInfos_ == nullptr && this->enableAuth_ == nullptr && this->environmentId_ == nullptr && this->environments_ == nullptr && this->gatewayId_ == nullptr
        && this->gatewayInfo_ == nullptr && this->httpApiId_ == nullptr && this->ingressInfo_ == nullptr && this->modelApiInfo_ == nullptr && this->modelCardRuntimeDiagnostics_ == nullptr
        && this->modelCategory_ == nullptr && this->name_ == nullptr && this->policyConfigs_ == nullptr && this->protocols_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->versionInfo_ == nullptr; };
    // agentProtocols Field Functions 
    bool hasAgentProtocols() const { return this->agentProtocols_ != nullptr;};
    void deleteAgentProtocols() { this->agentProtocols_ = nullptr;};
    inline const vector<string> & getAgentProtocols() const { DARABONBA_PTR_GET_CONST(agentProtocols_, vector<string>) };
    inline vector<string> getAgentProtocols() { DARABONBA_PTR_GET(agentProtocols_, vector<string>) };
    inline ModelApiListApiInfo& setAgentProtocols(const vector<string> & agentProtocols) { DARABONBA_PTR_SET_VALUE(agentProtocols_, agentProtocols) };
    inline ModelApiListApiInfo& setAgentProtocols(vector<string> && agentProtocols) { DARABONBA_PTR_SET_RVALUE(agentProtocols_, agentProtocols) };


    // aiProtocols Field Functions 
    bool hasAiProtocols() const { return this->aiProtocols_ != nullptr;};
    void deleteAiProtocols() { this->aiProtocols_ = nullptr;};
    inline const vector<string> & getAiProtocols() const { DARABONBA_PTR_GET_CONST(aiProtocols_, vector<string>) };
    inline vector<string> getAiProtocols() { DARABONBA_PTR_GET(aiProtocols_, vector<string>) };
    inline ModelApiListApiInfo& setAiProtocols(const vector<string> & aiProtocols) { DARABONBA_PTR_SET_VALUE(aiProtocols_, aiProtocols) };
    inline ModelApiListApiInfo& setAiProtocols(vector<string> && aiProtocols) { DARABONBA_PTR_SET_RVALUE(aiProtocols_, aiProtocols) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const AuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, AuthConfig) };
    inline AuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, AuthConfig) };
    inline ModelApiListApiInfo& setAuthConfig(const AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline ModelApiListApiInfo& setAuthConfig(AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline ModelApiListApiInfo& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // creationClientToken Field Functions 
    bool hasCreationClientToken() const { return this->creationClientToken_ != nullptr;};
    void deleteCreationClientToken() { this->creationClientToken_ = nullptr;};
    inline string getCreationClientToken() const { DARABONBA_PTR_GET_DEFAULT(creationClientToken_, "") };
    inline ModelApiListApiInfo& setCreationClientToken(string creationClientToken) { DARABONBA_PTR_SET_VALUE(creationClientToken_, creationClientToken) };


    // deleteStatus Field Functions 
    bool hasDeleteStatus() const { return this->deleteStatus_ != nullptr;};
    void deleteDeleteStatus() { this->deleteStatus_ = nullptr;};
    inline string getDeleteStatus() const { DARABONBA_PTR_GET_DEFAULT(deleteStatus_, "") };
    inline ModelApiListApiInfo& setDeleteStatus(string deleteStatus) { DARABONBA_PTR_SET_VALUE(deleteStatus_, deleteStatus) };


    // deployCntMap Field Functions 
    bool hasDeployCntMap() const { return this->deployCntMap_ != nullptr;};
    void deleteDeployCntMap() { this->deployCntMap_ = nullptr;};
    inline const map<string, ModelApiListApiInfoDeployCntMapValue> & getDeployCntMap() const { DARABONBA_PTR_GET_CONST(deployCntMap_, map<string, ModelApiListApiInfoDeployCntMapValue>) };
    inline map<string, ModelApiListApiInfoDeployCntMapValue> getDeployCntMap() { DARABONBA_PTR_GET(deployCntMap_, map<string, ModelApiListApiInfoDeployCntMapValue>) };
    inline ModelApiListApiInfo& setDeployCntMap(const map<string, ModelApiListApiInfoDeployCntMapValue> & deployCntMap) { DARABONBA_PTR_SET_VALUE(deployCntMap_, deployCntMap) };
    inline ModelApiListApiInfo& setDeployCntMap(map<string, ModelApiListApiInfoDeployCntMapValue> && deployCntMap) { DARABONBA_PTR_SET_RVALUE(deployCntMap_, deployCntMap) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & getDeployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> getDeployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline ModelApiListApiInfo& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline ModelApiListApiInfo& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // deployErrorMessage Field Functions 
    bool hasDeployErrorMessage() const { return this->deployErrorMessage_ != nullptr;};
    void deleteDeployErrorMessage() { this->deployErrorMessage_ = nullptr;};
    inline string getDeployErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(deployErrorMessage_, "") };
    inline ModelApiListApiInfo& setDeployErrorMessage(string deployErrorMessage) { DARABONBA_PTR_SET_VALUE(deployErrorMessage_, deployErrorMessage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelApiListApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline ModelApiListApiInfo& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline ModelApiListApiInfo& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const vector<ModelApiDomainInfo> & getDomainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<ModelApiDomainInfo>) };
    inline vector<ModelApiDomainInfo> getDomainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<ModelApiDomainInfo>) };
    inline ModelApiListApiInfo& setDomainInfos(const vector<ModelApiDomainInfo> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline ModelApiListApiInfo& setDomainInfos(vector<ModelApiDomainInfo> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool getEnableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline ModelApiListApiInfo& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ModelApiListApiInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<ModelApiListApiInfo::Environments> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<ModelApiListApiInfo::Environments>) };
    inline vector<ModelApiListApiInfo::Environments> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<ModelApiListApiInfo::Environments>) };
    inline ModelApiListApiInfo& setEnvironments(const vector<ModelApiListApiInfo::Environments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline ModelApiListApiInfo& setEnvironments(vector<ModelApiListApiInfo::Environments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ModelApiListApiInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
    inline GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
    inline ModelApiListApiInfo& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline ModelApiListApiInfo& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline ModelApiListApiInfo& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // ingressInfo Field Functions 
    bool hasIngressInfo() const { return this->ingressInfo_ != nullptr;};
    void deleteIngressInfo() { this->ingressInfo_ = nullptr;};
    inline const ModelApiListApiInfo::IngressInfo & getIngressInfo() const { DARABONBA_PTR_GET_CONST(ingressInfo_, ModelApiListApiInfo::IngressInfo) };
    inline ModelApiListApiInfo::IngressInfo getIngressInfo() { DARABONBA_PTR_GET(ingressInfo_, ModelApiListApiInfo::IngressInfo) };
    inline ModelApiListApiInfo& setIngressInfo(const ModelApiListApiInfo::IngressInfo & ingressInfo) { DARABONBA_PTR_SET_VALUE(ingressInfo_, ingressInfo) };
    inline ModelApiListApiInfo& setIngressInfo(ModelApiListApiInfo::IngressInfo && ingressInfo) { DARABONBA_PTR_SET_RVALUE(ingressInfo_, ingressInfo) };


    // modelApiInfo Field Functions 
    bool hasModelApiInfo() const { return this->modelApiInfo_ != nullptr;};
    void deleteModelApiInfo() { this->modelApiInfo_ = nullptr;};
    inline const ModelApiListApiInfo::ModelApiInfo & getModelApiInfo() const { DARABONBA_PTR_GET_CONST(modelApiInfo_, ModelApiListApiInfo::ModelApiInfo) };
    inline ModelApiListApiInfo::ModelApiInfo getModelApiInfo() { DARABONBA_PTR_GET(modelApiInfo_, ModelApiListApiInfo::ModelApiInfo) };
    inline ModelApiListApiInfo& setModelApiInfo(const ModelApiListApiInfo::ModelApiInfo & modelApiInfo) { DARABONBA_PTR_SET_VALUE(modelApiInfo_, modelApiInfo) };
    inline ModelApiListApiInfo& setModelApiInfo(ModelApiListApiInfo::ModelApiInfo && modelApiInfo) { DARABONBA_PTR_SET_RVALUE(modelApiInfo_, modelApiInfo) };


    // modelCardRuntimeDiagnostics Field Functions 
    bool hasModelCardRuntimeDiagnostics() const { return this->modelCardRuntimeDiagnostics_ != nullptr;};
    void deleteModelCardRuntimeDiagnostics() { this->modelCardRuntimeDiagnostics_ = nullptr;};
    inline const vector<ModelApiListApiInfo::ModelCardRuntimeDiagnostics> & getModelCardRuntimeDiagnostics() const { DARABONBA_PTR_GET_CONST(modelCardRuntimeDiagnostics_, vector<ModelApiListApiInfo::ModelCardRuntimeDiagnostics>) };
    inline vector<ModelApiListApiInfo::ModelCardRuntimeDiagnostics> getModelCardRuntimeDiagnostics() { DARABONBA_PTR_GET(modelCardRuntimeDiagnostics_, vector<ModelApiListApiInfo::ModelCardRuntimeDiagnostics>) };
    inline ModelApiListApiInfo& setModelCardRuntimeDiagnostics(const vector<ModelApiListApiInfo::ModelCardRuntimeDiagnostics> & modelCardRuntimeDiagnostics) { DARABONBA_PTR_SET_VALUE(modelCardRuntimeDiagnostics_, modelCardRuntimeDiagnostics) };
    inline ModelApiListApiInfo& setModelCardRuntimeDiagnostics(vector<ModelApiListApiInfo::ModelCardRuntimeDiagnostics> && modelCardRuntimeDiagnostics) { DARABONBA_PTR_SET_RVALUE(modelCardRuntimeDiagnostics_, modelCardRuntimeDiagnostics) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string getModelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline ModelApiListApiInfo& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelApiListApiInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<ModelApiPolicyConfig> & getPolicyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline vector<ModelApiPolicyConfig> getPolicyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline ModelApiListApiInfo& setPolicyConfigs(const vector<ModelApiPolicyConfig> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline ModelApiListApiInfo& setPolicyConfigs(vector<ModelApiPolicyConfig> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline ModelApiListApiInfo& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline ModelApiListApiInfo& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModelApiListApiInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelApiListApiInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelApiListApiInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versionInfo Field Functions 
    bool hasVersionInfo() const { return this->versionInfo_ != nullptr;};
    void deleteVersionInfo() { this->versionInfo_ = nullptr;};
    inline const HttpApiVersionInfo & getVersionInfo() const { DARABONBA_PTR_GET_CONST(versionInfo_, HttpApiVersionInfo) };
    inline HttpApiVersionInfo getVersionInfo() { DARABONBA_PTR_GET(versionInfo_, HttpApiVersionInfo) };
    inline ModelApiListApiInfo& setVersionInfo(const HttpApiVersionInfo & versionInfo) { DARABONBA_PTR_SET_VALUE(versionInfo_, versionInfo) };
    inline ModelApiListApiInfo& setVersionInfo(HttpApiVersionInfo && versionInfo) { DARABONBA_PTR_SET_RVALUE(versionInfo_, versionInfo) };


  protected:
    // The collection of agent protocols for the model API.
    shared_ptr<vector<string>> agentProtocols_ {};
    // The API protocols created by scenario. APIs created by selecting models provide open paths through modelApiInfo.
    shared_ptr<vector<string>> aiProtocols_ {};
    // The API authentication configurations created by scenario.
    shared_ptr<AuthConfig> authConfig_ {};
    // The API base path.
    shared_ptr<string> basePath_ {};
    // The read-only association identifier for the creation request. It is returned only within approximately 24 hours after the first persistence and when the association with the same instance is unique after normal authentication. It is omitted when the identifier is historical, expired, or ambiguous. You cannot use this identifier to determine whether publishing or authorization is successful, nor does it replace the creation idempotency record.
    shared_ptr<string> creationClientToken_ {};
    // The optional read-only deletion status of the new model API. Deleting indicates that the deletion request is accepted but not completed. DeleteFailed indicates that the background deletion failed, and you can use the original clientToken to retry DeleteModelApi. This field is not returned for normal deployment and historical undeployment. The absence of this field does not indicate that the deletion is complete.
    shared_ptr<string> deleteStatus_ {};
    // The publish status of the API operation.
    shared_ptr<map<string, ModelApiListApiInfoDeployCntMapValue>> deployCntMap_ {};
    // The API deployment configurations and associated services created by scenario, provided as read-only list information.
    shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ {};
    // The read-only reason for deployment or deletion failure.
    shared_ptr<string> deployErrorMessage_ {};
    // The API description.
    shared_ptr<string> description_ {};
    // The selected domain IDs.
    shared_ptr<vector<string>> domainIds_ {};
    // The read-only domain details and default domain flag.
    shared_ptr<vector<ModelApiDomainInfo>> domainInfos_ {};
    // Specifies whether to enable authentication.
    shared_ptr<bool> enableAuth_ {};
    // The read-only default environment ID of the bound instance.
    shared_ptr<string> environmentId_ {};
    // The publish environment context of the API.
    shared_ptr<vector<ModelApiListApiInfo::Environments>> environments_ {};
    // The ID of the gateway instance to which the API belongs.
    shared_ptr<string> gatewayId_ {};
    // The read-only information of the bound instance.
    shared_ptr<GatewayInfo> gatewayInfo_ {};
    // The model API ID.
    shared_ptr<string> httpApiId_ {};
    // The HTTP ingress API information.
    shared_ptr<ModelApiListApiInfo::IngressInfo> ingressInfo_ {};
    // The public selection information of the model API.
    shared_ptr<ModelApiListApiInfo::ModelApiInfo> modelApiInfo_ {};
    // The read-only runtime diagnostics of the model card, derived from the original markers of the deployment configuration. This is used only for the readability and diagnosability of abnormal drafts.
    shared_ptr<vector<ModelApiListApiInfo::ModelCardRuntimeDiagnostics>> modelCardRuntimeDiagnostics_ {};
    // The model category of the model API.
    shared_ptr<string> modelCategory_ {};
    // The API name.
    shared_ptr<string> name_ {};
    // The inline configurations for AI request logs and AI security protection.
    shared_ptr<vector<ModelApiPolicyConfig>> policyConfigs_ {};
    // The list of API protocols.
    shared_ptr<vector<string>> protocols_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The deployment status on the bound instance. In the new version, Undeploying indicates that the deletion is in progress, and UndeployFailed indicates that the deletion failed. Refer to deleteStatus to determine whether the operation is a deletion.
    shared_ptr<string> status_ {};
    // The API type.
    shared_ptr<string> type_ {};
    // The API versioning information.
    shared_ptr<HttpApiVersionInfo> versionInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
