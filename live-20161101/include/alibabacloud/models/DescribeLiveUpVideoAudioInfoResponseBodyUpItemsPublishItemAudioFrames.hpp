// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOFRAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAUDIOFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFrames, audioFrames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFrames, audioFrames_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioFrames_ == nullptr; };
    // audioFrames Field Functions 
    bool hasAudioFrames() const { return this->audioFrames_ != nullptr;};
    void deleteAudioFrames() { this->audioFrames_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames> & audioFrames() const { DARABONBA_PTR_GET_CONST(audioFrames_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames> audioFrames() { DARABONBA_PTR_GET(audioFrames_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames& setAudioFrames(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames> & audioFrames) { DARABONBA_PTR_SET_VALUE(audioFrames_, audioFrames) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames& setAudioFrames(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames> && audioFrames) { DARABONBA_PTR_SET_RVALUE(audioFrames_, audioFrames) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFramesAudioFrames>> audioFrames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
