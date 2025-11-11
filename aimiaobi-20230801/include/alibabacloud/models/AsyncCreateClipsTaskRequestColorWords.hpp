// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKREQUESTCOLORWORDS_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKREQUESTCOLORWORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTaskRequestColorWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTaskRequestColorWords& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EffectColorStyle, effectColorStyle_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_TO_JSON(TimelineOut, timelineOut_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTaskRequestColorWords& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EffectColorStyle, effectColorStyle_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_FROM_JSON(TimelineOut, timelineOut_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    AsyncCreateClipsTaskRequestColorWords() = default ;
    AsyncCreateClipsTaskRequestColorWords(const AsyncCreateClipsTaskRequestColorWords &) = default ;
    AsyncCreateClipsTaskRequestColorWords(AsyncCreateClipsTaskRequestColorWords &&) = default ;
    AsyncCreateClipsTaskRequestColorWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTaskRequestColorWords() = default ;
    AsyncCreateClipsTaskRequestColorWords& operator=(const AsyncCreateClipsTaskRequestColorWords &) = default ;
    AsyncCreateClipsTaskRequestColorWords& operator=(AsyncCreateClipsTaskRequestColorWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->effectColorStyle_ == nullptr && return this->fontSize_ == nullptr && return this->timelineIn_ == nullptr && return this->timelineOut_ == nullptr && return this->x_ == nullptr
        && return this->y_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AsyncCreateClipsTaskRequestColorWords& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // effectColorStyle Field Functions 
    bool hasEffectColorStyle() const { return this->effectColorStyle_ != nullptr;};
    void deleteEffectColorStyle() { this->effectColorStyle_ = nullptr;};
    inline string effectColorStyle() const { DARABONBA_PTR_GET_DEFAULT(effectColorStyle_, "") };
    inline AsyncCreateClipsTaskRequestColorWords& setEffectColorStyle(string effectColorStyle) { DARABONBA_PTR_SET_VALUE(effectColorStyle_, effectColorStyle) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline AsyncCreateClipsTaskRequestColorWords& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // timelineIn Field Functions 
    bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
    void deleteTimelineIn() { this->timelineIn_ = nullptr;};
    inline int32_t timelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0) };
    inline AsyncCreateClipsTaskRequestColorWords& setTimelineIn(int32_t timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


    // timelineOut Field Functions 
    bool hasTimelineOut() const { return this->timelineOut_ != nullptr;};
    void deleteTimelineOut() { this->timelineOut_ = nullptr;};
    inline int32_t timelineOut() const { DARABONBA_PTR_GET_DEFAULT(timelineOut_, 0) };
    inline AsyncCreateClipsTaskRequestColorWords& setTimelineOut(int32_t timelineOut) { DARABONBA_PTR_SET_VALUE(timelineOut_, timelineOut) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline AsyncCreateClipsTaskRequestColorWords& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline AsyncCreateClipsTaskRequestColorWords& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> effectColorStyle_ = nullptr;
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    std::shared_ptr<int32_t> timelineIn_ = nullptr;
    std::shared_ptr<int32_t> timelineOut_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
