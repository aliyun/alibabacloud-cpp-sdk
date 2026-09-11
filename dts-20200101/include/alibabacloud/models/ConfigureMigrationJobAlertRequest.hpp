// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureMigrationJobAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureMigrationJobAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_TO_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_TO_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_TO_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_TO_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_TO_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureMigrationJobAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DelayAlertPhone, delayAlertPhone_);
      DARABONBA_PTR_FROM_JSON(DelayAlertStatus, delayAlertStatus_);
      DARABONBA_PTR_FROM_JSON(DelayOverSeconds, delayOverSeconds_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertPhone, errorAlertPhone_);
      DARABONBA_PTR_FROM_JSON(ErrorAlertStatus, errorAlertStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ConfigureMigrationJobAlertRequest() = default ;
    ConfigureMigrationJobAlertRequest(const ConfigureMigrationJobAlertRequest &) = default ;
    ConfigureMigrationJobAlertRequest(ConfigureMigrationJobAlertRequest &&) = default ;
    ConfigureMigrationJobAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureMigrationJobAlertRequest() = default ;
    ConfigureMigrationJobAlertRequest& operator=(const ConfigureMigrationJobAlertRequest &) = default ;
    ConfigureMigrationJobAlertRequest& operator=(ConfigureMigrationJobAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->delayAlertPhone_ == nullptr && this->delayAlertStatus_ == nullptr && this->delayOverSeconds_ == nullptr && this->errorAlertPhone_ == nullptr && this->errorAlertStatus_ == nullptr
        && this->migrationJobId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ConfigureMigrationJobAlertRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // delayAlertPhone Field Functions 
    bool hasDelayAlertPhone() const { return this->delayAlertPhone_ != nullptr;};
    void deleteDelayAlertPhone() { this->delayAlertPhone_ = nullptr;};
    inline string getDelayAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(delayAlertPhone_, "") };
    inline ConfigureMigrationJobAlertRequest& setDelayAlertPhone(string delayAlertPhone) { DARABONBA_PTR_SET_VALUE(delayAlertPhone_, delayAlertPhone) };


    // delayAlertStatus Field Functions 
    bool hasDelayAlertStatus() const { return this->delayAlertStatus_ != nullptr;};
    void deleteDelayAlertStatus() { this->delayAlertStatus_ = nullptr;};
    inline string getDelayAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(delayAlertStatus_, "") };
    inline ConfigureMigrationJobAlertRequest& setDelayAlertStatus(string delayAlertStatus) { DARABONBA_PTR_SET_VALUE(delayAlertStatus_, delayAlertStatus) };


    // delayOverSeconds Field Functions 
    bool hasDelayOverSeconds() const { return this->delayOverSeconds_ != nullptr;};
    void deleteDelayOverSeconds() { this->delayOverSeconds_ = nullptr;};
    inline string getDelayOverSeconds() const { DARABONBA_PTR_GET_DEFAULT(delayOverSeconds_, "") };
    inline ConfigureMigrationJobAlertRequest& setDelayOverSeconds(string delayOverSeconds) { DARABONBA_PTR_SET_VALUE(delayOverSeconds_, delayOverSeconds) };


    // errorAlertPhone Field Functions 
    bool hasErrorAlertPhone() const { return this->errorAlertPhone_ != nullptr;};
    void deleteErrorAlertPhone() { this->errorAlertPhone_ = nullptr;};
    inline string getErrorAlertPhone() const { DARABONBA_PTR_GET_DEFAULT(errorAlertPhone_, "") };
    inline ConfigureMigrationJobAlertRequest& setErrorAlertPhone(string errorAlertPhone) { DARABONBA_PTR_SET_VALUE(errorAlertPhone_, errorAlertPhone) };


    // errorAlertStatus Field Functions 
    bool hasErrorAlertStatus() const { return this->errorAlertStatus_ != nullptr;};
    void deleteErrorAlertStatus() { this->errorAlertStatus_ = nullptr;};
    inline string getErrorAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(errorAlertStatus_, "") };
    inline ConfigureMigrationJobAlertRequest& setErrorAlertStatus(string errorAlertStatus) { DARABONBA_PTR_SET_VALUE(errorAlertStatus_, errorAlertStatus) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string getMigrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline ConfigureMigrationJobAlertRequest& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureMigrationJobAlertRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureMigrationJobAlertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureMigrationJobAlertRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter. This parameter will be deprecated.
    shared_ptr<string> accountId_ {};
    // The mobile phone numbers of contacts for latency alerts. Separate multiple mobile phone numbers with commas (,).
    // 
    // This parameter is supported only on the China site (aliyun.com) and supports only Chinese mainland mobile phone numbers. You can specify up to 10 mobile phone numbers.
    // The China site does not support phone alerts. You can configure alert rules for DTS tasks only in the CloudMonitor console.
    shared_ptr<string> delayAlertPhone_ {};
    // Specifies whether to monitor the latency status. Valid values:
    // 
    // - **enable**: yes.
    // - **disable**: no.
    // 
    // > - Default value: **enable**.
    // - You must specify at least one of this parameter and the **ErrorAlertStatus** parameter.
    shared_ptr<string> delayAlertStatus_ {};
    // The threshold for triggering a latency alert. Unit: seconds. The value must be an integer. Set the threshold based on your business requirements. To avoid latency fluctuations caused by network conditions or database loads, set the threshold to 10 seconds or more.
    // > This parameter is required when **DelayAlertStatus** is set to **enable**.
    shared_ptr<string> delayOverSeconds_ {};
    // The mobile phone numbers of contacts for exception alerts. Separate multiple mobile phone numbers with commas (,).
    // 
    // This parameter is supported only on the China site (aliyun.com) and supports only Chinese mainland mobile phone numbers. You can specify up to 10 mobile phone numbers.
    // The international site does not support phone alerts. You can configure alert rules for DTS tasks only in the CloudMonitor console.
    shared_ptr<string> errorAlertPhone_ {};
    // Specifies whether to monitor the exception status. Valid values:
    // 
    // - **enable**: yes.
    // - **disable**: no.
    // 
    // > - Default value: **enable**.
    // - You must specify at least one of this parameter and the **DelayAlertStatus** parameter.
    // - After you enable the exception status monitoring feature, an alert is triggered when an exception is detected.
    shared_ptr<string> errorAlertStatus_ {};
    // Instance ID of the data migration instance. You can call the **DescribeMigrationJobs** operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> migrationJobId_ {};
    shared_ptr<string> ownerId_ {};
    // The ID of the region where the data migration instance resides. For more information, see the supported region list.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
