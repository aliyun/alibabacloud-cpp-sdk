// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYVIDEOSTATISRESPONSEBODY_HPP_
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
  class DescribePlayVideoStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayVideoStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoPlayStatisDetails, videoPlayStatisDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayVideoStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoPlayStatisDetails, videoPlayStatisDetails_);
    };
    DescribePlayVideoStatisResponseBody() = default ;
    DescribePlayVideoStatisResponseBody(const DescribePlayVideoStatisResponseBody &) = default ;
    DescribePlayVideoStatisResponseBody(DescribePlayVideoStatisResponseBody &&) = default ;
    DescribePlayVideoStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayVideoStatisResponseBody() = default ;
    DescribePlayVideoStatisResponseBody& operator=(const DescribePlayVideoStatisResponseBody &) = default ;
    DescribePlayVideoStatisResponseBody& operator=(DescribePlayVideoStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoPlayStatisDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoPlayStatisDetails& obj) { 
        DARABONBA_PTR_TO_JSON(VideoPlayStatisDetail, videoPlayStatisDetail_);
      };
      friend void from_json(const Darabonba::Json& j, VideoPlayStatisDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(VideoPlayStatisDetail, videoPlayStatisDetail_);
      };
      VideoPlayStatisDetails() = default ;
      VideoPlayStatisDetails(const VideoPlayStatisDetails &) = default ;
      VideoPlayStatisDetails(VideoPlayStatisDetails &&) = default ;
      VideoPlayStatisDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoPlayStatisDetails() = default ;
      VideoPlayStatisDetails& operator=(const VideoPlayStatisDetails &) = default ;
      VideoPlayStatisDetails& operator=(VideoPlayStatisDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoPlayStatisDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoPlayStatisDetail& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
          DARABONBA_PTR_TO_JSON(PlayRange, playRange_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UV, UV_);
          DARABONBA_PTR_TO_JSON(VV, VV_);
        };
        friend void from_json(const Darabonba::Json& j, VideoPlayStatisDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
          DARABONBA_PTR_FROM_JSON(PlayRange, playRange_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UV, UV_);
          DARABONBA_PTR_FROM_JSON(VV, VV_);
        };
        VideoPlayStatisDetail() = default ;
        VideoPlayStatisDetail(const VideoPlayStatisDetail &) = default ;
        VideoPlayStatisDetail(VideoPlayStatisDetail &&) = default ;
        VideoPlayStatisDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoPlayStatisDetail() = default ;
        VideoPlayStatisDetail& operator=(const VideoPlayStatisDetail &) = default ;
        VideoPlayStatisDetail& operator=(VideoPlayStatisDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->playDuration_ == nullptr && this->playRange_ == nullptr && this->title_ == nullptr && this->UV_ == nullptr && this->VV_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline VideoPlayStatisDetail& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // playDuration Field Functions 
        bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
        void deletePlayDuration() { this->playDuration_ = nullptr;};
        inline string getPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
        inline VideoPlayStatisDetail& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


        // playRange Field Functions 
        bool hasPlayRange() const { return this->playRange_ != nullptr;};
        void deletePlayRange() { this->playRange_ = nullptr;};
        inline string getPlayRange() const { DARABONBA_PTR_GET_DEFAULT(playRange_, "") };
        inline VideoPlayStatisDetail& setPlayRange(string playRange) { DARABONBA_PTR_SET_VALUE(playRange_, playRange) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline VideoPlayStatisDetail& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // UV Field Functions 
        bool hasUV() const { return this->UV_ != nullptr;};
        void deleteUV() { this->UV_ = nullptr;};
        inline string getUV() const { DARABONBA_PTR_GET_DEFAULT(UV_, "") };
        inline VideoPlayStatisDetail& setUV(string UV) { DARABONBA_PTR_SET_VALUE(UV_, UV) };


        // VV Field Functions 
        bool hasVV() const { return this->VV_ != nullptr;};
        void deleteVV() { this->VV_ = nullptr;};
        inline string getVV() const { DARABONBA_PTR_GET_DEFAULT(VV_, "") };
        inline VideoPlayStatisDetail& setVV(string VV) { DARABONBA_PTR_SET_VALUE(VV_, VV) };


      protected:
        // The date. The time follows the ISO 8601 standard in the *YYYY-MM-DD*T*hh:mm:ss* format. The time is displayed in UTC.
        shared_ptr<string> date_ {};
        // The total playback duration. Unit: milliseconds.
        shared_ptr<string> playDuration_ {};
        // The distribution of the playback duration.
        shared_ptr<string> playRange_ {};
        // The video title.
        shared_ptr<string> title_ {};
        // The number of unique visitors.
        shared_ptr<string> UV_ {};
        // The number of video views.
        shared_ptr<string> VV_ {};
      };

      virtual bool empty() const override { return this->videoPlayStatisDetail_ == nullptr; };
      // videoPlayStatisDetail Field Functions 
      bool hasVideoPlayStatisDetail() const { return this->videoPlayStatisDetail_ != nullptr;};
      void deleteVideoPlayStatisDetail() { this->videoPlayStatisDetail_ = nullptr;};
      inline const vector<VideoPlayStatisDetails::VideoPlayStatisDetail> & getVideoPlayStatisDetail() const { DARABONBA_PTR_GET_CONST(videoPlayStatisDetail_, vector<VideoPlayStatisDetails::VideoPlayStatisDetail>) };
      inline vector<VideoPlayStatisDetails::VideoPlayStatisDetail> getVideoPlayStatisDetail() { DARABONBA_PTR_GET(videoPlayStatisDetail_, vector<VideoPlayStatisDetails::VideoPlayStatisDetail>) };
      inline VideoPlayStatisDetails& setVideoPlayStatisDetail(const vector<VideoPlayStatisDetails::VideoPlayStatisDetail> & videoPlayStatisDetail) { DARABONBA_PTR_SET_VALUE(videoPlayStatisDetail_, videoPlayStatisDetail) };
      inline VideoPlayStatisDetails& setVideoPlayStatisDetail(vector<VideoPlayStatisDetails::VideoPlayStatisDetail> && videoPlayStatisDetail) { DARABONBA_PTR_SET_RVALUE(videoPlayStatisDetail_, videoPlayStatisDetail) };


    protected:
      shared_ptr<vector<VideoPlayStatisDetails::VideoPlayStatisDetail>> videoPlayStatisDetail_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->videoPlayStatisDetails_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayVideoStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoPlayStatisDetails Field Functions 
    bool hasVideoPlayStatisDetails() const { return this->videoPlayStatisDetails_ != nullptr;};
    void deleteVideoPlayStatisDetails() { this->videoPlayStatisDetails_ = nullptr;};
    inline const DescribePlayVideoStatisResponseBody::VideoPlayStatisDetails & getVideoPlayStatisDetails() const { DARABONBA_PTR_GET_CONST(videoPlayStatisDetails_, DescribePlayVideoStatisResponseBody::VideoPlayStatisDetails) };
    inline DescribePlayVideoStatisResponseBody::VideoPlayStatisDetails getVideoPlayStatisDetails() { DARABONBA_PTR_GET(videoPlayStatisDetails_, DescribePlayVideoStatisResponseBody::VideoPlayStatisDetails) };
    inline DescribePlayVideoStatisResponseBody& setVideoPlayStatisDetails(const DescribePlayVideoStatisResponseBody::VideoPlayStatisDetails & videoPlayStatisDetails) { DARABONBA_PTR_SET_VALUE(videoPlayStatisDetails_, videoPlayStatisDetails) };
    inline DescribePlayVideoStatisResponseBody& setVideoPlayStatisDetails(DescribePlayVideoStatisResponseBody::VideoPlayStatisDetails && videoPlayStatisDetails) { DARABONBA_PTR_SET_RVALUE(videoPlayStatisDetails_, videoPlayStatisDetails) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The daily playback statistics on the video.
    shared_ptr<DescribePlayVideoStatisResponseBody::VideoPlayStatisDetails> videoPlayStatisDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
