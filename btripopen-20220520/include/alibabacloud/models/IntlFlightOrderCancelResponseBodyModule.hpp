// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERCANCELRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERCANCELRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderCancelResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderCancelResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_time, cancelTime_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderCancelResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_time, cancelTime_);
    };
    IntlFlightOrderCancelResponseBodyModule() = default ;
    IntlFlightOrderCancelResponseBodyModule(const IntlFlightOrderCancelResponseBodyModule &) = default ;
    IntlFlightOrderCancelResponseBodyModule(IntlFlightOrderCancelResponseBodyModule &&) = default ;
    IntlFlightOrderCancelResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderCancelResponseBodyModule() = default ;
    IntlFlightOrderCancelResponseBodyModule& operator=(const IntlFlightOrderCancelResponseBodyModule &) = default ;
    IntlFlightOrderCancelResponseBodyModule& operator=(IntlFlightOrderCancelResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelTime_ != nullptr; };
    // cancelTime Field Functions 
    bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
    void deleteCancelTime() { this->cancelTime_ = nullptr;};
    inline string cancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, "") };
    inline IntlFlightOrderCancelResponseBodyModule& setCancelTime(string cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


  protected:
    std::shared_ptr<string> cancelTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
