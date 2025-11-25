// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERECORDSRESPONSEBODYDEFENSERECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERECORDSRESPONSEBODYDEFENSERECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDefenseRecordsResponseBodyDefenseRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRecordsResponseBodyDefenseRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPeak, attackPeak_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRecordsResponseBodyDefenseRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPeak, attackPeak_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDefenseRecordsResponseBodyDefenseRecords() = default ;
    DescribeDefenseRecordsResponseBodyDefenseRecords(const DescribeDefenseRecordsResponseBodyDefenseRecords &) = default ;
    DescribeDefenseRecordsResponseBodyDefenseRecords(DescribeDefenseRecordsResponseBodyDefenseRecords &&) = default ;
    DescribeDefenseRecordsResponseBodyDefenseRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRecordsResponseBodyDefenseRecords() = default ;
    DescribeDefenseRecordsResponseBodyDefenseRecords& operator=(const DescribeDefenseRecordsResponseBodyDefenseRecords &) = default ;
    DescribeDefenseRecordsResponseBodyDefenseRecords& operator=(DescribeDefenseRecordsResponseBodyDefenseRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPeak_ == nullptr
        && return this->endTime_ == nullptr && return this->eventCount_ == nullptr && return this->instanceId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // attackPeak Field Functions 
    bool hasAttackPeak() const { return this->attackPeak_ != nullptr;};
    void deleteAttackPeak() { this->attackPeak_ = nullptr;};
    inline int64_t attackPeak() const { DARABONBA_PTR_GET_DEFAULT(attackPeak_, 0L) };
    inline DescribeDefenseRecordsResponseBodyDefenseRecords& setAttackPeak(int64_t attackPeak) { DARABONBA_PTR_SET_VALUE(attackPeak_, attackPeak) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDefenseRecordsResponseBodyDefenseRecords& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int32_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
    inline DescribeDefenseRecordsResponseBodyDefenseRecords& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDefenseRecordsResponseBodyDefenseRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDefenseRecordsResponseBodyDefenseRecords& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDefenseRecordsResponseBodyDefenseRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The peak attack traffic. Unit: bit/s.
    std::shared_ptr<int64_t> attackPeak_ = nullptr;
    // The end time of the advanced mitigation session. This value is a UNIX timestamp. Units: miliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of attacks.
    std::shared_ptr<int32_t> eventCount_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The start time of the advanced mitigation session. This value is a UNIX timestamp. Units: miliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the advanced mitigation session. Valid values:
    // 
    // *   **0**: The advanced mitigation session is being used.
    // *   **1**: The advanced mitigation session is used.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
