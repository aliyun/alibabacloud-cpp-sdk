// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListAlertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(OrderFieldName, orderFieldName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_TO_JSON(QueryViewId, queryViewId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(OrderFieldName, orderFieldName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_FROM_JSON(QueryViewId, queryViewId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListAlertsRequest() = default ;
    ListAlertsRequest(const ListAlertsRequest &) = default ;
    ListAlertsRequest(ListAlertsRequest &&) = default ;
    ListAlertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsRequest() = default ;
    ListAlertsRequest& operator=(const ListAlertsRequest &) = default ;
    ListAlertsRequest& operator=(ListAlertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->alertUuid_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->orderDirection_ == nullptr && this->orderFieldName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryCondition_ == nullptr
        && this->queryViewId_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->startTime_ == nullptr; };
    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline const vector<string> & getAlertLevel() const { DARABONBA_PTR_GET_CONST(alertLevel_, vector<string>) };
    inline vector<string> getAlertLevel() { DARABONBA_PTR_GET(alertLevel_, vector<string>) };
    inline ListAlertsRequest& setAlertLevel(const vector<string> & alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };
    inline ListAlertsRequest& setAlertLevel(vector<string> && alertLevel) { DARABONBA_PTR_SET_RVALUE(alertLevel_, alertLevel) };


    // alertUuid Field Functions 
    bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
    void deleteAlertUuid() { this->alertUuid_ = nullptr;};
    inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
    inline ListAlertsRequest& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAlertsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAlertsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlertsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlertsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListAlertsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // orderFieldName Field Functions 
    bool hasOrderFieldName() const { return this->orderFieldName_ != nullptr;};
    void deleteOrderFieldName() { this->orderFieldName_ = nullptr;};
    inline string getOrderFieldName() const { DARABONBA_PTR_GET_DEFAULT(orderFieldName_, "") };
    inline ListAlertsRequest& setOrderFieldName(string orderFieldName) { DARABONBA_PTR_SET_VALUE(orderFieldName_, orderFieldName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryCondition Field Functions 
    bool hasQueryCondition() const { return this->queryCondition_ != nullptr;};
    void deleteQueryCondition() { this->queryCondition_ = nullptr;};
    inline string getQueryCondition() const { DARABONBA_PTR_GET_DEFAULT(queryCondition_, "") };
    inline ListAlertsRequest& setQueryCondition(string queryCondition) { DARABONBA_PTR_SET_VALUE(queryCondition_, queryCondition) };


    // queryViewId Field Functions 
    bool hasQueryViewId() const { return this->queryViewId_ != nullptr;};
    void deleteQueryViewId() { this->queryViewId_ = nullptr;};
    inline string getQueryViewId() const { DARABONBA_PTR_GET_DEFAULT(queryViewId_, "") };
    inline ListAlertsRequest& setQueryViewId(string queryViewId) { DARABONBA_PTR_SET_VALUE(queryViewId_, queryViewId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListAlertsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListAlertsRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAlertsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The threat level of the alert. Valid values:
    // 
    // - 5: critical.
    // - 4: high-risk.
    // - 3: medium-risk.
    // - 2: low-risk.
    // - 1: informational.
    shared_ptr<vector<string>> alertLevel_ {};
    // The alert ID associated with the event.
    shared_ptr<string> alertUuid_ {};
    // The end time of the alert.
    shared_ptr<int64_t> endTime_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. You do not need to specify this parameter for the first request or if no more results exist. If more results exist, set this parameter to the NextToken value returned in the previous API call.
    shared_ptr<string> nextToken_ {};
    // The sort order. Valid values:
    // 
    // - **asc** (default): ascending order.
    // - **desc**: descending order.
    shared_ptr<string> orderDirection_ {};
    // The field used for sorting. Valid values:
    // 
    // - GmtCreate: creation time.
    // - GmtModified: update time.
    shared_ptr<string> orderFieldName_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The query filter condition in JSON format. Valid values:
    // 
    // - `{"Type":"maxCost", "Value":"100"}`: the top 100 queries with the longest execution duration.
    // - `{"Type":"status","Value":"finished"}`: completed queries.
    // - `{"Type":"status","Value":"running"}`: running queries.
    // - `{"Type":"cost","Min":"30","Max":"50"}`: queries with a custom execution duration range. You can specify the minimum and maximum execution duration. **Min** specifies the minimum execution duration. **Max** specifies the maximum execution duration. Unit: milliseconds (ms).
    //     - If only **Min** is specified, queries with an execution duration greater than this value are returned.
    //     - If only **Max** is specified, queries with an execution duration less than this value are returned.
    //     - If both **Min** and **Max** are specified, queries with an execution duration greater than or equal to **Min** and less than or equal to **Max** are returned.
    shared_ptr<string> queryCondition_ {};
    // The unique identifier of the query view.
    shared_ptr<string> queryViewId_ {};
    // The region where the threat analysis data management center is located. Specify the management center based on the region of your assets. Valid values:
    // 
    // - cn-hangzhou: Your assets are located in the Chinese mainland or Hong Kong (China).
    // - ap-southeast-1: Your assets are located outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the member accounts in the resource folder.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0: the view of the current Alibaba Cloud account.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The time when the alert first occurred.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
