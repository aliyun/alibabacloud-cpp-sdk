// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATABASEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATABASEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteDatabaseAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDatabaseAccountRequest() = default ;
    DeleteDatabaseAccountRequest(const DeleteDatabaseAccountRequest &) = default ;
    DeleteDatabaseAccountRequest(DeleteDatabaseAccountRequest &&) = default ;
    DeleteDatabaseAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDatabaseAccountRequest() = default ;
    DeleteDatabaseAccountRequest& operator=(const DeleteDatabaseAccountRequest &) = default ;
    DeleteDatabaseAccountRequest& operator=(DeleteDatabaseAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string getDatabaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline DeleteDatabaseAccountRequest& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteDatabaseAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDatabaseAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the database account that you want to delete.
    // 
    // >  You can call the [ListDatabaseAccounts](https://help.aliyun.com/document_detail/2758839.html) operation to query the database account ID.
    // 
    // This parameter is required.
    shared_ptr<string> databaseAccountId_ {};
    // The ID of the bastion host from which you want to delete the database account.
    // 
    // > You can call the DescribeInstances operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host from which you want to delete the database account.
    // 
    // > For more information about the mapping between region IDs and region names, [see Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
