// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeGadInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbEngineTypes, dbEngineTypes_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbEngineTypes, dbEngineTypes_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
    };
    DescribeGadInstancesRequest() = default ;
    DescribeGadInstancesRequest(const DescribeGadInstancesRequest &) = default ;
    DescribeGadInstancesRequest(DescribeGadInstancesRequest &&) = default ;
    DescribeGadInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesRequest() = default ;
    DescribeGadInstancesRequest& operator=(const DescribeGadInstancesRequest &) = default ;
    DescribeGadInstancesRequest& operator=(DescribeGadInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbEngineTypes_ == nullptr
        && this->instanceName_ == nullptr && this->masterDbInstanceId_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->slaveDbInstanceId_ == nullptr; };
    // dbEngineTypes Field Functions 
    bool hasDbEngineTypes() const { return this->dbEngineTypes_ != nullptr;};
    void deleteDbEngineTypes() { this->dbEngineTypes_ = nullptr;};
    inline string getDbEngineTypes() const { DARABONBA_PTR_GET_DEFAULT(dbEngineTypes_, "") };
    inline DescribeGadInstancesRequest& setDbEngineTypes(string dbEngineTypes) { DARABONBA_PTR_SET_VALUE(dbEngineTypes_, dbEngineTypes) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeGadInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // masterDbInstanceId Field Functions 
    bool hasMasterDbInstanceId() const { return this->masterDbInstanceId_ != nullptr;};
    void deleteMasterDbInstanceId() { this->masterDbInstanceId_ = nullptr;};
    inline string getMasterDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceId_, "") };
    inline DescribeGadInstancesRequest& setMasterDbInstanceId(string masterDbInstanceId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceId_, masterDbInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeGadInstancesRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGadInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGadInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGadInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGadInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDbInstanceId Field Functions 
    bool hasSlaveDbInstanceId() const { return this->slaveDbInstanceId_ != nullptr;};
    void deleteSlaveDbInstanceId() { this->slaveDbInstanceId_ = nullptr;};
    inline string getSlaveDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(slaveDbInstanceId_, "") };
    inline DescribeGadInstancesRequest& setSlaveDbInstanceId(string slaveDbInstanceId) { DARABONBA_PTR_SET_VALUE(slaveDbInstanceId_, slaveDbInstanceId) };


  protected:
    shared_ptr<string> dbEngineTypes_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> masterDbInstanceId_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> slaveDbInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
