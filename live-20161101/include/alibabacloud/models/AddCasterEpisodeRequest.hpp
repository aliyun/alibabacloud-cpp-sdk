// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTEREPISODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTEREPISODEREQUEST_HPP_
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
  class AddCasterEpisodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterEpisodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EpisodeName, episodeName_);
      DARABONBA_PTR_TO_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterEpisodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EpisodeName, episodeName_);
      DARABONBA_PTR_FROM_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
    };
    AddCasterEpisodeRequest() = default ;
    AddCasterEpisodeRequest(const AddCasterEpisodeRequest &) = default ;
    AddCasterEpisodeRequest(AddCasterEpisodeRequest &&) = default ;
    AddCasterEpisodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterEpisodeRequest() = default ;
    AddCasterEpisodeRequest& operator=(const AddCasterEpisodeRequest &) = default ;
    AddCasterEpisodeRequest& operator=(AddCasterEpisodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->componentId_ == nullptr && return this->endTime_ == nullptr && return this->episodeName_ == nullptr && return this->episodeType_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceId_ == nullptr && return this->startTime_ == nullptr && return this->switchType_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterEpisodeRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline const vector<string> & componentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
    inline vector<string> componentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
    inline AddCasterEpisodeRequest& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
    inline AddCasterEpisodeRequest& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AddCasterEpisodeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // episodeName Field Functions 
    bool hasEpisodeName() const { return this->episodeName_ != nullptr;};
    void deleteEpisodeName() { this->episodeName_ = nullptr;};
    inline string episodeName() const { DARABONBA_PTR_GET_DEFAULT(episodeName_, "") };
    inline AddCasterEpisodeRequest& setEpisodeName(string episodeName) { DARABONBA_PTR_SET_VALUE(episodeName_, episodeName) };


    // episodeType Field Functions 
    bool hasEpisodeType() const { return this->episodeType_ != nullptr;};
    void deleteEpisodeType() { this->episodeType_ = nullptr;};
    inline string episodeType() const { DARABONBA_PTR_GET_DEFAULT(episodeType_, "") };
    inline AddCasterEpisodeRequest& setEpisodeType(string episodeType) { DARABONBA_PTR_SET_VALUE(episodeType_, episodeType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterEpisodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterEpisodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AddCasterEpisodeRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddCasterEpisodeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline string switchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
    inline AddCasterEpisodeRequest& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The components. Components in the production studio are listed from the bottom to the top in an array.
    // 
    // If a component was added by calling the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation, check the value of the response parameter ComponentId to obtain the component ID.
    // 
    // *   This parameter takes effect and is required when the EpisodeType parameter is set to **Component**.
    // *   This parameter is optional when the EpisodeType parameter is set to **Resource**. In this case, if this parameter is specified, the components are bound to and switched together with video resources.
    // 
    // >  The variable N specifies the sequence number of the component. For example, **ComponentId.1** specifies the ID of the first component and **ComponentId.2** specifies the ID of the second component.
    std::shared_ptr<vector<string>> componentId_ = nullptr;
    // The time when the episode ends. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> episodeName_ = nullptr;
    // The type of the episode. Valid values:
    // 
    // *   **Resource**: a video resource.
    // *   **Component**: a component.
    // 
    // This parameter is required.
    std::shared_ptr<string> episodeType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the video resource.
    // 
    // >  This parameter takes effect and is required when the EpisodeType parameter is set to Resource.
    // 
    // \\
    // If the video resource was added by calling the [AddCasterVideoResource](https://help.aliyun.com/document_detail/2848020.html) operation, check the value of the response parameter ResourceId to obtain the ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The time when the episode starts. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The policy for switching episodes. Valid values:
    // 
    // *   **TimeFirst**: The episode starts when the preceding episode ends and ends when the next episode starts. If no next episode exists, the episode keeps repeating until a new episode is added or the production studio stops.
    // *   **ContentFirst**: The episode starts and ends as scheduled.
    // 
    // This parameter takes effect only when the EpisodeType parameter is set to Resource.
    // 
    // >  This parameter must be set to TimeFirst when the video resource is a live stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> switchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
