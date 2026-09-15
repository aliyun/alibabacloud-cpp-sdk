// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATECOPYACTION_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATECOPYACTION_HPP_
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
  class PublicUpdateTemplateCopyAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateCopyAction& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_TO_JSON(registryType, registryType_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateCopyAction& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_FROM_JSON(registryType, registryType_);
    };
    PublicUpdateTemplateCopyAction() = default ;
    PublicUpdateTemplateCopyAction(const PublicUpdateTemplateCopyAction &) = default ;
    PublicUpdateTemplateCopyAction(PublicUpdateTemplateCopyAction &&) = default ;
    PublicUpdateTemplateCopyAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateCopyAction() = default ;
    PublicUpdateTemplateCopyAction& operator=(const PublicUpdateTemplateCopyAction &) = default ;
    PublicUpdateTemplateCopyAction& operator=(PublicUpdateTemplateCopyAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->enabled_ == nullptr && this->image_ == nullptr && this->registryConfig_ == nullptr && this->registryType_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline PublicUpdateTemplateCopyAction& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline PublicUpdateTemplateCopyAction& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline PublicUpdateTemplateCopyAction& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // registryConfig Field Functions 
    bool hasRegistryConfig() const { return this->registryConfig_ != nullptr;};
    void deleteRegistryConfig() { this->registryConfig_ = nullptr;};
    inline const PublicUpdateTemplateRegistryConfig & getRegistryConfig() const { DARABONBA_PTR_GET_CONST(registryConfig_, PublicUpdateTemplateRegistryConfig) };
    inline PublicUpdateTemplateRegistryConfig getRegistryConfig() { DARABONBA_PTR_GET(registryConfig_, PublicUpdateTemplateRegistryConfig) };
    inline PublicUpdateTemplateCopyAction& setRegistryConfig(const PublicUpdateTemplateRegistryConfig & registryConfig) { DARABONBA_PTR_SET_VALUE(registryConfig_, registryConfig) };
    inline PublicUpdateTemplateCopyAction& setRegistryConfig(PublicUpdateTemplateRegistryConfig && registryConfig) { DARABONBA_PTR_SET_RVALUE(registryConfig_, registryConfig) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline PublicUpdateTemplateCopyAction& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


  protected:
    // The ID of the destination ACR Enterprise instance.
    shared_ptr<string> acrInstanceId_ {};
    // Indicates whether image replication is enabled.
    shared_ptr<bool> enabled_ {};
    // The destination image address for replication.
    shared_ptr<string> image_ {};
    // The image repository configuration.
    shared_ptr<PublicUpdateTemplateRegistryConfig> registryConfig_ {};
    // The destination repository type.
    shared_ptr<string> registryType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
