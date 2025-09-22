// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTFACEDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTFACEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataBang.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataGender.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataHairstyle.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataHat.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataLocation.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataMask.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataMustache.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceDataQuality.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtFaceData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtFaceData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtFaceData& obj) { 
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
    ImageQueueModerationResponseBodyDataExtFaceData() = default ;
    ImageQueueModerationResponseBodyDataExtFaceData(const ImageQueueModerationResponseBodyDataExtFaceData &) = default ;
    ImageQueueModerationResponseBodyDataExtFaceData(ImageQueueModerationResponseBodyDataExtFaceData &&) = default ;
    ImageQueueModerationResponseBodyDataExtFaceData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtFaceData() = default ;
    ImageQueueModerationResponseBodyDataExtFaceData& operator=(const ImageQueueModerationResponseBodyDataExtFaceData &) = default ;
    ImageQueueModerationResponseBodyDataExtFaceData& operator=(ImageQueueModerationResponseBodyDataExtFaceData &&) = default ;
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
    inline ImageQueueModerationResponseBodyDataExtFaceData& setAge(int32_t age) { DARABONBA_PTR_SET_VALUE(age_, age) };


    // bang Field Functions 
    bool hasBang() const { return this->bang_ != nullptr;};
    void deleteBang() { this->bang_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataBang & bang() const { DARABONBA_PTR_GET_CONST(bang_, Models::ImageQueueModerationResponseBodyDataExtFaceDataBang) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataBang bang() { DARABONBA_PTR_GET(bang_, Models::ImageQueueModerationResponseBodyDataExtFaceDataBang) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setBang(const Models::ImageQueueModerationResponseBodyDataExtFaceDataBang & bang) { DARABONBA_PTR_SET_VALUE(bang_, bang) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setBang(Models::ImageQueueModerationResponseBodyDataExtFaceDataBang && bang) { DARABONBA_PTR_SET_RVALUE(bang_, bang) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataGender & gender() const { DARABONBA_PTR_GET_CONST(gender_, Models::ImageQueueModerationResponseBodyDataExtFaceDataGender) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataGender gender() { DARABONBA_PTR_GET(gender_, Models::ImageQueueModerationResponseBodyDataExtFaceDataGender) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setGender(const Models::ImageQueueModerationResponseBodyDataExtFaceDataGender & gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setGender(Models::ImageQueueModerationResponseBodyDataExtFaceDataGender && gender) { DARABONBA_PTR_SET_RVALUE(gender_, gender) };


    // glasses Field Functions 
    bool hasGlasses() const { return this->glasses_ != nullptr;};
    void deleteGlasses() { this->glasses_ = nullptr;};
    inline string glasses() const { DARABONBA_PTR_GET_DEFAULT(glasses_, "") };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setGlasses(string glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };


    // hairstyle Field Functions 
    bool hasHairstyle() const { return this->hairstyle_ != nullptr;};
    void deleteHairstyle() { this->hairstyle_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataHairstyle & hairstyle() const { DARABONBA_PTR_GET_CONST(hairstyle_, Models::ImageQueueModerationResponseBodyDataExtFaceDataHairstyle) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataHairstyle hairstyle() { DARABONBA_PTR_GET(hairstyle_, Models::ImageQueueModerationResponseBodyDataExtFaceDataHairstyle) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setHairstyle(const Models::ImageQueueModerationResponseBodyDataExtFaceDataHairstyle & hairstyle) { DARABONBA_PTR_SET_VALUE(hairstyle_, hairstyle) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setHairstyle(Models::ImageQueueModerationResponseBodyDataExtFaceDataHairstyle && hairstyle) { DARABONBA_PTR_SET_RVALUE(hairstyle_, hairstyle) };


    // hat Field Functions 
    bool hasHat() const { return this->hat_ != nullptr;};
    void deleteHat() { this->hat_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataHat & hat() const { DARABONBA_PTR_GET_CONST(hat_, Models::ImageQueueModerationResponseBodyDataExtFaceDataHat) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataHat hat() { DARABONBA_PTR_GET(hat_, Models::ImageQueueModerationResponseBodyDataExtFaceDataHat) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setHat(const Models::ImageQueueModerationResponseBodyDataExtFaceDataHat & hat) { DARABONBA_PTR_SET_VALUE(hat_, hat) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setHat(Models::ImageQueueModerationResponseBodyDataExtFaceDataHat && hat) { DARABONBA_PTR_SET_RVALUE(hat_, hat) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageQueueModerationResponseBodyDataExtFaceDataLocation) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataLocation location() { DARABONBA_PTR_GET(location_, Models::ImageQueueModerationResponseBodyDataExtFaceDataLocation) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setLocation(const Models::ImageQueueModerationResponseBodyDataExtFaceDataLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setLocation(Models::ImageQueueModerationResponseBodyDataExtFaceDataLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataMask & mask() const { DARABONBA_PTR_GET_CONST(mask_, Models::ImageQueueModerationResponseBodyDataExtFaceDataMask) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataMask mask() { DARABONBA_PTR_GET(mask_, Models::ImageQueueModerationResponseBodyDataExtFaceDataMask) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setMask(const Models::ImageQueueModerationResponseBodyDataExtFaceDataMask & mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setMask(Models::ImageQueueModerationResponseBodyDataExtFaceDataMask && mask) { DARABONBA_PTR_SET_RVALUE(mask_, mask) };


    // mustache Field Functions 
    bool hasMustache() const { return this->mustache_ != nullptr;};
    void deleteMustache() { this->mustache_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataMustache & mustache() const { DARABONBA_PTR_GET_CONST(mustache_, Models::ImageQueueModerationResponseBodyDataExtFaceDataMustache) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataMustache mustache() { DARABONBA_PTR_GET(mustache_, Models::ImageQueueModerationResponseBodyDataExtFaceDataMustache) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setMustache(const Models::ImageQueueModerationResponseBodyDataExtFaceDataMustache & mustache) { DARABONBA_PTR_SET_VALUE(mustache_, mustache) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setMustache(Models::ImageQueueModerationResponseBodyDataExtFaceDataMustache && mustache) { DARABONBA_PTR_SET_RVALUE(mustache_, mustache) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtFaceDataQuality & quality() const { DARABONBA_PTR_GET_CONST(quality_, Models::ImageQueueModerationResponseBodyDataExtFaceDataQuality) };
    inline Models::ImageQueueModerationResponseBodyDataExtFaceDataQuality quality() { DARABONBA_PTR_GET(quality_, Models::ImageQueueModerationResponseBodyDataExtFaceDataQuality) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setQuality(const Models::ImageQueueModerationResponseBodyDataExtFaceDataQuality & quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setQuality(Models::ImageQueueModerationResponseBodyDataExtFaceDataQuality && quality) { DARABONBA_PTR_SET_RVALUE(quality_, quality) };


    // smile Field Functions 
    bool hasSmile() const { return this->smile_ != nullptr;};
    void deleteSmile() { this->smile_ = nullptr;};
    inline float smile() const { DARABONBA_PTR_GET_DEFAULT(smile_, 0.0) };
    inline ImageQueueModerationResponseBodyDataExtFaceData& setSmile(float smile) { DARABONBA_PTR_SET_VALUE(smile_, smile) };


  protected:
    std::shared_ptr<int32_t> age_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataBang> bang_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataGender> gender_ = nullptr;
    std::shared_ptr<string> glasses_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataHairstyle> hairstyle_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataHat> hat_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataLocation> location_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataMask> mask_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataMustache> mustache_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtFaceDataQuality> quality_ = nullptr;
    std::shared_ptr<float> smile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
