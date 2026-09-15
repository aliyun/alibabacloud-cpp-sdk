// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATESANDBOXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATESANDBOXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicUpdateTemplateRegistryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateSandboxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateSandboxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(osType, osType_);
      DARABONBA_PTR_TO_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_TO_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_TO_JSON(registryType, registryType_);
      DARABONBA_PTR_TO_JSON(startCommand, startCommand_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateSandboxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(osType, osType_);
      DARABONBA_PTR_FROM_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_FROM_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_FROM_JSON(registryType, registryType_);
      DARABONBA_PTR_FROM_JSON(startCommand, startCommand_);
    };
    PublicUpdateTemplateSandboxConfig() = default ;
    PublicUpdateTemplateSandboxConfig(const PublicUpdateTemplateSandboxConfig &) = default ;
    PublicUpdateTemplateSandboxConfig(PublicUpdateTemplateSandboxConfig &&) = default ;
    PublicUpdateTemplateSandboxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateSandboxConfig() = default ;
    PublicUpdateTemplateSandboxConfig& operator=(const PublicUpdateTemplateSandboxConfig &) = default ;
    PublicUpdateTemplateSandboxConfig& operator=(PublicUpdateTemplateSandboxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->generation_ == nullptr && this->image_ == nullptr && this->osType_ == nullptr && this->readyCommand_ == nullptr && this->registryConfig_ == nullptr
        && this->registryType_ == nullptr && this->startCommand_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline PublicUpdateTemplateSandboxConfig& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int32_t getGeneration() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0) };
    inline PublicUpdateTemplateSandboxConfig& setGeneration(int32_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline PublicUpdateTemplateSandboxConfig& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline PublicUpdateTemplateSandboxConfig& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // readyCommand Field Functions 
    bool hasReadyCommand() const { return this->readyCommand_ != nullptr;};
    void deleteReadyCommand() { this->readyCommand_ = nullptr;};
    inline string getReadyCommand() const { DARABONBA_PTR_GET_DEFAULT(readyCommand_, "") };
    inline PublicUpdateTemplateSandboxConfig& setReadyCommand(string readyCommand) { DARABONBA_PTR_SET_VALUE(readyCommand_, readyCommand) };


    // registryConfig Field Functions 
    bool hasRegistryConfig() const { return this->registryConfig_ != nullptr;};
    void deleteRegistryConfig() { this->registryConfig_ = nullptr;};
    inline const PublicUpdateTemplateRegistryConfig & getRegistryConfig() const { DARABONBA_PTR_GET_CONST(registryConfig_, PublicUpdateTemplateRegistryConfig) };
    inline PublicUpdateTemplateRegistryConfig getRegistryConfig() { DARABONBA_PTR_GET(registryConfig_, PublicUpdateTemplateRegistryConfig) };
    inline PublicUpdateTemplateSandboxConfig& setRegistryConfig(const PublicUpdateTemplateRegistryConfig & registryConfig) { DARABONBA_PTR_SET_VALUE(registryConfig_, registryConfig) };
    inline PublicUpdateTemplateSandboxConfig& setRegistryConfig(PublicUpdateTemplateRegistryConfig && registryConfig) { DARABONBA_PTR_SET_RVALUE(registryConfig_, registryConfig) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline PublicUpdateTemplateSandboxConfig& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // startCommand Field Functions 
    bool hasStartCommand() const { return this->startCommand_ != nullptr;};
    void deleteStartCommand() { this->startCommand_ = nullptr;};
    inline string getStartCommand() const { DARABONBA_PTR_GET_DEFAULT(startCommand_, "") };
    inline PublicUpdateTemplateSandboxConfig& setStartCommand(string startCommand) { DARABONBA_PTR_SET_VALUE(startCommand_, startCommand) };


  protected:
    // The ID of the Container Registry Enterprise instance.
    shared_ptr<string> acrInstanceId_ {};
    // The sandbox generation. A value of 1 indicates rund, and a value of 2 indicates micro.
    shared_ptr<int32_t> generation_ {};
    // The image address.
    shared_ptr<string> image_ {};
    // The operating system type.
    shared_ptr<string> osType_ {};
    // The micro sandbox readiness probe command. Only the second generation supports this parameter.
    shared_ptr<string> readyCommand_ {};
    // The image repository configuration.
    shared_ptr<PublicUpdateTemplateRegistryConfig> registryConfig_ {};
    // The image repository type.
    shared_ptr<string> registryType_ {};
    // The micro sandbox startup command. Only the second generation supports this parameter.
    shared_ptr<string> startCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
