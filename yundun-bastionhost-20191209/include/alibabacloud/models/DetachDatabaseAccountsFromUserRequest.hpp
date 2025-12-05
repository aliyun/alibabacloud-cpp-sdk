// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachDatabaseAccountsFromUserRequestDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachDatabaseAccountsFromUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDatabaseAccountsFromUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDatabaseAccountsFromUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DetachDatabaseAccountsFromUserRequest() = default ;
    DetachDatabaseAccountsFromUserRequest(const DetachDatabaseAccountsFromUserRequest &) = default ;
    DetachDatabaseAccountsFromUserRequest(DetachDatabaseAccountsFromUserRequest &&) = default ;
    DetachDatabaseAccountsFromUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDatabaseAccountsFromUserRequest() = default ;
    DetachDatabaseAccountsFromUserRequest& operator=(const DetachDatabaseAccountsFromUserRequest &) = default ;
    DetachDatabaseAccountsFromUserRequest& operator=(DetachDatabaseAccountsFromUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->userId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<DetachDatabaseAccountsFromUserRequestDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<DetachDatabaseAccountsFromUserRequestDatabases>) };
    inline vector<DetachDatabaseAccountsFromUserRequestDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<DetachDatabaseAccountsFromUserRequestDatabases>) };
    inline DetachDatabaseAccountsFromUserRequest& setDatabases(const vector<DetachDatabaseAccountsFromUserRequestDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DetachDatabaseAccountsFromUserRequest& setDatabases(vector<DetachDatabaseAccountsFromUserRequestDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachDatabaseAccountsFromUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachDatabaseAccountsFromUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DetachDatabaseAccountsFromUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The databases.
    std::shared_ptr<vector<DetachDatabaseAccountsFromUserRequestDatabases>> databases_ = nullptr;
    // The bastion host ID.
    // 
    // > You can call the DescribeInstances operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the user from whom you want to revoke the permissions on databases and database accounts.
    // 
    // > You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the ID of the user.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
