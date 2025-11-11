// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGTITLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGTITLECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestEditingConfigTitleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestEditingConfigTitleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Alignment, alignment_);
      DARABONBA_PTR_TO_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_TO_JSON(TimelineOut, timelineOut_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestEditingConfigTitleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Alignment, alignment_);
      DARABONBA_PTR_FROM_JSON(TimelineIn, timelineIn_);
      DARABONBA_PTR_FROM_JSON(TimelineOut, timelineOut_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    SubmitSmartClipTaskRequestEditingConfigTitleConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigTitleConfig(const SubmitSmartClipTaskRequestEditingConfigTitleConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigTitleConfig(SubmitSmartClipTaskRequestEditingConfigTitleConfig &&) = default ;
    SubmitSmartClipTaskRequestEditingConfigTitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestEditingConfigTitleConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigTitleConfig& operator=(const SubmitSmartClipTaskRequestEditingConfigTitleConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigTitleConfig& operator=(SubmitSmartClipTaskRequestEditingConfigTitleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alignment_ == nullptr
        && return this->timelineIn_ == nullptr && return this->timelineOut_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // alignment Field Functions 
    bool hasAlignment() const { return this->alignment_ != nullptr;};
    void deleteAlignment() { this->alignment_ = nullptr;};
    inline string alignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigTitleConfig& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


    // timelineIn Field Functions 
    bool hasTimelineIn() const { return this->timelineIn_ != nullptr;};
    void deleteTimelineIn() { this->timelineIn_ = nullptr;};
    inline float timelineIn() const { DARABONBA_PTR_GET_DEFAULT(timelineIn_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigTitleConfig& setTimelineIn(float timelineIn) { DARABONBA_PTR_SET_VALUE(timelineIn_, timelineIn) };


    // timelineOut Field Functions 
    bool hasTimelineOut() const { return this->timelineOut_ != nullptr;};
    void deleteTimelineOut() { this->timelineOut_ = nullptr;};
    inline float timelineOut() const { DARABONBA_PTR_GET_DEFAULT(timelineOut_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigTitleConfig& setTimelineOut(float timelineOut) { DARABONBA_PTR_SET_VALUE(timelineOut_, timelineOut) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigTitleConfig& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigTitleConfig& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<string> alignment_ = nullptr;
    std::shared_ptr<float> timelineIn_ = nullptr;
    std::shared_ptr<float> timelineOut_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
