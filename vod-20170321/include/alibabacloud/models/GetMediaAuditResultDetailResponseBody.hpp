// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODY_HPP_
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
  class GetMediaAuditResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditResultDetail, mediaAuditResultDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditResultDetail, mediaAuditResultDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditResultDetailResponseBody() = default ;
    GetMediaAuditResultDetailResponseBody(const GetMediaAuditResultDetailResponseBody &) = default ;
    GetMediaAuditResultDetailResponseBody(GetMediaAuditResultDetailResponseBody &&) = default ;
    GetMediaAuditResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultDetailResponseBody() = default ;
    GetMediaAuditResultDetailResponseBody& operator=(const GetMediaAuditResultDetailResponseBody &) = default ;
    GetMediaAuditResultDetailResponseBody& operator=(GetMediaAuditResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaAuditResultDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaAuditResultDetail& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, MediaAuditResultDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      MediaAuditResultDetail() = default ;
      MediaAuditResultDetail(const MediaAuditResultDetail &) = default ;
      MediaAuditResultDetail(MediaAuditResultDetail &&) = default ;
      MediaAuditResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaAuditResultDetail() = default ;
      MediaAuditResultDetail& operator=(const MediaAuditResultDetail &) = default ;
      MediaAuditResultDetail& operator=(MediaAuditResultDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
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
        friend void from_json(const Darabonba::Json& j, List& obj) { 
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
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adLabel_ == nullptr
        && this->adScore_ == nullptr && this->liveLabel_ == nullptr && this->liveScore_ == nullptr && this->logoLabel_ == nullptr && this->logoScore_ == nullptr
        && this->pornLabel_ == nullptr && this->pornScore_ == nullptr && this->terrorismLabel_ == nullptr && this->terrorismScore_ == nullptr && this->timestamp_ == nullptr
        && this->url_ == nullptr; };
        // adLabel Field Functions 
        bool hasAdLabel() const { return this->adLabel_ != nullptr;};
        void deleteAdLabel() { this->adLabel_ = nullptr;};
        inline string getAdLabel() const { DARABONBA_PTR_GET_DEFAULT(adLabel_, "") };
        inline List& setAdLabel(string adLabel) { DARABONBA_PTR_SET_VALUE(adLabel_, adLabel) };


        // adScore Field Functions 
        bool hasAdScore() const { return this->adScore_ != nullptr;};
        void deleteAdScore() { this->adScore_ = nullptr;};
        inline string getAdScore() const { DARABONBA_PTR_GET_DEFAULT(adScore_, "") };
        inline List& setAdScore(string adScore) { DARABONBA_PTR_SET_VALUE(adScore_, adScore) };


        // liveLabel Field Functions 
        bool hasLiveLabel() const { return this->liveLabel_ != nullptr;};
        void deleteLiveLabel() { this->liveLabel_ = nullptr;};
        inline string getLiveLabel() const { DARABONBA_PTR_GET_DEFAULT(liveLabel_, "") };
        inline List& setLiveLabel(string liveLabel) { DARABONBA_PTR_SET_VALUE(liveLabel_, liveLabel) };


        // liveScore Field Functions 
        bool hasLiveScore() const { return this->liveScore_ != nullptr;};
        void deleteLiveScore() { this->liveScore_ = nullptr;};
        inline string getLiveScore() const { DARABONBA_PTR_GET_DEFAULT(liveScore_, "") };
        inline List& setLiveScore(string liveScore) { DARABONBA_PTR_SET_VALUE(liveScore_, liveScore) };


        // logoLabel Field Functions 
        bool hasLogoLabel() const { return this->logoLabel_ != nullptr;};
        void deleteLogoLabel() { this->logoLabel_ = nullptr;};
        inline string getLogoLabel() const { DARABONBA_PTR_GET_DEFAULT(logoLabel_, "") };
        inline List& setLogoLabel(string logoLabel) { DARABONBA_PTR_SET_VALUE(logoLabel_, logoLabel) };


        // logoScore Field Functions 
        bool hasLogoScore() const { return this->logoScore_ != nullptr;};
        void deleteLogoScore() { this->logoScore_ = nullptr;};
        inline string getLogoScore() const { DARABONBA_PTR_GET_DEFAULT(logoScore_, "") };
        inline List& setLogoScore(string logoScore) { DARABONBA_PTR_SET_VALUE(logoScore_, logoScore) };


        // pornLabel Field Functions 
        bool hasPornLabel() const { return this->pornLabel_ != nullptr;};
        void deletePornLabel() { this->pornLabel_ = nullptr;};
        inline string getPornLabel() const { DARABONBA_PTR_GET_DEFAULT(pornLabel_, "") };
        inline List& setPornLabel(string pornLabel) { DARABONBA_PTR_SET_VALUE(pornLabel_, pornLabel) };


        // pornScore Field Functions 
        bool hasPornScore() const { return this->pornScore_ != nullptr;};
        void deletePornScore() { this->pornScore_ = nullptr;};
        inline string getPornScore() const { DARABONBA_PTR_GET_DEFAULT(pornScore_, "") };
        inline List& setPornScore(string pornScore) { DARABONBA_PTR_SET_VALUE(pornScore_, pornScore) };


        // terrorismLabel Field Functions 
        bool hasTerrorismLabel() const { return this->terrorismLabel_ != nullptr;};
        void deleteTerrorismLabel() { this->terrorismLabel_ = nullptr;};
        inline string getTerrorismLabel() const { DARABONBA_PTR_GET_DEFAULT(terrorismLabel_, "") };
        inline List& setTerrorismLabel(string terrorismLabel) { DARABONBA_PTR_SET_VALUE(terrorismLabel_, terrorismLabel) };


        // terrorismScore Field Functions 
        bool hasTerrorismScore() const { return this->terrorismScore_ != nullptr;};
        void deleteTerrorismScore() { this->terrorismScore_ = nullptr;};
        inline string getTerrorismScore() const { DARABONBA_PTR_GET_DEFAULT(terrorismScore_, "") };
        inline List& setTerrorismScore(string terrorismScore) { DARABONBA_PTR_SET_VALUE(terrorismScore_, terrorismScore) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline List& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline List& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


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
        shared_ptr<string> adLabel_ {};
        // The score of the video snapshot in the ad review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> adScore_ {};
        // The category of the review result. Valid values:
        // 
        // *   **normal**: normal content.
        // *   **meaningless**: meaningless content, such as a black or white screen.
        // *   **PIP**: picture-in-picture.
        // *   **smoking**: smoking.
        // *   **drivelive**: live broadcasting in a running vehicle.
        shared_ptr<string> liveLabel_ {};
        // The score of the video snapshot in the undesirable content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> liveScore_ {};
        // The category of the review result. Valid values:
        // 
        // *   **normal**: normal content.
        // *   **TV**: controlled TV station logo.
        // *   **trademark**: trademark.
        shared_ptr<string> logoLabel_ {};
        // The score of the video snapshot in the logo review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> logoScore_ {};
        // The category of the review result. Valid values:
        // 
        // *   **normal**
        // *   **porn**
        // *   **sexy**
        shared_ptr<string> pornLabel_ {};
        // The score of the video snapshot in the pornographic content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> pornScore_ {};
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
        shared_ptr<string> terrorismLabel_ {};
        // The score of the video snapshot in the terrorist content review result. Valid values: `[0,100]`. The value is rounded down to 10 decimal places. The score is representative of the confidence.
        shared_ptr<string> terrorismScore_ {};
        // The timestamp of the snapshot in the video. Unit: milliseconds.
        shared_ptr<string> timestamp_ {};
        // The URL of the video snapshot.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<MediaAuditResultDetail::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<MediaAuditResultDetail::List>) };
      inline vector<MediaAuditResultDetail::List> getList() { DARABONBA_PTR_GET(list_, vector<MediaAuditResultDetail::List>) };
      inline MediaAuditResultDetail& setList(const vector<MediaAuditResultDetail::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline MediaAuditResultDetail& setList(vector<MediaAuditResultDetail::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline MediaAuditResultDetail& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The review results returned.
      shared_ptr<vector<MediaAuditResultDetail::List>> list_ {};
      // The total number of snapshots returned.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->mediaAuditResultDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaAuditResultDetail Field Functions 
    bool hasMediaAuditResultDetail() const { return this->mediaAuditResultDetail_ != nullptr;};
    void deleteMediaAuditResultDetail() { this->mediaAuditResultDetail_ = nullptr;};
    inline const GetMediaAuditResultDetailResponseBody::MediaAuditResultDetail & getMediaAuditResultDetail() const { DARABONBA_PTR_GET_CONST(mediaAuditResultDetail_, GetMediaAuditResultDetailResponseBody::MediaAuditResultDetail) };
    inline GetMediaAuditResultDetailResponseBody::MediaAuditResultDetail getMediaAuditResultDetail() { DARABONBA_PTR_GET(mediaAuditResultDetail_, GetMediaAuditResultDetailResponseBody::MediaAuditResultDetail) };
    inline GetMediaAuditResultDetailResponseBody& setMediaAuditResultDetail(const GetMediaAuditResultDetailResponseBody::MediaAuditResultDetail & mediaAuditResultDetail) { DARABONBA_PTR_SET_VALUE(mediaAuditResultDetail_, mediaAuditResultDetail) };
    inline GetMediaAuditResultDetailResponseBody& setMediaAuditResultDetail(GetMediaAuditResultDetailResponseBody::MediaAuditResultDetail && mediaAuditResultDetail) { DARABONBA_PTR_SET_RVALUE(mediaAuditResultDetail_, mediaAuditResultDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about review results.
    shared_ptr<GetMediaAuditResultDetailResponseBody::MediaAuditResultDetail> mediaAuditResultDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
