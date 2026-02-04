// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnBgpBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnBgpBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BgpDataInterval, bgpDataInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnBgpBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpDataInterval, bgpDataInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnBgpBpsDataResponseBody() = default ;
    DescribeDcdnBgpBpsDataResponseBody(const DescribeDcdnBgpBpsDataResponseBody &) = default ;
    DescribeDcdnBgpBpsDataResponseBody(DescribeDcdnBgpBpsDataResponseBody &&) = default ;
    DescribeDcdnBgpBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnBgpBpsDataResponseBody() = default ;
    DescribeDcdnBgpBpsDataResponseBody& operator=(const DescribeDcdnBgpBpsDataResponseBody &) = default ;
    DescribeDcdnBgpBpsDataResponseBody& operator=(DescribeDcdnBgpBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BgpDataInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BgpDataInterval& obj) { 
        DARABONBA_PTR_TO_JSON(In, in_);
        DARABONBA_PTR_TO_JSON(Out, out_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, BgpDataInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(In, in_);
        DARABONBA_PTR_FROM_JSON(Out, out_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      BgpDataInterval() = default ;
      BgpDataInterval(const BgpDataInterval &) = default ;
      BgpDataInterval(BgpDataInterval &&) = default ;
      BgpDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BgpDataInterval() = default ;
      BgpDataInterval& operator=(const BgpDataInterval &) = default ;
      BgpDataInterval& operator=(BgpDataInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->in_ == nullptr
        && this->out_ == nullptr && this->timeStamp_ == nullptr; };
      // in Field Functions 
      bool hasIn() const { return this->in_ != nullptr;};
      void deleteIn() { this->in_ = nullptr;};
      inline float getIn() const { DARABONBA_PTR_GET_DEFAULT(in_, 0.0) };
      inline BgpDataInterval& setIn(float in) { DARABONBA_PTR_SET_VALUE(in_, in) };


      // out Field Functions 
      bool hasOut() const { return this->out_ != nullptr;};
      void deleteOut() { this->out_ = nullptr;};
      inline float getOut() const { DARABONBA_PTR_GET_DEFAULT(out_, 0.0) };
      inline BgpDataInterval& setOut(float out) { DARABONBA_PTR_SET_VALUE(out_, out) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline BgpDataInterval& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The inbound bandwidth. Unit: bit/s.
      shared_ptr<float> in_ {};
      // The outbound bandwidth. Unit: bit/s.
      shared_ptr<float> out_ {};
      // The timestamp of the returned data.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->bgpDataInterval_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // bgpDataInterval Field Functions 
    bool hasBgpDataInterval() const { return this->bgpDataInterval_ != nullptr;};
    void deleteBgpDataInterval() { this->bgpDataInterval_ = nullptr;};
    inline const vector<DescribeDcdnBgpBpsDataResponseBody::BgpDataInterval> & getBgpDataInterval() const { DARABONBA_PTR_GET_CONST(bgpDataInterval_, vector<DescribeDcdnBgpBpsDataResponseBody::BgpDataInterval>) };
    inline vector<DescribeDcdnBgpBpsDataResponseBody::BgpDataInterval> getBgpDataInterval() { DARABONBA_PTR_GET(bgpDataInterval_, vector<DescribeDcdnBgpBpsDataResponseBody::BgpDataInterval>) };
    inline DescribeDcdnBgpBpsDataResponseBody& setBgpDataInterval(const vector<DescribeDcdnBgpBpsDataResponseBody::BgpDataInterval> & bgpDataInterval) { DARABONBA_PTR_SET_VALUE(bgpDataInterval_, bgpDataInterval) };
    inline DescribeDcdnBgpBpsDataResponseBody& setBgpDataInterval(vector<DescribeDcdnBgpBpsDataResponseBody::BgpDataInterval> && bgpDataInterval) { DARABONBA_PTR_SET_RVALUE(bgpDataInterval_, bgpDataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnBgpBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnBgpBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnBgpBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The BGP bandwidth data that is collected for each interval.
    shared_ptr<vector<DescribeDcdnBgpBpsDataResponseBody::BgpDataInterval>> bgpDataInterval_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
