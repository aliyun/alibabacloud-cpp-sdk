// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESANDBOXRECOVERYTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESANDBOXRECOVERYTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeSandboxRecoveryTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSandboxRecoveryTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSandboxRecoveryTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
    };
    DescribeSandboxRecoveryTimeRequest() = default ;
    DescribeSandboxRecoveryTimeRequest(const DescribeSandboxRecoveryTimeRequest &) = default ;
    DescribeSandboxRecoveryTimeRequest(DescribeSandboxRecoveryTimeRequest &&) = default ;
    DescribeSandboxRecoveryTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSandboxRecoveryTimeRequest() = default ;
    DescribeSandboxRecoveryTimeRequest& operator=(const DescribeSandboxRecoveryTimeRequest &) = default ;
    DescribeSandboxRecoveryTimeRequest& operator=(DescribeSandboxRecoveryTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeSandboxRecoveryTimeRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


  protected:
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/437215.html) operation to obtain the ID of the backup schedule. If you set this parameter to the backup schedule ID obtained by calling the DescribeBackupPlanList operation, the dbs prefix must be removed. Otherwise, the call fails.
    // 
    // > If your instance is an ApsaraDB RDS for MySQL instance, you can [configure automatic access to a data source](https://help.aliyun.com/document_detail/193091.html) to automatically add the instance to DBS and obtain the ID of the backup schedule.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
