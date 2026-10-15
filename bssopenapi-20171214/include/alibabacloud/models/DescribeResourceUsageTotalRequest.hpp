// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceUsageTotalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageTotalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageTotalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
    };
    DescribeResourceUsageTotalRequest() = default ;
    DescribeResourceUsageTotalRequest(const DescribeResourceUsageTotalRequest &) = default ;
    DescribeResourceUsageTotalRequest(DescribeResourceUsageTotalRequest &&) = default ;
    DescribeResourceUsageTotalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageTotalRequest() = default ;
    DescribeResourceUsageTotalRequest& operator=(const DescribeResourceUsageTotalRequest &) = default ;
    DescribeResourceUsageTotalRequest& operator=(DescribeResourceUsageTotalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->endPeriod_ == nullptr && this->periodType_ == nullptr && this->resourceType_ == nullptr && this->startPeriod_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeResourceUsageTotalRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string getEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeResourceUsageTotalRequest& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeResourceUsageTotalRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeResourceUsageTotalRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string getStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeResourceUsageTotalRequest& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


  protected:
    // The ID of the resource ownership account. The resource ownership account is the account that actually uses the resource. Only one account ID can be specified.
    shared_ptr<int64_t> billOwnerId_ {};
    // The end time. Format: yyyy-MM-dd HH:mm:ss. The query excludes data at this time. If this parameter is left empty, the query range extends to the current time. This value specifies the end time of the query range.
    shared_ptr<string> endPeriod_ {};
    // The time granularity. Valid values:
    // 
    // - MONTH: month
    // - DAY: day
    // - HOUR: hour
    // 
    // This parameter is required.
    shared_ptr<string> periodType_ {};
    // The resource plan type. Valid values:
    // 
    // - RI: reserved instance.
    // - SCU: storage capacity unit.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The start time. Format: yyyy-MM-dd HH:mm:ss. The query includes data at this time. This value specifies the start time of the query range.
    // 
    // This parameter is required.
    shared_ptr<string> startPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
