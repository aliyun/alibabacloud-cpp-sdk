// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEMOSAICREQUESTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEMOSAICREQUESTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddImageMosaicRequestTargetsBoundary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AddImageMosaicRequestTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageMosaicRequestTargets& obj) { 
      DARABONBA_PTR_TO_JSON(BlurRadius, blurRadius_);
      DARABONBA_PTR_TO_JSON(Boundary, boundary_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(MosaicRadius, mosaicRadius_);
      DARABONBA_PTR_TO_JSON(Sigma, sigma_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageMosaicRequestTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(BlurRadius, blurRadius_);
      DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(MosaicRadius, mosaicRadius_);
      DARABONBA_PTR_FROM_JSON(Sigma, sigma_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddImageMosaicRequestTargets() = default ;
    AddImageMosaicRequestTargets(const AddImageMosaicRequestTargets &) = default ;
    AddImageMosaicRequestTargets(AddImageMosaicRequestTargets &&) = default ;
    AddImageMosaicRequestTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageMosaicRequestTargets() = default ;
    AddImageMosaicRequestTargets& operator=(const AddImageMosaicRequestTargets &) = default ;
    AddImageMosaicRequestTargets& operator=(AddImageMosaicRequestTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blurRadius_ != nullptr
        && this->boundary_ != nullptr && this->color_ != nullptr && this->mosaicRadius_ != nullptr && this->sigma_ != nullptr && this->type_ != nullptr; };
    // blurRadius Field Functions 
    bool hasBlurRadius() const { return this->blurRadius_ != nullptr;};
    void deleteBlurRadius() { this->blurRadius_ = nullptr;};
    inline int32_t blurRadius() const { DARABONBA_PTR_GET_DEFAULT(blurRadius_, 0) };
    inline AddImageMosaicRequestTargets& setBlurRadius(int32_t blurRadius) { DARABONBA_PTR_SET_VALUE(blurRadius_, blurRadius) };


    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Models::AddImageMosaicRequestTargetsBoundary & boundary() const { DARABONBA_PTR_GET_CONST(boundary_, Models::AddImageMosaicRequestTargetsBoundary) };
    inline Models::AddImageMosaicRequestTargetsBoundary boundary() { DARABONBA_PTR_GET(boundary_, Models::AddImageMosaicRequestTargetsBoundary) };
    inline AddImageMosaicRequestTargets& setBoundary(const Models::AddImageMosaicRequestTargetsBoundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline AddImageMosaicRequestTargets& setBoundary(Models::AddImageMosaicRequestTargetsBoundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline AddImageMosaicRequestTargets& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // mosaicRadius Field Functions 
    bool hasMosaicRadius() const { return this->mosaicRadius_ != nullptr;};
    void deleteMosaicRadius() { this->mosaicRadius_ = nullptr;};
    inline int32_t mosaicRadius() const { DARABONBA_PTR_GET_DEFAULT(mosaicRadius_, 0) };
    inline AddImageMosaicRequestTargets& setMosaicRadius(int32_t mosaicRadius) { DARABONBA_PTR_SET_VALUE(mosaicRadius_, mosaicRadius) };


    // sigma Field Functions 
    bool hasSigma() const { return this->sigma_ != nullptr;};
    void deleteSigma() { this->sigma_ = nullptr;};
    inline int32_t sigma() const { DARABONBA_PTR_GET_DEFAULT(sigma_, 0) };
    inline AddImageMosaicRequestTargets& setSigma(int32_t sigma) { DARABONBA_PTR_SET_VALUE(sigma_, sigma) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddImageMosaicRequestTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The radius of the Gaussian blur. Valid values: 1 to 50. Default value: 3. Unit: pixels.
    // 
    // >  This parameter takes effect only for a Gaussian blur.
    std::shared_ptr<int32_t> blurRadius_ = nullptr;
    // The position of the bounding box.
    // 
    // This parameter is required.
    std::shared_ptr<Models::AddImageMosaicRequestTargetsBoundary> boundary_ = nullptr;
    // The color of the color shape. You can specify a color by using a color code such as`#RRGGBB` or preset color names such as `red` and `white`. The default value is #FFFFFF, which is white.
    // 
    // >  This parameter takes effect only for solid color shapes.
    std::shared_ptr<string> color_ = nullptr;
    // The radius of the mosaic. Default value: 5. Unit: pixels.
    // 
    // >  This parameter does not take effect for Gaussian blurs and solid color shapes.
    std::shared_ptr<int32_t> mosaicRadius_ = nullptr;
    // The standard deviation of the Gaussian blur. The value must be greater than 0. Default value: 5.
    // 
    // >  This parameter takes effect only for a Gaussian blur.
    std::shared_ptr<int32_t> sigma_ = nullptr;
    // The type of the mosaic effect. Valid values:
    // 
    // *   square: squares.
    // *   diamond: diamonds.
    // *   hexagon: hexagons.
    // *   blur: Gaussian blurs.
    // *   pure: solid color shapes.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
