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
        && this->domainName_ == nullptr && this->ignoreTranscode_ == nullptr && this->ownerId_ == nullptr && this->partDuration_ == nullptr && this->protocol_ == nullptr
        && this->regionId_ == nullptr && this->segmentDuration_ == nullptr && this->segmentNum_ == nullptr && this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddLivePackageConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLivePackageConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ignoreTranscode Field Functions 
    bool hasIgnoreTranscode() const { return this->ignoreTranscode_ != nullptr;};
    void deleteIgnoreTranscode() { this->ignoreTranscode_ = nullptr;};
    inline bool getIgnoreTranscode() const { DARABONBA_PTR_GET_DEFAULT(ignoreTranscode_, false) };
    inline AddLivePackageConfigRequest& setIgnoreTranscode(bool ignoreTranscode) { DARABONBA_PTR_SET_VALUE(ignoreTranscode_, ignoreTranscode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLivePackageConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // partDuration Field Functions 
    bool hasPartDuration() const { return this->partDuration_ != nullptr;};
    void deletePartDuration() { this->partDuration_ = nullptr;};
    inline int32_t getPartDuration() const { DARABONBA_PTR_GET_DEFAULT(partDuration_, 0) };
    inline AddLivePackageConfigRequest& setPartDuration(int32_t partDuration) { DARABONBA_PTR_SET_VALUE(partDuration_, partDuration) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddLivePackageConfigRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLivePackageConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int32_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
    inline AddLivePackageConfigRequest& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // segmentNum Field Functions 
    bool hasSegmentNum() const { return this->segmentNum_ != nullptr;};
    void deleteSegmentNum() { this->segmentNum_ = nullptr;};
    inline int32_t getSegmentNum() const { DARABONBA_PTR_GET_DEFAULT(segmentNum_, 0) };
    inline AddLivePackageConfigRequest& setSegmentNum(int32_t segmentNum) { DARABONBA_PTR_SET_VALUE(segmentNum_, segmentNum) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline AddLivePackageConfigRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The AppName must match the AppName in the ingest URL for the template to take effect. The AppName can be up to 255 characters in length and can contain digits, uppercase letters, lowercase letters, hyphens (-), and underscores (_). A hyphen or an underscore cannot be the first character. You can also set this parameter to a single asterisk (\\*) to match all AppNames.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The live streaming domain name. This is the primary playback domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to ignore transcoded streams. Valid values:
    // 
    // - **true** (default): Ignore transcoded streams.
    // 
    // - **false**: Do not ignore transcoded streams.
    shared_ptr<bool> ignoreTranscode_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The length of the part segment, in milliseconds.
    // 
    // - If SegmentDuration is 1 s, the valid values are 100 to 500. The default value is 350.
    // 
    // - If SegmentDuration is 2 s, the valid values are 100 to 1000. The default value is 700.
    // 
    // - This parameter is valid only when you set Protocol to LLHLS_\\*.
    shared_ptr<int32_t> partDuration_ {};
    // The live streaming protocol and container format. Valid values:
    // 
    // - **HLS_CMAF**
    // 
    // - **LLHLS_TS**
    //   (low latency)
    // 
    // - **LLHLS_CMAF** (low latency)
    // 
    // - **DASH_CMAF**
    // 
    // - **HLSDASH_CMAF**
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The segment length, in seconds.
    // 
    // - If you set Protocol to HLS_CMAF, the valid values are 1 to 10. The default value is 5.
    // 
    // - If you set Protocol to LLHLS_\\*, the valid values are 1 to 2. The default value is 1.
    shared_ptr<int32_t> segmentDuration_ {};
    // The number of M3U8 segments for live streaming.
    // 
    // - Valid values: 3 to 10.
    // 
    // - Default value: 3.
    shared_ptr<int32_t> segmentNum_ {};
    // The StreamName must match the StreamName in the ingest URL for the template to take effect. The StreamName can be up to 255 characters in length and can contain digits, uppercase letters, lowercase letters, hyphens (-), and underscores (_). A hyphen or an underscore cannot be the first character. You can also set this parameter to a single asterisk (\\*) to match all StreamNames.
    // 
    // This parameter is required.
    shared_ptr<string> streamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
