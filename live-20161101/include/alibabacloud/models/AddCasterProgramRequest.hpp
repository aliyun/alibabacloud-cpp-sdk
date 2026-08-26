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
      // The component list. Elements are arranged from bottom to top in order.
      // >Notice: This parameter is valid and required when Episode.N.EpisodeType is set to **Component**.
      // 
      // 
      //  When the node type is **Resource**, this indicates that the component is bound to the video source and switches synchronously.
      shared_ptr<vector<string>> componentId_ {};
      // The end time. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC). This parameter is required. If not specified, MissingParameter is returned.
      shared_ptr<string> endTime_ {};
      // The program name.
      shared_ptr<string> episodeName_ {};
      // The node type. Valid values: 
      //          
      // - **Resource**: video source. If you select Resource, you must also set the request parameters Episode.N.ResourceId and Episode.N.SwitchType.
      // - **Component**: component. If you select Component, you must also set the request parameter Episode.N.ComponentId.N.
      // 
      // 
      // > 
      // > - When Resource is selected and the referenced resource contains a VodUrl (video-on-demand file), EndTime - StartTime cannot exceed the actual playback duration (in seconds) of the VOD file. Otherwise, InvalidParameter.EndTime is returned.
      shared_ptr<string> episodeType_ {};
      // The video source ID.
      // >Notice: This parameter is valid and required when Episode.N.EpisodeType is set to **Resource**.
      //   
      //  This parameter is not applicable when Episode.N.EpisodeType is set to **Component**.
      // 
      // If you added the video source by calling the [AddCasterVideoResource operation](https://help.aliyun.com/document_detail/60250.html), check the ResourceId value returned by the AddCasterVideoResource operation.
      shared_ptr<string> resourceId_ {};
      // The start time. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC). This parameter is required. If not specified, MissingParameter is returned.
      shared_ptr<string> startTime_ {};
      // The switch policy. Valid values:
      // >Notice: This parameter is valid only when Episode.N.EpisodeType is set to **Resource**.
      // 
      //          
      // - **TimeFirst**: time first. Live video sources can only use the time first policy. 
      // - **ContentFirst**: content first.
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
    // The production studio ID.
    // 
    // - If you created the production studio by calling the [CreateCaster operation](https://help.aliyun.com/document_detail/2848009.html), check the CasterId value returned by the CreateCaster operation.
    // 
    // - If you created the production studio in the ApsaraVideo Live console, navigate to **ApsaraVideo Live console** > **Production Studio** > **Cloud Production Studio** to view the production studio name.
    // 
    // > The production studio name in the production studio list on the Cloud Production Studio page is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The program list information.
    // 
    // This parameter is required.
    shared_ptr<vector<AddCasterProgramRequest::Episode>> episode_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
