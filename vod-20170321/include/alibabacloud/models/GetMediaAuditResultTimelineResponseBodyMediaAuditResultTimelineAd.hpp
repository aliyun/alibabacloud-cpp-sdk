// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODYMEDIAAUDITRESULTTIMELINEAD_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODYMEDIAAUDITRESULTTIMELINEAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd() = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd(const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd &) = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd(GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd &&) = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd() = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd& operator=(const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd &) = default ;
    GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd& operator=(GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->score_ == nullptr && return this->timestamp_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimelineAd& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content.
    // *   **ad**: other ads.
    // *   **politics**: political content in text.
    // *   **porn**: pornographic content in text.
    // *   **abuse**: abuse in text.
    // *   **terrorism**: terrorist content in text.
    // *   **contraband**: prohibited content in text.
    // *   **spam**: spam content.
    // *   **npx**: illegal ad.
    // *   **qrcode**: QR code.
    // *   **programCode**: mini program code.
    std::shared_ptr<string> label_ = nullptr;
    // The score of the video snapshot in the ad review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
    std::shared_ptr<string> score_ = nullptr;
    // The timestamp of the snapshot in the video. Unit: milliseconds.
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
