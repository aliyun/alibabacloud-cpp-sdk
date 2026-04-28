// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBUDGETPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBUDGETPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteBudgetPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBudgetPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetPolicyId, budgetPolicyId_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBudgetPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetPolicyId, budgetPolicyId_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteBudgetPolicyRequest() = default ;
    DeleteBudgetPolicyRequest(const DeleteBudgetPolicyRequest &) = default ;
    DeleteBudgetPolicyRequest(DeleteBudgetPolicyRequest &&) = default ;
    DeleteBudgetPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBudgetPolicyRequest() = default ;
    DeleteBudgetPolicyRequest& operator=(const DeleteBudgetPolicyRequest &) = default ;
    DeleteBudgetPolicyRequest& operator=(DeleteBudgetPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->budgetPolicyId_ == nullptr
        && this->gwClusterId_ == nullptr && this->regionId_ == nullptr; };
    // budgetPolicyId Field Functions 
    bool hasBudgetPolicyId() const { return this->budgetPolicyId_ != nullptr;};
    void deleteBudgetPolicyId() { this->budgetPolicyId_ = nullptr;};
    inline string getBudgetPolicyId() const { DARABONBA_PTR_GET_DEFAULT(budgetPolicyId_, "") };
    inline DeleteBudgetPolicyRequest& setBudgetPolicyId(string budgetPolicyId) { DARABONBA_PTR_SET_VALUE(budgetPolicyId_, budgetPolicyId) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DeleteBudgetPolicyRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteBudgetPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> budgetPolicyId_ {};
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
