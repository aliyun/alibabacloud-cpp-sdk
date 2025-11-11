// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCEDITTIMELINEREQUESTTIMELINES_HPP_
#define ALIBABACLOUD_MODELS_ASYNCEDITTIMELINEREQUESTTIMELINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncEditTimelineRequestTimelinesClips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncEditTimelineRequestTimelines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncEditTimelineRequestTimelines& obj) { 
      DARABONBA_PTR_TO_JSON(Clips, clips_);
      DARABONBA_PTR_TO_JSON(TimelineId, timelineId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncEditTimelineRequestTimelines& obj) { 
      DARABONBA_PTR_FROM_JSON(Clips, clips_);
      DARABONBA_PTR_FROM_JSON(TimelineId, timelineId_);
    };
    AsyncEditTimelineRequestTimelines() = default ;
    AsyncEditTimelineRequestTimelines(const AsyncEditTimelineRequestTimelines &) = default ;
    AsyncEditTimelineRequestTimelines(AsyncEditTimelineRequestTimelines &&) = default ;
    AsyncEditTimelineRequestTimelines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncEditTimelineRequestTimelines() = default ;
    AsyncEditTimelineRequestTimelines& operator=(const AsyncEditTimelineRequestTimelines &) = default ;
    AsyncEditTimelineRequestTimelines& operator=(AsyncEditTimelineRequestTimelines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clips_ == nullptr
        && return this->timelineId_ == nullptr; };
    // clips Field Functions 
    bool hasClips() const { return this->clips_ != nullptr;};
    void deleteClips() { this->clips_ = nullptr;};
    inline const vector<Models::AsyncEditTimelineRequestTimelinesClips> & clips() const { DARABONBA_PTR_GET_CONST(clips_, vector<Models::AsyncEditTimelineRequestTimelinesClips>) };
    inline vector<Models::AsyncEditTimelineRequestTimelinesClips> clips() { DARABONBA_PTR_GET(clips_, vector<Models::AsyncEditTimelineRequestTimelinesClips>) };
    inline AsyncEditTimelineRequestTimelines& setClips(const vector<Models::AsyncEditTimelineRequestTimelinesClips> & clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };
    inline AsyncEditTimelineRequestTimelines& setClips(vector<Models::AsyncEditTimelineRequestTimelinesClips> && clips) { DARABONBA_PTR_SET_RVALUE(clips_, clips) };


    // timelineId Field Functions 
    bool hasTimelineId() const { return this->timelineId_ != nullptr;};
    void deleteTimelineId() { this->timelineId_ = nullptr;};
    inline string timelineId() const { DARABONBA_PTR_GET_DEFAULT(timelineId_, "") };
    inline AsyncEditTimelineRequestTimelines& setTimelineId(string timelineId) { DARABONBA_PTR_SET_VALUE(timelineId_, timelineId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::AsyncEditTimelineRequestTimelinesClips>> clips_ = nullptr;
    std::shared_ptr<string> timelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
