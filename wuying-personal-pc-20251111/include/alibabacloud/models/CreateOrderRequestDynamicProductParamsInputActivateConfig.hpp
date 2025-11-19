// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERREQUESTDYNAMICPRODUCTPARAMSINPUTACTIVATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERREQUESTDYNAMICPRODUCTPARAMSINPUTACTIVATECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class CreateOrderRequestDynamicProductParamsInputActivateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderRequestDynamicProductParamsInputActivateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderRequestDynamicProductParamsInputActivateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
    };
    CreateOrderRequestDynamicProductParamsInputActivateConfig() = default ;
    CreateOrderRequestDynamicProductParamsInputActivateConfig(const CreateOrderRequestDynamicProductParamsInputActivateConfig &) = default ;
    CreateOrderRequestDynamicProductParamsInputActivateConfig(CreateOrderRequestDynamicProductParamsInputActivateConfig &&) = default ;
    CreateOrderRequestDynamicProductParamsInputActivateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderRequestDynamicProductParamsInputActivateConfig() = default ;
    CreateOrderRequestDynamicProductParamsInputActivateConfig& operator=(const CreateOrderRequestDynamicProductParamsInputActivateConfig &) = default ;
    CreateOrderRequestDynamicProductParamsInputActivateConfig& operator=(CreateOrderRequestDynamicProductParamsInputActivateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cityName_ == nullptr
        && return this->desktopName_ == nullptr && return this->imageId_ == nullptr; };
    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline CreateOrderRequestDynamicProductParamsInputActivateConfig& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline CreateOrderRequestDynamicProductParamsInputActivateConfig& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateOrderRequestDynamicProductParamsInputActivateConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<string> desktopName_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
