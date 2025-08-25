// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTRESPONSEBODYDATAVIDEOINFO_HPP_
#define ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTRESPONSEBODYDATAVIDEOINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class UnderstandVideoContentResponseBodyDataVideoInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnderstandVideoContentResponseBodyDataVideoInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UnderstandVideoContentResponseBodyDataVideoInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    UnderstandVideoContentResponseBodyDataVideoInfo() = default ;
    UnderstandVideoContentResponseBodyDataVideoInfo(const UnderstandVideoContentResponseBodyDataVideoInfo &) = default ;
    UnderstandVideoContentResponseBodyDataVideoInfo(UnderstandVideoContentResponseBodyDataVideoInfo &&) = default ;
    UnderstandVideoContentResponseBodyDataVideoInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnderstandVideoContentResponseBodyDataVideoInfo() = default ;
    UnderstandVideoContentResponseBodyDataVideoInfo& operator=(const UnderstandVideoContentResponseBodyDataVideoInfo &) = default ;
    UnderstandVideoContentResponseBodyDataVideoInfo& operator=(UnderstandVideoContentResponseBodyDataVideoInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->fps_ != nullptr && this->height_ != nullptr && this->width_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline UnderstandVideoContentResponseBodyDataVideoInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline float fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0.0) };
    inline UnderstandVideoContentResponseBodyDataVideoInfo& setFps(float fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline UnderstandVideoContentResponseBodyDataVideoInfo& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline UnderstandVideoContentResponseBodyDataVideoInfo& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<float> fps_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
