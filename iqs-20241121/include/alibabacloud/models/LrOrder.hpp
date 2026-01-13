// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LRORDER_HPP_
#define ALIBABACLOUD_MODELS_LRORDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AccountCredentialDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class LrOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LrOrder& obj) { 
      DARABONBA_PTR_TO_JSON(accountCredentials, accountCredentials_);
      DARABONBA_PTR_TO_JSON(aliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(commodityId, commodityId_);
      DARABONBA_PTR_TO_JSON(commoditySpec, commoditySpec_);
      DARABONBA_PTR_TO_JSON(customerName, customerName_);
      DARABONBA_PTR_TO_JSON(eventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(orderCategory, orderCategory_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(qps, qps_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, LrOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(accountCredentials, accountCredentials_);
      DARABONBA_PTR_FROM_JSON(aliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(commodityId, commodityId_);
      DARABONBA_PTR_FROM_JSON(commoditySpec, commoditySpec_);
      DARABONBA_PTR_FROM_JSON(customerName, customerName_);
      DARABONBA_PTR_FROM_JSON(eventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(orderCategory, orderCategory_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(qps, qps_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    LrOrder() = default ;
    LrOrder(const LrOrder &) = default ;
    LrOrder(LrOrder &&) = default ;
    LrOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LrOrder() = default ;
    LrOrder& operator=(const LrOrder &) = default ;
    LrOrder& operator=(LrOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountCredentials_ == nullptr
        && this->aliUid_ == nullptr && this->commodityCode_ == nullptr && this->commodityId_ == nullptr && this->commoditySpec_ == nullptr && this->customerName_ == nullptr
        && this->eventTime_ == nullptr && this->expirationTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->instanceId_ == nullptr
        && this->orderCategory_ == nullptr && this->orderId_ == nullptr && this->qps_ == nullptr && this->status_ == nullptr; };
    // accountCredentials Field Functions 
    bool hasAccountCredentials() const { return this->accountCredentials_ != nullptr;};
    void deleteAccountCredentials() { this->accountCredentials_ = nullptr;};
    inline const vector<AccountCredentialDTO> & getAccountCredentials() const { DARABONBA_PTR_GET_CONST(accountCredentials_, vector<AccountCredentialDTO>) };
    inline vector<AccountCredentialDTO> getAccountCredentials() { DARABONBA_PTR_GET(accountCredentials_, vector<AccountCredentialDTO>) };
    inline LrOrder& setAccountCredentials(const vector<AccountCredentialDTO> & accountCredentials) { DARABONBA_PTR_SET_VALUE(accountCredentials_, accountCredentials) };
    inline LrOrder& setAccountCredentials(vector<AccountCredentialDTO> && accountCredentials) { DARABONBA_PTR_SET_RVALUE(accountCredentials_, accountCredentials) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline LrOrder& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline LrOrder& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityId Field Functions 
    bool hasCommodityId() const { return this->commodityId_ != nullptr;};
    void deleteCommodityId() { this->commodityId_ = nullptr;};
    inline string getCommodityId() const { DARABONBA_PTR_GET_DEFAULT(commodityId_, "") };
    inline LrOrder& setCommodityId(string commodityId) { DARABONBA_PTR_SET_VALUE(commodityId_, commodityId) };


    // commoditySpec Field Functions 
    bool hasCommoditySpec() const { return this->commoditySpec_ != nullptr;};
    void deleteCommoditySpec() { this->commoditySpec_ = nullptr;};
    inline string getCommoditySpec() const { DARABONBA_PTR_GET_DEFAULT(commoditySpec_, "") };
    inline LrOrder& setCommoditySpec(string commoditySpec) { DARABONBA_PTR_SET_VALUE(commoditySpec_, commoditySpec) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline LrOrder& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline LrOrder& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
    inline LrOrder& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline LrOrder& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline LrOrder& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LrOrder& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderCategory Field Functions 
    bool hasOrderCategory() const { return this->orderCategory_ != nullptr;};
    void deleteOrderCategory() { this->orderCategory_ = nullptr;};
    inline string getOrderCategory() const { DARABONBA_PTR_GET_DEFAULT(orderCategory_, "") };
    inline LrOrder& setOrderCategory(string orderCategory) { DARABONBA_PTR_SET_VALUE(orderCategory_, orderCategory) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline LrOrder& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int32_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
    inline LrOrder& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline LrOrder& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<vector<AccountCredentialDTO>> accountCredentials_ {};
    shared_ptr<string> aliUid_ {};
    shared_ptr<string> commodityCode_ {};
    shared_ptr<string> commodityId_ {};
    shared_ptr<string> commoditySpec_ {};
    shared_ptr<string> customerName_ {};
    shared_ptr<string> eventTime_ {};
    shared_ptr<string> expirationTime_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> orderCategory_ {};
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<int32_t> qps_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
