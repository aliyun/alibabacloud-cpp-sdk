// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyNodePoolAttributeRequestNodePoolStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_TO_JSON(NodePoolStrategy, nodePoolStrategy_);
      DARABONBA_PTR_TO_JSON(PoolId, poolId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_FROM_JSON(NodePoolStrategy, nodePoolStrategy_);
      DARABONBA_PTR_FROM_JSON(PoolId, poolId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ModifyNodePoolAttributeRequest() = default ;
    ModifyNodePoolAttributeRequest(const ModifyNodePoolAttributeRequest &) = default ;
    ModifyNodePoolAttributeRequest(ModifyNodePoolAttributeRequest &&) = default ;
    ModifyNodePoolAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAttributeRequest() = default ;
    ModifyNodePoolAttributeRequest& operator=(const ModifyNodePoolAttributeRequest &) = default ;
    ModifyNodePoolAttributeRequest& operator=(ModifyNodePoolAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizRegionId_ != nullptr
        && this->nodeCapacity_ != nullptr && this->nodePoolStrategy_ != nullptr && this->poolId_ != nullptr && this->productType_ != nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ModifyNodePoolAttributeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // nodeCapacity Field Functions 
    bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
    void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
    inline int32_t nodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
    inline ModifyNodePoolAttributeRequest& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


    // nodePoolStrategy Field Functions 
    bool hasNodePoolStrategy() const { return this->nodePoolStrategy_ != nullptr;};
    void deleteNodePoolStrategy() { this->nodePoolStrategy_ = nullptr;};
    inline const ModifyNodePoolAttributeRequestNodePoolStrategy & nodePoolStrategy() const { DARABONBA_PTR_GET_CONST(nodePoolStrategy_, ModifyNodePoolAttributeRequestNodePoolStrategy) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategy nodePoolStrategy() { DARABONBA_PTR_GET(nodePoolStrategy_, ModifyNodePoolAttributeRequestNodePoolStrategy) };
    inline ModifyNodePoolAttributeRequest& setNodePoolStrategy(const ModifyNodePoolAttributeRequestNodePoolStrategy & nodePoolStrategy) { DARABONBA_PTR_SET_VALUE(nodePoolStrategy_, nodePoolStrategy) };
    inline ModifyNodePoolAttributeRequest& setNodePoolStrategy(ModifyNodePoolAttributeRequestNodePoolStrategy && nodePoolStrategy) { DARABONBA_PTR_SET_RVALUE(nodePoolStrategy_, nodePoolStrategy) };


    // poolId Field Functions 
    bool hasPoolId() const { return this->poolId_ != nullptr;};
    void deletePoolId() { this->poolId_ = nullptr;};
    inline string poolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, "") };
    inline ModifyNodePoolAttributeRequest& setPoolId(string poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyNodePoolAttributeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<int32_t> nodeCapacity_ = nullptr;
    std::shared_ptr<ModifyNodePoolAttributeRequestNodePoolStrategy> nodePoolStrategy_ = nullptr;
    std::shared_ptr<string> poolId_ = nullptr;
    // 产品类型。
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
