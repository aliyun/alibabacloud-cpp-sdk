// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeDetailResponseBodyDataChangeFeeDetails.hpp>
#include <alibabacloud/models/ChangeDetailResponseBodyDataChangePassengers.hpp>
#include <alibabacloud/models/ChangeDetailResponseBodyDataChangedJourneys.hpp>
#include <alibabacloud/models/ChangeDetailResponseBodyDataContact.hpp>
#include <alibabacloud/models/ChangeDetailResponseBodyDataLastJourneys.hpp>
#include <alibabacloud/models/ChangeDetailResponseBodyDataOriginalJourneys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(change_fee_details, changeFeeDetails_);
      DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_TO_JSON(change_passengers, changePassengers_);
      DARABONBA_PTR_TO_JSON(change_reason_type, changeReasonType_);
      DARABONBA_PTR_TO_JSON(changed_journeys, changedJourneys_);
      DARABONBA_PTR_TO_JSON(close_reason, closeReason_);
      DARABONBA_PTR_TO_JSON(close_utc_time, closeUtcTime_);
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(create_utc_time, createUtcTime_);
      DARABONBA_PTR_TO_JSON(last_confirm_utc_time, lastConfirmUtcTime_);
      DARABONBA_PTR_TO_JSON(last_journeys, lastJourneys_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(original_journeys, originalJourneys_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_success_utc_time, paySuccessUtcTime_);
      DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(change_fee_details, changeFeeDetails_);
      DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_FROM_JSON(change_passengers, changePassengers_);
      DARABONBA_PTR_FROM_JSON(change_reason_type, changeReasonType_);
      DARABONBA_PTR_FROM_JSON(changed_journeys, changedJourneys_);
      DARABONBA_PTR_FROM_JSON(close_reason, closeReason_);
      DARABONBA_PTR_FROM_JSON(close_utc_time, closeUtcTime_);
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(create_utc_time, createUtcTime_);
      DARABONBA_PTR_FROM_JSON(last_confirm_utc_time, lastConfirmUtcTime_);
      DARABONBA_PTR_FROM_JSON(last_journeys, lastJourneys_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(original_journeys, originalJourneys_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_success_utc_time, paySuccessUtcTime_);
      DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
    };
    ChangeDetailResponseBodyData() = default ;
    ChangeDetailResponseBodyData(const ChangeDetailResponseBodyData &) = default ;
    ChangeDetailResponseBodyData(ChangeDetailResponseBodyData &&) = default ;
    ChangeDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailResponseBodyData() = default ;
    ChangeDetailResponseBodyData& operator=(const ChangeDetailResponseBodyData &) = default ;
    ChangeDetailResponseBodyData& operator=(ChangeDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeFeeDetails_ == nullptr
        && return this->changeOrderNum_ == nullptr && return this->changePassengers_ == nullptr && return this->changeReasonType_ == nullptr && return this->changedJourneys_ == nullptr && return this->closeReason_ == nullptr
        && return this->closeUtcTime_ == nullptr && return this->contact_ == nullptr && return this->createUtcTime_ == nullptr && return this->lastConfirmUtcTime_ == nullptr && return this->lastJourneys_ == nullptr
        && return this->orderNum_ == nullptr && return this->orderStatus_ == nullptr && return this->originalJourneys_ == nullptr && return this->payStatus_ == nullptr && return this->paySuccessUtcTime_ == nullptr
        && return this->totalAmount_ == nullptr && return this->transactionNo_ == nullptr; };
    // changeFeeDetails Field Functions 
    bool hasChangeFeeDetails() const { return this->changeFeeDetails_ != nullptr;};
    void deleteChangeFeeDetails() { this->changeFeeDetails_ = nullptr;};
    inline const vector<Models::ChangeDetailResponseBodyDataChangeFeeDetails> & changeFeeDetails() const { DARABONBA_PTR_GET_CONST(changeFeeDetails_, vector<Models::ChangeDetailResponseBodyDataChangeFeeDetails>) };
    inline vector<Models::ChangeDetailResponseBodyDataChangeFeeDetails> changeFeeDetails() { DARABONBA_PTR_GET(changeFeeDetails_, vector<Models::ChangeDetailResponseBodyDataChangeFeeDetails>) };
    inline ChangeDetailResponseBodyData& setChangeFeeDetails(const vector<Models::ChangeDetailResponseBodyDataChangeFeeDetails> & changeFeeDetails) { DARABONBA_PTR_SET_VALUE(changeFeeDetails_, changeFeeDetails) };
    inline ChangeDetailResponseBodyData& setChangeFeeDetails(vector<Models::ChangeDetailResponseBodyDataChangeFeeDetails> && changeFeeDetails) { DARABONBA_PTR_SET_RVALUE(changeFeeDetails_, changeFeeDetails) };


    // changeOrderNum Field Functions 
    bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
    void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
    inline int64_t changeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
    inline ChangeDetailResponseBodyData& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


    // changePassengers Field Functions 
    bool hasChangePassengers() const { return this->changePassengers_ != nullptr;};
    void deleteChangePassengers() { this->changePassengers_ = nullptr;};
    inline const vector<Models::ChangeDetailResponseBodyDataChangePassengers> & changePassengers() const { DARABONBA_PTR_GET_CONST(changePassengers_, vector<Models::ChangeDetailResponseBodyDataChangePassengers>) };
    inline vector<Models::ChangeDetailResponseBodyDataChangePassengers> changePassengers() { DARABONBA_PTR_GET(changePassengers_, vector<Models::ChangeDetailResponseBodyDataChangePassengers>) };
    inline ChangeDetailResponseBodyData& setChangePassengers(const vector<Models::ChangeDetailResponseBodyDataChangePassengers> & changePassengers) { DARABONBA_PTR_SET_VALUE(changePassengers_, changePassengers) };
    inline ChangeDetailResponseBodyData& setChangePassengers(vector<Models::ChangeDetailResponseBodyDataChangePassengers> && changePassengers) { DARABONBA_PTR_SET_RVALUE(changePassengers_, changePassengers) };


    // changeReasonType Field Functions 
    bool hasChangeReasonType() const { return this->changeReasonType_ != nullptr;};
    void deleteChangeReasonType() { this->changeReasonType_ = nullptr;};
    inline int32_t changeReasonType() const { DARABONBA_PTR_GET_DEFAULT(changeReasonType_, 0) };
    inline ChangeDetailResponseBodyData& setChangeReasonType(int32_t changeReasonType) { DARABONBA_PTR_SET_VALUE(changeReasonType_, changeReasonType) };


    // changedJourneys Field Functions 
    bool hasChangedJourneys() const { return this->changedJourneys_ != nullptr;};
    void deleteChangedJourneys() { this->changedJourneys_ = nullptr;};
    inline const vector<Models::ChangeDetailResponseBodyDataChangedJourneys> & changedJourneys() const { DARABONBA_PTR_GET_CONST(changedJourneys_, vector<Models::ChangeDetailResponseBodyDataChangedJourneys>) };
    inline vector<Models::ChangeDetailResponseBodyDataChangedJourneys> changedJourneys() { DARABONBA_PTR_GET(changedJourneys_, vector<Models::ChangeDetailResponseBodyDataChangedJourneys>) };
    inline ChangeDetailResponseBodyData& setChangedJourneys(const vector<Models::ChangeDetailResponseBodyDataChangedJourneys> & changedJourneys) { DARABONBA_PTR_SET_VALUE(changedJourneys_, changedJourneys) };
    inline ChangeDetailResponseBodyData& setChangedJourneys(vector<Models::ChangeDetailResponseBodyDataChangedJourneys> && changedJourneys) { DARABONBA_PTR_SET_RVALUE(changedJourneys_, changedJourneys) };


    // closeReason Field Functions 
    bool hasCloseReason() const { return this->closeReason_ != nullptr;};
    void deleteCloseReason() { this->closeReason_ = nullptr;};
    inline string closeReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
    inline ChangeDetailResponseBodyData& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


    // closeUtcTime Field Functions 
    bool hasCloseUtcTime() const { return this->closeUtcTime_ != nullptr;};
    void deleteCloseUtcTime() { this->closeUtcTime_ = nullptr;};
    inline int64_t closeUtcTime() const { DARABONBA_PTR_GET_DEFAULT(closeUtcTime_, 0L) };
    inline ChangeDetailResponseBodyData& setCloseUtcTime(int64_t closeUtcTime) { DARABONBA_PTR_SET_VALUE(closeUtcTime_, closeUtcTime) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const Models::ChangeDetailResponseBodyDataContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, Models::ChangeDetailResponseBodyDataContact) };
    inline Models::ChangeDetailResponseBodyDataContact contact() { DARABONBA_PTR_GET(contact_, Models::ChangeDetailResponseBodyDataContact) };
    inline ChangeDetailResponseBodyData& setContact(const Models::ChangeDetailResponseBodyDataContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline ChangeDetailResponseBodyData& setContact(Models::ChangeDetailResponseBodyDataContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // createUtcTime Field Functions 
    bool hasCreateUtcTime() const { return this->createUtcTime_ != nullptr;};
    void deleteCreateUtcTime() { this->createUtcTime_ = nullptr;};
    inline int64_t createUtcTime() const { DARABONBA_PTR_GET_DEFAULT(createUtcTime_, 0L) };
    inline ChangeDetailResponseBodyData& setCreateUtcTime(int64_t createUtcTime) { DARABONBA_PTR_SET_VALUE(createUtcTime_, createUtcTime) };


    // lastConfirmUtcTime Field Functions 
    bool hasLastConfirmUtcTime() const { return this->lastConfirmUtcTime_ != nullptr;};
    void deleteLastConfirmUtcTime() { this->lastConfirmUtcTime_ = nullptr;};
    inline int64_t lastConfirmUtcTime() const { DARABONBA_PTR_GET_DEFAULT(lastConfirmUtcTime_, 0L) };
    inline ChangeDetailResponseBodyData& setLastConfirmUtcTime(int64_t lastConfirmUtcTime) { DARABONBA_PTR_SET_VALUE(lastConfirmUtcTime_, lastConfirmUtcTime) };


    // lastJourneys Field Functions 
    bool hasLastJourneys() const { return this->lastJourneys_ != nullptr;};
    void deleteLastJourneys() { this->lastJourneys_ = nullptr;};
    inline const vector<Models::ChangeDetailResponseBodyDataLastJourneys> & lastJourneys() const { DARABONBA_PTR_GET_CONST(lastJourneys_, vector<Models::ChangeDetailResponseBodyDataLastJourneys>) };
    inline vector<Models::ChangeDetailResponseBodyDataLastJourneys> lastJourneys() { DARABONBA_PTR_GET(lastJourneys_, vector<Models::ChangeDetailResponseBodyDataLastJourneys>) };
    inline ChangeDetailResponseBodyData& setLastJourneys(const vector<Models::ChangeDetailResponseBodyDataLastJourneys> & lastJourneys) { DARABONBA_PTR_SET_VALUE(lastJourneys_, lastJourneys) };
    inline ChangeDetailResponseBodyData& setLastJourneys(vector<Models::ChangeDetailResponseBodyDataLastJourneys> && lastJourneys) { DARABONBA_PTR_SET_RVALUE(lastJourneys_, lastJourneys) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline ChangeDetailResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline ChangeDetailResponseBodyData& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // originalJourneys Field Functions 
    bool hasOriginalJourneys() const { return this->originalJourneys_ != nullptr;};
    void deleteOriginalJourneys() { this->originalJourneys_ = nullptr;};
    inline const vector<Models::ChangeDetailResponseBodyDataOriginalJourneys> & originalJourneys() const { DARABONBA_PTR_GET_CONST(originalJourneys_, vector<Models::ChangeDetailResponseBodyDataOriginalJourneys>) };
    inline vector<Models::ChangeDetailResponseBodyDataOriginalJourneys> originalJourneys() { DARABONBA_PTR_GET(originalJourneys_, vector<Models::ChangeDetailResponseBodyDataOriginalJourneys>) };
    inline ChangeDetailResponseBodyData& setOriginalJourneys(const vector<Models::ChangeDetailResponseBodyDataOriginalJourneys> & originalJourneys) { DARABONBA_PTR_SET_VALUE(originalJourneys_, originalJourneys) };
    inline ChangeDetailResponseBodyData& setOriginalJourneys(vector<Models::ChangeDetailResponseBodyDataOriginalJourneys> && originalJourneys) { DARABONBA_PTR_SET_RVALUE(originalJourneys_, originalJourneys) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline ChangeDetailResponseBodyData& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // paySuccessUtcTime Field Functions 
    bool hasPaySuccessUtcTime() const { return this->paySuccessUtcTime_ != nullptr;};
    void deletePaySuccessUtcTime() { this->paySuccessUtcTime_ = nullptr;};
    inline int64_t paySuccessUtcTime() const { DARABONBA_PTR_GET_DEFAULT(paySuccessUtcTime_, 0L) };
    inline ChangeDetailResponseBodyData& setPaySuccessUtcTime(int64_t paySuccessUtcTime) { DARABONBA_PTR_SET_VALUE(paySuccessUtcTime_, paySuccessUtcTime) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline double totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0.0) };
    inline ChangeDetailResponseBodyData& setTotalAmount(double totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline ChangeDetailResponseBodyData& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


  protected:
    std::shared_ptr<vector<Models::ChangeDetailResponseBodyDataChangeFeeDetails>> changeFeeDetails_ = nullptr;
    std::shared_ptr<int64_t> changeOrderNum_ = nullptr;
    std::shared_ptr<vector<Models::ChangeDetailResponseBodyDataChangePassengers>> changePassengers_ = nullptr;
    std::shared_ptr<int32_t> changeReasonType_ = nullptr;
    std::shared_ptr<vector<Models::ChangeDetailResponseBodyDataChangedJourneys>> changedJourneys_ = nullptr;
    std::shared_ptr<string> closeReason_ = nullptr;
    std::shared_ptr<int64_t> closeUtcTime_ = nullptr;
    std::shared_ptr<Models::ChangeDetailResponseBodyDataContact> contact_ = nullptr;
    std::shared_ptr<int64_t> createUtcTime_ = nullptr;
    std::shared_ptr<int64_t> lastConfirmUtcTime_ = nullptr;
    std::shared_ptr<vector<Models::ChangeDetailResponseBodyDataLastJourneys>> lastJourneys_ = nullptr;
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<vector<Models::ChangeDetailResponseBodyDataOriginalJourneys>> originalJourneys_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<int64_t> paySuccessUtcTime_ = nullptr;
    std::shared_ptr<double> totalAmount_ = nullptr;
    std::shared_ptr<string> transactionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
