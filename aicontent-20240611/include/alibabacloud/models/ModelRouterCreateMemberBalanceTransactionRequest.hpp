// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEMEMBERBALANCETRANSACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEMEMBERBALANCETRANSACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateMemberBalanceTransactionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateMemberBalanceTransactionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateMemberBalanceTransactionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelRouterCreateMemberBalanceTransactionRequest() = default ;
    ModelRouterCreateMemberBalanceTransactionRequest(const ModelRouterCreateMemberBalanceTransactionRequest &) = default ;
    ModelRouterCreateMemberBalanceTransactionRequest(ModelRouterCreateMemberBalanceTransactionRequest &&) = default ;
    ModelRouterCreateMemberBalanceTransactionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateMemberBalanceTransactionRequest() = default ;
    ModelRouterCreateMemberBalanceTransactionRequest& operator=(const ModelRouterCreateMemberBalanceTransactionRequest &) = default ;
    ModelRouterCreateMemberBalanceTransactionRequest& operator=(ModelRouterCreateMemberBalanceTransactionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->balanceType_ == nullptr && this->idempotencyKey_ == nullptr && this->remark_ == nullptr && this->type_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline ModelRouterCreateMemberBalanceTransactionRequest& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterCreateMemberBalanceTransactionRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline ModelRouterCreateMemberBalanceTransactionRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModelRouterCreateMemberBalanceTransactionRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelRouterCreateMemberBalanceTransactionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The transaction amount.
    shared_ptr<double> amount_ {};
    // The balance type. Valid values:
    // 
    // - permanent
    // - monthly
    // 
    // Default value: permanent.
    shared_ptr<string> balanceType_ {};
    // The idempotency key. UUID v4 format is recommended.
    shared_ptr<string> idempotencyKey_ {};
    // The remark for the transaction.
    shared_ptr<string> remark_ {};
    // The transaction type. Valid values: recharge, deduct, and transfer.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
