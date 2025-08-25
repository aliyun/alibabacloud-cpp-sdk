// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEVIDEOSIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEVIDEOSIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class ChangeVideoSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeVideoSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(B, b_);
      DARABONBA_PTR_TO_JSON(CropType, cropType_);
      DARABONBA_PTR_TO_JSON(FillType, fillType_);
      DARABONBA_PTR_TO_JSON(G, g_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(R, r_);
      DARABONBA_PTR_TO_JSON(Tightness, tightness_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeVideoSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(B, b_);
      DARABONBA_PTR_FROM_JSON(CropType, cropType_);
      DARABONBA_PTR_FROM_JSON(FillType, fillType_);
      DARABONBA_PTR_FROM_JSON(G, g_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(R, r_);
      DARABONBA_PTR_FROM_JSON(Tightness, tightness_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ChangeVideoSizeRequest() = default ;
    ChangeVideoSizeRequest(const ChangeVideoSizeRequest &) = default ;
    ChangeVideoSizeRequest(ChangeVideoSizeRequest &&) = default ;
    ChangeVideoSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeVideoSizeRequest() = default ;
    ChangeVideoSizeRequest& operator=(const ChangeVideoSizeRequest &) = default ;
    ChangeVideoSizeRequest& operator=(ChangeVideoSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->b_ != nullptr
        && this->cropType_ != nullptr && this->fillType_ != nullptr && this->g_ != nullptr && this->height_ != nullptr && this->r_ != nullptr
        && this->tightness_ != nullptr && this->videoUrl_ != nullptr && this->width_ != nullptr; };
    // b Field Functions 
    bool hasB() const { return this->b_ != nullptr;};
    void deleteB() { this->b_ = nullptr;};
    inline int32_t b() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
    inline ChangeVideoSizeRequest& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


    // cropType Field Functions 
    bool hasCropType() const { return this->cropType_ != nullptr;};
    void deleteCropType() { this->cropType_ = nullptr;};
    inline string cropType() const { DARABONBA_PTR_GET_DEFAULT(cropType_, "") };
    inline ChangeVideoSizeRequest& setCropType(string cropType) { DARABONBA_PTR_SET_VALUE(cropType_, cropType) };


    // fillType Field Functions 
    bool hasFillType() const { return this->fillType_ != nullptr;};
    void deleteFillType() { this->fillType_ = nullptr;};
    inline string fillType() const { DARABONBA_PTR_GET_DEFAULT(fillType_, "") };
    inline ChangeVideoSizeRequest& setFillType(string fillType) { DARABONBA_PTR_SET_VALUE(fillType_, fillType) };


    // g Field Functions 
    bool hasG() const { return this->g_ != nullptr;};
    void deleteG() { this->g_ = nullptr;};
    inline int32_t g() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
    inline ChangeVideoSizeRequest& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ChangeVideoSizeRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // r Field Functions 
    bool hasR() const { return this->r_ != nullptr;};
    void deleteR() { this->r_ = nullptr;};
    inline int32_t r() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
    inline ChangeVideoSizeRequest& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


    // tightness Field Functions 
    bool hasTightness() const { return this->tightness_ != nullptr;};
    void deleteTightness() { this->tightness_ = nullptr;};
    inline float tightness() const { DARABONBA_PTR_GET_DEFAULT(tightness_, 0.0) };
    inline ChangeVideoSizeRequest& setTightness(float tightness) { DARABONBA_PTR_SET_VALUE(tightness_, tightness) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline ChangeVideoSizeRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ChangeVideoSizeRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> b_ = nullptr;
    std::shared_ptr<string> cropType_ = nullptr;
    std::shared_ptr<string> fillType_ = nullptr;
    std::shared_ptr<int32_t> g_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> r_ = nullptr;
    std::shared_ptr<float> tightness_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
