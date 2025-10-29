// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODYCONTENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODYCONTENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveShiftConfigsResponseBodyContentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveShiftConfigsResponseBodyContentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Vision, vision_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveShiftConfigsResponseBodyContentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IgnoreTranscode, ignoreTranscode_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Vision, vision_);
    };
    DescribeLiveShiftConfigsResponseBodyContentConfig() = default ;
    DescribeLiveShiftConfigsResponseBodyContentConfig(const DescribeLiveShiftConfigsResponseBodyContentConfig &) = default ;
    DescribeLiveShiftConfigsResponseBodyContentConfig(DescribeLiveShiftConfigsResponseBodyContentConfig &&) = default ;
    DescribeLiveShiftConfigsResponseBodyContentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveShiftConfigsResponseBodyContentConfig() = default ;
    DescribeLiveShiftConfigsResponseBodyContentConfig& operator=(const DescribeLiveShiftConfigsResponseBodyContentConfig &) = default ;
    DescribeLiveShiftConfigsResponseBodyContentConfig& operator=(DescribeLiveShiftConfigsResponseBodyContentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->ignoreTranscode_ == nullptr && return this->streamName_ == nullptr && return this->vision_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveShiftConfigsResponseBodyContentConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveShiftConfigsResponseBodyContentConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ignoreTranscode Field Functions 
    bool hasIgnoreTranscode() const { return this->ignoreTranscode_ != nullptr;};
    void deleteIgnoreTranscode() { this->ignoreTranscode_ = nullptr;};
    inline bool ignoreTranscode() const { DARABONBA_PTR_GET_DEFAULT(ignoreTranscode_, false) };
    inline DescribeLiveShiftConfigsResponseBodyContentConfig& setIgnoreTranscode(bool ignoreTranscode) { DARABONBA_PTR_SET_VALUE(ignoreTranscode_, ignoreTranscode) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveShiftConfigsResponseBodyContentConfig& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // vision Field Functions 
    bool hasVision() const { return this->vision_ != nullptr;};
    void deleteVision() { this->vision_ = nullptr;};
    inline int32_t vision() const { DARABONBA_PTR_GET_DEFAULT(vision_, 0) };
    inline DescribeLiveShiftConfigsResponseBodyContentConfig& setVision(int32_t vision) { DARABONBA_PTR_SET_VALUE(vision_, vision) };


  protected:
    // The application for which you configure time shifting.
    std::shared_ptr<string> appName_ = nullptr;
    // The domain name for which you configure time shifting.
    std::shared_ptr<string> domainName_ = nullptr;
    // Whether to ignore time shift generation for the transcode stream.
    // 
    // *   true: Ignore time shifting generation.
    // *   false: Generate time shifting.
    // 
    // The default value is true.
    std::shared_ptr<bool> ignoreTranscode_ = nullptr;
    // The name of the live stream for which you configure time shifting.
    std::shared_ptr<string> streamName_ = nullptr;
    // The number of days for which the time shifting configurations are retained.
    std::shared_ptr<int32_t> vision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
