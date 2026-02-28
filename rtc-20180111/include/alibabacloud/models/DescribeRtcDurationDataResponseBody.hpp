// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcDurationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcDurationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DurationDataPerInterval, durationDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcDurationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationDataPerInterval, durationDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRtcDurationDataResponseBody() = default ;
    DescribeRtcDurationDataResponseBody(const DescribeRtcDurationDataResponseBody &) = default ;
    DescribeRtcDurationDataResponseBody(DescribeRtcDurationDataResponseBody &&) = default ;
    DescribeRtcDurationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcDurationDataResponseBody() = default ;
    DescribeRtcDurationDataResponseBody& operator=(const DescribeRtcDurationDataResponseBody &) = default ;
    DescribeRtcDurationDataResponseBody& operator=(DescribeRtcDurationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DurationDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DurationDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DurationModule, durationModule_);
      };
      friend void from_json(const Darabonba::Json& j, DurationDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DurationModule, durationModule_);
      };
      DurationDataPerInterval() = default ;
      DurationDataPerInterval(const DurationDataPerInterval &) = default ;
      DurationDataPerInterval(DurationDataPerInterval &&) = default ;
      DurationDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DurationDataPerInterval() = default ;
      DurationDataPerInterval& operator=(const DurationDataPerInterval &) = default ;
      DurationDataPerInterval& operator=(DurationDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DurationModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DurationModule& obj) { 
          DARABONBA_PTR_TO_JSON(AudioDuration, audioDuration_);
          DARABONBA_PTR_TO_JSON(ContentDuration, contentDuration_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_TO_JSON(V1080Duration, v1080Duration_);
          DARABONBA_PTR_TO_JSON(V360Duration, v360Duration_);
          DARABONBA_PTR_TO_JSON(V720Duration, v720Duration_);
        };
        friend void from_json(const Darabonba::Json& j, DurationModule& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioDuration, audioDuration_);
          DARABONBA_PTR_FROM_JSON(ContentDuration, contentDuration_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
          DARABONBA_PTR_FROM_JSON(V1080Duration, v1080Duration_);
          DARABONBA_PTR_FROM_JSON(V360Duration, v360Duration_);
          DARABONBA_PTR_FROM_JSON(V720Duration, v720Duration_);
        };
        DurationModule() = default ;
        DurationModule(const DurationModule &) = default ;
        DurationModule(DurationModule &&) = default ;
        DurationModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DurationModule() = default ;
        DurationModule& operator=(const DurationModule &) = default ;
        DurationModule& operator=(DurationModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audioDuration_ == nullptr
        && this->contentDuration_ == nullptr && this->timeStamp_ == nullptr && this->totalDuration_ == nullptr && this->v1080Duration_ == nullptr && this->v360Duration_ == nullptr
        && this->v720Duration_ == nullptr; };
        // audioDuration Field Functions 
        bool hasAudioDuration() const { return this->audioDuration_ != nullptr;};
        void deleteAudioDuration() { this->audioDuration_ = nullptr;};
        inline int64_t getAudioDuration() const { DARABONBA_PTR_GET_DEFAULT(audioDuration_, 0L) };
        inline DurationModule& setAudioDuration(int64_t audioDuration) { DARABONBA_PTR_SET_VALUE(audioDuration_, audioDuration) };


        // contentDuration Field Functions 
        bool hasContentDuration() const { return this->contentDuration_ != nullptr;};
        void deleteContentDuration() { this->contentDuration_ = nullptr;};
        inline int64_t getContentDuration() const { DARABONBA_PTR_GET_DEFAULT(contentDuration_, 0L) };
        inline DurationModule& setContentDuration(int64_t contentDuration) { DARABONBA_PTR_SET_VALUE(contentDuration_, contentDuration) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DurationModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline DurationModule& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


        // v1080Duration Field Functions 
        bool hasV1080Duration() const { return this->v1080Duration_ != nullptr;};
        void deleteV1080Duration() { this->v1080Duration_ = nullptr;};
        inline int64_t getV1080Duration() const { DARABONBA_PTR_GET_DEFAULT(v1080Duration_, 0L) };
        inline DurationModule& setV1080Duration(int64_t v1080Duration) { DARABONBA_PTR_SET_VALUE(v1080Duration_, v1080Duration) };


        // v360Duration Field Functions 
        bool hasV360Duration() const { return this->v360Duration_ != nullptr;};
        void deleteV360Duration() { this->v360Duration_ = nullptr;};
        inline int64_t getV360Duration() const { DARABONBA_PTR_GET_DEFAULT(v360Duration_, 0L) };
        inline DurationModule& setV360Duration(int64_t v360Duration) { DARABONBA_PTR_SET_VALUE(v360Duration_, v360Duration) };


        // v720Duration Field Functions 
        bool hasV720Duration() const { return this->v720Duration_ != nullptr;};
        void deleteV720Duration() { this->v720Duration_ = nullptr;};
        inline int64_t getV720Duration() const { DARABONBA_PTR_GET_DEFAULT(v720Duration_, 0L) };
        inline DurationModule& setV720Duration(int64_t v720Duration) { DARABONBA_PTR_SET_VALUE(v720Duration_, v720Duration) };


      protected:
        shared_ptr<int64_t> audioDuration_ {};
        shared_ptr<int64_t> contentDuration_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<int64_t> totalDuration_ {};
        shared_ptr<int64_t> v1080Duration_ {};
        shared_ptr<int64_t> v360Duration_ {};
        shared_ptr<int64_t> v720Duration_ {};
      };

      virtual bool empty() const override { return this->durationModule_ == nullptr; };
      // durationModule Field Functions 
      bool hasDurationModule() const { return this->durationModule_ != nullptr;};
      void deleteDurationModule() { this->durationModule_ = nullptr;};
      inline const vector<DurationDataPerInterval::DurationModule> & getDurationModule() const { DARABONBA_PTR_GET_CONST(durationModule_, vector<DurationDataPerInterval::DurationModule>) };
      inline vector<DurationDataPerInterval::DurationModule> getDurationModule() { DARABONBA_PTR_GET(durationModule_, vector<DurationDataPerInterval::DurationModule>) };
      inline DurationDataPerInterval& setDurationModule(const vector<DurationDataPerInterval::DurationModule> & durationModule) { DARABONBA_PTR_SET_VALUE(durationModule_, durationModule) };
      inline DurationDataPerInterval& setDurationModule(vector<DurationDataPerInterval::DurationModule> && durationModule) { DARABONBA_PTR_SET_RVALUE(durationModule_, durationModule) };


    protected:
      shared_ptr<vector<DurationDataPerInterval::DurationModule>> durationModule_ {};
    };

    virtual bool empty() const override { return this->durationDataPerInterval_ == nullptr
        && this->requestId_ == nullptr; };
    // durationDataPerInterval Field Functions 
    bool hasDurationDataPerInterval() const { return this->durationDataPerInterval_ != nullptr;};
    void deleteDurationDataPerInterval() { this->durationDataPerInterval_ = nullptr;};
    inline const DescribeRtcDurationDataResponseBody::DurationDataPerInterval & getDurationDataPerInterval() const { DARABONBA_PTR_GET_CONST(durationDataPerInterval_, DescribeRtcDurationDataResponseBody::DurationDataPerInterval) };
    inline DescribeRtcDurationDataResponseBody::DurationDataPerInterval getDurationDataPerInterval() { DARABONBA_PTR_GET(durationDataPerInterval_, DescribeRtcDurationDataResponseBody::DurationDataPerInterval) };
    inline DescribeRtcDurationDataResponseBody& setDurationDataPerInterval(const DescribeRtcDurationDataResponseBody::DurationDataPerInterval & durationDataPerInterval) { DARABONBA_PTR_SET_VALUE(durationDataPerInterval_, durationDataPerInterval) };
    inline DescribeRtcDurationDataResponseBody& setDurationDataPerInterval(DescribeRtcDurationDataResponseBody::DurationDataPerInterval && durationDataPerInterval) { DARABONBA_PTR_SET_RVALUE(durationDataPerInterval_, durationDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcDurationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeRtcDurationDataResponseBody::DurationDataPerInterval> durationDataPerInterval_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
