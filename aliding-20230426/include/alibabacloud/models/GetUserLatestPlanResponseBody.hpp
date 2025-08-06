// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERLATESTPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERLATESTPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserLatestPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserLatestPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accountHandleStatus, accountHandleStatus_);
      DARABONBA_PTR_TO_JSON(accountHandleTime, accountHandleTime_);
      DARABONBA_PTR_TO_JSON(accountType, accountType_);
      DARABONBA_PTR_TO_JSON(agreementFirstSignTime, agreementFirstSignTime_);
      DARABONBA_PTR_TO_JSON(agreementLastSignTime, agreementLastSignTime_);
      DARABONBA_PTR_TO_JSON(agreementStatus, agreementStatus_);
      DARABONBA_PTR_TO_JSON(dataHandleEndTime, dataHandleEndTime_);
      DARABONBA_PTR_TO_JSON(dataHandleStartTime, dataHandleStartTime_);
      DARABONBA_PTR_TO_JSON(dataHandleStatus, dataHandleStatus_);
      DARABONBA_PTR_TO_JSON(exclusivePlan, exclusivePlan_);
      DARABONBA_PTR_TO_JSON(newAccountUid, newAccountUid_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserLatestPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accountHandleStatus, accountHandleStatus_);
      DARABONBA_PTR_FROM_JSON(accountHandleTime, accountHandleTime_);
      DARABONBA_PTR_FROM_JSON(accountType, accountType_);
      DARABONBA_PTR_FROM_JSON(agreementFirstSignTime, agreementFirstSignTime_);
      DARABONBA_PTR_FROM_JSON(agreementLastSignTime, agreementLastSignTime_);
      DARABONBA_PTR_FROM_JSON(agreementStatus, agreementStatus_);
      DARABONBA_PTR_FROM_JSON(dataHandleEndTime, dataHandleEndTime_);
      DARABONBA_PTR_FROM_JSON(dataHandleStartTime, dataHandleStartTime_);
      DARABONBA_PTR_FROM_JSON(dataHandleStatus, dataHandleStatus_);
      DARABONBA_PTR_FROM_JSON(exclusivePlan, exclusivePlan_);
      DARABONBA_PTR_FROM_JSON(newAccountUid, newAccountUid_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetUserLatestPlanResponseBody() = default ;
    GetUserLatestPlanResponseBody(const GetUserLatestPlanResponseBody &) = default ;
    GetUserLatestPlanResponseBody(GetUserLatestPlanResponseBody &&) = default ;
    GetUserLatestPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserLatestPlanResponseBody() = default ;
    GetUserLatestPlanResponseBody& operator=(const GetUserLatestPlanResponseBody &) = default ;
    GetUserLatestPlanResponseBody& operator=(GetUserLatestPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountHandleStatus_ != nullptr
        && this->accountHandleTime_ != nullptr && this->accountType_ != nullptr && this->agreementFirstSignTime_ != nullptr && this->agreementLastSignTime_ != nullptr && this->agreementStatus_ != nullptr
        && this->dataHandleEndTime_ != nullptr && this->dataHandleStartTime_ != nullptr && this->dataHandleStatus_ != nullptr && this->exclusivePlan_ != nullptr && this->newAccountUid_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // accountHandleStatus Field Functions 
    bool hasAccountHandleStatus() const { return this->accountHandleStatus_ != nullptr;};
    void deleteAccountHandleStatus() { this->accountHandleStatus_ = nullptr;};
    inline int32_t accountHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(accountHandleStatus_, 0) };
    inline GetUserLatestPlanResponseBody& setAccountHandleStatus(int32_t accountHandleStatus) { DARABONBA_PTR_SET_VALUE(accountHandleStatus_, accountHandleStatus) };


    // accountHandleTime Field Functions 
    bool hasAccountHandleTime() const { return this->accountHandleTime_ != nullptr;};
    void deleteAccountHandleTime() { this->accountHandleTime_ = nullptr;};
    inline string accountHandleTime() const { DARABONBA_PTR_GET_DEFAULT(accountHandleTime_, "") };
    inline GetUserLatestPlanResponseBody& setAccountHandleTime(string accountHandleTime) { DARABONBA_PTR_SET_VALUE(accountHandleTime_, accountHandleTime) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline GetUserLatestPlanResponseBody& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // agreementFirstSignTime Field Functions 
    bool hasAgreementFirstSignTime() const { return this->agreementFirstSignTime_ != nullptr;};
    void deleteAgreementFirstSignTime() { this->agreementFirstSignTime_ = nullptr;};
    inline string agreementFirstSignTime() const { DARABONBA_PTR_GET_DEFAULT(agreementFirstSignTime_, "") };
    inline GetUserLatestPlanResponseBody& setAgreementFirstSignTime(string agreementFirstSignTime) { DARABONBA_PTR_SET_VALUE(agreementFirstSignTime_, agreementFirstSignTime) };


    // agreementLastSignTime Field Functions 
    bool hasAgreementLastSignTime() const { return this->agreementLastSignTime_ != nullptr;};
    void deleteAgreementLastSignTime() { this->agreementLastSignTime_ = nullptr;};
    inline string agreementLastSignTime() const { DARABONBA_PTR_GET_DEFAULT(agreementLastSignTime_, "") };
    inline GetUserLatestPlanResponseBody& setAgreementLastSignTime(string agreementLastSignTime) { DARABONBA_PTR_SET_VALUE(agreementLastSignTime_, agreementLastSignTime) };


    // agreementStatus Field Functions 
    bool hasAgreementStatus() const { return this->agreementStatus_ != nullptr;};
    void deleteAgreementStatus() { this->agreementStatus_ = nullptr;};
    inline int32_t agreementStatus() const { DARABONBA_PTR_GET_DEFAULT(agreementStatus_, 0) };
    inline GetUserLatestPlanResponseBody& setAgreementStatus(int32_t agreementStatus) { DARABONBA_PTR_SET_VALUE(agreementStatus_, agreementStatus) };


    // dataHandleEndTime Field Functions 
    bool hasDataHandleEndTime() const { return this->dataHandleEndTime_ != nullptr;};
    void deleteDataHandleEndTime() { this->dataHandleEndTime_ = nullptr;};
    inline string dataHandleEndTime() const { DARABONBA_PTR_GET_DEFAULT(dataHandleEndTime_, "") };
    inline GetUserLatestPlanResponseBody& setDataHandleEndTime(string dataHandleEndTime) { DARABONBA_PTR_SET_VALUE(dataHandleEndTime_, dataHandleEndTime) };


    // dataHandleStartTime Field Functions 
    bool hasDataHandleStartTime() const { return this->dataHandleStartTime_ != nullptr;};
    void deleteDataHandleStartTime() { this->dataHandleStartTime_ = nullptr;};
    inline string dataHandleStartTime() const { DARABONBA_PTR_GET_DEFAULT(dataHandleStartTime_, "") };
    inline GetUserLatestPlanResponseBody& setDataHandleStartTime(string dataHandleStartTime) { DARABONBA_PTR_SET_VALUE(dataHandleStartTime_, dataHandleStartTime) };


    // dataHandleStatus Field Functions 
    bool hasDataHandleStatus() const { return this->dataHandleStatus_ != nullptr;};
    void deleteDataHandleStatus() { this->dataHandleStatus_ = nullptr;};
    inline int32_t dataHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(dataHandleStatus_, 0) };
    inline GetUserLatestPlanResponseBody& setDataHandleStatus(int32_t dataHandleStatus) { DARABONBA_PTR_SET_VALUE(dataHandleStatus_, dataHandleStatus) };


    // exclusivePlan Field Functions 
    bool hasExclusivePlan() const { return this->exclusivePlan_ != nullptr;};
    void deleteExclusivePlan() { this->exclusivePlan_ = nullptr;};
    inline int32_t exclusivePlan() const { DARABONBA_PTR_GET_DEFAULT(exclusivePlan_, 0) };
    inline GetUserLatestPlanResponseBody& setExclusivePlan(int32_t exclusivePlan) { DARABONBA_PTR_SET_VALUE(exclusivePlan_, exclusivePlan) };


    // newAccountUid Field Functions 
    bool hasNewAccountUid() const { return this->newAccountUid_ != nullptr;};
    void deleteNewAccountUid() { this->newAccountUid_ = nullptr;};
    inline int64_t newAccountUid() const { DARABONBA_PTR_GET_DEFAULT(newAccountUid_, 0L) };
    inline GetUserLatestPlanResponseBody& setNewAccountUid(int64_t newAccountUid) { DARABONBA_PTR_SET_VALUE(newAccountUid_, newAccountUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserLatestPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetUserLatestPlanResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetUserLatestPlanResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetUserLatestPlanResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<int32_t> accountHandleStatus_ = nullptr;
    std::shared_ptr<string> accountHandleTime_ = nullptr;
    std::shared_ptr<int32_t> accountType_ = nullptr;
    std::shared_ptr<string> agreementFirstSignTime_ = nullptr;
    std::shared_ptr<string> agreementLastSignTime_ = nullptr;
    std::shared_ptr<int32_t> agreementStatus_ = nullptr;
    std::shared_ptr<string> dataHandleEndTime_ = nullptr;
    std::shared_ptr<string> dataHandleStartTime_ = nullptr;
    std::shared_ptr<int32_t> dataHandleStatus_ = nullptr;
    std::shared_ptr<int32_t> exclusivePlan_ = nullptr;
    std::shared_ptr<int64_t> newAccountUid_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
