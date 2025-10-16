// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTREQUESTNODEPOOL_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTREQUESTNODEPOOL_HPP_
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
  class ModifyNodePoolAmountRequestNodePool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAmountRequestNodePool& obj) { 
      DARABONBA_PTR_TO_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(PrePaidNodeAmountModifyMode, prePaidNodeAmountModifyMode_);
      DARABONBA_PTR_TO_JSON(PrePaidNodeAmountModifyNodeIds, prePaidNodeAmountModifyNodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAmountRequestNodePool& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(PrePaidNodeAmountModifyMode, prePaidNodeAmountModifyMode_);
      DARABONBA_PTR_FROM_JSON(PrePaidNodeAmountModifyNodeIds, prePaidNodeAmountModifyNodeIds_);
    };
    ModifyNodePoolAmountRequestNodePool() = default ;
    ModifyNodePoolAmountRequestNodePool(const ModifyNodePoolAmountRequestNodePool &) = default ;
    ModifyNodePoolAmountRequestNodePool(ModifyNodePoolAmountRequestNodePool &&) = default ;
    ModifyNodePoolAmountRequestNodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAmountRequestNodePool() = default ;
    ModifyNodePoolAmountRequestNodePool& operator=(const ModifyNodePoolAmountRequestNodePool &) = default ;
    ModifyNodePoolAmountRequestNodePool& operator=(ModifyNodePoolAmountRequestNodePool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeAmount_ == nullptr
        && return this->prePaidNodeAmountModifyMode_ == nullptr && return this->prePaidNodeAmountModifyNodeIds_ == nullptr; };
    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline ModifyNodePoolAmountRequestNodePool& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // prePaidNodeAmountModifyMode Field Functions 
    bool hasPrePaidNodeAmountModifyMode() const { return this->prePaidNodeAmountModifyMode_ != nullptr;};
    void deletePrePaidNodeAmountModifyMode() { this->prePaidNodeAmountModifyMode_ = nullptr;};
    inline string prePaidNodeAmountModifyMode() const { DARABONBA_PTR_GET_DEFAULT(prePaidNodeAmountModifyMode_, "") };
    inline ModifyNodePoolAmountRequestNodePool& setPrePaidNodeAmountModifyMode(string prePaidNodeAmountModifyMode) { DARABONBA_PTR_SET_VALUE(prePaidNodeAmountModifyMode_, prePaidNodeAmountModifyMode) };


    // prePaidNodeAmountModifyNodeIds Field Functions 
    bool hasPrePaidNodeAmountModifyNodeIds() const { return this->prePaidNodeAmountModifyNodeIds_ != nullptr;};
    void deletePrePaidNodeAmountModifyNodeIds() { this->prePaidNodeAmountModifyNodeIds_ = nullptr;};
    inline const vector<string> & prePaidNodeAmountModifyNodeIds() const { DARABONBA_PTR_GET_CONST(prePaidNodeAmountModifyNodeIds_, vector<string>) };
    inline vector<string> prePaidNodeAmountModifyNodeIds() { DARABONBA_PTR_GET(prePaidNodeAmountModifyNodeIds_, vector<string>) };
    inline ModifyNodePoolAmountRequestNodePool& setPrePaidNodeAmountModifyNodeIds(const vector<string> & prePaidNodeAmountModifyNodeIds) { DARABONBA_PTR_SET_VALUE(prePaidNodeAmountModifyNodeIds_, prePaidNodeAmountModifyNodeIds) };
    inline ModifyNodePoolAmountRequestNodePool& setPrePaidNodeAmountModifyNodeIds(vector<string> && prePaidNodeAmountModifyNodeIds) { DARABONBA_PTR_SET_RVALUE(prePaidNodeAmountModifyNodeIds_, prePaidNodeAmountModifyNodeIds) };


  protected:
    // The total number of subscription nodes after the change.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The change mode of subscription nodes.
    // 
    // Valid value:
    // 
    // *   EXPAND_FROM_POST_PAID_EXPLICIT: changes from specified pay-as-you-go nodes
    std::shared_ptr<string> prePaidNodeAmountModifyMode_ = nullptr;
    // The nodes for which you want to change the billing method.
    std::shared_ptr<vector<string>> prePaidNodeAmountModifyNodeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
