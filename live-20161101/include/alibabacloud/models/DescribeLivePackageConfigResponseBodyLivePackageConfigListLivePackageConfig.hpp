// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPACKAGECONFIGRESPONSEBODYLIVEPACKAGECONFIGLISTLIVEPACKAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPACKAGECONFIGRESPONSEBODYLIVEPACKAGECONFIGLISTLIVEPACKAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_TO_JSON(PartDuration, partDuration_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_TO_JSON(SegmentNum, segmentNum_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_FROM_JSON(PartDuration, partDuration_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
      DARABONBA_PTR_FROM_JSON(SegmentNum, segmentNum_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig() = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig(const DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig &) = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig(DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig &&) = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig() = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& operator=(const DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig &) = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& operator=(DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domainName_ != nullptr && this->ignoreTranscode_ != nullptr && this->partDuration_ != nullptr && this->protocol_ != nullptr && this->segmentDuration_ != nullptr
        && this->segmentNum_ != nullptr && this->streamName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ignoreTranscode Field Functions 
    bool hasIgnoreTranscode() const { return this->ignoreTranscode_ != nullptr;};
    void deleteIgnoreTranscode() { this->ignoreTranscode_ = nullptr;};
    inline bool ignoreTranscode() const { DARABONBA_PTR_GET_DEFAULT(ignoreTranscode_, false) };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setIgnoreTranscode(bool ignoreTranscode) { DARABONBA_PTR_SET_VALUE(ignoreTranscode_, ignoreTranscode) };


    // partDuration Field Functions 
    bool hasPartDuration() const { return this->partDuration_ != nullptr;};
    void deletePartDuration() { this->partDuration_ = nullptr;};
    inline int32_t partDuration() const { DARABONBA_PTR_GET_DEFAULT(partDuration_, 0) };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setPartDuration(int32_t partDuration) { DARABONBA_PTR_SET_VALUE(partDuration_, partDuration) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int32_t segmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    // segmentNum Field Functions 
    bool hasSegmentNum() const { return this->segmentNum_ != nullptr;};
    void deleteSegmentNum() { this->segmentNum_ = nullptr;};
    inline int32_t segmentNum() const { DARABONBA_PTR_GET_DEFAULT(segmentNum_, 0) };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setSegmentNum(int32_t segmentNum) { DARABONBA_PTR_SET_VALUE(segmentNum_, segmentNum) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // Indicates whether the transcoded stream is ignored. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> ignoreTranscode_ = nullptr;
    // The part length. Unit: milliseconds.
    std::shared_ptr<int32_t> partDuration_ = nullptr;
    // The streaming protocol and encapsulation format.
    std::shared_ptr<string> protocol_ = nullptr;
    // The segment length. Unit: seconds.
    std::shared_ptr<int32_t> segmentDuration_ = nullptr;
    // The number of segments.
    std::shared_ptr<int32_t> segmentNum_ = nullptr;
    // The stream name.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
