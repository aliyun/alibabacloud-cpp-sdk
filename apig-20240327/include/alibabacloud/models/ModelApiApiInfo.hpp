// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELAPIAPIINFO_HPP_
#define ALIBABACLOUD_MODELS_MODELAPIAPIINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelSelection.hpp>
#include <map>
#include <alibabacloud/models/ModelApiApiInfoDeployCntMapValue.hpp>
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
  class ModelApiApiInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelApiApiInfo& obj) { 
      DARABONBA_PTR_TO_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(creationClientToken, creationClientToken_);
      DARABONBA_PTR_TO_JSON(deleteStatus, deleteStatus_);
      DARABONBA_PTR_TO_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_TO_JSON(deployErrorMessage, deployErrorMessage_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
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
      DARABONBA_PTR_TO_JSON(publishedEndpoints, publishedEndpoints_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(versionInfo, versionInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModelApiApiInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(creationClientToken, creationClientToken_);
      DARABONBA_PTR_FROM_JSON(deleteStatus, deleteStatus_);
      DARABONBA_PTR_FROM_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_FROM_JSON(deployErrorMessage, deployErrorMessage_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
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
      DARABONBA_PTR_FROM_JSON(publishedEndpoints, publishedEndpoints_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(versionInfo, versionInfo_);
    };
    ModelApiApiInfo() = default ;
    ModelApiApiInfo(const ModelApiApiInfo &) = default ;
    ModelApiApiInfo(ModelApiApiInfo &&) = default ;
    ModelApiApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelApiApiInfo() = default ;
    ModelApiApiInfo& operator=(const ModelApiApiInfo &) = default ;
    ModelApiApiInfo& operator=(ModelApiApiInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishedEndpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishedEndpoints& obj) { 
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(modelCardIds, modelCardIds_);
      };
      friend void from_json(const Darabonba::Json& j, PublishedEndpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(modelCardIds, modelCardIds_);
      };
      PublishedEndpoints() = default ;
      PublishedEndpoints(const PublishedEndpoints &) = default ;
      PublishedEndpoints(PublishedEndpoints &&) = default ;
      PublishedEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishedEndpoints() = default ;
      PublishedEndpoints& operator=(const PublishedEndpoints &) = default ;
      PublishedEndpoints& operator=(PublishedEndpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->modelCardIds_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline PublishedEndpoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // modelCardIds Field Functions 
      bool hasModelCardIds() const { return this->modelCardIds_ != nullptr;};
      void deleteModelCardIds() { this->modelCardIds_ = nullptr;};
      inline const vector<string> & getModelCardIds() const { DARABONBA_PTR_GET_CONST(modelCardIds_, vector<string>) };
      inline vector<string> getModelCardIds() { DARABONBA_PTR_GET(modelCardIds_, vector<string>) };
      inline PublishedEndpoints& setModelCardIds(const vector<string> & modelCardIds) { DARABONBA_PTR_SET_VALUE(modelCardIds_, modelCardIds) };
      inline PublishedEndpoints& setModelCardIds(vector<string> && modelCardIds) { DARABONBA_PTR_SET_RVALUE(modelCardIds_, modelCardIds) };


    protected:
      // The name of the successfully published built-in endpoint.
      shared_ptr<string> endpoint_ {};
      // The collection of executable ModelCard IDs successfully published for this path.
      shared_ptr<vector<string>> modelCardIds_ {};
    };

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
        // Indicates whether the expanded collection of the current configuration is fully read. A fully empty group returns true and an empty array. Missing, invalid groups, or read failures return false. This does not reflect the online publishing or consumer permission status.
        shared_ptr<bool> complete_ {};
        // The identities of the models selected for public exposure in the current configuration, stably sorted and deduplicated. Logical models retain their own IDs and do not include fallback-only targets or underlying execution cards of logical models. If complete is false, this is an empty array and must not be interpreted as zero models.
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
      // The saved state of the direct supply fallback. A value of false indicates that it is disabled. This only reflects the saved configuration and does not indicate successful publishing or activation.
      shared_ptr<bool> directSupplyFallbackEnabled_ {};
      // The model exposure mode. Only SELECTED is supported in Phase 1.
      shared_ptr<string> exposureMode_ {};
      // The model selection configuration.
      shared_ptr<ModelSelection> modelSelection_ {};
      // The read-only collection of publicly exposed models for the current configuration. It retains the modelSelection edit source, but the successful online collection is still subject to publishedEndpoints.
      shared_ptr<ModelApiInfo::ResolvedModelSelection> resolvedModelSelection_ {};
      // The routing mode. Only Direct is supported in Phase 1.
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
      // The ingress class.
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

    virtual bool empty() const override { return this->agentProtocols_ == nullptr
        && this->basePath_ == nullptr && this->creationClientToken_ == nullptr && this->deleteStatus_ == nullptr && this->deployCntMap_ == nullptr && this->deployErrorMessage_ == nullptr
        && this->description_ == nullptr && this->domainIds_ == nullptr && this->domainInfos_ == nullptr && this->enableAuth_ == nullptr && this->environmentId_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayInfo_ == nullptr && this->httpApiId_ == nullptr && this->ingressInfo_ == nullptr && this->modelApiInfo_ == nullptr
        && this->modelCardRuntimeDiagnostics_ == nullptr && this->modelCategory_ == nullptr && this->name_ == nullptr && this->policyConfigs_ == nullptr && this->protocols_ == nullptr
        && this->publishedEndpoints_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->versionInfo_ == nullptr; };
    // agentProtocols Field Functions 
    bool hasAgentProtocols() const { return this->agentProtocols_ != nullptr;};
    void deleteAgentProtocols() { this->agentProtocols_ = nullptr;};
    inline const vector<string> & getAgentProtocols() const { DARABONBA_PTR_GET_CONST(agentProtocols_, vector<string>) };
    inline vector<string> getAgentProtocols() { DARABONBA_PTR_GET(agentProtocols_, vector<string>) };
    inline ModelApiApiInfo& setAgentProtocols(const vector<string> & agentProtocols) { DARABONBA_PTR_SET_VALUE(agentProtocols_, agentProtocols) };
    inline ModelApiApiInfo& setAgentProtocols(vector<string> && agentProtocols) { DARABONBA_PTR_SET_RVALUE(agentProtocols_, agentProtocols) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline ModelApiApiInfo& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // creationClientToken Field Functions 
    bool hasCreationClientToken() const { return this->creationClientToken_ != nullptr;};
    void deleteCreationClientToken() { this->creationClientToken_ = nullptr;};
    inline string getCreationClientToken() const { DARABONBA_PTR_GET_DEFAULT(creationClientToken_, "") };
    inline ModelApiApiInfo& setCreationClientToken(string creationClientToken) { DARABONBA_PTR_SET_VALUE(creationClientToken_, creationClientToken) };


    // deleteStatus Field Functions 
    bool hasDeleteStatus() const { return this->deleteStatus_ != nullptr;};
    void deleteDeleteStatus() { this->deleteStatus_ = nullptr;};
    inline string getDeleteStatus() const { DARABONBA_PTR_GET_DEFAULT(deleteStatus_, "") };
    inline ModelApiApiInfo& setDeleteStatus(string deleteStatus) { DARABONBA_PTR_SET_VALUE(deleteStatus_, deleteStatus) };


    // deployCntMap Field Functions 
    bool hasDeployCntMap() const { return this->deployCntMap_ != nullptr;};
    void deleteDeployCntMap() { this->deployCntMap_ = nullptr;};
    inline const map<string, ModelApiApiInfoDeployCntMapValue> & getDeployCntMap() const { DARABONBA_PTR_GET_CONST(deployCntMap_, map<string, ModelApiApiInfoDeployCntMapValue>) };
    inline map<string, ModelApiApiInfoDeployCntMapValue> getDeployCntMap() { DARABONBA_PTR_GET(deployCntMap_, map<string, ModelApiApiInfoDeployCntMapValue>) };
    inline ModelApiApiInfo& setDeployCntMap(const map<string, ModelApiApiInfoDeployCntMapValue> & deployCntMap) { DARABONBA_PTR_SET_VALUE(deployCntMap_, deployCntMap) };
    inline ModelApiApiInfo& setDeployCntMap(map<string, ModelApiApiInfoDeployCntMapValue> && deployCntMap) { DARABONBA_PTR_SET_RVALUE(deployCntMap_, deployCntMap) };


    // deployErrorMessage Field Functions 
    bool hasDeployErrorMessage() const { return this->deployErrorMessage_ != nullptr;};
    void deleteDeployErrorMessage() { this->deployErrorMessage_ = nullptr;};
    inline string getDeployErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(deployErrorMessage_, "") };
    inline ModelApiApiInfo& setDeployErrorMessage(string deployErrorMessage) { DARABONBA_PTR_SET_VALUE(deployErrorMessage_, deployErrorMessage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelApiApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline ModelApiApiInfo& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline ModelApiApiInfo& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const vector<ModelApiDomainInfo> & getDomainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<ModelApiDomainInfo>) };
    inline vector<ModelApiDomainInfo> getDomainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<ModelApiDomainInfo>) };
    inline ModelApiApiInfo& setDomainInfos(const vector<ModelApiDomainInfo> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline ModelApiApiInfo& setDomainInfos(vector<ModelApiDomainInfo> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool getEnableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline ModelApiApiInfo& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ModelApiApiInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ModelApiApiInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
    inline GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
    inline ModelApiApiInfo& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline ModelApiApiInfo& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline ModelApiApiInfo& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // ingressInfo Field Functions 
    bool hasIngressInfo() const { return this->ingressInfo_ != nullptr;};
    void deleteIngressInfo() { this->ingressInfo_ = nullptr;};
    inline const ModelApiApiInfo::IngressInfo & getIngressInfo() const { DARABONBA_PTR_GET_CONST(ingressInfo_, ModelApiApiInfo::IngressInfo) };
    inline ModelApiApiInfo::IngressInfo getIngressInfo() { DARABONBA_PTR_GET(ingressInfo_, ModelApiApiInfo::IngressInfo) };
    inline ModelApiApiInfo& setIngressInfo(const ModelApiApiInfo::IngressInfo & ingressInfo) { DARABONBA_PTR_SET_VALUE(ingressInfo_, ingressInfo) };
    inline ModelApiApiInfo& setIngressInfo(ModelApiApiInfo::IngressInfo && ingressInfo) { DARABONBA_PTR_SET_RVALUE(ingressInfo_, ingressInfo) };


    // modelApiInfo Field Functions 
    bool hasModelApiInfo() const { return this->modelApiInfo_ != nullptr;};
    void deleteModelApiInfo() { this->modelApiInfo_ = nullptr;};
    inline const ModelApiApiInfo::ModelApiInfo & getModelApiInfo() const { DARABONBA_PTR_GET_CONST(modelApiInfo_, ModelApiApiInfo::ModelApiInfo) };
    inline ModelApiApiInfo::ModelApiInfo getModelApiInfo() { DARABONBA_PTR_GET(modelApiInfo_, ModelApiApiInfo::ModelApiInfo) };
    inline ModelApiApiInfo& setModelApiInfo(const ModelApiApiInfo::ModelApiInfo & modelApiInfo) { DARABONBA_PTR_SET_VALUE(modelApiInfo_, modelApiInfo) };
    inline ModelApiApiInfo& setModelApiInfo(ModelApiApiInfo::ModelApiInfo && modelApiInfo) { DARABONBA_PTR_SET_RVALUE(modelApiInfo_, modelApiInfo) };


    // modelCardRuntimeDiagnostics Field Functions 
    bool hasModelCardRuntimeDiagnostics() const { return this->modelCardRuntimeDiagnostics_ != nullptr;};
    void deleteModelCardRuntimeDiagnostics() { this->modelCardRuntimeDiagnostics_ = nullptr;};
    inline const vector<ModelApiApiInfo::ModelCardRuntimeDiagnostics> & getModelCardRuntimeDiagnostics() const { DARABONBA_PTR_GET_CONST(modelCardRuntimeDiagnostics_, vector<ModelApiApiInfo::ModelCardRuntimeDiagnostics>) };
    inline vector<ModelApiApiInfo::ModelCardRuntimeDiagnostics> getModelCardRuntimeDiagnostics() { DARABONBA_PTR_GET(modelCardRuntimeDiagnostics_, vector<ModelApiApiInfo::ModelCardRuntimeDiagnostics>) };
    inline ModelApiApiInfo& setModelCardRuntimeDiagnostics(const vector<ModelApiApiInfo::ModelCardRuntimeDiagnostics> & modelCardRuntimeDiagnostics) { DARABONBA_PTR_SET_VALUE(modelCardRuntimeDiagnostics_, modelCardRuntimeDiagnostics) };
    inline ModelApiApiInfo& setModelCardRuntimeDiagnostics(vector<ModelApiApiInfo::ModelCardRuntimeDiagnostics> && modelCardRuntimeDiagnostics) { DARABONBA_PTR_SET_RVALUE(modelCardRuntimeDiagnostics_, modelCardRuntimeDiagnostics) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string getModelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline ModelApiApiInfo& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelApiApiInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<ModelApiPolicyConfig> & getPolicyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline vector<ModelApiPolicyConfig> getPolicyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<ModelApiPolicyConfig>) };
    inline ModelApiApiInfo& setPolicyConfigs(const vector<ModelApiPolicyConfig> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline ModelApiApiInfo& setPolicyConfigs(vector<ModelApiPolicyConfig> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline ModelApiApiInfo& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline ModelApiApiInfo& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // publishedEndpoints Field Functions 
    bool hasPublishedEndpoints() const { return this->publishedEndpoints_ != nullptr;};
    void deletePublishedEndpoints() { this->publishedEndpoints_ = nullptr;};
    inline const vector<ModelApiApiInfo::PublishedEndpoints> & getPublishedEndpoints() const { DARABONBA_PTR_GET_CONST(publishedEndpoints_, vector<ModelApiApiInfo::PublishedEndpoints>) };
    inline vector<ModelApiApiInfo::PublishedEndpoints> getPublishedEndpoints() { DARABONBA_PTR_GET(publishedEndpoints_, vector<ModelApiApiInfo::PublishedEndpoints>) };
    inline ModelApiApiInfo& setPublishedEndpoints(const vector<ModelApiApiInfo::PublishedEndpoints> & publishedEndpoints) { DARABONBA_PTR_SET_VALUE(publishedEndpoints_, publishedEndpoints) };
    inline ModelApiApiInfo& setPublishedEndpoints(vector<ModelApiApiInfo::PublishedEndpoints> && publishedEndpoints) { DARABONBA_PTR_SET_RVALUE(publishedEndpoints_, publishedEndpoints) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModelApiApiInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelApiApiInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelApiApiInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versionInfo Field Functions 
    bool hasVersionInfo() const { return this->versionInfo_ != nullptr;};
    void deleteVersionInfo() { this->versionInfo_ = nullptr;};
    inline const HttpApiVersionInfo & getVersionInfo() const { DARABONBA_PTR_GET_CONST(versionInfo_, HttpApiVersionInfo) };
    inline HttpApiVersionInfo getVersionInfo() { DARABONBA_PTR_GET(versionInfo_, HttpApiVersionInfo) };
    inline ModelApiApiInfo& setVersionInfo(const HttpApiVersionInfo & versionInfo) { DARABONBA_PTR_SET_VALUE(versionInfo_, versionInfo) };
    inline ModelApiApiInfo& setVersionInfo(HttpApiVersionInfo && versionInfo) { DARABONBA_PTR_SET_RVALUE(versionInfo_, versionInfo) };


  protected:
    // The collection of agent protocols for the model API.
    shared_ptr<vector<string>> agentProtocols_ {};
    // The API base path.
    shared_ptr<string> basePath_ {};
    // The read-only correlation identifier for creation requests. It is returned only when the association with the same instance is unique within approximately 24 hours after the first persistence following normal authentication. It is omitted for historical, expired, or ambiguous cases. This identifier cannot be used to determine the success of publishing or authorization, nor does it replace the creation of idempotent records.
    shared_ptr<string> creationClientToken_ {};
    // The deletion status of the new version model API. This field is read-only and optional. Deleting indicates that the deletion request is accepted but not yet completed. DeleteFailed indicates that the background deletion failed, and you can use the original clientToken to retry the DeleteModelApi operation. This field is not returned for normal publishing and historical undeployment. The absence of this field does not indicate that the deletion is complete.
    shared_ptr<string> deleteStatus_ {};
    // The publish status of the API operation.
    shared_ptr<map<string, ModelApiApiInfoDeployCntMapValue>> deployCntMap_ {};
    // The reason for the deployment or deletion failure. This field is read-only.
    shared_ptr<string> deployErrorMessage_ {};
    // The API description.
    shared_ptr<string> description_ {};
    // The selected domain IDs.
    shared_ptr<vector<string>> domainIds_ {};
    // The read-only domain name details and the default domain name flag.
    shared_ptr<vector<ModelApiDomainInfo>> domainInfos_ {};
    // Specifies whether to enable authentication.
    shared_ptr<bool> enableAuth_ {};
    // The default environment ID of the bound instance. This field is read-only.
    shared_ptr<string> environmentId_ {};
    // The ID of the gateway instance to which the API belongs.
    shared_ptr<string> gatewayId_ {};
    // The read-only information of the bound instance.
    shared_ptr<GatewayInfo> gatewayInfo_ {};
    // The model API ID.
    shared_ptr<string> httpApiId_ {};
    // The HTTP ingress API information.
    shared_ptr<ModelApiApiInfo::IngressInfo> ingressInfo_ {};
    // The model API public selection information.
    shared_ptr<ModelApiApiInfo::ModelApiInfo> modelApiInfo_ {};
    // The read-only runtime diagnostic information for model cards, derived from the original markers of the deployment configuration. It is used only for the readability and diagnostics of abnormal drafts.
    shared_ptr<vector<ModelApiApiInfo::ModelCardRuntimeDiagnostics>> modelCardRuntimeDiagnostics_ {};
    // The model category of the model API.
    shared_ptr<string> modelCategory_ {};
    // The API name.
    shared_ptr<string> name_ {};
    // The inline configurations for AI request logs and AI security protection.
    shared_ptr<vector<ModelApiPolicyConfig>> policyConfigs_ {};
    // The list of API protocols.
    shared_ptr<vector<string>> protocols_ {};
    // The collection of successfully published per-path executable models. This field is read-only. It is empty when a snapshot is missing, which does not represent consumer permission.
    shared_ptr<vector<ModelApiApiInfo::PublishedEndpoints>> publishedEndpoints_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The publishing status on the bound instance. In the new version, the status is Undeploying when a deletion is in progress, and UndeployFailed when a deletion fails. To determine whether an operation is a deletion, refer to the deleteStatus field.
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
