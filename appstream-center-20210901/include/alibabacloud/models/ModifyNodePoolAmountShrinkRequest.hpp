// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAmountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAmountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAmountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ModifyNodePoolAmountShrinkRequest() = default ;
    ModifyNodePoolAmountShrinkRequest(const ModifyNodePoolAmountShrinkRequest &) = default ;
    ModifyNodePoolAmountShrinkRequest(ModifyNodePoolAmountShrinkRequest &&) = default ;
    ModifyNodePoolAmountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAmountShrinkRequest() = default ;
    ModifyNodePoolAmountShrinkRequest& operator=(const ModifyNodePoolAmountShrinkRequest &) = default ;
    ModifyNodePoolAmountShrinkRequest& operator=(ModifyNodePoolAmountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && return this->nodePoolShrink_ == nullptr && return this->productType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ModifyNodePoolAmountShrinkRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // nodePoolShrink Field Functions 
    bool hasNodePoolShrink() const { return this->nodePoolShrink_ != nullptr;};
    void deleteNodePoolShrink() { this->nodePoolShrink_ = nullptr;};
    inline string nodePoolShrink() const { DARABONBA_PTR_GET_DEFAULT(nodePoolShrink_, "") };
    inline ModifyNodePoolAmountShrinkRequest& setNodePoolShrink(string nodePoolShrink) { DARABONBA_PTR_SET_VALUE(nodePoolShrink_, nodePoolShrink) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyNodePoolAmountShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The parameters related to the configuration change of the node pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodePoolShrink_ = nullptr;
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
