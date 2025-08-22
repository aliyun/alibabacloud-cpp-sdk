// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLADDONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLADDONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class InstallAddonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAddonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseName, releaseName_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAddonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseName, releaseName_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    InstallAddonRequest() = default ;
    InstallAddonRequest(const InstallAddonRequest &) = default ;
    InstallAddonRequest(InstallAddonRequest &&) = default ;
    InstallAddonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAddonRequest() = default ;
    InstallAddonRequest& operator=(const InstallAddonRequest &) = default ;
    InstallAddonRequest& operator=(InstallAddonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonVersion_ != nullptr
        && this->aliyunLang_ != nullptr && this->dryRun_ != nullptr && this->environmentId_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr
        && this->releaseName_ != nullptr && this->values_ != nullptr; };
    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline InstallAddonRequest& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline InstallAddonRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline InstallAddonRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline InstallAddonRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InstallAddonRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InstallAddonRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline InstallAddonRequest& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline InstallAddonRequest& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The version of the add-on.
    // 
    // This parameter is required.
    std::shared_ptr<string> addonVersion_ = nullptr;
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Default value: false.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The name of the add-on.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the add-on after it is installed. If you do not specify this parameter, a default rule name is generated.
    std::shared_ptr<string> releaseName_ = nullptr;
    // The metadata.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
