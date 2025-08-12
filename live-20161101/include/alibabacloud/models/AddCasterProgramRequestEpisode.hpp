// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERPROGRAMREQUESTEPISODE_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERPROGRAMREQUESTEPISODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterProgramRequestEpisode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterProgramRequestEpisode& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EpisodeName, episodeName_);
      DARABONBA_PTR_TO_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterProgramRequestEpisode& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EpisodeName, episodeName_);
      DARABONBA_PTR_FROM_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
    };
    AddCasterProgramRequestEpisode() = default ;
    AddCasterProgramRequestEpisode(const AddCasterProgramRequestEpisode &) = default ;
    AddCasterProgramRequestEpisode(AddCasterProgramRequestEpisode &&) = default ;
    AddCasterProgramRequestEpisode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterProgramRequestEpisode() = default ;
    AddCasterProgramRequestEpisode& operator=(const AddCasterProgramRequestEpisode &) = default ;
    AddCasterProgramRequestEpisode& operator=(AddCasterProgramRequestEpisode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentId_ != nullptr
        && this->endTime_ != nullptr && this->episodeName_ != nullptr && this->episodeType_ != nullptr && this->resourceId_ != nullptr && this->startTime_ != nullptr
        && this->switchType_ != nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline const vector<string> & componentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
    inline vector<string> componentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
    inline AddCasterProgramRequestEpisode& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
    inline AddCasterProgramRequestEpisode& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AddCasterProgramRequestEpisode& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // episodeName Field Functions 
    bool hasEpisodeName() const { return this->episodeName_ != nullptr;};
    void deleteEpisodeName() { this->episodeName_ = nullptr;};
    inline string episodeName() const { DARABONBA_PTR_GET_DEFAULT(episodeName_, "") };
    inline AddCasterProgramRequestEpisode& setEpisodeName(string episodeName) { DARABONBA_PTR_SET_VALUE(episodeName_, episodeName) };


    // episodeType Field Functions 
    bool hasEpisodeType() const { return this->episodeType_ != nullptr;};
    void deleteEpisodeType() { this->episodeType_ = nullptr;};
    inline string episodeType() const { DARABONBA_PTR_GET_DEFAULT(episodeType_, "") };
    inline AddCasterProgramRequestEpisode& setEpisodeType(string episodeType) { DARABONBA_PTR_SET_VALUE(episodeType_, episodeType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AddCasterProgramRequestEpisode& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddCasterProgramRequestEpisode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline string switchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
    inline AddCasterProgramRequestEpisode& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


  protected:
    // The components. Components in the production studio are listed from the bottom to the top in an array.
    // 
    // >  This parameter is required and takes effect when the Episode.N.EpisodeType parameter is set to Component.
    // 
    // This parameter is optional when the Episode.N.EpisodeType parameter is set to **Resource**. In this case, if this parameter is specified, the components are bound to and switched together with video resources.
    std::shared_ptr<vector<string>> componentId_ = nullptr;
    // The end time of the episode. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> episodeName_ = nullptr;
    // The type of the episode.
    // 
    // *   **Resource**: a video resource If you set this parameter to Resource, you must specify the Episode.N.ResourceId and Episode.N.SwitchType parameters.
    // *   **Component**: a component If you set this parameter to Component, you must specify the Episode.N.ComponentId.N parameter.
    std::shared_ptr<string> episodeType_ = nullptr;
    // The ID of the video resource.
    // 
    // >  This parameter takes effect and is required when the Episode.N.EpisodeType parameter is set to Resource.
    // 
    // \\
    // This parameter is invalid if you set the Episode.N.EpisodeType parameter to **Component**.
    // 
    // If the video resource was added by calling the [AddCasterVideoResource](https://help.aliyun.com/document_detail/60250.html) operation, check the value of the response parameter ResourceId to obtain the ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The start time of the episode. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The policy for switching episodes. Valid values:
    // 
    // >  This parameter takes effect only when the Episode.N.EpisodeType parameter is set to Resource.
    // 
    // *   **TimeFirst**: The episode starts when the previous episode ends and ends when the next episode starts. If no next episode exists, the episode keeps repeating until a new episode is added or the production studio stops. This value is required for live video resources.
    // *   **ContentFirst**: The episode starts and ends as scheduled.
    std::shared_ptr<string> switchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
