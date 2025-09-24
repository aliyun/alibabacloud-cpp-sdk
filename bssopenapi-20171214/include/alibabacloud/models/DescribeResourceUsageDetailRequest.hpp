// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceUsageDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
    };
    DescribeResourceUsageDetailRequest() = default ;
    DescribeResourceUsageDetailRequest(const DescribeResourceUsageDetailRequest &) = default ;
    DescribeResourceUsageDetailRequest(DescribeResourceUsageDetailRequest &&) = default ;
    DescribeResourceUsageDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageDetailRequest() = default ;
    DescribeResourceUsageDetailRequest& operator=(const DescribeResourceUsageDetailRequest &) = default ;
    DescribeResourceUsageDetailRequest& operator=(DescribeResourceUsageDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billOwnerId_ != nullptr
        && this->endPeriod_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->periodType_ != nullptr && this->resourceType_ != nullptr
        && this->startPeriod_ != nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t billOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeResourceUsageDetailRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string endPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeResourceUsageDetailRequest& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeResourceUsageDetailRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeResourceUsageDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string periodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeResourceUsageDetailRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeResourceUsageDetailRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string startPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeResourceUsageDetailRequest& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


  protected:
    // The ID of the account whose data you want to query. If you do not specify this parameter, the data of the current Alibaba Cloud account and its Resource Access Management (RAM) users is queried. To query the data of a RAM user, specify the ID of the RAM user.
    std::shared_ptr<int64_t> billOwnerId_ = nullptr;
    // The end of the time range to query. The end is excluded from the time range. If you do not set this parameter, the end time is the current time. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> endPeriod_ = nullptr;
    // The maximum number of entries to return. Default value: 20. The maximum value is 300.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The time granularity at which usage details are queried. Valid values: MONTH, DAY, and HOUR.
    // 
    // This parameter is required.
    std::shared_ptr<string> periodType_ = nullptr;
    // The type of deduction plan whose usage details are queried. Valid values: RI and SCU.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The beginning of the time range to query. The beginning is included in the time range. Specify the time in the yyyy-MM-dd HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
