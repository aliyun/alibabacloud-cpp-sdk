// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOBITRATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOBITRATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate& obj) { 
      DARABONBA_PTR_TO_JSON(AudioBitRate, audioBitRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioBitRate, audioBitRate_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioBitRate_ != nullptr; };
    // audioBitRate Field Functions 
    bool hasAudioBitRate() const { return this->audioBitRate_ != nullptr;};
    void deleteAudioBitRate() { this->audioBitRate_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate> & audioBitRate() const { DARABONBA_PTR_GET_CONST(audioBitRate_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate> audioBitRate() { DARABONBA_PTR_GET(audioBitRate_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate& setAudioBitRate(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate> & audioBitRate) { DARABONBA_PTR_SET_VALUE(audioBitRate_, audioBitRate) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate& setAudioBitRate(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate> && audioBitRate) { DARABONBA_PTR_SET_RVALUE(audioBitRate_, audioBitRate) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRateAudioBitRate>> audioBitRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
