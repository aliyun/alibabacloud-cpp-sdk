// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPURCHASEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPURCHASEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class SubmitPurchaseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPurchaseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(PurchaseCurrency, purchaseCurrency_);
      DARABONBA_PTR_TO_JSON(PurchasePrice, purchasePrice_);
      DARABONBA_PTR_TO_JSON(PurchaseProofs, purchaseProofs_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPurchaseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(PurchaseCurrency, purchaseCurrency_);
      DARABONBA_PTR_FROM_JSON(PurchasePrice, purchasePrice_);
      DARABONBA_PTR_FROM_JSON(PurchaseProofs, purchaseProofs_);
    };
    SubmitPurchaseInfoRequest() = default ;
    SubmitPurchaseInfoRequest(const SubmitPurchaseInfoRequest &) = default ;
    SubmitPurchaseInfoRequest(SubmitPurchaseInfoRequest &&) = default ;
    SubmitPurchaseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPurchaseInfoRequest() = default ;
    SubmitPurchaseInfoRequest& operator=(const SubmitPurchaseInfoRequest &) = default ;
    SubmitPurchaseInfoRequest& operator=(SubmitPurchaseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->purchaseCurrency_ == nullptr && return this->purchasePrice_ == nullptr && return this->purchaseProofs_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SubmitPurchaseInfoRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // purchaseCurrency Field Functions 
    bool hasPurchaseCurrency() const { return this->purchaseCurrency_ != nullptr;};
    void deletePurchaseCurrency() { this->purchaseCurrency_ = nullptr;};
    inline string purchaseCurrency() const { DARABONBA_PTR_GET_DEFAULT(purchaseCurrency_, "") };
    inline SubmitPurchaseInfoRequest& setPurchaseCurrency(string purchaseCurrency) { DARABONBA_PTR_SET_VALUE(purchaseCurrency_, purchaseCurrency) };


    // purchasePrice Field Functions 
    bool hasPurchasePrice() const { return this->purchasePrice_ != nullptr;};
    void deletePurchasePrice() { this->purchasePrice_ = nullptr;};
    inline double purchasePrice() const { DARABONBA_PTR_GET_DEFAULT(purchasePrice_, 0.0) };
    inline SubmitPurchaseInfoRequest& setPurchasePrice(double purchasePrice) { DARABONBA_PTR_SET_VALUE(purchasePrice_, purchasePrice) };


    // purchaseProofs Field Functions 
    bool hasPurchaseProofs() const { return this->purchaseProofs_ != nullptr;};
    void deletePurchaseProofs() { this->purchaseProofs_ = nullptr;};
    inline const vector<string> & purchaseProofs() const { DARABONBA_PTR_GET_CONST(purchaseProofs_, vector<string>) };
    inline vector<string> purchaseProofs() { DARABONBA_PTR_GET(purchaseProofs_, vector<string>) };
    inline SubmitPurchaseInfoRequest& setPurchaseProofs(const vector<string> & purchaseProofs) { DARABONBA_PTR_SET_VALUE(purchaseProofs_, purchaseProofs) };
    inline SubmitPurchaseInfoRequest& setPurchaseProofs(vector<string> && purchaseProofs) { DARABONBA_PTR_SET_RVALUE(purchaseProofs_, purchaseProofs) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> purchaseCurrency_ = nullptr;
    std::shared_ptr<double> purchasePrice_ = nullptr;
    std::shared_ptr<vector<string>> purchaseProofs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
