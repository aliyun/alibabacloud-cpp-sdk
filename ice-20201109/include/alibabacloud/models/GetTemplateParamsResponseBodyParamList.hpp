// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMSRESPONSEBODYPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMSRESPONSEBODYPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTemplateParamsResponseBodyParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParamsResponseBodyParamList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MediaUrl, mediaUrl_);
      DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_TO_JSON(TimelineOut, timelineOut_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParamsResponseBodyParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MediaUrl, mediaUrl_);
      DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_FROM_JSON(TimelineOut, timelineOut_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    GetTemplateParamsResponseBodyParamList() = default ;
    GetTemplateParamsResponseBodyParamList(const GetTemplateParamsResponseBodyParamList &) = default ;
    GetTemplateParamsResponseBodyParamList(GetTemplateParamsResponseBodyParamList &&) = default ;
    GetTemplateParamsResponseBodyParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParamsResponseBodyParamList() = default ;
    GetTemplateParamsResponseBodyParamList& operator=(const GetTemplateParamsResponseBodyParamList &) = default ;
    GetTemplateParamsResponseBodyParamList& operator=(GetTemplateParamsResponseBodyParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->coverUrl_ == nullptr && return this->height_ == nullptr && return this->key_ == nullptr && return this->mediaUrl_ == nullptr && return this->timelineIn_ == nullptr
        && return this->timelineOut_ == nullptr && return this->type_ == nullptr && return this->width_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetTemplateParamsResponseBodyParamList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline GetTemplateParamsResponseBodyParamList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline GetTemplateParamsResponseBodyParamList& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetTemplateParamsResponseBodyParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // mediaUrl Field Functions 
    bool hasMediaUrl() const { return this->mediaUrl_ != nullptr;};
    void deleteMediaUrl() { this->mediaUrl_ = nullptr;};
    inline string mediaUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaUrl_, "") };
    inline GetTemplateParamsResponseBodyParamList& setMediaUrl(string mediaUrl) { DARABONBA_PTR_SET_VALUE(mediaUrl_, mediaUrl) };


    // timelineIn Field Functions 
    bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
    void deleteTimelineIn() { this->timelineIn_ = nullptr;};
    inline float timelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0.0) };
    inline GetTemplateParamsResponseBodyParamList& setTimelineIn(float timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


    // timelineOut Field Functions 
    bool hasTimelineOut() const { return this->timelineOut_ != nullptr;};
    void deleteTimelineOut() { this->timelineOut_ = nullptr;};
    inline float timelineOut() const { DARABONBA_PTR_GET_DEFAULT(timelineOut_, 0.0) };
    inline GetTemplateParamsResponseBodyParamList& setTimelineOut(float timelineOut) { DARABONBA_PTR_SET_VALUE(timelineOut_, timelineOut) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTemplateParamsResponseBodyParamList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline GetTemplateParamsResponseBodyParamList& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int32_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
    inline GetTemplateParamsResponseBodyParamList& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int32_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
    inline GetTemplateParamsResponseBodyParamList& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // The original subtitle content.
    std::shared_ptr<string> content_ = nullptr;
    // The thumbnail URL of the original material.
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> key_ = nullptr;
    // The URL of the original material.
    std::shared_ptr<string> mediaUrl_ = nullptr;
    std::shared_ptr<float> timelineIn_ = nullptr;
    std::shared_ptr<float> timelineOut_ = nullptr;
    // The material type.
    // 
    // Valid values:
    // 
    // *   Video
    // *   Text
    // *   Image
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
    std::shared_ptr<int32_t> x_ = nullptr;
    std::shared_ptr<int32_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
