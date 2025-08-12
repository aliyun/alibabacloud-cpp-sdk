// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPRIVATELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPRIVATELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLivePrivateLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePrivateLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerationArea, accelerationArea_);
      DARABONBA_PTR_TO_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reuse, reuse_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(VideoCenter, videoCenter_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePrivateLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerationArea, accelerationArea_);
      DARABONBA_PTR_FROM_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reuse, reuse_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(VideoCenter, videoCenter_);
    };
    CreateLivePrivateLineRequest() = default ;
    CreateLivePrivateLineRequest(const CreateLivePrivateLineRequest &) = default ;
    CreateLivePrivateLineRequest(CreateLivePrivateLineRequest &&) = default ;
    CreateLivePrivateLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePrivateLineRequest() = default ;
    CreateLivePrivateLineRequest& operator=(const CreateLivePrivateLineRequest &) = default ;
    CreateLivePrivateLineRequest& operator=(CreateLivePrivateLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accelerationArea_ != nullptr
        && this->accelerationType_ != nullptr && this->appName_ != nullptr && this->domainName_ != nullptr && this->instanceId_ != nullptr && this->maxBandwidth_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->reuse_ != nullptr && this->streamName_ != nullptr && this->videoCenter_ != nullptr; };
    // accelerationArea Field Functions 
    bool hasAccelerationArea() const { return this->accelerationArea_ != nullptr;};
    void deleteAccelerationArea() { this->accelerationArea_ = nullptr;};
    inline string accelerationArea() const { DARABONBA_PTR_GET_DEFAULT(accelerationArea_, "") };
    inline CreateLivePrivateLineRequest& setAccelerationArea(string accelerationArea) { DARABONBA_PTR_SET_VALUE(accelerationArea_, accelerationArea) };


    // accelerationType Field Functions 
    bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
    void deleteAccelerationType() { this->accelerationType_ = nullptr;};
    inline string accelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
    inline CreateLivePrivateLineRequest& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateLivePrivateLineRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateLivePrivateLineRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateLivePrivateLineRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxBandwidth Field Functions 
    bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
    void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
    inline string maxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, "") };
    inline CreateLivePrivateLineRequest& setMaxBandwidth(string maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLivePrivateLineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLivePrivateLineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reuse Field Functions 
    bool hasReuse() const { return this->reuse_ != nullptr;};
    void deleteReuse() { this->reuse_ = nullptr;};
    inline string reuse() const { DARABONBA_PTR_GET_DEFAULT(reuse_, "") };
    inline CreateLivePrivateLineRequest& setReuse(string reuse) { DARABONBA_PTR_SET_VALUE(reuse_, reuse) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline CreateLivePrivateLineRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // videoCenter Field Functions 
    bool hasVideoCenter() const { return this->videoCenter_ != nullptr;};
    void deleteVideoCenter() { this->videoCenter_ = nullptr;};
    inline string videoCenter() const { DARABONBA_PTR_GET_DEFAULT(videoCenter_, "") };
    inline CreateLivePrivateLineRequest& setVideoCenter(string videoCenter) { DARABONBA_PTR_SET_VALUE(videoCenter_, videoCenter) };


  protected:
    // The acceleration channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> accelerationArea_ = nullptr;
    // The acceleration type. Valid values:
    // 
    // *   play: streaming acceleration
    // *   publish: stream ingest acceleration
    // 
    // This parameter is required.
    std::shared_ptr<string> accelerationType_ = nullptr;
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The acceleration channel that you want to reuse. This parameter is required if Reuse is set to yes.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The accelerated bandwidth. Unit: Mbit/s. This parameter is required if Reuse is set to no.
    std::shared_ptr<string> maxBandwidth_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to reuse an existing acceleration channel. Valid values:
    // 
    // *   yes: reuses an existing acceleration channel.
    // *   no: creates a new acceleration channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> reuse_ = nullptr;
    // The name of the live stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
    // The live center. Valid values: cn-beijing, cn-shanghai, cn-shenzhen, cn-qingdao, ap-northeast-1, ap-southeast-5, eu-central-1, and ap-southeast-1, which indicate China (Beijing), China (Shanghai), China (Shenzhen), China (Qingdao), Japan (Tokyo), Indonesia (Jakarta), Germany (Frankfurt), and Singapore, respectively.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoCenter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
