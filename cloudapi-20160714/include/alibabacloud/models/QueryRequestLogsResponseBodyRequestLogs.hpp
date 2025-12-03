// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODYREQUESTLOGS_HPP_
#define ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODYREQUESTLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryRequestLogsResponseBodyRequestLogsRequestLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class QueryRequestLogsResponseBodyRequestLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRequestLogsResponseBodyRequestLogs& obj) { 
      DARABONBA_PTR_TO_JSON(RequestLog, requestLog_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRequestLogsResponseBodyRequestLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestLog, requestLog_);
    };
    QueryRequestLogsResponseBodyRequestLogs() = default ;
    QueryRequestLogsResponseBodyRequestLogs(const QueryRequestLogsResponseBodyRequestLogs &) = default ;
    QueryRequestLogsResponseBodyRequestLogs(QueryRequestLogsResponseBodyRequestLogs &&) = default ;
    QueryRequestLogsResponseBodyRequestLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRequestLogsResponseBodyRequestLogs() = default ;
    QueryRequestLogsResponseBodyRequestLogs& operator=(const QueryRequestLogsResponseBodyRequestLogs &) = default ;
    QueryRequestLogsResponseBodyRequestLogs& operator=(QueryRequestLogsResponseBodyRequestLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestLog_ == nullptr; };
    // requestLog Field Functions 
    bool hasRequestLog() const { return this->requestLog_ != nullptr;};
    void deleteRequestLog() { this->requestLog_ = nullptr;};
    inline const vector<Models::QueryRequestLogsResponseBodyRequestLogsRequestLog> & requestLog() const { DARABONBA_PTR_GET_CONST(requestLog_, vector<Models::QueryRequestLogsResponseBodyRequestLogsRequestLog>) };
    inline vector<Models::QueryRequestLogsResponseBodyRequestLogsRequestLog> requestLog() { DARABONBA_PTR_GET(requestLog_, vector<Models::QueryRequestLogsResponseBodyRequestLogsRequestLog>) };
    inline QueryRequestLogsResponseBodyRequestLogs& setRequestLog(const vector<Models::QueryRequestLogsResponseBodyRequestLogsRequestLog> & requestLog) { DARABONBA_PTR_SET_VALUE(requestLog_, requestLog) };
    inline QueryRequestLogsResponseBodyRequestLogs& setRequestLog(vector<Models::QueryRequestLogsResponseBodyRequestLogsRequestLog> && requestLog) { DARABONBA_PTR_SET_RVALUE(requestLog_, requestLog) };


  protected:
    std::shared_ptr<vector<Models::QueryRequestLogsResponseBodyRequestLogsRequestLog>> requestLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
