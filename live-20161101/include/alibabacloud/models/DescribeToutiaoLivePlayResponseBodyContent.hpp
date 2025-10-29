// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPLAYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPLAYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeToutiaoLivePlayResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeToutiaoLivePlayResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CdnName, cdnName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(PlayNum, playNum_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeToutiaoLivePlayResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CdnName, cdnName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(PlayNum, playNum_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeToutiaoLivePlayResponseBodyContent() = default ;
    DescribeToutiaoLivePlayResponseBodyContent(const DescribeToutiaoLivePlayResponseBodyContent &) = default ;
    DescribeToutiaoLivePlayResponseBodyContent(DescribeToutiaoLivePlayResponseBodyContent &&) = default ;
    DescribeToutiaoLivePlayResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeToutiaoLivePlayResponseBodyContent() = default ;
    DescribeToutiaoLivePlayResponseBodyContent& operator=(const DescribeToutiaoLivePlayResponseBodyContent &) = default ;
    DescribeToutiaoLivePlayResponseBodyContent& operator=(DescribeToutiaoLivePlayResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->bandwidth_ == nullptr && return this->cdnName_ == nullptr && return this->domain_ == nullptr && return this->playNum_ == nullptr && return this->streamName_ == nullptr
        && return this->timestamp_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeToutiaoLivePlayResponseBodyContent& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline float bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0.0) };
    inline DescribeToutiaoLivePlayResponseBodyContent& setBandwidth(float bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cdnName Field Functions 
    bool hasCdnName() const { return this->cdnName_ != nullptr;};
    void deleteCdnName() { this->cdnName_ = nullptr;};
    inline string cdnName() const { DARABONBA_PTR_GET_DEFAULT(cdnName_, "") };
    inline DescribeToutiaoLivePlayResponseBodyContent& setCdnName(string cdnName) { DARABONBA_PTR_SET_VALUE(cdnName_, cdnName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeToutiaoLivePlayResponseBodyContent& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // playNum Field Functions 
    bool hasPlayNum() const { return this->playNum_ != nullptr;};
    void deletePlayNum() { this->playNum_ = nullptr;};
    inline int64_t playNum() const { DARABONBA_PTR_GET_DEFAULT(playNum_, 0L) };
    inline DescribeToutiaoLivePlayResponseBodyContent& setPlayNum(int64_t playNum) { DARABONBA_PTR_SET_VALUE(playNum_, playNum) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeToutiaoLivePlayResponseBodyContent& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeToutiaoLivePlayResponseBodyContent& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> app_ = nullptr;
    // The bandwidth. Unit: Mbit/s.
    std::shared_ptr<float> bandwidth_ = nullptr;
    // The Content Delivery Network (CDN) name.
    std::shared_ptr<string> cdnName_ = nullptr;
    // The streaming domain.
    std::shared_ptr<string> domain_ = nullptr;
    // The number of viewers.
    std::shared_ptr<int64_t> playNum_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The timestamp.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
