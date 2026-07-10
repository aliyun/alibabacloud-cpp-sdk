// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSFORPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSFORPROVIDERRESPONSEBODY_HPP_
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
  class ListApplicationFederatedCredentialsForProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationFederatedCredentialsForProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentials, applicationFederatedCredentials_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationFederatedCredentialsForProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentials, applicationFederatedCredentials_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationFederatedCredentialsForProviderResponseBody() = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(const ListApplicationFederatedCredentialsForProviderResponseBody &) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(ListApplicationFederatedCredentialsForProviderResponseBody &&) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationFederatedCredentialsForProviderResponseBody() = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody& operator=(const ListApplicationFederatedCredentialsForProviderResponseBody &) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody& operator=(ListApplicationFederatedCredentialsForProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationFederatedCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationFederatedCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
        DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
        DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(OidcVerificationConfig, oidcVerificationConfig_);
        DARABONBA_PTR_TO_JSON(Pkcs7VerificationConfig, pkcs7VerificationConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VerificationCondition, verificationCondition_);
        DARABONBA_PTR_TO_JSON(VerificationMode, verificationMode_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationFederatedCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
        DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
        DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(OidcVerificationConfig, oidcVerificationConfig_);
        DARABONBA_PTR_FROM_JSON(Pkcs7VerificationConfig, pkcs7VerificationConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VerificationCondition, verificationCondition_);
        DARABONBA_PTR_FROM_JSON(VerificationMode, verificationMode_);
      };
      ApplicationFederatedCredentials() = default ;
      ApplicationFederatedCredentials(const ApplicationFederatedCredentials &) = default ;
      ApplicationFederatedCredentials(ApplicationFederatedCredentials &&) = default ;
      ApplicationFederatedCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationFederatedCredentials() = default ;
      ApplicationFederatedCredentials& operator=(const ApplicationFederatedCredentials &) = default ;
      ApplicationFederatedCredentials& operator=(ApplicationFederatedCredentials &&) = default ;
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
        // The list of allowed instance IDs. A maximum of 10 IDs are supported.
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
          // The list of VM instance IDs. A maximum of 10 IDs are supported.
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
        // The OIDC scenario profile. Valid values: generic, kubernetes, gcp_vm, and azure_vm.
        shared_ptr<string> profile_ {};
      };

      virtual bool empty() const override { return this->applicationFederatedCredentialId_ == nullptr
        && this->applicationFederatedCredentialName_ == nullptr && this->applicationFederatedCredentialType_ == nullptr && this->applicationId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->federatedCredentialProviderId_ == nullptr && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr && this->oidcVerificationConfig_ == nullptr && this->pkcs7VerificationConfig_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr && this->verificationCondition_ == nullptr && this->verificationMode_ == nullptr; };
      // applicationFederatedCredentialId Field Functions 
      bool hasApplicationFederatedCredentialId() const { return this->applicationFederatedCredentialId_ != nullptr;};
      void deleteApplicationFederatedCredentialId() { this->applicationFederatedCredentialId_ = nullptr;};
      inline string getApplicationFederatedCredentialId() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialId_, "") };
      inline ApplicationFederatedCredentials& setApplicationFederatedCredentialId(string applicationFederatedCredentialId) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialId_, applicationFederatedCredentialId) };


      // applicationFederatedCredentialName Field Functions 
      bool hasApplicationFederatedCredentialName() const { return this->applicationFederatedCredentialName_ != nullptr;};
      void deleteApplicationFederatedCredentialName() { this->applicationFederatedCredentialName_ = nullptr;};
      inline string getApplicationFederatedCredentialName() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialName_, "") };
      inline ApplicationFederatedCredentials& setApplicationFederatedCredentialName(string applicationFederatedCredentialName) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialName_, applicationFederatedCredentialName) };


      // applicationFederatedCredentialType Field Functions 
      bool hasApplicationFederatedCredentialType() const { return this->applicationFederatedCredentialType_ != nullptr;};
      void deleteApplicationFederatedCredentialType() { this->applicationFederatedCredentialType_ = nullptr;};
      inline string getApplicationFederatedCredentialType() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialType_, "") };
      inline ApplicationFederatedCredentials& setApplicationFederatedCredentialType(string applicationFederatedCredentialType) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialType_, applicationFederatedCredentialType) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationFederatedCredentials& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationFederatedCredentials& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationFederatedCredentials& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // federatedCredentialProviderId Field Functions 
      bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
      void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
      inline string getFederatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
      inline ApplicationFederatedCredentials& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationFederatedCredentials& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ApplicationFederatedCredentials& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // oidcVerificationConfig Field Functions 
      bool hasOidcVerificationConfig() const { return this->oidcVerificationConfig_ != nullptr;};
      void deleteOidcVerificationConfig() { this->oidcVerificationConfig_ = nullptr;};
      inline const ApplicationFederatedCredentials::OidcVerificationConfig & getOidcVerificationConfig() const { DARABONBA_PTR_GET_CONST(oidcVerificationConfig_, ApplicationFederatedCredentials::OidcVerificationConfig) };
      inline ApplicationFederatedCredentials::OidcVerificationConfig getOidcVerificationConfig() { DARABONBA_PTR_GET(oidcVerificationConfig_, ApplicationFederatedCredentials::OidcVerificationConfig) };
      inline ApplicationFederatedCredentials& setOidcVerificationConfig(const ApplicationFederatedCredentials::OidcVerificationConfig & oidcVerificationConfig) { DARABONBA_PTR_SET_VALUE(oidcVerificationConfig_, oidcVerificationConfig) };
      inline ApplicationFederatedCredentials& setOidcVerificationConfig(ApplicationFederatedCredentials::OidcVerificationConfig && oidcVerificationConfig) { DARABONBA_PTR_SET_RVALUE(oidcVerificationConfig_, oidcVerificationConfig) };


      // pkcs7VerificationConfig Field Functions 
      bool hasPkcs7VerificationConfig() const { return this->pkcs7VerificationConfig_ != nullptr;};
      void deletePkcs7VerificationConfig() { this->pkcs7VerificationConfig_ = nullptr;};
      inline const ApplicationFederatedCredentials::Pkcs7VerificationConfig & getPkcs7VerificationConfig() const { DARABONBA_PTR_GET_CONST(pkcs7VerificationConfig_, ApplicationFederatedCredentials::Pkcs7VerificationConfig) };
      inline ApplicationFederatedCredentials::Pkcs7VerificationConfig getPkcs7VerificationConfig() { DARABONBA_PTR_GET(pkcs7VerificationConfig_, ApplicationFederatedCredentials::Pkcs7VerificationConfig) };
      inline ApplicationFederatedCredentials& setPkcs7VerificationConfig(const ApplicationFederatedCredentials::Pkcs7VerificationConfig & pkcs7VerificationConfig) { DARABONBA_PTR_SET_VALUE(pkcs7VerificationConfig_, pkcs7VerificationConfig) };
      inline ApplicationFederatedCredentials& setPkcs7VerificationConfig(ApplicationFederatedCredentials::Pkcs7VerificationConfig && pkcs7VerificationConfig) { DARABONBA_PTR_SET_RVALUE(pkcs7VerificationConfig_, pkcs7VerificationConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationFederatedCredentials& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ApplicationFederatedCredentials& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // verificationCondition Field Functions 
      bool hasVerificationCondition() const { return this->verificationCondition_ != nullptr;};
      void deleteVerificationCondition() { this->verificationCondition_ = nullptr;};
      inline string getVerificationCondition() const { DARABONBA_PTR_GET_DEFAULT(verificationCondition_, "") };
      inline ApplicationFederatedCredentials& setVerificationCondition(string verificationCondition) { DARABONBA_PTR_SET_VALUE(verificationCondition_, verificationCondition) };


      // verificationMode Field Functions 
      bool hasVerificationMode() const { return this->verificationMode_ != nullptr;};
      void deleteVerificationMode() { this->verificationMode_ = nullptr;};
      inline string getVerificationMode() const { DARABONBA_PTR_GET_DEFAULT(verificationMode_, "") };
      inline ApplicationFederatedCredentials& setVerificationMode(string verificationMode) { DARABONBA_PTR_SET_VALUE(verificationMode_, verificationMode) };


    protected:
      // The application federated credential ID.
      shared_ptr<string> applicationFederatedCredentialId_ {};
      // The application federated credential name.
      shared_ptr<string> applicationFederatedCredentialName_ {};
      // The application federated credential type.
      shared_ptr<string> applicationFederatedCredentialType_ {};
      // The application ID.
      shared_ptr<string> applicationId_ {};
      // The time when the credential was created.
      shared_ptr<int64_t> createTime_ {};
      // The application federated credential description.
      shared_ptr<string> description_ {};
      // The federated trust source ID.
      shared_ptr<string> federatedCredentialProviderId_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The time when the credential was last used.
      shared_ptr<int64_t> lastUsedTime_ {};
      // The OIDC structured configuration. This applies to structured mode with the OIDC type.
      shared_ptr<ApplicationFederatedCredentials::OidcVerificationConfig> oidcVerificationConfig_ {};
      // The PKCS#7 structured configuration. This applies to structured mode with the PKCS#7 type.
      shared_ptr<ApplicationFederatedCredentials::Pkcs7VerificationConfig> pkcs7VerificationConfig_ {};
      // The application federated credential status.
      shared_ptr<string> status_ {};
      // The time when the credential was last updated.
      shared_ptr<int64_t> updateTime_ {};
      // The verification condition. In freedom mode, this is a manually entered value. In structured mode, this is the final compiled value.
      shared_ptr<string> verificationCondition_ {};
      // The verification mode. Valid values: freedom and structured.
      shared_ptr<string> verificationMode_ {};
    };

    virtual bool empty() const override { return this->applicationFederatedCredentials_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationFederatedCredentials Field Functions 
    bool hasApplicationFederatedCredentials() const { return this->applicationFederatedCredentials_ != nullptr;};
    void deleteApplicationFederatedCredentials() { this->applicationFederatedCredentials_ = nullptr;};
    inline const vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> & getApplicationFederatedCredentials() const { DARABONBA_PTR_GET_CONST(applicationFederatedCredentials_, vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials>) };
    inline vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> getApplicationFederatedCredentials() { DARABONBA_PTR_GET(applicationFederatedCredentials_, vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials>) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setApplicationFederatedCredentials(const vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> & applicationFederatedCredentials) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentials_, applicationFederatedCredentials) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setApplicationFederatedCredentials(vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> && applicationFederatedCredentials) { DARABONBA_PTR_SET_RVALUE(applicationFederatedCredentials_, applicationFederatedCredentials) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of application federated credentials.
    shared_ptr<vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials>> applicationFederatedCredentials_ {};
    // The maximum number of entries returned per page in a paged query. This parameter is used for paging.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token returned by this call.
    shared_ptr<string> nextToken_ {};
    // The pagination token returned by this call.
    shared_ptr<string> previousToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
