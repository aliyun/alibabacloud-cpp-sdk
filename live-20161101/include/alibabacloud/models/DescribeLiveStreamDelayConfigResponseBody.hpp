// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDELAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDELAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class LiveStreamRtmpDelayConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamRtmpDelayConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamRtmpDelayConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      LiveStreamRtmpDelayConfig() = default ;
      LiveStreamRtmpDelayConfig(const LiveStreamRtmpDelayConfig &) = default ;
      LiveStreamRtmpDelayConfig(LiveStreamRtmpDelayConfig &&) = default ;
      LiveStreamRtmpDelayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamRtmpDelayConfig() = default ;
      LiveStreamRtmpDelayConfig& operator=(const LiveStreamRtmpDelayConfig &) = default ;
      LiveStreamRtmpDelayConfig& operator=(LiveStreamRtmpDelayConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delay_ == nullptr
        && this->level_ == nullptr; };
      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int32_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
      inline LiveStreamRtmpDelayConfig& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline LiveStreamRtmpDelayConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The playback latency. Unit: seconds.
      shared_ptr<int32_t> delay_ {};
      // The latency level. Valid values:
      // 
      // *   **short**: The latency is less than or equal to 4 seconds.
      // *   **medium**: The latency is greater than 4 seconds, and less than or equal to 8 seconds.
      // *   **long**: The latency is greater than 8 seconds.
      shared_ptr<string> level_ {};
    };

    class LiveStreamHlsDelayConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamHlsDelayConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamHlsDelayConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      LiveStreamHlsDelayConfig() = default ;
      LiveStreamHlsDelayConfig(const LiveStreamHlsDelayConfig &) = default ;
      LiveStreamHlsDelayConfig(LiveStreamHlsDelayConfig &&) = default ;
      LiveStreamHlsDelayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamHlsDelayConfig() = default ;
      LiveStreamHlsDelayConfig& operator=(const LiveStreamHlsDelayConfig &) = default ;
      LiveStreamHlsDelayConfig& operator=(LiveStreamHlsDelayConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delay_ == nullptr
        && this->level_ == nullptr; };
      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int32_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
      inline LiveStreamHlsDelayConfig& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline LiveStreamHlsDelayConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The playback latency. Unit: seconds.
      shared_ptr<int32_t> delay_ {};
      // The latency level. Valid values:
      // 
      // *   **short**: The latency is less than or equal to 4 seconds.
      // *   **medium**: The latency is greater than 4 seconds, and less than or equal to 8 seconds.
      // *   **long**: The latency is greater than 8 seconds.
      shared_ptr<string> level_ {};
    };

    class LiveStreamFlvDelayConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamFlvDelayConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamFlvDelayConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      LiveStreamFlvDelayConfig() = default ;
      LiveStreamFlvDelayConfig(const LiveStreamFlvDelayConfig &) = default ;
      LiveStreamFlvDelayConfig(LiveStreamFlvDelayConfig &&) = default ;
      LiveStreamFlvDelayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamFlvDelayConfig() = default ;
      LiveStreamFlvDelayConfig& operator=(const LiveStreamFlvDelayConfig &) = default ;
      LiveStreamFlvDelayConfig& operator=(LiveStreamFlvDelayConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delay_ == nullptr
        && this->level_ == nullptr; };
      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int32_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
      inline LiveStreamFlvDelayConfig& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline LiveStreamFlvDelayConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The playback latency. Unit: seconds.
      shared_ptr<int32_t> delay_ {};
      // The latency level. Valid values:
      // 
      // *   **short**: The latency is less than or equal to 4 seconds.
      // *   **medium**: The latency is greater than 4 seconds, and less than or equal to 8 seconds.
      // *   **long**: The latency is greater than 8 seconds.
      shared_ptr<string> level_ {};
    };

    virtual bool empty() const override { return this->liveStreamFlvDelayConfig_ == nullptr
        && this->liveStreamHlsDelayConfig_ == nullptr && this->liveStreamRtmpDelayConfig_ == nullptr && this->requestId_ == nullptr; };
    // liveStreamFlvDelayConfig Field Functions 
    bool hasLiveStreamFlvDelayConfig() const { return this->liveStreamFlvDelayConfig_ != nullptr;};
    void deleteLiveStreamFlvDelayConfig() { this->liveStreamFlvDelayConfig_ = nullptr;};
    inline const DescribeLiveStreamDelayConfigResponseBody::LiveStreamFlvDelayConfig & getLiveStreamFlvDelayConfig() const { DARABONBA_PTR_GET_CONST(liveStreamFlvDelayConfig_, DescribeLiveStreamDelayConfigResponseBody::LiveStreamFlvDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody::LiveStreamFlvDelayConfig getLiveStreamFlvDelayConfig() { DARABONBA_PTR_GET(liveStreamFlvDelayConfig_, DescribeLiveStreamDelayConfigResponseBody::LiveStreamFlvDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamFlvDelayConfig(const DescribeLiveStreamDelayConfigResponseBody::LiveStreamFlvDelayConfig & liveStreamFlvDelayConfig) { DARABONBA_PTR_SET_VALUE(liveStreamFlvDelayConfig_, liveStreamFlvDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamFlvDelayConfig(DescribeLiveStreamDelayConfigResponseBody::LiveStreamFlvDelayConfig && liveStreamFlvDelayConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamFlvDelayConfig_, liveStreamFlvDelayConfig) };


    // liveStreamHlsDelayConfig Field Functions 
    bool hasLiveStreamHlsDelayConfig() const { return this->liveStreamHlsDelayConfig_ != nullptr;};
    void deleteLiveStreamHlsDelayConfig() { this->liveStreamHlsDelayConfig_ = nullptr;};
    inline const DescribeLiveStreamDelayConfigResponseBody::LiveStreamHlsDelayConfig & getLiveStreamHlsDelayConfig() const { DARABONBA_PTR_GET_CONST(liveStreamHlsDelayConfig_, DescribeLiveStreamDelayConfigResponseBody::LiveStreamHlsDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody::LiveStreamHlsDelayConfig getLiveStreamHlsDelayConfig() { DARABONBA_PTR_GET(liveStreamHlsDelayConfig_, DescribeLiveStreamDelayConfigResponseBody::LiveStreamHlsDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamHlsDelayConfig(const DescribeLiveStreamDelayConfigResponseBody::LiveStreamHlsDelayConfig & liveStreamHlsDelayConfig) { DARABONBA_PTR_SET_VALUE(liveStreamHlsDelayConfig_, liveStreamHlsDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamHlsDelayConfig(DescribeLiveStreamDelayConfigResponseBody::LiveStreamHlsDelayConfig && liveStreamHlsDelayConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamHlsDelayConfig_, liveStreamHlsDelayConfig) };


    // liveStreamRtmpDelayConfig Field Functions 
    bool hasLiveStreamRtmpDelayConfig() const { return this->liveStreamRtmpDelayConfig_ != nullptr;};
    void deleteLiveStreamRtmpDelayConfig() { this->liveStreamRtmpDelayConfig_ = nullptr;};
    inline const DescribeLiveStreamDelayConfigResponseBody::LiveStreamRtmpDelayConfig & getLiveStreamRtmpDelayConfig() const { DARABONBA_PTR_GET_CONST(liveStreamRtmpDelayConfig_, DescribeLiveStreamDelayConfigResponseBody::LiveStreamRtmpDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody::LiveStreamRtmpDelayConfig getLiveStreamRtmpDelayConfig() { DARABONBA_PTR_GET(liveStreamRtmpDelayConfig_, DescribeLiveStreamDelayConfigResponseBody::LiveStreamRtmpDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamRtmpDelayConfig(const DescribeLiveStreamDelayConfigResponseBody::LiveStreamRtmpDelayConfig & liveStreamRtmpDelayConfig) { DARABONBA_PTR_SET_VALUE(liveStreamRtmpDelayConfig_, liveStreamRtmpDelayConfig) };
    inline DescribeLiveStreamDelayConfigResponseBody& setLiveStreamRtmpDelayConfig(DescribeLiveStreamDelayConfigResponseBody::LiveStreamRtmpDelayConfig && liveStreamRtmpDelayConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamRtmpDelayConfig_, liveStreamRtmpDelayConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamDelayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The latency of FLV-based playback.
    shared_ptr<DescribeLiveStreamDelayConfigResponseBody::LiveStreamFlvDelayConfig> liveStreamFlvDelayConfig_ {};
    // The latency of HLS-based playback.
    shared_ptr<DescribeLiveStreamDelayConfigResponseBody::LiveStreamHlsDelayConfig> liveStreamHlsDelayConfig_ {};
    // The latency of RTMP-based playback.
    shared_ptr<DescribeLiveStreamDelayConfigResponseBody::LiveStreamRtmpDelayConfig> liveStreamRtmpDelayConfig_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
