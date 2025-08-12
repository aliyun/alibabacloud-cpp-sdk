// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval& obj) { 
      DARABONBA_PTR_TO_JSON(AudioInterval, audioInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioInterval, audioInterval_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioInterval_ != nullptr; };
    // audioInterval Field Functions 
    bool hasAudioInterval() const { return this->audioInterval_ != nullptr;};
    void deleteAudioInterval() { this->audioInterval_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval> & audioInterval() const { DARABONBA_PTR_GET_CONST(audioInterval_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval> audioInterval() { DARABONBA_PTR_GET(audioInterval_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval& setAudioInterval(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval> & audioInterval) { DARABONBA_PTR_SET_VALUE(audioInterval_, audioInterval) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval& setAudioInterval(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval> && audioInterval) { DARABONBA_PTR_SET_RVALUE(audioInterval_, audioInterval) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioIntervalAudioInterval>> audioInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
