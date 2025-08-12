// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEDELAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEDELAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveDelayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveDelayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TaskTriggerMode, taskTriggerMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveDelayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TaskTriggerMode, taskTriggerMode_);
    };
    UpdateLiveDelayConfigRequest() = default ;
    UpdateLiveDelayConfigRequest(const UpdateLiveDelayConfigRequest &) = default ;
    UpdateLiveDelayConfigRequest(UpdateLiveDelayConfigRequest &&) = default ;
    UpdateLiveDelayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveDelayConfigRequest() = default ;
    UpdateLiveDelayConfigRequest& operator=(const UpdateLiveDelayConfigRequest &) = default ;
    UpdateLiveDelayConfigRequest& operator=(UpdateLiveDelayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->delayTime_ != nullptr && this->domain_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->stream_ != nullptr
        && this->taskTriggerMode_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline UpdateLiveDelayConfigRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline UpdateLiveDelayConfigRequest& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateLiveDelayConfigRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveDelayConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveDelayConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline UpdateLiveDelayConfigRequest& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // taskTriggerMode Field Functions 
    bool hasTaskTriggerMode() const { return this->taskTriggerMode_ != nullptr;};
    void deleteTaskTriggerMode() { this->taskTriggerMode_ = nullptr;};
    inline string taskTriggerMode() const { DARABONBA_PTR_GET_DEFAULT(taskTriggerMode_, "") };
    inline UpdateLiveDelayConfigRequest& setTaskTriggerMode(string taskTriggerMode) { DARABONBA_PTR_SET_VALUE(taskTriggerMode_, taskTriggerMode) };


  protected:
    // The name of the application to which the live stream belongs. You can specify an asterisk (\\*) as the value to match all applications that belong to the domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The duration for which the playback of the live stream is delayed. The value must be an integer. Valid values: 16 to 3600. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the live stream. You can use the wildcard (\\*) to specify all streams of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> stream_ = nullptr;
    // The trigger mode. Valid values:
    // 
    // *   **PUBLISH_ONLY**: Stream delay can be triggered only by specifying the stream delay parameter in the ingest URL.
    // *   **CONFIG_ONLY**: Stream delay can be triggered only by the stream delay configuration.
    // *   **PUBLISH_CONFIG**: Stream delay can be triggered by the stream delay parameter in the ingest URL or the stream delay configuration. The stream delay parameter takes precedence over the stream delay configuration.
    std::shared_ptr<string> taskTriggerMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
