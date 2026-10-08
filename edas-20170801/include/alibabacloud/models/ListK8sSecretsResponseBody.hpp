// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODY_HPP_
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
  class ListK8sSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListK8sSecretsResponseBody() = default ;
    ListK8sSecretsResponseBody(const ListK8sSecretsResponseBody &) = default ;
    ListK8sSecretsResponseBody(ListK8sSecretsResponseBody &&) = default ;
    ListK8sSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sSecretsResponseBody() = default ;
    ListK8sSecretsResponseBody& operator=(const ListK8sSecretsResponseBody &) = default ;
    ListK8sSecretsResponseBody& operator=(ListK8sSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Secrets, secrets_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Secrets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Secrets& obj) { 
          DARABONBA_PTR_TO_JSON(Base64Encoded, base64Encoded_);
          DARABONBA_PTR_TO_JSON(CertDetail, certDetail_);
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(CertRegionId, certRegionId_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(RelatedApps, relatedApps_);
          DARABONBA_PTR_TO_JSON(RelatedIngressRules, relatedIngressRules_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Secrets& obj) { 
          DARABONBA_PTR_FROM_JSON(Base64Encoded, base64Encoded_);
          DARABONBA_PTR_FROM_JSON(CertDetail, certDetail_);
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(CertRegionId, certRegionId_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(RelatedApps, relatedApps_);
          DARABONBA_PTR_FROM_JSON(RelatedIngressRules, relatedIngressRules_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Secrets() = default ;
        Secrets(const Secrets &) = default ;
        Secrets(Secrets &&) = default ;
        Secrets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Secrets() = default ;
        Secrets& operator=(const Secrets &) = default ;
        Secrets& operator=(Secrets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RelatedIngressRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelatedIngressRules& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Namespace, namespace_);
            DARABONBA_PTR_TO_JSON(RelatedApps, relatedApps_);
          };
          friend void from_json(const Darabonba::Json& j, RelatedIngressRules& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
            DARABONBA_PTR_FROM_JSON(RelatedApps, relatedApps_);
          };
          RelatedIngressRules() = default ;
          RelatedIngressRules(const RelatedIngressRules &) = default ;
          RelatedIngressRules(RelatedIngressRules &&) = default ;
          RelatedIngressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelatedIngressRules() = default ;
          RelatedIngressRules& operator=(const RelatedIngressRules &) = default ;
          RelatedIngressRules& operator=(RelatedIngressRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RelatedApps : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RelatedApps& obj) { 
              DARABONBA_PTR_TO_JSON(AppId, appId_);
              DARABONBA_PTR_TO_JSON(AppName, appName_);
            };
            friend void from_json(const Darabonba::Json& j, RelatedApps& obj) { 
              DARABONBA_PTR_FROM_JSON(AppId, appId_);
              DARABONBA_PTR_FROM_JSON(AppName, appName_);
            };
            RelatedApps() = default ;
            RelatedApps(const RelatedApps &) = default ;
            RelatedApps(RelatedApps &&) = default ;
            RelatedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RelatedApps() = default ;
            RelatedApps& operator=(const RelatedApps &) = default ;
            RelatedApps& operator=(RelatedApps &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline RelatedApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // appName Field Functions 
            bool hasAppName() const { return this->appName_ != nullptr;};
            void deleteAppName() { this->appName_ = nullptr;};
            inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
            inline RelatedApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


          protected:
            // The ID of the application.
            shared_ptr<string> appId_ {};
            // The name of the EDAS application.
            shared_ptr<string> appName_ {};
          };

          virtual bool empty() const override { return this->name_ == nullptr
        && this->namespace_ == nullptr && this->relatedApps_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RelatedIngressRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline RelatedIngressRules& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


          // relatedApps Field Functions 
          bool hasRelatedApps() const { return this->relatedApps_ != nullptr;};
          void deleteRelatedApps() { this->relatedApps_ = nullptr;};
          inline const vector<RelatedIngressRules::RelatedApps> & getRelatedApps() const { DARABONBA_PTR_GET_CONST(relatedApps_, vector<RelatedIngressRules::RelatedApps>) };
          inline vector<RelatedIngressRules::RelatedApps> getRelatedApps() { DARABONBA_PTR_GET(relatedApps_, vector<RelatedIngressRules::RelatedApps>) };
          inline RelatedIngressRules& setRelatedApps(const vector<RelatedIngressRules::RelatedApps> & relatedApps) { DARABONBA_PTR_SET_VALUE(relatedApps_, relatedApps) };
          inline RelatedIngressRules& setRelatedApps(vector<RelatedIngressRules::RelatedApps> && relatedApps) { DARABONBA_PTR_SET_RVALUE(relatedApps_, relatedApps) };


        protected:
          // The name of the rule in the Ingress.
          shared_ptr<string> name_ {};
          // The namespaces of the Kubernetes cluster.
          shared_ptr<string> namespace_ {};
          // Aplications that are associated with the Ingress.
          shared_ptr<vector<RelatedIngressRules::RelatedApps>> relatedApps_ {};
        };

        class RelatedApps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelatedApps& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
          };
          friend void from_json(const Darabonba::Json& j, RelatedApps& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
          };
          RelatedApps() = default ;
          RelatedApps(const RelatedApps &) = default ;
          RelatedApps(RelatedApps &&) = default ;
          RelatedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelatedApps() = default ;
          RelatedApps& operator=(const RelatedApps &) = default ;
          RelatedApps& operator=(RelatedApps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline RelatedApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline RelatedApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        protected:
          // The ID of the application.
          shared_ptr<string> appId_ {};
          // The name of the application.
          shared_ptr<string> appName_ {};
        };

        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Data& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The user-defined key of the Kubernetes Secret.
          shared_ptr<string> key_ {};
          // The user-defined value of the Kubernetes Secret.
          shared_ptr<string> value_ {};
        };

        class CertDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CertDetail& obj) { 
            DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Issuer, issuer_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, CertDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          CertDetail() = default ;
          CertDetail(const CertDetail &) = default ;
          CertDetail(CertDetail &&) = default ;
          CertDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CertDetail() = default ;
          CertDetail& operator=(const CertDetail &) = default ;
          CertDetail& operator=(CertDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->domainNames_ == nullptr
        && this->endTime_ == nullptr && this->issuer_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
          // domainNames Field Functions 
          bool hasDomainNames() const { return this->domainNames_ != nullptr;};
          void deleteDomainNames() { this->domainNames_ = nullptr;};
          inline const vector<string> & getDomainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<string>) };
          inline vector<string> getDomainNames() { DARABONBA_PTR_GET(domainNames_, vector<string>) };
          inline CertDetail& setDomainNames(const vector<string> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
          inline CertDetail& setDomainNames(vector<string> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline CertDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // issuer Field Functions 
          bool hasIssuer() const { return this->issuer_ != nullptr;};
          void deleteIssuer() { this->issuer_ = nullptr;};
          inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
          inline CertDetail& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline CertDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline CertDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // Domain names that are associated with the SSL certificate.
          shared_ptr<vector<string>> domainNames_ {};
          // The time when the SSL certificate expired.
          shared_ptr<string> endTime_ {};
          // The certificate authority (CA) that issued the SSL certificate.
          shared_ptr<string> issuer_ {};
          // The time when the SSL certificate started to take effect.
          shared_ptr<string> startTime_ {};
          // The state of the SSL certificate. Valid values:
          // 
          // - normal: The SSL certificate is valid.
          // 
          // - invalid: The SSL certificate is invalid.
          // 
          // - expired: The SSL certificate has expired.
          // 
          // - not_yet_valid: The SSL certificate is currently invalid.
          // 
          // - about_to_expire: The SSL certificate is about to expire.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->base64Encoded_ == nullptr
        && this->certDetail_ == nullptr && this->certId_ == nullptr && this->certRegionId_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr
        && this->creationTime_ == nullptr && this->data_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->relatedApps_ == nullptr
        && this->relatedIngressRules_ == nullptr && this->type_ == nullptr; };
        // base64Encoded Field Functions 
        bool hasBase64Encoded() const { return this->base64Encoded_ != nullptr;};
        void deleteBase64Encoded() { this->base64Encoded_ = nullptr;};
        inline bool getBase64Encoded() const { DARABONBA_PTR_GET_DEFAULT(base64Encoded_, false) };
        inline Secrets& setBase64Encoded(bool base64Encoded) { DARABONBA_PTR_SET_VALUE(base64Encoded_, base64Encoded) };


        // certDetail Field Functions 
        bool hasCertDetail() const { return this->certDetail_ != nullptr;};
        void deleteCertDetail() { this->certDetail_ = nullptr;};
        inline const Secrets::CertDetail & getCertDetail() const { DARABONBA_PTR_GET_CONST(certDetail_, Secrets::CertDetail) };
        inline Secrets::CertDetail getCertDetail() { DARABONBA_PTR_GET(certDetail_, Secrets::CertDetail) };
        inline Secrets& setCertDetail(const Secrets::CertDetail & certDetail) { DARABONBA_PTR_SET_VALUE(certDetail_, certDetail) };
        inline Secrets& setCertDetail(Secrets::CertDetail && certDetail) { DARABONBA_PTR_SET_RVALUE(certDetail_, certDetail) };


        // certId Field Functions 
        bool hasCertId() const { return this->certId_ != nullptr;};
        void deleteCertId() { this->certId_ = nullptr;};
        inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
        inline Secrets& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


        // certRegionId Field Functions 
        bool hasCertRegionId() const { return this->certRegionId_ != nullptr;};
        void deleteCertRegionId() { this->certRegionId_ = nullptr;};
        inline string getCertRegionId() const { DARABONBA_PTR_GET_DEFAULT(certRegionId_, "") };
        inline Secrets& setCertRegionId(string certRegionId) { DARABONBA_PTR_SET_VALUE(certRegionId_, certRegionId) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Secrets& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline Secrets& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Secrets& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<Secrets::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Secrets::Data>) };
        inline vector<Secrets::Data> getData() { DARABONBA_PTR_GET(data_, vector<Secrets::Data>) };
        inline Secrets& setData(const vector<Secrets::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Secrets& setData(vector<Secrets::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Secrets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Secrets& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // relatedApps Field Functions 
        bool hasRelatedApps() const { return this->relatedApps_ != nullptr;};
        void deleteRelatedApps() { this->relatedApps_ = nullptr;};
        inline const vector<Secrets::RelatedApps> & getRelatedApps() const { DARABONBA_PTR_GET_CONST(relatedApps_, vector<Secrets::RelatedApps>) };
        inline vector<Secrets::RelatedApps> getRelatedApps() { DARABONBA_PTR_GET(relatedApps_, vector<Secrets::RelatedApps>) };
        inline Secrets& setRelatedApps(const vector<Secrets::RelatedApps> & relatedApps) { DARABONBA_PTR_SET_VALUE(relatedApps_, relatedApps) };
        inline Secrets& setRelatedApps(vector<Secrets::RelatedApps> && relatedApps) { DARABONBA_PTR_SET_RVALUE(relatedApps_, relatedApps) };


        // relatedIngressRules Field Functions 
        bool hasRelatedIngressRules() const { return this->relatedIngressRules_ != nullptr;};
        void deleteRelatedIngressRules() { this->relatedIngressRules_ = nullptr;};
        inline const vector<Secrets::RelatedIngressRules> & getRelatedIngressRules() const { DARABONBA_PTR_GET_CONST(relatedIngressRules_, vector<Secrets::RelatedIngressRules>) };
        inline vector<Secrets::RelatedIngressRules> getRelatedIngressRules() { DARABONBA_PTR_GET(relatedIngressRules_, vector<Secrets::RelatedIngressRules>) };
        inline Secrets& setRelatedIngressRules(const vector<Secrets::RelatedIngressRules> & relatedIngressRules) { DARABONBA_PTR_SET_VALUE(relatedIngressRules_, relatedIngressRules) };
        inline Secrets& setRelatedIngressRules(vector<Secrets::RelatedIngressRules> && relatedIngressRules) { DARABONBA_PTR_SET_RVALUE(relatedIngressRules_, relatedIngressRules) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Secrets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Indicates whether the data is Base64-encoded. Valid values:
        // 
        // - true: The data is Base64-encoded.
        // 
        // - false: The data is not Base64-encoded.
        shared_ptr<bool> base64Encoded_ {};
        // The details of the Secure Sockets Layer (SSL) certificate.
        shared_ptr<Secrets::CertDetail> certDetail_ {};
        // The ID of the certificate provided by Alibaba Cloud Certificate Management Service.
        shared_ptr<string> certId_ {};
        // The region in which the certificate is stored.
        shared_ptr<string> certRegionId_ {};
        // The ID of the cluster in Enterprise Distributed Application Service (EDAS).
        shared_ptr<string> clusterId_ {};
        // The name of the cluster.
        shared_ptr<string> clusterName_ {};
        // The time when the Secret was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The data of the Kubernetes Secret.
        shared_ptr<vector<Secrets::Data>> data_ {};
        // The name of the Secret. The name must start with a letter, and can contain digits, letters, and hyphens (-). It can be up to 63 characters in length.
        shared_ptr<string> name_ {};
        // The namespace of the Kubernetes cluster.
        shared_ptr<string> namespace_ {};
        // Applications that use the Secret.
        shared_ptr<vector<Secrets::RelatedApps>> relatedApps_ {};
        // Rules in the Ingress that is associated with the Secret.
        shared_ptr<vector<Secrets::RelatedIngressRules>> relatedIngressRules_ {};
        // The type of the Secret. Valid values:
        // 
        // - Opaque: user-defined data
        // 
        // - kubernetes.io/tls: Transport Layer Security (TLS) certificate
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->secrets_ == nullptr
        && this->total_ == nullptr; };
      // secrets Field Functions 
      bool hasSecrets() const { return this->secrets_ != nullptr;};
      void deleteSecrets() { this->secrets_ = nullptr;};
      inline const vector<Result::Secrets> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<Result::Secrets>) };
      inline vector<Result::Secrets> getSecrets() { DARABONBA_PTR_GET(secrets_, vector<Result::Secrets>) };
      inline Result& setSecrets(const vector<Result::Secrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
      inline Result& setSecrets(vector<Result::Secrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Result& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The information about Kubernetes Secrets.
      shared_ptr<vector<Result::Secrets>> secrets_ {};
      // The total number of entries that are returned.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListK8sSecretsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListK8sSecretsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListK8sSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListK8sSecretsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListK8sSecretsResponseBody::Result) };
    inline ListK8sSecretsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListK8sSecretsResponseBody::Result) };
    inline ListK8sSecretsResponseBody& setResult(const ListK8sSecretsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListK8sSecretsResponseBody& setResult(ListK8sSecretsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned query results of Kubernetes Secrets.
    shared_ptr<ListK8sSecretsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
