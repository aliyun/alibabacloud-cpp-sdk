// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEADDONRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEADDONRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpgradeAddonReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAddonReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseName, releaseName_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAddonReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseName, releaseName_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpgradeAddonReleaseRequest() = default ;
    UpgradeAddonReleaseRequest(const UpgradeAddonReleaseRequest &) = default ;
    UpgradeAddonReleaseRequest(UpgradeAddonReleaseRequest &&) = default ;
    UpgradeAddonReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAddonReleaseRequest() = default ;
    UpgradeAddonReleaseRequest& operator=(const UpgradeAddonReleaseRequest &) = default ;
    UpgradeAddonReleaseRequest& operator=(UpgradeAddonReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonVersion_ != nullptr
        && this->dryRun_ != nullptr && this->environmentId_ != nullptr && this->regionId_ != nullptr && this->releaseName_ != nullptr && this->values_ != nullptr; };
    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline UpgradeAddonReleaseRequest& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpgradeAddonReleaseRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpgradeAddonReleaseRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeAddonReleaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline UpgradeAddonReleaseRequest& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline UpgradeAddonReleaseRequest& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The version of the add-on.
    // 
    // This parameter is required.
    std::shared_ptr<string> addonVersion_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the release.
    // 
    // This parameter is required.
    std::shared_ptr<string> releaseName_ = nullptr;
    // The metadata information.
    // 
    // This parameter is required.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
