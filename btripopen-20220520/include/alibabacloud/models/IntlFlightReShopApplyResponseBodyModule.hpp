// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopApplyResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_TO_JSON(re_shop_apply_id, reShopApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(async_apply_key, asyncApplyKey_);
      DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_FROM_JSON(re_shop_apply_id, reShopApplyId_);
    };
    IntlFlightReShopApplyResponseBodyModule() = default ;
    IntlFlightReShopApplyResponseBodyModule(const IntlFlightReShopApplyResponseBodyModule &) = default ;
    IntlFlightReShopApplyResponseBodyModule(IntlFlightReShopApplyResponseBodyModule &&) = default ;
    IntlFlightReShopApplyResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopApplyResponseBodyModule() = default ;
    IntlFlightReShopApplyResponseBodyModule& operator=(const IntlFlightReShopApplyResponseBodyModule &) = default ;
    IntlFlightReShopApplyResponseBodyModule& operator=(IntlFlightReShopApplyResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncApplyKey_ != nullptr
        && this->outReShopApplyId_ != nullptr && this->reShopApplyId_ != nullptr; };
    // asyncApplyKey Field Functions 
    bool hasAsyncApplyKey() const { return this->asyncApplyKey_ != nullptr;};
    void deleteAsyncApplyKey() { this->asyncApplyKey_ = nullptr;};
    inline string asyncApplyKey() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyKey_, "") };
    inline IntlFlightReShopApplyResponseBodyModule& setAsyncApplyKey(string asyncApplyKey) { DARABONBA_PTR_SET_VALUE(asyncApplyKey_, asyncApplyKey) };


    // outReShopApplyId Field Functions 
    bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
    void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
    inline string outReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
    inline IntlFlightReShopApplyResponseBodyModule& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


    // reShopApplyId Field Functions 
    bool hasReShopApplyId() const { return this->reShopApplyId_ != nullptr;};
    void deleteReShopApplyId() { this->reShopApplyId_ = nullptr;};
    inline string reShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reShopApplyId_, "") };
    inline IntlFlightReShopApplyResponseBodyModule& setReShopApplyId(string reShopApplyId) { DARABONBA_PTR_SET_VALUE(reShopApplyId_, reShopApplyId) };


  protected:
    std::shared_ptr<string> asyncApplyKey_ = nullptr;
    std::shared_ptr<string> outReShopApplyId_ = nullptr;
    std::shared_ptr<string> reShopApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
