// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEMEMBERSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEMEMBERSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateMemberSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateMemberSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateMemberSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(effectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
    };
    ModelRouterCreateMemberSubscriptionRequest() = default ;
    ModelRouterCreateMemberSubscriptionRequest(const ModelRouterCreateMemberSubscriptionRequest &) = default ;
    ModelRouterCreateMemberSubscriptionRequest(ModelRouterCreateMemberSubscriptionRequest &&) = default ;
    ModelRouterCreateMemberSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateMemberSubscriptionRequest() = default ;
    ModelRouterCreateMemberSubscriptionRequest& operator=(const ModelRouterCreateMemberSubscriptionRequest &) = default ;
    ModelRouterCreateMemberSubscriptionRequest& operator=(ModelRouterCreateMemberSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->balanceType_ == nullptr && this->effectiveTime_ == nullptr && this->idempotencyKey_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline ModelRouterCreateMemberSubscriptionRequest& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterCreateMemberSubscriptionRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline int64_t getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, 0L) };
    inline ModelRouterCreateMemberSubscriptionRequest& setEffectiveTime(int64_t effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline ModelRouterCreateMemberSubscriptionRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


  protected:
    // The subscription amount.
    shared_ptr<double> amount_ {};
    // The balance type. Valid values:
    // 
    // - permanent: permanent balance.
    // - monthly: monthly balance.
    shared_ptr<string> balanceType_ {};
    // The effective period in UNIX timestamp (seconds).
    shared_ptr<int64_t> effectiveTime_ {};
    // The idempotency key. UUID v4 format is recommended.
    shared_ptr<string> idempotencyKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
