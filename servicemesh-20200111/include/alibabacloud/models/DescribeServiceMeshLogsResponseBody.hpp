// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceMeshLogsResponseBodyLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceMeshLogsResponseBody() = default ;
    DescribeServiceMeshLogsResponseBody(const DescribeServiceMeshLogsResponseBody &) = default ;
    DescribeServiceMeshLogsResponseBody(DescribeServiceMeshLogsResponseBody &&) = default ;
    DescribeServiceMeshLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshLogsResponseBody() = default ;
    DescribeServiceMeshLogsResponseBody& operator=(const DescribeServiceMeshLogsResponseBody &) = default ;
    DescribeServiceMeshLogsResponseBody& operator=(DescribeServiceMeshLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logs_ == nullptr
        && return this->requestId_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<DescribeServiceMeshLogsResponseBodyLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<DescribeServiceMeshLogsResponseBodyLogs>) };
    inline vector<DescribeServiceMeshLogsResponseBodyLogs> logs() { DARABONBA_PTR_GET(logs_, vector<DescribeServiceMeshLogsResponseBodyLogs>) };
    inline DescribeServiceMeshLogsResponseBody& setLogs(const vector<DescribeServiceMeshLogsResponseBodyLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeServiceMeshLogsResponseBody& setLogs(vector<DescribeServiceMeshLogsResponseBodyLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the logs.
    std::shared_ptr<vector<DescribeServiceMeshLogsResponseBodyLogs>> logs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
