// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_TO_JSON(NodePoolStrategy, nodePoolStrategyShrink_);
      DARABONBA_PTR_TO_JSON(PoolId, poolId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_FROM_JSON(NodePoolStrategy, nodePoolStrategyShrink_);
      DARABONBA_PTR_FROM_JSON(PoolId, poolId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ModifyNodePoolAttributeShrinkRequest() = default ;
    ModifyNodePoolAttributeShrinkRequest(const ModifyNodePoolAttributeShrinkRequest &) = default ;
    ModifyNodePoolAttributeShrinkRequest(ModifyNodePoolAttributeShrinkRequest &&) = default ;
    ModifyNodePoolAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAttributeShrinkRequest() = default ;
    ModifyNodePoolAttributeShrinkRequest& operator=(const ModifyNodePoolAttributeShrinkRequest &) = default ;
    ModifyNodePoolAttributeShrinkRequest& operator=(ModifyNodePoolAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->nodeCapacity_ == nullptr && this->nodePoolStrategyShrink_ == nullptr && this->poolId_ == nullptr && this->productType_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // nodeCapacity Field Functions 
    bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
    void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
    inline int32_t getNodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
    inline ModifyNodePoolAttributeShrinkRequest& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


    // nodePoolStrategyShrink Field Functions 
    bool hasNodePoolStrategyShrink() const { return this->nodePoolStrategyShrink_ != nullptr;};
    void deleteNodePoolStrategyShrink() { this->nodePoolStrategyShrink_ = nullptr;};
    inline string getNodePoolStrategyShrink() const { DARABONBA_PTR_GET_DEFAULT(nodePoolStrategyShrink_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setNodePoolStrategyShrink(string nodePoolStrategyShrink) { DARABONBA_PTR_SET_VALUE(nodePoolStrategyShrink_, nodePoolStrategyShrink) };


    // poolId Field Functions 
    bool hasPoolId() const { return this->poolId_ != nullptr;};
    void deletePoolId() { this->poolId_ = nullptr;};
    inline string getPoolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setPoolId(string poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The region ID of the delivery group. For more information about supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    shared_ptr<string> bizRegionId_ {};
    // The number of concurrent sessions, which is the number of sessions that can be simultaneously connected to a single resource. If too many sessions are connected simultaneously, the application experience may degrade. The valid values vary depending on the resource specification. The valid values for each resource specification are as follows:
    // 
    // - appstreaming.general.4c8g: 1 to 2.
    // - appstreaming.general.8c16g: 1 to 4.
    // - appstreaming.vgpu.8c16g.4g: 1 to 4.
    // - appstreaming.vgpu.8c31g.16g: 1 to 4.
    // - appstreaming.vgpu.14c93g.12g: 1 to 6.
    shared_ptr<int32_t> nodeCapacity_ {};
    // The automatic scaling policy of the delivery group.
    shared_ptr<string> nodePoolStrategyShrink_ {};
    // The resource group ID.
    shared_ptr<string> poolId_ {};
    // The product type.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
