// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDefenseRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseRecords, defenseRecords_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseRecords, defenseRecords_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseRecordsResponseBody() = default ;
    DescribeDefenseRecordsResponseBody(const DescribeDefenseRecordsResponseBody &) = default ;
    DescribeDefenseRecordsResponseBody(DescribeDefenseRecordsResponseBody &&) = default ;
    DescribeDefenseRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRecordsResponseBody() = default ;
    DescribeDefenseRecordsResponseBody& operator=(const DescribeDefenseRecordsResponseBody &) = default ;
    DescribeDefenseRecordsResponseBody& operator=(DescribeDefenseRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DefenseRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefenseRecords& obj) { 
        DARABONBA_PTR_TO_JSON(AttackPeak, attackPeak_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DefenseRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackPeak, attackPeak_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DefenseRecords() = default ;
      DefenseRecords(const DefenseRecords &) = default ;
      DefenseRecords(DefenseRecords &&) = default ;
      DefenseRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefenseRecords() = default ;
      DefenseRecords& operator=(const DefenseRecords &) = default ;
      DefenseRecords& operator=(DefenseRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackPeak_ == nullptr
        && this->endTime_ == nullptr && this->eventCount_ == nullptr && this->instanceId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
      // attackPeak Field Functions 
      bool hasAttackPeak() const { return this->attackPeak_ != nullptr;};
      void deleteAttackPeak() { this->attackPeak_ = nullptr;};
      inline int64_t getAttackPeak() const { DARABONBA_PTR_GET_DEFAULT(attackPeak_, 0L) };
      inline DefenseRecords& setAttackPeak(int64_t attackPeak) { DARABONBA_PTR_SET_VALUE(attackPeak_, attackPeak) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline DefenseRecords& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int32_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
      inline DefenseRecords& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DefenseRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline DefenseRecords& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DefenseRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The peak attack traffic. Unit: bit/s.
      shared_ptr<int64_t> attackPeak_ {};
      // The end time of the advanced mitigation session. This value is a UNIX timestamp. Units: miliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The number of attacks.
      shared_ptr<int32_t> eventCount_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The start time of the advanced mitigation session. This value is a UNIX timestamp. Units: miliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The status of the advanced mitigation session. Valid values:
      // 
      // *   **0**: The advanced mitigation session is being used.
      // *   **1**: The advanced mitigation session is used.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->defenseRecords_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // defenseRecords Field Functions 
    bool hasDefenseRecords() const { return this->defenseRecords_ != nullptr;};
    void deleteDefenseRecords() { this->defenseRecords_ = nullptr;};
    inline const vector<DescribeDefenseRecordsResponseBody::DefenseRecords> & getDefenseRecords() const { DARABONBA_PTR_GET_CONST(defenseRecords_, vector<DescribeDefenseRecordsResponseBody::DefenseRecords>) };
    inline vector<DescribeDefenseRecordsResponseBody::DefenseRecords> getDefenseRecords() { DARABONBA_PTR_GET(defenseRecords_, vector<DescribeDefenseRecordsResponseBody::DefenseRecords>) };
    inline DescribeDefenseRecordsResponseBody& setDefenseRecords(const vector<DescribeDefenseRecordsResponseBody::DefenseRecords> & defenseRecords) { DARABONBA_PTR_SET_VALUE(defenseRecords_, defenseRecords) };
    inline DescribeDefenseRecordsResponseBody& setDefenseRecords(vector<DescribeDefenseRecordsResponseBody::DefenseRecords> && defenseRecords) { DARABONBA_PTR_SET_RVALUE(defenseRecords_, defenseRecords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of details of the log of an advanced mitigation session.
    shared_ptr<vector<DescribeDefenseRecordsResponseBody::DefenseRecords>> defenseRecords_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of advanced mitigation sessions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
