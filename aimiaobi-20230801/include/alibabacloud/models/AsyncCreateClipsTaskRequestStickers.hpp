// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKREQUESTSTICKERS_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKREQUESTSTICKERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTaskRequestStickers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTaskRequestStickers& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(DyncFrames, dyncFrames_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTaskRequestStickers& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(DyncFrames, dyncFrames_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    AsyncCreateClipsTaskRequestStickers() = default ;
    AsyncCreateClipsTaskRequestStickers(const AsyncCreateClipsTaskRequestStickers &) = default ;
    AsyncCreateClipsTaskRequestStickers(AsyncCreateClipsTaskRequestStickers &&) = default ;
    AsyncCreateClipsTaskRequestStickers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTaskRequestStickers() = default ;
    AsyncCreateClipsTaskRequestStickers& operator=(const AsyncCreateClipsTaskRequestStickers &) = default ;
    AsyncCreateClipsTaskRequestStickers& operator=(AsyncCreateClipsTaskRequestStickers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->dyncFrames_ == nullptr && return this->height_ == nullptr && return this->timelineIn_ == nullptr && return this->url_ == nullptr && return this->width_ == nullptr
        && return this->x_ == nullptr && return this->y_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline AsyncCreateClipsTaskRequestStickers& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // dyncFrames Field Functions 
    bool hasDyncFrames() const { return this->dyncFrames_ != nullptr;};
    void deleteDyncFrames() { this->dyncFrames_ = nullptr;};
    inline int32_t dyncFrames() const { DARABONBA_PTR_GET_DEFAULT(dyncFrames_, 0) };
    inline AsyncCreateClipsTaskRequestStickers& setDyncFrames(int32_t dyncFrames) { DARABONBA_PTR_SET_VALUE(dyncFrames_, dyncFrames) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AsyncCreateClipsTaskRequestStickers& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // timelineIn Field Functions 
    bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
    void deleteTimelineIn() { this->timelineIn_ = nullptr;};
    inline int32_t timelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0) };
    inline AsyncCreateClipsTaskRequestStickers& setTimelineIn(int32_t timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline AsyncCreateClipsTaskRequestStickers& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AsyncCreateClipsTaskRequestStickers& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline AsyncCreateClipsTaskRequestStickers& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline AsyncCreateClipsTaskRequestStickers& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<int32_t> dyncFrames_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> timelineIn_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
