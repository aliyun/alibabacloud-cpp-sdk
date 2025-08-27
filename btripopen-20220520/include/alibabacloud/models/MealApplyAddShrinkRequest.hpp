// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALAPPLYADDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEALAPPLYADDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealApplyAddShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealApplyAddShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_user, applyUserShrink_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryListShrink_);
      DARABONBA_PTR_TO_JSON(meal_amount, mealAmount_);
      DARABONBA_PTR_TO_JSON(meal_cause, mealCause_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    friend void from_json(const Darabonba::Json& j, MealApplyAddShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_user, applyUserShrink_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryListShrink_);
      DARABONBA_PTR_FROM_JSON(meal_amount, mealAmount_);
      DARABONBA_PTR_FROM_JSON(meal_cause, mealCause_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    MealApplyAddShrinkRequest() = default ;
    MealApplyAddShrinkRequest(const MealApplyAddShrinkRequest &) = default ;
    MealApplyAddShrinkRequest(MealApplyAddShrinkRequest &&) = default ;
    MealApplyAddShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealApplyAddShrinkRequest() = default ;
    MealApplyAddShrinkRequest& operator=(const MealApplyAddShrinkRequest &) = default ;
    MealApplyAddShrinkRequest& operator=(MealApplyAddShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyUserShrink_ != nullptr
        && this->costCenterId_ != nullptr && this->invoiceId_ != nullptr && this->itineraryListShrink_ != nullptr && this->mealAmount_ != nullptr && this->mealCause_ != nullptr
        && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->status_ != nullptr && this->thirdPartApplyId_ != nullptr && this->thirdPartCostCenterId_ != nullptr
        && this->thirdPartInvoiceId_ != nullptr; };
    // applyUserShrink Field Functions 
    bool hasApplyUserShrink() const { return this->applyUserShrink_ != nullptr;};
    void deleteApplyUserShrink() { this->applyUserShrink_ = nullptr;};
    inline string applyUserShrink() const { DARABONBA_PTR_GET_DEFAULT(applyUserShrink_, "") };
    inline MealApplyAddShrinkRequest& setApplyUserShrink(string applyUserShrink) { DARABONBA_PTR_SET_VALUE(applyUserShrink_, applyUserShrink) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline MealApplyAddShrinkRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline MealApplyAddShrinkRequest& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // itineraryListShrink Field Functions 
    bool hasItineraryListShrink() const { return this->itineraryListShrink_ != nullptr;};
    void deleteItineraryListShrink() { this->itineraryListShrink_ = nullptr;};
    inline string itineraryListShrink() const { DARABONBA_PTR_GET_DEFAULT(itineraryListShrink_, "") };
    inline MealApplyAddShrinkRequest& setItineraryListShrink(string itineraryListShrink) { DARABONBA_PTR_SET_VALUE(itineraryListShrink_, itineraryListShrink) };


    // mealAmount Field Functions 
    bool hasMealAmount() const { return this->mealAmount_ != nullptr;};
    void deleteMealAmount() { this->mealAmount_ = nullptr;};
    inline int64_t mealAmount() const { DARABONBA_PTR_GET_DEFAULT(mealAmount_, 0L) };
    inline MealApplyAddShrinkRequest& setMealAmount(int64_t mealAmount) { DARABONBA_PTR_SET_VALUE(mealAmount_, mealAmount) };


    // mealCause Field Functions 
    bool hasMealCause() const { return this->mealCause_ != nullptr;};
    void deleteMealCause() { this->mealCause_ = nullptr;};
    inline string mealCause() const { DARABONBA_PTR_GET_DEFAULT(mealCause_, "") };
    inline MealApplyAddShrinkRequest& setMealCause(string mealCause) { DARABONBA_PTR_SET_VALUE(mealCause_, mealCause) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline MealApplyAddShrinkRequest& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline MealApplyAddShrinkRequest& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline MealApplyAddShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline MealApplyAddShrinkRequest& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string thirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline MealApplyAddShrinkRequest& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline MealApplyAddShrinkRequest& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applyUserShrink_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itineraryListShrink_ = nullptr;
    std::shared_ptr<int64_t> mealAmount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mealCause_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
    std::shared_ptr<string> thirdPartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
