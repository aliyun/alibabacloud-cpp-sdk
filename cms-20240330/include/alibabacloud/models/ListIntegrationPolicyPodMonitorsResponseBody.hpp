// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODY_HPP_
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
  class ListIntegrationPolicyPodMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyPodMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(podMonitors, podMonitors_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyPodMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(podMonitors, podMonitors_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListIntegrationPolicyPodMonitorsResponseBody() = default ;
    ListIntegrationPolicyPodMonitorsResponseBody(const ListIntegrationPolicyPodMonitorsResponseBody &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBody(ListIntegrationPolicyPodMonitorsResponseBody &&) = default ;
    ListIntegrationPolicyPodMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyPodMonitorsResponseBody() = default ;
    ListIntegrationPolicyPodMonitorsResponseBody& operator=(const ListIntegrationPolicyPodMonitorsResponseBody &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBody& operator=(ListIntegrationPolicyPodMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PodMonitors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PodMonitors& obj) { 
        DARABONBA_PTR_TO_JSON(addonName, addonName_);
        DARABONBA_PTR_TO_JSON(addonReleaseName, addonReleaseName_);
        DARABONBA_PTR_TO_JSON(addonVersion, addonVersion_);
        DARABONBA_PTR_TO_JSON(configYaml, configYaml_);
        DARABONBA_PTR_TO_JSON(enableStatus, enableStatus_);
        DARABONBA_PTR_TO_JSON(encryptYaml, encryptYaml_);
        DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(matchedPodCount, matchedPodCount_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
      };
      friend void from_json(const Darabonba::Json& j, PodMonitors& obj) { 
        DARABONBA_PTR_FROM_JSON(addonName, addonName_);
        DARABONBA_PTR_FROM_JSON(addonReleaseName, addonReleaseName_);
        DARABONBA_PTR_FROM_JSON(addonVersion, addonVersion_);
        DARABONBA_PTR_FROM_JSON(configYaml, configYaml_);
        DARABONBA_PTR_FROM_JSON(enableStatus, enableStatus_);
        DARABONBA_PTR_FROM_JSON(encryptYaml, encryptYaml_);
        DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(matchedPodCount, matchedPodCount_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      };
      PodMonitors() = default ;
      PodMonitors(const PodMonitors &) = default ;
      PodMonitors(PodMonitors &&) = default ;
      PodMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PodMonitors() = default ;
      PodMonitors& operator=(const PodMonitors &) = default ;
      PodMonitors& operator=(PodMonitors &&) = default ;
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
        // Collection interval
        shared_ptr<string> interval_ {};
        // Number of matched targets
        shared_ptr<int64_t> matchedTargetCount_ {};
        // Metric collection path
        shared_ptr<string> path_ {};
        // Port number
        shared_ptr<string> port_ {};
        // Target port
        shared_ptr<string> targetPort_ {};
      };

      virtual bool empty() const override { return this->addonName_ == nullptr
        && this->addonReleaseName_ == nullptr && this->addonVersion_ == nullptr && this->configYaml_ == nullptr && this->enableStatus_ == nullptr && this->encryptYaml_ == nullptr
        && this->endpoints_ == nullptr && this->matchedPodCount_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr; };
      // addonName Field Functions 
      bool hasAddonName() const { return this->addonName_ != nullptr;};
      void deleteAddonName() { this->addonName_ = nullptr;};
      inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
      inline PodMonitors& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


      // addonReleaseName Field Functions 
      bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
      void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
      inline string getAddonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
      inline PodMonitors& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


      // addonVersion Field Functions 
      bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
      void deleteAddonVersion() { this->addonVersion_ = nullptr;};
      inline string getAddonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
      inline PodMonitors& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


      // configYaml Field Functions 
      bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
      void deleteConfigYaml() { this->configYaml_ = nullptr;};
      inline string getConfigYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
      inline PodMonitors& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
      inline PodMonitors& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // encryptYaml Field Functions 
      bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
      void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
      inline bool getEncryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
      inline PodMonitors& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<PodMonitors::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<PodMonitors::Endpoints>) };
      inline vector<PodMonitors::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<PodMonitors::Endpoints>) };
      inline PodMonitors& setEndpoints(const vector<PodMonitors::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline PodMonitors& setEndpoints(vector<PodMonitors::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // matchedPodCount Field Functions 
      bool hasMatchedPodCount() const { return this->matchedPodCount_ != nullptr;};
      void deleteMatchedPodCount() { this->matchedPodCount_ = nullptr;};
      inline int64_t getMatchedPodCount() const { DARABONBA_PTR_GET_DEFAULT(matchedPodCount_, 0L) };
      inline PodMonitors& setMatchedPodCount(int64_t matchedPodCount) { DARABONBA_PTR_SET_VALUE(matchedPodCount_, matchedPodCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PodMonitors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline PodMonitors& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    protected:
      // Addon name.
      shared_ptr<string> addonName_ {};
      // Addon Release name.
      shared_ptr<string> addonReleaseName_ {};
      // Addon version.
      shared_ptr<string> addonVersion_ {};
      // Configuration yaml.
      shared_ptr<string> configYaml_ {};
      // Enable status.
      shared_ptr<string> enableStatus_ {};
      // Encrypt yaml.
      shared_ptr<bool> encryptYaml_ {};
      // Instance endpoints.
      shared_ptr<vector<PodMonitors::Endpoints>> endpoints_ {};
      // Number of matched pods
      shared_ptr<int64_t> matchedPodCount_ {};
      // Collection name.
      shared_ptr<string> name_ {};
      // Namespace
      shared_ptr<string> namespace_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->podMonitors_ == nullptr && this->policyId_ == nullptr && this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // podMonitors Field Functions 
    bool hasPodMonitors() const { return this->podMonitors_ != nullptr;};
    void deletePodMonitors() { this->podMonitors_ = nullptr;};
    inline const vector<ListIntegrationPolicyPodMonitorsResponseBody::PodMonitors> & getPodMonitors() const { DARABONBA_PTR_GET_CONST(podMonitors_, vector<ListIntegrationPolicyPodMonitorsResponseBody::PodMonitors>) };
    inline vector<ListIntegrationPolicyPodMonitorsResponseBody::PodMonitors> getPodMonitors() { DARABONBA_PTR_GET(podMonitors_, vector<ListIntegrationPolicyPodMonitorsResponseBody::PodMonitors>) };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setPodMonitors(const vector<ListIntegrationPolicyPodMonitorsResponseBody::PodMonitors> & podMonitors) { DARABONBA_PTR_SET_VALUE(podMonitors_, podMonitors) };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setPodMonitors(vector<ListIntegrationPolicyPodMonitorsResponseBody::PodMonitors> && podMonitors) { DARABONBA_PTR_SET_RVALUE(podMonitors_, podMonitors) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Cluster ID.
    shared_ptr<string> clusterId_ {};
    // PodMonitor list
    shared_ptr<vector<ListIntegrationPolicyPodMonitorsResponseBody::PodMonitors>> podMonitors_ {};
    // Policy ID.
    shared_ptr<string> policyId_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
