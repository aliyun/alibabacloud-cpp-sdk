// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarApplyAddRequestTravelerStandard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cause, cause_);
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(finished_date, finishedDate_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_name, projectName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(times_total, timesTotal_);
      DARABONBA_PTR_TO_JSON(times_type, timesType_);
      DARABONBA_PTR_TO_JSON(times_used, timesUsed_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cause, cause_);
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(finished_date, finishedDate_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_name, projectName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(times_total, timesTotal_);
      DARABONBA_PTR_FROM_JSON(times_type, timesType_);
      DARABONBA_PTR_FROM_JSON(times_used, timesUsed_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CarApplyAddRequest() = default ;
    CarApplyAddRequest(const CarApplyAddRequest &) = default ;
    CarApplyAddRequest(CarApplyAddRequest &&) = default ;
    CarApplyAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyAddRequest() = default ;
    CarApplyAddRequest& operator=(const CarApplyAddRequest &) = default ;
    CarApplyAddRequest& operator=(CarApplyAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cause_ != nullptr
        && this->city_ != nullptr && this->cityCodeSet_ != nullptr && this->date_ != nullptr && this->finishedDate_ != nullptr && this->projectCode_ != nullptr
        && this->projectName_ != nullptr && this->status_ != nullptr && this->thirdPartApplyId_ != nullptr && this->thirdPartCostCenterId_ != nullptr && this->thirdPartInvoiceId_ != nullptr
        && this->timesTotal_ != nullptr && this->timesType_ != nullptr && this->timesUsed_ != nullptr && this->title_ != nullptr && this->travelerStandard_ != nullptr
        && this->userId_ != nullptr; };
    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline CarApplyAddRequest& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CarApplyAddRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // cityCodeSet Field Functions 
    bool hasCityCodeSet() const { return this->cityCodeSet_ != nullptr;};
    void deleteCityCodeSet() { this->cityCodeSet_ = nullptr;};
    inline string cityCodeSet() const { DARABONBA_PTR_GET_DEFAULT(cityCodeSet_, "") };
    inline CarApplyAddRequest& setCityCodeSet(string cityCodeSet) { DARABONBA_PTR_SET_VALUE(cityCodeSet_, cityCodeSet) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline CarApplyAddRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // finishedDate Field Functions 
    bool hasFinishedDate() const { return this->finishedDate_ != nullptr;};
    void deleteFinishedDate() { this->finishedDate_ = nullptr;};
    inline string finishedDate() const { DARABONBA_PTR_GET_DEFAULT(finishedDate_, "") };
    inline CarApplyAddRequest& setFinishedDate(string finishedDate) { DARABONBA_PTR_SET_VALUE(finishedDate_, finishedDate) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline CarApplyAddRequest& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CarApplyAddRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CarApplyAddRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline CarApplyAddRequest& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // thirdPartCostCenterId Field Functions 
    bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
    void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
    inline string thirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
    inline CarApplyAddRequest& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline CarApplyAddRequest& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // timesTotal Field Functions 
    bool hasTimesTotal() const { return this->timesTotal_ != nullptr;};
    void deleteTimesTotal() { this->timesTotal_ = nullptr;};
    inline int32_t timesTotal() const { DARABONBA_PTR_GET_DEFAULT(timesTotal_, 0) };
    inline CarApplyAddRequest& setTimesTotal(int32_t timesTotal) { DARABONBA_PTR_SET_VALUE(timesTotal_, timesTotal) };


    // timesType Field Functions 
    bool hasTimesType() const { return this->timesType_ != nullptr;};
    void deleteTimesType() { this->timesType_ = nullptr;};
    inline int32_t timesType() const { DARABONBA_PTR_GET_DEFAULT(timesType_, 0) };
    inline CarApplyAddRequest& setTimesType(int32_t timesType) { DARABONBA_PTR_SET_VALUE(timesType_, timesType) };


    // timesUsed Field Functions 
    bool hasTimesUsed() const { return this->timesUsed_ != nullptr;};
    void deleteTimesUsed() { this->timesUsed_ = nullptr;};
    inline int32_t timesUsed() const { DARABONBA_PTR_GET_DEFAULT(timesUsed_, 0) };
    inline CarApplyAddRequest& setTimesUsed(int32_t timesUsed) { DARABONBA_PTR_SET_VALUE(timesUsed_, timesUsed) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CarApplyAddRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // travelerStandard Field Functions 
    bool hasTravelerStandard() const { return this->travelerStandard_ != nullptr;};
    void deleteTravelerStandard() { this->travelerStandard_ = nullptr;};
    inline const vector<CarApplyAddRequestTravelerStandard> & travelerStandard() const { DARABONBA_PTR_GET_CONST(travelerStandard_, vector<CarApplyAddRequestTravelerStandard>) };
    inline vector<CarApplyAddRequestTravelerStandard> travelerStandard() { DARABONBA_PTR_GET(travelerStandard_, vector<CarApplyAddRequestTravelerStandard>) };
    inline CarApplyAddRequest& setTravelerStandard(const vector<CarApplyAddRequestTravelerStandard> & travelerStandard) { DARABONBA_PTR_SET_VALUE(travelerStandard_, travelerStandard) };
    inline CarApplyAddRequest& setTravelerStandard(vector<CarApplyAddRequestTravelerStandard> && travelerStandard) { DARABONBA_PTR_SET_RVALUE(travelerStandard_, travelerStandard) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarApplyAddRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cause_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> cityCodeSet_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> finishedDate_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
    std::shared_ptr<string> thirdPartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> timesTotal_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> timesType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> timesUsed_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<vector<CarApplyAddRequestTravelerStandard>> travelerStandard_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
