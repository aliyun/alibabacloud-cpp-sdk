// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOSTAMPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOSTAMPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStamps, audioStamps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStamps, audioStamps_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioStamps_ == nullptr; };
    // audioStamps Field Functions 
    bool hasAudioStamps() const { return this->audioStamps_ != nullptr;};
    void deleteAudioStamps() { this->audioStamps_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps> & audioStamps() const { DARABONBA_PTR_GET_CONST(audioStamps_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps> audioStamps() { DARABONBA_PTR_GET(audioStamps_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps& setAudioStamps(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps> & audioStamps) { DARABONBA_PTR_SET_VALUE(audioStamps_, audioStamps) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps& setAudioStamps(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps> && audioStamps) { DARABONBA_PTR_SET_RVALUE(audioStamps_, audioStamps) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStampsAudioStamps>> audioStamps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
