// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizeFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Age, age_);
      DARABONBA_PTR_TO_JSON(Beauty, beauty_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Glass, glass_);
      DARABONBA_PTR_TO_JSON(Hat, hat_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(MaxFaceNumber, maxFaceNumber_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Age, age_);
      DARABONBA_PTR_FROM_JSON(Beauty, beauty_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Glass, glass_);
      DARABONBA_PTR_FROM_JSON(Hat, hat_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(MaxFaceNumber, maxFaceNumber_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
    };
    RecognizeFaceAdvanceRequest() = default ;
    RecognizeFaceAdvanceRequest(const RecognizeFaceAdvanceRequest &) = default ;
    RecognizeFaceAdvanceRequest(RecognizeFaceAdvanceRequest &&) = default ;
    RecognizeFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeFaceAdvanceRequest() = default ;
    RecognizeFaceAdvanceRequest& operator=(const RecognizeFaceAdvanceRequest &) = default ;
    RecognizeFaceAdvanceRequest& operator=(RecognizeFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->age_ == nullptr
        && return this->beauty_ == nullptr && return this->expression_ == nullptr && return this->gender_ == nullptr && return this->glass_ == nullptr && return this->hat_ == nullptr
        && return this->imageURLObject_ == nullptr && return this->mask_ == nullptr && return this->maxFaceNumber_ == nullptr && return this->quality_ == nullptr; };
    // age Field Functions 
    bool hasAge() const { return this->age_ != nullptr;};
    void deleteAge() { this->age_ = nullptr;};
    inline bool age() const { DARABONBA_PTR_GET_DEFAULT(age_, false) };
    inline RecognizeFaceAdvanceRequest& setAge(bool age) { DARABONBA_PTR_SET_VALUE(age_, age) };


    // beauty Field Functions 
    bool hasBeauty() const { return this->beauty_ != nullptr;};
    void deleteBeauty() { this->beauty_ = nullptr;};
    inline bool beauty() const { DARABONBA_PTR_GET_DEFAULT(beauty_, false) };
    inline RecognizeFaceAdvanceRequest& setBeauty(bool beauty) { DARABONBA_PTR_SET_VALUE(beauty_, beauty) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline bool expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, false) };
    inline RecognizeFaceAdvanceRequest& setExpression(bool expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline bool gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, false) };
    inline RecognizeFaceAdvanceRequest& setGender(bool gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // glass Field Functions 
    bool hasGlass() const { return this->glass_ != nullptr;};
    void deleteGlass() { this->glass_ = nullptr;};
    inline bool glass() const { DARABONBA_PTR_GET_DEFAULT(glass_, false) };
    inline RecognizeFaceAdvanceRequest& setGlass(bool glass) { DARABONBA_PTR_SET_VALUE(glass_, glass) };


    // hat Field Functions 
    bool hasHat() const { return this->hat_ != nullptr;};
    void deleteHat() { this->hat_ = nullptr;};
    inline bool hat() const { DARABONBA_PTR_GET_DEFAULT(hat_, false) };
    inline RecognizeFaceAdvanceRequest& setHat(bool hat) { DARABONBA_PTR_SET_VALUE(hat_, hat) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline RecognizeFaceAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline bool mask() const { DARABONBA_PTR_GET_DEFAULT(mask_, false) };
    inline RecognizeFaceAdvanceRequest& setMask(bool mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // maxFaceNumber Field Functions 
    bool hasMaxFaceNumber() const { return this->maxFaceNumber_ != nullptr;};
    void deleteMaxFaceNumber() { this->maxFaceNumber_ = nullptr;};
    inline int64_t maxFaceNumber() const { DARABONBA_PTR_GET_DEFAULT(maxFaceNumber_, 0L) };
    inline RecognizeFaceAdvanceRequest& setMaxFaceNumber(int64_t maxFaceNumber) { DARABONBA_PTR_SET_VALUE(maxFaceNumber_, maxFaceNumber) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline bool quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, false) };
    inline RecognizeFaceAdvanceRequest& setQuality(bool quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


  protected:
    std::shared_ptr<bool> age_ = nullptr;
    std::shared_ptr<bool> beauty_ = nullptr;
    std::shared_ptr<bool> expression_ = nullptr;
    std::shared_ptr<bool> gender_ = nullptr;
    std::shared_ptr<bool> glass_ = nullptr;
    std::shared_ptr<bool> hat_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<bool> mask_ = nullptr;
    std::shared_ptr<int64_t> maxFaceNumber_ = nullptr;
    std::shared_ptr<bool> quality_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
