// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvCustomJobsResponseBodyDataScrapeConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvCustomJobsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvCustomJobsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(AddonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_TO_JSON(CustomJobName, customJobName_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScrapeConfigs, scrapeConfigs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvCustomJobsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(AddonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_FROM_JSON(CustomJobName, customJobName_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScrapeConfigs, scrapeConfigs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListEnvCustomJobsResponseBodyData() = default ;
    ListEnvCustomJobsResponseBodyData(const ListEnvCustomJobsResponseBodyData &) = default ;
    ListEnvCustomJobsResponseBodyData(ListEnvCustomJobsResponseBodyData &&) = default ;
    ListEnvCustomJobsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvCustomJobsResponseBodyData() = default ;
    ListEnvCustomJobsResponseBodyData& operator=(const ListEnvCustomJobsResponseBodyData &) = default ;
    ListEnvCustomJobsResponseBodyData& operator=(ListEnvCustomJobsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->addonReleaseName_ != nullptr && this->addonVersion_ != nullptr && this->configYaml_ != nullptr && this->creationTimestamp_ != nullptr && this->customJobName_ != nullptr
        && this->environmentId_ != nullptr && this->regionId_ != nullptr && this->scrapeConfigs_ != nullptr && this->status_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListEnvCustomJobsResponseBodyData& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListEnvCustomJobsResponseBodyData& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline ListEnvCustomJobsResponseBodyData& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline ListEnvCustomJobsResponseBodyData& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // creationTimestamp Field Functions 
    bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
    void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
    inline string creationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
    inline ListEnvCustomJobsResponseBodyData& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


    // customJobName Field Functions 
    bool hasCustomJobName() const { return this->customJobName_ != nullptr;};
    void deleteCustomJobName() { this->customJobName_ = nullptr;};
    inline string customJobName() const { DARABONBA_PTR_GET_DEFAULT(customJobName_, "") };
    inline ListEnvCustomJobsResponseBodyData& setCustomJobName(string customJobName) { DARABONBA_PTR_SET_VALUE(customJobName_, customJobName) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvCustomJobsResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvCustomJobsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scrapeConfigs Field Functions 
    bool hasScrapeConfigs() const { return this->scrapeConfigs_ != nullptr;};
    void deleteScrapeConfigs() { this->scrapeConfigs_ = nullptr;};
    inline const vector<Models::ListEnvCustomJobsResponseBodyDataScrapeConfigs> & scrapeConfigs() const { DARABONBA_PTR_GET_CONST(scrapeConfigs_, vector<Models::ListEnvCustomJobsResponseBodyDataScrapeConfigs>) };
    inline vector<Models::ListEnvCustomJobsResponseBodyDataScrapeConfigs> scrapeConfigs() { DARABONBA_PTR_GET(scrapeConfigs_, vector<Models::ListEnvCustomJobsResponseBodyDataScrapeConfigs>) };
    inline ListEnvCustomJobsResponseBodyData& setScrapeConfigs(const vector<Models::ListEnvCustomJobsResponseBodyDataScrapeConfigs> & scrapeConfigs) { DARABONBA_PTR_SET_VALUE(scrapeConfigs_, scrapeConfigs) };
    inline ListEnvCustomJobsResponseBodyData& setScrapeConfigs(vector<Models::ListEnvCustomJobsResponseBodyDataScrapeConfigs> && scrapeConfigs) { DARABONBA_PTR_SET_RVALUE(scrapeConfigs_, scrapeConfigs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEnvCustomJobsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the add-on to which the custom job belongs.
    std::shared_ptr<string> addonName_ = nullptr;
    // The instance name of the add-on.
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    // The version of the add-on.
    std::shared_ptr<string> addonVersion_ = nullptr;
    // If the request parameter EncryptYaml is set to true, a Base64-encoded YAML string is returned. Otherwise, a plaintext YAML string is returned.
    std::shared_ptr<string> configYaml_ = nullptr;
    // The time when the custom job was created. The value of this parameter is a timestamp.
    std::shared_ptr<string> creationTimestamp_ = nullptr;
    // The name of the custom job.
    std::shared_ptr<string> customJobName_ = nullptr;
    // The ID of the environment instance.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The capture configurations.
    std::shared_ptr<vector<Models::ListEnvCustomJobsResponseBodyDataScrapeConfigs>> scrapeConfigs_ = nullptr;
    // The status of the custom job.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
