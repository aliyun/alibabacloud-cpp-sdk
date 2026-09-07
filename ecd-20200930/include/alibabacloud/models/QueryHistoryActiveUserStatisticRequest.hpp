// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYACTIVEUSERSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryActiveUserStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryActiveUserStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryActiveUserStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    QueryHistoryActiveUserStatisticRequest() = default ;
    QueryHistoryActiveUserStatisticRequest(const QueryHistoryActiveUserStatisticRequest &) = default ;
    QueryHistoryActiveUserStatisticRequest(QueryHistoryActiveUserStatisticRequest &&) = default ;
    QueryHistoryActiveUserStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryActiveUserStatisticRequest() = default ;
    QueryHistoryActiveUserStatisticRequest& operator=(const QueryHistoryActiveUserStatisticRequest &) = default ;
    QueryHistoryActiveUserStatisticRequest& operator=(QueryHistoryActiveUserStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->endDate_ == nullptr && this->officeSiteId_ == nullptr && this->period_ == nullptr && this->startDate_ == nullptr && this->userGroupId_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline QueryHistoryActiveUserStatisticRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryHistoryActiveUserStatisticRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline QueryHistoryActiveUserStatisticRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline QueryHistoryActiveUserStatisticRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryHistoryActiveUserStatisticRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline QueryHistoryActiveUserStatisticRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The business channel type code.
    shared_ptr<int32_t> bizType_ {};
    // The end date of the query. The date is in the yyyy-MM-dd format. The maximum value is yesterday (N-1 data).
    shared_ptr<string> endDate_ {};
    // The workspace ID. If specified, only active users within the specified workspace are counted.
    shared_ptr<string> officeSiteId_ {};
    // The statistical period.
    shared_ptr<string> period_ {};
    // The start date of the query. The date is in the yyyy-MM-dd format. The value cannot be earlier than 6 months ago or later than EndDate.
    shared_ptr<string> startDate_ {};
    // The user group ID. If specified, only active users within the specified user group are counted.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
