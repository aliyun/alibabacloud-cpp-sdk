// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditResultTimeline, mediaAuditResultTimeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditResultTimeline, mediaAuditResultTimeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditResultTimelineResponseBody() = default ;
    GetMediaAuditResultTimelineResponseBody(const GetMediaAuditResultTimelineResponseBody &) = default ;
    GetMediaAuditResultTimelineResponseBody(GetMediaAuditResultTimelineResponseBody &&) = default ;
    GetMediaAuditResultTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultTimelineResponseBody() = default ;
    GetMediaAuditResultTimelineResponseBody& operator=(const GetMediaAuditResultTimelineResponseBody &) = default ;
    GetMediaAuditResultTimelineResponseBody& operator=(GetMediaAuditResultTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaAuditResultTimeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaAuditResultTimeline& obj) { 
        DARABONBA_PTR_TO_JSON(Ad, ad_);
        DARABONBA_PTR_TO_JSON(Live, live_);
        DARABONBA_PTR_TO_JSON(Logo, logo_);
        DARABONBA_PTR_TO_JSON(Porn, porn_);
        DARABONBA_PTR_TO_JSON(Terrorism, terrorism_);
      };
      friend void from_json(const Darabonba::Json& j, MediaAuditResultTimeline& obj) { 
        DARABONBA_PTR_FROM_JSON(Ad, ad_);
        DARABONBA_PTR_FROM_JSON(Live, live_);
        DARABONBA_PTR_FROM_JSON(Logo, logo_);
        DARABONBA_PTR_FROM_JSON(Porn, porn_);
        DARABONBA_PTR_FROM_JSON(Terrorism, terrorism_);
      };
      MediaAuditResultTimeline() = default ;
      MediaAuditResultTimeline(const MediaAuditResultTimeline &) = default ;
      MediaAuditResultTimeline(MediaAuditResultTimeline &&) = default ;
      MediaAuditResultTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaAuditResultTimeline() = default ;
      MediaAuditResultTimeline& operator=(const MediaAuditResultTimeline &) = default ;
      MediaAuditResultTimeline& operator=(MediaAuditResultTimeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Terrorism : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Terrorism& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Terrorism& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Terrorism() = default ;
        Terrorism(const Terrorism &) = default ;
        Terrorism(Terrorism &&) = default ;
        Terrorism(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Terrorism() = default ;
        Terrorism& operator=(const Terrorism &) = default ;
        Terrorism& operator=(Terrorism &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Terrorism& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline Terrorism& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Terrorism& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
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
        shared_ptr<string> label_ {};
        // The score of the video snapshot in the terrorist content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> score_ {};
        // The timestamp of the snapshot in the video. Unit: milliseconds.
        shared_ptr<string> timestamp_ {};
      };

      class Porn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Porn& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Porn& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Porn() = default ;
        Porn(const Porn &) = default ;
        Porn(Porn &&) = default ;
        Porn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Porn() = default ;
        Porn& operator=(const Porn &) = default ;
        Porn& operator=(Porn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Porn& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline Porn& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Porn& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The category of the review result. Valid values:
        // 
        // *   **porn**
        // *   **sexy**
        // *   **normal**
        shared_ptr<string> label_ {};
        // The score of the video snapshot in the pornographic content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> score_ {};
        // The timestamp of the snapshot in the video. Unit: milliseconds.
        shared_ptr<string> timestamp_ {};
      };

      class Logo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logo& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Logo& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Logo() = default ;
        Logo(const Logo &) = default ;
        Logo(Logo &&) = default ;
        Logo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logo() = default ;
        Logo& operator=(const Logo &) = default ;
        Logo& operator=(Logo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Logo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline Logo& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Logo& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The category of the review result. Valid values:
        // 
        // *   **normal**: normal content.
        // *   **TV**: controlled TV station logo.
        // *   **trademark**: trademark.
        shared_ptr<string> label_ {};
        // The score of the video snapshot in the logo review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> score_ {};
        // The timestamp of the snapshot in the video. Unit: milliseconds.
        shared_ptr<string> timestamp_ {};
      };

      class Live : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Live& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Live& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Live() = default ;
        Live(const Live &) = default ;
        Live(Live &&) = default ;
        Live(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Live() = default ;
        Live& operator=(const Live &) = default ;
        Live& operator=(Live &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Live& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline Live& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Live& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The categories of undesired content review results. Valid values:
        // 
        // *   **normal**: normal content.
        // *   **meaningless**: meaningless content, such as a black or white screen.
        // *   **PIP**: picture-in-picture.
        // *   **smoking**: smoking.
        // *   **drivelive**: live broadcasting in a running vehicle.
        shared_ptr<string> label_ {};
        // The score of the video snapshot in the undesirable content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> score_ {};
        // The timestamp of the snapshot in the video. Unit: milliseconds.
        shared_ptr<string> timestamp_ {};
      };

      class Ad : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ad& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Ad& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Ad() = default ;
        Ad(const Ad &) = default ;
        Ad(Ad &&) = default ;
        Ad(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ad() = default ;
        Ad& operator=(const Ad &) = default ;
        Ad& operator=(Ad &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Ad& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline Ad& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Ad& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


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
        shared_ptr<string> label_ {};
        // The score of the video snapshot in the ad review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> score_ {};
        // The timestamp of the snapshot in the video. Unit: milliseconds.
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->ad_ == nullptr
        && this->live_ == nullptr && this->logo_ == nullptr && this->porn_ == nullptr && this->terrorism_ == nullptr; };
      // ad Field Functions 
      bool hasAd() const { return this->ad_ != nullptr;};
      void deleteAd() { this->ad_ = nullptr;};
      inline const vector<MediaAuditResultTimeline::Ad> & getAd() const { DARABONBA_PTR_GET_CONST(ad_, vector<MediaAuditResultTimeline::Ad>) };
      inline vector<MediaAuditResultTimeline::Ad> getAd() { DARABONBA_PTR_GET(ad_, vector<MediaAuditResultTimeline::Ad>) };
      inline MediaAuditResultTimeline& setAd(const vector<MediaAuditResultTimeline::Ad> & ad) { DARABONBA_PTR_SET_VALUE(ad_, ad) };
      inline MediaAuditResultTimeline& setAd(vector<MediaAuditResultTimeline::Ad> && ad) { DARABONBA_PTR_SET_RVALUE(ad_, ad) };


      // live Field Functions 
      bool hasLive() const { return this->live_ != nullptr;};
      void deleteLive() { this->live_ = nullptr;};
      inline const vector<MediaAuditResultTimeline::Live> & getLive() const { DARABONBA_PTR_GET_CONST(live_, vector<MediaAuditResultTimeline::Live>) };
      inline vector<MediaAuditResultTimeline::Live> getLive() { DARABONBA_PTR_GET(live_, vector<MediaAuditResultTimeline::Live>) };
      inline MediaAuditResultTimeline& setLive(const vector<MediaAuditResultTimeline::Live> & live) { DARABONBA_PTR_SET_VALUE(live_, live) };
      inline MediaAuditResultTimeline& setLive(vector<MediaAuditResultTimeline::Live> && live) { DARABONBA_PTR_SET_RVALUE(live_, live) };


      // logo Field Functions 
      bool hasLogo() const { return this->logo_ != nullptr;};
      void deleteLogo() { this->logo_ = nullptr;};
      inline const vector<MediaAuditResultTimeline::Logo> & getLogo() const { DARABONBA_PTR_GET_CONST(logo_, vector<MediaAuditResultTimeline::Logo>) };
      inline vector<MediaAuditResultTimeline::Logo> getLogo() { DARABONBA_PTR_GET(logo_, vector<MediaAuditResultTimeline::Logo>) };
      inline MediaAuditResultTimeline& setLogo(const vector<MediaAuditResultTimeline::Logo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
      inline MediaAuditResultTimeline& setLogo(vector<MediaAuditResultTimeline::Logo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


      // porn Field Functions 
      bool hasPorn() const { return this->porn_ != nullptr;};
      void deletePorn() { this->porn_ = nullptr;};
      inline const vector<MediaAuditResultTimeline::Porn> & getPorn() const { DARABONBA_PTR_GET_CONST(porn_, vector<MediaAuditResultTimeline::Porn>) };
      inline vector<MediaAuditResultTimeline::Porn> getPorn() { DARABONBA_PTR_GET(porn_, vector<MediaAuditResultTimeline::Porn>) };
      inline MediaAuditResultTimeline& setPorn(const vector<MediaAuditResultTimeline::Porn> & porn) { DARABONBA_PTR_SET_VALUE(porn_, porn) };
      inline MediaAuditResultTimeline& setPorn(vector<MediaAuditResultTimeline::Porn> && porn) { DARABONBA_PTR_SET_RVALUE(porn_, porn) };


      // terrorism Field Functions 
      bool hasTerrorism() const { return this->terrorism_ != nullptr;};
      void deleteTerrorism() { this->terrorism_ = nullptr;};
      inline const vector<MediaAuditResultTimeline::Terrorism> & getTerrorism() const { DARABONBA_PTR_GET_CONST(terrorism_, vector<MediaAuditResultTimeline::Terrorism>) };
      inline vector<MediaAuditResultTimeline::Terrorism> getTerrorism() { DARABONBA_PTR_GET(terrorism_, vector<MediaAuditResultTimeline::Terrorism>) };
      inline MediaAuditResultTimeline& setTerrorism(const vector<MediaAuditResultTimeline::Terrorism> & terrorism) { DARABONBA_PTR_SET_VALUE(terrorism_, terrorism) };
      inline MediaAuditResultTimeline& setTerrorism(vector<MediaAuditResultTimeline::Terrorism> && terrorism) { DARABONBA_PTR_SET_RVALUE(terrorism_, terrorism) };


    protected:
      // The collection of ad timelines.
      shared_ptr<vector<MediaAuditResultTimeline::Ad>> ad_ {};
      // The collection of undesirable content timelines.
      shared_ptr<vector<MediaAuditResultTimeline::Live>> live_ {};
      // The collection of logo timelines.
      shared_ptr<vector<MediaAuditResultTimeline::Logo>> logo_ {};
      // The collection of pornographic content timelines.
      shared_ptr<vector<MediaAuditResultTimeline::Porn>> porn_ {};
      // The collection of terrorist content timelines.
      shared_ptr<vector<MediaAuditResultTimeline::Terrorism>> terrorism_ {};
    };

    virtual bool empty() const override { return this->mediaAuditResultTimeline_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaAuditResultTimeline Field Functions 
    bool hasMediaAuditResultTimeline() const { return this->mediaAuditResultTimeline_ != nullptr;};
    void deleteMediaAuditResultTimeline() { this->mediaAuditResultTimeline_ = nullptr;};
    inline const GetMediaAuditResultTimelineResponseBody::MediaAuditResultTimeline & getMediaAuditResultTimeline() const { DARABONBA_PTR_GET_CONST(mediaAuditResultTimeline_, GetMediaAuditResultTimelineResponseBody::MediaAuditResultTimeline) };
    inline GetMediaAuditResultTimelineResponseBody::MediaAuditResultTimeline getMediaAuditResultTimeline() { DARABONBA_PTR_GET(mediaAuditResultTimeline_, GetMediaAuditResultTimelineResponseBody::MediaAuditResultTimeline) };
    inline GetMediaAuditResultTimelineResponseBody& setMediaAuditResultTimeline(const GetMediaAuditResultTimelineResponseBody::MediaAuditResultTimeline & mediaAuditResultTimeline) { DARABONBA_PTR_SET_VALUE(mediaAuditResultTimeline_, mediaAuditResultTimeline) };
    inline GetMediaAuditResultTimelineResponseBody& setMediaAuditResultTimeline(GetMediaAuditResultTimelineResponseBody::MediaAuditResultTimeline && mediaAuditResultTimeline) { DARABONBA_PTR_SET_RVALUE(mediaAuditResultTimeline_, mediaAuditResultTimeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditResultTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The collection of review result timelines.
    shared_ptr<GetMediaAuditResultTimelineResponseBody::MediaAuditResultTimeline> mediaAuditResultTimeline_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
