// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEDDAORDERVO_HPP_
#define ALIBABACLOUD_MODELS_MANAGEDDAORDERVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ManagedDaOrderVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManagedDaOrderVO& obj) { 
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(payNum, payNum_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(subscriptionPlan, subscriptionPlan_);
    };
    friend void from_json(const Darabonba::Json& j, ManagedDaOrderVO& obj) { 
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(payNum, payNum_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(subscriptionPlan, subscriptionPlan_);
    };
    ManagedDaOrderVO() = default ;
    ManagedDaOrderVO(const ManagedDaOrderVO &) = default ;
    ManagedDaOrderVO(ManagedDaOrderVO &&) = default ;
    ManagedDaOrderVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManagedDaOrderVO() = default ;
    ManagedDaOrderVO& operator=(const ManagedDaOrderVO &) = default ;
    ManagedDaOrderVO& operator=(ManagedDaOrderVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->gmtCreate_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr && this->payNum_ == nullptr && this->region_ == nullptr
        && this->state_ == nullptr && this->subscriptionPlan_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ManagedDaOrderVO& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ManagedDaOrderVO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ManagedDaOrderVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ManagedDaOrderVO& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // payNum Field Functions 
    bool hasPayNum() const { return this->payNum_ != nullptr;};
    void deletePayNum() { this->payNum_ = nullptr;};
    inline int32_t getPayNum() const { DARABONBA_PTR_GET_DEFAULT(payNum_, 0) };
    inline ManagedDaOrderVO& setPayNum(int32_t payNum) { DARABONBA_PTR_SET_VALUE(payNum_, payNum) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ManagedDaOrderVO& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ManagedDaOrderVO& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subscriptionPlan Field Functions 
    bool hasSubscriptionPlan() const { return this->subscriptionPlan_ != nullptr;};
    void deleteSubscriptionPlan() { this->subscriptionPlan_ = nullptr;};
    inline string getSubscriptionPlan() const { DARABONBA_PTR_GET_DEFAULT(subscriptionPlan_, "") };
    inline ManagedDaOrderVO& setSubscriptionPlan(string subscriptionPlan) { DARABONBA_PTR_SET_VALUE(subscriptionPlan_, subscriptionPlan) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> expireTime_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<int32_t> payNum_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> subscriptionPlan_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
