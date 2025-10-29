// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOBITRATEAUDIOBITRATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOBITRATEAUDIOBITRATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate& obj) { 
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate& obj) { 
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->time_ == nullptr
        && return this->value_ == nullptr; };
    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The bitrate of the audio. Unit: bit/s.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The query time. The value is a UNIX timestamp in milliseconds.
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
