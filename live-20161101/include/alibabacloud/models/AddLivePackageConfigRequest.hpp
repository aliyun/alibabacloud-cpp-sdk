// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEPACKAGECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEPACKAGECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLivePackageConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLivePackageConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PartDuration, partDuration_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_TO_JSON(SegmentNum, segmentNum_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, AddLivePackageConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PartDuration, partDuration_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_FROM_JSON(SegmentNum, segmentNum_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    AddLivePackageConfigRequest() = default ;
    AddLivePackageConfigRequest(const AddLivePackageConfigRequest &) = default ;
    AddLivePackageConfigRequest(AddLivePackageConfigRequest &&) = default ;
    AddLivePackageConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLivePackageConfigRequest() = default ;
    AddLivePackageConfigRequest& operator=(const AddLivePackageConfigRequest &) = default ;
    AddLivePackageConfigRequest& operator=(AddLivePackageConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->ignoreTranscode_ == nullptr && return this->ownerId_ == nullptr && return this->partDuration_ == nullptr && return this->protocol_ == nullptr
        && return this->regionId_ == nullptr && return this->segmentDuration_ == nullptr && return this->segmentNum_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddLivePackageConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLivePackageConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ignoreTranscode Field Functions 
    bool hasIgnoreTranscode() const { return this->ignoreTranscode_ != nullptr;};
    void deleteIgnoreTranscode() { this->ignoreTranscode_ = nullptr;};
    inline bool ignoreTranscode() const { DARABONBA_PTR_GET_DEFAULT(ignoreTranscode_, false) };
    inline AddLivePackageConfigRequest& setIgnoreTranscode(bool ignoreTranscode) { DARABONBA_PTR_SET_VALUE(ignoreTranscode_, ignoreTranscode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLivePackageConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // partDuration Field Functions 
    bool hasPartDuration() const { return this->partDuration_ != nullptr;};
    void deletePartDuration() { this->partDuration_ = nullptr;};
    inline int32_t partDuration() const { DARABONBA_PTR_GET_DEFAULT(partDuration_, 0) };
    inline AddLivePackageConfigRequest& setPartDuration(int32_t partDuration) { DARABONBA_PTR_SET_VALUE(partDuration_, partDuration) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddLivePackageConfigRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLivePackageConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int32_t segmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
    inline AddLivePackageConfigRequest& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // segmentNum Field Functions 
    bool hasSegmentNum() const { return this->segmentNum_ != nullptr;};
    void deleteSegmentNum() { this->segmentNum_ = nullptr;};
    inline int32_t segmentNum() const { DARABONBA_PTR_GET_DEFAULT(segmentNum_, 0) };
    inline AddLivePackageConfigRequest& setSegmentNum(int32_t segmentNum) { DARABONBA_PTR_SET_VALUE(segmentNum_, segmentNum) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline AddLivePackageConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The application name. The value of this parameter must be the same as the application name that is specified in the ingest URL. Otherwise, the configuration does not take effect. The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name cannot start with a hyphen (-) or underscore (_). You can also specify an asterisk (\\*) as the value to match all applications.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether to ignore the transcoded stream. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> ignoreTranscode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The part length. Unit: milliseconds.
    // 
    // *   If the value of SegmentDuration is 1, the valid values of this parameter are 100 to 500 and the default value of this parameter is 350.
    // *   If the value of SegmentDuration is 2, the valid values of this parameter are 100 to 1000 and the default value of this parameter is 700.
    // *   This parameter takes effect only if Protocol is set to LLHLS_TS or LLHLS_CMAF.
    std::shared_ptr<int32_t> partDuration_ = nullptr;
    // The streaming protocol and encapsulation format. Valid values:
    // 
    // *   **HLS_CMAF**
    // *   **LLHLS_TS** (low latency)
    // *   **LLHLS_CMAF** (low latency)
    // *   **DASH_CMAF**
    // *   **HLSDASH_CMAF**
    // 
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The segment length. Unit: seconds.
    // 
    // *   If Protocol is set to HLS_CMAF: Valid values: 1 to 10. Default value: 5.
    // *   If Protocol is set to LLHLS_TS or LLHLS_CMAF: Valid values: 1 to 2. Default value: 1.
    std::shared_ptr<int32_t> segmentDuration_ = nullptr;
    // The number of segments.
    // 
    // *   Valid values: 3 to 10.
    // *   Default value: 3.
    std::shared_ptr<int32_t> segmentNum_ = nullptr;
    // The stream name. The value of this parameter must be the same as the stream name that is specified in the ingest URL. Otherwise, the configuration does not take effect. The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name cannot start with a hyphen (-) or underscore (_). You can also specify an asterisk (\\*) as the value to match all streams.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
