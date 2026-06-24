// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEMEM0PUBLICCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEMEM0PUBLICCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class AllocateMem0PublicConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateMem0PublicConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateMem0PublicConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AllocateMem0PublicConnectionRequest() = default ;
    AllocateMem0PublicConnectionRequest(const AllocateMem0PublicConnectionRequest &) = default ;
    AllocateMem0PublicConnectionRequest(AllocateMem0PublicConnectionRequest &&) = default ;
    AllocateMem0PublicConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateMem0PublicConnectionRequest() = default ;
    AllocateMem0PublicConnectionRequest& operator=(const AllocateMem0PublicConnectionRequest &) = default ;
    AllocateMem0PublicConnectionRequest& operator=(AllocateMem0PublicConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStringPrefix_ == nullptr
        && this->DBInstanceName_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr; };
    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline AllocateMem0PublicConnectionRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline AllocateMem0PublicConnectionRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline AllocateMem0PublicConnectionRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateMem0PublicConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The prefix of the public network connection string.
    // 
    // This parameter is required.
    shared_ptr<string> connectionStringPrefix_ {};
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The port number.
    // 
    // This parameter is required.
    shared_ptr<string> port_ {};
    // The region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
