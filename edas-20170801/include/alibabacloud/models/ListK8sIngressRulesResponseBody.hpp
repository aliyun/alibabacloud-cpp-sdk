// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sIngressRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sIngressRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sIngressRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListK8sIngressRulesResponseBody() = default ;
    ListK8sIngressRulesResponseBody(const ListK8sIngressRulesResponseBody &) = default ;
    ListK8sIngressRulesResponseBody(ListK8sIngressRulesResponseBody &&) = default ;
    ListK8sIngressRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sIngressRulesResponseBody() = default ;
    ListK8sIngressRulesResponseBody& operator=(const ListK8sIngressRulesResponseBody &) = default ;
    ListK8sIngressRulesResponseBody& operator=(ListK8sIngressRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(IngressConfs, ingressConfs_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(IngressConfs, ingressConfs_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      class IngressConfs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IngressConfs& obj) { 
          DARABONBA_PTR_TO_JSON(AlbId, albId_);
          DARABONBA_PTR_TO_JSON(Annotations, annotations_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DashboardUrl, dashboardUrl_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(IngressType, ingressType_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(MseGatewayId, mseGatewayId_);
          DARABONBA_PTR_TO_JSON(MseGatewayName, mseGatewayName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(OfficalBasicUrl, officalBasicUrl_);
          DARABONBA_PTR_TO_JSON(OfficalRequestUrl, officalRequestUrl_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(SslRedirect, sslRedirect_);
        };
        friend void from_json(const Darabonba::Json& j, IngressConfs& obj) { 
          DARABONBA_PTR_FROM_JSON(AlbId, albId_);
          DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DashboardUrl, dashboardUrl_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(IngressType, ingressType_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(MseGatewayId, mseGatewayId_);
          DARABONBA_PTR_FROM_JSON(MseGatewayName, mseGatewayName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(OfficalBasicUrl, officalBasicUrl_);
          DARABONBA_PTR_FROM_JSON(OfficalRequestUrl, officalRequestUrl_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(SslRedirect, sslRedirect_);
        };
        IngressConfs() = default ;
        IngressConfs(const IngressConfs &) = default ;
        IngressConfs(IngressConfs &&) = default ;
        IngressConfs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IngressConfs() = default ;
        IngressConfs& operator=(const IngressConfs &) = default ;
        IngressConfs& operator=(IngressConfs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(EnableTls, enableTls_);
            DARABONBA_PTR_TO_JSON(Host, host_);
            DARABONBA_PTR_TO_JSON(Paths, paths_);
            DARABONBA_PTR_TO_JSON(SecretName, secretName_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(EnableTls, enableTls_);
            DARABONBA_PTR_FROM_JSON(Host, host_);
            DARABONBA_PTR_FROM_JSON(Paths, paths_);
            DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Paths : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Paths& obj) { 
              DARABONBA_PTR_TO_JSON(AppId, appId_);
              DARABONBA_PTR_TO_JSON(AppName, appName_);
              DARABONBA_PTR_TO_JSON(Backend, backend_);
              DARABONBA_PTR_TO_JSON(CollectRate, collectRate_);
              DARABONBA_PTR_TO_JSON(Path, path_);
              DARABONBA_PTR_TO_JSON(PathType, pathType_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, Paths& obj) { 
              DARABONBA_PTR_FROM_JSON(AppId, appId_);
              DARABONBA_PTR_FROM_JSON(AppName, appName_);
              DARABONBA_PTR_FROM_JSON(Backend, backend_);
              DARABONBA_PTR_FROM_JSON(CollectRate, collectRate_);
              DARABONBA_PTR_FROM_JSON(Path, path_);
              DARABONBA_PTR_FROM_JSON(PathType, pathType_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            Paths() = default ;
            Paths(const Paths &) = default ;
            Paths(Paths &&) = default ;
            Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Paths() = default ;
            Paths& operator=(const Paths &) = default ;
            Paths& operator=(Paths &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Backend : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Backend& obj) { 
                DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
                DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
              };
              friend void from_json(const Darabonba::Json& j, Backend& obj) { 
                DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
                DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
              };
              Backend() = default ;
              Backend(const Backend &) = default ;
              Backend(Backend &&) = default ;
              Backend(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Backend() = default ;
              Backend& operator=(const Backend &) = default ;
              Backend& operator=(Backend &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->serviceName_ == nullptr
        && this->servicePort_ == nullptr; };
              // serviceName Field Functions 
              bool hasServiceName() const { return this->serviceName_ != nullptr;};
              void deleteServiceName() { this->serviceName_ = nullptr;};
              inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
              inline Backend& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


              // servicePort Field Functions 
              bool hasServicePort() const { return this->servicePort_ != nullptr;};
              void deleteServicePort() { this->servicePort_ = nullptr;};
              inline string getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
              inline Backend& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


            protected:
              // The name of the backend Service.
              shared_ptr<string> serviceName_ {};
              // The port of the backend Service.
              shared_ptr<string> servicePort_ {};
            };

            virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->backend_ == nullptr && this->collectRate_ == nullptr && this->path_ == nullptr && this->pathType_ == nullptr
        && this->status_ == nullptr; };
            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline Paths& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // appName Field Functions 
            bool hasAppName() const { return this->appName_ != nullptr;};
            void deleteAppName() { this->appName_ = nullptr;};
            inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
            inline Paths& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


            // backend Field Functions 
            bool hasBackend() const { return this->backend_ != nullptr;};
            void deleteBackend() { this->backend_ = nullptr;};
            inline const Paths::Backend & getBackend() const { DARABONBA_PTR_GET_CONST(backend_, Paths::Backend) };
            inline Paths::Backend getBackend() { DARABONBA_PTR_GET(backend_, Paths::Backend) };
            inline Paths& setBackend(const Paths::Backend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
            inline Paths& setBackend(Paths::Backend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


            // collectRate Field Functions 
            bool hasCollectRate() const { return this->collectRate_ != nullptr;};
            void deleteCollectRate() { this->collectRate_ = nullptr;};
            inline int32_t getCollectRate() const { DARABONBA_PTR_GET_DEFAULT(collectRate_, 0) };
            inline Paths& setCollectRate(int32_t collectRate) { DARABONBA_PTR_SET_VALUE(collectRate_, collectRate) };


            // path Field Functions 
            bool hasPath() const { return this->path_ != nullptr;};
            void deletePath() { this->path_ = nullptr;};
            inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
            inline Paths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


            // pathType Field Functions 
            bool hasPathType() const { return this->pathType_ != nullptr;};
            void deletePathType() { this->pathType_ = nullptr;};
            inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
            inline Paths& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Paths& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The ID of the EDAS application.
            shared_ptr<string> appId_ {};
            // The name of the EDAS application.
            shared_ptr<string> appName_ {};
            // The configurations of the backend Service.
            shared_ptr<Paths::Backend> backend_ {};
            // The collection rate that is set based on the trace query feature. You can add a trace ID to a gateway to use the trace query feature of EDAS.
            shared_ptr<int32_t> collectRate_ {};
            // The path to be accessed.
            shared_ptr<string> path_ {};
            // The path type that determines how a path is matched.
            // 
            // *   ImplementationSpecific (default)
            // *   Exact
            // *   Prefix
            shared_ptr<string> pathType_ {};
            // The state of the Ingress. Valid values:
            // 
            // *   **Normal**: The Ingress works as expected.
            // *   **ServiceNotFound**: The backend Service does not exist.
            // *   **InvalidServicePort**: The Service port is invalid.
            // *   **NotManagedService**: The Service is not managed by EDAS.
            // *   **Unknown**: An unknown error occurred.
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->enableTls_ == nullptr
        && this->host_ == nullptr && this->paths_ == nullptr && this->secretName_ == nullptr; };
          // enableTls Field Functions 
          bool hasEnableTls() const { return this->enableTls_ != nullptr;};
          void deleteEnableTls() { this->enableTls_ = nullptr;};
          inline bool getEnableTls() const { DARABONBA_PTR_GET_DEFAULT(enableTls_, false) };
          inline Rules& setEnableTls(bool enableTls) { DARABONBA_PTR_SET_VALUE(enableTls_, enableTls) };


          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline Rules& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // paths Field Functions 
          bool hasPaths() const { return this->paths_ != nullptr;};
          void deletePaths() { this->paths_ = nullptr;};
          inline const vector<Rules::Paths> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<Rules::Paths>) };
          inline vector<Rules::Paths> getPaths() { DARABONBA_PTR_GET(paths_, vector<Rules::Paths>) };
          inline Rules& setPaths(const vector<Rules::Paths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
          inline Rules& setPaths(vector<Rules::Paths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


          // secretName Field Functions 
          bool hasSecretName() const { return this->secretName_ != nullptr;};
          void deleteSecretName() { this->secretName_ = nullptr;};
          inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
          inline Rules& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


        protected:
          // Indicates whether TLS is enabled. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> enableTls_ {};
          // The domain name to be accessed.
          shared_ptr<string> host_ {};
          // The paths to be accessed.
          shared_ptr<vector<Rules::Paths>> paths_ {};
          // The name of the Secret that stores the Transport Layer Security (TLS) certificate.
          shared_ptr<string> secretName_ {};
        };

        virtual bool empty() const override { return this->albId_ == nullptr
        && this->annotations_ == nullptr && this->creationTime_ == nullptr && this->dashboardUrl_ == nullptr && this->endpoint_ == nullptr && this->ingressType_ == nullptr
        && this->labels_ == nullptr && this->mseGatewayId_ == nullptr && this->mseGatewayName_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->officalBasicUrl_ == nullptr && this->officalRequestUrl_ == nullptr && this->rules_ == nullptr && this->sslRedirect_ == nullptr; };
        // albId Field Functions 
        bool hasAlbId() const { return this->albId_ != nullptr;};
        void deleteAlbId() { this->albId_ = nullptr;};
        inline string getAlbId() const { DARABONBA_PTR_GET_DEFAULT(albId_, "") };
        inline IngressConfs& setAlbId(string albId) { DARABONBA_PTR_SET_VALUE(albId_, albId) };


        // annotations Field Functions 
        bool hasAnnotations() const { return this->annotations_ != nullptr;};
        void deleteAnnotations() { this->annotations_ = nullptr;};
        inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
        inline IngressConfs& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline IngressConfs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // dashboardUrl Field Functions 
        bool hasDashboardUrl() const { return this->dashboardUrl_ != nullptr;};
        void deleteDashboardUrl() { this->dashboardUrl_ = nullptr;};
        inline string getDashboardUrl() const { DARABONBA_PTR_GET_DEFAULT(dashboardUrl_, "") };
        inline IngressConfs& setDashboardUrl(string dashboardUrl) { DARABONBA_PTR_SET_VALUE(dashboardUrl_, dashboardUrl) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline IngressConfs& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // ingressType Field Functions 
        bool hasIngressType() const { return this->ingressType_ != nullptr;};
        void deleteIngressType() { this->ingressType_ = nullptr;};
        inline string getIngressType() const { DARABONBA_PTR_GET_DEFAULT(ingressType_, "") };
        inline IngressConfs& setIngressType(string ingressType) { DARABONBA_PTR_SET_VALUE(ingressType_, ingressType) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline IngressConfs& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // mseGatewayId Field Functions 
        bool hasMseGatewayId() const { return this->mseGatewayId_ != nullptr;};
        void deleteMseGatewayId() { this->mseGatewayId_ = nullptr;};
        inline string getMseGatewayId() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayId_, "") };
        inline IngressConfs& setMseGatewayId(string mseGatewayId) { DARABONBA_PTR_SET_VALUE(mseGatewayId_, mseGatewayId) };


        // mseGatewayName Field Functions 
        bool hasMseGatewayName() const { return this->mseGatewayName_ != nullptr;};
        void deleteMseGatewayName() { this->mseGatewayName_ = nullptr;};
        inline string getMseGatewayName() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayName_, "") };
        inline IngressConfs& setMseGatewayName(string mseGatewayName) { DARABONBA_PTR_SET_VALUE(mseGatewayName_, mseGatewayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IngressConfs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline IngressConfs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // officalBasicUrl Field Functions 
        bool hasOfficalBasicUrl() const { return this->officalBasicUrl_ != nullptr;};
        void deleteOfficalBasicUrl() { this->officalBasicUrl_ = nullptr;};
        inline string getOfficalBasicUrl() const { DARABONBA_PTR_GET_DEFAULT(officalBasicUrl_, "") };
        inline IngressConfs& setOfficalBasicUrl(string officalBasicUrl) { DARABONBA_PTR_SET_VALUE(officalBasicUrl_, officalBasicUrl) };


        // officalRequestUrl Field Functions 
        bool hasOfficalRequestUrl() const { return this->officalRequestUrl_ != nullptr;};
        void deleteOfficalRequestUrl() { this->officalRequestUrl_ = nullptr;};
        inline string getOfficalRequestUrl() const { DARABONBA_PTR_GET_DEFAULT(officalRequestUrl_, "") };
        inline IngressConfs& setOfficalRequestUrl(string officalRequestUrl) { DARABONBA_PTR_SET_VALUE(officalRequestUrl_, officalRequestUrl) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<IngressConfs::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<IngressConfs::Rules>) };
        inline vector<IngressConfs::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<IngressConfs::Rules>) };
        inline IngressConfs& setRules(const vector<IngressConfs::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline IngressConfs& setRules(vector<IngressConfs::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // sslRedirect Field Functions 
        bool hasSslRedirect() const { return this->sslRedirect_ != nullptr;};
        void deleteSslRedirect() { this->sslRedirect_ = nullptr;};
        inline bool getSslRedirect() const { DARABONBA_PTR_GET_DEFAULT(sslRedirect_, false) };
        inline IngressConfs& setSslRedirect(bool sslRedirect) { DARABONBA_PTR_SET_VALUE(sslRedirect_, sslRedirect) };


      protected:
        // The ID of the ALB instance.
        shared_ptr<string> albId_ {};
        // The annotations.
        shared_ptr<string> annotations_ {};
        // The time when the Ingress was created.
        shared_ptr<string> creationTime_ {};
        // The monitoring URL of the Ingress.
        shared_ptr<string> dashboardUrl_ {};
        // The IP address of the Ingress.
        shared_ptr<string> endpoint_ {};
        // The Ingress type. Valid values:
        // 
        // *   **NginxIngress**: NGINX Ingress controller
        // *   **AlbIngress**: ALB Ingress controller
        // 
        // Default value: NginxIngress.
        shared_ptr<string> ingressType_ {};
        // The tags.
        shared_ptr<string> labels_ {};
        // The ID of the MSE gateway.
        shared_ptr<string> mseGatewayId_ {};
        // The name of the MSE gateway.
        shared_ptr<string> mseGatewayName_ {};
        // The Ingress name.
        shared_ptr<string> name_ {};
        // The Kubernetes namespace to which the Ingress belongs.
        shared_ptr<string> namespace_ {};
        // The URL used for basic monitoring of the open source version.
        shared_ptr<string> officalBasicUrl_ {};
        // The URL used for request performance monitoring of the open source version.
        shared_ptr<string> officalRequestUrl_ {};
        // The routing rules.
        shared_ptr<vector<IngressConfs::Rules>> rules_ {};
        // Indicates whether SSL redirection is enabled. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> sslRedirect_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->ingressConfs_ == nullptr && this->regionId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // ingressConfs Field Functions 
      bool hasIngressConfs() const { return this->ingressConfs_ != nullptr;};
      void deleteIngressConfs() { this->ingressConfs_ = nullptr;};
      inline const vector<Data::IngressConfs> & getIngressConfs() const { DARABONBA_PTR_GET_CONST(ingressConfs_, vector<Data::IngressConfs>) };
      inline vector<Data::IngressConfs> getIngressConfs() { DARABONBA_PTR_GET(ingressConfs_, vector<Data::IngressConfs>) };
      inline Data& setIngressConfs(const vector<Data::IngressConfs> & ingressConfs) { DARABONBA_PTR_SET_VALUE(ingressConfs_, ingressConfs) };
      inline Data& setIngressConfs(vector<Data::IngressConfs> && ingressConfs) { DARABONBA_PTR_SET_RVALUE(ingressConfs_, ingressConfs) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The cluster name.
      shared_ptr<string> clusterName_ {};
      // The Ingresses.
      shared_ptr<vector<Data::IngressConfs>> ingressConfs_ {};
      // The ID of the Alibaba Cloud region.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListK8sIngressRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListK8sIngressRulesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListK8sIngressRulesResponseBody::Data>) };
    inline vector<ListK8sIngressRulesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListK8sIngressRulesResponseBody::Data>) };
    inline ListK8sIngressRulesResponseBody& setData(const vector<ListK8sIngressRulesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListK8sIngressRulesResponseBody& setData(vector<ListK8sIngressRulesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListK8sIngressRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListK8sIngressRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<vector<ListK8sIngressRulesResponseBody::Data>> data_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
