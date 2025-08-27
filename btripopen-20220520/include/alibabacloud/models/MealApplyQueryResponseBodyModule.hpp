// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALAPPLYQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_MEALAPPLYQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MealApplyQueryResponseBodyModuleApplyUser.hpp>
#include <vector>
#include <alibabacloud/models/MealApplyQueryResponseBodyModuleItineraryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealApplyQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_user, applyUser_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_TO_JSON(meal_amount, mealAmount_);
      DARABONBA_PTR_TO_JSON(meal_cause, mealCause_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(third_part_project_id, thirdPartProjectId_);
    };
    friend void from_json(const Darabonba::Json& j, MealApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_user, applyUser_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_FROM_JSON(meal_amount, mealAmount_);
      DARABONBA_PTR_FROM_JSON(meal_cause, mealCause_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(third_part_project_id, thirdPartProjectId_);
    };
    MealApplyQueryResponseBodyModule() = default ;
    MealApplyQueryResponseBodyModule(const MealApplyQueryResponseBodyModule &) = default ;
    MealApplyQueryResponseBodyModule(MealApplyQueryResponseBodyModule &&) = default ;
    MealApplyQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealApplyQueryResponseBodyModule() = default ;
    MealApplyQueryResponseBodyModule& operator=(const MealApplyQueryResponseBodyModule &) = default ;
    MealApplyQueryResponseBodyModule& operator=(MealApplyQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyUser_ != nullptr
        && this->costCenterId_ != nullptr && this->gmtCreate_ != nullptr && this->invoiceId_ != nullptr && this->itineraryList_ != nullptr && this->mealAmount_ != nullptr
        && this->mealCause_ != nullptr && this->projectId_ != nullptr && this->status_ != nullptr && this->thirdPartApplyId_ != nullptr && this->thirdPartCostCenterId_ != nullptr
        && this->thirdPartInvoiceId_ != nullptr && this->thirdPartProjectId_ != nullptr; };
    // applyUser Field Functions 
    bool hasApplyUser() const { return this->applyUser_ != nullptr;};
    void deleteApplyUser() { this->applyUser_ = nullptr;};
    inline const Models::MealApplyQueryResponseBodyModuleApplyUser & applyUser() const { DARABONBA_PTR_GET_CONST(applyUser_, Models::MealApplyQueryResponseBodyModuleApplyUser) };
    inline Models::MealApplyQueryResponseBodyModuleApplyUser applyUser() { DARABONBA_PTR_GET(applyUser_, Models::MealApplyQueryResponseBodyModuleApplyUser) };
    inline MealApplyQueryResponseBodyModule& setApplyUser(const Models::MealApplyQueryResponseBodyModuleApplyUser & applyUser) { DARABONBA_PTR_SET_VALUE(applyUser_, applyUser) };
    inline MealApplyQueryResponseBodyModule& setApplyUser(Models::MealApplyQueryResponseBodyModuleApplyUser && applyUser) { DARABONBA_PTR_SET_RVALUE(applyUser_, applyUser) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline MealApplyQueryResponseBodyModule& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MealApplyQueryResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline MealApplyQueryResponseBodyModule& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<Models::MealApplyQueryResponseBodyModuleItineraryList> & itineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<Models::MealApplyQueryResponseBodyModuleItineraryList>) };
    inline vector<Models::MealApplyQueryResponseBodyModuleItineraryList> itineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<Models::MealApplyQueryResponseBodyModuleItineraryList>) };
    inline MealApplyQueryResponseBodyModule& setItineraryList(const vector<Models::MealApplyQueryResponseBodyModuleItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline MealApplyQueryResponseBodyModule& setItineraryList(vector<Models::MealApplyQueryResponseBodyModuleItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // mealAmount Field Functions 
    bool hasMealAmount() const { return this->mealAmount_ != nullptr;};
    void deleteMealAmount() { this->mealAmount_ = nullptr;};
    inline int64_t mealAmount() const { DARABONBA_PTR_GET_DEFAULT(mealAmount_, 0L) };
    inline MealApplyQueryResponseBodyModule& setMealAmount(int64_t mealAmount) { DARABONBA_PTR_SET_VALUE(mealAmount_, mealAmount) };


    // mealCause Field Functions 
    bool hasMealCause() const { return this->mealCause_ != nullptr;};
    void deleteMealCause() { this->mealCause_ = nullptr;};
    inline string mealCause() const { DARABONBA_PTR_GET_DEFAULT(mealCause_, "") };
    inline MealApplyQueryResponseBodyModule& setMealCause(string mealCause) { DARABONBA_PTR_SET_VALUE(mealCause_, mealCause) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline MealApplyQueryResponseBodyModule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline MealApplyQueryResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline MealApplyQueryResponseBodyModule& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string thirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline MealApplyQueryResponseBodyModule& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline MealApplyQueryResponseBodyModule& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // thirdPartProjectId Field Functions 
    bool hasThirdPartProjectId() const { return this->thirdPartProjectId_ != nullptr;};
    void deleteThirdPartProjectId() { this->thirdPartProjectId_ = nullptr;};
    inline string thirdPartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartProjectId_, "") };
    inline MealApplyQueryResponseBodyModule& setThirdPartProjectId(string thirdPartProjectId) { DARABONBA_PTR_SET_VALUE(thirdPartProjectId_, thirdPartProjectId) };


  protected:
    std::shared_ptr<Models::MealApplyQueryResponseBodyModuleApplyUser> applyUser_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    std::shared_ptr<vector<Models::MealApplyQueryResponseBodyModuleItineraryList>> itineraryList_ = nullptr;
    std::shared_ptr<int64_t> mealAmount_ = nullptr;
    std::shared_ptr<string> mealCause_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
    std::shared_ptr<string> thirdPartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdPartProjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
