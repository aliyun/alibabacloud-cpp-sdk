// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENVSERVICEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENVSERVICEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateEnvServiceMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnvServiceMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceMonitorName, serviceMonitorName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnvServiceMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceMonitorName, serviceMonitorName_);
    };
    UpdateEnvServiceMonitorRequest() = default ;
    UpdateEnvServiceMonitorRequest(const UpdateEnvServiceMonitorRequest &) = default ;
    UpdateEnvServiceMonitorRequest(UpdateEnvServiceMonitorRequest &&) = default ;
    UpdateEnvServiceMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnvServiceMonitorRequest() = default ;
    UpdateEnvServiceMonitorRequest& operator=(const UpdateEnvServiceMonitorRequest &) = default ;
    UpdateEnvServiceMonitorRequest& operator=(UpdateEnvServiceMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->configYaml_ != nullptr && this->dryRun_ != nullptr && this->environmentId_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr
        && this->serviceMonitorName_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline UpdateEnvServiceMonitorRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline UpdateEnvServiceMonitorRequest& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateEnvServiceMonitorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpdateEnvServiceMonitorRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateEnvServiceMonitorRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEnvServiceMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceMonitorName Field Functions 
    bool hasServiceMonitorName() const { return this->serviceMonitorName_ != nullptr;};
    void deleteServiceMonitorName() { this->serviceMonitorName_ = nullptr;};
    inline string serviceMonitorName() const { DARABONBA_PTR_GET_DEFAULT(serviceMonitorName_, "") };
    inline UpdateEnvServiceMonitorRequest& setServiceMonitorName(string serviceMonitorName) { DARABONBA_PTR_SET_VALUE(serviceMonitorName_, serviceMonitorName) };


  protected:
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The YAML configuration string.
    // 
    // This parameter is required.
    std::shared_ptr<string> configYaml_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The namespace where the ServiceMonitor is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the ServiceMonitor.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMonitorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
