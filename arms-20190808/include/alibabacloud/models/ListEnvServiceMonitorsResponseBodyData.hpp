// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvServiceMonitorsResponseBodyDataEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvServiceMonitorsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvServiceMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(AddonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(MatchedServiceCount, matchedServiceCount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceMonitorName, serviceMonitorName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvServiceMonitorsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(AddonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(MatchedServiceCount, matchedServiceCount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceMonitorName, serviceMonitorName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListEnvServiceMonitorsResponseBodyData() = default ;
    ListEnvServiceMonitorsResponseBodyData(const ListEnvServiceMonitorsResponseBodyData &) = default ;
    ListEnvServiceMonitorsResponseBodyData(ListEnvServiceMonitorsResponseBodyData &&) = default ;
    ListEnvServiceMonitorsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvServiceMonitorsResponseBodyData() = default ;
    ListEnvServiceMonitorsResponseBodyData& operator=(const ListEnvServiceMonitorsResponseBodyData &) = default ;
    ListEnvServiceMonitorsResponseBodyData& operator=(ListEnvServiceMonitorsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->addonReleaseName_ != nullptr && this->addonVersion_ != nullptr && this->configYaml_ != nullptr && this->creationTimestamp_ != nullptr && this->endpoints_ != nullptr
        && this->environmentId_ != nullptr && this->matchedServiceCount_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr && this->serviceMonitorName_ != nullptr
        && this->status_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // creationTimestamp Field Functions 
    bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
    void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
    inline string creationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::ListEnvServiceMonitorsResponseBodyDataEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::ListEnvServiceMonitorsResponseBodyDataEndpoints>) };
    inline vector<Models::ListEnvServiceMonitorsResponseBodyDataEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::ListEnvServiceMonitorsResponseBodyDataEndpoints>) };
    inline ListEnvServiceMonitorsResponseBodyData& setEndpoints(const vector<Models::ListEnvServiceMonitorsResponseBodyDataEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListEnvServiceMonitorsResponseBodyData& setEndpoints(vector<Models::ListEnvServiceMonitorsResponseBodyDataEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // matchedServiceCount Field Functions 
    bool hasMatchedServiceCount() const { return this->matchedServiceCount_ != nullptr;};
    void deleteMatchedServiceCount() { this->matchedServiceCount_ = nullptr;};
    inline int32_t matchedServiceCount() const { DARABONBA_PTR_GET_DEFAULT(matchedServiceCount_, 0) };
    inline ListEnvServiceMonitorsResponseBodyData& setMatchedServiceCount(int32_t matchedServiceCount) { DARABONBA_PTR_SET_VALUE(matchedServiceCount_, matchedServiceCount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceMonitorName Field Functions 
    bool hasServiceMonitorName() const { return this->serviceMonitorName_ != nullptr;};
    void deleteServiceMonitorName() { this->serviceMonitorName_ = nullptr;};
    inline string serviceMonitorName() const { DARABONBA_PTR_GET_DEFAULT(serviceMonitorName_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setServiceMonitorName(string serviceMonitorName) { DARABONBA_PTR_SET_VALUE(serviceMonitorName_, serviceMonitorName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEnvServiceMonitorsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the add-on to which the ServiceMonitor belongs.
    std::shared_ptr<string> addonName_ = nullptr;
    // The instance name of the add-on.
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    // The version of the add-on.
    std::shared_ptr<string> addonVersion_ = nullptr;
    // The YAML configuration string.
    std::shared_ptr<string> configYaml_ = nullptr;
    // The time when the ServiceMonitor was created. The value of this parameter is a timestamp.
    std::shared_ptr<string> creationTimestamp_ = nullptr;
    // The endpoints of the ServiceMonitor.
    std::shared_ptr<vector<Models::ListEnvServiceMonitorsResponseBodyDataEndpoints>> endpoints_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The number of matched services.
    std::shared_ptr<int32_t> matchedServiceCount_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the ServiceMonitor.
    std::shared_ptr<string> serviceMonitorName_ = nullptr;
    // The status of the ServiceMonitor.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
