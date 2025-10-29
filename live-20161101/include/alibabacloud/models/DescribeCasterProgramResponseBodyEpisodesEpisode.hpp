// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODYEPISODESEPISODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMRESPONSEBODYEPISODESEPISODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterProgramResponseBodyEpisodesEpisode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterProgramResponseBodyEpisodesEpisode& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_TO_JSON(EpisodeName, episodeName_);
      DARABONBA_PTR_TO_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterProgramResponseBodyEpisodesEpisode& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_FROM_JSON(EpisodeName, episodeName_);
      DARABONBA_PTR_FROM_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
    };
    DescribeCasterProgramResponseBodyEpisodesEpisode() = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisode(const DescribeCasterProgramResponseBodyEpisodesEpisode &) = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisode(DescribeCasterProgramResponseBodyEpisodesEpisode &&) = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterProgramResponseBodyEpisodesEpisode() = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisode& operator=(const DescribeCasterProgramResponseBodyEpisodesEpisode &) = default ;
    DescribeCasterProgramResponseBodyEpisodesEpisode& operator=(DescribeCasterProgramResponseBodyEpisodesEpisode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentIds_ == nullptr
        && return this->endTime_ == nullptr && return this->episodeId_ == nullptr && return this->episodeName_ == nullptr && return this->episodeType_ == nullptr && return this->resourceId_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->switchType_ == nullptr; };
    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline const Models::DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds & componentIds() const { DARABONBA_PTR_GET_CONST(componentIds_, Models::DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds) };
    inline Models::DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds componentIds() { DARABONBA_PTR_GET(componentIds_, Models::DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds) };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setComponentIds(const Models::DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds & componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setComponentIds(Models::DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds && componentIds) { DARABONBA_PTR_SET_RVALUE(componentIds_, componentIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // episodeId Field Functions 
    bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
    void deleteEpisodeId() { this->episodeId_ = nullptr;};
    inline string episodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


    // episodeName Field Functions 
    bool hasEpisodeName() const { return this->episodeName_ != nullptr;};
    void deleteEpisodeName() { this->episodeName_ = nullptr;};
    inline string episodeName() const { DARABONBA_PTR_GET_DEFAULT(episodeName_, "") };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setEpisodeName(string episodeName) { DARABONBA_PTR_SET_VALUE(episodeName_, episodeName) };


    // episodeType Field Functions 
    bool hasEpisodeType() const { return this->episodeType_ != nullptr;};
    void deleteEpisodeType() { this->episodeType_ = nullptr;};
    inline string episodeType() const { DARABONBA_PTR_GET_DEFAULT(episodeType_, "") };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setEpisodeType(string episodeType) { DARABONBA_PTR_SET_VALUE(episodeType_, episodeType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline string switchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
    inline DescribeCasterProgramResponseBodyEpisodesEpisode& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


  protected:
    // The components.
    std::shared_ptr<Models::DescribeCasterProgramResponseBodyEpisodesEpisodeComponentIds> componentIds_ = nullptr;
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the episode.
    std::shared_ptr<string> episodeId_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> episodeName_ = nullptr;
    // The type of the episode. Valid values:
    // 
    // *   **Resource**: a video resource
    // *   **Component**: a component
    std::shared_ptr<string> episodeType_ = nullptr;
    // The ID of the video resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The beginning of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the episode.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The policy for switching episodes. Valid values:
    // 
    // *   **TimeFirst**: The episode starts when the previous episode ends and ends when the next episode starts. If no next episode exists, the episode keeps repeating until a new episode is added or the production studio stops. This value is required for live video resources.
    // *   **ContentFirst**: The episode starts and ends as scheduled.
    std::shared_ptr<string> switchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
