// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODYDATACONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODYDATACONNECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDBInstanceTopologyResponseBodyDataConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBInstanceTopologyResponseBodyDataConnections& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBInstanceTopologyResponseBodyDataConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetDBInstanceTopologyResponseBodyDataConnections() = default ;
    GetDBInstanceTopologyResponseBodyDataConnections(const GetDBInstanceTopologyResponseBodyDataConnections &) = default ;
    GetDBInstanceTopologyResponseBodyDataConnections(GetDBInstanceTopologyResponseBodyDataConnections &&) = default ;
    GetDBInstanceTopologyResponseBodyDataConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBInstanceTopologyResponseBodyDataConnections() = default ;
    GetDBInstanceTopologyResponseBodyDataConnections& operator=(const GetDBInstanceTopologyResponseBodyDataConnections &) = default ;
    GetDBInstanceTopologyResponseBodyDataConnections& operator=(GetDBInstanceTopologyResponseBodyDataConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->DBInstanceName_ == nullptr && return this->netType_ == nullptr && return this->zoneId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline GetDBInstanceTopologyResponseBodyDataConnections& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline GetDBInstanceTopologyResponseBodyDataConnections& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline GetDBInstanceTopologyResponseBodyDataConnections& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetDBInstanceTopologyResponseBodyDataConnections& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The endpoint that is used to connect to the database instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The network type of the endpoint. Valid values:
    // 
    // *   **vpc**
    // *   **public**
    std::shared_ptr<string> netType_ = nullptr;
    // The zone ID of the instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
