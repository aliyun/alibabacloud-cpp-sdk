// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyDBInstanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IdleTime, idleTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServerlessResource, serverlessResource_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IdleTime, idleTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerlessResource, serverlessResource_);
    };
    ModifyDBInstanceConfigRequest() = default ;
    ModifyDBInstanceConfigRequest(const ModifyDBInstanceConfigRequest &) = default ;
    ModifyDBInstanceConfigRequest(ModifyDBInstanceConfigRequest &&) = default ;
    ModifyDBInstanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConfigRequest() = default ;
    ModifyDBInstanceConfigRequest& operator=(const ModifyDBInstanceConfigRequest &) = default ;
    ModifyDBInstanceConfigRequest& operator=(ModifyDBInstanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && this->DBInstanceId_ == nullptr && this->idleTime_ == nullptr && this->resourceGroupId_ == nullptr && this->serverlessResource_ == nullptr; };
    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline ModifyDBInstanceConfigRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceConfigRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // idleTime Field Functions 
    bool hasIdleTime() const { return this->idleTime_ != nullptr;};
    void deleteIdleTime() { this->idleTime_ = nullptr;};
    inline int32_t getIdleTime() const { DARABONBA_PTR_GET_DEFAULT(idleTime_, 0) };
    inline ModifyDBInstanceConfigRequest& setIdleTime(int32_t idleTime) { DARABONBA_PTR_SET_VALUE(idleTime_, idleTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDBInstanceConfigRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverlessResource Field Functions 
    bool hasServerlessResource() const { return this->serverlessResource_ != nullptr;};
    void deleteServerlessResource() { this->serverlessResource_ = nullptr;};
    inline int32_t getServerlessResource() const { DARABONBA_PTR_GET_DEFAULT(serverlessResource_, 0) };
    inline ModifyDBInstanceConfigRequest& setServerlessResource(int32_t serverlessResource) { DARABONBA_PTR_SET_VALUE(serverlessResource_, serverlessResource) };


  protected:
    // The description of the instance.
    shared_ptr<string> DBInstanceDescription_ {};
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the instance IDs of all AnalyticDB for PostgreSQL instances in a specific region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The wait period for the instance that has no traffic to become idle. Minimum value: 60. Default value: 600. Unit: seconds.
    shared_ptr<int32_t> idleTime_ {};
    // The ID of the resource group to which the instance belongs. For more information about how to obtain the ID of a resource group, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The threshold of computing resources. Valid values: 8 to 32. Unit: AnalyticDB Compute Units (ACUs).
    shared_ptr<int32_t> serverlessResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
