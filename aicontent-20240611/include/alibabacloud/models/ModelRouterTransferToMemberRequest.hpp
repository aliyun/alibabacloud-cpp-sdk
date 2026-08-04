// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERTRANSFERTOMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERTRANSFERTOMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterTransferToMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterTransferToMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(monthlyQuota, monthlyQuota_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterTransferToMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(monthlyQuota, monthlyQuota_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    ModelRouterTransferToMemberRequest() = default ;
    ModelRouterTransferToMemberRequest(const ModelRouterTransferToMemberRequest &) = default ;
    ModelRouterTransferToMemberRequest(ModelRouterTransferToMemberRequest &&) = default ;
    ModelRouterTransferToMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterTransferToMemberRequest() = default ;
    ModelRouterTransferToMemberRequest& operator=(const ModelRouterTransferToMemberRequest &) = default ;
    ModelRouterTransferToMemberRequest& operator=(ModelRouterTransferToMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->balanceType_ == nullptr && this->idempotencyKey_ == nullptr && this->monthlyQuota_ == nullptr && this->remark_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline ModelRouterTransferToMemberRequest& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterTransferToMemberRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline ModelRouterTransferToMemberRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // monthlyQuota Field Functions 
    bool hasMonthlyQuota() const { return this->monthlyQuota_ != nullptr;};
    void deleteMonthlyQuota() { this->monthlyQuota_ = nullptr;};
    inline double getMonthlyQuota() const { DARABONBA_PTR_GET_DEFAULT(monthlyQuota_, 0.0) };
    inline ModelRouterTransferToMemberRequest& setMonthlyQuota(double monthlyQuota) { DARABONBA_PTR_SET_VALUE(monthlyQuota_, monthlyQuota) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModelRouterTransferToMemberRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    shared_ptr<double> amount_ {};
    shared_ptr<string> balanceType_ {};
    shared_ptr<string> idempotencyKey_ {};
    shared_ptr<double> monthlyQuota_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
