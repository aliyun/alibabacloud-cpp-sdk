// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTLOGODATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTLOGODATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtLogoDataLocation.hpp>
#include <vector>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtLogoDataLogo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtLogoData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtLogoData& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtLogoData& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
    };
    ImageModerationResponseBodyDataExtLogoData() = default ;
    ImageModerationResponseBodyDataExtLogoData(const ImageModerationResponseBodyDataExtLogoData &) = default ;
    ImageModerationResponseBodyDataExtLogoData(ImageModerationResponseBodyDataExtLogoData &&) = default ;
    ImageModerationResponseBodyDataExtLogoData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtLogoData() = default ;
    ImageModerationResponseBodyDataExtLogoData& operator=(const ImageModerationResponseBodyDataExtLogoData &) = default ;
    ImageModerationResponseBodyDataExtLogoData& operator=(ImageModerationResponseBodyDataExtLogoData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->location_ == nullptr
        && return this->logo_ == nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtLogoDataLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageModerationResponseBodyDataExtLogoDataLocation) };
    inline Models::ImageModerationResponseBodyDataExtLogoDataLocation location() { DARABONBA_PTR_GET(location_, Models::ImageModerationResponseBodyDataExtLogoDataLocation) };
    inline ImageModerationResponseBodyDataExtLogoData& setLocation(const Models::ImageModerationResponseBodyDataExtLogoDataLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageModerationResponseBodyDataExtLogoData& setLocation(Models::ImageModerationResponseBodyDataExtLogoDataLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtLogoDataLogo> & logo() const { DARABONBA_PTR_GET_CONST(logo_, vector<Models::ImageModerationResponseBodyDataExtLogoDataLogo>) };
    inline vector<Models::ImageModerationResponseBodyDataExtLogoDataLogo> logo() { DARABONBA_PTR_GET(logo_, vector<Models::ImageModerationResponseBodyDataExtLogoDataLogo>) };
    inline ImageModerationResponseBodyDataExtLogoData& setLogo(const vector<Models::ImageModerationResponseBodyDataExtLogoDataLogo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
    inline ImageModerationResponseBodyDataExtLogoData& setLogo(vector<Models::ImageModerationResponseBodyDataExtLogoDataLogo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


  protected:
    // Location information.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtLogoDataLocation> location_ = nullptr;
    // Logo information.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtLogoDataLogo>> logo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
