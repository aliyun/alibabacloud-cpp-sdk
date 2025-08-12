// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPUBLISHRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPUBLISHRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeToutiaoLivePublishResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeToutiaoLivePublishResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(BwDiff, bwDiff_);
      DARABONBA_PTR_TO_JSON(CdnName, cdnName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Flr, flr_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeToutiaoLivePublishResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(BwDiff, bwDiff_);
      DARABONBA_PTR_FROM_JSON(CdnName, cdnName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Flr, flr_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeToutiaoLivePublishResponseBodyContent() = default ;
    DescribeToutiaoLivePublishResponseBodyContent(const DescribeToutiaoLivePublishResponseBodyContent &) = default ;
    DescribeToutiaoLivePublishResponseBodyContent(DescribeToutiaoLivePublishResponseBodyContent &&) = default ;
    DescribeToutiaoLivePublishResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeToutiaoLivePublishResponseBodyContent() = default ;
    DescribeToutiaoLivePublishResponseBodyContent& operator=(const DescribeToutiaoLivePublishResponseBodyContent &) = default ;
    DescribeToutiaoLivePublishResponseBodyContent& operator=(DescribeToutiaoLivePublishResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->bitrate_ != nullptr && this->bwDiff_ != nullptr && this->cdnName_ != nullptr && this->domain_ != nullptr && this->flr_ != nullptr
        && this->fps_ != nullptr && this->streamName_ != nullptr && this->timestamp_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeToutiaoLivePublishResponseBodyContent& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline float bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0.0) };
    inline DescribeToutiaoLivePublishResponseBodyContent& setBitrate(float bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bwDiff Field Functions 
    bool hasBwDiff() const { return this->bwDiff_ != nullptr;};
    void deleteBwDiff() { this->bwDiff_ = nullptr;};
    inline float bwDiff() const { DARABONBA_PTR_GET_DEFAULT(bwDiff_, 0.0) };
    inline DescribeToutiaoLivePublishResponseBodyContent& setBwDiff(float bwDiff) { DARABONBA_PTR_SET_VALUE(bwDiff_, bwDiff) };


    // cdnName Field Functions 
    bool hasCdnName() const { return this->cdnName_ != nullptr;};
    void deleteCdnName() { this->cdnName_ = nullptr;};
    inline string cdnName() const { DARABONBA_PTR_GET_DEFAULT(cdnName_, "") };
    inline DescribeToutiaoLivePublishResponseBodyContent& setCdnName(string cdnName) { DARABONBA_PTR_SET_VALUE(cdnName_, cdnName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeToutiaoLivePublishResponseBodyContent& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // flr Field Functions 
    bool hasFlr() const { return this->flr_ != nullptr;};
    void deleteFlr() { this->flr_ = nullptr;};
    inline float flr() const { DARABONBA_PTR_GET_DEFAULT(flr_, 0.0) };
    inline DescribeToutiaoLivePublishResponseBodyContent& setFlr(float flr) { DARABONBA_PTR_SET_VALUE(flr_, flr) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline float fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0.0) };
    inline DescribeToutiaoLivePublishResponseBodyContent& setFps(float fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeToutiaoLivePublishResponseBodyContent& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeToutiaoLivePublishResponseBodyContent& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> app_ = nullptr;
    // The bitrate. Unit: bit/s.
    std::shared_ptr<float> bitrate_ = nullptr;
    // The bitrate difference.
    std::shared_ptr<float> bwDiff_ = nullptr;
    // The name of the content delivery network (CDN) service.
    std::shared_ptr<string> cdnName_ = nullptr;
    // The ingest domain.
    std::shared_ptr<string> domain_ = nullptr;
    // The number of dropped frames.
    std::shared_ptr<float> flr_ = nullptr;
    // The frame rate.
    std::shared_ptr<float> fps_ = nullptr;
    // The name of the ingested stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The timestamp.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
