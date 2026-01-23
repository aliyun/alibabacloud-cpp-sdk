// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDUCTOUTSTANDINGBALANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEDUCTOUTSTANDINGBALANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class DeductOutstandingBalanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeductOutstandingBalanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeductAmount, deductAmount_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, DeductOutstandingBalanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeductAmount, deductAmount_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    DeductOutstandingBalanceRequest() = default ;
    DeductOutstandingBalanceRequest(const DeductOutstandingBalanceRequest &) = default ;
    DeductOutstandingBalanceRequest(DeductOutstandingBalanceRequest &&) = default ;
    DeductOutstandingBalanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeductOutstandingBalanceRequest() = default ;
    DeductOutstandingBalanceRequest& operator=(const DeductOutstandingBalanceRequest &) = default ;
    DeductOutstandingBalanceRequest& operator=(DeductOutstandingBalanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deductAmount_ == nullptr
        && this->uid_ == nullptr; };
    // deductAmount Field Functions 
    bool hasDeductAmount() const { return this->deductAmount_ != nullptr;};
    void deleteDeductAmount() { this->deductAmount_ = nullptr;};
    inline string getDeductAmount() const { DARABONBA_PTR_GET_DEFAULT(deductAmount_, "") };
    inline DeductOutstandingBalanceRequest& setDeductAmount(string deductAmount) { DARABONBA_PTR_SET_VALUE(deductAmount_, deductAmount) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline DeductOutstandingBalanceRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The Deducted Credit to be offset.
    // 
    // This parameter is required.
    shared_ptr<string> deductAmount_ {};
    // Account UID of Distribution Customer.
    // 
    // This parameter is required.
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
