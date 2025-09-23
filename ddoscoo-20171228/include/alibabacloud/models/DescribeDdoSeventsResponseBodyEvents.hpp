// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDDoSEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDDoSEventsResponseBodyEvents() = default ;
    DescribeDDoSEventsResponseBodyEvents(const DescribeDDoSEventsResponseBodyEvents &) = default ;
    DescribeDDoSEventsResponseBodyEvents(DescribeDDoSEventsResponseBodyEvents &&) = default ;
    DescribeDDoSEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSEventsResponseBodyEvents() = default ;
    DescribeDDoSEventsResponseBodyEvents& operator=(const DescribeDDoSEventsResponseBodyEvents &) = default ;
    DescribeDDoSEventsResponseBodyEvents& operator=(DescribeDDoSEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->interval_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDDoSEventsResponseBodyEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeDDoSEventsResponseBodyEvents& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDDoSEventsResponseBodyEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDDoSEventsResponseBodyEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
