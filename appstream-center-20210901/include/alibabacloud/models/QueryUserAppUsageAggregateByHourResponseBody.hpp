// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERAPPUSAGEAGGREGATEBYHOURRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERAPPUSAGEAGGREGATEBYHOURRESPONSEBODY_HPP_
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
  class QueryUserAppUsageAggregateByHourResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserAppUsageAggregateByHourResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IndexData, indexData_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserAppUsageAggregateByHourResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IndexData, indexData_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryUserAppUsageAggregateByHourResponseBody() = default ;
    QueryUserAppUsageAggregateByHourResponseBody(const QueryUserAppUsageAggregateByHourResponseBody &) = default ;
    QueryUserAppUsageAggregateByHourResponseBody(QueryUserAppUsageAggregateByHourResponseBody &&) = default ;
    QueryUserAppUsageAggregateByHourResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserAppUsageAggregateByHourResponseBody() = default ;
    QueryUserAppUsageAggregateByHourResponseBody& operator=(const QueryUserAppUsageAggregateByHourResponseBody &) = default ;
    QueryUserAppUsageAggregateByHourResponseBody& operator=(QueryUserAppUsageAggregateByHourResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IndexData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IndexData& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppTimeCnt, appTimeCnt_);
        DARABONBA_PTR_TO_JSON(Hh, hh_);
      };
      friend void from_json(const Darabonba::Json& j, IndexData& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppTimeCnt, appTimeCnt_);
        DARABONBA_PTR_FROM_JSON(Hh, hh_);
      };
      IndexData() = default ;
      IndexData(const IndexData &) = default ;
      IndexData(IndexData &&) = default ;
      IndexData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IndexData() = default ;
      IndexData& operator=(const IndexData &) = default ;
      IndexData& operator=(IndexData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appTimeCnt_ == nullptr && this->hh_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline IndexData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline IndexData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appTimeCnt Field Functions 
      bool hasAppTimeCnt() const { return this->appTimeCnt_ != nullptr;};
      void deleteAppTimeCnt() { this->appTimeCnt_ = nullptr;};
      inline string getAppTimeCnt() const { DARABONBA_PTR_GET_DEFAULT(appTimeCnt_, "") };
      inline IndexData& setAppTimeCnt(string appTimeCnt) { DARABONBA_PTR_SET_VALUE(appTimeCnt_, appTimeCnt) };


      // hh Field Functions 
      bool hasHh() const { return this->hh_ != nullptr;};
      void deleteHh() { this->hh_ = nullptr;};
      inline string getHh() const { DARABONBA_PTR_GET_DEFAULT(hh_, "") };
      inline IndexData& setHh(string hh) { DARABONBA_PTR_SET_VALUE(hh_, hh) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The application name.
      shared_ptr<string> appName_ {};
      // The cumulative usage duration of the application within the statistical range. Unit: seconds.
      shared_ptr<string> appTimeCnt_ {};
      // The statistical hour in a two-digit 24-hour format string. Valid values: 00 to 23. Hour boundaries are divided based on the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> hh_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->indexData_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryUserAppUsageAggregateByHourResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // indexData Field Functions 
    bool hasIndexData() const { return this->indexData_ != nullptr;};
    void deleteIndexData() { this->indexData_ = nullptr;};
    inline const vector<QueryUserAppUsageAggregateByHourResponseBody::IndexData> & getIndexData() const { DARABONBA_PTR_GET_CONST(indexData_, vector<QueryUserAppUsageAggregateByHourResponseBody::IndexData>) };
    inline vector<QueryUserAppUsageAggregateByHourResponseBody::IndexData> getIndexData() { DARABONBA_PTR_GET(indexData_, vector<QueryUserAppUsageAggregateByHourResponseBody::IndexData>) };
    inline QueryUserAppUsageAggregateByHourResponseBody& setIndexData(const vector<QueryUserAppUsageAggregateByHourResponseBody::IndexData> & indexData) { DARABONBA_PTR_SET_VALUE(indexData_, indexData) };
    inline QueryUserAppUsageAggregateByHourResponseBody& setIndexData(vector<QueryUserAppUsageAggregateByHourResponseBody::IndexData> && indexData) { DARABONBA_PTR_SET_RVALUE(indexData_, indexData) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryUserAppUsageAggregateByHourResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserAppUsageAggregateByHourResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of 200 indicates that the request is successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The list of hourly aggregated user application usage data. A maximum of five records are returned for each hour.
    shared_ptr<vector<QueryUserAppUsageAggregateByHourResponseBody::IndexData>> indexData_ {};
    // The description of the request processing result. A value of success is usually returned when the request is successful.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
