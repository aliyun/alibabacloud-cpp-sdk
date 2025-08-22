// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVCUSTOMJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVCUSTOMJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateEnvCustomJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvCustomJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(CustomJobName, customJobName_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvCustomJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(CustomJobName, customJobName_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEnvCustomJobRequest() = default ;
    CreateEnvCustomJobRequest(const CreateEnvCustomJobRequest &) = default ;
    CreateEnvCustomJobRequest(CreateEnvCustomJobRequest &&) = default ;
    CreateEnvCustomJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvCustomJobRequest() = default ;
    CreateEnvCustomJobRequest& operator=(const CreateEnvCustomJobRequest &) = default ;
    CreateEnvCustomJobRequest& operator=(CreateEnvCustomJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->configYaml_ != nullptr && this->customJobName_ != nullptr && this->environmentId_ != nullptr && this->regionId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline CreateEnvCustomJobRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline CreateEnvCustomJobRequest& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // customJobName Field Functions 
    bool hasCustomJobName() const { return this->customJobName_ != nullptr;};
    void deleteCustomJobName() { this->customJobName_ = nullptr;};
    inline string customJobName() const { DARABONBA_PTR_GET_DEFAULT(customJobName_, "") };
    inline CreateEnvCustomJobRequest& setCustomJobName(string customJobName) { DARABONBA_PTR_SET_VALUE(customJobName_, customJobName) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateEnvCustomJobRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEnvCustomJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The YAML configuration string of the custom job.
    // 
    // This parameter is required.
    std::shared_ptr<string> configYaml_ = nullptr;
    // The name of the custom job.
    // 
    // This parameter is required.
    std::shared_ptr<string> customJobName_ = nullptr;
    // The ID of the environment instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
