// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHRESPONSEBODYRESULTCOVER_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHRESPONSEBODYRESULTCOVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchResponseBodyResultCover : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchResponseBodyResultCover& obj) { 
      DARABONBA_PTR_TO_JSON(Img, img_);
      DARABONBA_PTR_TO_JSON(Large, large_);
      DARABONBA_PTR_TO_JSON(Medium, medium_);
      DARABONBA_PTR_TO_JSON(Small, small_);
      DARABONBA_PTR_TO_JSON(canResize, canResize_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchResponseBodyResultCover& obj) { 
      DARABONBA_PTR_FROM_JSON(Img, img_);
      DARABONBA_PTR_FROM_JSON(Large, large_);
      DARABONBA_PTR_FROM_JSON(Medium, medium_);
      DARABONBA_PTR_FROM_JSON(Small, small_);
      DARABONBA_PTR_FROM_JSON(canResize, canResize_);
    };
    ScgSearchResponseBodyResultCover() = default ;
    ScgSearchResponseBodyResultCover(const ScgSearchResponseBodyResultCover &) = default ;
    ScgSearchResponseBodyResultCover(ScgSearchResponseBodyResultCover &&) = default ;
    ScgSearchResponseBodyResultCover(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchResponseBodyResultCover() = default ;
    ScgSearchResponseBodyResultCover& operator=(const ScgSearchResponseBodyResultCover &) = default ;
    ScgSearchResponseBodyResultCover& operator=(ScgSearchResponseBodyResultCover &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->img_ != nullptr
        && this->large_ != nullptr && this->medium_ != nullptr && this->small_ != nullptr && this->canResize_ != nullptr; };
    // img Field Functions 
    bool hasImg() const { return this->img_ != nullptr;};
    void deleteImg() { this->img_ = nullptr;};
    inline string img() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
    inline ScgSearchResponseBodyResultCover& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


    // large Field Functions 
    bool hasLarge() const { return this->large_ != nullptr;};
    void deleteLarge() { this->large_ = nullptr;};
    inline string large() const { DARABONBA_PTR_GET_DEFAULT(large_, "") };
    inline ScgSearchResponseBodyResultCover& setLarge(string large) { DARABONBA_PTR_SET_VALUE(large_, large) };


    // medium Field Functions 
    bool hasMedium() const { return this->medium_ != nullptr;};
    void deleteMedium() { this->medium_ = nullptr;};
    inline string medium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
    inline ScgSearchResponseBodyResultCover& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


    // small Field Functions 
    bool hasSmall() const { return this->small_ != nullptr;};
    void deleteSmall() { this->small_ = nullptr;};
    inline string small() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
    inline ScgSearchResponseBodyResultCover& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


    // canResize Field Functions 
    bool hasCanResize() const { return this->canResize_ != nullptr;};
    void deleteCanResize() { this->canResize_ = nullptr;};
    inline bool canResize() const { DARABONBA_PTR_GET_DEFAULT(canResize_, false) };
    inline ScgSearchResponseBodyResultCover& setCanResize(bool canResize) { DARABONBA_PTR_SET_VALUE(canResize_, canResize) };


  protected:
    std::shared_ptr<string> img_ = nullptr;
    std::shared_ptr<string> large_ = nullptr;
    std::shared_ptr<string> medium_ = nullptr;
    std::shared_ptr<string> small_ = nullptr;
    std::shared_ptr<bool> canResize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
