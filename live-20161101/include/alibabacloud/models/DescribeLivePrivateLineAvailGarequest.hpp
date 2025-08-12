// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAvailGARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAvailGARequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerationArea, accelerationArea_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IsGaInstance, isGaInstance_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(VideoCenter, videoCenter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAvailGARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerationArea, accelerationArea_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IsGaInstance, isGaInstance_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(VideoCenter, videoCenter_);
    };
    DescribeLivePrivateLineAvailGARequest() = default ;
    DescribeLivePrivateLineAvailGARequest(const DescribeLivePrivateLineAvailGARequest &) = default ;
    DescribeLivePrivateLineAvailGARequest(DescribeLivePrivateLineAvailGARequest &&) = default ;
    DescribeLivePrivateLineAvailGARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAvailGARequest() = default ;
    DescribeLivePrivateLineAvailGARequest& operator=(const DescribeLivePrivateLineAvailGARequest &) = default ;
    DescribeLivePrivateLineAvailGARequest& operator=(DescribeLivePrivateLineAvailGARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accelerationArea_ != nullptr
        && this->appName_ != nullptr && this->domainName_ != nullptr && this->isGaInstance_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->streamName_ != nullptr && this->videoCenter_ != nullptr; };
    // accelerationArea Field Functions 
    bool hasAccelerationArea() const { return this->accelerationArea_ != nullptr;};
    void deleteAccelerationArea() { this->accelerationArea_ = nullptr;};
    inline string accelerationArea() const { DARABONBA_PTR_GET_DEFAULT(accelerationArea_, "") };
    inline DescribeLivePrivateLineAvailGARequest& setAccelerationArea(string accelerationArea) { DARABONBA_PTR_SET_VALUE(accelerationArea_, accelerationArea) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLivePrivateLineAvailGARequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLivePrivateLineAvailGARequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // isGaInstance Field Functions 
    bool hasIsGaInstance() const { return this->isGaInstance_ != nullptr;};
    void deleteIsGaInstance() { this->isGaInstance_ = nullptr;};
    inline string isGaInstance() const { DARABONBA_PTR_GET_DEFAULT(isGaInstance_, "") };
    inline DescribeLivePrivateLineAvailGARequest& setIsGaInstance(string isGaInstance) { DARABONBA_PTR_SET_VALUE(isGaInstance_, isGaInstance) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLivePrivateLineAvailGARequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLivePrivateLineAvailGARequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLivePrivateLineAvailGARequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // videoCenter Field Functions 
    bool hasVideoCenter() const { return this->videoCenter_ != nullptr;};
    void deleteVideoCenter() { this->videoCenter_ = nullptr;};
    inline string videoCenter() const { DARABONBA_PTR_GET_DEFAULT(videoCenter_, "") };
    inline DescribeLivePrivateLineAvailGARequest& setVideoCenter(string videoCenter) { DARABONBA_PTR_SET_VALUE(videoCenter_, videoCenter) };


  protected:
    // The acceleration channel.
    std::shared_ptr<string> accelerationArea_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether to query Global Accelerator (GA) instances. Valid values:
    // 
    // *   yes: queries the status of GA instances.
    // *   no: queries the binding information between GA instances and acceleration circuits.
    // 
    // This parameter is required.
    std::shared_ptr<string> isGaInstance_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The live center. Valid values: cn-beijing, cn-shanghai, cn-shenzhen, cn-qingdao, ap-northeast-1, ap-southeast-5, eu-central-1, ap-southeast-1, and ap-south-1. cn-beijing indicates China (Beijing). cn-shanghai indicates China (Shanghai). cn-shenzhen indicates China (Shenzhen). cn-qingdao indicates China (Qingdao). ap-northeast-1 indicates Japan (Tokyo). ap-southeast-5 indicates Indonesia (Jakarta). eu-central-1 indicates Germany (Frankfurt). ap-southeast-1 indicates Singapore.
    std::shared_ptr<string> videoCenter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
