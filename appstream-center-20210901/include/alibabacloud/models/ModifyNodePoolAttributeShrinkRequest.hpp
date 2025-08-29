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
    virtual bool empty() const override { this->bizRegionId_ != nullptr
        && this->nodeCapacity_ != nullptr && this->nodePoolStrategyShrink_ != nullptr && this->poolId_ != nullptr && this->productType_ != nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // nodeCapacity Field Functions 
    bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
    void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
    inline int32_t nodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
    inline ModifyNodePoolAttributeShrinkRequest& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


    // nodePoolStrategyShrink Field Functions 
    bool hasNodePoolStrategyShrink() const { return this->nodePoolStrategyShrink_ != nullptr;};
    void deleteNodePoolStrategyShrink() { this->nodePoolStrategyShrink_ = nullptr;};
    inline string nodePoolStrategyShrink() const { DARABONBA_PTR_GET_DEFAULT(nodePoolStrategyShrink_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setNodePoolStrategyShrink(string nodePoolStrategyShrink) { DARABONBA_PTR_SET_VALUE(nodePoolStrategyShrink_, nodePoolStrategyShrink) };


    // poolId Field Functions 
    bool hasPoolId() const { return this->poolId_ != nullptr;};
    void deletePoolId() { this->poolId_ = nullptr;};
    inline string poolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setPoolId(string poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyNodePoolAttributeShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // Valid values:
    // 
    // *   cn-shanghai: China (Shanghai)
    // *   cn-hangzhou: China (Hangzhou)
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<int32_t> nodeCapacity_ = nullptr;
    // The auto scaling policy used by the delivery group.
    std::shared_ptr<string> nodePoolStrategyShrink_ = nullptr;
    std::shared_ptr<string> poolId_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
