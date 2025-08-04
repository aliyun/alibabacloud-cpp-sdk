// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODYDATATIMELINES_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOCLIPSTASKINFORESPONSEBODYDATATIMELINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAutoClipsTaskInfoResponseBodyDataTimelinesClips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAutoClipsTaskInfoResponseBodyDataTimelines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoClipsTaskInfoResponseBodyDataTimelines& obj) { 
      DARABONBA_PTR_TO_JSON(Clips, clips_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(TimelineId, timelineId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoClipsTaskInfoResponseBodyDataTimelines& obj) { 
      DARABONBA_PTR_FROM_JSON(Clips, clips_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(TimelineId, timelineId_);
    };
    GetAutoClipsTaskInfoResponseBodyDataTimelines() = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelines(const GetAutoClipsTaskInfoResponseBodyDataTimelines &) = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelines(GetAutoClipsTaskInfoResponseBodyDataTimelines &&) = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoClipsTaskInfoResponseBodyDataTimelines() = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelines& operator=(const GetAutoClipsTaskInfoResponseBodyDataTimelines &) = default ;
    GetAutoClipsTaskInfoResponseBodyDataTimelines& operator=(GetAutoClipsTaskInfoResponseBodyDataTimelines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clips_ != nullptr
        && this->content_ != nullptr && this->timelineId_ != nullptr; };
    // clips Field Functions 
    bool hasClips() const { return this->clips_ != nullptr;};
    void deleteClips() { this->clips_ = nullptr;};
    inline const vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelinesClips> & clips() const { DARABONBA_PTR_GET_CONST(clips_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelinesClips>) };
    inline vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelinesClips> clips() { DARABONBA_PTR_GET(clips_, vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelinesClips>) };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelines& setClips(const vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelinesClips> & clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelines& setClips(vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelinesClips> && clips) { DARABONBA_PTR_SET_RVALUE(clips_, clips) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelines& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // timelineId Field Functions 
    bool hasTimelineId() const { return this->timelineId_ != nullptr;};
    void deleteTimelineId() { this->timelineId_ = nullptr;};
    inline string timelineId() const { DARABONBA_PTR_GET_DEFAULT(timelineId_, "") };
    inline GetAutoClipsTaskInfoResponseBodyDataTimelines& setTimelineId(string timelineId) { DARABONBA_PTR_SET_VALUE(timelineId_, timelineId) };


  protected:
    std::shared_ptr<vector<Models::GetAutoClipsTaskInfoResponseBodyDataTimelinesClips>> clips_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> timelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
