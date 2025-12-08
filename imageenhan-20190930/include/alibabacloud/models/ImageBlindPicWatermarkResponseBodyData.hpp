// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBLINDPICWATERMARKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBLINDPICWATERMARKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ImageBlindPicWatermarkResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBlindPicWatermarkResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LogoURL, logoURL_);
      DARABONBA_PTR_TO_JSON(WatermarkImageURL, watermarkImageURL_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBlindPicWatermarkResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LogoURL, logoURL_);
      DARABONBA_PTR_FROM_JSON(WatermarkImageURL, watermarkImageURL_);
    };
    ImageBlindPicWatermarkResponseBodyData() = default ;
    ImageBlindPicWatermarkResponseBodyData(const ImageBlindPicWatermarkResponseBodyData &) = default ;
    ImageBlindPicWatermarkResponseBodyData(ImageBlindPicWatermarkResponseBodyData &&) = default ;
    ImageBlindPicWatermarkResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBlindPicWatermarkResponseBodyData() = default ;
    ImageBlindPicWatermarkResponseBodyData& operator=(const ImageBlindPicWatermarkResponseBodyData &) = default ;
    ImageBlindPicWatermarkResponseBodyData& operator=(ImageBlindPicWatermarkResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logoURL_ == nullptr
        && return this->watermarkImageURL_ == nullptr; };
    // logoURL Field Functions 
    bool hasLogoURL() const { return this->logoURL_ != nullptr;};
    void deleteLogoURL() { this->logoURL_ = nullptr;};
    inline string logoURL() const { DARABONBA_PTR_GET_DEFAULT(logoURL_, "") };
    inline ImageBlindPicWatermarkResponseBodyData& setLogoURL(string logoURL) { DARABONBA_PTR_SET_VALUE(logoURL_, logoURL) };


    // watermarkImageURL Field Functions 
    bool hasWatermarkImageURL() const { return this->watermarkImageURL_ != nullptr;};
    void deleteWatermarkImageURL() { this->watermarkImageURL_ = nullptr;};
    inline string watermarkImageURL() const { DARABONBA_PTR_GET_DEFAULT(watermarkImageURL_, "") };
    inline ImageBlindPicWatermarkResponseBodyData& setWatermarkImageURL(string watermarkImageURL) { DARABONBA_PTR_SET_VALUE(watermarkImageURL_, watermarkImageURL) };


  protected:
    std::shared_ptr<string> logoURL_ = nullptr;
    std::shared_ptr<string> watermarkImageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
