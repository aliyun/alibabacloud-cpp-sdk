// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEORDERCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEORDERCREATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class PurchaseOrderCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseOrderCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(purchaseOrderId, purchaseOrderId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseOrderCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(purchaseOrderId, purchaseOrderId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PurchaseOrderCreateResult() = default ;
    PurchaseOrderCreateResult(const PurchaseOrderCreateResult &) = default ;
    PurchaseOrderCreateResult(PurchaseOrderCreateResult &&) = default ;
    PurchaseOrderCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseOrderCreateResult() = default ;
    PurchaseOrderCreateResult& operator=(const PurchaseOrderCreateResult &) = default ;
    PurchaseOrderCreateResult& operator=(PurchaseOrderCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->purchaseOrderId_ == nullptr
        && this->requestId_ == nullptr; };
    // purchaseOrderId Field Functions 
    bool hasPurchaseOrderId() const { return this->purchaseOrderId_ != nullptr;};
    void deletePurchaseOrderId() { this->purchaseOrderId_ = nullptr;};
    inline string getPurchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(purchaseOrderId_, "") };
    inline PurchaseOrderCreateResult& setPurchaseOrderId(string purchaseOrderId) { DARABONBA_PTR_SET_VALUE(purchaseOrderId_, purchaseOrderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurchaseOrderCreateResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> purchaseOrderId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
