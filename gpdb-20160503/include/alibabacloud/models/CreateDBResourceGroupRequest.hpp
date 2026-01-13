// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDBResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupConfig, resourceGroupConfig_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupConfig, resourceGroupConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    CreateDBResourceGroupRequest() = default ;
    CreateDBResourceGroupRequest(const CreateDBResourceGroupRequest &) = default ;
    CreateDBResourceGroupRequest(CreateDBResourceGroupRequest &&) = default ;
    CreateDBResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBResourceGroupRequest() = default ;
    CreateDBResourceGroupRequest& operator=(const CreateDBResourceGroupRequest &) = default ;
    CreateDBResourceGroupRequest& operator=(CreateDBResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ownerId_ == nullptr && this->resourceGroupConfig_ == nullptr && this->resourceGroupName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBResourceGroupRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBResourceGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupConfig Field Functions 
    bool hasResourceGroupConfig() const { return this->resourceGroupConfig_ != nullptr;};
    void deleteResourceGroupConfig() { this->resourceGroupConfig_ = nullptr;};
    inline string getResourceGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupConfig_, "") };
    inline CreateDBResourceGroupRequest& setResourceGroupConfig(string resourceGroupConfig) { DARABONBA_PTR_SET_VALUE(resourceGroupConfig_, resourceGroupConfig) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline CreateDBResourceGroupRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The configurations of the resource group.
    // 
    // > 
    // 
    // *   CpuRateLimit: the percentage of CPU resources that are available for the resource group. Unit: %.
    // 
    // *   MemoryLimit: the percentage of memory resources that are available for the resource group. Unit: %.
    // 
    // *   MemorySharedQuota: the percentage of memory resources shared among transactions that are submitted to the resource group. Unit: %. Default value: 80.
    // 
    // *   MemorySpillRatio: the memory spill ratio for memory-intensive transactions. When the memory that is used by memory-intensive transactions reaches this value, data is spilled to disks. Unit: %. Default value: 0.
    // 
    // *   Concurrency: the maximum number of concurrent transactions or parallel queries that are allowed for a resource group. Default value: 20.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupConfig_ {};
    // The name of the resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
