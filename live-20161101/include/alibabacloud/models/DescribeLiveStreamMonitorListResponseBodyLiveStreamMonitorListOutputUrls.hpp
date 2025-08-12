// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTOUTPUTURLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTOUTPUTURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls& obj) { 
      DARABONBA_PTR_TO_JSON(FlvUrl, flvUrl_);
      DARABONBA_PTR_TO_JSON(RtmpUrl, rtmpUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(FlvUrl, flvUrl_);
      DARABONBA_PTR_FROM_JSON(RtmpUrl, rtmpUrl_);
    };
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls &&) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls& operator=(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls& operator=(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flvUrl_ != nullptr
        && this->rtmpUrl_ != nullptr; };
    // flvUrl Field Functions 
    bool hasFlvUrl() const { return this->flvUrl_ != nullptr;};
    void deleteFlvUrl() { this->flvUrl_ = nullptr;};
    inline string flvUrl() const { DARABONBA_PTR_GET_DEFAULT(flvUrl_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls& setFlvUrl(string flvUrl) { DARABONBA_PTR_SET_VALUE(flvUrl_, flvUrl) };


    // rtmpUrl Field Functions 
    bool hasRtmpUrl() const { return this->rtmpUrl_ != nullptr;};
    void deleteRtmpUrl() { this->rtmpUrl_ = nullptr;};
    inline string rtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(rtmpUrl_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls& setRtmpUrl(string rtmpUrl) { DARABONBA_PTR_SET_VALUE(rtmpUrl_, rtmpUrl) };


  protected:
    // The output URL in the Flash Video (FLV) format.
    std::shared_ptr<string> flvUrl_ = nullptr;
    // The output URL in the Real-Time Messaging Protocol (RTMP) format.
    std::shared_ptr<string> rtmpUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
