// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADSQLLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADSQLLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDownloadSQLLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadSQLLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadSQLLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    DescribeDownloadSQLLogsRequest() = default ;
    DescribeDownloadSQLLogsRequest(const DescribeDownloadSQLLogsRequest &) = default ;
    DescribeDownloadSQLLogsRequest(DescribeDownloadSQLLogsRequest &&) = default ;
    DescribeDownloadSQLLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadSQLLogsRequest() = default ;
    DescribeDownloadSQLLogsRequest& operator=(const DescribeDownloadSQLLogsRequest &) = default ;
    DescribeDownloadSQLLogsRequest& operator=(DescribeDownloadSQLLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDownloadSQLLogsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // Instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB for PostgreSQL instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
