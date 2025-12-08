// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBLINDCHARACTERWATERMARKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBLINDCHARACTERWATERMARKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ImageBlindCharacterWatermarkResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBlindCharacterWatermarkResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TextImageURL, textImageURL_);
      DARABONBA_PTR_TO_JSON(WatermarkImageURL, watermarkImageURL_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBlindCharacterWatermarkResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TextImageURL, textImageURL_);
      DARABONBA_PTR_FROM_JSON(WatermarkImageURL, watermarkImageURL_);
    };
    ImageBlindCharacterWatermarkResponseBodyData() = default ;
    ImageBlindCharacterWatermarkResponseBodyData(const ImageBlindCharacterWatermarkResponseBodyData &) = default ;
    ImageBlindCharacterWatermarkResponseBodyData(ImageBlindCharacterWatermarkResponseBodyData &&) = default ;
    ImageBlindCharacterWatermarkResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBlindCharacterWatermarkResponseBodyData() = default ;
    ImageBlindCharacterWatermarkResponseBodyData& operator=(const ImageBlindCharacterWatermarkResponseBodyData &) = default ;
    ImageBlindCharacterWatermarkResponseBodyData& operator=(ImageBlindCharacterWatermarkResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->textImageURL_ == nullptr
        && return this->watermarkImageURL_ == nullptr; };
    // textImageURL Field Functions 
    bool hasTextImageURL() const { return this->textImageURL_ != nullptr;};
    void deleteTextImageURL() { this->textImageURL_ = nullptr;};
    inline string textImageURL() const { DARABONBA_PTR_GET_DEFAULT(textImageURL_, "") };
    inline ImageBlindCharacterWatermarkResponseBodyData& setTextImageURL(string textImageURL) { DARABONBA_PTR_SET_VALUE(textImageURL_, textImageURL) };


    // watermarkImageURL Field Functions 
    bool hasWatermarkImageURL() const { return this->watermarkImageURL_ != nullptr;};
    void deleteWatermarkImageURL() { this->watermarkImageURL_ = nullptr;};
    inline string watermarkImageURL() const { DARABONBA_PTR_GET_DEFAULT(watermarkImageURL_, "") };
    inline ImageBlindCharacterWatermarkResponseBodyData& setWatermarkImageURL(string watermarkImageURL) { DARABONBA_PTR_SET_VALUE(watermarkImageURL_, watermarkImageURL) };


  protected:
    std::shared_ptr<string> textImageURL_ = nullptr;
    std::shared_ptr<string> watermarkImageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
