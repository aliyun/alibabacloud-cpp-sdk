// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCURRENTPLAYINGLISTRESPONSEBODYRESULTCOVER_HPP_
#define ALIBABACLOUD_MODELS_GETCURRENTPLAYINGLISTRESPONSEBODYRESULTCOVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetCurrentPlayingListResponseBodyResultCover : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCurrentPlayingListResponseBodyResultCover& obj) { 
      DARABONBA_PTR_TO_JSON(CanResize, canResize_);
      DARABONBA_PTR_TO_JSON(Img, img_);
      DARABONBA_PTR_TO_JSON(Large, large_);
      DARABONBA_PTR_TO_JSON(Mediam, mediam_);
      DARABONBA_PTR_TO_JSON(Medium, medium_);
      DARABONBA_PTR_TO_JSON(Small, small_);
    };
    friend void from_json(const Darabonba::Json& j, GetCurrentPlayingListResponseBodyResultCover& obj) { 
      DARABONBA_PTR_FROM_JSON(CanResize, canResize_);
      DARABONBA_PTR_FROM_JSON(Img, img_);
      DARABONBA_PTR_FROM_JSON(Large, large_);
      DARABONBA_PTR_FROM_JSON(Mediam, mediam_);
      DARABONBA_PTR_FROM_JSON(Medium, medium_);
      DARABONBA_PTR_FROM_JSON(Small, small_);
    };
    GetCurrentPlayingListResponseBodyResultCover() = default ;
    GetCurrentPlayingListResponseBodyResultCover(const GetCurrentPlayingListResponseBodyResultCover &) = default ;
    GetCurrentPlayingListResponseBodyResultCover(GetCurrentPlayingListResponseBodyResultCover &&) = default ;
    GetCurrentPlayingListResponseBodyResultCover(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCurrentPlayingListResponseBodyResultCover() = default ;
    GetCurrentPlayingListResponseBodyResultCover& operator=(const GetCurrentPlayingListResponseBodyResultCover &) = default ;
    GetCurrentPlayingListResponseBodyResultCover& operator=(GetCurrentPlayingListResponseBodyResultCover &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canResize_ != nullptr
        && this->img_ != nullptr && this->large_ != nullptr && this->mediam_ != nullptr && this->medium_ != nullptr && this->small_ != nullptr; };
    // canResize Field Functions 
    bool hasCanResize() const { return this->canResize_ != nullptr;};
    void deleteCanResize() { this->canResize_ = nullptr;};
    inline bool canResize() const { DARABONBA_PTR_GET_DEFAULT(canResize_, false) };
    inline GetCurrentPlayingListResponseBodyResultCover& setCanResize(bool canResize) { DARABONBA_PTR_SET_VALUE(canResize_, canResize) };


    // img Field Functions 
    bool hasImg() const { return this->img_ != nullptr;};
    void deleteImg() { this->img_ = nullptr;};
    inline string img() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
    inline GetCurrentPlayingListResponseBodyResultCover& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


    // large Field Functions 
    bool hasLarge() const { return this->large_ != nullptr;};
    void deleteLarge() { this->large_ = nullptr;};
    inline string large() const { DARABONBA_PTR_GET_DEFAULT(large_, "") };
    inline GetCurrentPlayingListResponseBodyResultCover& setLarge(string large) { DARABONBA_PTR_SET_VALUE(large_, large) };


    // mediam Field Functions 
    bool hasMediam() const { return this->mediam_ != nullptr;};
    void deleteMediam() { this->mediam_ = nullptr;};
    inline string mediam() const { DARABONBA_PTR_GET_DEFAULT(mediam_, "") };
    inline GetCurrentPlayingListResponseBodyResultCover& setMediam(string mediam) { DARABONBA_PTR_SET_VALUE(mediam_, mediam) };


    // medium Field Functions 
    bool hasMedium() const { return this->medium_ != nullptr;};
    void deleteMedium() { this->medium_ = nullptr;};
    inline string medium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
    inline GetCurrentPlayingListResponseBodyResultCover& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


    // small Field Functions 
    bool hasSmall() const { return this->small_ != nullptr;};
    void deleteSmall() { this->small_ = nullptr;};
    inline string small() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
    inline GetCurrentPlayingListResponseBodyResultCover& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


  protected:
    std::shared_ptr<bool> canResize_ = nullptr;
    std::shared_ptr<string> img_ = nullptr;
    std::shared_ptr<string> large_ = nullptr;
    std::shared_ptr<string> mediam_ = nullptr;
    std::shared_ptr<string> medium_ = nullptr;
    std::shared_ptr<string> small_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
