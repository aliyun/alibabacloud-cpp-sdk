// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveGrtnDurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveGrtnDurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamDetailData, streamDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveGrtnDurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamDetailData, streamDetailData_);
    };
    DescribeLiveGrtnDurationResponseBody() = default ;
    DescribeLiveGrtnDurationResponseBody(const DescribeLiveGrtnDurationResponseBody &) = default ;
    DescribeLiveGrtnDurationResponseBody(DescribeLiveGrtnDurationResponseBody &&) = default ;
    DescribeLiveGrtnDurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveGrtnDurationResponseBody() = default ;
    DescribeLiveGrtnDurationResponseBody& operator=(const DescribeLiveGrtnDurationResponseBody &) = default ;
    DescribeLiveGrtnDurationResponseBody& operator=(DescribeLiveGrtnDurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamDetailData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamDetailData& obj) { 
        DARABONBA_PTR_TO_JSON(StreamData, streamData_);
      };
      friend void from_json(const Darabonba::Json& j, StreamDetailData& obj) { 
        DARABONBA_PTR_FROM_JSON(StreamData, streamData_);
      };
      StreamDetailData() = default ;
      StreamDetailData(const StreamDetailData &) = default ;
      StreamDetailData(StreamDetailData &&) = default ;
      StreamDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamDetailData() = default ;
      StreamDetailData& operator=(const StreamDetailData &) = default ;
      StreamDetailData& operator=(StreamDetailData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamData& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(MediaProfile, mediaProfile_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, StreamData& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(MediaProfile, mediaProfile_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        StreamData() = default ;
        StreamData(const StreamData &) = default ;
        StreamData(StreamData &&) = default ;
        StreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamData() = default ;
        StreamData& operator=(const StreamData &) = default ;
        StreamData& operator=(StreamData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->duration_ == nullptr && this->mediaProfile_ == nullptr && this->mediaType_ == nullptr && this->timeStamp_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline StreamData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline StreamData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // mediaProfile Field Functions 
        bool hasMediaProfile() const { return this->mediaProfile_ != nullptr;};
        void deleteMediaProfile() { this->mediaProfile_ = nullptr;};
        inline string getMediaProfile() const { DARABONBA_PTR_GET_DEFAULT(mediaProfile_, "") };
        inline StreamData& setMediaProfile(string mediaProfile) { DARABONBA_PTR_SET_VALUE(mediaProfile_, mediaProfile) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline StreamData& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline StreamData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The co-streaming duration. Unit: minutes.
        shared_ptr<int64_t> duration_ {};
        // The media specification. Valid values:
        // 
        // *   0: audio-only. This is a basic specification.
        // *   480P: standard definition (SD). The video resolution is 640 × 480 or lower.
        // *   720P: high definition (HD). The video resolution is 1280 × 720 or lower.
        // *   1080P: full HD. The video resolution is 1920 × 1080 or lower.
        shared_ptr<string> mediaProfile_ {};
        // The media type. Valid values:
        // 
        // *   audio
        // *   video
        shared_ptr<string> mediaType_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->streamData_ == nullptr; };
      // streamData Field Functions 
      bool hasStreamData() const { return this->streamData_ != nullptr;};
      void deleteStreamData() { this->streamData_ = nullptr;};
      inline const vector<StreamDetailData::StreamData> & getStreamData() const { DARABONBA_PTR_GET_CONST(streamData_, vector<StreamDetailData::StreamData>) };
      inline vector<StreamDetailData::StreamData> getStreamData() { DARABONBA_PTR_GET(streamData_, vector<StreamDetailData::StreamData>) };
      inline StreamDetailData& setStreamData(const vector<StreamDetailData::StreamData> & streamData) { DARABONBA_PTR_SET_VALUE(streamData_, streamData) };
      inline StreamDetailData& setStreamData(vector<StreamDetailData::StreamData> && streamData) { DARABONBA_PTR_SET_RVALUE(streamData_, streamData) };


    protected:
      shared_ptr<vector<StreamDetailData::StreamData>> streamData_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->streamDetailData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveGrtnDurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamDetailData Field Functions 
    bool hasStreamDetailData() const { return this->streamDetailData_ != nullptr;};
    void deleteStreamDetailData() { this->streamDetailData_ = nullptr;};
    inline const DescribeLiveGrtnDurationResponseBody::StreamDetailData & getStreamDetailData() const { DARABONBA_PTR_GET_CONST(streamDetailData_, DescribeLiveGrtnDurationResponseBody::StreamDetailData) };
    inline DescribeLiveGrtnDurationResponseBody::StreamDetailData getStreamDetailData() { DARABONBA_PTR_GET(streamDetailData_, DescribeLiveGrtnDurationResponseBody::StreamDetailData) };
    inline DescribeLiveGrtnDurationResponseBody& setStreamDetailData(const DescribeLiveGrtnDurationResponseBody::StreamDetailData & streamDetailData) { DARABONBA_PTR_SET_VALUE(streamDetailData_, streamDetailData) };
    inline DescribeLiveGrtnDurationResponseBody& setStreamDetailData(DescribeLiveGrtnDurationResponseBody::StreamDetailData && streamDetailData) { DARABONBA_PTR_SET_RVALUE(streamDetailData_, streamDetailData) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the co-streaming usage data.
    shared_ptr<DescribeLiveGrtnDurationResponseBody::StreamDetailData> streamDetailData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
