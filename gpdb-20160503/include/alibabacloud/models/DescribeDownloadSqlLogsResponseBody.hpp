// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADSQLLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADSQLLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDownloadSQLLogsResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDownloadSQLLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadSQLLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadSQLLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDownloadSQLLogsResponseBody() = default ;
    DescribeDownloadSQLLogsResponseBody(const DescribeDownloadSQLLogsResponseBody &) = default ;
    DescribeDownloadSQLLogsResponseBody(DescribeDownloadSQLLogsResponseBody &&) = default ;
    DescribeDownloadSQLLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadSQLLogsResponseBody() = default ;
    DescribeDownloadSQLLogsResponseBody& operator=(const DescribeDownloadSQLLogsResponseBody &) = default ;
    DescribeDownloadSQLLogsResponseBody& operator=(DescribeDownloadSQLLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->records_ == nullptr
        && return this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeDownloadSQLLogsResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeDownloadSQLLogsResponseBodyRecords>) };
    inline vector<DescribeDownloadSQLLogsResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<DescribeDownloadSQLLogsResponseBodyRecords>) };
    inline DescribeDownloadSQLLogsResponseBody& setRecords(const vector<DescribeDownloadSQLLogsResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeDownloadSQLLogsResponseBody& setRecords(vector<DescribeDownloadSQLLogsResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadSQLLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of download records.
    std::shared_ptr<vector<DescribeDownloadSQLLogsResponseBodyRecords>> records_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
