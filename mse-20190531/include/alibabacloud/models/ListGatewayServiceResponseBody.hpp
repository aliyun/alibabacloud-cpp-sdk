// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewayServiceResponseBody() = default ;
    ListGatewayServiceResponseBody(const ListGatewayServiceResponseBody &) = default ;
    ListGatewayServiceResponseBody(ListGatewayServiceResponseBody &&) = default ;
    ListGatewayServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBody() = default ;
    ListGatewayServiceResponseBody& operator=(const ListGatewayServiceResponseBody &) = default ;
    ListGatewayServiceResponseBody& operator=(ListGatewayServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerList_);
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(HealehStatus, healehStatus_);
          DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_TO_JSON(HealthCheckInfo, healthCheckInfo_);
          DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Ports, ports_);
          DARABONBA_PTR_TO_JSON(ServiceFQDN, serviceFQDN_);
          DARABONBA_PTR_TO_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
          DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
          DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
          DARABONBA_PTR_TO_JSON(Versions, versions_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerList_);
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(HealehStatus, healehStatus_);
          DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInfo, healthCheckInfo_);
          DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Ports, ports_);
          DARABONBA_PTR_FROM_JSON(ServiceFQDN, serviceFQDN_);
          DARABONBA_PTR_FROM_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
          DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
          DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
          DARABONBA_PTR_FROM_JSON(Versions, versions_);
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
        class Versions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Versions& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Versions& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Versions() = default ;
          Versions(const Versions &) = default ;
          Versions(Versions &&) = default ;
          Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Versions() = default ;
          Versions& operator=(const Versions &) = default ;
          Versions& operator=(Versions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Versions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The version number.
          shared_ptr<string> name_ {};
        };

        class HealthCheckInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HealthCheckInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Check, check_);
            DARABONBA_PTR_TO_JSON(ExpectedStatuses, expectedStatuses_);
            DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
            DARABONBA_PTR_TO_JSON(HttpHost, httpHost_);
            DARABONBA_PTR_TO_JSON(HttpPath, httpPath_);
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
            DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
          };
          friend void from_json(const Darabonba::Json& j, HealthCheckInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Check, check_);
            DARABONBA_PTR_FROM_JSON(ExpectedStatuses, expectedStatuses_);
            DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
            DARABONBA_PTR_FROM_JSON(HttpHost, httpHost_);
            DARABONBA_PTR_FROM_JSON(HttpPath, httpPath_);
            DARABONBA_PTR_FROM_JSON(Interval, interval_);
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
          };
          HealthCheckInfo() = default ;
          HealthCheckInfo(const HealthCheckInfo &) = default ;
          HealthCheckInfo(HealthCheckInfo &&) = default ;
          HealthCheckInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HealthCheckInfo() = default ;
          HealthCheckInfo& operator=(const HealthCheckInfo &) = default ;
          HealthCheckInfo& operator=(HealthCheckInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->check_ == nullptr
        && this->expectedStatuses_ == nullptr && this->healthyThreshold_ == nullptr && this->httpHost_ == nullptr && this->httpPath_ == nullptr && this->interval_ == nullptr
        && this->protocol_ == nullptr && this->timeout_ == nullptr && this->unhealthyThreshold_ == nullptr; };
          // check Field Functions 
          bool hasCheck() const { return this->check_ != nullptr;};
          void deleteCheck() { this->check_ = nullptr;};
          inline bool getCheck() const { DARABONBA_PTR_GET_DEFAULT(check_, false) };
          inline HealthCheckInfo& setCheck(bool check) { DARABONBA_PTR_SET_VALUE(check_, check) };


          // expectedStatuses Field Functions 
          bool hasExpectedStatuses() const { return this->expectedStatuses_ != nullptr;};
          void deleteExpectedStatuses() { this->expectedStatuses_ = nullptr;};
          inline const vector<int32_t> & getExpectedStatuses() const { DARABONBA_PTR_GET_CONST(expectedStatuses_, vector<int32_t>) };
          inline vector<int32_t> getExpectedStatuses() { DARABONBA_PTR_GET(expectedStatuses_, vector<int32_t>) };
          inline HealthCheckInfo& setExpectedStatuses(const vector<int32_t> & expectedStatuses) { DARABONBA_PTR_SET_VALUE(expectedStatuses_, expectedStatuses) };
          inline HealthCheckInfo& setExpectedStatuses(vector<int32_t> && expectedStatuses) { DARABONBA_PTR_SET_RVALUE(expectedStatuses_, expectedStatuses) };


          // healthyThreshold Field Functions 
          bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
          void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
          inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
          inline HealthCheckInfo& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


          // httpHost Field Functions 
          bool hasHttpHost() const { return this->httpHost_ != nullptr;};
          void deleteHttpHost() { this->httpHost_ = nullptr;};
          inline string getHttpHost() const { DARABONBA_PTR_GET_DEFAULT(httpHost_, "") };
          inline HealthCheckInfo& setHttpHost(string httpHost) { DARABONBA_PTR_SET_VALUE(httpHost_, httpHost) };


          // httpPath Field Functions 
          bool hasHttpPath() const { return this->httpPath_ != nullptr;};
          void deleteHttpPath() { this->httpPath_ = nullptr;};
          inline string getHttpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
          inline HealthCheckInfo& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


          // interval Field Functions 
          bool hasInterval() const { return this->interval_ != nullptr;};
          void deleteInterval() { this->interval_ = nullptr;};
          inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
          inline HealthCheckInfo& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline HealthCheckInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline HealthCheckInfo& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // unhealthyThreshold Field Functions 
          bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
          void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
          inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
          inline HealthCheckInfo& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


        protected:
          // Indicates whether checks are performed.
          shared_ptr<bool> check_ {};
          // The expected status of the health check.
          shared_ptr<vector<int32_t>> expectedStatuses_ {};
          // The threshold for healthy instances.
          shared_ptr<int32_t> healthyThreshold_ {};
          // The endpoint of the HTTP request for the health check.
          shared_ptr<string> httpHost_ {};
          // The path to which the HTTP request for the health check is sent.
          shared_ptr<string> httpPath_ {};
          // The health check interval.
          shared_ptr<int32_t> interval_ {};
          // The network protocol.
          shared_ptr<string> protocol_ {};
          // The timeout period.
          shared_ptr<int32_t> timeout_ {};
          // The threshold for unhealthy instances.
          shared_ptr<int32_t> unhealthyThreshold_ {};
        };

        class GatewayTrafficPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GatewayTrafficPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(LoadBalancerSettings, loadBalancerSettings_);
            DARABONBA_PTR_TO_JSON(Tls, tls_);
          };
          friend void from_json(const Darabonba::Json& j, GatewayTrafficPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(LoadBalancerSettings, loadBalancerSettings_);
            DARABONBA_PTR_FROM_JSON(Tls, tls_);
          };
          GatewayTrafficPolicy() = default ;
          GatewayTrafficPolicy(const GatewayTrafficPolicy &) = default ;
          GatewayTrafficPolicy(GatewayTrafficPolicy &&) = default ;
          GatewayTrafficPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GatewayTrafficPolicy() = default ;
          GatewayTrafficPolicy& operator=(const GatewayTrafficPolicy &) = default ;
          GatewayTrafficPolicy& operator=(GatewayTrafficPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tls : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tls& obj) { 
              DARABONBA_PTR_TO_JSON(CaCertContent, caCertContent_);
              DARABONBA_PTR_TO_JSON(CaCertId, caCertId_);
              DARABONBA_PTR_TO_JSON(CertId, certId_);
              DARABONBA_PTR_TO_JSON(Mode, mode_);
              DARABONBA_PTR_TO_JSON(Sni, sni_);
              DARABONBA_PTR_TO_JSON(SubjectAltNames, subjectAltNames_);
            };
            friend void from_json(const Darabonba::Json& j, Tls& obj) { 
              DARABONBA_PTR_FROM_JSON(CaCertContent, caCertContent_);
              DARABONBA_PTR_FROM_JSON(CaCertId, caCertId_);
              DARABONBA_PTR_FROM_JSON(CertId, certId_);
              DARABONBA_PTR_FROM_JSON(Mode, mode_);
              DARABONBA_PTR_FROM_JSON(Sni, sni_);
              DARABONBA_PTR_FROM_JSON(SubjectAltNames, subjectAltNames_);
            };
            Tls() = default ;
            Tls(const Tls &) = default ;
            Tls(Tls &&) = default ;
            Tls(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tls() = default ;
            Tls& operator=(const Tls &) = default ;
            Tls& operator=(Tls &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->caCertContent_ == nullptr
        && this->caCertId_ == nullptr && this->certId_ == nullptr && this->mode_ == nullptr && this->sni_ == nullptr && this->subjectAltNames_ == nullptr; };
            // caCertContent Field Functions 
            bool hasCaCertContent() const { return this->caCertContent_ != nullptr;};
            void deleteCaCertContent() { this->caCertContent_ = nullptr;};
            inline string getCaCertContent() const { DARABONBA_PTR_GET_DEFAULT(caCertContent_, "") };
            inline Tls& setCaCertContent(string caCertContent) { DARABONBA_PTR_SET_VALUE(caCertContent_, caCertContent) };


            // caCertId Field Functions 
            bool hasCaCertId() const { return this->caCertId_ != nullptr;};
            void deleteCaCertId() { this->caCertId_ = nullptr;};
            inline string getCaCertId() const { DARABONBA_PTR_GET_DEFAULT(caCertId_, "") };
            inline Tls& setCaCertId(string caCertId) { DARABONBA_PTR_SET_VALUE(caCertId_, caCertId) };


            // certId Field Functions 
            bool hasCertId() const { return this->certId_ != nullptr;};
            void deleteCertId() { this->certId_ = nullptr;};
            inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
            inline Tls& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


            // mode Field Functions 
            bool hasMode() const { return this->mode_ != nullptr;};
            void deleteMode() { this->mode_ = nullptr;};
            inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
            inline Tls& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


            // sni Field Functions 
            bool hasSni() const { return this->sni_ != nullptr;};
            void deleteSni() { this->sni_ = nullptr;};
            inline string getSni() const { DARABONBA_PTR_GET_DEFAULT(sni_, "") };
            inline Tls& setSni(string sni) { DARABONBA_PTR_SET_VALUE(sni_, sni) };


            // subjectAltNames Field Functions 
            bool hasSubjectAltNames() const { return this->subjectAltNames_ != nullptr;};
            void deleteSubjectAltNames() { this->subjectAltNames_ = nullptr;};
            inline const vector<string> & getSubjectAltNames() const { DARABONBA_PTR_GET_CONST(subjectAltNames_, vector<string>) };
            inline vector<string> getSubjectAltNames() { DARABONBA_PTR_GET(subjectAltNames_, vector<string>) };
            inline Tls& setSubjectAltNames(const vector<string> & subjectAltNames) { DARABONBA_PTR_SET_VALUE(subjectAltNames_, subjectAltNames) };
            inline Tls& setSubjectAltNames(vector<string> && subjectAltNames) { DARABONBA_PTR_SET_RVALUE(subjectAltNames_, subjectAltNames) };


          protected:
            // The public key of the CA certificate .
            shared_ptr<string> caCertContent_ {};
            // The ID of the certification authority (CA) certificate.
            shared_ptr<string> caCertId_ {};
            // The ID of the certificate.
            shared_ptr<string> certId_ {};
            // The TLS mode.
            // 
            // *   DISABLE
            // *   SIMPLE
            // *   MUTUAL
            // *   ISTIO_MUTUAL
            shared_ptr<string> mode_ {};
            // The Server Name Indication (SNI) value.
            shared_ptr<string> sni_ {};
            // The array of subject aliases.
            shared_ptr<vector<string>> subjectAltNames_ {};
          };

          class LoadBalancerSettings : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LoadBalancerSettings& obj) { 
              DARABONBA_PTR_TO_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
              DARABONBA_PTR_TO_JSON(LoadbalancerType, loadbalancerType_);
              DARABONBA_PTR_TO_JSON(WarmupDuration, warmupDuration_);
            };
            friend void from_json(const Darabonba::Json& j, LoadBalancerSettings& obj) { 
              DARABONBA_PTR_FROM_JSON(ConsistentHashLBConfig, consistentHashLBConfig_);
              DARABONBA_PTR_FROM_JSON(LoadbalancerType, loadbalancerType_);
              DARABONBA_PTR_FROM_JSON(WarmupDuration, warmupDuration_);
            };
            LoadBalancerSettings() = default ;
            LoadBalancerSettings(const LoadBalancerSettings &) = default ;
            LoadBalancerSettings(LoadBalancerSettings &&) = default ;
            LoadBalancerSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LoadBalancerSettings() = default ;
            LoadBalancerSettings& operator=(const LoadBalancerSettings &) = default ;
            LoadBalancerSettings& operator=(LoadBalancerSettings &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ConsistentHashLBConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ConsistentHashLBConfig& obj) { 
                DARABONBA_PTR_TO_JSON(ConsistentHashLBType, consistentHashLBType_);
                DARABONBA_PTR_TO_JSON(HttpCookie, httpCookie_);
                DARABONBA_PTR_TO_JSON(MinimumRingSize, minimumRingSize_);
                DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
              };
              friend void from_json(const Darabonba::Json& j, ConsistentHashLBConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(ConsistentHashLBType, consistentHashLBType_);
                DARABONBA_PTR_FROM_JSON(HttpCookie, httpCookie_);
                DARABONBA_PTR_FROM_JSON(MinimumRingSize, minimumRingSize_);
                DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
              };
              ConsistentHashLBConfig() = default ;
              ConsistentHashLBConfig(const ConsistentHashLBConfig &) = default ;
              ConsistentHashLBConfig(ConsistentHashLBConfig &&) = default ;
              ConsistentHashLBConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ConsistentHashLBConfig() = default ;
              ConsistentHashLBConfig& operator=(const ConsistentHashLBConfig &) = default ;
              ConsistentHashLBConfig& operator=(ConsistentHashLBConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class HttpCookie : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const HttpCookie& obj) { 
                  DARABONBA_PTR_TO_JSON(Name, name_);
                  DARABONBA_PTR_TO_JSON(Path, path_);
                  DARABONBA_PTR_TO_JSON(Ttl, ttl_);
                };
                friend void from_json(const Darabonba::Json& j, HttpCookie& obj) { 
                  DARABONBA_PTR_FROM_JSON(Name, name_);
                  DARABONBA_PTR_FROM_JSON(Path, path_);
                  DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
                };
                HttpCookie() = default ;
                HttpCookie(const HttpCookie &) = default ;
                HttpCookie(HttpCookie &&) = default ;
                HttpCookie(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~HttpCookie() = default ;
                HttpCookie& operator=(const HttpCookie &) = default ;
                HttpCookie& operator=(HttpCookie &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr && this->ttl_ == nullptr; };
                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline HttpCookie& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // path Field Functions 
                bool hasPath() const { return this->path_ != nullptr;};
                void deletePath() { this->path_ = nullptr;};
                inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
                inline HttpCookie& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


                // ttl Field Functions 
                bool hasTtl() const { return this->ttl_ != nullptr;};
                void deleteTtl() { this->ttl_ = nullptr;};
                inline string getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, "") };
                inline HttpCookie& setTtl(string ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


              protected:
                // The name of the cookie.
                shared_ptr<string> name_ {};
                // The path of the cookie.
                shared_ptr<string> path_ {};
                // The lifecycle of the cookie.
                shared_ptr<string> ttl_ {};
              };

              virtual bool empty() const override { return this->consistentHashLBType_ == nullptr
        && this->httpCookie_ == nullptr && this->minimumRingSize_ == nullptr && this->parameterName_ == nullptr; };
              // consistentHashLBType Field Functions 
              bool hasConsistentHashLBType() const { return this->consistentHashLBType_ != nullptr;};
              void deleteConsistentHashLBType() { this->consistentHashLBType_ = nullptr;};
              inline string getConsistentHashLBType() const { DARABONBA_PTR_GET_DEFAULT(consistentHashLBType_, "") };
              inline ConsistentHashLBConfig& setConsistentHashLBType(string consistentHashLBType) { DARABONBA_PTR_SET_VALUE(consistentHashLBType_, consistentHashLBType) };


              // httpCookie Field Functions 
              bool hasHttpCookie() const { return this->httpCookie_ != nullptr;};
              void deleteHttpCookie() { this->httpCookie_ = nullptr;};
              inline const ConsistentHashLBConfig::HttpCookie & getHttpCookie() const { DARABONBA_PTR_GET_CONST(httpCookie_, ConsistentHashLBConfig::HttpCookie) };
              inline ConsistentHashLBConfig::HttpCookie getHttpCookie() { DARABONBA_PTR_GET(httpCookie_, ConsistentHashLBConfig::HttpCookie) };
              inline ConsistentHashLBConfig& setHttpCookie(const ConsistentHashLBConfig::HttpCookie & httpCookie) { DARABONBA_PTR_SET_VALUE(httpCookie_, httpCookie) };
              inline ConsistentHashLBConfig& setHttpCookie(ConsistentHashLBConfig::HttpCookie && httpCookie) { DARABONBA_PTR_SET_RVALUE(httpCookie_, httpCookie) };


              // minimumRingSize Field Functions 
              bool hasMinimumRingSize() const { return this->minimumRingSize_ != nullptr;};
              void deleteMinimumRingSize() { this->minimumRingSize_ = nullptr;};
              inline int64_t getMinimumRingSize() const { DARABONBA_PTR_GET_DEFAULT(minimumRingSize_, 0L) };
              inline ConsistentHashLBConfig& setMinimumRingSize(int64_t minimumRingSize) { DARABONBA_PTR_SET_VALUE(minimumRingSize_, minimumRingSize) };


              // parameterName Field Functions 
              bool hasParameterName() const { return this->parameterName_ != nullptr;};
              void deleteParameterName() { this->parameterName_ = nullptr;};
              inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
              inline ConsistentHashLBConfig& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


            protected:
              // The type based on which consistent hashing load balancing is performed.
              // 
              // *   HEADER
              // *   COOKIE
              // *   SOURCE_IP
              // *   QUERY_PARAMETER
              shared_ptr<string> consistentHashLBType_ {};
              // The cookie-based load balancing parameters.
              shared_ptr<ConsistentHashLBConfig::HttpCookie> httpCookie_ {};
              // The minimum value of the hash ring.
              shared_ptr<int64_t> minimumRingSize_ {};
              // The name of the parameter.
              shared_ptr<string> parameterName_ {};
            };

            virtual bool empty() const override { return this->consistentHashLBConfig_ == nullptr
        && this->loadbalancerType_ == nullptr && this->warmupDuration_ == nullptr; };
            // consistentHashLBConfig Field Functions 
            bool hasConsistentHashLBConfig() const { return this->consistentHashLBConfig_ != nullptr;};
            void deleteConsistentHashLBConfig() { this->consistentHashLBConfig_ = nullptr;};
            inline const LoadBalancerSettings::ConsistentHashLBConfig & getConsistentHashLBConfig() const { DARABONBA_PTR_GET_CONST(consistentHashLBConfig_, LoadBalancerSettings::ConsistentHashLBConfig) };
            inline LoadBalancerSettings::ConsistentHashLBConfig getConsistentHashLBConfig() { DARABONBA_PTR_GET(consistentHashLBConfig_, LoadBalancerSettings::ConsistentHashLBConfig) };
            inline LoadBalancerSettings& setConsistentHashLBConfig(const LoadBalancerSettings::ConsistentHashLBConfig & consistentHashLBConfig) { DARABONBA_PTR_SET_VALUE(consistentHashLBConfig_, consistentHashLBConfig) };
            inline LoadBalancerSettings& setConsistentHashLBConfig(LoadBalancerSettings::ConsistentHashLBConfig && consistentHashLBConfig) { DARABONBA_PTR_SET_RVALUE(consistentHashLBConfig_, consistentHashLBConfig) };


            // loadbalancerType Field Functions 
            bool hasLoadbalancerType() const { return this->loadbalancerType_ != nullptr;};
            void deleteLoadbalancerType() { this->loadbalancerType_ = nullptr;};
            inline string getLoadbalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadbalancerType_, "") };
            inline LoadBalancerSettings& setLoadbalancerType(string loadbalancerType) { DARABONBA_PTR_SET_VALUE(loadbalancerType_, loadbalancerType) };


            // warmupDuration Field Functions 
            bool hasWarmupDuration() const { return this->warmupDuration_ != nullptr;};
            void deleteWarmupDuration() { this->warmupDuration_ = nullptr;};
            inline int32_t getWarmupDuration() const { DARABONBA_PTR_GET_DEFAULT(warmupDuration_, 0) };
            inline LoadBalancerSettings& setWarmupDuration(int32_t warmupDuration) { DARABONBA_PTR_SET_VALUE(warmupDuration_, warmupDuration) };


          protected:
            // The consistent hashing settings.
            shared_ptr<LoadBalancerSettings::ConsistentHashLBConfig> consistentHashLBConfig_ {};
            // The load balancing type.
            // 
            // *   ROUND_ROBIN
            // *   LEAST_CONN
            // *   RANDOM
            // *   CONSISTENT_HASH
            shared_ptr<string> loadbalancerType_ {};
            // The prefetch time of the least connection load balancing.
            shared_ptr<int32_t> warmupDuration_ {};
          };

          virtual bool empty() const override { return this->loadBalancerSettings_ == nullptr
        && this->tls_ == nullptr; };
          // loadBalancerSettings Field Functions 
          bool hasLoadBalancerSettings() const { return this->loadBalancerSettings_ != nullptr;};
          void deleteLoadBalancerSettings() { this->loadBalancerSettings_ = nullptr;};
          inline const GatewayTrafficPolicy::LoadBalancerSettings & getLoadBalancerSettings() const { DARABONBA_PTR_GET_CONST(loadBalancerSettings_, GatewayTrafficPolicy::LoadBalancerSettings) };
          inline GatewayTrafficPolicy::LoadBalancerSettings getLoadBalancerSettings() { DARABONBA_PTR_GET(loadBalancerSettings_, GatewayTrafficPolicy::LoadBalancerSettings) };
          inline GatewayTrafficPolicy& setLoadBalancerSettings(const GatewayTrafficPolicy::LoadBalancerSettings & loadBalancerSettings) { DARABONBA_PTR_SET_VALUE(loadBalancerSettings_, loadBalancerSettings) };
          inline GatewayTrafficPolicy& setLoadBalancerSettings(GatewayTrafficPolicy::LoadBalancerSettings && loadBalancerSettings) { DARABONBA_PTR_SET_RVALUE(loadBalancerSettings_, loadBalancerSettings) };


          // tls Field Functions 
          bool hasTls() const { return this->tls_ != nullptr;};
          void deleteTls() { this->tls_ = nullptr;};
          inline const GatewayTrafficPolicy::Tls & getTls() const { DARABONBA_PTR_GET_CONST(tls_, GatewayTrafficPolicy::Tls) };
          inline GatewayTrafficPolicy::Tls getTls() { DARABONBA_PTR_GET(tls_, GatewayTrafficPolicy::Tls) };
          inline GatewayTrafficPolicy& setTls(const GatewayTrafficPolicy::Tls & tls) { DARABONBA_PTR_SET_VALUE(tls_, tls) };
          inline GatewayTrafficPolicy& setTls(GatewayTrafficPolicy::Tls && tls) { DARABONBA_PTR_SET_RVALUE(tls_, tls) };


        protected:
          // The load balancing settings.
          shared_ptr<GatewayTrafficPolicy::LoadBalancerSettings> loadBalancerSettings_ {};
          // The Transport Layer Security (TLS).
          shared_ptr<GatewayTrafficPolicy::Tls> tls_ {};
        };

        virtual bool empty() const override { return this->dnsServerList_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayTrafficPolicy_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->groupName_ == nullptr && this->healehStatus_ == nullptr && this->healthCheck_ == nullptr && this->healthCheckInfo_ == nullptr && this->healthStatus_ == nullptr
        && this->id_ == nullptr && this->ips_ == nullptr && this->metaInfo_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->ports_ == nullptr && this->serviceFQDN_ == nullptr && this->serviceNameInRegistry_ == nullptr && this->servicePort_ == nullptr && this->serviceProtocol_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->unhealthyEndpoints_ == nullptr && this->versions_ == nullptr; };
        // dnsServerList Field Functions 
        bool hasDnsServerList() const { return this->dnsServerList_ != nullptr;};
        void deleteDnsServerList() { this->dnsServerList_ = nullptr;};
        inline const vector<string> & getDnsServerList() const { DARABONBA_PTR_GET_CONST(dnsServerList_, vector<string>) };
        inline vector<string> getDnsServerList() { DARABONBA_PTR_GET(dnsServerList_, vector<string>) };
        inline Result& setDnsServerList(const vector<string> & dnsServerList) { DARABONBA_PTR_SET_VALUE(dnsServerList_, dnsServerList) };
        inline Result& setDnsServerList(vector<string> && dnsServerList) { DARABONBA_PTR_SET_RVALUE(dnsServerList_, dnsServerList) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline Result& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayTrafficPolicy Field Functions 
        bool hasGatewayTrafficPolicy() const { return this->gatewayTrafficPolicy_ != nullptr;};
        void deleteGatewayTrafficPolicy() { this->gatewayTrafficPolicy_ = nullptr;};
        inline const Result::GatewayTrafficPolicy & getGatewayTrafficPolicy() const { DARABONBA_PTR_GET_CONST(gatewayTrafficPolicy_, Result::GatewayTrafficPolicy) };
        inline Result::GatewayTrafficPolicy getGatewayTrafficPolicy() { DARABONBA_PTR_GET(gatewayTrafficPolicy_, Result::GatewayTrafficPolicy) };
        inline Result& setGatewayTrafficPolicy(const Result::GatewayTrafficPolicy & gatewayTrafficPolicy) { DARABONBA_PTR_SET_VALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };
        inline Result& setGatewayTrafficPolicy(Result::GatewayTrafficPolicy && gatewayTrafficPolicy) { DARABONBA_PTR_SET_RVALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline Result& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Result& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // healehStatus Field Functions 
        bool hasHealehStatus() const { return this->healehStatus_ != nullptr;};
        void deleteHealehStatus() { this->healehStatus_ = nullptr;};
        inline string getHealehStatus() const { DARABONBA_PTR_GET_DEFAULT(healehStatus_, "") };
        inline Result& setHealehStatus(string healehStatus) { DARABONBA_PTR_SET_VALUE(healehStatus_, healehStatus) };


        // healthCheck Field Functions 
        bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
        void deleteHealthCheck() { this->healthCheck_ = nullptr;};
        inline bool getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, false) };
        inline Result& setHealthCheck(bool healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


        // healthCheckInfo Field Functions 
        bool hasHealthCheckInfo() const { return this->healthCheckInfo_ != nullptr;};
        void deleteHealthCheckInfo() { this->healthCheckInfo_ = nullptr;};
        inline const Result::HealthCheckInfo & getHealthCheckInfo() const { DARABONBA_PTR_GET_CONST(healthCheckInfo_, Result::HealthCheckInfo) };
        inline Result::HealthCheckInfo getHealthCheckInfo() { DARABONBA_PTR_GET(healthCheckInfo_, Result::HealthCheckInfo) };
        inline Result& setHealthCheckInfo(const Result::HealthCheckInfo & healthCheckInfo) { DARABONBA_PTR_SET_VALUE(healthCheckInfo_, healthCheckInfo) };
        inline Result& setHealthCheckInfo(Result::HealthCheckInfo && healthCheckInfo) { DARABONBA_PTR_SET_RVALUE(healthCheckInfo_, healthCheckInfo) };


        // healthStatus Field Functions 
        bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
        void deleteHealthStatus() { this->healthStatus_ = nullptr;};
        inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
        inline Result& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
        inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
        inline Result& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline Result& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // metaInfo Field Functions 
        bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
        void deleteMetaInfo() { this->metaInfo_ = nullptr;};
        inline string getMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
        inline Result& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Result& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // ports Field Functions 
        bool hasPorts() const { return this->ports_ != nullptr;};
        void deletePorts() { this->ports_ = nullptr;};
        inline const vector<int32_t> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
        inline vector<int32_t> getPorts() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
        inline Result& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
        inline Result& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


        // serviceFQDN Field Functions 
        bool hasServiceFQDN() const { return this->serviceFQDN_ != nullptr;};
        void deleteServiceFQDN() { this->serviceFQDN_ = nullptr;};
        inline string getServiceFQDN() const { DARABONBA_PTR_GET_DEFAULT(serviceFQDN_, "") };
        inline Result& setServiceFQDN(string serviceFQDN) { DARABONBA_PTR_SET_VALUE(serviceFQDN_, serviceFQDN) };


        // serviceNameInRegistry Field Functions 
        bool hasServiceNameInRegistry() const { return this->serviceNameInRegistry_ != nullptr;};
        void deleteServiceNameInRegistry() { this->serviceNameInRegistry_ = nullptr;};
        inline string getServiceNameInRegistry() const { DARABONBA_PTR_GET_DEFAULT(serviceNameInRegistry_, "") };
        inline Result& setServiceNameInRegistry(string serviceNameInRegistry) { DARABONBA_PTR_SET_VALUE(serviceNameInRegistry_, serviceNameInRegistry) };


        // servicePort Field Functions 
        bool hasServicePort() const { return this->servicePort_ != nullptr;};
        void deleteServicePort() { this->servicePort_ = nullptr;};
        inline int64_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0L) };
        inline Result& setServicePort(int64_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


        // serviceProtocol Field Functions 
        bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
        void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
        inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
        inline Result& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
        inline Result& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Result& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // unhealthyEndpoints Field Functions 
        bool hasUnhealthyEndpoints() const { return this->unhealthyEndpoints_ != nullptr;};
        void deleteUnhealthyEndpoints() { this->unhealthyEndpoints_ = nullptr;};
        inline const vector<string> & getUnhealthyEndpoints() const { DARABONBA_PTR_GET_CONST(unhealthyEndpoints_, vector<string>) };
        inline vector<string> getUnhealthyEndpoints() { DARABONBA_PTR_GET(unhealthyEndpoints_, vector<string>) };
        inline Result& setUnhealthyEndpoints(const vector<string> & unhealthyEndpoints) { DARABONBA_PTR_SET_VALUE(unhealthyEndpoints_, unhealthyEndpoints) };
        inline Result& setUnhealthyEndpoints(vector<string> && unhealthyEndpoints) { DARABONBA_PTR_SET_RVALUE(unhealthyEndpoints_, unhealthyEndpoints) };


        // versions Field Functions 
        bool hasVersions() const { return this->versions_ != nullptr;};
        void deleteVersions() { this->versions_ = nullptr;};
        inline const vector<Result::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Result::Versions>) };
        inline vector<Result::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<Result::Versions>) };
        inline Result& setVersions(const vector<Result::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
        inline Result& setVersions(vector<Result::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


      protected:
        shared_ptr<vector<string>> dnsServerList_ {};
        // The gateway ID.
        shared_ptr<int64_t> gatewayId_ {};
        // The traffic management policy.
        shared_ptr<Result::GatewayTrafficPolicy> gatewayTrafficPolicy_ {};
        // The unique ID of the gateway.
        shared_ptr<string> gatewayUniqueId_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The group.
        shared_ptr<string> groupName_ {};
        // The health status.
        // 
        // *   Health
        // *   Unhealthy
        // *   Unknown
        shared_ptr<string> healehStatus_ {};
        // Indicates whether health checks are performed.
        shared_ptr<bool> healthCheck_ {};
        // The information about health checks.
        shared_ptr<Result::HealthCheckInfo> healthCheckInfo_ {};
        // The health status.
        // 
        // *   Health
        // *   Unhealthy
        // *   Unknown
        shared_ptr<string> healthStatus_ {};
        // The ID.
        shared_ptr<int64_t> id_ {};
        // The list of IP addresses.
        shared_ptr<vector<string>> ips_ {};
        // The metadata or IP addresses of the service.
        shared_ptr<string> metaInfo_ {};
        // The name of the service.
        shared_ptr<string> name_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The port array.
        shared_ptr<vector<int32_t>> ports_ {};
        shared_ptr<string> serviceFQDN_ {};
        // The name of the service that is registered with the service registry.
        shared_ptr<string> serviceNameInRegistry_ {};
        // The service port number.
        shared_ptr<int64_t> servicePort_ {};
        // The protocol of the service.
        shared_ptr<string> serviceProtocol_ {};
        // The ID of the service source.
        shared_ptr<int64_t> sourceId_ {};
        // The source type.
        shared_ptr<string> sourceType_ {};
        // The array of endpoints of unhealthy instances.
        shared_ptr<vector<string>> unhealthyEndpoints_ {};
        // The service version.
        shared_ptr<vector<Result::Versions>> versions_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The data returned.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewayServiceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayServiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayServiceResponseBody::Data) };
    inline ListGatewayServiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayServiceResponseBody::Data) };
    inline ListGatewayServiceResponseBody& setData(const ListGatewayServiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayServiceResponseBody& setData(ListGatewayServiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayServiceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayServiceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayServiceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return value.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<ListGatewayServiceResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
