// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_TO_JSON(ConnectionPrefix, connectionPrefix_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_FROM_JSON(ConnectionPrefix, connectionPrefix_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEndpointRequest() = default ;
    CreateEndpointRequest(const CreateEndpointRequest &) = default ;
    CreateEndpointRequest(CreateEndpointRequest &&) = default ;
    CreateEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEndpointRequest() = default ;
    CreateEndpointRequest& operator=(const CreateEndpointRequest &) = default ;
    CreateEndpointRequest& operator=(CreateEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingGroupId_ == nullptr
        && this->connectionPrefix_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceNetType_ == nullptr && this->regionId_ == nullptr; };
    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string getComputingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline CreateEndpointRequest& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // connectionPrefix Field Functions 
    bool hasConnectionPrefix() const { return this->connectionPrefix_ != nullptr;};
    void deleteConnectionPrefix() { this->connectionPrefix_ = nullptr;};
    inline string getConnectionPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionPrefix_, "") };
    inline CreateEndpointRequest& setConnectionPrefix(string connectionPrefix) { DARABONBA_PTR_SET_VALUE(connectionPrefix_, connectionPrefix) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateEndpointRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline CreateEndpointRequest& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> computingGroupId_ {};
    // The prefix of the new endpoint. The prefix of the ConnectionString parameter.
    shared_ptr<string> connectionPrefix_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The network type.
    // 
    // Valid values:
    // 
    // *   Public
    shared_ptr<string> DBInstanceNetType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
