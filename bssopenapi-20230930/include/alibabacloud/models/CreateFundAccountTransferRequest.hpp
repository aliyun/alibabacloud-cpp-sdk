// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTTRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTTRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateFundAccountTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFundAccountTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(FinanceType, financeType_);
      DARABONBA_PTR_TO_JSON(FromFundAccountId, fromFundAccountId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ToFundAccountId, toFundAccountId_);
      DARABONBA_PTR_TO_JSON(TransferType, transferType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFundAccountTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(FinanceType, financeType_);
      DARABONBA_PTR_FROM_JSON(FromFundAccountId, fromFundAccountId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ToFundAccountId, toFundAccountId_);
      DARABONBA_PTR_FROM_JSON(TransferType, transferType_);
    };
    CreateFundAccountTransferRequest() = default ;
    CreateFundAccountTransferRequest(const CreateFundAccountTransferRequest &) = default ;
    CreateFundAccountTransferRequest(CreateFundAccountTransferRequest &&) = default ;
    CreateFundAccountTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFundAccountTransferRequest() = default ;
    CreateFundAccountTransferRequest& operator=(const CreateFundAccountTransferRequest &) = default ;
    CreateFundAccountTransferRequest& operator=(CreateFundAccountTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->currency_ != nullptr && this->financeType_ != nullptr && this->fromFundAccountId_ != nullptr && this->remark_ != nullptr && this->toFundAccountId_ != nullptr
        && this->transferType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline CreateFundAccountTransferRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline CreateFundAccountTransferRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // financeType Field Functions 
    bool hasFinanceType() const { return this->financeType_ != nullptr;};
    void deleteFinanceType() { this->financeType_ = nullptr;};
    inline string financeType() const { DARABONBA_PTR_GET_DEFAULT(financeType_, "") };
    inline CreateFundAccountTransferRequest& setFinanceType(string financeType) { DARABONBA_PTR_SET_VALUE(financeType_, financeType) };


    // fromFundAccountId Field Functions 
    bool hasFromFundAccountId() const { return this->fromFundAccountId_ != nullptr;};
    void deleteFromFundAccountId() { this->fromFundAccountId_ = nullptr;};
    inline int64_t fromFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fromFundAccountId_, 0L) };
    inline CreateFundAccountTransferRequest& setFromFundAccountId(int64_t fromFundAccountId) { DARABONBA_PTR_SET_VALUE(fromFundAccountId_, fromFundAccountId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateFundAccountTransferRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // toFundAccountId Field Functions 
    bool hasToFundAccountId() const { return this->toFundAccountId_ != nullptr;};
    void deleteToFundAccountId() { this->toFundAccountId_ = nullptr;};
    inline int64_t toFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(toFundAccountId_, 0L) };
    inline CreateFundAccountTransferRequest& setToFundAccountId(int64_t toFundAccountId) { DARABONBA_PTR_SET_VALUE(toFundAccountId_, toFundAccountId) };


    // transferType Field Functions 
    bool hasTransferType() const { return this->transferType_ != nullptr;};
    void deleteTransferType() { this->transferType_ = nullptr;};
    inline string transferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
    inline CreateFundAccountTransferRequest& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> amount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> financeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> fromFundAccountId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> toFundAccountId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transferType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
