// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESANDBOXINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESANDBOXINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeSandboxInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSandboxInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSandboxInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeSandboxInstancesRequest() = default ;
    DescribeSandboxInstancesRequest(const DescribeSandboxInstancesRequest &) = default ;
    DescribeSandboxInstancesRequest(DescribeSandboxInstancesRequest &&) = default ;
    DescribeSandboxInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSandboxInstancesRequest() = default ;
    DescribeSandboxInstancesRequest& operator=(const DescribeSandboxInstancesRequest &) = default ;
    DescribeSandboxInstancesRequest& operator=(DescribeSandboxInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeSandboxInstancesRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSandboxInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSandboxInstancesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSandboxInstancesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/437215.html) operation to obtain the ID of the backup schedule.
    // 
    // > If your instance is an ApsaraDB RDS for MySQL instance, you can [configure automatic access to a data source](https://help.aliyun.com/document_detail/193091.html) to automatically add the instance to DBS and obtain the ID of the backup schedule.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // The ID of the sandbox instance. You can call the [CreateSandboxInstance](https://help.aliyun.com/document_detail/437252.html) operation to obtain the ID of the sandbox instance.
    shared_ptr<string> instanceId_ {};
    // The number of the page to return. The value must be an integer that is greater than 0. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of entries to return on each page. Valid values:
    // 
    // *   30\\. This is the default value.
    // *   50
    // *   100
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
