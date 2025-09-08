// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTFACEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataBang.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataGender.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataHairstyle.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataHat.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataLocation.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataMask.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataMustache.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceDataQuality.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtFaceData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtFaceData& obj) { 
      DARABONBA_PTR_TO_JSON(Age, age_);
      DARABONBA_PTR_TO_JSON(Bang, bang_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Glasses, glasses_);
      DARABONBA_PTR_TO_JSON(Hairstyle, hairstyle_);
      DARABONBA_PTR_TO_JSON(Hat, hat_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(Mustache, mustache_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(Smile, smile_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtFaceData& obj) { 
      DARABONBA_PTR_FROM_JSON(Age, age_);
      DARABONBA_PTR_FROM_JSON(Bang, bang_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Glasses, glasses_);
      DARABONBA_PTR_FROM_JSON(Hairstyle, hairstyle_);
      DARABONBA_PTR_FROM_JSON(Hat, hat_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(Mustache, mustache_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(Smile, smile_);
    };
    ImageModerationResponseBodyDataExtFaceData() = default ;
    ImageModerationResponseBodyDataExtFaceData(const ImageModerationResponseBodyDataExtFaceData &) = default ;
    ImageModerationResponseBodyDataExtFaceData(ImageModerationResponseBodyDataExtFaceData &&) = default ;
    ImageModerationResponseBodyDataExtFaceData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtFaceData() = default ;
    ImageModerationResponseBodyDataExtFaceData& operator=(const ImageModerationResponseBodyDataExtFaceData &) = default ;
    ImageModerationResponseBodyDataExtFaceData& operator=(ImageModerationResponseBodyDataExtFaceData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->age_ != nullptr
        && this->bang_ != nullptr && this->gender_ != nullptr && this->glasses_ != nullptr && this->hairstyle_ != nullptr && this->hat_ != nullptr
        && this->location_ != nullptr && this->mask_ != nullptr && this->mustache_ != nullptr && this->quality_ != nullptr && this->smile_ != nullptr; };
    // age Field Functions 
    bool hasAge() const { return this->age_ != nullptr;};
    void deleteAge() { this->age_ = nullptr;};
    inline int32_t age() const { DARABONBA_PTR_GET_DEFAULT(age_, 0) };
    inline ImageModerationResponseBodyDataExtFaceData& setAge(int32_t age) { DARABONBA_PTR_SET_VALUE(age_, age) };


    // bang Field Functions 
    bool hasBang() const { return this->bang_ != nullptr;};
    void deleteBang() { this->bang_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataBang & bang() const { DARABONBA_PTR_GET_CONST(bang_, Models::ImageModerationResponseBodyDataExtFaceDataBang) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataBang bang() { DARABONBA_PTR_GET(bang_, Models::ImageModerationResponseBodyDataExtFaceDataBang) };
    inline ImageModerationResponseBodyDataExtFaceData& setBang(const Models::ImageModerationResponseBodyDataExtFaceDataBang & bang) { DARABONBA_PTR_SET_VALUE(bang_, bang) };
    inline ImageModerationResponseBodyDataExtFaceData& setBang(Models::ImageModerationResponseBodyDataExtFaceDataBang && bang) { DARABONBA_PTR_SET_RVALUE(bang_, bang) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataGender & gender() const { DARABONBA_PTR_GET_CONST(gender_, Models::ImageModerationResponseBodyDataExtFaceDataGender) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataGender gender() { DARABONBA_PTR_GET(gender_, Models::ImageModerationResponseBodyDataExtFaceDataGender) };
    inline ImageModerationResponseBodyDataExtFaceData& setGender(const Models::ImageModerationResponseBodyDataExtFaceDataGender & gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };
    inline ImageModerationResponseBodyDataExtFaceData& setGender(Models::ImageModerationResponseBodyDataExtFaceDataGender && gender) { DARABONBA_PTR_SET_RVALUE(gender_, gender) };


    // glasses Field Functions 
    bool hasGlasses() const { return this->glasses_ != nullptr;};
    void deleteGlasses() { this->glasses_ = nullptr;};
    inline string glasses() const { DARABONBA_PTR_GET_DEFAULT(glasses_, "") };
    inline ImageModerationResponseBodyDataExtFaceData& setGlasses(string glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };


    // hairstyle Field Functions 
    bool hasHairstyle() const { return this->hairstyle_ != nullptr;};
    void deleteHairstyle() { this->hairstyle_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataHairstyle & hairstyle() const { DARABONBA_PTR_GET_CONST(hairstyle_, Models::ImageModerationResponseBodyDataExtFaceDataHairstyle) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataHairstyle hairstyle() { DARABONBA_PTR_GET(hairstyle_, Models::ImageModerationResponseBodyDataExtFaceDataHairstyle) };
    inline ImageModerationResponseBodyDataExtFaceData& setHairstyle(const Models::ImageModerationResponseBodyDataExtFaceDataHairstyle & hairstyle) { DARABONBA_PTR_SET_VALUE(hairstyle_, hairstyle) };
    inline ImageModerationResponseBodyDataExtFaceData& setHairstyle(Models::ImageModerationResponseBodyDataExtFaceDataHairstyle && hairstyle) { DARABONBA_PTR_SET_RVALUE(hairstyle_, hairstyle) };


    // hat Field Functions 
    bool hasHat() const { return this->hat_ != nullptr;};
    void deleteHat() { this->hat_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataHat & hat() const { DARABONBA_PTR_GET_CONST(hat_, Models::ImageModerationResponseBodyDataExtFaceDataHat) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataHat hat() { DARABONBA_PTR_GET(hat_, Models::ImageModerationResponseBodyDataExtFaceDataHat) };
    inline ImageModerationResponseBodyDataExtFaceData& setHat(const Models::ImageModerationResponseBodyDataExtFaceDataHat & hat) { DARABONBA_PTR_SET_VALUE(hat_, hat) };
    inline ImageModerationResponseBodyDataExtFaceData& setHat(Models::ImageModerationResponseBodyDataExtFaceDataHat && hat) { DARABONBA_PTR_SET_RVALUE(hat_, hat) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageModerationResponseBodyDataExtFaceDataLocation) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataLocation location() { DARABONBA_PTR_GET(location_, Models::ImageModerationResponseBodyDataExtFaceDataLocation) };
    inline ImageModerationResponseBodyDataExtFaceData& setLocation(const Models::ImageModerationResponseBodyDataExtFaceDataLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageModerationResponseBodyDataExtFaceData& setLocation(Models::ImageModerationResponseBodyDataExtFaceDataLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataMask & mask() const { DARABONBA_PTR_GET_CONST(mask_, Models::ImageModerationResponseBodyDataExtFaceDataMask) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataMask mask() { DARABONBA_PTR_GET(mask_, Models::ImageModerationResponseBodyDataExtFaceDataMask) };
    inline ImageModerationResponseBodyDataExtFaceData& setMask(const Models::ImageModerationResponseBodyDataExtFaceDataMask & mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };
    inline ImageModerationResponseBodyDataExtFaceData& setMask(Models::ImageModerationResponseBodyDataExtFaceDataMask && mask) { DARABONBA_PTR_SET_RVALUE(mask_, mask) };


    // mustache Field Functions 
    bool hasMustache() const { return this->mustache_ != nullptr;};
    void deleteMustache() { this->mustache_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataMustache & mustache() const { DARABONBA_PTR_GET_CONST(mustache_, Models::ImageModerationResponseBodyDataExtFaceDataMustache) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataMustache mustache() { DARABONBA_PTR_GET(mustache_, Models::ImageModerationResponseBodyDataExtFaceDataMustache) };
    inline ImageModerationResponseBodyDataExtFaceData& setMustache(const Models::ImageModerationResponseBodyDataExtFaceDataMustache & mustache) { DARABONBA_PTR_SET_VALUE(mustache_, mustache) };
    inline ImageModerationResponseBodyDataExtFaceData& setMustache(Models::ImageModerationResponseBodyDataExtFaceDataMustache && mustache) { DARABONBA_PTR_SET_RVALUE(mustache_, mustache) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtFaceDataQuality & quality() const { DARABONBA_PTR_GET_CONST(quality_, Models::ImageModerationResponseBodyDataExtFaceDataQuality) };
    inline Models::ImageModerationResponseBodyDataExtFaceDataQuality quality() { DARABONBA_PTR_GET(quality_, Models::ImageModerationResponseBodyDataExtFaceDataQuality) };
    inline ImageModerationResponseBodyDataExtFaceData& setQuality(const Models::ImageModerationResponseBodyDataExtFaceDataQuality & quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };
    inline ImageModerationResponseBodyDataExtFaceData& setQuality(Models::ImageModerationResponseBodyDataExtFaceDataQuality && quality) { DARABONBA_PTR_SET_RVALUE(quality_, quality) };


    // smile Field Functions 
    bool hasSmile() const { return this->smile_ != nullptr;};
    void deleteSmile() { this->smile_ = nullptr;};
    inline float smile() const { DARABONBA_PTR_GET_DEFAULT(smile_, 0.0) };
    inline ImageModerationResponseBodyDataExtFaceData& setSmile(float smile) { DARABONBA_PTR_SET_VALUE(smile_, smile) };


  protected:
    // The age recognition result.
    std::shared_ptr<int32_t> age_ = nullptr;
    // Indicates whether the recognition result of bangs is available.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataBang> bang_ = nullptr;
    // The gender recognition result.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataGender> gender_ = nullptr;
    // The recognition result of whether to wear glasses.
    // 
    // - None: No glasses.
    // 
    // - Wear: Wear glasses.
    // 
    // - Sunglass: Wear sunglasses.
    std::shared_ptr<string> glasses_ = nullptr;
    // The hairstyle recognition result.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataHairstyle> hairstyle_ = nullptr;
    // The recognition result of whether to wear a hat.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataHat> hat_ = nullptr;
    // The location of the face.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataLocation> location_ = nullptr;
    // The recognition result of whether to wear a mask.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataMask> mask_ = nullptr;
    // The identification result of whether there is a beard.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataMustache> mustache_ = nullptr;
    // The quality information of the face image.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtFaceDataQuality> quality_ = nullptr;
    // The smiling degree of the face.
    std::shared_ptr<float> smile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
