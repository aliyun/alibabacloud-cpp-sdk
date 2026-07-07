// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMDISBURSECMD_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMDISBURSECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ConfirmDisburseCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmDisburseCmd& obj) { 
      DARABONBA_PTR_TO_JSON(disputeId, disputeId_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(purchaseOrderId, purchaseOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmDisburseCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(disputeId, disputeId_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(purchaseOrderId, purchaseOrderId_);
    };
    ConfirmDisburseCmd() = default ;
    ConfirmDisburseCmd(const ConfirmDisburseCmd &) = default ;
    ConfirmDisburseCmd(ConfirmDisburseCmd &&) = default ;
    ConfirmDisburseCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmDisburseCmd() = default ;
    ConfirmDisburseCmd& operator=(const ConfirmDisburseCmd &) = default ;
    ConfirmDisburseCmd& operator=(ConfirmDisburseCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disputeId_ == nullptr
        && this->orderId_ == nullptr && this->purchaseOrderId_ == nullptr; };
    // disputeId Field Functions 
    bool hasDisputeId() const { return this->disputeId_ != nullptr;};
    void deleteDisputeId() { this->disputeId_ = nullptr;};
    inline string getDisputeId() const { DARABONBA_PTR_GET_DEFAULT(disputeId_, "") };
    inline ConfirmDisburseCmd& setDisputeId(string disputeId) { DARABONBA_PTR_SET_VALUE(disputeId_, disputeId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ConfirmDisburseCmd& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // purchaseOrderId Field Functions 
    bool hasPurchaseOrderId() const { return this->purchaseOrderId_ != nullptr;};
    void deletePurchaseOrderId() { this->purchaseOrderId_ = nullptr;};
    inline string getPurchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(purchaseOrderId_, "") };
    inline ConfirmDisburseCmd& setPurchaseOrderId(string purchaseOrderId) { DARABONBA_PTR_SET_VALUE(purchaseOrderId_, purchaseOrderId) };


  protected:
    shared_ptr<string> disputeId_ {};
    // The primary distribution order ID.
    shared_ptr<string> orderId_ {};
    // The distribution transaction ID.
    shared_ptr<string> purchaseOrderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
