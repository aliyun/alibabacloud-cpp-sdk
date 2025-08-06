// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODYMEDIAAUDITRESULTDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODYMEDIAAUDITRESULTDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(AdLabel, adLabel_);
      DARABONBA_PTR_TO_JSON(AdScore, adScore_);
      DARABONBA_PTR_TO_JSON(LiveLabel, liveLabel_);
      DARABONBA_PTR_TO_JSON(LiveScore, liveScore_);
      DARABONBA_PTR_TO_JSON(LogoLabel, logoLabel_);
      DARABONBA_PTR_TO_JSON(LogoScore, logoScore_);
      DARABONBA_PTR_TO_JSON(PornLabel, pornLabel_);
      DARABONBA_PTR_TO_JSON(PornScore, pornScore_);
      DARABONBA_PTR_TO_JSON(TerrorismLabel, terrorismLabel_);
      DARABONBA_PTR_TO_JSON(TerrorismScore, terrorismScore_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdLabel, adLabel_);
      DARABONBA_PTR_FROM_JSON(AdScore, adScore_);
      DARABONBA_PTR_FROM_JSON(LiveLabel, liveLabel_);
      DARABONBA_PTR_FROM_JSON(LiveScore, liveScore_);
      DARABONBA_PTR_FROM_JSON(LogoLabel, logoLabel_);
      DARABONBA_PTR_FROM_JSON(LogoScore, logoScore_);
      DARABONBA_PTR_FROM_JSON(PornLabel, pornLabel_);
      DARABONBA_PTR_FROM_JSON(PornScore, pornScore_);
      DARABONBA_PTR_FROM_JSON(TerrorismLabel, terrorismLabel_);
      DARABONBA_PTR_FROM_JSON(TerrorismScore, terrorismScore_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList() = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList(const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList &) = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList(GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList &&) = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList() = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& operator=(const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList &) = default ;
    GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& operator=(GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adLabel_ != nullptr
        && this->adScore_ != nullptr && this->liveLabel_ != nullptr && this->liveScore_ != nullptr && this->logoLabel_ != nullptr && this->logoScore_ != nullptr
        && this->pornLabel_ != nullptr && this->pornScore_ != nullptr && this->terrorismLabel_ != nullptr && this->terrorismScore_ != nullptr && this->timestamp_ != nullptr
        && this->url_ != nullptr; };
    // adLabel Field Functions 
    bool hasAdLabel() const { return this->adLabel_ != nullptr;};
    void deleteAdLabel() { this->adLabel_ = nullptr;};
    inline string adLabel() const { DARABONBA_PTR_GET_DEFAULT(adLabel_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setAdLabel(string adLabel) { DARABONBA_PTR_SET_VALUE(adLabel_, adLabel) };


    // adScore Field Functions 
    bool hasAdScore() const { return this->adScore_ != nullptr;};
    void deleteAdScore() { this->adScore_ = nullptr;};
    inline string adScore() const { DARABONBA_PTR_GET_DEFAULT(adScore_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setAdScore(string adScore) { DARABONBA_PTR_SET_VALUE(adScore_, adScore) };


    // liveLabel Field Functions 
    bool hasLiveLabel() const { return this->liveLabel_ != nullptr;};
    void deleteLiveLabel() { this->liveLabel_ = nullptr;};
    inline string liveLabel() const { DARABONBA_PTR_GET_DEFAULT(liveLabel_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setLiveLabel(string liveLabel) { DARABONBA_PTR_SET_VALUE(liveLabel_, liveLabel) };


    // liveScore Field Functions 
    bool hasLiveScore() const { return this->liveScore_ != nullptr;};
    void deleteLiveScore() { this->liveScore_ = nullptr;};
    inline string liveScore() const { DARABONBA_PTR_GET_DEFAULT(liveScore_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setLiveScore(string liveScore) { DARABONBA_PTR_SET_VALUE(liveScore_, liveScore) };


    // logoLabel Field Functions 
    bool hasLogoLabel() const { return this->logoLabel_ != nullptr;};
    void deleteLogoLabel() { this->logoLabel_ = nullptr;};
    inline string logoLabel() const { DARABONBA_PTR_GET_DEFAULT(logoLabel_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setLogoLabel(string logoLabel) { DARABONBA_PTR_SET_VALUE(logoLabel_, logoLabel) };


    // logoScore Field Functions 
    bool hasLogoScore() const { return this->logoScore_ != nullptr;};
    void deleteLogoScore() { this->logoScore_ = nullptr;};
    inline string logoScore() const { DARABONBA_PTR_GET_DEFAULT(logoScore_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setLogoScore(string logoScore) { DARABONBA_PTR_SET_VALUE(logoScore_, logoScore) };


    // pornLabel Field Functions 
    bool hasPornLabel() const { return this->pornLabel_ != nullptr;};
    void deletePornLabel() { this->pornLabel_ = nullptr;};
    inline string pornLabel() const { DARABONBA_PTR_GET_DEFAULT(pornLabel_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setPornLabel(string pornLabel) { DARABONBA_PTR_SET_VALUE(pornLabel_, pornLabel) };


    // pornScore Field Functions 
    bool hasPornScore() const { return this->pornScore_ != nullptr;};
    void deletePornScore() { this->pornScore_ = nullptr;};
    inline string pornScore() const { DARABONBA_PTR_GET_DEFAULT(pornScore_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setPornScore(string pornScore) { DARABONBA_PTR_SET_VALUE(pornScore_, pornScore) };


    // terrorismLabel Field Functions 
    bool hasTerrorismLabel() const { return this->terrorismLabel_ != nullptr;};
    void deleteTerrorismLabel() { this->terrorismLabel_ = nullptr;};
    inline string terrorismLabel() const { DARABONBA_PTR_GET_DEFAULT(terrorismLabel_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setTerrorismLabel(string terrorismLabel) { DARABONBA_PTR_SET_VALUE(terrorismLabel_, terrorismLabel) };


    // terrorismScore Field Functions 
    bool hasTerrorismScore() const { return this->terrorismScore_ != nullptr;};
    void deleteTerrorismScore() { this->terrorismScore_ = nullptr;};
    inline string terrorismScore() const { DARABONBA_PTR_GET_DEFAULT(terrorismScore_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setTerrorismScore(string terrorismScore) { DARABONBA_PTR_SET_VALUE(terrorismScore_, terrorismScore) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetailList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content.
    // *   **ad**: other ads.
    // *   **politics**: political content in text.
    // *   **porn**: pornographic content in text.
    // *   **abuse**: verbal abuse in text.
    // *   **terrorism**: terrorist content in text.
    // *   **contraband**: prohibited content in text.
    // *   **spam**: spam content in text.
    // *   **npx**: illegal ad
    // *   **qrcode**: QR code.
    // *   **programCode**: mini program code.
    std::shared_ptr<string> adLabel_ = nullptr;
    // The score of the video snapshot in the ad review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
    std::shared_ptr<string> adScore_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content.
    // *   **meaningless**: meaningless content, such as a black or white screen.
    // *   **PIP**: picture-in-picture.
    // *   **smoking**: smoking.
    // *   **drivelive**: live broadcasting in a running vehicle.
    std::shared_ptr<string> liveLabel_ = nullptr;
    // The score of the video snapshot in the undesirable content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
    std::shared_ptr<string> liveScore_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content.
    // *   **TV**: controlled TV station logo.
    // *   **trademark**: trademark.
    std::shared_ptr<string> logoLabel_ = nullptr;
    // The score of the video snapshot in the logo review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
    std::shared_ptr<string> logoScore_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **normal**
    // *   **porn**
    // *   **sexy**
    std::shared_ptr<string> pornLabel_ = nullptr;
    // The score of the video snapshot in the pornographic content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
    std::shared_ptr<string> pornScore_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **normal**
    // *   **bloody**
    // *   **explosion**
    // *   **outfit**
    // *   **logo**
    // *   **weapon**
    // *   **politics**
    // *   **violence**
    // *   **crowd**
    // *   **parade**
    // *   **carcrash**
    // *   **flag**
    // *   **location**
    // *   **others**
    std::shared_ptr<string> terrorismLabel_ = nullptr;
    // The score of the video snapshot in the terrorist content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
    std::shared_ptr<string> terrorismScore_ = nullptr;
    // The timestamp of the snapshot in the video. Unit: milliseconds.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The URL of the video snapshot.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
