// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAlarmListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAlarmListResponseBody() = default ;
    DescribeAlarmListResponseBody(const DescribeAlarmListResponseBody &) = default ;
    DescribeAlarmListResponseBody(DescribeAlarmListResponseBody &&) = default ;
    DescribeAlarmListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmListResponseBody() = default ;
    DescribeAlarmListResponseBody& operator=(const DescribeAlarmListResponseBody &) = default ;
    DescribeAlarmListResponseBody& operator=(DescribeAlarmListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Alarms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Alarms& obj) { 
        DARABONBA_PTR_TO_JSON(Cause, cause_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Alarms& obj) { 
        DARABONBA_PTR_FROM_JSON(Cause, cause_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Alarms() = default ;
      Alarms(const Alarms &) = default ;
      Alarms(Alarms &&) = default ;
      Alarms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Alarms() = default ;
      Alarms& operator=(const Alarms &) = default ;
      Alarms& operator=(Alarms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cause_ == nullptr
        && this->endTime_ == nullptr && this->maxQps_ == nullptr && this->spec_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
      // cause Field Functions 
      bool hasCause() const { return this->cause_ != nullptr;};
      void deleteCause() { this->cause_ = nullptr;};
      inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
      inline Alarms& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Alarms& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // maxQps Field Functions 
      bool hasMaxQps() const { return this->maxQps_ != nullptr;};
      void deleteMaxQps() { this->maxQps_ = nullptr;};
      inline int64_t getMaxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
      inline Alarms& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline int64_t getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, 0L) };
      inline Alarms& setSpec(int64_t spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Alarms& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Alarms& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Alarms& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> cause_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> maxQps_ {};
      shared_ptr<int64_t> spec_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->alarms_ == nullptr
        && this->requestId_ == nullptr; };
    // alarms Field Functions 
    bool hasAlarms() const { return this->alarms_ != nullptr;};
    void deleteAlarms() { this->alarms_ = nullptr;};
    inline const vector<DescribeAlarmListResponseBody::Alarms> & getAlarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<DescribeAlarmListResponseBody::Alarms>) };
    inline vector<DescribeAlarmListResponseBody::Alarms> getAlarms() { DARABONBA_PTR_GET(alarms_, vector<DescribeAlarmListResponseBody::Alarms>) };
    inline DescribeAlarmListResponseBody& setAlarms(const vector<DescribeAlarmListResponseBody::Alarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
    inline DescribeAlarmListResponseBody& setAlarms(vector<DescribeAlarmListResponseBody::Alarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeAlarmListResponseBody::Alarms>> alarms_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
