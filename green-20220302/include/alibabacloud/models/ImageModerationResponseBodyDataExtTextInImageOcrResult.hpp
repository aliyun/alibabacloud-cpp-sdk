// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGEOCRRESULT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGEOCRRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtTextInImageOcrResultLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtTextInImageOcrResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtTextInImageOcrResult& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtTextInImageOcrResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    ImageModerationResponseBodyDataExtTextInImageOcrResult() = default ;
    ImageModerationResponseBodyDataExtTextInImageOcrResult(const ImageModerationResponseBodyDataExtTextInImageOcrResult &) = default ;
    ImageModerationResponseBodyDataExtTextInImageOcrResult(ImageModerationResponseBodyDataExtTextInImageOcrResult &&) = default ;
    ImageModerationResponseBodyDataExtTextInImageOcrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtTextInImageOcrResult() = default ;
    ImageModerationResponseBodyDataExtTextInImageOcrResult& operator=(const ImageModerationResponseBodyDataExtTextInImageOcrResult &) = default ;
    ImageModerationResponseBodyDataExtTextInImageOcrResult& operator=(ImageModerationResponseBodyDataExtTextInImageOcrResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->location_ == nullptr
        && return this->text_ == nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtTextInImageOcrResultLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageModerationResponseBodyDataExtTextInImageOcrResultLocation) };
    inline Models::ImageModerationResponseBodyDataExtTextInImageOcrResultLocation location() { DARABONBA_PTR_GET(location_, Models::ImageModerationResponseBodyDataExtTextInImageOcrResultLocation) };
    inline ImageModerationResponseBodyDataExtTextInImageOcrResult& setLocation(const Models::ImageModerationResponseBodyDataExtTextInImageOcrResultLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageModerationResponseBodyDataExtTextInImageOcrResult& setLocation(Models::ImageModerationResponseBodyDataExtTextInImageOcrResultLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ImageModerationResponseBodyDataExtTextInImageOcrResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // Location information.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtTextInImageOcrResultLocation> location_ = nullptr;
    // The text information in the recognized image.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
