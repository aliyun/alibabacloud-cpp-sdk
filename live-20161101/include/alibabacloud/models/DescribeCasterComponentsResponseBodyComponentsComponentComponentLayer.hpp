// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTCOMPONENTLAYER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTCOMPONENTLAYER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& obj) { 
      DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_TO_JSON(PositionNormalizeds, positionNormalizeds_);
      DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_TO_JSON(Transparency, transparency_);
      DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionNormalizeds, positionNormalizeds_);
      DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_FROM_JSON(Transparency, transparency_);
      DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
    };
    DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer(const DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer(DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer &&) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& operator=(const DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& operator=(DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->heightNormalized_ == nullptr
        && return this->positionNormalizeds_ == nullptr && return this->positionRefer_ == nullptr && return this->transparency_ == nullptr && return this->widthNormalized_ == nullptr; };
    // heightNormalized Field Functions 
    bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
    void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
    inline float heightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


    // positionNormalizeds Field Functions 
    bool hasPositionNormalizeds() const { return this->positionNormalizeds_ != nullptr;};
    void deletePositionNormalizeds() { this->positionNormalizeds_ = nullptr;};
    inline const Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds & positionNormalizeds() const { DARABONBA_PTR_GET_CONST(positionNormalizeds_, Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds) };
    inline Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds positionNormalizeds() { DARABONBA_PTR_GET(positionNormalizeds_, Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& setPositionNormalizeds(const Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds & positionNormalizeds) { DARABONBA_PTR_SET_VALUE(positionNormalizeds_, positionNormalizeds) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& setPositionNormalizeds(Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds && positionNormalizeds) { DARABONBA_PTR_SET_RVALUE(positionNormalizeds_, positionNormalizeds) };


    // positionRefer Field Functions 
    bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
    void deletePositionRefer() { this->positionRefer_ = nullptr;};
    inline string positionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


    // transparency Field Functions 
    bool hasTransparency() const { return this->transparency_ != nullptr;};
    void deleteTransparency() { this->transparency_ = nullptr;};
    inline int32_t transparency() const { DARABONBA_PTR_GET_DEFAULT(transparency_, 0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& setTransparency(int32_t transparency) { DARABONBA_PTR_SET_VALUE(transparency_, transparency) };


    // widthNormalized Field Functions 
    bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
    void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
    inline float widthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentComponentLayer& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


  protected:
    // The normalized value for heights of the elements in the layer. The widths of the elements are proportionally scaled based on this parameter.
    // 
    // If the value of this parameter is **0**, the elements in the layer are not scaled.
    std::shared_ptr<float> heightNormalized_ = nullptr;
    // The normalized value of the position of the layer, in the format of `[x,y]`. Example: `[0,0]`.
    // 
    // >  The values of x and y need to be normalized.
    std::shared_ptr<Models::DescribeCasterComponentsResponseBodyComponentsComponentComponentLayerPositionNormalizeds> positionNormalizeds_ = nullptr;
    // The reference coordinates of the layer. Valid values:
    // 
    // *   **topLeft**: the upper-left corner
    // *   **topRight**: the upper-right corner
    // *   **bottomLeft**: the lower-left corner
    // *   **bottomRight**: the lower-right corner
    std::shared_ptr<string> positionRefer_ = nullptr;
    // The transparency of the layer. Valid values: 0 to 255.
    // 
    // A value of **0** indicates that the layer is completely transparent. A value of **255** indicates that the layer is completely opaque.
    std::shared_ptr<int32_t> transparency_ = nullptr;
    // The normalized value for widths of the elements in the layer. The heights of the elements are proportionally scaled based on this parameter. If the value of this parameter is **0**, the elements in the layer are not scaled.
    // 
    // >  This parameter conflicts with the HeightNormalized parameter. If both of them are specified, only the HeightNormalized parameter takes effect. If only one of them is specified, the latest specified value is used.
    std::shared_ptr<float> widthNormalized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
