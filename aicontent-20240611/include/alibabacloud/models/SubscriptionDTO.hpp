// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONDTO_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class SubscriptionDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionDTO& obj) { 
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(stopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(subscriptionAmount, subscriptionAmount_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(validFrom, validFrom_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(stopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(subscriptionAmount, subscriptionAmount_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(validFrom, validFrom_);
    };
    SubscriptionDTO() = default ;
    SubscriptionDTO(const SubscriptionDTO &) = default ;
    SubscriptionDTO(SubscriptionDTO &&) = default ;
    SubscriptionDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionDTO() = default ;
    SubscriptionDTO& operator=(const SubscriptionDTO &) = default ;
    SubscriptionDTO& operator=(SubscriptionDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceType_ == nullptr
        && this->clientId_ == nullptr && this->createTime_ == nullptr && this->id_ == nullptr && this->status_ == nullptr && this->stopTime_ == nullptr
        && this->subscriptionAmount_ == nullptr && this->updateTime_ == nullptr && this->validFrom_ == nullptr; };
    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline SubscriptionDTO& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline SubscriptionDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SubscriptionDTO& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SubscriptionDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SubscriptionDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline SubscriptionDTO& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // subscriptionAmount Field Functions 
    bool hasSubscriptionAmount() const { return this->subscriptionAmount_ != nullptr;};
    void deleteSubscriptionAmount() { this->subscriptionAmount_ = nullptr;};
    inline double getSubscriptionAmount() const { DARABONBA_PTR_GET_DEFAULT(subscriptionAmount_, 0.0) };
    inline SubscriptionDTO& setSubscriptionAmount(double subscriptionAmount) { DARABONBA_PTR_SET_VALUE(subscriptionAmount_, subscriptionAmount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SubscriptionDTO& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // validFrom Field Functions 
    bool hasValidFrom() const { return this->validFrom_ != nullptr;};
    void deleteValidFrom() { this->validFrom_ = nullptr;};
    inline string getValidFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, "") };
    inline SubscriptionDTO& setValidFrom(string validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


  protected:
    // The balance type (permanent/monthly).
    shared_ptr<string> balanceType_ {};
    // The department ID.
    shared_ptr<int64_t> clientId_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The subscription ID.
    shared_ptr<int64_t> id_ {};
    // The subscription status. Valid values:
    // - active: The subscription is active.
    // - stopped: The subscription is stopped.
    shared_ptr<string> status_ {};
    // The stop time. This value is empty if the subscription has not been stopped.
    shared_ptr<string> stopTime_ {};
    // The subscription recharge amount.
    shared_ptr<double> subscriptionAmount_ {};
    // The update time.
    shared_ptr<string> updateTime_ {};
    // The effective period.
    shared_ptr<string> validFrom_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
