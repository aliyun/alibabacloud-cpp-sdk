// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODYLIVEPRIVATELINEAVAILGASLIVEPRIVATELINEAVAILGA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODYLIVEPRIVATELINEAVAILGASLIVEPRIVATELINEAVAILGA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerationArea, accelerationArea_);
      DARABONBA_PTR_TO_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingStatus, bindingStatus_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(VideoCenter, videoCenter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerationArea, accelerationArea_);
      DARABONBA_PTR_FROM_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingStatus, bindingStatus_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(VideoCenter, videoCenter_);
    };
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA() = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA(const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA &) = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA(DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA &&) = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA() = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& operator=(const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA &) = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& operator=(DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerationArea_ == nullptr
        && return this->accelerationType_ == nullptr && return this->appName_ == nullptr && return this->bindingStatus_ == nullptr && return this->domainName_ == nullptr && return this->IP_ == nullptr
        && return this->instanceId_ == nullptr && return this->status_ == nullptr && return this->streamName_ == nullptr && return this->uid_ == nullptr && return this->videoCenter_ == nullptr; };
    // accelerationArea Field Functions 
    bool hasAccelerationArea() const { return this->accelerationArea_ != nullptr;};
    void deleteAccelerationArea() { this->accelerationArea_ = nullptr;};
    inline string accelerationArea() const { DARABONBA_PTR_GET_DEFAULT(accelerationArea_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setAccelerationArea(string accelerationArea) { DARABONBA_PTR_SET_VALUE(accelerationArea_, accelerationArea) };


    // accelerationType Field Functions 
    bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
    void deleteAccelerationType() { this->accelerationType_ = nullptr;};
    inline string accelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingStatus Field Functions 
    bool hasBindingStatus() const { return this->bindingStatus_ != nullptr;};
    void deleteBindingStatus() { this->bindingStatus_ = nullptr;};
    inline string bindingStatus() const { DARABONBA_PTR_GET_DEFAULT(bindingStatus_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setBindingStatus(string bindingStatus) { DARABONBA_PTR_SET_VALUE(bindingStatus_, bindingStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // videoCenter Field Functions 
    bool hasVideoCenter() const { return this->videoCenter_ != nullptr;};
    void deleteVideoCenter() { this->videoCenter_ = nullptr;};
    inline string videoCenter() const { DARABONBA_PTR_GET_DEFAULT(videoCenter_, "") };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA& setVideoCenter(string videoCenter) { DARABONBA_PTR_SET_VALUE(videoCenter_, videoCenter) };


  protected:
    // The acceleration channel.
    std::shared_ptr<string> accelerationArea_ = nullptr;
    // The acceleration type. Valid values:
    // 
    // *   play: streaming acceleration
    // *   publish: stream ingest acceleration
    std::shared_ptr<string> accelerationType_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // Indicates whether the GA instance is bound to an acceleration circuit. Valid values:
    // 
    // *   yes
    // *   no
    std::shared_ptr<string> bindingStatus_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The accelerated IP address.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the GA instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the GA instance. Valid values:
    // 
    // *   active: The GA instance is available.
    // *   inactive: The GA instance is unavailable.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The user ID (UID).
    std::shared_ptr<string> uid_ = nullptr;
    // The live center.
    std::shared_ptr<string> videoCenter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
