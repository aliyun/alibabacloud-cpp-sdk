// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(subscriptionAmount, subscriptionAmount_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(subscriptionAmount, subscriptionAmount_);
    };
    ModelRouterCreateSubscriptionRequest() = default ;
    ModelRouterCreateSubscriptionRequest(const ModelRouterCreateSubscriptionRequest &) = default ;
    ModelRouterCreateSubscriptionRequest(ModelRouterCreateSubscriptionRequest &&) = default ;
    ModelRouterCreateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateSubscriptionRequest() = default ;
    ModelRouterCreateSubscriptionRequest& operator=(const ModelRouterCreateSubscriptionRequest &) = default ;
    ModelRouterCreateSubscriptionRequest& operator=(ModelRouterCreateSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceType_ == nullptr
        && this->effectiveTime_ == nullptr && this->idempotencyKey_ == nullptr && this->subscriptionAmount_ == nullptr; };
    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterCreateSubscriptionRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline int64_t getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, 0L) };
    inline ModelRouterCreateSubscriptionRequest& setEffectiveTime(int64_t effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline ModelRouterCreateSubscriptionRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // subscriptionAmount Field Functions 
    bool hasSubscriptionAmount() const { return this->subscriptionAmount_ != nullptr;};
    void deleteSubscriptionAmount() { this->subscriptionAmount_ = nullptr;};
    inline double getSubscriptionAmount() const { DARABONBA_PTR_GET_DEFAULT(subscriptionAmount_, 0.0) };
    inline ModelRouterCreateSubscriptionRequest& setSubscriptionAmount(double subscriptionAmount) { DARABONBA_PTR_SET_VALUE(subscriptionAmount_, subscriptionAmount) };


  protected:
    shared_ptr<string> balanceType_ {};
    shared_ptr<int64_t> effectiveTime_ {};
    shared_ptr<string> idempotencyKey_ {};
    shared_ptr<double> subscriptionAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
