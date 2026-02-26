// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDREASON_HPP_
#define ALIBABACLOUD_MODELS_REFUNDREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RefundReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundReason& obj) { 
      DARABONBA_PTR_TO_JSON(proofRequired, proofRequired_);
      DARABONBA_PTR_TO_JSON(reasonTextId, reasonTextId_);
      DARABONBA_PTR_TO_JSON(reasonTips, reasonTips_);
      DARABONBA_PTR_TO_JSON(refundDescRequired, refundDescRequired_);
    };
    friend void from_json(const Darabonba::Json& j, RefundReason& obj) { 
      DARABONBA_PTR_FROM_JSON(proofRequired, proofRequired_);
      DARABONBA_PTR_FROM_JSON(reasonTextId, reasonTextId_);
      DARABONBA_PTR_FROM_JSON(reasonTips, reasonTips_);
      DARABONBA_PTR_FROM_JSON(refundDescRequired, refundDescRequired_);
    };
    RefundReason() = default ;
    RefundReason(const RefundReason &) = default ;
    RefundReason(RefundReason &&) = default ;
    RefundReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundReason() = default ;
    RefundReason& operator=(const RefundReason &) = default ;
    RefundReason& operator=(RefundReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->proofRequired_ == nullptr
        && this->reasonTextId_ == nullptr && this->reasonTips_ == nullptr && this->refundDescRequired_ == nullptr; };
    // proofRequired Field Functions 
    bool hasProofRequired() const { return this->proofRequired_ != nullptr;};
    void deleteProofRequired() { this->proofRequired_ = nullptr;};
    inline bool getProofRequired() const { DARABONBA_PTR_GET_DEFAULT(proofRequired_, false) };
    inline RefundReason& setProofRequired(bool proofRequired) { DARABONBA_PTR_SET_VALUE(proofRequired_, proofRequired) };


    // reasonTextId Field Functions 
    bool hasReasonTextId() const { return this->reasonTextId_ != nullptr;};
    void deleteReasonTextId() { this->reasonTextId_ = nullptr;};
    inline string getReasonTextId() const { DARABONBA_PTR_GET_DEFAULT(reasonTextId_, "") };
    inline RefundReason& setReasonTextId(string reasonTextId) { DARABONBA_PTR_SET_VALUE(reasonTextId_, reasonTextId) };


    // reasonTips Field Functions 
    bool hasReasonTips() const { return this->reasonTips_ != nullptr;};
    void deleteReasonTips() { this->reasonTips_ = nullptr;};
    inline string getReasonTips() const { DARABONBA_PTR_GET_DEFAULT(reasonTips_, "") };
    inline RefundReason& setReasonTips(string reasonTips) { DARABONBA_PTR_SET_VALUE(reasonTips_, reasonTips) };


    // refundDescRequired Field Functions 
    bool hasRefundDescRequired() const { return this->refundDescRequired_ != nullptr;};
    void deleteRefundDescRequired() { this->refundDescRequired_ = nullptr;};
    inline bool getRefundDescRequired() const { DARABONBA_PTR_GET_DEFAULT(refundDescRequired_, false) };
    inline RefundReason& setRefundDescRequired(bool refundDescRequired) { DARABONBA_PTR_SET_VALUE(refundDescRequired_, refundDescRequired) };


  protected:
    shared_ptr<bool> proofRequired_ {};
    shared_ptr<string> reasonTextId_ {};
    shared_ptr<string> reasonTips_ {};
    shared_ptr<bool> refundDescRequired_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
