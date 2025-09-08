// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTPUBLICFIGURE_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTPUBLICFIGURE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtPublicFigureLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtPublicFigure : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtPublicFigure& obj) { 
      DARABONBA_PTR_TO_JSON(FigureId, figureId_);
      DARABONBA_PTR_TO_JSON(FigureName, figureName_);
      DARABONBA_PTR_TO_JSON(Location, location_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtPublicFigure& obj) { 
      DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
      DARABONBA_PTR_FROM_JSON(FigureName, figureName_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
    };
    ImageModerationResponseBodyDataExtPublicFigure() = default ;
    ImageModerationResponseBodyDataExtPublicFigure(const ImageModerationResponseBodyDataExtPublicFigure &) = default ;
    ImageModerationResponseBodyDataExtPublicFigure(ImageModerationResponseBodyDataExtPublicFigure &&) = default ;
    ImageModerationResponseBodyDataExtPublicFigure(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtPublicFigure() = default ;
    ImageModerationResponseBodyDataExtPublicFigure& operator=(const ImageModerationResponseBodyDataExtPublicFigure &) = default ;
    ImageModerationResponseBodyDataExtPublicFigure& operator=(ImageModerationResponseBodyDataExtPublicFigure &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->figureId_ != nullptr
        && this->figureName_ != nullptr && this->location_ != nullptr; };
    // figureId Field Functions 
    bool hasFigureId() const { return this->figureId_ != nullptr;};
    void deleteFigureId() { this->figureId_ = nullptr;};
    inline string figureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
    inline ImageModerationResponseBodyDataExtPublicFigure& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


    // figureName Field Functions 
    bool hasFigureName() const { return this->figureName_ != nullptr;};
    void deleteFigureName() { this->figureName_ = nullptr;};
    inline string figureName() const { DARABONBA_PTR_GET_DEFAULT(figureName_, "") };
    inline ImageModerationResponseBodyDataExtPublicFigure& setFigureName(string figureName) { DARABONBA_PTR_SET_VALUE(figureName_, figureName) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtPublicFigureLocation> & location() const { DARABONBA_PTR_GET_CONST(location_, vector<Models::ImageModerationResponseBodyDataExtPublicFigureLocation>) };
    inline vector<Models::ImageModerationResponseBodyDataExtPublicFigureLocation> location() { DARABONBA_PTR_GET(location_, vector<Models::ImageModerationResponseBodyDataExtPublicFigureLocation>) };
    inline ImageModerationResponseBodyDataExtPublicFigure& setLocation(const vector<Models::ImageModerationResponseBodyDataExtPublicFigureLocation> & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageModerationResponseBodyDataExtPublicFigure& setLocation(vector<Models::ImageModerationResponseBodyDataExtPublicFigureLocation> && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


  protected:
    // Identified person coding information.
    std::shared_ptr<string> figureId_ = nullptr;
    // Identified person name information.
    std::shared_ptr<string> figureName_ = nullptr;
    // the data array of location info
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtPublicFigureLocation>> location_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
