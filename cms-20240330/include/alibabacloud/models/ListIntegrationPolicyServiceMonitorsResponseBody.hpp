// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSERVICEMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSERVICEMONITORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyServiceMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyServiceMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(serviceMonitors, serviceMonitors_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyServiceMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(serviceMonitors, serviceMonitors_);
    };
    ListIntegrationPolicyServiceMonitorsResponseBody() = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody(const ListIntegrationPolicyServiceMonitorsResponseBody &) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody(ListIntegrationPolicyServiceMonitorsResponseBody &&) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyServiceMonitorsResponseBody() = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody& operator=(const ListIntegrationPolicyServiceMonitorsResponseBody &) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBody& operator=(ListIntegrationPolicyServiceMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceMonitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceMonitors& obj) { 
        DARABONBA_PTR_TO_JSON(addonName, addonName_);
        DARABONBA_PTR_TO_JSON(addonReleaseName, addonReleaseName_);
        DARABONBA_PTR_TO_JSON(addonVersion, addonVersion_);
        DARABONBA_PTR_TO_JSON(configYaml, configYaml_);
        DARABONBA_PTR_TO_JSON(enableStatus, enableStatus_);
        DARABONBA_PTR_TO_JSON(encryptYaml, encryptYaml_);
        DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(matchedServiceCount, matchedServiceCount_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceMonitors& obj) { 
        DARABONBA_PTR_FROM_JSON(addonName, addonName_);
        DARABONBA_PTR_FROM_JSON(addonReleaseName, addonReleaseName_);
        DARABONBA_PTR_FROM_JSON(addonVersion, addonVersion_);
        DARABONBA_PTR_FROM_JSON(configYaml, configYaml_);
        DARABONBA_PTR_FROM_JSON(enableStatus, enableStatus_);
        DARABONBA_PTR_FROM_JSON(encryptYaml, encryptYaml_);
        DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(matchedServiceCount, matchedServiceCount_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      };
      ServiceMonitors() = default ;
      ServiceMonitors(const ServiceMonitors &) = default ;
      ServiceMonitors(ServiceMonitors &&) = default ;
      ServiceMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceMonitors() = default ;
      ServiceMonitors& operator=(const ServiceMonitors &) = default ;
      ServiceMonitors& operator=(ServiceMonitors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(interval, interval_);
          DARABONBA_PTR_TO_JSON(matchedTargetCount, matchedTargetCount_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(targetPort, targetPort_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(interval, interval_);
          DARABONBA_PTR_FROM_JSON(matchedTargetCount, matchedTargetCount_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(targetPort, targetPort_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->interval_ == nullptr
        && this->matchedTargetCount_ == nullptr && this->path_ == nullptr && this->port_ == nullptr && this->targetPort_ == nullptr; };
        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
        inline Endpoints& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // matchedTargetCount Field Functions 
        bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
        void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
        inline int64_t getMatchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, 0L) };
        inline Endpoints& setMatchedTargetCount(int64_t matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Endpoints& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Endpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // targetPort Field Functions 
        bool hasTargetPort() const { return this->targetPort_ != nullptr;};
        void deleteTargetPort() { this->targetPort_ = nullptr;};
        inline string getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
        inline Endpoints& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


      protected:
        shared_ptr<string> interval_ {};
        shared_ptr<int64_t> matchedTargetCount_ {};
        shared_ptr<string> path_ {};
        shared_ptr<string> port_ {};
        shared_ptr<string> targetPort_ {};
      };

      virtual bool empty() const override { return this->addonName_ == nullptr
        && this->addonReleaseName_ == nullptr && this->addonVersion_ == nullptr && this->configYaml_ == nullptr && this->enableStatus_ == nullptr && this->encryptYaml_ == nullptr
        && this->endpoints_ == nullptr && this->matchedServiceCount_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr; };
      // addonName Field Functions 
      bool hasAddonName() const { return this->addonName_ != nullptr;};
      void deleteAddonName() { this->addonName_ = nullptr;};
      inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
      inline ServiceMonitors& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


      // addonReleaseName Field Functions 
      bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
      void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
      inline string getAddonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
      inline ServiceMonitors& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


      // addonVersion Field Functions 
      bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
      void deleteAddonVersion() { this->addonVersion_ = nullptr;};
      inline string getAddonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
      inline ServiceMonitors& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


      // configYaml Field Functions 
      bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
      void deleteConfigYaml() { this->configYaml_ = nullptr;};
      inline string getConfigYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
      inline ServiceMonitors& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
      inline ServiceMonitors& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // encryptYaml Field Functions 
      bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
      void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
      inline bool getEncryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
      inline ServiceMonitors& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<ServiceMonitors::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<ServiceMonitors::Endpoints>) };
      inline vector<ServiceMonitors::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<ServiceMonitors::Endpoints>) };
      inline ServiceMonitors& setEndpoints(const vector<ServiceMonitors::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline ServiceMonitors& setEndpoints(vector<ServiceMonitors::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // matchedServiceCount Field Functions 
      bool hasMatchedServiceCount() const { return this->matchedServiceCount_ != nullptr;};
      void deleteMatchedServiceCount() { this->matchedServiceCount_ = nullptr;};
      inline int64_t getMatchedServiceCount() const { DARABONBA_PTR_GET_DEFAULT(matchedServiceCount_, 0L) };
      inline ServiceMonitors& setMatchedServiceCount(int64_t matchedServiceCount) { DARABONBA_PTR_SET_VALUE(matchedServiceCount_, matchedServiceCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceMonitors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ServiceMonitors& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    protected:
      shared_ptr<string> addonName_ {};
      shared_ptr<string> addonReleaseName_ {};
      shared_ptr<string> addonVersion_ {};
      shared_ptr<string> configYaml_ {};
      shared_ptr<string> enableStatus_ {};
      shared_ptr<bool> encryptYaml_ {};
      shared_ptr<vector<ServiceMonitors::Endpoints>> endpoints_ {};
      shared_ptr<int64_t> matchedServiceCount_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespace_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->policyId_ == nullptr && this->requestId_ == nullptr && this->serviceMonitors_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceMonitors Field Functions 
    bool hasServiceMonitors() const { return this->serviceMonitors_ != nullptr;};
    void deleteServiceMonitors() { this->serviceMonitors_ = nullptr;};
    inline const vector<ListIntegrationPolicyServiceMonitorsResponseBody::ServiceMonitors> & getServiceMonitors() const { DARABONBA_PTR_GET_CONST(serviceMonitors_, vector<ListIntegrationPolicyServiceMonitorsResponseBody::ServiceMonitors>) };
    inline vector<ListIntegrationPolicyServiceMonitorsResponseBody::ServiceMonitors> getServiceMonitors() { DARABONBA_PTR_GET(serviceMonitors_, vector<ListIntegrationPolicyServiceMonitorsResponseBody::ServiceMonitors>) };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setServiceMonitors(const vector<ListIntegrationPolicyServiceMonitorsResponseBody::ServiceMonitors> & serviceMonitors) { DARABONBA_PTR_SET_VALUE(serviceMonitors_, serviceMonitors) };
    inline ListIntegrationPolicyServiceMonitorsResponseBody& setServiceMonitors(vector<ListIntegrationPolicyServiceMonitorsResponseBody::ServiceMonitors> && serviceMonitors) { DARABONBA_PTR_SET_RVALUE(serviceMonitors_, serviceMonitors) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> policyId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListIntegrationPolicyServiceMonitorsResponseBody::ServiceMonitors>> serviceMonitors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
