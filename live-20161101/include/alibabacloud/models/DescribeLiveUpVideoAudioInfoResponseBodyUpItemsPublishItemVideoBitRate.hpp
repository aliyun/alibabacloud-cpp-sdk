// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOBITRATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOBITRATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate& obj) { 
      DARABONBA_PTR_TO_JSON(VideoBitRate, videoBitRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoBitRate, videoBitRate_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoBitRate_ != nullptr; };
    // videoBitRate Field Functions 
    bool hasVideoBitRate() const { return this->videoBitRate_ != nullptr;};
    void deleteVideoBitRate() { this->videoBitRate_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate> & videoBitRate() const { DARABONBA_PTR_GET_CONST(videoBitRate_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate> videoBitRate() { DARABONBA_PTR_GET(videoBitRate_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate& setVideoBitRate(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate> & videoBitRate) { DARABONBA_PTR_SET_VALUE(videoBitRate_, videoBitRate) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate& setVideoBitRate(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate> && videoBitRate) { DARABONBA_PTR_SET_RVALUE(videoBitRate_, videoBitRate) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRateVideoBitRate>> videoBitRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
