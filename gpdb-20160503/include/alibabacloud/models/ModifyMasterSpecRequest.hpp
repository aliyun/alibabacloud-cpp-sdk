// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMASTERSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMASTERSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyMasterSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMasterSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(MasterAISpec, masterAISpec_);
      DARABONBA_PTR_TO_JSON(MasterCU, masterCU_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMasterSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(MasterAISpec, masterAISpec_);
      DARABONBA_PTR_FROM_JSON(MasterCU, masterCU_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyMasterSpecRequest() = default ;
    ModifyMasterSpecRequest(const ModifyMasterSpecRequest &) = default ;
    ModifyMasterSpecRequest(ModifyMasterSpecRequest &&) = default ;
    ModifyMasterSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMasterSpecRequest() = default ;
    ModifyMasterSpecRequest& operator=(const ModifyMasterSpecRequest &) = default ;
    ModifyMasterSpecRequest& operator=(ModifyMasterSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && this->DBInstanceId_ == nullptr && this->effectiveTime_ == nullptr && this->masterAISpec_ == nullptr && this->masterCU_ == nullptr && this->resourceGroupId_ == nullptr; };
    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline ModifyMasterSpecRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyMasterSpecRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyMasterSpecRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // masterAISpec Field Functions 
    bool hasMasterAISpec() const { return this->masterAISpec_ != nullptr;};
    void deleteMasterAISpec() { this->masterAISpec_ = nullptr;};
    inline string getMasterAISpec() const { DARABONBA_PTR_GET_DEFAULT(masterAISpec_, "") };
    inline ModifyMasterSpecRequest& setMasterAISpec(string masterAISpec) { DARABONBA_PTR_SET_VALUE(masterAISpec_, masterAISpec) };


    // masterCU Field Functions 
    bool hasMasterCU() const { return this->masterCU_ != nullptr;};
    void deleteMasterCU() { this->masterCU_ = nullptr;};
    inline int32_t getMasterCU() const { DARABONBA_PTR_GET_DEFAULT(masterCU_, 0) };
    inline ModifyMasterSpecRequest& setMasterCU(int32_t masterCU) { DARABONBA_PTR_SET_VALUE(masterCU_, masterCU) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyMasterSpecRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The description of the instance.
    shared_ptr<string> DBInstanceDescription_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the instance IDs of all AnalyticDB for PostgreSQL instances in a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The effective period of the specification change. Valid values: 
    // - **Immediately** (default): The change takes effect immediately.
    // - **MaintainTime**: The change takes effect during the maintenance window of the instance.
    shared_ptr<string> effectiveTime_ {};
    // If you want to change the master node to a MasterAI node, specify this parameter.
    // 
    // > - This parameter and MasterCU cannot be specified at the same time.
    // >- Only specific regions and zones support changing the master node to a MasterAI node.
    // >- Only AnalyticDB for PostgreSQL V7.0 Basic Edition instances support MasterAI nodes.
    // >- You can view all valid values of this parameter on the specification change page for the master node.
    shared_ptr<string> masterAISpec_ {};
    // The master resources. Valid values: 
    // - 2 CU 
    // - 4 CU 
    // - 8 CU 
    // - 16 CU 
    // - 32 CU 
    // > Master resources greater than 8 CU incur additional fees.
    shared_ptr<int32_t> masterCU_ {};
    // The ID of the resource group to which the instance belongs. For information about how to obtain the resource group ID, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
