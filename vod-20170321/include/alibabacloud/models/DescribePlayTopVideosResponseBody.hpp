// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODY_HPP_
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
  class DescribePlayTopVideosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayTopVideosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopPlayVideos, topPlayVideos_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayTopVideosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopPlayVideos, topPlayVideos_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    DescribePlayTopVideosResponseBody() = default ;
    DescribePlayTopVideosResponseBody(const DescribePlayTopVideosResponseBody &) = default ;
    DescribePlayTopVideosResponseBody(DescribePlayTopVideosResponseBody &&) = default ;
    DescribePlayTopVideosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayTopVideosResponseBody() = default ;
    DescribePlayTopVideosResponseBody& operator=(const DescribePlayTopVideosResponseBody &) = default ;
    DescribePlayTopVideosResponseBody& operator=(DescribePlayTopVideosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopPlayVideos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopPlayVideos& obj) { 
        DARABONBA_PTR_TO_JSON(TopPlayVideoStatis, topPlayVideoStatis_);
      };
      friend void from_json(const Darabonba::Json& j, TopPlayVideos& obj) { 
        DARABONBA_PTR_FROM_JSON(TopPlayVideoStatis, topPlayVideoStatis_);
      };
      TopPlayVideos() = default ;
      TopPlayVideos(const TopPlayVideos &) = default ;
      TopPlayVideos(TopPlayVideos &&) = default ;
      TopPlayVideos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopPlayVideos() = default ;
      TopPlayVideos& operator=(const TopPlayVideos &) = default ;
      TopPlayVideos& operator=(TopPlayVideos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TopPlayVideoStatis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopPlayVideoStatis& obj) { 
          DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UV, UV_);
          DARABONBA_PTR_TO_JSON(VV, VV_);
          DARABONBA_PTR_TO_JSON(VideoId, videoId_);
        };
        friend void from_json(const Darabonba::Json& j, TopPlayVideoStatis& obj) { 
          DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UV, UV_);
          DARABONBA_PTR_FROM_JSON(VV, VV_);
          DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
        };
        TopPlayVideoStatis() = default ;
        TopPlayVideoStatis(const TopPlayVideoStatis &) = default ;
        TopPlayVideoStatis(TopPlayVideoStatis &&) = default ;
        TopPlayVideoStatis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopPlayVideoStatis() = default ;
        TopPlayVideoStatis& operator=(const TopPlayVideoStatis &) = default ;
        TopPlayVideoStatis& operator=(TopPlayVideoStatis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->playDuration_ == nullptr
        && this->title_ == nullptr && this->UV_ == nullptr && this->VV_ == nullptr && this->videoId_ == nullptr; };
        // playDuration Field Functions 
        bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
        void deletePlayDuration() { this->playDuration_ = nullptr;};
        inline string getPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
        inline TopPlayVideoStatis& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline TopPlayVideoStatis& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // UV Field Functions 
        bool hasUV() const { return this->UV_ != nullptr;};
        void deleteUV() { this->UV_ = nullptr;};
        inline string getUV() const { DARABONBA_PTR_GET_DEFAULT(UV_, "") };
        inline TopPlayVideoStatis& setUV(string UV) { DARABONBA_PTR_SET_VALUE(UV_, UV) };


        // VV Field Functions 
        bool hasVV() const { return this->VV_ != nullptr;};
        void deleteVV() { this->VV_ = nullptr;};
        inline string getVV() const { DARABONBA_PTR_GET_DEFAULT(VV_, "") };
        inline TopPlayVideoStatis& setVV(string VV) { DARABONBA_PTR_SET_VALUE(VV_, VV) };


        // videoId Field Functions 
        bool hasVideoId() const { return this->videoId_ != nullptr;};
        void deleteVideoId() { this->videoId_ = nullptr;};
        inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
        inline TopPlayVideoStatis& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


      protected:
        // The total playback duration. Unit: milliseconds.
        shared_ptr<string> playDuration_ {};
        // The title of the video.
        shared_ptr<string> title_ {};
        // The number of unique visitors.
        shared_ptr<string> UV_ {};
        // The number of video views.
        shared_ptr<string> VV_ {};
        // The ID of the video.
        shared_ptr<string> videoId_ {};
      };

      virtual bool empty() const override { return this->topPlayVideoStatis_ == nullptr; };
      // topPlayVideoStatis Field Functions 
      bool hasTopPlayVideoStatis() const { return this->topPlayVideoStatis_ != nullptr;};
      void deleteTopPlayVideoStatis() { this->topPlayVideoStatis_ = nullptr;};
      inline const vector<TopPlayVideos::TopPlayVideoStatis> & getTopPlayVideoStatis() const { DARABONBA_PTR_GET_CONST(topPlayVideoStatis_, vector<TopPlayVideos::TopPlayVideoStatis>) };
      inline vector<TopPlayVideos::TopPlayVideoStatis> getTopPlayVideoStatis() { DARABONBA_PTR_GET(topPlayVideoStatis_, vector<TopPlayVideos::TopPlayVideoStatis>) };
      inline TopPlayVideos& setTopPlayVideoStatis(const vector<TopPlayVideos::TopPlayVideoStatis> & topPlayVideoStatis) { DARABONBA_PTR_SET_VALUE(topPlayVideoStatis_, topPlayVideoStatis) };
      inline TopPlayVideos& setTopPlayVideoStatis(vector<TopPlayVideos::TopPlayVideoStatis> && topPlayVideoStatis) { DARABONBA_PTR_SET_RVALUE(topPlayVideoStatis_, topPlayVideoStatis) };


    protected:
      shared_ptr<vector<TopPlayVideos::TopPlayVideoStatis>> topPlayVideoStatis_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->topPlayVideos_ == nullptr && this->totalNum_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribePlayTopVideosResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePlayTopVideosResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayTopVideosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topPlayVideos Field Functions 
    bool hasTopPlayVideos() const { return this->topPlayVideos_ != nullptr;};
    void deleteTopPlayVideos() { this->topPlayVideos_ = nullptr;};
    inline const DescribePlayTopVideosResponseBody::TopPlayVideos & getTopPlayVideos() const { DARABONBA_PTR_GET_CONST(topPlayVideos_, DescribePlayTopVideosResponseBody::TopPlayVideos) };
    inline DescribePlayTopVideosResponseBody::TopPlayVideos getTopPlayVideos() { DARABONBA_PTR_GET(topPlayVideos_, DescribePlayTopVideosResponseBody::TopPlayVideos) };
    inline DescribePlayTopVideosResponseBody& setTopPlayVideos(const DescribePlayTopVideosResponseBody::TopPlayVideos & topPlayVideos) { DARABONBA_PTR_SET_VALUE(topPlayVideos_, topPlayVideos) };
    inline DescribePlayTopVideosResponseBody& setTopPlayVideos(DescribePlayTopVideosResponseBody::TopPlayVideos && topPlayVideos) { DARABONBA_PTR_SET_RVALUE(topPlayVideos_, topPlayVideos) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribePlayTopVideosResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The daily playback statistics on each top video.
    shared_ptr<DescribePlayTopVideosResponseBody::TopPlayVideos> topPlayVideos_ {};
    // The total number of entries that were collected in playback statistics on top videos.
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
