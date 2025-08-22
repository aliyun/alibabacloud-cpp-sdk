// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnErUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnErUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RoutineID, routineID_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnErUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RoutineID, routineID_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnErUsageDataRequest() = default ;
    DescribeDcdnErUsageDataRequest(const DescribeDcdnErUsageDataRequest &) = default ;
    DescribeDcdnErUsageDataRequest(DescribeDcdnErUsageDataRequest &&) = default ;
    DescribeDcdnErUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnErUsageDataRequest() = default ;
    DescribeDcdnErUsageDataRequest& operator=(const DescribeDcdnErUsageDataRequest &) = default ;
    DescribeDcdnErUsageDataRequest& operator=(DescribeDcdnErUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->routineID_ != nullptr && this->spec_ != nullptr && this->splitBy_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnErUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // routineID Field Functions 
    bool hasRoutineID() const { return this->routineID_ != nullptr;};
    void deleteRoutineID() { this->routineID_ = nullptr;};
    inline string routineID() const { DARABONBA_PTR_GET_DEFAULT(routineID_, "") };
    inline DescribeDcdnErUsageDataRequest& setRoutineID(string routineID) { DARABONBA_PTR_SET_VALUE(routineID_, routineID) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeDcdnErUsageDataRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // splitBy Field Functions 
    bool hasSplitBy() const { return this->splitBy_ != nullptr;};
    void deleteSplitBy() { this->splitBy_ = nullptr;};
    inline string splitBy() const { DARABONBA_PTR_GET_DEFAULT(splitBy_, "") };
    inline DescribeDcdnErUsageDataRequest& setSplitBy(string splitBy) { DARABONBA_PTR_SET_VALUE(splitBy_, splitBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnErUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the routine.
    std::shared_ptr<string> routineID_ = nullptr;
    // The specification of the routine. Valid values:
    // 
    // *   5ms
    // *   50ms
    // *   100ms
    std::shared_ptr<string> spec_ = nullptr;
    // Specifies how the results are grouped. If you set this parameter to routine, the returned results are grouped based on the routine ID. If you set this parameter to spec, the returned results are grouped based on the routine specification.
    // 
    // > If you leave this parameter empty, the returned results are not grouped.
    std::shared_ptr<string> splitBy_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
