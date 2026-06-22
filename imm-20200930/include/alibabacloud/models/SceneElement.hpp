// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCENEELEMENT_HPP_
#define ALIBABACLOUD_MODELS_SCENEELEMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SceneElement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SceneElement& obj) { 
      DARABONBA_PTR_TO_JSON(FrameTimes, frameTimes_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_TO_JSON(VideoStreamIndex, videoStreamIndex_);
    };
    friend void from_json(const Darabonba::Json& j, SceneElement& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameTimes, frameTimes_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_FROM_JSON(VideoStreamIndex, videoStreamIndex_);
    };
    SceneElement() = default ;
    SceneElement(const SceneElement &) = default ;
    SceneElement(SceneElement &&) = default ;
    SceneElement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SceneElement() = default ;
    SceneElement& operator=(const SceneElement &) = default ;
    SceneElement& operator=(SceneElement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameTimes_ == nullptr
        && this->labels_ == nullptr && this->timeRange_ == nullptr && this->videoStreamIndex_ == nullptr; };
    // frameTimes Field Functions 
    bool hasFrameTimes() const { return this->frameTimes_ != nullptr;};
    void deleteFrameTimes() { this->frameTimes_ = nullptr;};
    inline const vector<int64_t> & getFrameTimes() const { DARABONBA_PTR_GET_CONST(frameTimes_, vector<int64_t>) };
    inline vector<int64_t> getFrameTimes() { DARABONBA_PTR_GET(frameTimes_, vector<int64_t>) };
    inline SceneElement& setFrameTimes(const vector<int64_t> & frameTimes) { DARABONBA_PTR_SET_VALUE(frameTimes_, frameTimes) };
    inline SceneElement& setFrameTimes(vector<int64_t> && frameTimes) { DARABONBA_PTR_SET_RVALUE(frameTimes_, frameTimes) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline SceneElement& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline SceneElement& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const vector<int64_t> & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, vector<int64_t>) };
    inline vector<int64_t> getTimeRange() { DARABONBA_PTR_GET(timeRange_, vector<int64_t>) };
    inline SceneElement& setTimeRange(const vector<int64_t> & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline SceneElement& setTimeRange(vector<int64_t> && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


    // videoStreamIndex Field Functions 
    bool hasVideoStreamIndex() const { return this->videoStreamIndex_ != nullptr;};
    void deleteVideoStreamIndex() { this->videoStreamIndex_ = nullptr;};
    inline int64_t getVideoStreamIndex() const { DARABONBA_PTR_GET_DEFAULT(videoStreamIndex_, 0L) };
    inline SceneElement& setVideoStreamIndex(int64_t videoStreamIndex) { DARABONBA_PTR_SET_VALUE(videoStreamIndex_, videoStreamIndex) };


  protected:
    // The timestamps of the frames within the current video element that match the search content. The unit is milliseconds.
    shared_ptr<vector<int64_t>> frameTimes_ {};
    // The label information.
    shared_ptr<vector<Label>> labels_ {};
    // The time range of the video element. The array has a fixed length of 2. The two values represent the start time and end time in milliseconds.
    shared_ptr<vector<int64_t>> timeRange_ {};
    // The index of the video stream to which the current video scene element belongs. This corresponds to the index in the [VideoStreams](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-detectmediameta?spm=a2c4g.11186623.0.0.463e600fIDdM8r#api-detail-40) array.
    shared_ptr<int64_t> videoStreamIndex_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
