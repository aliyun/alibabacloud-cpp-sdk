// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTLOGODATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTLOGODATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation.hpp>
#include <vector>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResultsExtLogoData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResultsExtLogoData& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResultsExtLogoData& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
    };
    ImageBatchModerationResponseBodyDataResultsExtLogoData() = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoData(const ImageBatchModerationResponseBodyDataResultsExtLogoData &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoData(ImageBatchModerationResponseBodyDataResultsExtLogoData &&) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResultsExtLogoData() = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoData& operator=(const ImageBatchModerationResponseBodyDataResultsExtLogoData &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoData& operator=(ImageBatchModerationResponseBodyDataResultsExtLogoData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->location_ != nullptr
        && this->logo_ != nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation) };
    inline Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation location() { DARABONBA_PTR_GET(location_, Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoData& setLocation(const Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoData& setLocation(Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo> & logo() const { DARABONBA_PTR_GET_CONST(logo_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo> logo() { DARABONBA_PTR_GET(logo_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo>) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoData& setLogo(const vector<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoData& setLogo(vector<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


  protected:
    // The location information of the identifier.
    std::shared_ptr<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLocation> location_ = nullptr;
    // identification information
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo>> logo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
