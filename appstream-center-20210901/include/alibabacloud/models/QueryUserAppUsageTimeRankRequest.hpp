// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERAPPUSAGETIMERANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERAPPUSAGETIMERANKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryUserAppUsageTimeRankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserAppUsageTimeRankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserAppUsageTimeRankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryUserAppUsageTimeRankRequest() = default ;
    QueryUserAppUsageTimeRankRequest(const QueryUserAppUsageTimeRankRequest &) = default ;
    QueryUserAppUsageTimeRankRequest(QueryUserAppUsageTimeRankRequest &&) = default ;
    QueryUserAppUsageTimeRankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserAppUsageTimeRankRequest() = default ;
    QueryUserAppUsageTimeRankRequest& operator=(const QueryUserAppUsageTimeRankRequest &) = default ;
    QueryUserAppUsageTimeRankRequest& operator=(QueryUserAppUsageTimeRankRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->bizRegionId_ == nullptr && this->endDate_ == nullptr && this->regionId_ == nullptr && this->startDate_ == nullptr && this->userId_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline QueryUserAppUsageTimeRankRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline QueryUserAppUsageTimeRankRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryUserAppUsageTimeRankRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryUserAppUsageTimeRankRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryUserAppUsageTimeRankRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryUserAppUsageTimeRankRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the app instance group, which is used to filter data for a specified app instance group. If this parameter is not provided, data is not filtered by app instance group.
    shared_ptr<string> appInstanceGroupId_ {};
    // The business region ID, which is used to filter application usage data. If this parameter is not provided, data is not filtered by business region. You can call the [ListRegions](~~ListRegions~~) operation to obtain the ID.
    shared_ptr<string> bizRegionId_ {};
    // The end date of the statistical period, in `yyyyMMdd` format. If this parameter is not provided, it defaults to yesterday. The date cannot be earlier than `StartDate` and cannot be earlier than 90 days before the call date. The query range includes this date. The date is interpreted as a calendar date in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> endDate_ {};
    // The region ID for OpenAPI access, which is used for request authentication and routing. To filter business data by region, use `BizRegionId`.
    shared_ptr<string> regionId_ {};
    // The start date of the statistical period, in `yyyyMMdd` format. If this parameter is not provided, it defaults to yesterday. The date cannot be earlier than 90 days before the call date. The query range includes this date. The date is interpreted as a calendar date in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> startDate_ {};
    // The ID of the end user to be queried. This parameter must be explicitly provided. If it is not provided, no matching records are usually returned.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
