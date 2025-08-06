// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetKafkaClientIpResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetKafkaClientIpResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKafkaClientIpResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Alert, alert_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(SearchTimeRange, searchTimeRange_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TimeLimitDay, timeLimitDay_);
    };
    friend void from_json(const Darabonba::Json& j, GetKafkaClientIpResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Alert, alert_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(SearchTimeRange, searchTimeRange_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TimeLimitDay, timeLimitDay_);
    };
    GetKafkaClientIpResponseBodyData() = default ;
    GetKafkaClientIpResponseBodyData(const GetKafkaClientIpResponseBodyData &) = default ;
    GetKafkaClientIpResponseBodyData(GetKafkaClientIpResponseBodyData &&) = default ;
    GetKafkaClientIpResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKafkaClientIpResponseBodyData() = default ;
    GetKafkaClientIpResponseBodyData& operator=(const GetKafkaClientIpResponseBodyData &) = default ;
    GetKafkaClientIpResponseBodyData& operator=(GetKafkaClientIpResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alert_ != nullptr
        && this->data_ != nullptr && this->endDate_ != nullptr && this->searchTimeRange_ != nullptr && this->startDate_ != nullptr && this->timeLimitDay_ != nullptr; };
    // alert Field Functions 
    bool hasAlert() const { return this->alert_ != nullptr;};
    void deleteAlert() { this->alert_ = nullptr;};
    inline bool alert() const { DARABONBA_PTR_GET_DEFAULT(alert_, false) };
    inline GetKafkaClientIpResponseBodyData& setAlert(bool alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetKafkaClientIpResponseBodyDataData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetKafkaClientIpResponseBodyDataData) };
    inline Models::GetKafkaClientIpResponseBodyDataData data() { DARABONBA_PTR_GET(data_, Models::GetKafkaClientIpResponseBodyDataData) };
    inline GetKafkaClientIpResponseBodyData& setData(const Models::GetKafkaClientIpResponseBodyDataData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKafkaClientIpResponseBodyData& setData(Models::GetKafkaClientIpResponseBodyDataData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetKafkaClientIpResponseBodyData& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // searchTimeRange Field Functions 
    bool hasSearchTimeRange() const { return this->searchTimeRange_ != nullptr;};
    void deleteSearchTimeRange() { this->searchTimeRange_ = nullptr;};
    inline int32_t searchTimeRange() const { DARABONBA_PTR_GET_DEFAULT(searchTimeRange_, 0) };
    inline GetKafkaClientIpResponseBodyData& setSearchTimeRange(int32_t searchTimeRange) { DARABONBA_PTR_SET_VALUE(searchTimeRange_, searchTimeRange) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetKafkaClientIpResponseBodyData& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // timeLimitDay Field Functions 
    bool hasTimeLimitDay() const { return this->timeLimitDay_ != nullptr;};
    void deleteTimeLimitDay() { this->timeLimitDay_ = nullptr;};
    inline int32_t timeLimitDay() const { DARABONBA_PTR_GET_DEFAULT(timeLimitDay_, 0) };
    inline GetKafkaClientIpResponseBodyData& setTimeLimitDay(int32_t timeLimitDay) { DARABONBA_PTR_SET_VALUE(timeLimitDay_, timeLimitDay) };


  protected:
    // The value true indicates that the broker is not of the latest minor version.
    // 
    // >  If the broker is not of the latest minor version, the sampled logs may not be accurate. This may cause inaccurate IP information. Therefore, we recommend that you update your broker to the latest version at the earliest opportunity.
    std::shared_ptr<bool> alert_ = nullptr;
    // The data returned.
    std::shared_ptr<Models::GetKafkaClientIpResponseBodyDataData> data_ = nullptr;
    // The end of the date range within which data is queried.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // The time range within which the client IP addresses are queried.
    // 
    // >  The valid value is 1 hour. If the beginning of the time range to query and the end of the time range to query exceeds 1 hour, only data within 1 hour is returned.
    std::shared_ptr<int32_t> searchTimeRange_ = nullptr;
    // The beginning of the date range within which data is queried.
    std::shared_ptr<int64_t> startDate_ = nullptr;
    // The date range within which the client IP addresses are queried.
    // 
    // >  The valid value is 7 days. If the beginning of the date range to query and the end of the date range to query exceeds 7 days, only data within 7 days is returned.
    std::shared_ptr<int32_t> timeLimitDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
