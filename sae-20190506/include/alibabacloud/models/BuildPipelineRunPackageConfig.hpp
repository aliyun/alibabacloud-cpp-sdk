// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINERUNPACKAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINERUNPACKAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineRunPackageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineRunPackageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineRunPackageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
    };
    BuildPipelineRunPackageConfig() = default ;
    BuildPipelineRunPackageConfig(const BuildPipelineRunPackageConfig &) = default ;
    BuildPipelineRunPackageConfig(BuildPipelineRunPackageConfig &&) = default ;
    BuildPipelineRunPackageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineRunPackageConfig() = default ;
    BuildPipelineRunPackageConfig& operator=(const BuildPipelineRunPackageConfig &) = default ;
    BuildPipelineRunPackageConfig& operator=(BuildPipelineRunPackageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packageName_ == nullptr
        && return this->packageType_ == nullptr && return this->packageUrl_ == nullptr && return this->packageVersion_ == nullptr; };
    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline BuildPipelineRunPackageConfig& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline BuildPipelineRunPackageConfig& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline BuildPipelineRunPackageConfig& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline BuildPipelineRunPackageConfig& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


  protected:
    std::shared_ptr<string> packageName_ = nullptr;
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> packageUrl_ = nullptr;
    std::shared_ptr<string> packageVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
