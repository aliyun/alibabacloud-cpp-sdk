// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDELAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDELAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig.hpp>
#include <alibabacloud/models/DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig.hpp>
#include <alibabacloud/models/DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamDelayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamFlvDelayConfig, liveStreamFlvDelayConfig_);
      DARABONBA_PTR_TO_JSON(LiveStreamHlsDelayConfig, liveStreamHlsDelayConfig_);
      DARABONBA_PTR_TO_JSON(LiveStreamRtmpDelayConfig, liveStreamRtmpDelayConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamFlvDelayConfig, liveStreamFlvDelayConfig_);
      DARABONBA_PTR_FROM_JSON(LiveStreamHlsDelayConfig, liveStreamHlsDelayConfig_);
      DARABONBA_PTR_FROM_JSON(LiveStreamRtmpDelayConfig, liveStreamRtmpDelayConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamDelayConfigResponseBody() = default ;
    DescribeLiveStreamDelayConfigResponseBody(const DescribeLiveStreamDelayConfigResponseBody &) = default ;
    DescribeLiveStreamDelayConfigResponseBody(DescribeLiveStreamDelayConfigResponseBody &&) = default ;
    DescribeLiveStreamDelayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamDelayConfigResponseBody() = default ;
    DescribeLiveStreamDelayConfigResponseBody& operator=(const DescribeLiveStreamDelayConfigResponseBody &) = default ;
    DescribeLiveStreamDelayConfigResponseBody& operator=(DescribeLiveStreamDelayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveStreamFlvDelayConfig_ == nullptr
        && return this->liveStreamHlsDelayConfig_ == nullptr && return this->liveStreamRtmpDelayConfig_ == nullptr && return this->requestId_ == nullptr; };
    // liveStreamFlvDelayConfig Field Functions 
    bool hasLiveStreamFlvDelayConfig() const { return this->liveStreamFlvDelayConfig_ != nullptr;};
    void deleteLiveStreamFlvDelayConfig() { this->liveStreamFlvDelayConfig_ = nullptr;};
    inline const DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig & liveStreamFlvDelayConfig() const { DARABONBA_PTR_GET_CONST(liveStreamFlvDelayConfig_, DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig liveStreamFlvDelayConfig() { DARABONBA_PTR_GET(liveStreamFlvDelayConfig_, DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamFlvDelayConfig(const DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig & liveStreamFlvDelayConfig) { DARABONBA_PTR_SET_VALUE(liveStreamFlvDelayConfig_, liveStreamFlvDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamFlvDelayConfig(DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig && liveStreamFlvDelayConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamFlvDelayConfig_, liveStreamFlvDelayConfig) };


    // liveStreamHlsDelayConfig Field Functions 
    bool hasLiveStreamHlsDelayConfig() const { return this->liveStreamHlsDelayConfig_ != nullptr;};
    void deleteLiveStreamHlsDelayConfig() { this->liveStreamHlsDelayConfig_ = nullptr;};
    inline const DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig & liveStreamHlsDelayConfig() const { DARABONBA_PTR_GET_CONST(liveStreamHlsDelayConfig_, DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig liveStreamHlsDelayConfig() { DARABONBA_PTR_GET(liveStreamHlsDelayConfig_, DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamHlsDelayConfig(const DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig & liveStreamHlsDelayConfig) { DARABONBA_PTR_SET_VALUE(liveStreamHlsDelayConfig_, liveStreamHlsDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamHlsDelayConfig(DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig && liveStreamHlsDelayConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamHlsDelayConfig_, liveStreamHlsDelayConfig) };


    // liveStreamRtmpDelayConfig Field Functions 
    bool hasLiveStreamRtmpDelayConfig() const { return this->liveStreamRtmpDelayConfig_ != nullptr;};
    void deleteLiveStreamRtmpDelayConfig() { this->liveStreamRtmpDelayConfig_ = nullptr;};
    inline const DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig & liveStreamRtmpDelayConfig() const { DARABONBA_PTR_GET_CONST(liveStreamRtmpDelayConfig_, DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig liveStreamRtmpDelayConfig() { DARABONBA_PTR_GET(liveStreamRtmpDelayConfig_, DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamRtmpDelayConfig(const DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig & liveStreamRtmpDelayConfig) { DARABONBA_PTR_SET_VALUE(liveStreamRtmpDelayConfig_, liveStreamRtmpDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamRtmpDelayConfig(DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig && liveStreamRtmpDelayConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamRtmpDelayConfig_, liveStreamRtmpDelayConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamDelayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The latency of FLV-based playback.
    std::shared_ptr<DescribeLiveStreamDelayConfigResponseBodyLiveStreamFlvDelayConfig> liveStreamFlvDelayConfig_ = nullptr;
    // The latency of HLS-based playback.
    std::shared_ptr<DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig> liveStreamHlsDelayConfig_ = nullptr;
    // The latency of RTMP-based playback.
    std::shared_ptr<DescribeLiveStreamDelayConfigResponseBodyLiveStreamRtmpDelayConfig> liveStreamRtmpDelayConfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
