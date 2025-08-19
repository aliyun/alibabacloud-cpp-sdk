// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTAUTOREPAIRPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTMANAGEMENTAUTOREPAIRPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestManagementAutoRepairPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestManagementAutoRepairPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(approval_required, approvalRequired_);
      DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestManagementAutoRepairPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(approval_required, approvalRequired_);
      DARABONBA_PTR_FROM_JSON(restart_node, restartNode_);
    };
    ModifyClusterNodePoolRequestManagementAutoRepairPolicy() = default ;
    ModifyClusterNodePoolRequestManagementAutoRepairPolicy(const ModifyClusterNodePoolRequestManagementAutoRepairPolicy &) = default ;
    ModifyClusterNodePoolRequestManagementAutoRepairPolicy(ModifyClusterNodePoolRequestManagementAutoRepairPolicy &&) = default ;
    ModifyClusterNodePoolRequestManagementAutoRepairPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestManagementAutoRepairPolicy() = default ;
    ModifyClusterNodePoolRequestManagementAutoRepairPolicy& operator=(const ModifyClusterNodePoolRequestManagementAutoRepairPolicy &) = default ;
    ModifyClusterNodePoolRequestManagementAutoRepairPolicy& operator=(ModifyClusterNodePoolRequestManagementAutoRepairPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalRequired_ != nullptr
        && this->restartNode_ != nullptr; };
    // approvalRequired Field Functions 
    bool hasApprovalRequired() const { return this->approvalRequired_ != nullptr;};
    void deleteApprovalRequired() { this->approvalRequired_ = nullptr;};
    inline bool approvalRequired() const { DARABONBA_PTR_GET_DEFAULT(approvalRequired_, false) };
    inline ModifyClusterNodePoolRequestManagementAutoRepairPolicy& setApprovalRequired(bool approvalRequired) { DARABONBA_PTR_SET_VALUE(approvalRequired_, approvalRequired) };


    // restartNode Field Functions 
    bool hasRestartNode() const { return this->restartNode_ != nullptr;};
    void deleteRestartNode() { this->restartNode_ = nullptr;};
    inline bool restartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
    inline ModifyClusterNodePoolRequestManagementAutoRepairPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


  protected:
    std::shared_ptr<bool> approvalRequired_ = nullptr;
    // Specifies whether ACK is allowed to automatically restart nodes after repairing the nodes. Valid values:
    // 
    // *   `true`: yes.
    // *   `false`: no.
    std::shared_ptr<bool> restartNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
