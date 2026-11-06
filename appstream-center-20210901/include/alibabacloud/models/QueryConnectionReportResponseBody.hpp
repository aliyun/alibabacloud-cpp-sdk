// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONNECTIONREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONNECTIONREPORTRESPONSEBODY_HPP_
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
  class QueryConnectionReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConnectionReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConnectionReportDataModel, connectionReportDataModel_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConnectionReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConnectionReportDataModel, connectionReportDataModel_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryConnectionReportResponseBody() = default ;
    QueryConnectionReportResponseBody(const QueryConnectionReportResponseBody &) = default ;
    QueryConnectionReportResponseBody(QueryConnectionReportResponseBody &&) = default ;
    QueryConnectionReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConnectionReportResponseBody() = default ;
    QueryConnectionReportResponseBody& operator=(const QueryConnectionReportResponseBody &) = default ;
    QueryConnectionReportResponseBody& operator=(QueryConnectionReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConnectionReportDataModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectionReportDataModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(ConnectionAvgDurationSeconds, connectionAvgDurationSeconds_);
        DARABONBA_PTR_TO_JSON(ConnectionFailureCount, connectionFailureCount_);
        DARABONBA_PTR_TO_JSON(ConnectionSuccessCount, connectionSuccessCount_);
        DARABONBA_PTR_TO_JSON(ConnectionSuccessRate, connectionSuccessRate_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StatEndDate, statEndDate_);
        DARABONBA_PTR_TO_JSON(StatStartDate, statStartDate_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectionReportDataModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(ConnectionAvgDurationSeconds, connectionAvgDurationSeconds_);
        DARABONBA_PTR_FROM_JSON(ConnectionFailureCount, connectionFailureCount_);
        DARABONBA_PTR_FROM_JSON(ConnectionSuccessCount, connectionSuccessCount_);
        DARABONBA_PTR_FROM_JSON(ConnectionSuccessRate, connectionSuccessRate_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StatEndDate, statEndDate_);
        DARABONBA_PTR_FROM_JSON(StatStartDate, statStartDate_);
      };
      ConnectionReportDataModel() = default ;
      ConnectionReportDataModel(const ConnectionReportDataModel &) = default ;
      ConnectionReportDataModel(ConnectionReportDataModel &&) = default ;
      ConnectionReportDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectionReportDataModel() = default ;
      ConnectionReportDataModel& operator=(const ConnectionReportDataModel &) = default ;
      ConnectionReportDataModel& operator=(ConnectionReportDataModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->connectionAvgDurationSeconds_ == nullptr && this->connectionFailureCount_ == nullptr && this->connectionSuccessCount_ == nullptr && this->connectionSuccessRate_ == nullptr && this->regionId_ == nullptr
        && this->statEndDate_ == nullptr && this->statStartDate_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline ConnectionReportDataModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // connectionAvgDurationSeconds Field Functions 
      bool hasConnectionAvgDurationSeconds() const { return this->connectionAvgDurationSeconds_ != nullptr;};
      void deleteConnectionAvgDurationSeconds() { this->connectionAvgDurationSeconds_ = nullptr;};
      inline double getConnectionAvgDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(connectionAvgDurationSeconds_, 0.0) };
      inline ConnectionReportDataModel& setConnectionAvgDurationSeconds(double connectionAvgDurationSeconds) { DARABONBA_PTR_SET_VALUE(connectionAvgDurationSeconds_, connectionAvgDurationSeconds) };


      // connectionFailureCount Field Functions 
      bool hasConnectionFailureCount() const { return this->connectionFailureCount_ != nullptr;};
      void deleteConnectionFailureCount() { this->connectionFailureCount_ = nullptr;};
      inline int64_t getConnectionFailureCount() const { DARABONBA_PTR_GET_DEFAULT(connectionFailureCount_, 0L) };
      inline ConnectionReportDataModel& setConnectionFailureCount(int64_t connectionFailureCount) { DARABONBA_PTR_SET_VALUE(connectionFailureCount_, connectionFailureCount) };


      // connectionSuccessCount Field Functions 
      bool hasConnectionSuccessCount() const { return this->connectionSuccessCount_ != nullptr;};
      void deleteConnectionSuccessCount() { this->connectionSuccessCount_ = nullptr;};
      inline int64_t getConnectionSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(connectionSuccessCount_, 0L) };
      inline ConnectionReportDataModel& setConnectionSuccessCount(int64_t connectionSuccessCount) { DARABONBA_PTR_SET_VALUE(connectionSuccessCount_, connectionSuccessCount) };


      // connectionSuccessRate Field Functions 
      bool hasConnectionSuccessRate() const { return this->connectionSuccessRate_ != nullptr;};
      void deleteConnectionSuccessRate() { this->connectionSuccessRate_ = nullptr;};
      inline double getConnectionSuccessRate() const { DARABONBA_PTR_GET_DEFAULT(connectionSuccessRate_, 0.0) };
      inline ConnectionReportDataModel& setConnectionSuccessRate(double connectionSuccessRate) { DARABONBA_PTR_SET_VALUE(connectionSuccessRate_, connectionSuccessRate) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ConnectionReportDataModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // statEndDate Field Functions 
      bool hasStatEndDate() const { return this->statEndDate_ != nullptr;};
      void deleteStatEndDate() { this->statEndDate_ = nullptr;};
      inline string getStatEndDate() const { DARABONBA_PTR_GET_DEFAULT(statEndDate_, "") };
      inline ConnectionReportDataModel& setStatEndDate(string statEndDate) { DARABONBA_PTR_SET_VALUE(statEndDate_, statEndDate) };


      // statStartDate Field Functions 
      bool hasStatStartDate() const { return this->statStartDate_ != nullptr;};
      void deleteStatStartDate() { this->statStartDate_ = nullptr;};
      inline string getStatStartDate() const { DARABONBA_PTR_GET_DEFAULT(statStartDate_, "") };
      inline ConnectionReportDataModel& setStatStartDate(string statStartDate) { DARABONBA_PTR_SET_VALUE(statStartDate_, statStartDate) };


    protected:
      // The ID of the app instance group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The average duration of successful connections. In the current version, the return value is in milliseconds, so parse it as milliseconds. The `Seconds` in the field name is retained for compatibility and does not indicate the unit. This value may not be returned if there are no successful connections.
      shared_ptr<double> connectionAvgDurationSeconds_ {};
      // The number of connection failures within the statistical window.
      shared_ptr<int64_t> connectionFailureCount_ {};
      // The number of successful connections within the statistical window.
      shared_ptr<int64_t> connectionSuccessCount_ {};
      // The connection success rate, which is calculated by dividing the number of successful connections by the sum of successful and failed connections. The value ranges from 0 to 1. Multiply the value by 100 to get the percentage. This value may not be returned if there are no connection records.
      shared_ptr<double> connectionSuccessRate_ {};
      // The ID of the business region to which the report data belongs.
      shared_ptr<string> regionId_ {};
      // The end time of the statistical window. Format: `yyyy-MM-dd HH:mm:ss`. The string itself does not carry a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> statEndDate_ {};
      // The start time of the statistical window. Format: `yyyy-MM-dd HH:mm:ss`. The string itself does not carry a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> statStartDate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->connectionReportDataModel_ == nullptr && this->count_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryConnectionReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // connectionReportDataModel Field Functions 
    bool hasConnectionReportDataModel() const { return this->connectionReportDataModel_ != nullptr;};
    void deleteConnectionReportDataModel() { this->connectionReportDataModel_ = nullptr;};
    inline const vector<QueryConnectionReportResponseBody::ConnectionReportDataModel> & getConnectionReportDataModel() const { DARABONBA_PTR_GET_CONST(connectionReportDataModel_, vector<QueryConnectionReportResponseBody::ConnectionReportDataModel>) };
    inline vector<QueryConnectionReportResponseBody::ConnectionReportDataModel> getConnectionReportDataModel() { DARABONBA_PTR_GET(connectionReportDataModel_, vector<QueryConnectionReportResponseBody::ConnectionReportDataModel>) };
    inline QueryConnectionReportResponseBody& setConnectionReportDataModel(const vector<QueryConnectionReportResponseBody::ConnectionReportDataModel> & connectionReportDataModel) { DARABONBA_PTR_SET_VALUE(connectionReportDataModel_, connectionReportDataModel) };
    inline QueryConnectionReportResponseBody& setConnectionReportDataModel(vector<QueryConnectionReportResponseBody::ConnectionReportDataModel> && connectionReportDataModel) { DARABONBA_PTR_SET_RVALUE(connectionReportDataModel_, connectionReportDataModel) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryConnectionReportResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryConnectionReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryConnectionReportResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryConnectionReportResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConnectionReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. `200` indicates that the request is successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The list of connection report data.
    shared_ptr<vector<QueryConnectionReportResponseBody::ConnectionReportDataModel>> connectionReportDataModel_ {};
    // The total number of records that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The description of the request processing result. `success` is usually returned when the request is successful.
    shared_ptr<string> message_ {};
    // The page number corresponding to the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page used in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the current request, which can be used to troubleshoot the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
