// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENLIVESHIFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENLIVESHIFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class OpenLiveShiftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenLiveShiftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Vision, vision_);
    };
    friend void from_json(const Darabonba::Json& j, OpenLiveShiftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Vision, vision_);
    };
    OpenLiveShiftRequest() = default ;
    OpenLiveShiftRequest(const OpenLiveShiftRequest &) = default ;
    OpenLiveShiftRequest(OpenLiveShiftRequest &&) = default ;
    OpenLiveShiftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenLiveShiftRequest() = default ;
    OpenLiveShiftRequest& operator=(const OpenLiveShiftRequest &) = default ;
    OpenLiveShiftRequest& operator=(OpenLiveShiftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domainName_ != nullptr && this->duration_ != nullptr && this->ignoreTranscode_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->streamName_ != nullptr && this->vision_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OpenLiveShiftRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline OpenLiveShiftRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline OpenLiveShiftRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ignoreTranscode Field Functions 
    bool hasIgnoreTranscode() const { return this->ignoreTranscode_ != nullptr;};
    void deleteIgnoreTranscode() { this->ignoreTranscode_ = nullptr;};
    inline bool ignoreTranscode() const { DARABONBA_PTR_GET_DEFAULT(ignoreTranscode_, false) };
    inline OpenLiveShiftRequest& setIgnoreTranscode(bool ignoreTranscode) { DARABONBA_PTR_SET_VALUE(ignoreTranscode_, ignoreTranscode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline OpenLiveShiftRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OpenLiveShiftRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline OpenLiveShiftRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // vision Field Functions 
    bool hasVision() const { return this->vision_ != nullptr;};
    void deleteVision() { this->vision_ = nullptr;};
    inline int32_t vision() const { DARABONBA_PTR_GET_DEFAULT(vision_, 0) };
    inline OpenLiveShiftRequest& setVision(int32_t vision) { DARABONBA_PTR_SET_VALUE(vision_, vision) };


  protected:
    // The name of the application to which the live stream belongs. You can specify an asterisk (\\*) as the value to match all applications under the domain name. You can view the application name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    std::shared_ptr<string> appName_ = nullptr;
    // The streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The length of a TS segment for HTTP Live Streaming (HLS). Unit: seconds.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // Specifies whether to disable time shifting for the transcoded stream. Valid values:
    // 
    // *   **true**: disables time shifting for the transcoded stream.
    // *   **false**: enables time shifting for the transcoded stream.
    // 
    // Default value: true.
    std::shared_ptr<bool> ignoreTranscode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the live stream. You can specify an asterisk (\\*) as the value to match all streams in the application. You can view the stream name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    std::shared_ptr<string> streamName_ = nullptr;
    // The duration for which data is retained. Default value: 7. Unit: day.
    std::shared_ptr<int32_t> vision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
