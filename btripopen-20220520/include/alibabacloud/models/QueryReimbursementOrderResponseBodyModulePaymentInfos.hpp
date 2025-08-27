// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEPAYMENTINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEPAYMENTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryReimbursementOrderResponseBodyModulePaymentInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderResponseBodyModulePaymentInfos& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(payee_user_id, payeeUserId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderResponseBodyModulePaymentInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(payee_user_id, payeeUserId_);
    };
    QueryReimbursementOrderResponseBodyModulePaymentInfos() = default ;
    QueryReimbursementOrderResponseBodyModulePaymentInfos(const QueryReimbursementOrderResponseBodyModulePaymentInfos &) = default ;
    QueryReimbursementOrderResponseBodyModulePaymentInfos(QueryReimbursementOrderResponseBodyModulePaymentInfos &&) = default ;
    QueryReimbursementOrderResponseBodyModulePaymentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderResponseBodyModulePaymentInfos() = default ;
    QueryReimbursementOrderResponseBodyModulePaymentInfos& operator=(const QueryReimbursementOrderResponseBodyModulePaymentInfos &) = default ;
    QueryReimbursementOrderResponseBodyModulePaymentInfos& operator=(QueryReimbursementOrderResponseBodyModulePaymentInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->payeeUserId_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline QueryReimbursementOrderResponseBodyModulePaymentInfos& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // payeeUserId Field Functions 
    bool hasPayeeUserId() const { return this->payeeUserId_ != nullptr;};
    void deletePayeeUserId() { this->payeeUserId_ = nullptr;};
    inline string payeeUserId() const { DARABONBA_PTR_GET_DEFAULT(payeeUserId_, "") };
    inline QueryReimbursementOrderResponseBodyModulePaymentInfos& setPayeeUserId(string payeeUserId) { DARABONBA_PTR_SET_VALUE(payeeUserId_, payeeUserId) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> payeeUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
