// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYINSTANCESINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYINSTANCESINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeGadInstancesResponseBodyInstancesInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesResponseBodyInstancesInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DbEngineType, dbEngineType_);
      DARABONBA_PTR_TO_JSON(DbInstanceCount, dbInstanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceName, masterDbInstanceName_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceZoneId, masterDbInstanceZoneId_);
      DARABONBA_PTR_TO_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesResponseBodyInstancesInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DbEngineType, dbEngineType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceCount, dbInstanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceName, masterDbInstanceName_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceRegion, masterDbInstanceRegion_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceZoneId, masterDbInstanceZoneId_);
      DARABONBA_PTR_FROM_JSON(MasterEngineArchType, masterEngineArchType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGadInstancesResponseBodyInstancesInstances() = default ;
    DescribeGadInstancesResponseBodyInstancesInstances(const DescribeGadInstancesResponseBodyInstancesInstances &) = default ;
    DescribeGadInstancesResponseBodyInstancesInstances(DescribeGadInstancesResponseBodyInstancesInstances &&) = default ;
    DescribeGadInstancesResponseBodyInstancesInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesResponseBodyInstancesInstances() = default ;
    DescribeGadInstancesResponseBodyInstancesInstances& operator=(const DescribeGadInstancesResponseBodyInstancesInstances &) = default ;
    DescribeGadInstancesResponseBodyInstancesInstances& operator=(DescribeGadInstancesResponseBodyInstancesInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dbEngineType_ == nullptr && return this->dbInstanceCount_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceRegion_ == nullptr
        && return this->instanceType_ == nullptr && return this->masterDbInstanceId_ == nullptr && return this->masterDbInstanceName_ == nullptr && return this->masterDbInstanceRegion_ == nullptr && return this->masterDbInstanceZoneId_ == nullptr
        && return this->masterEngineArchType_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbEngineType Field Functions 
    bool hasDbEngineType() const { return this->dbEngineType_ != nullptr;};
    void deleteDbEngineType() { this->dbEngineType_ = nullptr;};
    inline string dbEngineType() const { DARABONBA_PTR_GET_DEFAULT(dbEngineType_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setDbEngineType(string dbEngineType) { DARABONBA_PTR_SET_VALUE(dbEngineType_, dbEngineType) };


    // dbInstanceCount Field Functions 
    bool hasDbInstanceCount() const { return this->dbInstanceCount_ != nullptr;};
    void deleteDbInstanceCount() { this->dbInstanceCount_ = nullptr;};
    inline int32_t dbInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceCount_, 0) };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setDbInstanceCount(int32_t dbInstanceCount) { DARABONBA_PTR_SET_VALUE(dbInstanceCount_, dbInstanceCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceRegion Field Functions 
    bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
    void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
    inline string instanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // masterDbInstanceId Field Functions 
    bool hasMasterDbInstanceId() const { return this->masterDbInstanceId_ != nullptr;};
    void deleteMasterDbInstanceId() { this->masterDbInstanceId_ = nullptr;};
    inline string masterDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceId_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setMasterDbInstanceId(string masterDbInstanceId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceId_, masterDbInstanceId) };


    // masterDbInstanceName Field Functions 
    bool hasMasterDbInstanceName() const { return this->masterDbInstanceName_ != nullptr;};
    void deleteMasterDbInstanceName() { this->masterDbInstanceName_ = nullptr;};
    inline string masterDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceName_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setMasterDbInstanceName(string masterDbInstanceName) { DARABONBA_PTR_SET_VALUE(masterDbInstanceName_, masterDbInstanceName) };


    // masterDbInstanceRegion Field Functions 
    bool hasMasterDbInstanceRegion() const { return this->masterDbInstanceRegion_ != nullptr;};
    void deleteMasterDbInstanceRegion() { this->masterDbInstanceRegion_ = nullptr;};
    inline string masterDbInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceRegion_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setMasterDbInstanceRegion(string masterDbInstanceRegion) { DARABONBA_PTR_SET_VALUE(masterDbInstanceRegion_, masterDbInstanceRegion) };


    // masterDbInstanceZoneId Field Functions 
    bool hasMasterDbInstanceZoneId() const { return this->masterDbInstanceZoneId_ != nullptr;};
    void deleteMasterDbInstanceZoneId() { this->masterDbInstanceZoneId_ = nullptr;};
    inline string masterDbInstanceZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceZoneId_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setMasterDbInstanceZoneId(string masterDbInstanceZoneId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceZoneId_, masterDbInstanceZoneId) };


    // masterEngineArchType Field Functions 
    bool hasMasterEngineArchType() const { return this->masterEngineArchType_ != nullptr;};
    void deleteMasterEngineArchType() { this->masterEngineArchType_ = nullptr;};
    inline int32_t masterEngineArchType() const { DARABONBA_PTR_GET_DEFAULT(masterEngineArchType_, 0) };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setMasterEngineArchType(int32_t masterEngineArchType) { DARABONBA_PTR_SET_VALUE(masterEngineArchType_, masterEngineArchType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGadInstancesResponseBodyInstancesInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dbEngineType_ = nullptr;
    std::shared_ptr<int32_t> dbInstanceCount_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceRegion_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> masterDbInstanceId_ = nullptr;
    std::shared_ptr<string> masterDbInstanceName_ = nullptr;
    std::shared_ptr<string> masterDbInstanceRegion_ = nullptr;
    std::shared_ptr<string> masterDbInstanceZoneId_ = nullptr;
    std::shared_ptr<int32_t> masterEngineArchType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
