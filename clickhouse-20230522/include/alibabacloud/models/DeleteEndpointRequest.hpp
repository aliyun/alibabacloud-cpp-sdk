// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DeleteEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteEndpointRequest() = default ;
    DeleteEndpointRequest(const DeleteEndpointRequest &) = default ;
    DeleteEndpointRequest(DeleteEndpointRequest &&) = default ;
    DeleteEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEndpointRequest() = default ;
    DeleteEndpointRequest& operator=(const DeleteEndpointRequest &) = default ;
    DeleteEndpointRequest& operator=(DeleteEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->DBInstanceId_ != nullptr && this->DBInstanceNetType_ != nullptr && this->regionId_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DeleteEndpointRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteEndpointRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline DeleteEndpointRequest& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The prefix of the endpoint, which indicates the prefix of the value of the ConnectionString parameter.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
