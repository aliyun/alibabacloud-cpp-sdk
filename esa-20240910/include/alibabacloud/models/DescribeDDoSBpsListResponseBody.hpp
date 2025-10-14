// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDoSBpsListResponseBodyDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSBpsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSBpsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSBpsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDoSBpsListResponseBody() = default ;
    DescribeDDoSBpsListResponseBody(const DescribeDDoSBpsListResponseBody &) = default ;
    DescribeDDoSBpsListResponseBody(DescribeDDoSBpsListResponseBody &&) = default ;
    DescribeDDoSBpsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSBpsListResponseBody() = default ;
    DescribeDDoSBpsListResponseBody& operator=(const DescribeDDoSBpsListResponseBody &) = default ;
    DescribeDDoSBpsListResponseBody& operator=(DescribeDDoSBpsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->dataModule_ == nullptr && return this->endTime_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline int32_t dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, 0) };
    inline DescribeDDoSBpsListResponseBody& setDataInterval(int32_t dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<DescribeDDoSBpsListResponseBodyDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DescribeDDoSBpsListResponseBodyDataModule>) };
    inline vector<DescribeDDoSBpsListResponseBodyDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<DescribeDDoSBpsListResponseBodyDataModule>) };
    inline DescribeDDoSBpsListResponseBody& setDataModule(const vector<DescribeDDoSBpsListResponseBodyDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDDoSBpsListResponseBody& setDataModule(vector<DescribeDDoSBpsListResponseBodyDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDDoSBpsListResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSBpsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDDoSBpsListResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The interval between each piece of data, in seconds.
    // 
    // Generated based on the interval between StartTime and EndTime: less than 1 hour, 60s; 1 hour or more but less than 1 day, 300s; 1 day or more but less than a week, 1800s; 1 week or more, 3600s.
    std::shared_ptr<int32_t> dataInterval_ = nullptr;
    // A list of network bandwidth data for each time interval.
    std::shared_ptr<vector<DescribeDDoSBpsListResponseBodyDataModule>> dataModule_ = nullptr;
    // The end time for fetching data. In ISO8601 format, using UTC+0, formatted as: yyyy-MM-ddTHH:mm:ssZ.
    // 
    // The end time must be later than the start time, and the span between start and end times should not exceed 31 days.
    std::shared_ptr<string> endTime_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start time for fetching data. In ISO8601 format, using UTC, formatted as: YYYY-MM-DDThh:mm:ssZ.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
