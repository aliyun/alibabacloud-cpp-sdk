// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelMetricInfo, channelMetricInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelMetricInfo, channelMetricInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRtcChannelMetricResponseBody() = default ;
    DescribeRtcChannelMetricResponseBody(const DescribeRtcChannelMetricResponseBody &) = default ;
    DescribeRtcChannelMetricResponseBody(DescribeRtcChannelMetricResponseBody &&) = default ;
    DescribeRtcChannelMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelMetricResponseBody() = default ;
    DescribeRtcChannelMetricResponseBody& operator=(const DescribeRtcChannelMetricResponseBody &) = default ;
    DescribeRtcChannelMetricResponseBody& operator=(DescribeRtcChannelMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChannelMetricInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChannelMetricInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelMetric, channelMetric_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
      };
      friend void from_json(const Darabonba::Json& j, ChannelMetricInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelMetric, channelMetric_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
      };
      ChannelMetricInfo() = default ;
      ChannelMetricInfo(const ChannelMetricInfo &) = default ;
      ChannelMetricInfo(ChannelMetricInfo &&) = default ;
      ChannelMetricInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChannelMetricInfo() = default ;
      ChannelMetricInfo& operator=(const ChannelMetricInfo &) = default ;
      ChannelMetricInfo& operator=(ChannelMetricInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Duration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Duration& obj) { 
          DARABONBA_PTR_TO_JSON(PubDuration, pubDuration_);
          DARABONBA_PTR_TO_JSON(SubDuration, subDuration_);
        };
        friend void from_json(const Darabonba::Json& j, Duration& obj) { 
          DARABONBA_PTR_FROM_JSON(PubDuration, pubDuration_);
          DARABONBA_PTR_FROM_JSON(SubDuration, subDuration_);
        };
        Duration() = default ;
        Duration(const Duration &) = default ;
        Duration(Duration &&) = default ;
        Duration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Duration() = default ;
        Duration& operator=(const Duration &) = default ;
        Duration& operator=(Duration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubDuration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubDuration& obj) { 
            DARABONBA_PTR_TO_JSON(Audio, audio_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Video1080, video1080_);
            DARABONBA_PTR_TO_JSON(Video360, video360_);
            DARABONBA_PTR_TO_JSON(Video720, video720_);
          };
          friend void from_json(const Darabonba::Json& j, SubDuration& obj) { 
            DARABONBA_PTR_FROM_JSON(Audio, audio_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Video1080, video1080_);
            DARABONBA_PTR_FROM_JSON(Video360, video360_);
            DARABONBA_PTR_FROM_JSON(Video720, video720_);
          };
          SubDuration() = default ;
          SubDuration(const SubDuration &) = default ;
          SubDuration(SubDuration &&) = default ;
          SubDuration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubDuration() = default ;
          SubDuration& operator=(const SubDuration &) = default ;
          SubDuration& operator=(SubDuration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->audio_ == nullptr
        && this->content_ == nullptr && this->video1080_ == nullptr && this->video360_ == nullptr && this->video720_ == nullptr; };
          // audio Field Functions 
          bool hasAudio() const { return this->audio_ != nullptr;};
          void deleteAudio() { this->audio_ = nullptr;};
          inline int32_t getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, 0) };
          inline SubDuration& setAudio(int32_t audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline int32_t getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, 0) };
          inline SubDuration& setContent(int32_t content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // video1080 Field Functions 
          bool hasVideo1080() const { return this->video1080_ != nullptr;};
          void deleteVideo1080() { this->video1080_ = nullptr;};
          inline int32_t getVideo1080() const { DARABONBA_PTR_GET_DEFAULT(video1080_, 0) };
          inline SubDuration& setVideo1080(int32_t video1080) { DARABONBA_PTR_SET_VALUE(video1080_, video1080) };


          // video360 Field Functions 
          bool hasVideo360() const { return this->video360_ != nullptr;};
          void deleteVideo360() { this->video360_ = nullptr;};
          inline int32_t getVideo360() const { DARABONBA_PTR_GET_DEFAULT(video360_, 0) };
          inline SubDuration& setVideo360(int32_t video360) { DARABONBA_PTR_SET_VALUE(video360_, video360) };


          // video720 Field Functions 
          bool hasVideo720() const { return this->video720_ != nullptr;};
          void deleteVideo720() { this->video720_ = nullptr;};
          inline int32_t getVideo720() const { DARABONBA_PTR_GET_DEFAULT(video720_, 0) };
          inline SubDuration& setVideo720(int32_t video720) { DARABONBA_PTR_SET_VALUE(video720_, video720) };


        protected:
          shared_ptr<int32_t> audio_ {};
          shared_ptr<int32_t> content_ {};
          shared_ptr<int32_t> video1080_ {};
          shared_ptr<int32_t> video360_ {};
          shared_ptr<int32_t> video720_ {};
        };

        class PubDuration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PubDuration& obj) { 
            DARABONBA_PTR_TO_JSON(Audio, audio_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Video1080, video1080_);
            DARABONBA_PTR_TO_JSON(Video360, video360_);
            DARABONBA_PTR_TO_JSON(Video720, video720_);
          };
          friend void from_json(const Darabonba::Json& j, PubDuration& obj) { 
            DARABONBA_PTR_FROM_JSON(Audio, audio_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Video1080, video1080_);
            DARABONBA_PTR_FROM_JSON(Video360, video360_);
            DARABONBA_PTR_FROM_JSON(Video720, video720_);
          };
          PubDuration() = default ;
          PubDuration(const PubDuration &) = default ;
          PubDuration(PubDuration &&) = default ;
          PubDuration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PubDuration() = default ;
          PubDuration& operator=(const PubDuration &) = default ;
          PubDuration& operator=(PubDuration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->audio_ == nullptr
        && this->content_ == nullptr && this->video1080_ == nullptr && this->video360_ == nullptr && this->video720_ == nullptr; };
          // audio Field Functions 
          bool hasAudio() const { return this->audio_ != nullptr;};
          void deleteAudio() { this->audio_ = nullptr;};
          inline int32_t getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, 0) };
          inline PubDuration& setAudio(int32_t audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline int32_t getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, 0) };
          inline PubDuration& setContent(int32_t content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // video1080 Field Functions 
          bool hasVideo1080() const { return this->video1080_ != nullptr;};
          void deleteVideo1080() { this->video1080_ = nullptr;};
          inline int32_t getVideo1080() const { DARABONBA_PTR_GET_DEFAULT(video1080_, 0) };
          inline PubDuration& setVideo1080(int32_t video1080) { DARABONBA_PTR_SET_VALUE(video1080_, video1080) };


          // video360 Field Functions 
          bool hasVideo360() const { return this->video360_ != nullptr;};
          void deleteVideo360() { this->video360_ = nullptr;};
          inline int32_t getVideo360() const { DARABONBA_PTR_GET_DEFAULT(video360_, 0) };
          inline PubDuration& setVideo360(int32_t video360) { DARABONBA_PTR_SET_VALUE(video360_, video360) };


          // video720 Field Functions 
          bool hasVideo720() const { return this->video720_ != nullptr;};
          void deleteVideo720() { this->video720_ = nullptr;};
          inline int32_t getVideo720() const { DARABONBA_PTR_GET_DEFAULT(video720_, 0) };
          inline PubDuration& setVideo720(int32_t video720) { DARABONBA_PTR_SET_VALUE(video720_, video720) };


        protected:
          shared_ptr<int32_t> audio_ {};
          shared_ptr<int32_t> content_ {};
          shared_ptr<int32_t> video1080_ {};
          shared_ptr<int32_t> video360_ {};
          shared_ptr<int32_t> video720_ {};
        };

        virtual bool empty() const override { return this->pubDuration_ == nullptr
        && this->subDuration_ == nullptr; };
        // pubDuration Field Functions 
        bool hasPubDuration() const { return this->pubDuration_ != nullptr;};
        void deletePubDuration() { this->pubDuration_ = nullptr;};
        inline const Duration::PubDuration & getPubDuration() const { DARABONBA_PTR_GET_CONST(pubDuration_, Duration::PubDuration) };
        inline Duration::PubDuration getPubDuration() { DARABONBA_PTR_GET(pubDuration_, Duration::PubDuration) };
        inline Duration& setPubDuration(const Duration::PubDuration & pubDuration) { DARABONBA_PTR_SET_VALUE(pubDuration_, pubDuration) };
        inline Duration& setPubDuration(Duration::PubDuration && pubDuration) { DARABONBA_PTR_SET_RVALUE(pubDuration_, pubDuration) };


        // subDuration Field Functions 
        bool hasSubDuration() const { return this->subDuration_ != nullptr;};
        void deleteSubDuration() { this->subDuration_ = nullptr;};
        inline const Duration::SubDuration & getSubDuration() const { DARABONBA_PTR_GET_CONST(subDuration_, Duration::SubDuration) };
        inline Duration::SubDuration getSubDuration() { DARABONBA_PTR_GET(subDuration_, Duration::SubDuration) };
        inline Duration& setSubDuration(const Duration::SubDuration & subDuration) { DARABONBA_PTR_SET_VALUE(subDuration_, subDuration) };
        inline Duration& setSubDuration(Duration::SubDuration && subDuration) { DARABONBA_PTR_SET_RVALUE(subDuration_, subDuration) };


      protected:
        shared_ptr<Duration::PubDuration> pubDuration_ {};
        shared_ptr<Duration::SubDuration> subDuration_ {};
      };

      class ChannelMetric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelMetric& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(PubUserCount, pubUserCount_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(SubUserCount, subUserCount_);
          DARABONBA_PTR_TO_JSON(UserCount, userCount_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelMetric& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(PubUserCount, pubUserCount_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(SubUserCount, subUserCount_);
          DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
        };
        ChannelMetric() = default ;
        ChannelMetric(const ChannelMetric &) = default ;
        ChannelMetric(ChannelMetric &&) = default ;
        ChannelMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelMetric() = default ;
        ChannelMetric& operator=(const ChannelMetric &) = default ;
        ChannelMetric& operator=(ChannelMetric &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelId_ == nullptr
        && this->endTime_ == nullptr && this->pubUserCount_ == nullptr && this->startTime_ == nullptr && this->subUserCount_ == nullptr && this->userCount_ == nullptr; };
        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline ChannelMetric& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline ChannelMetric& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // pubUserCount Field Functions 
        bool hasPubUserCount() const { return this->pubUserCount_ != nullptr;};
        void deletePubUserCount() { this->pubUserCount_ = nullptr;};
        inline int32_t getPubUserCount() const { DARABONBA_PTR_GET_DEFAULT(pubUserCount_, 0) };
        inline ChannelMetric& setPubUserCount(int32_t pubUserCount) { DARABONBA_PTR_SET_VALUE(pubUserCount_, pubUserCount) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ChannelMetric& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // subUserCount Field Functions 
        bool hasSubUserCount() const { return this->subUserCount_ != nullptr;};
        void deleteSubUserCount() { this->subUserCount_ = nullptr;};
        inline int32_t getSubUserCount() const { DARABONBA_PTR_GET_DEFAULT(subUserCount_, 0) };
        inline ChannelMetric& setSubUserCount(int32_t subUserCount) { DARABONBA_PTR_SET_VALUE(subUserCount_, subUserCount) };


        // userCount Field Functions 
        bool hasUserCount() const { return this->userCount_ != nullptr;};
        void deleteUserCount() { this->userCount_ = nullptr;};
        inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
        inline ChannelMetric& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


      protected:
        shared_ptr<string> channelId_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<int32_t> pubUserCount_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<int32_t> subUserCount_ {};
        shared_ptr<int32_t> userCount_ {};
      };

      virtual bool empty() const override { return this->channelMetric_ == nullptr
        && this->duration_ == nullptr; };
      // channelMetric Field Functions 
      bool hasChannelMetric() const { return this->channelMetric_ != nullptr;};
      void deleteChannelMetric() { this->channelMetric_ = nullptr;};
      inline const ChannelMetricInfo::ChannelMetric & getChannelMetric() const { DARABONBA_PTR_GET_CONST(channelMetric_, ChannelMetricInfo::ChannelMetric) };
      inline ChannelMetricInfo::ChannelMetric getChannelMetric() { DARABONBA_PTR_GET(channelMetric_, ChannelMetricInfo::ChannelMetric) };
      inline ChannelMetricInfo& setChannelMetric(const ChannelMetricInfo::ChannelMetric & channelMetric) { DARABONBA_PTR_SET_VALUE(channelMetric_, channelMetric) };
      inline ChannelMetricInfo& setChannelMetric(ChannelMetricInfo::ChannelMetric && channelMetric) { DARABONBA_PTR_SET_RVALUE(channelMetric_, channelMetric) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline const ChannelMetricInfo::Duration & getDuration() const { DARABONBA_PTR_GET_CONST(duration_, ChannelMetricInfo::Duration) };
      inline ChannelMetricInfo::Duration getDuration() { DARABONBA_PTR_GET(duration_, ChannelMetricInfo::Duration) };
      inline ChannelMetricInfo& setDuration(const ChannelMetricInfo::Duration & duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };
      inline ChannelMetricInfo& setDuration(ChannelMetricInfo::Duration && duration) { DARABONBA_PTR_SET_RVALUE(duration_, duration) };


    protected:
      shared_ptr<ChannelMetricInfo::ChannelMetric> channelMetric_ {};
      shared_ptr<ChannelMetricInfo::Duration> duration_ {};
    };

    virtual bool empty() const override { return this->channelMetricInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // channelMetricInfo Field Functions 
    bool hasChannelMetricInfo() const { return this->channelMetricInfo_ != nullptr;};
    void deleteChannelMetricInfo() { this->channelMetricInfo_ = nullptr;};
    inline const DescribeRtcChannelMetricResponseBody::ChannelMetricInfo & getChannelMetricInfo() const { DARABONBA_PTR_GET_CONST(channelMetricInfo_, DescribeRtcChannelMetricResponseBody::ChannelMetricInfo) };
    inline DescribeRtcChannelMetricResponseBody::ChannelMetricInfo getChannelMetricInfo() { DARABONBA_PTR_GET(channelMetricInfo_, DescribeRtcChannelMetricResponseBody::ChannelMetricInfo) };
    inline DescribeRtcChannelMetricResponseBody& setChannelMetricInfo(const DescribeRtcChannelMetricResponseBody::ChannelMetricInfo & channelMetricInfo) { DARABONBA_PTR_SET_VALUE(channelMetricInfo_, channelMetricInfo) };
    inline DescribeRtcChannelMetricResponseBody& setChannelMetricInfo(DescribeRtcChannelMetricResponseBody::ChannelMetricInfo && channelMetricInfo) { DARABONBA_PTR_SET_RVALUE(channelMetricInfo_, channelMetricInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcChannelMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeRtcChannelMetricResponseBody::ChannelMetricInfo> channelMetricInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
