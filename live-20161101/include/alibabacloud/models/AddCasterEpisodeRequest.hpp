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
        && this->componentId_ == nullptr && this->endTime_ == nullptr && this->episodeName_ == nullptr && this->episodeType_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->startTime_ == nullptr && this->switchType_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterEpisodeRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline const vector<string> & getComponentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
    inline vector<string> getComponentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
    inline AddCasterEpisodeRequest& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
    inline AddCasterEpisodeRequest& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AddCasterEpisodeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // episodeName Field Functions 
    bool hasEpisodeName() const { return this->episodeName_ != nullptr;};
    void deleteEpisodeName() { this->episodeName_ = nullptr;};
    inline string getEpisodeName() const { DARABONBA_PTR_GET_DEFAULT(episodeName_, "") };
    inline AddCasterEpisodeRequest& setEpisodeName(string episodeName) { DARABONBA_PTR_SET_VALUE(episodeName_, episodeName) };


    // episodeType Field Functions 
    bool hasEpisodeType() const { return this->episodeType_ != nullptr;};
    void deleteEpisodeType() { this->episodeType_ = nullptr;};
    inline string getEpisodeType() const { DARABONBA_PTR_GET_DEFAULT(episodeType_, "") };
    inline AddCasterEpisodeRequest& setEpisodeType(string episodeType) { DARABONBA_PTR_SET_VALUE(episodeType_, episodeType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterEpisodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterEpisodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AddCasterEpisodeRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddCasterEpisodeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline string getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
    inline AddCasterEpisodeRequest& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


  protected:
    // The ID of the production studio.
    // 
    // - If you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the CasterId parameter that is returned.
    // 
    // - If you create a production studio in the LIVE console, go to the **LIVE Console**> **Production Studio** > **Production Studio** page to view the ID.
    // 
    // > The name of the production studio in the production studio list serves as the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // A list of component IDs. The components are layered from bottom to top in the specified order.
    // 
    // If you add a component by calling the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation, check the value of the ComponentId parameter that is returned.
    // 
    // - This parameter is required and applies only when the resource type is **Component**.
    // 
    // - This parameter is optional when the resource type is **Resource**. If you specify this parameter, the component is attached to the video source and they are switched synchronously.
    // 
    // > N specifies the sequence number of a component ID. For example, **ComponentId.1** specifies the first component ID and **ComponentId.2** specifies the second component ID.
    shared_ptr<vector<string>> componentId_ {};
    // The end time. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The name of the episode.
    shared_ptr<string> episodeName_ {};
    // The node type. Valid values:
    // 
    // - **Resource**: A video source. If you set this parameter to Resource, you must also specify the ResourceId and SwitchType parameters.
    // 
    // - **Component**: A component.
    // 
    // This parameter is required.
    shared_ptr<string> episodeType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the video source.
    // 
    // >Notice: 
    // 
    // This parameter is required and applies only when EpisodeType is set to Resource.
    // 
    // 
    // 
    // If you add a video source by calling the [AddCasterVideoResource](https://help.aliyun.com/document_detail/2848020.html) operation, check the value of the ResourceId parameter that is returned.
    shared_ptr<string> resourceId_ {};
    // The start time. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The switch policy. Valid values:
    // 
    // >Notice: 
    // 
    // This parameter applies only when EpisodeType is set to Resource.
    // 
    // 
    // 
    // - **TimeFirst**: Time first.
    // 
    // - **ContentFirst**: Content first.
    // 
    // > For more information about video sources, see [Add a video source](https://help.aliyun.com/document_detail/66094.html).
    // 
    // This parameter is required.
    shared_ptr<string> switchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
