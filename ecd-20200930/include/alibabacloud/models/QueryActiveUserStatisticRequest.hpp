// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACTIVEUSERSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACTIVEUSERSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryActiveUserStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryActiveUserStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryActiveUserStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryActiveUserStatisticRequest() = default ;
    QueryActiveUserStatisticRequest(const QueryActiveUserStatisticRequest &) = default ;
    QueryActiveUserStatisticRequest(QueryActiveUserStatisticRequest &&) = default ;
    QueryActiveUserStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryActiveUserStatisticRequest() = default ;
    QueryActiveUserStatisticRequest& operator=(const QueryActiveUserStatisticRequest &) = default ;
    QueryActiveUserStatisticRequest& operator=(QueryActiveUserStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->endTime_ == nullptr && this->officeSiteId_ == nullptr && this->period_ == nullptr && this->startTime_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline QueryActiveUserStatisticRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryActiveUserStatisticRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline QueryActiveUserStatisticRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline QueryActiveUserStatisticRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryActiveUserStatisticRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The business channel type code. Valid values:
    // 
    // - 1 (default): Enterprise Edition.
    // - 3: Cloud Office.
    // - 10: Standard Edition.
    // - 20: Business Edition.
    // - 30: Education Business Edition.
    // - 40: Cloud Phone isolated resources.
    // - 50: AgentBay.
    shared_ptr<int32_t> bizType_ {};
    // The end time of the query. The format is the same as StartTime. If the value is later than the current time, it is automatically truncated to the current time.
    shared_ptr<string> endTime_ {};
    // The workspace ID. If specified, only active users of cloud desktops in this workspace are counted.
    shared_ptr<string> officeSiteId_ {};
    // The aggregation interval for statistics. Valid values:
    // 
    // - ONE_MINUTE: 1 minute.
    // - TWO_MINUTE: 2 minutes.
    // - FIVE_MINUTE (default): 5 minutes.
    // - ONE_HOUR: 1 hour.
    // - ONE_DAY: 1 day.
    shared_ptr<string> period_ {};
    // The start time of the query. The following formats are supported:
    // 
    // - UTC format: yyyy-MM-ddTHH:mm:ssZ.
    // - Standard format: yyyy-MM-dd HH:mm:ss.
    // 
    // The value cannot be earlier than 6 months before the current time or later than EndTime.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
