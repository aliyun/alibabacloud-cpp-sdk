// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERUSAGEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERUSAGEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryUserUsageReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserUsageReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserUsageReportDataModel, userUsageReportDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserUsageReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserUsageReportDataModel, userUsageReportDataModel_);
    };
    QueryUserUsageReportResponseBody() = default ;
    QueryUserUsageReportResponseBody(const QueryUserUsageReportResponseBody &) = default ;
    QueryUserUsageReportResponseBody(QueryUserUsageReportResponseBody &&) = default ;
    QueryUserUsageReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserUsageReportResponseBody() = default ;
    QueryUserUsageReportResponseBody& operator=(const QueryUserUsageReportResponseBody &) = default ;
    QueryUserUsageReportResponseBody& operator=(QueryUserUsageReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserUsageReportDataModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserUsageReportDataModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(LastConnectedTime, lastConnectedTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SessionsHoldDuration, sessionsHoldDuration_);
        DARABONBA_PTR_TO_JSON(UsageDuration, usageDuration_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserUsageReportDataModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(LastConnectedTime, lastConnectedTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SessionsHoldDuration, sessionsHoldDuration_);
        DARABONBA_PTR_FROM_JSON(UsageDuration, usageDuration_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserUsageReportDataModel() = default ;
      UserUsageReportDataModel(const UserUsageReportDataModel &) = default ;
      UserUsageReportDataModel(UserUsageReportDataModel &&) = default ;
      UserUsageReportDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserUsageReportDataModel() = default ;
      UserUsageReportDataModel& operator=(const UserUsageReportDataModel &) = default ;
      UserUsageReportDataModel& operator=(UserUsageReportDataModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->connectionStatus_ == nullptr && this->lastConnectedTime_ == nullptr && this->regionId_ == nullptr && this->sessionsHoldDuration_ == nullptr
        && this->usageDuration_ == nullptr && this->userId_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline UserUsageReportDataModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupName Field Functions 
      bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
      void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
      inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
      inline UserUsageReportDataModel& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline UserUsageReportDataModel& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // lastConnectedTime Field Functions 
      bool hasLastConnectedTime() const { return this->lastConnectedTime_ != nullptr;};
      void deleteLastConnectedTime() { this->lastConnectedTime_ = nullptr;};
      inline string getLastConnectedTime() const { DARABONBA_PTR_GET_DEFAULT(lastConnectedTime_, "") };
      inline UserUsageReportDataModel& setLastConnectedTime(string lastConnectedTime) { DARABONBA_PTR_SET_VALUE(lastConnectedTime_, lastConnectedTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline UserUsageReportDataModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sessionsHoldDuration Field Functions 
      bool hasSessionsHoldDuration() const { return this->sessionsHoldDuration_ != nullptr;};
      void deleteSessionsHoldDuration() { this->sessionsHoldDuration_ = nullptr;};
      inline double getSessionsHoldDuration() const { DARABONBA_PTR_GET_DEFAULT(sessionsHoldDuration_, 0.0) };
      inline UserUsageReportDataModel& setSessionsHoldDuration(double sessionsHoldDuration) { DARABONBA_PTR_SET_VALUE(sessionsHoldDuration_, sessionsHoldDuration) };


      // usageDuration Field Functions 
      bool hasUsageDuration() const { return this->usageDuration_ != nullptr;};
      void deleteUsageDuration() { this->usageDuration_ = nullptr;};
      inline double getUsageDuration() const { DARABONBA_PTR_GET_DEFAULT(usageDuration_, 0.0) };
      inline UserUsageReportDataModel& setUsageDuration(double usageDuration) { DARABONBA_PTR_SET_VALUE(usageDuration_, usageDuration) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserUsageReportDataModel& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the app instance group to which the user usage record belongs.
      shared_ptr<string> appInstanceGroupId_ {};
      // The name of the app instance group to which the user usage record belongs.
      shared_ptr<string> appInstanceGroupName_ {};
      // The current connection status of the user.
      // 
      // Valid values:
      // 
      // - `Connected`: At least one currently connected session exists.
      // - `Disconnected`: The session binding is retained, but no currently connected session exists.
      // - `Unbound`: No session binding exists.
      shared_ptr<string> connectionStatus_ {};
      // The last connection time. Format: `yyyy-MM-dd HH:mm:ss`. If no current or historical connection record exists, `-` is returned. The string itself does not carry a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> lastConnectedTime_ {};
      // The current version does not return a valid region ID. Callers should not rely on this field. To filter by business region, use the `BizRegionId` request parameter.
      shared_ptr<string> regionId_ {};
      // The cumulative session persistence duration within the query range, which refers to the time a user occupies a session from attach to release. If multiple sessions exist under the same app instance group, their durations are accumulated. Unit: hours.
      shared_ptr<double> sessionsHoldDuration_ {};
      // The cumulative user usage duration within the query range. The usage duration of the same user under the same app instance group is aggregated by day. Unit: hours.
      shared_ptr<double> usageDuration_ {};
      // The ID of the end user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->userUsageReportDataModel_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryUserUsageReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryUserUsageReportResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryUserUsageReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryUserUsageReportResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryUserUsageReportResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserUsageReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userUsageReportDataModel Field Functions 
    bool hasUserUsageReportDataModel() const { return this->userUsageReportDataModel_ != nullptr;};
    void deleteUserUsageReportDataModel() { this->userUsageReportDataModel_ = nullptr;};
    inline const vector<QueryUserUsageReportResponseBody::UserUsageReportDataModel> & getUserUsageReportDataModel() const { DARABONBA_PTR_GET_CONST(userUsageReportDataModel_, vector<QueryUserUsageReportResponseBody::UserUsageReportDataModel>) };
    inline vector<QueryUserUsageReportResponseBody::UserUsageReportDataModel> getUserUsageReportDataModel() { DARABONBA_PTR_GET(userUsageReportDataModel_, vector<QueryUserUsageReportResponseBody::UserUsageReportDataModel>) };
    inline QueryUserUsageReportResponseBody& setUserUsageReportDataModel(const vector<QueryUserUsageReportResponseBody::UserUsageReportDataModel> & userUsageReportDataModel) { DARABONBA_PTR_SET_VALUE(userUsageReportDataModel_, userUsageReportDataModel) };
    inline QueryUserUsageReportResponseBody& setUserUsageReportDataModel(vector<QueryUserUsageReportResponseBody::UserUsageReportDataModel> && userUsageReportDataModel) { DARABONBA_PTR_SET_RVALUE(userUsageReportDataModel_, userUsageReportDataModel) };


  protected:
    // The business status code. A value of `200` indicates that the request was successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The total number of records that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The description of the request processing result. Typically, `success` is returned when the request is successful.
    shared_ptr<string> message_ {};
    // The page number corresponding to the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page used in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request, which can be used to troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // The list of user usage data, sorted in descending order of cumulative usage duration.
    shared_ptr<vector<QueryUserUsageReportResponseBody::UserUsageReportDataModel>> userUsageReportDataModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
