// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTBUILDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTBUILDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequestBuildConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequestBuildConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BuildType, buildType_);
      DARABONBA_PTR_TO_JSON(Dockerfile, dockerfile_);
      DARABONBA_ANY_TO_JSON(RegistryAuths, registryAuths_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequestBuildConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
      DARABONBA_PTR_FROM_JSON(Dockerfile, dockerfile_);
      DARABONBA_ANY_FROM_JSON(RegistryAuths, registryAuths_);
    };
    CreateImageBuildRequestBuildConfig() = default ;
    CreateImageBuildRequestBuildConfig(const CreateImageBuildRequestBuildConfig &) = default ;
    CreateImageBuildRequestBuildConfig(CreateImageBuildRequestBuildConfig &&) = default ;
    CreateImageBuildRequestBuildConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequestBuildConfig() = default ;
    CreateImageBuildRequestBuildConfig& operator=(const CreateImageBuildRequestBuildConfig &) = default ;
    CreateImageBuildRequestBuildConfig& operator=(CreateImageBuildRequestBuildConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildType_ == nullptr
        && return this->dockerfile_ == nullptr && return this->registryAuths_ == nullptr; };
    // buildType Field Functions 
    bool hasBuildType() const { return this->buildType_ != nullptr;};
    void deleteBuildType() { this->buildType_ = nullptr;};
    inline string buildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
    inline CreateImageBuildRequestBuildConfig& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


    // dockerfile Field Functions 
    bool hasDockerfile() const { return this->dockerfile_ != nullptr;};
    void deleteDockerfile() { this->dockerfile_ = nullptr;};
    inline string dockerfile() const { DARABONBA_PTR_GET_DEFAULT(dockerfile_, "") };
    inline CreateImageBuildRequestBuildConfig& setDockerfile(string dockerfile) { DARABONBA_PTR_SET_VALUE(dockerfile_, dockerfile) };


    // registryAuths Field Functions 
    bool hasRegistryAuths() const { return this->registryAuths_ != nullptr;};
    void deleteRegistryAuths() { this->registryAuths_ = nullptr;};
    inline     const Darabonba::Json & registryAuths() const { DARABONBA_GET(registryAuths_) };
    Darabonba::Json & registryAuths() { DARABONBA_GET(registryAuths_) };
    inline CreateImageBuildRequestBuildConfig& setRegistryAuths(const Darabonba::Json & registryAuths) { DARABONBA_SET_VALUE(registryAuths_, registryAuths) };
    inline CreateImageBuildRequestBuildConfig& setRegistryAuths(Darabonba::Json & registryAuths) { DARABONBA_SET_RVALUE(registryAuths_, registryAuths) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> buildType_ = nullptr;
    // Dockerfile文件内容
    // 
    // This parameter is required.
    std::shared_ptr<string> dockerfile_ = nullptr;
    Darabonba::Json registryAuths_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
