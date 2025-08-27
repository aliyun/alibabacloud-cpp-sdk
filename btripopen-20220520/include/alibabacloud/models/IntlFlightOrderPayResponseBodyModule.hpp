// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERPAYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERPAYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderPayResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderPayResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(actual_pay_price, actualPayPrice_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderPayResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(actual_pay_price, actualPayPrice_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
    };
    IntlFlightOrderPayResponseBodyModule() = default ;
    IntlFlightOrderPayResponseBodyModule(const IntlFlightOrderPayResponseBodyModule &) = default ;
    IntlFlightOrderPayResponseBodyModule(IntlFlightOrderPayResponseBodyModule &&) = default ;
    IntlFlightOrderPayResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderPayResponseBodyModule() = default ;
    IntlFlightOrderPayResponseBodyModule& operator=(const IntlFlightOrderPayResponseBodyModule &) = default ;
    IntlFlightOrderPayResponseBodyModule& operator=(IntlFlightOrderPayResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualPayPrice_ != nullptr
        && this->payStatus_ != nullptr; };
    // actualPayPrice Field Functions 
    bool hasActualPayPrice() const { return this->actualPayPrice_ != nullptr;};
    void deleteActualPayPrice() { this->actualPayPrice_ = nullptr;};
    inline int64_t actualPayPrice() const { DARABONBA_PTR_GET_DEFAULT(actualPayPrice_, 0L) };
    inline IntlFlightOrderPayResponseBodyModule& setActualPayPrice(int64_t actualPayPrice) { DARABONBA_PTR_SET_VALUE(actualPayPrice_, actualPayPrice) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline IntlFlightOrderPayResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


  protected:
    std::shared_ptr<int64_t> actualPayPrice_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
