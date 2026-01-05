// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERPROGRAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERPROGRAMREQUEST_HPP_
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
  class AddCasterProgramRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterProgramRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(Episode, episode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterProgramRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(Episode, episode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddCasterProgramRequest() = default ;
    AddCasterProgramRequest(const AddCasterProgramRequest &) = default ;
    AddCasterProgramRequest(AddCasterProgramRequest &&) = default ;
    AddCasterProgramRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterProgramRequest() = default ;
    AddCasterProgramRequest& operator=(const AddCasterProgramRequest &) = default ;
    AddCasterProgramRequest& operator=(AddCasterProgramRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Episode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Episode& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EpisodeName, episodeName_);
        DARABONBA_PTR_TO_JSON(EpisodeType, episodeType_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
      };
      friend void from_json(const Darabonba::Json& j, Episode& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EpisodeName, episodeName_);
        DARABONBA_PTR_FROM_JSON(EpisodeType, episodeType_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
      };
      Episode() = default ;
      Episode(const Episode &) = default ;
      Episode(Episode &&) = default ;
      Episode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Episode() = default ;
      Episode& operator=(const Episode &) = default ;
      Episode& operator=(Episode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentId_ == nullptr
        && this->endTime_ == nullptr && this->episodeName_ == nullptr && this->episodeType_ == nullptr && this->resourceId_ == nullptr && this->startTime_ == nullptr
        && this->switchType_ == nullptr; };
      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline const vector<string> & getComponentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
      inline vector<string> getComponentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
      inline Episode& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
      inline Episode& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Episode& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // episodeName Field Functions 
      bool hasEpisodeName() const { return this->episodeName_ != nullptr;};
      void deleteEpisodeName() { this->episodeName_ = nullptr;};
      inline string getEpisodeName() const { DARABONBA_PTR_GET_DEFAULT(episodeName_, "") };
      inline Episode& setEpisodeName(string episodeName) { DARABONBA_PTR_SET_VALUE(episodeName_, episodeName) };


      // episodeType Field Functions 
      bool hasEpisodeType() const { return this->episodeType_ != nullptr;};
      void deleteEpisodeType() { this->episodeType_ = nullptr;};
      inline string getEpisodeType() const { DARABONBA_PTR_GET_DEFAULT(episodeType_, "") };
      inline Episode& setEpisodeType(string episodeType) { DARABONBA_PTR_SET_VALUE(episodeType_, episodeType) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Episode& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Episode& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // switchType Field Functions 
      bool hasSwitchType() const { return this->switchType_ != nullptr;};
      void deleteSwitchType() { this->switchType_ = nullptr;};
      inline string getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
      inline Episode& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


    protected:
      // The components. Components in the production studio are listed from the bottom to the top in an array.
      // 
      // >  This parameter is required and takes effect when the Episode.N.EpisodeType parameter is set to Component.
      // 
      // This parameter is optional when the Episode.N.EpisodeType parameter is set to **Resource**. In this case, if this parameter is specified, the components are bound to and switched together with video resources.
      shared_ptr<vector<string>> componentId_ {};
      // The end time of the episode. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
      shared_ptr<string> endTime_ {};
      // The name of the episode.
      shared_ptr<string> episodeName_ {};
      // The type of the episode.
      // 
      // *   **Resource**: a video resource If you set this parameter to Resource, you must specify the Episode.N.ResourceId and Episode.N.SwitchType parameters.
      // *   **Component**: a component If you set this parameter to Component, you must specify the Episode.N.ComponentId.N parameter.
      shared_ptr<string> episodeType_ {};
      // The ID of the video resource.
      // 
      // >  This parameter takes effect and is required when the Episode.N.EpisodeType parameter is set to Resource.
      // 
      // \\
      // This parameter is invalid if you set the Episode.N.EpisodeType parameter to **Component**.
      // 
      // If the video resource was added by calling the [AddCasterVideoResource](https://help.aliyun.com/document_detail/60250.html) operation, check the value of the response parameter ResourceId to obtain the ID.
      shared_ptr<string> resourceId_ {};
      // The start time of the episode. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
      shared_ptr<string> startTime_ {};
      // The policy for switching episodes. Valid values:
      // 
      // >  This parameter takes effect only when the Episode.N.EpisodeType parameter is set to Resource.
      // 
      // *   **TimeFirst**: The episode starts when the previous episode ends and ends when the next episode starts. If no next episode exists, the episode keeps repeating until a new episode is added or the production studio stops. This value is required for live video resources.
      // *   **ContentFirst**: The episode starts and ends as scheduled.
      shared_ptr<string> switchType_ {};
    };

    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->episode_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterProgramRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // episode Field Functions 
    bool hasEpisode() const { return this->episode_ != nullptr;};
    void deleteEpisode() { this->episode_ = nullptr;};
    inline const vector<AddCasterProgramRequest::Episode> & getEpisode() const { DARABONBA_PTR_GET_CONST(episode_, vector<AddCasterProgramRequest::Episode>) };
    inline vector<AddCasterProgramRequest::Episode> getEpisode() { DARABONBA_PTR_GET(episode_, vector<AddCasterProgramRequest::Episode>) };
    inline AddCasterProgramRequest& setEpisode(const vector<AddCasterProgramRequest::Episode> & episode) { DARABONBA_PTR_SET_VALUE(episode_, episode) };
    inline AddCasterProgramRequest& setEpisode(vector<AddCasterProgramRequest::Episode> && episode) { DARABONBA_PTR_SET_RVALUE(episode_, episode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterProgramRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterProgramRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The information about episodes in the episode list.
    // 
    // This parameter is required.
    shared_ptr<vector<AddCasterProgramRequest::Episode>> episode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
