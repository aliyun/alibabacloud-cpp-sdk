// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryReimbursementOrderResponseBodyModuleExpenses.hpp>
#include <alibabacloud/models/QueryReimbursementOrderResponseBodyModuleItineraries.hpp>
#include <alibabacloud/models/QueryReimbursementOrderResponseBodyModulePaymentInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryReimbursementOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(company_amount, companyAmount_);
      DARABONBA_PTR_TO_JSON(company_pay_amount, companyPayAmount_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(cost_center_code, costCenterCode_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(expenses, expenses_);
      DARABONBA_PTR_TO_JSON(expenses_cover_dept_id, expensesCoverDeptId_);
      DARABONBA_PTR_TO_JSON(expenses_cover_dept_name, expensesCoverDeptName_);
      DARABONBA_PTR_TO_JSON(expenses_cover_invoice_title, expensesCoverInvoiceTitle_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(is_deleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(itineraries, itineraries_);
      DARABONBA_PTR_TO_JSON(payment_finish_time, paymentFinishTime_);
      DARABONBA_PTR_TO_JSON(payment_infos, paymentInfos_);
      DARABONBA_PTR_TO_JSON(personal_amount, personalAmount_);
      DARABONBA_PTR_TO_JSON(process_end_time, processEndTime_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(reimbursement_no, reimbursementNo_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(travel_third_apply_id, travelThirdApplyId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(company_amount, companyAmount_);
      DARABONBA_PTR_FROM_JSON(company_pay_amount, companyPayAmount_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(cost_center_code, costCenterCode_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(expenses, expenses_);
      DARABONBA_PTR_FROM_JSON(expenses_cover_dept_id, expensesCoverDeptId_);
      DARABONBA_PTR_FROM_JSON(expenses_cover_dept_name, expensesCoverDeptName_);
      DARABONBA_PTR_FROM_JSON(expenses_cover_invoice_title, expensesCoverInvoiceTitle_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(is_deleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(itineraries, itineraries_);
      DARABONBA_PTR_FROM_JSON(payment_finish_time, paymentFinishTime_);
      DARABONBA_PTR_FROM_JSON(payment_infos, paymentInfos_);
      DARABONBA_PTR_FROM_JSON(personal_amount, personalAmount_);
      DARABONBA_PTR_FROM_JSON(process_end_time, processEndTime_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(reimbursement_no, reimbursementNo_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(travel_third_apply_id, travelThirdApplyId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    QueryReimbursementOrderResponseBodyModule() = default ;
    QueryReimbursementOrderResponseBodyModule(const QueryReimbursementOrderResponseBodyModule &) = default ;
    QueryReimbursementOrderResponseBodyModule(QueryReimbursementOrderResponseBodyModule &&) = default ;
    QueryReimbursementOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderResponseBodyModule() = default ;
    QueryReimbursementOrderResponseBodyModule& operator=(const QueryReimbursementOrderResponseBodyModule &) = default ;
    QueryReimbursementOrderResponseBodyModule& operator=(QueryReimbursementOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->companyAmount_ != nullptr
        && this->companyPayAmount_ != nullptr && this->corpId_ != nullptr && this->costCenterCode_ != nullptr && this->costCenterName_ != nullptr && this->expenses_ != nullptr
        && this->expensesCoverDeptId_ != nullptr && this->expensesCoverDeptName_ != nullptr && this->expensesCoverInvoiceTitle_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->isDeleted_ != nullptr && this->itineraries_ != nullptr && this->paymentFinishTime_ != nullptr && this->paymentInfos_ != nullptr && this->personalAmount_ != nullptr
        && this->processEndTime_ != nullptr && this->projectCode_ != nullptr && this->projectName_ != nullptr && this->reason_ != nullptr && this->reimbursementNo_ != nullptr
        && this->remark_ != nullptr && this->status_ != nullptr && this->travelThirdApplyId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // companyAmount Field Functions 
    bool hasCompanyAmount() const { return this->companyAmount_ != nullptr;};
    void deleteCompanyAmount() { this->companyAmount_ = nullptr;};
    inline string companyAmount() const { DARABONBA_PTR_GET_DEFAULT(companyAmount_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setCompanyAmount(string companyAmount) { DARABONBA_PTR_SET_VALUE(companyAmount_, companyAmount) };


    // companyPayAmount Field Functions 
    bool hasCompanyPayAmount() const { return this->companyPayAmount_ != nullptr;};
    void deleteCompanyPayAmount() { this->companyPayAmount_ = nullptr;};
    inline string companyPayAmount() const { DARABONBA_PTR_GET_DEFAULT(companyPayAmount_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setCompanyPayAmount(string companyPayAmount) { DARABONBA_PTR_SET_VALUE(companyPayAmount_, companyPayAmount) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // costCenterCode Field Functions 
    bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
    void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
    inline string costCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // expenses Field Functions 
    bool hasExpenses() const { return this->expenses_ != nullptr;};
    void deleteExpenses() { this->expenses_ = nullptr;};
    inline const vector<Models::QueryReimbursementOrderResponseBodyModuleExpenses> & expenses() const { DARABONBA_PTR_GET_CONST(expenses_, vector<Models::QueryReimbursementOrderResponseBodyModuleExpenses>) };
    inline vector<Models::QueryReimbursementOrderResponseBodyModuleExpenses> expenses() { DARABONBA_PTR_GET(expenses_, vector<Models::QueryReimbursementOrderResponseBodyModuleExpenses>) };
    inline QueryReimbursementOrderResponseBodyModule& setExpenses(const vector<Models::QueryReimbursementOrderResponseBodyModuleExpenses> & expenses) { DARABONBA_PTR_SET_VALUE(expenses_, expenses) };
    inline QueryReimbursementOrderResponseBodyModule& setExpenses(vector<Models::QueryReimbursementOrderResponseBodyModuleExpenses> && expenses) { DARABONBA_PTR_SET_RVALUE(expenses_, expenses) };


    // expensesCoverDeptId Field Functions 
    bool hasExpensesCoverDeptId() const { return this->expensesCoverDeptId_ != nullptr;};
    void deleteExpensesCoverDeptId() { this->expensesCoverDeptId_ = nullptr;};
    inline string expensesCoverDeptId() const { DARABONBA_PTR_GET_DEFAULT(expensesCoverDeptId_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setExpensesCoverDeptId(string expensesCoverDeptId) { DARABONBA_PTR_SET_VALUE(expensesCoverDeptId_, expensesCoverDeptId) };


    // expensesCoverDeptName Field Functions 
    bool hasExpensesCoverDeptName() const { return this->expensesCoverDeptName_ != nullptr;};
    void deleteExpensesCoverDeptName() { this->expensesCoverDeptName_ = nullptr;};
    inline string expensesCoverDeptName() const { DARABONBA_PTR_GET_DEFAULT(expensesCoverDeptName_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setExpensesCoverDeptName(string expensesCoverDeptName) { DARABONBA_PTR_SET_VALUE(expensesCoverDeptName_, expensesCoverDeptName) };


    // expensesCoverInvoiceTitle Field Functions 
    bool hasExpensesCoverInvoiceTitle() const { return this->expensesCoverInvoiceTitle_ != nullptr;};
    void deleteExpensesCoverInvoiceTitle() { this->expensesCoverInvoiceTitle_ = nullptr;};
    inline string expensesCoverInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(expensesCoverInvoiceTitle_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setExpensesCoverInvoiceTitle(string expensesCoverInvoiceTitle) { DARABONBA_PTR_SET_VALUE(expensesCoverInvoiceTitle_, expensesCoverInvoiceTitle) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline string isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setIsDeleted(string isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // itineraries Field Functions 
    bool hasItineraries() const { return this->itineraries_ != nullptr;};
    void deleteItineraries() { this->itineraries_ = nullptr;};
    inline const vector<Models::QueryReimbursementOrderResponseBodyModuleItineraries> & itineraries() const { DARABONBA_PTR_GET_CONST(itineraries_, vector<Models::QueryReimbursementOrderResponseBodyModuleItineraries>) };
    inline vector<Models::QueryReimbursementOrderResponseBodyModuleItineraries> itineraries() { DARABONBA_PTR_GET(itineraries_, vector<Models::QueryReimbursementOrderResponseBodyModuleItineraries>) };
    inline QueryReimbursementOrderResponseBodyModule& setItineraries(const vector<Models::QueryReimbursementOrderResponseBodyModuleItineraries> & itineraries) { DARABONBA_PTR_SET_VALUE(itineraries_, itineraries) };
    inline QueryReimbursementOrderResponseBodyModule& setItineraries(vector<Models::QueryReimbursementOrderResponseBodyModuleItineraries> && itineraries) { DARABONBA_PTR_SET_RVALUE(itineraries_, itineraries) };


    // paymentFinishTime Field Functions 
    bool hasPaymentFinishTime() const { return this->paymentFinishTime_ != nullptr;};
    void deletePaymentFinishTime() { this->paymentFinishTime_ = nullptr;};
    inline string paymentFinishTime() const { DARABONBA_PTR_GET_DEFAULT(paymentFinishTime_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setPaymentFinishTime(string paymentFinishTime) { DARABONBA_PTR_SET_VALUE(paymentFinishTime_, paymentFinishTime) };


    // paymentInfos Field Functions 
    bool hasPaymentInfos() const { return this->paymentInfos_ != nullptr;};
    void deletePaymentInfos() { this->paymentInfos_ = nullptr;};
    inline const vector<Models::QueryReimbursementOrderResponseBodyModulePaymentInfos> & paymentInfos() const { DARABONBA_PTR_GET_CONST(paymentInfos_, vector<Models::QueryReimbursementOrderResponseBodyModulePaymentInfos>) };
    inline vector<Models::QueryReimbursementOrderResponseBodyModulePaymentInfos> paymentInfos() { DARABONBA_PTR_GET(paymentInfos_, vector<Models::QueryReimbursementOrderResponseBodyModulePaymentInfos>) };
    inline QueryReimbursementOrderResponseBodyModule& setPaymentInfos(const vector<Models::QueryReimbursementOrderResponseBodyModulePaymentInfos> & paymentInfos) { DARABONBA_PTR_SET_VALUE(paymentInfos_, paymentInfos) };
    inline QueryReimbursementOrderResponseBodyModule& setPaymentInfos(vector<Models::QueryReimbursementOrderResponseBodyModulePaymentInfos> && paymentInfos) { DARABONBA_PTR_SET_RVALUE(paymentInfos_, paymentInfos) };


    // personalAmount Field Functions 
    bool hasPersonalAmount() const { return this->personalAmount_ != nullptr;};
    void deletePersonalAmount() { this->personalAmount_ = nullptr;};
    inline string personalAmount() const { DARABONBA_PTR_GET_DEFAULT(personalAmount_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setPersonalAmount(string personalAmount) { DARABONBA_PTR_SET_VALUE(personalAmount_, personalAmount) };


    // processEndTime Field Functions 
    bool hasProcessEndTime() const { return this->processEndTime_ != nullptr;};
    void deleteProcessEndTime() { this->processEndTime_ = nullptr;};
    inline string processEndTime() const { DARABONBA_PTR_GET_DEFAULT(processEndTime_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setProcessEndTime(string processEndTime) { DARABONBA_PTR_SET_VALUE(processEndTime_, processEndTime) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reimbursementNo Field Functions 
    bool hasReimbursementNo() const { return this->reimbursementNo_ != nullptr;};
    void deleteReimbursementNo() { this->reimbursementNo_ = nullptr;};
    inline string reimbursementNo() const { DARABONBA_PTR_GET_DEFAULT(reimbursementNo_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setReimbursementNo(string reimbursementNo) { DARABONBA_PTR_SET_VALUE(reimbursementNo_, reimbursementNo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // travelThirdApplyId Field Functions 
    bool hasTravelThirdApplyId() const { return this->travelThirdApplyId_ != nullptr;};
    void deleteTravelThirdApplyId() { this->travelThirdApplyId_ = nullptr;};
    inline string travelThirdApplyId() const { DARABONBA_PTR_GET_DEFAULT(travelThirdApplyId_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setTravelThirdApplyId(string travelThirdApplyId) { DARABONBA_PTR_SET_VALUE(travelThirdApplyId_, travelThirdApplyId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline QueryReimbursementOrderResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> companyAmount_ = nullptr;
    std::shared_ptr<string> companyPayAmount_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> costCenterCode_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<vector<Models::QueryReimbursementOrderResponseBodyModuleExpenses>> expenses_ = nullptr;
    std::shared_ptr<string> expensesCoverDeptId_ = nullptr;
    std::shared_ptr<string> expensesCoverDeptName_ = nullptr;
    std::shared_ptr<string> expensesCoverInvoiceTitle_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> isDeleted_ = nullptr;
    std::shared_ptr<vector<Models::QueryReimbursementOrderResponseBodyModuleItineraries>> itineraries_ = nullptr;
    std::shared_ptr<string> paymentFinishTime_ = nullptr;
    std::shared_ptr<vector<Models::QueryReimbursementOrderResponseBodyModulePaymentInfos>> paymentInfos_ = nullptr;
    std::shared_ptr<string> personalAmount_ = nullptr;
    std::shared_ptr<string> processEndTime_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> reimbursementNo_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> travelThirdApplyId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
