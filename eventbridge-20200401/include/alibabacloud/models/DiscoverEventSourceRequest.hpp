// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceMySQLParameters, sourceMySQLParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceMySQLParameters, sourceMySQLParameters_);
    };
    DiscoverEventSourceRequest() = default ;
    DiscoverEventSourceRequest(const DiscoverEventSourceRequest &) = default ;
    DiscoverEventSourceRequest(DiscoverEventSourceRequest &&) = default ;
    DiscoverEventSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceRequest() = default ;
    DiscoverEventSourceRequest& operator=(const DiscoverEventSourceRequest &) = default ;
    DiscoverEventSourceRequest& operator=(DiscoverEventSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceMySQLParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceMySQLParameters& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(Limit, limit_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(Offset, offset_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(User, user_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, SourceMySQLParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(Limit, limit_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(Offset, offset_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(User, user_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      SourceMySQLParameters() = default ;
      SourceMySQLParameters(const SourceMySQLParameters &) = default ;
      SourceMySQLParameters(SourceMySQLParameters &&) = default ;
      SourceMySQLParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceMySQLParameters() = default ;
      SourceMySQLParameters& operator=(const SourceMySQLParameters &) = default ;
      SourceMySQLParameters& operator=(SourceMySQLParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->hostName_ == nullptr && this->limit_ == nullptr && this->networkType_ == nullptr && this->offset_ == nullptr && this->password_ == nullptr
        && this->port_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->tableName_ == nullptr && this->user_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline SourceMySQLParameters& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline SourceMySQLParameters& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
      inline SourceMySQLParameters& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline SourceMySQLParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // offset Field Functions 
      bool hasOffset() const { return this->offset_ != nullptr;};
      void deleteOffset() { this->offset_ = nullptr;};
      inline string getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
      inline SourceMySQLParameters& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline SourceMySQLParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline SourceMySQLParameters& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SourceMySQLParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline SourceMySQLParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline SourceMySQLParameters& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline SourceMySQLParameters& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
      inline SourceMySQLParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline SourceMySQLParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> databaseName_ {};
      shared_ptr<string> hostName_ {};
      shared_ptr<string> limit_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<string> offset_ {};
      shared_ptr<string> password_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<string> tableName_ {};
      shared_ptr<string> user_ {};
      shared_ptr<string> vSwitchIds_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->sourceMySQLParameters_ == nullptr; };
    // sourceMySQLParameters Field Functions 
    bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
    void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
    inline const DiscoverEventSourceRequest::SourceMySQLParameters & getSourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, DiscoverEventSourceRequest::SourceMySQLParameters) };
    inline DiscoverEventSourceRequest::SourceMySQLParameters getSourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, DiscoverEventSourceRequest::SourceMySQLParameters) };
    inline DiscoverEventSourceRequest& setSourceMySQLParameters(const DiscoverEventSourceRequest::SourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
    inline DiscoverEventSourceRequest& setSourceMySQLParameters(DiscoverEventSourceRequest::SourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


  protected:
    shared_ptr<DiscoverEventSourceRequest::SourceMySQLParameters> sourceMySQLParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
