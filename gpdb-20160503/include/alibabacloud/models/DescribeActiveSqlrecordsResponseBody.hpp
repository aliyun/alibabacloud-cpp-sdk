// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeActiveSQLRecordsResponseBodyQueries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeActiveSQLRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Queries, queries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Queries, queries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeActiveSQLRecordsResponseBody() = default ;
    DescribeActiveSQLRecordsResponseBody(const DescribeActiveSQLRecordsResponseBody &) = default ;
    DescribeActiveSQLRecordsResponseBody(DescribeActiveSQLRecordsResponseBody &&) = default ;
    DescribeActiveSQLRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveSQLRecordsResponseBody() = default ;
    DescribeActiveSQLRecordsResponseBody& operator=(const DescribeActiveSQLRecordsResponseBody &) = default ;
    DescribeActiveSQLRecordsResponseBody& operator=(DescribeActiveSQLRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->queries_ != nullptr && this->requestId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeActiveSQLRecordsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<DescribeActiveSQLRecordsResponseBodyQueries> & queries() const { DARABONBA_PTR_GET_CONST(queries_, vector<DescribeActiveSQLRecordsResponseBodyQueries>) };
    inline vector<DescribeActiveSQLRecordsResponseBodyQueries> queries() { DARABONBA_PTR_GET(queries_, vector<DescribeActiveSQLRecordsResponseBodyQueries>) };
    inline DescribeActiveSQLRecordsResponseBody& setQueries(const vector<DescribeActiveSQLRecordsResponseBodyQueries> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline DescribeActiveSQLRecordsResponseBody& setQueries(vector<DescribeActiveSQLRecordsResponseBodyQueries> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveSQLRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The queried SQL records.
    std::shared_ptr<vector<DescribeActiveSQLRecordsResponseBodyQueries>> queries_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
