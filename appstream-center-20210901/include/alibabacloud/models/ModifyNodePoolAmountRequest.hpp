// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyNodePoolAmountRequestNodePool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ModifyNodePoolAmountRequest() = default ;
    ModifyNodePoolAmountRequest(const ModifyNodePoolAmountRequest &) = default ;
    ModifyNodePoolAmountRequest(ModifyNodePoolAmountRequest &&) = default ;
    ModifyNodePoolAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAmountRequest() = default ;
    ModifyNodePoolAmountRequest& operator=(const ModifyNodePoolAmountRequest &) = default ;
    ModifyNodePoolAmountRequest& operator=(ModifyNodePoolAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->nodePool_ != nullptr && this->productType_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ModifyNodePoolAmountRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const ModifyNodePoolAmountRequestNodePool & nodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, ModifyNodePoolAmountRequestNodePool) };
    inline ModifyNodePoolAmountRequestNodePool nodePool() { DARABONBA_PTR_GET(nodePool_, ModifyNodePoolAmountRequestNodePool) };
    inline ModifyNodePoolAmountRequest& setNodePool(const ModifyNodePoolAmountRequestNodePool & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline ModifyNodePoolAmountRequest& setNodePool(ModifyNodePoolAmountRequestNodePool && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyNodePoolAmountRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The parameters related to the configuration change of the node pool.
    // 
    // This parameter is required.
    std::shared_ptr<ModifyNodePoolAmountRequestNodePool> nodePool_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
