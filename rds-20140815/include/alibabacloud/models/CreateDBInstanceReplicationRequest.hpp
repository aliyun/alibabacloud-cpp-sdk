// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceReplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceReplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(MasterHost, masterHost_);
      DARABONBA_PTR_TO_JSON(MasterPassword, masterPassword_);
      DARABONBA_PTR_TO_JSON(MasterPort, masterPort_);
      DARABONBA_PTR_TO_JSON(MasterUser, masterUser_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceReplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(MasterHost, masterHost_);
      DARABONBA_PTR_FROM_JSON(MasterPassword, masterPassword_);
      DARABONBA_PTR_FROM_JSON(MasterPort, masterPort_);
      DARABONBA_PTR_FROM_JSON(MasterUser, masterUser_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateDBInstanceReplicationRequest() = default ;
    CreateDBInstanceReplicationRequest(const CreateDBInstanceReplicationRequest &) = default ;
    CreateDBInstanceReplicationRequest(CreateDBInstanceReplicationRequest &&) = default ;
    CreateDBInstanceReplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceReplicationRequest() = default ;
    CreateDBInstanceReplicationRequest& operator=(const CreateDBInstanceReplicationRequest &) = default ;
    CreateDBInstanceReplicationRequest& operator=(CreateDBInstanceReplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->dbInstanceId_ == nullptr && this->masterHost_ == nullptr && this->masterPassword_ == nullptr && this->masterPort_ == nullptr && this->masterUser_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline CreateDBInstanceReplicationRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline CreateDBInstanceReplicationRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // masterHost Field Functions 
    bool hasMasterHost() const { return this->masterHost_ != nullptr;};
    void deleteMasterHost() { this->masterHost_ = nullptr;};
    inline string getMasterHost() const { DARABONBA_PTR_GET_DEFAULT(masterHost_, "") };
    inline CreateDBInstanceReplicationRequest& setMasterHost(string masterHost) { DARABONBA_PTR_SET_VALUE(masterHost_, masterHost) };


    // masterPassword Field Functions 
    bool hasMasterPassword() const { return this->masterPassword_ != nullptr;};
    void deleteMasterPassword() { this->masterPassword_ = nullptr;};
    inline string getMasterPassword() const { DARABONBA_PTR_GET_DEFAULT(masterPassword_, "") };
    inline CreateDBInstanceReplicationRequest& setMasterPassword(string masterPassword) { DARABONBA_PTR_SET_VALUE(masterPassword_, masterPassword) };


    // masterPort Field Functions 
    bool hasMasterPort() const { return this->masterPort_ != nullptr;};
    void deleteMasterPort() { this->masterPort_ = nullptr;};
    inline int32_t getMasterPort() const { DARABONBA_PTR_GET_DEFAULT(masterPort_, 0) };
    inline CreateDBInstanceReplicationRequest& setMasterPort(int32_t masterPort) { DARABONBA_PTR_SET_VALUE(masterPort_, masterPort) };


    // masterUser Field Functions 
    bool hasMasterUser() const { return this->masterUser_ != nullptr;};
    void deleteMasterUser() { this->masterUser_ = nullptr;};
    inline string getMasterUser() const { DARABONBA_PTR_GET_DEFAULT(masterUser_, "") };
    inline CreateDBInstanceReplicationRequest& setMasterUser(string masterUser) { DARABONBA_PTR_SET_VALUE(masterUser_, masterUser) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBInstanceReplicationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceReplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the replication channel, used to identify the replication link.
    shared_ptr<string> channelName_ {};
    // The instance ID. You can obtain it by invoking DescribeDBInstances.
    // 
    // This parameter is required.
    shared_ptr<string> dbInstanceId_ {};
    // The host address of the master database, which can be an IP address or a domain name.
    // 
    // This parameter is required.
    shared_ptr<string> masterHost_ {};
    // The password of the master database, used to authenticate the replication user. It must be Base64-encoded in advance.
    // 
    // This parameter is required.
    shared_ptr<string> masterPassword_ {};
    // The port number of the master database, typically 3306 for MySQL.
    // 
    // This parameter is required.
    shared_ptr<int32_t> masterPort_ {};
    // The username of the master database, used to establish the replication connection.
    // 
    // This parameter is required.
    shared_ptr<string> masterUser_ {};
    // 阿里云账号ID，用于指定资源的所有者
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the Region where the instance is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
