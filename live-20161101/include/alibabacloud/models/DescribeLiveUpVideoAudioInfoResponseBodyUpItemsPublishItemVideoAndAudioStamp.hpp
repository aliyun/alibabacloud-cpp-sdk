// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOANDAUDIOSTAMP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOANDAUDIOSTAMP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp& obj) { 
      DARABONBA_PTR_TO_JSON(V_AStamp, vAStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp& obj) { 
      DARABONBA_PTR_FROM_JSON(V_AStamp, vAStamp_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vAStamp_ == nullptr; };
    // vAStamp Field Functions 
    bool hasVAStamp() const { return this->vAStamp_ != nullptr;};
    void deleteVAStamp() { this->vAStamp_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp> & vAStamp() const { DARABONBA_PTR_GET_CONST(vAStamp_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp> vAStamp() { DARABONBA_PTR_GET(vAStamp_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp& setVAStamp(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp> & vAStamp) { DARABONBA_PTR_SET_VALUE(vAStamp_, vAStamp) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp& setVAStamp(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp> && vAStamp) { DARABONBA_PTR_SET_RVALUE(vAStamp_, vAStamp) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStampVAStamp>> vAStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
