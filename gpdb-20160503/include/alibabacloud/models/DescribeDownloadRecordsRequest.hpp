// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDownloadRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DownloadTaskType, downloadTaskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DownloadTaskType, downloadTaskType_);
    };
    DescribeDownloadRecordsRequest() = default ;
    DescribeDownloadRecordsRequest(const DescribeDownloadRecordsRequest &) = default ;
    DescribeDownloadRecordsRequest(DescribeDownloadRecordsRequest &&) = default ;
    DescribeDownloadRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadRecordsRequest() = default ;
    DescribeDownloadRecordsRequest& operator=(const DescribeDownloadRecordsRequest &) = default ;
    DescribeDownloadRecordsRequest& operator=(DescribeDownloadRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->downloadTaskType_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDownloadRecordsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // downloadTaskType Field Functions 
    bool hasDownloadTaskType() const { return this->downloadTaskType_ != nullptr;};
    void deleteDownloadTaskType() { this->downloadTaskType_ = nullptr;};
    inline string downloadTaskType() const { DARABONBA_PTR_GET_DEFAULT(downloadTaskType_, "") };
    inline DescribeDownloadRecordsRequest& setDownloadTaskType(string downloadTaskType) { DARABONBA_PTR_SET_VALUE(downloadTaskType_, downloadTaskType) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> downloadTaskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
