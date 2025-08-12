// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent.hpp>
#include <alibabacloud/models/DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer.hpp>
#include <alibabacloud/models/DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent.hpp>
#include <alibabacloud/models/DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBodyComponentsComponent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBodyComponentsComponent& obj) { 
      DARABONBA_PTR_TO_JSON(CaptionLayerContent, captionLayerContent_);
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentLayer, componentLayer_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(ImageLayerContent, imageLayerContent_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(TextLayerContent, textLayerContent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBodyComponentsComponent& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptionLayerContent, captionLayerContent_);
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentLayer, componentLayer_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(ImageLayerContent, imageLayerContent_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(TextLayerContent, textLayerContent_);
    };
    DescribeCasterComponentsResponseBodyComponentsComponent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponent(const DescribeCasterComponentsResponseBodyComponentsComponent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponent(DescribeCasterComponentsResponseBodyComponentsComponent &&) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBodyComponentsComponent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponent& operator=(const DescribeCasterComponentsResponseBodyComponentsComponent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponent& operator=(DescribeCasterComponentsResponseBodyComponentsComponent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->captionLayerContent_ != nullptr
        && this->componentId_ != nullptr && this->componentLayer_ != nullptr && this->componentName_ != nullptr && this->componentType_ != nullptr && this->effect_ != nullptr
        && this->imageLayerContent_ != nullptr && this->locationId_ != nullptr && this->textLayerContent_ != nullptr; };
    // captionLayerContent Field Functions 
    bool hasCaptionLayerContent() const { return this->captionLayerContent_ != nullptr;};
    void deleteCaptionLayerContent() { this->captionLayerContent_ = nullptr;};
    inline const Models::DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent & captionLayerContent() const { DARABONBA_PTR_GET_CONST(captionLayerContent_, Models::DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent) };
    inline Models::DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent captionLayerContent() { DARABONBA_PTR_GET(captionLayerContent_, Models::DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setCaptionLayerContent(const Models::DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent & captionLayerContent) { DARABONBA_PTR_SET_VALUE(captionLayerContent_, captionLayerContent) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setCaptionLayerContent(Models::DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent && captionLayerContent) { DARABONBA_PTR_SET_RVALUE(captionLayerContent_, captionLayerContent) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentLayer Field Functions 
    bool hasComponentLayer() const { return this->componentLayer_ != nullptr;};
    void deleteComponentLayer() { this->componentLayer_ = nullptr;};
    inline const Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer & componentLayer() const { DARABONBA_PTR_GET_CONST(componentLayer_, Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer) };
    inline Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer componentLayer() { DARABONBA_PTR_GET(componentLayer_, Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setComponentLayer(const Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer & componentLayer) { DARABONBA_PTR_SET_VALUE(componentLayer_, componentLayer) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setComponentLayer(Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer && componentLayer) { DARABONBA_PTR_SET_RVALUE(componentLayer_, componentLayer) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // imageLayerContent Field Functions 
    bool hasImageLayerContent() const { return this->imageLayerContent_ != nullptr;};
    void deleteImageLayerContent() { this->imageLayerContent_ = nullptr;};
    inline const Models::DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent & imageLayerContent() const { DARABONBA_PTR_GET_CONST(imageLayerContent_, Models::DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent) };
    inline Models::DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent imageLayerContent() { DARABONBA_PTR_GET(imageLayerContent_, Models::DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setImageLayerContent(const Models::DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent & imageLayerContent) { DARABONBA_PTR_SET_VALUE(imageLayerContent_, imageLayerContent) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setImageLayerContent(Models::DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent && imageLayerContent) { DARABONBA_PTR_SET_RVALUE(imageLayerContent_, imageLayerContent) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // textLayerContent Field Functions 
    bool hasTextLayerContent() const { return this->textLayerContent_ != nullptr;};
    void deleteTextLayerContent() { this->textLayerContent_ = nullptr;};
    inline const Models::DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent & textLayerContent() const { DARABONBA_PTR_GET_CONST(textLayerContent_, Models::DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent) };
    inline Models::DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent textLayerContent() { DARABONBA_PTR_GET(textLayerContent_, Models::DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setTextLayerContent(const Models::DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent & textLayerContent) { DARABONBA_PTR_SET_VALUE(textLayerContent_, textLayerContent) };
    inline DescribeCasterComponentsResponseBodyComponentsComponent& setTextLayerContent(Models::DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent && textLayerContent) { DARABONBA_PTR_SET_RVALUE(textLayerContent_, textLayerContent) };


  protected:
    // The information about the subtitle component.
    std::shared_ptr<Models::DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent> captionLayerContent_ = nullptr;
    // The component ID.
    std::shared_ptr<string> componentId_ = nullptr;
    // The information about the component layer, such as the size and layout.
    std::shared_ptr<Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer> componentLayer_ = nullptr;
    // The name of the component. By default, the name is the ID of the component.
    std::shared_ptr<string> componentName_ = nullptr;
    // The type of the component. Valid values:
    // 
    // *   **text**: a text component
    // *   **image**: an image component
    // *   **caption**: a caption component
    std::shared_ptr<string> componentType_ = nullptr;
    // The display effect for the component. Valid values:
    // 
    // *   **none**
    // *   **animateH**: horizontal scrolling
    // *   **animateV**: vertical scrolling
    std::shared_ptr<string> effect_ = nullptr;
    // The information about the image component. This parameter is returned only for image components.
    std::shared_ptr<Models::DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent> imageLayerContent_ = nullptr;
    // The location ID of the component.
    // 
    // Each location ID can be assigned to only one component and must be in the RC[Number] format. The values of this parameter are in ascending order, for example, from RC01 to RC12.
    std::shared_ptr<string> locationId_ = nullptr;
    // The information about the text component. This parameter is returned only for text components.
    std::shared_ptr<Models::DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent> textLayerContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
