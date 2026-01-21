// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseAccountIds_ == nullptr
        && this->databaseId_ == nullptr; };
      // databaseAccountIds Field Functions 
      bool hasDatabaseAccountIds() const { return this->databaseAccountIds_ != nullptr;};
      void deleteDatabaseAccountIds() { this->databaseAccountIds_ = nullptr;};
      inline const vector<string> & getDatabaseAccountIds() const { DARABONBA_PTR_GET_CONST(databaseAccountIds_, vector<string>) };
      inline vector<string> getDatabaseAccountIds() { DARABONBA_PTR_GET(databaseAccountIds_, vector<string>) };
      inline Databases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
      inline Databases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Databases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    protected:
      // An array that consists of database account IDs.
      shared_ptr<vector<string>> databaseAccountIds_ {};
      // The ID of the database on which you want to revoke permissions.
      shared_ptr<string> databaseId_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<DetachDatabaseAccountsFromUserRequest::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<DetachDatabaseAccountsFromUserRequest::Databases>) };
    inline vector<DetachDatabaseAccountsFromUserRequest::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<DetachDatabaseAccountsFromUserRequest::Databases>) };
    inline DetachDatabaseAccountsFromUserRequest& setDatabases(const vector<DetachDatabaseAccountsFromUserRequest::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DetachDatabaseAccountsFromUserRequest& setDatabases(vector<DetachDatabaseAccountsFromUserRequest::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachDatabaseAccountsFromUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachDatabaseAccountsFromUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DetachDatabaseAccountsFromUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The databases.
    shared_ptr<vector<DetachDatabaseAccountsFromUserRequest::Databases>> databases_ {};
    // The bastion host ID.
    // 
    // > You can call the DescribeInstances operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user from whom you want to revoke the permissions on databases and database accounts.
    // 
    // > You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the ID of the user.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
