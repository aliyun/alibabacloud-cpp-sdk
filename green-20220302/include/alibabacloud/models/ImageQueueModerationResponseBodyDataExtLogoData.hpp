// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTLOGODATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTLOGODATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtLogoDataLocation.hpp>
#include <vector>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtLogoDataLogo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtLogoData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtLogoData& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtLogoData& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
    };
    ImageQueueModerationResponseBodyDataExtLogoData() = default ;
    ImageQueueModerationResponseBodyDataExtLogoData(const ImageQueueModerationResponseBodyDataExtLogoData &) = default ;
    ImageQueueModerationResponseBodyDataExtLogoData(ImageQueueModerationResponseBodyDataExtLogoData &&) = default ;
    ImageQueueModerationResponseBodyDataExtLogoData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtLogoData() = default ;
    ImageQueueModerationResponseBodyDataExtLogoData& operator=(const ImageQueueModerationResponseBodyDataExtLogoData &) = default ;
    ImageQueueModerationResponseBodyDataExtLogoData& operator=(ImageQueueModerationResponseBodyDataExtLogoData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->location_ != nullptr
        && this->logo_ != nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtLogoDataLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageQueueModerationResponseBodyDataExtLogoDataLocation) };
    inline Models::ImageQueueModerationResponseBodyDataExtLogoDataLocation location() { DARABONBA_PTR_GET(location_, Models::ImageQueueModerationResponseBodyDataExtLogoDataLocation) };
    inline ImageQueueModerationResponseBodyDataExtLogoData& setLocation(const Models::ImageQueueModerationResponseBodyDataExtLogoDataLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageQueueModerationResponseBodyDataExtLogoData& setLocation(Models::ImageQueueModerationResponseBodyDataExtLogoDataLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtLogoDataLogo> & logo() const { DARABONBA_PTR_GET_CONST(logo_, vector<Models::ImageQueueModerationResponseBodyDataExtLogoDataLogo>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtLogoDataLogo> logo() { DARABONBA_PTR_GET(logo_, vector<Models::ImageQueueModerationResponseBodyDataExtLogoDataLogo>) };
    inline ImageQueueModerationResponseBodyDataExtLogoData& setLogo(const vector<Models::ImageQueueModerationResponseBodyDataExtLogoDataLogo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
    inline ImageQueueModerationResponseBodyDataExtLogoData& setLogo(vector<Models::ImageQueueModerationResponseBodyDataExtLogoDataLogo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


  protected:
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtLogoDataLocation> location_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtLogoDataLogo>> logo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
