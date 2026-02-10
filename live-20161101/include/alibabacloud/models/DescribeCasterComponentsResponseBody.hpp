// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterComponentsResponseBody() = default ;
    DescribeCasterComponentsResponseBody(const DescribeCasterComponentsResponseBody &) = default ;
    DescribeCasterComponentsResponseBody(DescribeCasterComponentsResponseBody &&) = default ;
    DescribeCasterComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBody() = default ;
    DescribeCasterComponentsResponseBody& operator=(const DescribeCasterComponentsResponseBody &) = default ;
    DescribeCasterComponentsResponseBody& operator=(DescribeCasterComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(Component, component_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(Component, component_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Component : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Component& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Component& obj) { 
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
        Component() = default ;
        Component(const Component &) = default ;
        Component(Component &&) = default ;
        Component(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Component() = default ;
        Component& operator=(const Component &) = default ;
        Component& operator=(Component &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TextLayerContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TextLayerContent& obj) { 
            DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
            DARABONBA_PTR_TO_JSON(BorderWidthNormalized, borderWidthNormalized_);
            DARABONBA_PTR_TO_JSON(Color, color_);
            DARABONBA_PTR_TO_JSON(FontName, fontName_);
            DARABONBA_PTR_TO_JSON(SizeNormalized, sizeNormalized_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, TextLayerContent& obj) { 
            DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
            DARABONBA_PTR_FROM_JSON(BorderWidthNormalized, borderWidthNormalized_);
            DARABONBA_PTR_FROM_JSON(Color, color_);
            DARABONBA_PTR_FROM_JSON(FontName, fontName_);
            DARABONBA_PTR_FROM_JSON(SizeNormalized, sizeNormalized_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          TextLayerContent() = default ;
          TextLayerContent(const TextLayerContent &) = default ;
          TextLayerContent(TextLayerContent &&) = default ;
          TextLayerContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TextLayerContent() = default ;
          TextLayerContent& operator=(const TextLayerContent &) = default ;
          TextLayerContent& operator=(TextLayerContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->borderColor_ == nullptr
        && this->borderWidthNormalized_ == nullptr && this->color_ == nullptr && this->fontName_ == nullptr && this->sizeNormalized_ == nullptr && this->text_ == nullptr; };
          // borderColor Field Functions 
          bool hasBorderColor() const { return this->borderColor_ != nullptr;};
          void deleteBorderColor() { this->borderColor_ = nullptr;};
          inline string getBorderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
          inline TextLayerContent& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


          // borderWidthNormalized Field Functions 
          bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
          void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
          inline float getBorderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
          inline TextLayerContent& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


          // color Field Functions 
          bool hasColor() const { return this->color_ != nullptr;};
          void deleteColor() { this->color_ = nullptr;};
          inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
          inline TextLayerContent& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


          // fontName Field Functions 
          bool hasFontName() const { return this->fontName_ != nullptr;};
          void deleteFontName() { this->fontName_ = nullptr;};
          inline string getFontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
          inline TextLayerContent& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


          // sizeNormalized Field Functions 
          bool hasSizeNormalized() const { return this->sizeNormalized_ != nullptr;};
          void deleteSizeNormalized() { this->sizeNormalized_ = nullptr;};
          inline float getSizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(sizeNormalized_, 0.0) };
          inline TextLayerContent& setSizeNormalized(float sizeNormalized) { DARABONBA_PTR_SET_VALUE(sizeNormalized_, sizeNormalized) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline TextLayerContent& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          shared_ptr<string> borderColor_ {};
          shared_ptr<float> borderWidthNormalized_ {};
          shared_ptr<string> color_ {};
          shared_ptr<string> fontName_ {};
          shared_ptr<float> sizeNormalized_ {};
          shared_ptr<string> text_ {};
        };

        class ImageLayerContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageLayerContent& obj) { 
            DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
          };
          friend void from_json(const Darabonba::Json& j, ImageLayerContent& obj) { 
            DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
          };
          ImageLayerContent() = default ;
          ImageLayerContent(const ImageLayerContent &) = default ;
          ImageLayerContent(ImageLayerContent &&) = default ;
          ImageLayerContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageLayerContent() = default ;
          ImageLayerContent& operator=(const ImageLayerContent &) = default ;
          ImageLayerContent& operator=(ImageLayerContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->materialId_ == nullptr; };
          // materialId Field Functions 
          bool hasMaterialId() const { return this->materialId_ != nullptr;};
          void deleteMaterialId() { this->materialId_ = nullptr;};
          inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
          inline ImageLayerContent& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


        protected:
          shared_ptr<string> materialId_ {};
        };

        class ComponentLayer : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComponentLayer& obj) { 
            DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
            DARABONBA_PTR_TO_JSON(PositionNormalizeds, positionNormalizeds_);
            DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
            DARABONBA_PTR_TO_JSON(Transparency, transparency_);
            DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
          };
          friend void from_json(const Darabonba::Json& j, ComponentLayer& obj) { 
            DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
            DARABONBA_PTR_FROM_JSON(PositionNormalizeds, positionNormalizeds_);
            DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
            DARABONBA_PTR_FROM_JSON(Transparency, transparency_);
            DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
          };
          ComponentLayer() = default ;
          ComponentLayer(const ComponentLayer &) = default ;
          ComponentLayer(ComponentLayer &&) = default ;
          ComponentLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ComponentLayer() = default ;
          ComponentLayer& operator=(const ComponentLayer &) = default ;
          ComponentLayer& operator=(ComponentLayer &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PositionNormalizeds : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PositionNormalizeds& obj) { 
              DARABONBA_PTR_TO_JSON(Position, position_);
            };
            friend void from_json(const Darabonba::Json& j, PositionNormalizeds& obj) { 
              DARABONBA_PTR_FROM_JSON(Position, position_);
            };
            PositionNormalizeds() = default ;
            PositionNormalizeds(const PositionNormalizeds &) = default ;
            PositionNormalizeds(PositionNormalizeds &&) = default ;
            PositionNormalizeds(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PositionNormalizeds() = default ;
            PositionNormalizeds& operator=(const PositionNormalizeds &) = default ;
            PositionNormalizeds& operator=(PositionNormalizeds &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->position_ == nullptr; };
            // position Field Functions 
            bool hasPosition() const { return this->position_ != nullptr;};
            void deletePosition() { this->position_ = nullptr;};
            inline const vector<float> & getPosition() const { DARABONBA_PTR_GET_CONST(position_, vector<float>) };
            inline vector<float> getPosition() { DARABONBA_PTR_GET(position_, vector<float>) };
            inline PositionNormalizeds& setPosition(const vector<float> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
            inline PositionNormalizeds& setPosition(vector<float> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


          protected:
            shared_ptr<vector<float>> position_ {};
          };

          virtual bool empty() const override { return this->heightNormalized_ == nullptr
        && this->positionNormalizeds_ == nullptr && this->positionRefer_ == nullptr && this->transparency_ == nullptr && this->widthNormalized_ == nullptr; };
          // heightNormalized Field Functions 
          bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
          void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
          inline float getHeightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
          inline ComponentLayer& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


          // positionNormalizeds Field Functions 
          bool hasPositionNormalizeds() const { return this->positionNormalizeds_ != nullptr;};
          void deletePositionNormalizeds() { this->positionNormalizeds_ = nullptr;};
          inline const ComponentLayer::PositionNormalizeds & getPositionNormalizeds() const { DARABONBA_PTR_GET_CONST(positionNormalizeds_, ComponentLayer::PositionNormalizeds) };
          inline ComponentLayer::PositionNormalizeds getPositionNormalizeds() { DARABONBA_PTR_GET(positionNormalizeds_, ComponentLayer::PositionNormalizeds) };
          inline ComponentLayer& setPositionNormalizeds(const ComponentLayer::PositionNormalizeds & positionNormalizeds) { DARABONBA_PTR_SET_VALUE(positionNormalizeds_, positionNormalizeds) };
          inline ComponentLayer& setPositionNormalizeds(ComponentLayer::PositionNormalizeds && positionNormalizeds) { DARABONBA_PTR_SET_RVALUE(positionNormalizeds_, positionNormalizeds) };


          // positionRefer Field Functions 
          bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
          void deletePositionRefer() { this->positionRefer_ = nullptr;};
          inline string getPositionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
          inline ComponentLayer& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


          // transparency Field Functions 
          bool hasTransparency() const { return this->transparency_ != nullptr;};
          void deleteTransparency() { this->transparency_ = nullptr;};
          inline int32_t getTransparency() const { DARABONBA_PTR_GET_DEFAULT(transparency_, 0) };
          inline ComponentLayer& setTransparency(int32_t transparency) { DARABONBA_PTR_SET_VALUE(transparency_, transparency) };


          // widthNormalized Field Functions 
          bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
          void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
          inline float getWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
          inline ComponentLayer& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


        protected:
          shared_ptr<float> heightNormalized_ {};
          shared_ptr<ComponentLayer::PositionNormalizeds> positionNormalizeds_ {};
          shared_ptr<string> positionRefer_ {};
          shared_ptr<int32_t> transparency_ {};
          shared_ptr<float> widthNormalized_ {};
        };

        class CaptionLayerContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CaptionLayerContent& obj) { 
            DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
            DARABONBA_PTR_TO_JSON(BorderWidthNormalized, borderWidthNormalized_);
            DARABONBA_PTR_TO_JSON(Color, color_);
            DARABONBA_PTR_TO_JSON(FontName, fontName_);
            DARABONBA_PTR_TO_JSON(LineSpaceNormalized, lineSpaceNormalized_);
            DARABONBA_PTR_TO_JSON(LocationId, locationId_);
            DARABONBA_PTR_TO_JSON(PtsOffset, ptsOffset_);
            DARABONBA_PTR_TO_JSON(ShowSourceLan, showSourceLan_);
            DARABONBA_PTR_TO_JSON(SizeNormalized, sizeNormalized_);
            DARABONBA_PTR_TO_JSON(SourceLan, sourceLan_);
            DARABONBA_PTR_TO_JSON(TargetLan, targetLan_);
            DARABONBA_PTR_TO_JSON(WordCountPerLine, wordCountPerLine_);
            DARABONBA_PTR_TO_JSON(WordSpaceNormalized, wordSpaceNormalized_);
            DARABONBA_PTR_TO_JSON(WordsCount, wordsCount_);
          };
          friend void from_json(const Darabonba::Json& j, CaptionLayerContent& obj) { 
            DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
            DARABONBA_PTR_FROM_JSON(BorderWidthNormalized, borderWidthNormalized_);
            DARABONBA_PTR_FROM_JSON(Color, color_);
            DARABONBA_PTR_FROM_JSON(FontName, fontName_);
            DARABONBA_PTR_FROM_JSON(LineSpaceNormalized, lineSpaceNormalized_);
            DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
            DARABONBA_PTR_FROM_JSON(PtsOffset, ptsOffset_);
            DARABONBA_PTR_FROM_JSON(ShowSourceLan, showSourceLan_);
            DARABONBA_PTR_FROM_JSON(SizeNormalized, sizeNormalized_);
            DARABONBA_PTR_FROM_JSON(SourceLan, sourceLan_);
            DARABONBA_PTR_FROM_JSON(TargetLan, targetLan_);
            DARABONBA_PTR_FROM_JSON(WordCountPerLine, wordCountPerLine_);
            DARABONBA_PTR_FROM_JSON(WordSpaceNormalized, wordSpaceNormalized_);
            DARABONBA_PTR_FROM_JSON(WordsCount, wordsCount_);
          };
          CaptionLayerContent() = default ;
          CaptionLayerContent(const CaptionLayerContent &) = default ;
          CaptionLayerContent(CaptionLayerContent &&) = default ;
          CaptionLayerContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CaptionLayerContent() = default ;
          CaptionLayerContent& operator=(const CaptionLayerContent &) = default ;
          CaptionLayerContent& operator=(CaptionLayerContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->borderColor_ == nullptr
        && this->borderWidthNormalized_ == nullptr && this->color_ == nullptr && this->fontName_ == nullptr && this->lineSpaceNormalized_ == nullptr && this->locationId_ == nullptr
        && this->ptsOffset_ == nullptr && this->showSourceLan_ == nullptr && this->sizeNormalized_ == nullptr && this->sourceLan_ == nullptr && this->targetLan_ == nullptr
        && this->wordCountPerLine_ == nullptr && this->wordSpaceNormalized_ == nullptr && this->wordsCount_ == nullptr; };
          // borderColor Field Functions 
          bool hasBorderColor() const { return this->borderColor_ != nullptr;};
          void deleteBorderColor() { this->borderColor_ = nullptr;};
          inline string getBorderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
          inline CaptionLayerContent& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


          // borderWidthNormalized Field Functions 
          bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
          void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
          inline float getBorderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
          inline CaptionLayerContent& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


          // color Field Functions 
          bool hasColor() const { return this->color_ != nullptr;};
          void deleteColor() { this->color_ = nullptr;};
          inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
          inline CaptionLayerContent& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


          // fontName Field Functions 
          bool hasFontName() const { return this->fontName_ != nullptr;};
          void deleteFontName() { this->fontName_ = nullptr;};
          inline string getFontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
          inline CaptionLayerContent& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


          // lineSpaceNormalized Field Functions 
          bool hasLineSpaceNormalized() const { return this->lineSpaceNormalized_ != nullptr;};
          void deleteLineSpaceNormalized() { this->lineSpaceNormalized_ = nullptr;};
          inline float getLineSpaceNormalized() const { DARABONBA_PTR_GET_DEFAULT(lineSpaceNormalized_, 0.0) };
          inline CaptionLayerContent& setLineSpaceNormalized(float lineSpaceNormalized) { DARABONBA_PTR_SET_VALUE(lineSpaceNormalized_, lineSpaceNormalized) };


          // locationId Field Functions 
          bool hasLocationId() const { return this->locationId_ != nullptr;};
          void deleteLocationId() { this->locationId_ = nullptr;};
          inline string getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
          inline CaptionLayerContent& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


          // ptsOffset Field Functions 
          bool hasPtsOffset() const { return this->ptsOffset_ != nullptr;};
          void deletePtsOffset() { this->ptsOffset_ = nullptr;};
          inline int32_t getPtsOffset() const { DARABONBA_PTR_GET_DEFAULT(ptsOffset_, 0) };
          inline CaptionLayerContent& setPtsOffset(int32_t ptsOffset) { DARABONBA_PTR_SET_VALUE(ptsOffset_, ptsOffset) };


          // showSourceLan Field Functions 
          bool hasShowSourceLan() const { return this->showSourceLan_ != nullptr;};
          void deleteShowSourceLan() { this->showSourceLan_ = nullptr;};
          inline bool getShowSourceLan() const { DARABONBA_PTR_GET_DEFAULT(showSourceLan_, false) };
          inline CaptionLayerContent& setShowSourceLan(bool showSourceLan) { DARABONBA_PTR_SET_VALUE(showSourceLan_, showSourceLan) };


          // sizeNormalized Field Functions 
          bool hasSizeNormalized() const { return this->sizeNormalized_ != nullptr;};
          void deleteSizeNormalized() { this->sizeNormalized_ = nullptr;};
          inline float getSizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(sizeNormalized_, 0.0) };
          inline CaptionLayerContent& setSizeNormalized(float sizeNormalized) { DARABONBA_PTR_SET_VALUE(sizeNormalized_, sizeNormalized) };


          // sourceLan Field Functions 
          bool hasSourceLan() const { return this->sourceLan_ != nullptr;};
          void deleteSourceLan() { this->sourceLan_ = nullptr;};
          inline string getSourceLan() const { DARABONBA_PTR_GET_DEFAULT(sourceLan_, "") };
          inline CaptionLayerContent& setSourceLan(string sourceLan) { DARABONBA_PTR_SET_VALUE(sourceLan_, sourceLan) };


          // targetLan Field Functions 
          bool hasTargetLan() const { return this->targetLan_ != nullptr;};
          void deleteTargetLan() { this->targetLan_ = nullptr;};
          inline string getTargetLan() const { DARABONBA_PTR_GET_DEFAULT(targetLan_, "") };
          inline CaptionLayerContent& setTargetLan(string targetLan) { DARABONBA_PTR_SET_VALUE(targetLan_, targetLan) };


          // wordCountPerLine Field Functions 
          bool hasWordCountPerLine() const { return this->wordCountPerLine_ != nullptr;};
          void deleteWordCountPerLine() { this->wordCountPerLine_ = nullptr;};
          inline int32_t getWordCountPerLine() const { DARABONBA_PTR_GET_DEFAULT(wordCountPerLine_, 0) };
          inline CaptionLayerContent& setWordCountPerLine(int32_t wordCountPerLine) { DARABONBA_PTR_SET_VALUE(wordCountPerLine_, wordCountPerLine) };


          // wordSpaceNormalized Field Functions 
          bool hasWordSpaceNormalized() const { return this->wordSpaceNormalized_ != nullptr;};
          void deleteWordSpaceNormalized() { this->wordSpaceNormalized_ = nullptr;};
          inline float getWordSpaceNormalized() const { DARABONBA_PTR_GET_DEFAULT(wordSpaceNormalized_, 0.0) };
          inline CaptionLayerContent& setWordSpaceNormalized(float wordSpaceNormalized) { DARABONBA_PTR_SET_VALUE(wordSpaceNormalized_, wordSpaceNormalized) };


          // wordsCount Field Functions 
          bool hasWordsCount() const { return this->wordsCount_ != nullptr;};
          void deleteWordsCount() { this->wordsCount_ = nullptr;};
          inline int32_t getWordsCount() const { DARABONBA_PTR_GET_DEFAULT(wordsCount_, 0) };
          inline CaptionLayerContent& setWordsCount(int32_t wordsCount) { DARABONBA_PTR_SET_VALUE(wordsCount_, wordsCount) };


        protected:
          shared_ptr<string> borderColor_ {};
          shared_ptr<float> borderWidthNormalized_ {};
          shared_ptr<string> color_ {};
          shared_ptr<string> fontName_ {};
          shared_ptr<float> lineSpaceNormalized_ {};
          shared_ptr<string> locationId_ {};
          shared_ptr<int32_t> ptsOffset_ {};
          shared_ptr<bool> showSourceLan_ {};
          shared_ptr<float> sizeNormalized_ {};
          shared_ptr<string> sourceLan_ {};
          shared_ptr<string> targetLan_ {};
          shared_ptr<int32_t> wordCountPerLine_ {};
          shared_ptr<float> wordSpaceNormalized_ {};
          shared_ptr<int32_t> wordsCount_ {};
        };

        virtual bool empty() const override { return this->captionLayerContent_ == nullptr
        && this->componentId_ == nullptr && this->componentLayer_ == nullptr && this->componentName_ == nullptr && this->componentType_ == nullptr && this->effect_ == nullptr
        && this->imageLayerContent_ == nullptr && this->locationId_ == nullptr && this->textLayerContent_ == nullptr; };
        // captionLayerContent Field Functions 
        bool hasCaptionLayerContent() const { return this->captionLayerContent_ != nullptr;};
        void deleteCaptionLayerContent() { this->captionLayerContent_ = nullptr;};
        inline const Component::CaptionLayerContent & getCaptionLayerContent() const { DARABONBA_PTR_GET_CONST(captionLayerContent_, Component::CaptionLayerContent) };
        inline Component::CaptionLayerContent getCaptionLayerContent() { DARABONBA_PTR_GET(captionLayerContent_, Component::CaptionLayerContent) };
        inline Component& setCaptionLayerContent(const Component::CaptionLayerContent & captionLayerContent) { DARABONBA_PTR_SET_VALUE(captionLayerContent_, captionLayerContent) };
        inline Component& setCaptionLayerContent(Component::CaptionLayerContent && captionLayerContent) { DARABONBA_PTR_SET_RVALUE(captionLayerContent_, captionLayerContent) };


        // componentId Field Functions 
        bool hasComponentId() const { return this->componentId_ != nullptr;};
        void deleteComponentId() { this->componentId_ = nullptr;};
        inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
        inline Component& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


        // componentLayer Field Functions 
        bool hasComponentLayer() const { return this->componentLayer_ != nullptr;};
        void deleteComponentLayer() { this->componentLayer_ = nullptr;};
        inline const Component::ComponentLayer & getComponentLayer() const { DARABONBA_PTR_GET_CONST(componentLayer_, Component::ComponentLayer) };
        inline Component::ComponentLayer getComponentLayer() { DARABONBA_PTR_GET(componentLayer_, Component::ComponentLayer) };
        inline Component& setComponentLayer(const Component::ComponentLayer & componentLayer) { DARABONBA_PTR_SET_VALUE(componentLayer_, componentLayer) };
        inline Component& setComponentLayer(Component::ComponentLayer && componentLayer) { DARABONBA_PTR_SET_RVALUE(componentLayer_, componentLayer) };


        // componentName Field Functions 
        bool hasComponentName() const { return this->componentName_ != nullptr;};
        void deleteComponentName() { this->componentName_ = nullptr;};
        inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
        inline Component& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


        // componentType Field Functions 
        bool hasComponentType() const { return this->componentType_ != nullptr;};
        void deleteComponentType() { this->componentType_ = nullptr;};
        inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
        inline Component& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline Component& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // imageLayerContent Field Functions 
        bool hasImageLayerContent() const { return this->imageLayerContent_ != nullptr;};
        void deleteImageLayerContent() { this->imageLayerContent_ = nullptr;};
        inline const Component::ImageLayerContent & getImageLayerContent() const { DARABONBA_PTR_GET_CONST(imageLayerContent_, Component::ImageLayerContent) };
        inline Component::ImageLayerContent getImageLayerContent() { DARABONBA_PTR_GET(imageLayerContent_, Component::ImageLayerContent) };
        inline Component& setImageLayerContent(const Component::ImageLayerContent & imageLayerContent) { DARABONBA_PTR_SET_VALUE(imageLayerContent_, imageLayerContent) };
        inline Component& setImageLayerContent(Component::ImageLayerContent && imageLayerContent) { DARABONBA_PTR_SET_RVALUE(imageLayerContent_, imageLayerContent) };


        // locationId Field Functions 
        bool hasLocationId() const { return this->locationId_ != nullptr;};
        void deleteLocationId() { this->locationId_ = nullptr;};
        inline string getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
        inline Component& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


        // textLayerContent Field Functions 
        bool hasTextLayerContent() const { return this->textLayerContent_ != nullptr;};
        void deleteTextLayerContent() { this->textLayerContent_ = nullptr;};
        inline const Component::TextLayerContent & getTextLayerContent() const { DARABONBA_PTR_GET_CONST(textLayerContent_, Component::TextLayerContent) };
        inline Component::TextLayerContent getTextLayerContent() { DARABONBA_PTR_GET(textLayerContent_, Component::TextLayerContent) };
        inline Component& setTextLayerContent(const Component::TextLayerContent & textLayerContent) { DARABONBA_PTR_SET_VALUE(textLayerContent_, textLayerContent) };
        inline Component& setTextLayerContent(Component::TextLayerContent && textLayerContent) { DARABONBA_PTR_SET_RVALUE(textLayerContent_, textLayerContent) };


      protected:
        shared_ptr<Component::CaptionLayerContent> captionLayerContent_ {};
        shared_ptr<string> componentId_ {};
        shared_ptr<Component::ComponentLayer> componentLayer_ {};
        shared_ptr<string> componentName_ {};
        shared_ptr<string> componentType_ {};
        shared_ptr<string> effect_ {};
        shared_ptr<Component::ImageLayerContent> imageLayerContent_ {};
        shared_ptr<string> locationId_ {};
        shared_ptr<Component::TextLayerContent> textLayerContent_ {};
      };

      virtual bool empty() const override { return this->component_ == nullptr; };
      // component Field Functions 
      bool hasComponent() const { return this->component_ != nullptr;};
      void deleteComponent() { this->component_ = nullptr;};
      inline const vector<Components::Component> & getComponent() const { DARABONBA_PTR_GET_CONST(component_, vector<Components::Component>) };
      inline vector<Components::Component> getComponent() { DARABONBA_PTR_GET(component_, vector<Components::Component>) };
      inline Components& setComponent(const vector<Components::Component> & component) { DARABONBA_PTR_SET_VALUE(component_, component) };
      inline Components& setComponent(vector<Components::Component> && component) { DARABONBA_PTR_SET_RVALUE(component_, component) };


    protected:
      shared_ptr<vector<Components::Component>> component_ {};
    };

    virtual bool empty() const override { return this->components_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const DescribeCasterComponentsResponseBody::Components & getComponents() const { DARABONBA_PTR_GET_CONST(components_, DescribeCasterComponentsResponseBody::Components) };
    inline DescribeCasterComponentsResponseBody::Components getComponents() { DARABONBA_PTR_GET(components_, DescribeCasterComponentsResponseBody::Components) };
    inline DescribeCasterComponentsResponseBody& setComponents(const DescribeCasterComponentsResponseBody::Components & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeCasterComponentsResponseBody& setComponents(DescribeCasterComponentsResponseBody::Components && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterComponentsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<DescribeCasterComponentsResponseBody::Components> components_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
