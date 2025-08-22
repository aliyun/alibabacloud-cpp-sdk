// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVPODMONITORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVPODMONITORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvPodMonitorsResponseBodyDataEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvPodMonitorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvPodMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(AddonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PodMonitorName, podMonitorName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvPodMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(AddonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PodMonitorName, podMonitorName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListEnvPodMonitorsResponseBodyData() = default ;
    ListEnvPodMonitorsResponseBodyData(const ListEnvPodMonitorsResponseBodyData &) = default ;
    ListEnvPodMonitorsResponseBodyData(ListEnvPodMonitorsResponseBodyData &&) = default ;
    ListEnvPodMonitorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvPodMonitorsResponseBodyData() = default ;
    ListEnvPodMonitorsResponseBodyData& operator=(const ListEnvPodMonitorsResponseBodyData &) = default ;
    ListEnvPodMonitorsResponseBodyData& operator=(ListEnvPodMonitorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->addonReleaseName_ != nullptr && this->addonVersion_ != nullptr && this->configYaml_ != nullptr && this->creationTimestamp_ != nullptr && this->endpoints_ != nullptr
        && this->environmentId_ != nullptr && this->namespace_ != nullptr && this->podMonitorName_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // creationTimestamp Field Functions 
    bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
    void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
    inline string creationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::ListEnvPodMonitorsResponseBodyDataEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::ListEnvPodMonitorsResponseBodyDataEndpoints>) };
    inline vector<Models::ListEnvPodMonitorsResponseBodyDataEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::ListEnvPodMonitorsResponseBodyDataEndpoints>) };
    inline ListEnvPodMonitorsResponseBodyData& setEndpoints(const vector<Models::ListEnvPodMonitorsResponseBodyDataEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListEnvPodMonitorsResponseBodyData& setEndpoints(vector<Models::ListEnvPodMonitorsResponseBodyDataEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // podMonitorName Field Functions 
    bool hasPodMonitorName() const { return this->podMonitorName_ != nullptr;};
    void deletePodMonitorName() { this->podMonitorName_ = nullptr;};
    inline string podMonitorName() const { DARABONBA_PTR_GET_DEFAULT(podMonitorName_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setPodMonitorName(string podMonitorName) { DARABONBA_PTR_SET_VALUE(podMonitorName_, podMonitorName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEnvPodMonitorsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the add-on to which the PodMonitor belongs.
    std::shared_ptr<string> addonName_ = nullptr;
    // The instance name of the add-on.
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    // The version of the add-on.
    std::shared_ptr<string> addonVersion_ = nullptr;
    // The YAML configuration string.
    std::shared_ptr<string> configYaml_ = nullptr;
    // The time when the PodMonitor was created. The value of this parameter is a timestamp.
    std::shared_ptr<string> creationTimestamp_ = nullptr;
    // The endpoints of the PodMonitor.
    std::shared_ptr<vector<Models::ListEnvPodMonitorsResponseBodyDataEndpoints>> endpoints_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the PodMonitor.
    std::shared_ptr<string> podMonitorName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the PodMonitor.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
