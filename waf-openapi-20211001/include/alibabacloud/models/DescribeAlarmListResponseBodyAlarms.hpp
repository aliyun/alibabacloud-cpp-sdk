// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMLISTRESPONSEBODYALARMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMLISTRESPONSEBODYALARMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAlarmListResponseBodyAlarms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmListResponseBodyAlarms& obj) { 
      DARABONBA_PTR_TO_JSON(Cause, cause_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmListResponseBodyAlarms& obj) { 
      DARABONBA_PTR_FROM_JSON(Cause, cause_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAlarmListResponseBodyAlarms() = default ;
    DescribeAlarmListResponseBodyAlarms(const DescribeAlarmListResponseBodyAlarms &) = default ;
    DescribeAlarmListResponseBodyAlarms(DescribeAlarmListResponseBodyAlarms &&) = default ;
    DescribeAlarmListResponseBodyAlarms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmListResponseBodyAlarms() = default ;
    DescribeAlarmListResponseBodyAlarms& operator=(const DescribeAlarmListResponseBodyAlarms &) = default ;
    DescribeAlarmListResponseBodyAlarms& operator=(DescribeAlarmListResponseBodyAlarms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cause_ == nullptr
        && return this->endTime_ == nullptr && return this->maxQps_ == nullptr && return this->spec_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr; };
    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline DescribeAlarmListResponseBodyAlarms& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAlarmListResponseBodyAlarms& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxQps Field Functions 
    bool hasMaxQps() const { return this->maxQps_ != nullptr;};
    void deleteMaxQps() { this->maxQps_ = nullptr;};
    inline int64_t maxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
    inline DescribeAlarmListResponseBodyAlarms& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline int64_t spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, 0L) };
    inline DescribeAlarmListResponseBodyAlarms& setSpec(int64_t spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAlarmListResponseBodyAlarms& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeAlarmListResponseBodyAlarms& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAlarmListResponseBodyAlarms& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> cause_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> maxQps_ = nullptr;
    std::shared_ptr<int64_t> spec_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
