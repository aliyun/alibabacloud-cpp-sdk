// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval.hpp>
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
    virtual bool empty() const override { this->bgpDataInterval_ != nullptr
        && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // bgpDataInterval Field Functions 
    bool hasBgpDataInterval() const { return this->bgpDataInterval_ != nullptr;};
    void deleteBgpDataInterval() { this->bgpDataInterval_ = nullptr;};
    inline const vector<DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval> & bgpDataInterval() const { DARABONBA_PTR_GET_CONST(bgpDataInterval_, vector<DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval>) };
    inline vector<DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval> bgpDataInterval() { DARABONBA_PTR_GET(bgpDataInterval_, vector<DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval>) };
    inline DescribeDcdnBgpBpsDataResponseBody& setBgpDataInterval(const vector<DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval> & bgpDataInterval) { DARABONBA_PTR_SET_VALUE(bgpDataInterval_, bgpDataInterval) };
    inline DescribeDcdnBgpBpsDataResponseBody& setBgpDataInterval(vector<DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval> && bgpDataInterval) { DARABONBA_PTR_SET_RVALUE(bgpDataInterval_, bgpDataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnBgpBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnBgpBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnBgpBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The BGP bandwidth data that is collected for each interval.
    std::shared_ptr<vector<DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval>> bgpDataInterval_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
