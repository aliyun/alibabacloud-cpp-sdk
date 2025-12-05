// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetDatabaseAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetDatabaseAccountRequest() = default ;
    GetDatabaseAccountRequest(const GetDatabaseAccountRequest &) = default ;
    GetDatabaseAccountRequest(GetDatabaseAccountRequest &&) = default ;
    GetDatabaseAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseAccountRequest() = default ;
    GetDatabaseAccountRequest& operator=(const GetDatabaseAccountRequest &) = default ;
    GetDatabaseAccountRequest& operator=(GetDatabaseAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string databaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline GetDatabaseAccountRequest& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDatabaseAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDatabaseAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the database account to query.
    // 
    // >  You can call the [ListDatabaseAccounts](https://help.aliyun.com/document_detail/2758839.html) operation to query the database account ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseAccountId_ = nullptr;
    // The bastion host ID.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
