// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDELAYCONFIGRESPONSEBODYLIVESTREAMHLSDELAYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDELAYCONFIGRESPONSEBODYLIVESTREAMHLSDELAYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig() = default ;
    DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig(const DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig &) = default ;
    DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig(DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig &&) = default ;
    DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig() = default ;
    DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig& operator=(const DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig &) = default ;
    DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig& operator=(DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delay_ != nullptr
        && this->level_ != nullptr; };
    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int32_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
    inline DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeLiveStreamDelayConfigResponseBodyLiveStreamHlsDelayConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The playback latency. Unit: seconds.
    std::shared_ptr<int32_t> delay_ = nullptr;
    // The latency level. Valid values:
    // 
    // *   **short**: The latency is less than or equal to 4 seconds.
    // *   **medium**: The latency is greater than 4 seconds, and less than or equal to 8 seconds.
    // *   **long**: The latency is greater than 8 seconds.
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
