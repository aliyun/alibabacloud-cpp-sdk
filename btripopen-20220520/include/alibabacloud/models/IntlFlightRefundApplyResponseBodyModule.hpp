// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundApplyResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
    };
    IntlFlightRefundApplyResponseBodyModule() = default ;
    IntlFlightRefundApplyResponseBodyModule(const IntlFlightRefundApplyResponseBodyModule &) = default ;
    IntlFlightRefundApplyResponseBodyModule(IntlFlightRefundApplyResponseBodyModule &&) = default ;
    IntlFlightRefundApplyResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundApplyResponseBodyModule() = default ;
    IntlFlightRefundApplyResponseBodyModule& operator=(const IntlFlightRefundApplyResponseBodyModule &) = default ;
    IntlFlightRefundApplyResponseBodyModule& operator=(IntlFlightRefundApplyResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outRefundApplyId_ != nullptr
        && this->refundApplyId_ != nullptr; };
    // outRefundApplyId Field Functions 
    bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
    void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
    inline string outRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
    inline IntlFlightRefundApplyResponseBodyModule& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline string refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
    inline IntlFlightRefundApplyResponseBodyModule& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


  protected:
    std::shared_ptr<string> outRefundApplyId_ = nullptr;
    std::shared_ptr<string> refundApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
