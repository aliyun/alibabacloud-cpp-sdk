// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRequestLogsResponseBodyRequestLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class QueryRequestLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRequestLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestLogs, requestLogs_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRequestLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestLogs, requestLogs_);
    };
    QueryRequestLogsResponseBody() = default ;
    QueryRequestLogsResponseBody(const QueryRequestLogsResponseBody &) = default ;
    QueryRequestLogsResponseBody(QueryRequestLogsResponseBody &&) = default ;
    QueryRequestLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRequestLogsResponseBody() = default ;
    QueryRequestLogsResponseBody& operator=(const QueryRequestLogsResponseBody &) = default ;
    QueryRequestLogsResponseBody& operator=(QueryRequestLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->requestLogs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRequestLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestLogs Field Functions 
    bool hasRequestLogs() const { return this->requestLogs_ != nullptr;};
    void deleteRequestLogs() { this->requestLogs_ = nullptr;};
    inline const QueryRequestLogsResponseBodyRequestLogs & requestLogs() const { DARABONBA_PTR_GET_CONST(requestLogs_, QueryRequestLogsResponseBodyRequestLogs) };
    inline QueryRequestLogsResponseBodyRequestLogs requestLogs() { DARABONBA_PTR_GET(requestLogs_, QueryRequestLogsResponseBodyRequestLogs) };
    inline QueryRequestLogsResponseBody& setRequestLogs(const QueryRequestLogsResponseBodyRequestLogs & requestLogs) { DARABONBA_PTR_SET_VALUE(requestLogs_, requestLogs) };
    inline QueryRequestLogsResponseBody& setRequestLogs(QueryRequestLogsResponseBodyRequestLogs && requestLogs) { DARABONBA_PTR_SET_RVALUE(requestLogs_, requestLogs) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The request logs.
    std::shared_ptr<QueryRequestLogsResponseBodyRequestLogs> requestLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
