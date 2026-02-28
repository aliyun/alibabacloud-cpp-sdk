// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODY_HPP_
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
  class DescribeRtcPeakChannelCntDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcPeakChannelCntDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PeakChannelCntDataPerInterval, peakChannelCntDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcPeakChannelCntDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PeakChannelCntDataPerInterval, peakChannelCntDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRtcPeakChannelCntDataResponseBody() = default ;
    DescribeRtcPeakChannelCntDataResponseBody(const DescribeRtcPeakChannelCntDataResponseBody &) = default ;
    DescribeRtcPeakChannelCntDataResponseBody(DescribeRtcPeakChannelCntDataResponseBody &&) = default ;
    DescribeRtcPeakChannelCntDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcPeakChannelCntDataResponseBody() = default ;
    DescribeRtcPeakChannelCntDataResponseBody& operator=(const DescribeRtcPeakChannelCntDataResponseBody &) = default ;
    DescribeRtcPeakChannelCntDataResponseBody& operator=(DescribeRtcPeakChannelCntDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PeakChannelCntDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PeakChannelCntDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(PeakChannelCntModule, peakChannelCntModule_);
      };
      friend void from_json(const Darabonba::Json& j, PeakChannelCntDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(PeakChannelCntModule, peakChannelCntModule_);
      };
      PeakChannelCntDataPerInterval() = default ;
      PeakChannelCntDataPerInterval(const PeakChannelCntDataPerInterval &) = default ;
      PeakChannelCntDataPerInterval(PeakChannelCntDataPerInterval &&) = default ;
      PeakChannelCntDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PeakChannelCntDataPerInterval() = default ;
      PeakChannelCntDataPerInterval& operator=(const PeakChannelCntDataPerInterval &) = default ;
      PeakChannelCntDataPerInterval& operator=(PeakChannelCntDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PeakChannelCntModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeakChannelCntModule& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveChannelPeak, activeChannelPeak_);
          DARABONBA_PTR_TO_JSON(ActiveChannelPeakTime, activeChannelPeakTime_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, PeakChannelCntModule& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveChannelPeak, activeChannelPeak_);
          DARABONBA_PTR_FROM_JSON(ActiveChannelPeakTime, activeChannelPeakTime_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        PeakChannelCntModule() = default ;
        PeakChannelCntModule(const PeakChannelCntModule &) = default ;
        PeakChannelCntModule(PeakChannelCntModule &&) = default ;
        PeakChannelCntModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeakChannelCntModule() = default ;
        PeakChannelCntModule& operator=(const PeakChannelCntModule &) = default ;
        PeakChannelCntModule& operator=(PeakChannelCntModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeChannelPeak_ == nullptr
        && this->activeChannelPeakTime_ == nullptr && this->timeStamp_ == nullptr; };
        // activeChannelPeak Field Functions 
        bool hasActiveChannelPeak() const { return this->activeChannelPeak_ != nullptr;};
        void deleteActiveChannelPeak() { this->activeChannelPeak_ = nullptr;};
        inline int64_t getActiveChannelPeak() const { DARABONBA_PTR_GET_DEFAULT(activeChannelPeak_, 0L) };
        inline PeakChannelCntModule& setActiveChannelPeak(int64_t activeChannelPeak) { DARABONBA_PTR_SET_VALUE(activeChannelPeak_, activeChannelPeak) };


        // activeChannelPeakTime Field Functions 
        bool hasActiveChannelPeakTime() const { return this->activeChannelPeakTime_ != nullptr;};
        void deleteActiveChannelPeakTime() { this->activeChannelPeakTime_ = nullptr;};
        inline string getActiveChannelPeakTime() const { DARABONBA_PTR_GET_DEFAULT(activeChannelPeakTime_, "") };
        inline PeakChannelCntModule& setActiveChannelPeakTime(string activeChannelPeakTime) { DARABONBA_PTR_SET_VALUE(activeChannelPeakTime_, activeChannelPeakTime) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline PeakChannelCntModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<int64_t> activeChannelPeak_ {};
        shared_ptr<string> activeChannelPeakTime_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->peakChannelCntModule_ == nullptr; };
      // peakChannelCntModule Field Functions 
      bool hasPeakChannelCntModule() const { return this->peakChannelCntModule_ != nullptr;};
      void deletePeakChannelCntModule() { this->peakChannelCntModule_ = nullptr;};
      inline const vector<PeakChannelCntDataPerInterval::PeakChannelCntModule> & getPeakChannelCntModule() const { DARABONBA_PTR_GET_CONST(peakChannelCntModule_, vector<PeakChannelCntDataPerInterval::PeakChannelCntModule>) };
      inline vector<PeakChannelCntDataPerInterval::PeakChannelCntModule> getPeakChannelCntModule() { DARABONBA_PTR_GET(peakChannelCntModule_, vector<PeakChannelCntDataPerInterval::PeakChannelCntModule>) };
      inline PeakChannelCntDataPerInterval& setPeakChannelCntModule(const vector<PeakChannelCntDataPerInterval::PeakChannelCntModule> & peakChannelCntModule) { DARABONBA_PTR_SET_VALUE(peakChannelCntModule_, peakChannelCntModule) };
      inline PeakChannelCntDataPerInterval& setPeakChannelCntModule(vector<PeakChannelCntDataPerInterval::PeakChannelCntModule> && peakChannelCntModule) { DARABONBA_PTR_SET_RVALUE(peakChannelCntModule_, peakChannelCntModule) };


    protected:
      shared_ptr<vector<PeakChannelCntDataPerInterval::PeakChannelCntModule>> peakChannelCntModule_ {};
    };

    virtual bool empty() const override { return this->peakChannelCntDataPerInterval_ == nullptr
        && this->requestId_ == nullptr; };
    // peakChannelCntDataPerInterval Field Functions 
    bool hasPeakChannelCntDataPerInterval() const { return this->peakChannelCntDataPerInterval_ != nullptr;};
    void deletePeakChannelCntDataPerInterval() { this->peakChannelCntDataPerInterval_ = nullptr;};
    inline const DescribeRtcPeakChannelCntDataResponseBody::PeakChannelCntDataPerInterval & getPeakChannelCntDataPerInterval() const { DARABONBA_PTR_GET_CONST(peakChannelCntDataPerInterval_, DescribeRtcPeakChannelCntDataResponseBody::PeakChannelCntDataPerInterval) };
    inline DescribeRtcPeakChannelCntDataResponseBody::PeakChannelCntDataPerInterval getPeakChannelCntDataPerInterval() { DARABONBA_PTR_GET(peakChannelCntDataPerInterval_, DescribeRtcPeakChannelCntDataResponseBody::PeakChannelCntDataPerInterval) };
    inline DescribeRtcPeakChannelCntDataResponseBody& setPeakChannelCntDataPerInterval(const DescribeRtcPeakChannelCntDataResponseBody::PeakChannelCntDataPerInterval & peakChannelCntDataPerInterval) { DARABONBA_PTR_SET_VALUE(peakChannelCntDataPerInterval_, peakChannelCntDataPerInterval) };
    inline DescribeRtcPeakChannelCntDataResponseBody& setPeakChannelCntDataPerInterval(DescribeRtcPeakChannelCntDataResponseBody::PeakChannelCntDataPerInterval && peakChannelCntDataPerInterval) { DARABONBA_PTR_SET_RVALUE(peakChannelCntDataPerInterval_, peakChannelCntDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcPeakChannelCntDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeRtcPeakChannelCntDataResponseBody::PeakChannelCntDataPerInterval> peakChannelCntDataPerInterval_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
