// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEBALANCETRANSACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEBALANCETRANSACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateBalanceTransactionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateBalanceTransactionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateBalanceTransactionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(idempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelRouterCreateBalanceTransactionRequest() = default ;
    ModelRouterCreateBalanceTransactionRequest(const ModelRouterCreateBalanceTransactionRequest &) = default ;
    ModelRouterCreateBalanceTransactionRequest(ModelRouterCreateBalanceTransactionRequest &&) = default ;
    ModelRouterCreateBalanceTransactionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateBalanceTransactionRequest() = default ;
    ModelRouterCreateBalanceTransactionRequest& operator=(const ModelRouterCreateBalanceTransactionRequest &) = default ;
    ModelRouterCreateBalanceTransactionRequest& operator=(ModelRouterCreateBalanceTransactionRequest &&) = default ;
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
    inline ModelRouterCreateBalanceTransactionRequest& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterCreateBalanceTransactionRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline ModelRouterCreateBalanceTransactionRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModelRouterCreateBalanceTransactionRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelRouterCreateBalanceTransactionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The transaction amount.
    shared_ptr<double> amount_ {};
    // The target balance pool type. Default value: permanent. Valid values:
    // - permanent: permanent balance pool (the amount never expires).
    // - monthly: monthly balance pool (automatically reset to zero at the beginning of each month).
    shared_ptr<string> balanceType_ {};
    // The idempotency key. UUID v4 format is recommended. Maximum length: 32 characters. Repeated submissions with the same key are not executed again.
    shared_ptr<string> idempotencyKey_ {};
    // The remark.
    shared_ptr<string> remark_ {};
    // The transaction type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
