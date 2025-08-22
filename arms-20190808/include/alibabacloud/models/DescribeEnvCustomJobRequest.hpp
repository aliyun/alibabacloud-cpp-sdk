// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVCUSTOMJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVCUSTOMJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvCustomJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvCustomJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomJobName, customJobName_);
      DARABONBA_PTR_TO_JSON(EncryptYaml, encryptYaml_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvCustomJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomJobName, customJobName_);
      DARABONBA_PTR_FROM_JSON(EncryptYaml, encryptYaml_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEnvCustomJobRequest() = default ;
    DescribeEnvCustomJobRequest(const DescribeEnvCustomJobRequest &) = default ;
    DescribeEnvCustomJobRequest(DescribeEnvCustomJobRequest &&) = default ;
    DescribeEnvCustomJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvCustomJobRequest() = default ;
    DescribeEnvCustomJobRequest& operator=(const DescribeEnvCustomJobRequest &) = default ;
    DescribeEnvCustomJobRequest& operator=(DescribeEnvCustomJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customJobName_ != nullptr
        && this->encryptYaml_ != nullptr && this->environmentId_ != nullptr && this->regionId_ != nullptr; };
    // customJobName Field Functions 
    bool hasCustomJobName() const { return this->customJobName_ != nullptr;};
    void deleteCustomJobName() { this->customJobName_ = nullptr;};
    inline string customJobName() const { DARABONBA_PTR_GET_DEFAULT(customJobName_, "") };
    inline DescribeEnvCustomJobRequest& setCustomJobName(string customJobName) { DARABONBA_PTR_SET_VALUE(customJobName_, customJobName) };


    // encryptYaml Field Functions 
    bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
    void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
    inline bool encryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
    inline DescribeEnvCustomJobRequest& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvCustomJobRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnvCustomJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the custom job.
    // 
    // This parameter is required.
    std::shared_ptr<string> customJobName_ = nullptr;
    // Specifies whether to return an encrypted YAML string.
    std::shared_ptr<bool> encryptYaml_ = nullptr;
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
