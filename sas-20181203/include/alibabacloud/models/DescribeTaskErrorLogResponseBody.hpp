// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTaskErrorLogResponseBodyLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTaskErrorLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskErrorLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskErrorLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTaskErrorLogResponseBody() = default ;
    DescribeTaskErrorLogResponseBody(const DescribeTaskErrorLogResponseBody &) = default ;
    DescribeTaskErrorLogResponseBody(DescribeTaskErrorLogResponseBody &&) = default ;
    DescribeTaskErrorLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskErrorLogResponseBody() = default ;
    DescribeTaskErrorLogResponseBody& operator=(const DescribeTaskErrorLogResponseBody &) = default ;
    DescribeTaskErrorLogResponseBody& operator=(DescribeTaskErrorLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logs_ == nullptr
        && return this->requestId_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<DescribeTaskErrorLogResponseBodyLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<DescribeTaskErrorLogResponseBodyLogs>) };
    inline vector<DescribeTaskErrorLogResponseBodyLogs> logs() { DARABONBA_PTR_GET(logs_, vector<DescribeTaskErrorLogResponseBodyLogs>) };
    inline DescribeTaskErrorLogResponseBody& setLogs(const vector<DescribeTaskErrorLogResponseBodyLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeTaskErrorLogResponseBody& setLogs(vector<DescribeTaskErrorLogResponseBodyLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTaskErrorLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the error logs.
    std::shared_ptr<vector<DescribeTaskErrorLogResponseBodyLogs>> logs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
