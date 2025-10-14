// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREALISTICPORTRAITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREALISTICPORTRAITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateRealisticPortraitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRealisticPortraitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ages, ages_);
      DARABONBA_PTR_TO_JSON(cloth, cloth_);
      DARABONBA_PTR_TO_JSON(color, color_);
      DARABONBA_PTR_TO_JSON(custom, custom_);
      DARABONBA_PTR_TO_JSON(face, face_);
      DARABONBA_PTR_TO_JSON(figure, figure_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(hairColor, hairColor_);
      DARABONBA_PTR_TO_JSON(hairstyle, hairstyle_);
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(numbers, numbers_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRealisticPortraitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ages, ages_);
      DARABONBA_PTR_FROM_JSON(cloth, cloth_);
      DARABONBA_PTR_FROM_JSON(color, color_);
      DARABONBA_PTR_FROM_JSON(custom, custom_);
      DARABONBA_PTR_FROM_JSON(face, face_);
      DARABONBA_PTR_FROM_JSON(figure, figure_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(hairColor, hairColor_);
      DARABONBA_PTR_FROM_JSON(hairstyle, hairstyle_);
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(numbers, numbers_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    CreateRealisticPortraitRequest() = default ;
    CreateRealisticPortraitRequest(const CreateRealisticPortraitRequest &) = default ;
    CreateRealisticPortraitRequest(CreateRealisticPortraitRequest &&) = default ;
    CreateRealisticPortraitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRealisticPortraitRequest() = default ;
    CreateRealisticPortraitRequest& operator=(const CreateRealisticPortraitRequest &) = default ;
    CreateRealisticPortraitRequest& operator=(CreateRealisticPortraitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ages_ == nullptr
        && return this->cloth_ == nullptr && return this->color_ == nullptr && return this->custom_ == nullptr && return this->face_ == nullptr && return this->figure_ == nullptr
        && return this->gender_ == nullptr && return this->hairColor_ == nullptr && return this->hairstyle_ == nullptr && return this->height_ == nullptr && return this->imageUrl_ == nullptr
        && return this->numbers_ == nullptr && return this->ratio_ == nullptr && return this->width_ == nullptr; };
    // ages Field Functions 
    bool hasAges() const { return this->ages_ != nullptr;};
    void deleteAges() { this->ages_ = nullptr;};
    inline const vector<int32_t> & ages() const { DARABONBA_PTR_GET_CONST(ages_, vector<int32_t>) };
    inline vector<int32_t> ages() { DARABONBA_PTR_GET(ages_, vector<int32_t>) };
    inline CreateRealisticPortraitRequest& setAges(const vector<int32_t> & ages) { DARABONBA_PTR_SET_VALUE(ages_, ages) };
    inline CreateRealisticPortraitRequest& setAges(vector<int32_t> && ages) { DARABONBA_PTR_SET_RVALUE(ages_, ages) };


    // cloth Field Functions 
    bool hasCloth() const { return this->cloth_ != nullptr;};
    void deleteCloth() { this->cloth_ = nullptr;};
    inline int32_t cloth() const { DARABONBA_PTR_GET_DEFAULT(cloth_, 0) };
    inline CreateRealisticPortraitRequest& setCloth(int32_t cloth) { DARABONBA_PTR_SET_VALUE(cloth_, cloth) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline int32_t color() const { DARABONBA_PTR_GET_DEFAULT(color_, 0) };
    inline CreateRealisticPortraitRequest& setColor(int32_t color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // custom Field Functions 
    bool hasCustom() const { return this->custom_ != nullptr;};
    void deleteCustom() { this->custom_ = nullptr;};
    inline string custom() const { DARABONBA_PTR_GET_DEFAULT(custom_, "") };
    inline CreateRealisticPortraitRequest& setCustom(string custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


    // face Field Functions 
    bool hasFace() const { return this->face_ != nullptr;};
    void deleteFace() { this->face_ = nullptr;};
    inline const vector<int32_t> & face() const { DARABONBA_PTR_GET_CONST(face_, vector<int32_t>) };
    inline vector<int32_t> face() { DARABONBA_PTR_GET(face_, vector<int32_t>) };
    inline CreateRealisticPortraitRequest& setFace(const vector<int32_t> & face) { DARABONBA_PTR_SET_VALUE(face_, face) };
    inline CreateRealisticPortraitRequest& setFace(vector<int32_t> && face) { DARABONBA_PTR_SET_RVALUE(face_, face) };


    // figure Field Functions 
    bool hasFigure() const { return this->figure_ != nullptr;};
    void deleteFigure() { this->figure_ = nullptr;};
    inline int32_t figure() const { DARABONBA_PTR_GET_DEFAULT(figure_, 0) };
    inline CreateRealisticPortraitRequest& setFigure(int32_t figure) { DARABONBA_PTR_SET_VALUE(figure_, figure) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline int32_t gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
    inline CreateRealisticPortraitRequest& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // hairColor Field Functions 
    bool hasHairColor() const { return this->hairColor_ != nullptr;};
    void deleteHairColor() { this->hairColor_ = nullptr;};
    inline int32_t hairColor() const { DARABONBA_PTR_GET_DEFAULT(hairColor_, 0) };
    inline CreateRealisticPortraitRequest& setHairColor(int32_t hairColor) { DARABONBA_PTR_SET_VALUE(hairColor_, hairColor) };


    // hairstyle Field Functions 
    bool hasHairstyle() const { return this->hairstyle_ != nullptr;};
    void deleteHairstyle() { this->hairstyle_ = nullptr;};
    inline int32_t hairstyle() const { DARABONBA_PTR_GET_DEFAULT(hairstyle_, 0) };
    inline CreateRealisticPortraitRequest& setHairstyle(int32_t hairstyle) { DARABONBA_PTR_SET_VALUE(hairstyle_, hairstyle) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline CreateRealisticPortraitRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateRealisticPortraitRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // numbers Field Functions 
    bool hasNumbers() const { return this->numbers_ != nullptr;};
    void deleteNumbers() { this->numbers_ = nullptr;};
    inline int32_t numbers() const { DARABONBA_PTR_GET_DEFAULT(numbers_, 0) };
    inline CreateRealisticPortraitRequest& setNumbers(int32_t numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline CreateRealisticPortraitRequest& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline CreateRealisticPortraitRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<vector<int32_t>> ages_ = nullptr;
    std::shared_ptr<int32_t> cloth_ = nullptr;
    std::shared_ptr<int32_t> color_ = nullptr;
    std::shared_ptr<string> custom_ = nullptr;
    std::shared_ptr<vector<int32_t>> face_ = nullptr;
    std::shared_ptr<int32_t> figure_ = nullptr;
    std::shared_ptr<int32_t> gender_ = nullptr;
    std::shared_ptr<int32_t> hairColor_ = nullptr;
    std::shared_ptr<int32_t> hairstyle_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<int32_t> numbers_ = nullptr;
    std::shared_ptr<string> ratio_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
