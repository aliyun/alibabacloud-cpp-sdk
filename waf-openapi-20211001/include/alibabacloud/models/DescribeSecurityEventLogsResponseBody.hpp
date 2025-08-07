// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventLogsResponseBodySecurityEventMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventLogs, securityEventLogs_);
      DARABONBA_PTR_TO_JSON(SecurityEventLogsTotalCount, securityEventLogsTotalCount_);
      DARABONBA_PTR_TO_JSON(SecurityEventMetaData, securityEventMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventLogs, securityEventLogs_);
      DARABONBA_PTR_FROM_JSON(SecurityEventLogsTotalCount, securityEventLogsTotalCount_);
      DARABONBA_PTR_FROM_JSON(SecurityEventMetaData, securityEventMetaData_);
    };
    DescribeSecurityEventLogsResponseBody() = default ;
    DescribeSecurityEventLogsResponseBody(const DescribeSecurityEventLogsResponseBody &) = default ;
    DescribeSecurityEventLogsResponseBody(DescribeSecurityEventLogsResponseBody &&) = default ;
    DescribeSecurityEventLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventLogsResponseBody() = default ;
    DescribeSecurityEventLogsResponseBody& operator=(const DescribeSecurityEventLogsResponseBody &) = default ;
    DescribeSecurityEventLogsResponseBody& operator=(DescribeSecurityEventLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityEventLogs_ != nullptr && this->securityEventLogsTotalCount_ != nullptr && this->securityEventMetaData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventLogs Field Functions 
    bool hasSecurityEventLogs() const { return this->securityEventLogs_ != nullptr;};
    void deleteSecurityEventLogs() { this->securityEventLogs_ = nullptr;};
    inline const vector<Darabonba::Json> & securityEventLogs() const { DARABONBA_PTR_GET_CONST(securityEventLogs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> securityEventLogs() { DARABONBA_PTR_GET(securityEventLogs_, vector<Darabonba::Json>) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventLogs(const vector<Darabonba::Json> & securityEventLogs) { DARABONBA_PTR_SET_VALUE(securityEventLogs_, securityEventLogs) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventLogs(vector<Darabonba::Json> && securityEventLogs) { DARABONBA_PTR_SET_RVALUE(securityEventLogs_, securityEventLogs) };


    // securityEventLogsTotalCount Field Functions 
    bool hasSecurityEventLogsTotalCount() const { return this->securityEventLogsTotalCount_ != nullptr;};
    void deleteSecurityEventLogsTotalCount() { this->securityEventLogsTotalCount_ = nullptr;};
    inline int64_t securityEventLogsTotalCount() const { DARABONBA_PTR_GET_DEFAULT(securityEventLogsTotalCount_, 0L) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventLogsTotalCount(int64_t securityEventLogsTotalCount) { DARABONBA_PTR_SET_VALUE(securityEventLogsTotalCount_, securityEventLogsTotalCount) };


    // securityEventMetaData Field Functions 
    bool hasSecurityEventMetaData() const { return this->securityEventMetaData_ != nullptr;};
    void deleteSecurityEventMetaData() { this->securityEventMetaData_ = nullptr;};
    inline const DescribeSecurityEventLogsResponseBodySecurityEventMetaData & securityEventMetaData() const { DARABONBA_PTR_GET_CONST(securityEventMetaData_, DescribeSecurityEventLogsResponseBodySecurityEventMetaData) };
    inline DescribeSecurityEventLogsResponseBodySecurityEventMetaData securityEventMetaData() { DARABONBA_PTR_GET(securityEventMetaData_, DescribeSecurityEventLogsResponseBodySecurityEventMetaData) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventMetaData(const DescribeSecurityEventLogsResponseBodySecurityEventMetaData & securityEventMetaData) { DARABONBA_PTR_SET_VALUE(securityEventMetaData_, securityEventMetaData) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventMetaData(DescribeSecurityEventLogsResponseBodySecurityEventMetaData && securityEventMetaData) { DARABONBA_PTR_SET_RVALUE(securityEventMetaData_, securityEventMetaData) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The attack logs returned.
    std::shared_ptr<vector<Darabonba::Json>> securityEventLogs_ = nullptr;
    // The total number of logs returned.
    std::shared_ptr<int64_t> securityEventLogsTotalCount_ = nullptr;
    // The metadata of the time series data returned.
    std::shared_ptr<DescribeSecurityEventLogsResponseBodySecurityEventMetaData> securityEventMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
