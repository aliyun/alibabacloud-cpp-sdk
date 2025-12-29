// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_IMAGECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RegistryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ImageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(accelerationType, accelerationType_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(instanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(registryConfig, registryConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ImageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(accelerationType, accelerationType_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(instanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(registryConfig, registryConfig_);
    };
    ImageConfig() = default ;
    ImageConfig(const ImageConfig &) = default ;
    ImageConfig(ImageConfig &&) = default ;
    ImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageConfig() = default ;
    ImageConfig& operator=(const ImageConfig &) = default ;
    ImageConfig& operator=(ImageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerationType_ == nullptr
        && this->image_ == nullptr && this->instanceID_ == nullptr && this->registryConfig_ == nullptr; };
    // accelerationType Field Functions 
    bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
    void deleteAccelerationType() { this->accelerationType_ = nullptr;};
    inline string getAccelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
    inline ImageConfig& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ImageConfig& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline ImageConfig& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // registryConfig Field Functions 
    bool hasRegistryConfig() const { return this->registryConfig_ != nullptr;};
    void deleteRegistryConfig() { this->registryConfig_ = nullptr;};
    inline const RegistryConfig & getRegistryConfig() const { DARABONBA_PTR_GET_CONST(registryConfig_, RegistryConfig) };
    inline RegistryConfig getRegistryConfig() { DARABONBA_PTR_GET(registryConfig_, RegistryConfig) };
    inline ImageConfig& setRegistryConfig(const RegistryConfig & registryConfig) { DARABONBA_PTR_SET_VALUE(registryConfig_, registryConfig) };
    inline ImageConfig& setRegistryConfig(RegistryConfig && registryConfig) { DARABONBA_PTR_SET_RVALUE(registryConfig_, registryConfig) };


  protected:
    shared_ptr<string> accelerationType_ {};
    shared_ptr<string> image_ {};
    shared_ptr<string> instanceID_ {};
    shared_ptr<RegistryConfig> registryConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
