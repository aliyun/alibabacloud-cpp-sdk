// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class NodePool : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodePool& obj) { 
        DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
        DARABONBA_PTR_TO_JSON(PrePaidNodeAmountModifyMode, prePaidNodeAmountModifyMode_);
        DARABONBA_PTR_TO_JSON(PrePaidNodeAmountModifyNodeIds, prePaidNodeAmountModifyNodeIds_);
      };
      friend void from_json(const Darabonba::Json& j, NodePool& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
        DARABONBA_PTR_FROM_JSON(PrePaidNodeAmountModifyMode, prePaidNodeAmountModifyMode_);
        DARABONBA_PTR_FROM_JSON(PrePaidNodeAmountModifyNodeIds, prePaidNodeAmountModifyNodeIds_);
      };
      NodePool() = default ;
      NodePool(const NodePool &) = default ;
      NodePool(NodePool &&) = default ;
      NodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodePool() = default ;
      NodePool& operator=(const NodePool &) = default ;
      NodePool& operator=(NodePool &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeAmount_ == nullptr
        && this->prePaidNodeAmountModifyMode_ == nullptr && this->prePaidNodeAmountModifyNodeIds_ == nullptr; };
      // nodeAmount Field Functions 
      bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
      void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
      inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
      inline NodePool& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


      // prePaidNodeAmountModifyMode Field Functions 
      bool hasPrePaidNodeAmountModifyMode() const { return this->prePaidNodeAmountModifyMode_ != nullptr;};
      void deletePrePaidNodeAmountModifyMode() { this->prePaidNodeAmountModifyMode_ = nullptr;};
      inline string getPrePaidNodeAmountModifyMode() const { DARABONBA_PTR_GET_DEFAULT(prePaidNodeAmountModifyMode_, "") };
      inline NodePool& setPrePaidNodeAmountModifyMode(string prePaidNodeAmountModifyMode) { DARABONBA_PTR_SET_VALUE(prePaidNodeAmountModifyMode_, prePaidNodeAmountModifyMode) };


      // prePaidNodeAmountModifyNodeIds Field Functions 
      bool hasPrePaidNodeAmountModifyNodeIds() const { return this->prePaidNodeAmountModifyNodeIds_ != nullptr;};
      void deletePrePaidNodeAmountModifyNodeIds() { this->prePaidNodeAmountModifyNodeIds_ = nullptr;};
      inline const vector<string> & getPrePaidNodeAmountModifyNodeIds() const { DARABONBA_PTR_GET_CONST(prePaidNodeAmountModifyNodeIds_, vector<string>) };
      inline vector<string> getPrePaidNodeAmountModifyNodeIds() { DARABONBA_PTR_GET(prePaidNodeAmountModifyNodeIds_, vector<string>) };
      inline NodePool& setPrePaidNodeAmountModifyNodeIds(const vector<string> & prePaidNodeAmountModifyNodeIds) { DARABONBA_PTR_SET_VALUE(prePaidNodeAmountModifyNodeIds_, prePaidNodeAmountModifyNodeIds) };
      inline NodePool& setPrePaidNodeAmountModifyNodeIds(vector<string> && prePaidNodeAmountModifyNodeIds) { DARABONBA_PTR_SET_RVALUE(prePaidNodeAmountModifyNodeIds_, prePaidNodeAmountModifyNodeIds) };


    protected:
      // The total number of subscription nodes after the change.
      // 
      // This parameter is required.
      shared_ptr<int32_t> nodeAmount_ {};
      // The change mode of subscription nodes.
      // 
      // Valid value:
      // 
      // *   EXPAND_FROM_POST_PAID_EXPLICIT: changes from specified pay-as-you-go nodes
      shared_ptr<string> prePaidNodeAmountModifyMode_ {};
      // The nodes for which you want to change the billing method.
      shared_ptr<vector<string>> prePaidNodeAmountModifyNodeIds_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->nodePool_ == nullptr && this->productType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ModifyNodePoolAmountRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const ModifyNodePoolAmountRequest::NodePool & getNodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, ModifyNodePoolAmountRequest::NodePool) };
    inline ModifyNodePoolAmountRequest::NodePool getNodePool() { DARABONBA_PTR_GET(nodePool_, ModifyNodePoolAmountRequest::NodePool) };
    inline ModifyNodePoolAmountRequest& setNodePool(const ModifyNodePoolAmountRequest::NodePool & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline ModifyNodePoolAmountRequest& setNodePool(ModifyNodePoolAmountRequest::NodePool && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyNodePoolAmountRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The parameters related to the configuration change of the node pool.
    // 
    // This parameter is required.
    shared_ptr<ModifyNodePoolAmountRequest::NodePool> nodePool_ {};
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
