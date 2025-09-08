// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTOCRRESULT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTOCRRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtOcrResultLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtOcrResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtOcrResult& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtOcrResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    ImageModerationResponseBodyDataExtOcrResult() = default ;
    ImageModerationResponseBodyDataExtOcrResult(const ImageModerationResponseBodyDataExtOcrResult &) = default ;
    ImageModerationResponseBodyDataExtOcrResult(ImageModerationResponseBodyDataExtOcrResult &&) = default ;
    ImageModerationResponseBodyDataExtOcrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtOcrResult() = default ;
    ImageModerationResponseBodyDataExtOcrResult& operator=(const ImageModerationResponseBodyDataExtOcrResult &) = default ;
    ImageModerationResponseBodyDataExtOcrResult& operator=(ImageModerationResponseBodyDataExtOcrResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->location_ != nullptr
        && this->text_ != nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtOcrResultLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageModerationResponseBodyDataExtOcrResultLocation) };
    inline Models::ImageModerationResponseBodyDataExtOcrResultLocation location() { DARABONBA_PTR_GET(location_, Models::ImageModerationResponseBodyDataExtOcrResultLocation) };
    inline ImageModerationResponseBodyDataExtOcrResult& setLocation(const Models::ImageModerationResponseBodyDataExtOcrResultLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageModerationResponseBodyDataExtOcrResult& setLocation(Models::ImageModerationResponseBodyDataExtOcrResultLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ImageModerationResponseBodyDataExtOcrResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // Location information.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtOcrResultLocation> location_ = nullptr;
    // The text information in the recognized image.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
