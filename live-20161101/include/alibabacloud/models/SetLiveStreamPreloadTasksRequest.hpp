// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamPreloadTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamPreloadTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayUrl, playUrl_);
      DARABONBA_PTR_TO_JSON(PreloadedEndTime, preloadedEndTime_);
      DARABONBA_PTR_TO_JSON(PreloadedStartTime, preloadedStartTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamPreloadTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayUrl, playUrl_);
      DARABONBA_PTR_FROM_JSON(PreloadedEndTime, preloadedEndTime_);
      DARABONBA_PTR_FROM_JSON(PreloadedStartTime, preloadedStartTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetLiveStreamPreloadTasksRequest() = default ;
    SetLiveStreamPreloadTasksRequest(const SetLiveStreamPreloadTasksRequest &) = default ;
    SetLiveStreamPreloadTasksRequest(SetLiveStreamPreloadTasksRequest &&) = default ;
    SetLiveStreamPreloadTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamPreloadTasksRequest() = default ;
    SetLiveStreamPreloadTasksRequest& operator=(const SetLiveStreamPreloadTasksRequest &) = default ;
    SetLiveStreamPreloadTasksRequest& operator=(SetLiveStreamPreloadTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && this->domainName_ == nullptr && this->ownerId_ == nullptr && this->playUrl_ == nullptr && this->preloadedEndTime_ == nullptr && this->preloadedStartTime_ == nullptr
        && this->regionId_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline SetLiveStreamPreloadTasksRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveStreamPreloadTasksRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveStreamPreloadTasksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playUrl Field Functions 
    bool hasPlayUrl() const { return this->playUrl_ != nullptr;};
    void deletePlayUrl() { this->playUrl_ = nullptr;};
    inline string getPlayUrl() const { DARABONBA_PTR_GET_DEFAULT(playUrl_, "") };
    inline SetLiveStreamPreloadTasksRequest& setPlayUrl(string playUrl) { DARABONBA_PTR_SET_VALUE(playUrl_, playUrl) };


    // preloadedEndTime Field Functions 
    bool hasPreloadedEndTime() const { return this->preloadedEndTime_ != nullptr;};
    void deletePreloadedEndTime() { this->preloadedEndTime_ = nullptr;};
    inline string getPreloadedEndTime() const { DARABONBA_PTR_GET_DEFAULT(preloadedEndTime_, "") };
    inline SetLiveStreamPreloadTasksRequest& setPreloadedEndTime(string preloadedEndTime) { DARABONBA_PTR_SET_VALUE(preloadedEndTime_, preloadedEndTime) };


    // preloadedStartTime Field Functions 
    bool hasPreloadedStartTime() const { return this->preloadedStartTime_ != nullptr;};
    void deletePreloadedStartTime() { this->preloadedStartTime_ = nullptr;};
    inline string getPreloadedStartTime() const { DARABONBA_PTR_GET_DEFAULT(preloadedStartTime_, "") };
    inline SetLiveStreamPreloadTasksRequest& setPreloadedStartTime(string preloadedStartTime) { DARABONBA_PTR_SET_VALUE(preloadedStartTime_, preloadedStartTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLiveStreamPreloadTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The acceleration region where you want to prefetch the live content. Valid values:
    // 
    // *   domestic: regions in the Chinese mainland.
    // *   overseas: regions outside the Chinese mainland.
    // *   global: regions in and outside the Chinese mainland.
    // 
    // If you do not specify this parameter, the acceleration region configured for the domain name is used.
    shared_ptr<string> area_ {};
    // The streaming domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The streaming URL. You can specify up to 100 streaming URLs in a request. Separate multiple streaming URLs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> playUrl_ {};
    // The end time of the prefetch task. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2016-06-30T19:00:00Z. The interval between the start time and end time cannot exceed 6 hours.
    shared_ptr<string> preloadedEndTime_ {};
    // The start time of the prefetch task. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. Example: 2016-06-29T19:00:00Z. If you do not specify this parameter, the prefetch task runs for 1 hour by default.
    shared_ptr<string> preloadedStartTime_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
