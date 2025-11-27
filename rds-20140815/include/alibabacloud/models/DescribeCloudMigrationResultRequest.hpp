// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDMIGRATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDMIGRATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCloudMigrationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudMigrationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudMigrationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeCloudMigrationResultRequest() = default ;
    DescribeCloudMigrationResultRequest(const DescribeCloudMigrationResultRequest &) = default ;
    DescribeCloudMigrationResultRequest(DescribeCloudMigrationResultRequest &&) = default ;
    DescribeCloudMigrationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudMigrationResultRequest() = default ;
    DescribeCloudMigrationResultRequest& operator=(const DescribeCloudMigrationResultRequest &) = default ;
    DescribeCloudMigrationResultRequest& operator=(DescribeCloudMigrationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceIpAddress_ == nullptr && return this->sourcePort_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeCloudMigrationResultRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCloudMigrationResultRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCloudMigrationResultRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCloudMigrationResultRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string sourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline DescribeCloudMigrationResultRequest& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline DescribeCloudMigrationResultRequest& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeCloudMigrationResultRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeCloudMigrationResultRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The private IP address that is used to connect to the self-managed PostgreSQL instance.
    // 
    // *   If the self-managed PostgreSQL instance resides on an Elastic Compute Service (ECS) instance, enter the private IP address of the ECS instance. For more information about how to obtain the private IP address of an ECS instance, see [View IP addresses](https://help.aliyun.com/document_detail/273914.html).
    // *   If the self-managed PostgreSQL instance resides in a data center, enter the private IP address of the data center.
    std::shared_ptr<string> sourceIpAddress_ = nullptr;
    // The port number that is used to connect to the self-managed PostgreSQL instance. You can run the netstat -a | grep PGSQL command to obtain the port number.
    std::shared_ptr<int64_t> sourcePort_ = nullptr;
    // The task ID. You can obtain the task ID from the response that is returned when you call the CreateCloudMigrationTask operation to create the task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The task name. You can obtain the task name from the response that is returned when you call the CreateCloudMigrationTask operation to create the task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
