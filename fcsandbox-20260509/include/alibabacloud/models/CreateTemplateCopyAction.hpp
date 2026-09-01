// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATECOPYACTION_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATECOPYACTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTemplateRegistryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateCopyAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateCopyAction& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_TO_JSON(registryType, registryType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateCopyAction& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_FROM_JSON(registryType, registryType_);
    };
    CreateTemplateCopyAction() = default ;
    CreateTemplateCopyAction(const CreateTemplateCopyAction &) = default ;
    CreateTemplateCopyAction(CreateTemplateCopyAction &&) = default ;
    CreateTemplateCopyAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateCopyAction() = default ;
    CreateTemplateCopyAction& operator=(const CreateTemplateCopyAction &) = default ;
    CreateTemplateCopyAction& operator=(CreateTemplateCopyAction &&) = default ;
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
    inline CreateTemplateCopyAction& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateTemplateCopyAction& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateTemplateCopyAction& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // registryConfig Field Functions 
    bool hasRegistryConfig() const { return this->registryConfig_ != nullptr;};
    void deleteRegistryConfig() { this->registryConfig_ = nullptr;};
    inline const CreateTemplateRegistryConfig & getRegistryConfig() const { DARABONBA_PTR_GET_CONST(registryConfig_, CreateTemplateRegistryConfig) };
    inline CreateTemplateRegistryConfig getRegistryConfig() { DARABONBA_PTR_GET(registryConfig_, CreateTemplateRegistryConfig) };
    inline CreateTemplateCopyAction& setRegistryConfig(const CreateTemplateRegistryConfig & registryConfig) { DARABONBA_PTR_SET_VALUE(registryConfig_, registryConfig) };
    inline CreateTemplateCopyAction& setRegistryConfig(CreateTemplateRegistryConfig && registryConfig) { DARABONBA_PTR_SET_RVALUE(registryConfig_, registryConfig) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline CreateTemplateCopyAction& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


  protected:
    // The ID of the ACR Enterprise instance where the source image resides.
    shared_ptr<string> acrInstanceId_ {};
    // Specifies whether to enable image replication.
    shared_ptr<bool> enabled_ {};
    // The source image address.
    shared_ptr<string> image_ {};
    // The source image repository configuration.
    shared_ptr<CreateTemplateRegistryConfig> registryConfig_ {};
    // The source image repository type.
    shared_ptr<string> registryType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
