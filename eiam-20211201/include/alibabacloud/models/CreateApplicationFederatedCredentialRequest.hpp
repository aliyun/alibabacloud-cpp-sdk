// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationFederatedCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OidcVerificationConfig, oidcVerificationConfig_);
      DARABONBA_PTR_TO_JSON(Pkcs7VerificationConfig, pkcs7VerificationConfig_);
      DARABONBA_PTR_TO_JSON(VerificationCondition, verificationCondition_);
      DARABONBA_PTR_TO_JSON(VerificationMode, verificationMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationFederatedCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AttributeMappings, attributeMappings_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OidcVerificationConfig, oidcVerificationConfig_);
      DARABONBA_PTR_FROM_JSON(Pkcs7VerificationConfig, pkcs7VerificationConfig_);
      DARABONBA_PTR_FROM_JSON(VerificationCondition, verificationCondition_);
      DARABONBA_PTR_FROM_JSON(VerificationMode, verificationMode_);
    };
    CreateApplicationFederatedCredentialRequest() = default ;
    CreateApplicationFederatedCredentialRequest(const CreateApplicationFederatedCredentialRequest &) = default ;
    CreateApplicationFederatedCredentialRequest(CreateApplicationFederatedCredentialRequest &&) = default ;
    CreateApplicationFederatedCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationFederatedCredentialRequest() = default ;
    CreateApplicationFederatedCredentialRequest& operator=(const CreateApplicationFederatedCredentialRequest &) = default ;
    CreateApplicationFederatedCredentialRequest& operator=(CreateApplicationFederatedCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pkcs7VerificationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pkcs7VerificationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      };
      friend void from_json(const Darabonba::Json& j, Pkcs7VerificationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      };
      Pkcs7VerificationConfig() = default ;
      Pkcs7VerificationConfig(const Pkcs7VerificationConfig &) = default ;
      Pkcs7VerificationConfig(Pkcs7VerificationConfig &&) = default ;
      Pkcs7VerificationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pkcs7VerificationConfig() = default ;
      Pkcs7VerificationConfig& operator=(const Pkcs7VerificationConfig &) = default ;
      Pkcs7VerificationConfig& operator=(Pkcs7VerificationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceIds_ == nullptr; };
      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline Pkcs7VerificationConfig& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline Pkcs7VerificationConfig& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    protected:
      shared_ptr<vector<string>> instanceIds_ {};
    };

    class OidcVerificationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OidcVerificationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AzureVmConfig, azureVmConfig_);
        DARABONBA_PTR_TO_JSON(GcpVmConfig, gcpVmConfig_);
        DARABONBA_PTR_TO_JSON(GenericConfig, genericConfig_);
        DARABONBA_PTR_TO_JSON(KubernetesConfig, kubernetesConfig_);
        DARABONBA_PTR_TO_JSON(Profile, profile_);
      };
      friend void from_json(const Darabonba::Json& j, OidcVerificationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AzureVmConfig, azureVmConfig_);
        DARABONBA_PTR_FROM_JSON(GcpVmConfig, gcpVmConfig_);
        DARABONBA_PTR_FROM_JSON(GenericConfig, genericConfig_);
        DARABONBA_PTR_FROM_JSON(KubernetesConfig, kubernetesConfig_);
        DARABONBA_PTR_FROM_JSON(Profile, profile_);
      };
      OidcVerificationConfig() = default ;
      OidcVerificationConfig(const OidcVerificationConfig &) = default ;
      OidcVerificationConfig(OidcVerificationConfig &&) = default ;
      OidcVerificationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OidcVerificationConfig() = default ;
      OidcVerificationConfig& operator=(const OidcVerificationConfig &) = default ;
      OidcVerificationConfig& operator=(OidcVerificationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KubernetesConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KubernetesConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(PodNamePrefix, podNamePrefix_);
          DARABONBA_PTR_TO_JSON(ServiceAccountName, serviceAccountName_);
        };
        friend void from_json(const Darabonba::Json& j, KubernetesConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(PodNamePrefix, podNamePrefix_);
          DARABONBA_PTR_FROM_JSON(ServiceAccountName, serviceAccountName_);
        };
        KubernetesConfig() = default ;
        KubernetesConfig(const KubernetesConfig &) = default ;
        KubernetesConfig(KubernetesConfig &&) = default ;
        KubernetesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KubernetesConfig() = default ;
        KubernetesConfig& operator=(const KubernetesConfig &) = default ;
        KubernetesConfig& operator=(KubernetesConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->namespace_ == nullptr
        && this->podNamePrefix_ == nullptr && this->serviceAccountName_ == nullptr; };
        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline KubernetesConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // podNamePrefix Field Functions 
        bool hasPodNamePrefix() const { return this->podNamePrefix_ != nullptr;};
        void deletePodNamePrefix() { this->podNamePrefix_ = nullptr;};
        inline string getPodNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(podNamePrefix_, "") };
        inline KubernetesConfig& setPodNamePrefix(string podNamePrefix) { DARABONBA_PTR_SET_VALUE(podNamePrefix_, podNamePrefix) };


        // serviceAccountName Field Functions 
        bool hasServiceAccountName() const { return this->serviceAccountName_ != nullptr;};
        void deleteServiceAccountName() { this->serviceAccountName_ = nullptr;};
        inline string getServiceAccountName() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountName_, "") };
        inline KubernetesConfig& setServiceAccountName(string serviceAccountName) { DARABONBA_PTR_SET_VALUE(serviceAccountName_, serviceAccountName) };


      protected:
        // The Kubernetes namespace.
        shared_ptr<string> namespace_ {};
        // The pod name prefix.
        shared_ptr<string> podNamePrefix_ {};
        // The Kubernetes service account name.
        shared_ptr<string> serviceAccountName_ {};
      };

      class GenericConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GenericConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Subject, subject_);
        };
        friend void from_json(const Darabonba::Json& j, GenericConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Subject, subject_);
        };
        GenericConfig() = default ;
        GenericConfig(const GenericConfig &) = default ;
        GenericConfig(GenericConfig &&) = default ;
        GenericConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GenericConfig() = default ;
        GenericConfig& operator=(const GenericConfig &) = default ;
        GenericConfig& operator=(GenericConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->subject_ == nullptr; };
        // subject Field Functions 
        bool hasSubject() const { return this->subject_ != nullptr;};
        void deleteSubject() { this->subject_ = nullptr;};
        inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
        inline GenericConfig& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      protected:
        shared_ptr<string> subject_ {};
      };

      class GcpVmConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GcpVmConfig& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ServiceAccountId, serviceAccountId_);
        };
        friend void from_json(const Darabonba::Json& j, GcpVmConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ServiceAccountId, serviceAccountId_);
        };
        GcpVmConfig() = default ;
        GcpVmConfig(const GcpVmConfig &) = default ;
        GcpVmConfig(GcpVmConfig &&) = default ;
        GcpVmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GcpVmConfig() = default ;
        GcpVmConfig& operator=(const GcpVmConfig &) = default ;
        GcpVmConfig& operator=(GcpVmConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->projectId_ == nullptr && this->serviceAccountId_ == nullptr; };
        // instanceIds Field Functions 
        bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
        void deleteInstanceIds() { this->instanceIds_ = nullptr;};
        inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
        inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
        inline GcpVmConfig& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
        inline GcpVmConfig& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline GcpVmConfig& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // serviceAccountId Field Functions 
        bool hasServiceAccountId() const { return this->serviceAccountId_ != nullptr;};
        void deleteServiceAccountId() { this->serviceAccountId_ = nullptr;};
        inline string getServiceAccountId() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountId_, "") };
        inline GcpVmConfig& setServiceAccountId(string serviceAccountId) { DARABONBA_PTR_SET_VALUE(serviceAccountId_, serviceAccountId) };


      protected:
        shared_ptr<vector<string>> instanceIds_ {};
        shared_ptr<string> projectId_ {};
        // The sub claim that corresponds to the service account.
        shared_ptr<string> serviceAccountId_ {};
      };

      class AzureVmConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AzureVmConfig& obj) { 
          DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
          DARABONBA_PTR_TO_JSON(VmNames, vmNames_);
        };
        friend void from_json(const Darabonba::Json& j, AzureVmConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
          DARABONBA_PTR_FROM_JSON(VmNames, vmNames_);
        };
        AzureVmConfig() = default ;
        AzureVmConfig(const AzureVmConfig &) = default ;
        AzureVmConfig(AzureVmConfig &&) = default ;
        AzureVmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AzureVmConfig() = default ;
        AzureVmConfig& operator=(const AzureVmConfig &) = default ;
        AzureVmConfig& operator=(AzureVmConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->principalId_ == nullptr
        && this->resourceGroupName_ == nullptr && this->subscriptionId_ == nullptr && this->vmNames_ == nullptr; };
        // principalId Field Functions 
        bool hasPrincipalId() const { return this->principalId_ != nullptr;};
        void deletePrincipalId() { this->principalId_ = nullptr;};
        inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
        inline AzureVmConfig& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline AzureVmConfig& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


        // subscriptionId Field Functions 
        bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
        void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
        inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
        inline AzureVmConfig& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


        // vmNames Field Functions 
        bool hasVmNames() const { return this->vmNames_ != nullptr;};
        void deleteVmNames() { this->vmNames_ = nullptr;};
        inline const vector<string> & getVmNames() const { DARABONBA_PTR_GET_CONST(vmNames_, vector<string>) };
        inline vector<string> getVmNames() { DARABONBA_PTR_GET(vmNames_, vector<string>) };
        inline AzureVmConfig& setVmNames(const vector<string> & vmNames) { DARABONBA_PTR_SET_VALUE(vmNames_, vmNames) };
        inline AzureVmConfig& setVmNames(vector<string> && vmNames) { DARABONBA_PTR_SET_RVALUE(vmNames_, vmNames) };


      protected:
        shared_ptr<string> principalId_ {};
        shared_ptr<string> resourceGroupName_ {};
        shared_ptr<string> subscriptionId_ {};
        shared_ptr<vector<string>> vmNames_ {};
      };

      virtual bool empty() const override { return this->azureVmConfig_ == nullptr
        && this->gcpVmConfig_ == nullptr && this->genericConfig_ == nullptr && this->kubernetesConfig_ == nullptr && this->profile_ == nullptr; };
      // azureVmConfig Field Functions 
      bool hasAzureVmConfig() const { return this->azureVmConfig_ != nullptr;};
      void deleteAzureVmConfig() { this->azureVmConfig_ = nullptr;};
      inline const OidcVerificationConfig::AzureVmConfig & getAzureVmConfig() const { DARABONBA_PTR_GET_CONST(azureVmConfig_, OidcVerificationConfig::AzureVmConfig) };
      inline OidcVerificationConfig::AzureVmConfig getAzureVmConfig() { DARABONBA_PTR_GET(azureVmConfig_, OidcVerificationConfig::AzureVmConfig) };
      inline OidcVerificationConfig& setAzureVmConfig(const OidcVerificationConfig::AzureVmConfig & azureVmConfig) { DARABONBA_PTR_SET_VALUE(azureVmConfig_, azureVmConfig) };
      inline OidcVerificationConfig& setAzureVmConfig(OidcVerificationConfig::AzureVmConfig && azureVmConfig) { DARABONBA_PTR_SET_RVALUE(azureVmConfig_, azureVmConfig) };


      // gcpVmConfig Field Functions 
      bool hasGcpVmConfig() const { return this->gcpVmConfig_ != nullptr;};
      void deleteGcpVmConfig() { this->gcpVmConfig_ = nullptr;};
      inline const OidcVerificationConfig::GcpVmConfig & getGcpVmConfig() const { DARABONBA_PTR_GET_CONST(gcpVmConfig_, OidcVerificationConfig::GcpVmConfig) };
      inline OidcVerificationConfig::GcpVmConfig getGcpVmConfig() { DARABONBA_PTR_GET(gcpVmConfig_, OidcVerificationConfig::GcpVmConfig) };
      inline OidcVerificationConfig& setGcpVmConfig(const OidcVerificationConfig::GcpVmConfig & gcpVmConfig) { DARABONBA_PTR_SET_VALUE(gcpVmConfig_, gcpVmConfig) };
      inline OidcVerificationConfig& setGcpVmConfig(OidcVerificationConfig::GcpVmConfig && gcpVmConfig) { DARABONBA_PTR_SET_RVALUE(gcpVmConfig_, gcpVmConfig) };


      // genericConfig Field Functions 
      bool hasGenericConfig() const { return this->genericConfig_ != nullptr;};
      void deleteGenericConfig() { this->genericConfig_ = nullptr;};
      inline const OidcVerificationConfig::GenericConfig & getGenericConfig() const { DARABONBA_PTR_GET_CONST(genericConfig_, OidcVerificationConfig::GenericConfig) };
      inline OidcVerificationConfig::GenericConfig getGenericConfig() { DARABONBA_PTR_GET(genericConfig_, OidcVerificationConfig::GenericConfig) };
      inline OidcVerificationConfig& setGenericConfig(const OidcVerificationConfig::GenericConfig & genericConfig) { DARABONBA_PTR_SET_VALUE(genericConfig_, genericConfig) };
      inline OidcVerificationConfig& setGenericConfig(OidcVerificationConfig::GenericConfig && genericConfig) { DARABONBA_PTR_SET_RVALUE(genericConfig_, genericConfig) };


      // kubernetesConfig Field Functions 
      bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
      void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
      inline const OidcVerificationConfig::KubernetesConfig & getKubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, OidcVerificationConfig::KubernetesConfig) };
      inline OidcVerificationConfig::KubernetesConfig getKubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, OidcVerificationConfig::KubernetesConfig) };
      inline OidcVerificationConfig& setKubernetesConfig(const OidcVerificationConfig::KubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
      inline OidcVerificationConfig& setKubernetesConfig(OidcVerificationConfig::KubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
      inline OidcVerificationConfig& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    protected:
      // The Azure VM scenario configuration.
      shared_ptr<OidcVerificationConfig::AzureVmConfig> azureVmConfig_ {};
      // The GCP VM scenario configuration.
      shared_ptr<OidcVerificationConfig::GcpVmConfig> gcpVmConfig_ {};
      shared_ptr<OidcVerificationConfig::GenericConfig> genericConfig_ {};
      // The Kubernetes scenario configuration.
      shared_ptr<OidcVerificationConfig::KubernetesConfig> kubernetesConfig_ {};
      // The OIDC scenario profile. Valid values:
      // 
      // - generic
      // - kubernetes
      // - gcp_vm
      // - azure_vm
      shared_ptr<string> profile_ {};
    };

    class AttributeMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttributeMappings& obj) { 
        DARABONBA_PTR_TO_JSON(SourceValueExpression, sourceValueExpression_);
        DARABONBA_PTR_TO_JSON(TargetField, targetField_);
      };
      friend void from_json(const Darabonba::Json& j, AttributeMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceValueExpression, sourceValueExpression_);
        DARABONBA_PTR_FROM_JSON(TargetField, targetField_);
      };
      AttributeMappings() = default ;
      AttributeMappings(const AttributeMappings &) = default ;
      AttributeMappings(AttributeMappings &&) = default ;
      AttributeMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttributeMappings() = default ;
      AttributeMappings& operator=(const AttributeMappings &) = default ;
      AttributeMappings& operator=(AttributeMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sourceValueExpression_ == nullptr
        && this->targetField_ == nullptr; };
      // sourceValueExpression Field Functions 
      bool hasSourceValueExpression() const { return this->sourceValueExpression_ != nullptr;};
      void deleteSourceValueExpression() { this->sourceValueExpression_ = nullptr;};
      inline string getSourceValueExpression() const { DARABONBA_PTR_GET_DEFAULT(sourceValueExpression_, "") };
      inline AttributeMappings& setSourceValueExpression(string sourceValueExpression) { DARABONBA_PTR_SET_VALUE(sourceValueExpression_, sourceValueExpression) };


      // targetField Field Functions 
      bool hasTargetField() const { return this->targetField_ != nullptr;};
      void deleteTargetField() { this->targetField_ = nullptr;};
      inline string getTargetField() const { DARABONBA_PTR_GET_DEFAULT(targetField_, "") };
      inline AttributeMappings& setTargetField(string targetField) { DARABONBA_PTR_SET_VALUE(targetField_, targetField) };


    protected:
      // The source value expression.
      shared_ptr<string> sourceValueExpression_ {};
      // The target field.
      shared_ptr<string> targetField_ {};
    };

    virtual bool empty() const override { return this->applicationFederatedCredentialName_ == nullptr
        && this->applicationFederatedCredentialType_ == nullptr && this->applicationId_ == nullptr && this->attributeMappings_ == nullptr && this->description_ == nullptr && this->federatedCredentialProviderId_ == nullptr
        && this->instanceId_ == nullptr && this->oidcVerificationConfig_ == nullptr && this->pkcs7VerificationConfig_ == nullptr && this->verificationCondition_ == nullptr && this->verificationMode_ == nullptr; };
    // applicationFederatedCredentialName Field Functions 
    bool hasApplicationFederatedCredentialName() const { return this->applicationFederatedCredentialName_ != nullptr;};
    void deleteApplicationFederatedCredentialName() { this->applicationFederatedCredentialName_ = nullptr;};
    inline string getApplicationFederatedCredentialName() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialName_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationFederatedCredentialName(string applicationFederatedCredentialName) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialName_, applicationFederatedCredentialName) };


    // applicationFederatedCredentialType Field Functions 
    bool hasApplicationFederatedCredentialType() const { return this->applicationFederatedCredentialType_ != nullptr;};
    void deleteApplicationFederatedCredentialType() { this->applicationFederatedCredentialType_ = nullptr;};
    inline string getApplicationFederatedCredentialType() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialType_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationFederatedCredentialType(string applicationFederatedCredentialType) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialType_, applicationFederatedCredentialType) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // attributeMappings Field Functions 
    bool hasAttributeMappings() const { return this->attributeMappings_ != nullptr;};
    void deleteAttributeMappings() { this->attributeMappings_ = nullptr;};
    inline const vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> & getAttributeMappings() const { DARABONBA_PTR_GET_CONST(attributeMappings_, vector<CreateApplicationFederatedCredentialRequest::AttributeMappings>) };
    inline vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> getAttributeMappings() { DARABONBA_PTR_GET(attributeMappings_, vector<CreateApplicationFederatedCredentialRequest::AttributeMappings>) };
    inline CreateApplicationFederatedCredentialRequest& setAttributeMappings(const vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> & attributeMappings) { DARABONBA_PTR_SET_VALUE(attributeMappings_, attributeMappings) };
    inline CreateApplicationFederatedCredentialRequest& setAttributeMappings(vector<CreateApplicationFederatedCredentialRequest::AttributeMappings> && attributeMappings) { DARABONBA_PTR_SET_RVALUE(attributeMappings_, attributeMappings) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationFederatedCredentialRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string getFederatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApplicationFederatedCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // oidcVerificationConfig Field Functions 
    bool hasOidcVerificationConfig() const { return this->oidcVerificationConfig_ != nullptr;};
    void deleteOidcVerificationConfig() { this->oidcVerificationConfig_ = nullptr;};
    inline const CreateApplicationFederatedCredentialRequest::OidcVerificationConfig & getOidcVerificationConfig() const { DARABONBA_PTR_GET_CONST(oidcVerificationConfig_, CreateApplicationFederatedCredentialRequest::OidcVerificationConfig) };
    inline CreateApplicationFederatedCredentialRequest::OidcVerificationConfig getOidcVerificationConfig() { DARABONBA_PTR_GET(oidcVerificationConfig_, CreateApplicationFederatedCredentialRequest::OidcVerificationConfig) };
    inline CreateApplicationFederatedCredentialRequest& setOidcVerificationConfig(const CreateApplicationFederatedCredentialRequest::OidcVerificationConfig & oidcVerificationConfig) { DARABONBA_PTR_SET_VALUE(oidcVerificationConfig_, oidcVerificationConfig) };
    inline CreateApplicationFederatedCredentialRequest& setOidcVerificationConfig(CreateApplicationFederatedCredentialRequest::OidcVerificationConfig && oidcVerificationConfig) { DARABONBA_PTR_SET_RVALUE(oidcVerificationConfig_, oidcVerificationConfig) };


    // pkcs7VerificationConfig Field Functions 
    bool hasPkcs7VerificationConfig() const { return this->pkcs7VerificationConfig_ != nullptr;};
    void deletePkcs7VerificationConfig() { this->pkcs7VerificationConfig_ = nullptr;};
    inline const CreateApplicationFederatedCredentialRequest::Pkcs7VerificationConfig & getPkcs7VerificationConfig() const { DARABONBA_PTR_GET_CONST(pkcs7VerificationConfig_, CreateApplicationFederatedCredentialRequest::Pkcs7VerificationConfig) };
    inline CreateApplicationFederatedCredentialRequest::Pkcs7VerificationConfig getPkcs7VerificationConfig() { DARABONBA_PTR_GET(pkcs7VerificationConfig_, CreateApplicationFederatedCredentialRequest::Pkcs7VerificationConfig) };
    inline CreateApplicationFederatedCredentialRequest& setPkcs7VerificationConfig(const CreateApplicationFederatedCredentialRequest::Pkcs7VerificationConfig & pkcs7VerificationConfig) { DARABONBA_PTR_SET_VALUE(pkcs7VerificationConfig_, pkcs7VerificationConfig) };
    inline CreateApplicationFederatedCredentialRequest& setPkcs7VerificationConfig(CreateApplicationFederatedCredentialRequest::Pkcs7VerificationConfig && pkcs7VerificationConfig) { DARABONBA_PTR_SET_RVALUE(pkcs7VerificationConfig_, pkcs7VerificationConfig) };


    // verificationCondition Field Functions 
    bool hasVerificationCondition() const { return this->verificationCondition_ != nullptr;};
    void deleteVerificationCondition() { this->verificationCondition_ = nullptr;};
    inline string getVerificationCondition() const { DARABONBA_PTR_GET_DEFAULT(verificationCondition_, "") };
    inline CreateApplicationFederatedCredentialRequest& setVerificationCondition(string verificationCondition) { DARABONBA_PTR_SET_VALUE(verificationCondition_, verificationCondition) };


    // verificationMode Field Functions 
    bool hasVerificationMode() const { return this->verificationMode_ != nullptr;};
    void deleteVerificationMode() { this->verificationMode_ = nullptr;};
    inline string getVerificationMode() const { DARABONBA_PTR_GET_DEFAULT(verificationMode_, "") };
    inline CreateApplicationFederatedCredentialRequest& setVerificationMode(string verificationMode) { DARABONBA_PTR_SET_VALUE(verificationMode_, verificationMode) };


  protected:
    // The name of the application federated identity credential.
    // 
    // This parameter is required.
    shared_ptr<string> applicationFederatedCredentialName_ {};
    // The type of the application federated identity credential.
    // 
    // This parameter is required.
    shared_ptr<string> applicationFederatedCredentialType_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The attribute mappings.
    shared_ptr<vector<CreateApplicationFederatedCredentialRequest::AttributeMappings>> attributeMappings_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The federated credential provider ID.
    // 
    // This parameter is required.
    shared_ptr<string> federatedCredentialProviderId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The OIDC structured configuration. This parameter applies when the verification mode is structured and the credential type is oidc.
    shared_ptr<CreateApplicationFederatedCredentialRequest::OidcVerificationConfig> oidcVerificationConfig_ {};
    // The PKCS#7 structured configuration. This parameter applies when the verification mode is structured and the credential type is pkcs7.
    shared_ptr<CreateApplicationFederatedCredentialRequest::Pkcs7VerificationConfig> pkcs7VerificationConfig_ {};
    // The verification condition.
    shared_ptr<string> verificationCondition_ {};
    // The verification mode. Valid values:
    // 
    // - freedom (default)
    // - structured
    shared_ptr<string> verificationMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
