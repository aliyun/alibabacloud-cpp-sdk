// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALAPPLYADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEALAPPLYADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MealApplyAddRequestApplyUser.hpp>
#include <vector>
#include <alibabacloud/models/MealApplyAddRequestItineraryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealApplyAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealApplyAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_user, applyUser_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_TO_JSON(meal_amount, mealAmount_);
      DARABONBA_PTR_TO_JSON(meal_cause, mealCause_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    friend void from_json(const Darabonba::Json& j, MealApplyAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_user, applyUser_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_FROM_JSON(meal_amount, mealAmount_);
      DARABONBA_PTR_FROM_JSON(meal_cause, mealCause_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
    };
    MealApplyAddRequest() = default ;
    MealApplyAddRequest(const MealApplyAddRequest &) = default ;
    MealApplyAddRequest(MealApplyAddRequest &&) = default ;
    MealApplyAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealApplyAddRequest() = default ;
    MealApplyAddRequest& operator=(const MealApplyAddRequest &) = default ;
    MealApplyAddRequest& operator=(MealApplyAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyUser_ != nullptr
        && this->costCenterId_ != nullptr && this->invoiceId_ != nullptr && this->itineraryList_ != nullptr && this->mealAmount_ != nullptr && this->mealCause_ != nullptr
        && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->status_ != nullptr && this->thirdPartApplyId_ != nullptr && this->thirdPartCostCenterId_ != nullptr
        && this->thirdPartInvoiceId_ != nullptr; };
    // applyUser Field Functions 
    bool hasApplyUser() const { return this->applyUser_ != nullptr;};
    void deleteApplyUser() { this->applyUser_ = nullptr;};
    inline const MealApplyAddRequestApplyUser & applyUser() const { DARABONBA_PTR_GET_CONST(applyUser_, MealApplyAddRequestApplyUser) };
    inline MealApplyAddRequestApplyUser applyUser() { DARABONBA_PTR_GET(applyUser_, MealApplyAddRequestApplyUser) };
    inline MealApplyAddRequest& setApplyUser(const MealApplyAddRequestApplyUser & applyUser) { DARABONBA_PTR_SET_VALUE(applyUser_, applyUser) };
    inline MealApplyAddRequest& setApplyUser(MealApplyAddRequestApplyUser && applyUser) { DARABONBA_PTR_SET_RVALUE(applyUser_, applyUser) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline MealApplyAddRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline MealApplyAddRequest& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<MealApplyAddRequestItineraryList> & itineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<MealApplyAddRequestItineraryList>) };
    inline vector<MealApplyAddRequestItineraryList> itineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<MealApplyAddRequestItineraryList>) };
    inline MealApplyAddRequest& setItineraryList(const vector<MealApplyAddRequestItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline MealApplyAddRequest& setItineraryList(vector<MealApplyAddRequestItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // mealAmount Field Functions 
    bool hasMealAmount() const { return this->mealAmount_ != nullptr;};
    void deleteMealAmount() { this->mealAmount_ = nullptr;};
    inline int64_t mealAmount() const { DARABONBA_PTR_GET_DEFAULT(mealAmount_, 0L) };
    inline MealApplyAddRequest& setMealAmount(int64_t mealAmount) { DARABONBA_PTR_SET_VALUE(mealAmount_, mealAmount) };


    // mealCause Field Functions 
    bool hasMealCause() const { return this->mealCause_ != nullptr;};
    void deleteMealCause() { this->mealCause_ = nullptr;};
    inline string mealCause() const { DARABONBA_PTR_GET_DEFAULT(mealCause_, "") };
    inline MealApplyAddRequest& setMealCause(string mealCause) { DARABONBA_PTR_SET_VALUE(mealCause_, mealCause) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline MealApplyAddRequest& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline MealApplyAddRequest& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline MealApplyAddRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline MealApplyAddRequest& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string thirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline MealApplyAddRequest& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline MealApplyAddRequest& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<MealApplyAddRequestApplyUser> applyUser_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<MealApplyAddRequestItineraryList>> itineraryList_ = nullptr;
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
