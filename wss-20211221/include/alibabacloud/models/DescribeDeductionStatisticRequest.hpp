// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDUCTIONSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDUCTIONSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeductionStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeductionStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Periods, periods_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeductionStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Periods, periods_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDeductionStatisticRequest() = default ;
    DescribeDeductionStatisticRequest(const DescribeDeductionStatisticRequest &) = default ;
    DescribeDeductionStatisticRequest(DescribeDeductionStatisticRequest &&) = default ;
    DescribeDeductionStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeductionStatisticRequest() = default ;
    DescribeDeductionStatisticRequest& operator=(const DescribeDeductionStatisticRequest &) = default ;
    DescribeDeductionStatisticRequest& operator=(DescribeDeductionStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Periods : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Periods& obj) { 
        DARABONBA_PTR_TO_JSON(BaseTime, baseTime_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      };
      friend void from_json(const Darabonba::Json& j, Periods& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseTime, baseTime_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      };
      Periods() = default ;
      Periods(const Periods &) = default ;
      Periods(Periods &&) = default ;
      Periods(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Periods() = default ;
      Periods& operator=(const Periods &) = default ;
      Periods& operator=(Periods &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baseTime_ == nullptr
        && this->periodUnit_ == nullptr; };
      // baseTime Field Functions 
      bool hasBaseTime() const { return this->baseTime_ != nullptr;};
      void deleteBaseTime() { this->baseTime_ = nullptr;};
      inline string getBaseTime() const { DARABONBA_PTR_GET_DEFAULT(baseTime_, "") };
      inline Periods& setBaseTime(string baseTime) { DARABONBA_PTR_SET_VALUE(baseTime_, baseTime) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline Periods& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    protected:
      shared_ptr<string> baseTime_ {};
      shared_ptr<string> periodUnit_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceIds_ == nullptr && this->periods_ == nullptr && this->resourceTypes_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDeductionStatisticRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeDeductionStatisticRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeDeductionStatisticRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // periods Field Functions 
    bool hasPeriods() const { return this->periods_ != nullptr;};
    void deletePeriods() { this->periods_ = nullptr;};
    inline const vector<DescribeDeductionStatisticRequest::Periods> & getPeriods() const { DARABONBA_PTR_GET_CONST(periods_, vector<DescribeDeductionStatisticRequest::Periods>) };
    inline vector<DescribeDeductionStatisticRequest::Periods> getPeriods() { DARABONBA_PTR_GET(periods_, vector<DescribeDeductionStatisticRequest::Periods>) };
    inline DescribeDeductionStatisticRequest& setPeriods(const vector<DescribeDeductionStatisticRequest::Periods> & periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };
    inline DescribeDeductionStatisticRequest& setPeriods(vector<DescribeDeductionStatisticRequest::Periods> && periods) { DARABONBA_PTR_SET_RVALUE(periods_, periods) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline DescribeDeductionStatisticRequest& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline DescribeDeductionStatisticRequest& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDeductionStatisticRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<vector<DescribeDeductionStatisticRequest::Periods>> periods_ {};
    shared_ptr<vector<string>> resourceTypes_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
