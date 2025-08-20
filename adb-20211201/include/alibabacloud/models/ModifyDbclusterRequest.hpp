// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableDefaultResourcePool, enableDefaultResourcePool_);
      DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableDefaultResourcePool, enableDefaultResourcePool_);
      DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
    };
    ModifyDBClusterRequest() = default ;
    ModifyDBClusterRequest(const ModifyDBClusterRequest &) = default ;
    ModifyDBClusterRequest(ModifyDBClusterRequest &&) = default ;
    ModifyDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterRequest() = default ;
    ModifyDBClusterRequest& operator=(const ModifyDBClusterRequest &) = default ;
    ModifyDBClusterRequest& operator=(ModifyDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResource_ != nullptr
        && this->DBClusterId_ != nullptr && this->enableDefaultResourcePool_ != nullptr && this->productForm_ != nullptr && this->regionId_ != nullptr && this->reservedNodeCount_ != nullptr
        && this->reservedNodeSize_ != nullptr && this->storageResource_ != nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline ModifyDBClusterRequest& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableDefaultResourcePool Field Functions 
    bool hasEnableDefaultResourcePool() const { return this->enableDefaultResourcePool_ != nullptr;};
    void deleteEnableDefaultResourcePool() { this->enableDefaultResourcePool_ = nullptr;};
    inline bool enableDefaultResourcePool() const { DARABONBA_PTR_GET_DEFAULT(enableDefaultResourcePool_, false) };
    inline ModifyDBClusterRequest& setEnableDefaultResourcePool(bool enableDefaultResourcePool) { DARABONBA_PTR_SET_VALUE(enableDefaultResourcePool_, enableDefaultResourcePool) };


    // productForm Field Functions 
    bool hasProductForm() const { return this->productForm_ != nullptr;};
    void deleteProductForm() { this->productForm_ = nullptr;};
    inline string productForm() const { DARABONBA_PTR_GET_DEFAULT(productForm_, "") };
    inline ModifyDBClusterRequest& setProductForm(string productForm) { DARABONBA_PTR_SET_VALUE(productForm_, productForm) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedNodeCount Field Functions 
    bool hasReservedNodeCount() const { return this->reservedNodeCount_ != nullptr;};
    void deleteReservedNodeCount() { this->reservedNodeCount_ = nullptr;};
    inline int32_t reservedNodeCount() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeCount_, 0) };
    inline ModifyDBClusterRequest& setReservedNodeCount(int32_t reservedNodeCount) { DARABONBA_PTR_SET_VALUE(reservedNodeCount_, reservedNodeCount) };


    // reservedNodeSize Field Functions 
    bool hasReservedNodeSize() const { return this->reservedNodeSize_ != nullptr;};
    void deleteReservedNodeSize() { this->reservedNodeSize_ = nullptr;};
    inline string reservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeSize_, "") };
    inline ModifyDBClusterRequest& setReservedNodeSize(string reservedNodeSize) { DARABONBA_PTR_SET_VALUE(reservedNodeSize_, reservedNodeSize) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline ModifyDBClusterRequest& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


  protected:
    // The reserved computing resources. Valid values: 0ACU to 4096ACU. The value must be in increments of 16ACU. Each ACU is approximately equal to 1 core and 4 GB memory.
    // 
    // >  This parameter must be specified with a unit.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to allocate all reserved computing resources to the user_default resource group. Valid values:
    // 
    // *   true (default)
    // *   false
    std::shared_ptr<bool> enableDefaultResourcePool_ = nullptr;
    std::shared_ptr<string> productForm_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> reservedNodeCount_ = nullptr;
    std::shared_ptr<string> reservedNodeSize_ = nullptr;
    // The reserved storage resources. Valid values: 0ACU to 2064ACU. The value must be in increments of 24ACU. Each ACU is approximately equal to 1 core and 4 GB memory.
    // 
    // >  This parameter must be specified with a unit.
    std::shared_ptr<string> storageResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
