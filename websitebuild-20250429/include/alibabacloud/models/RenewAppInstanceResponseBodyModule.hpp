// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWAPPINSTANCERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_RENEWAPPINSTANCERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RenewAppInstanceResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAppInstanceResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAppInstanceResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    RenewAppInstanceResponseBodyModule() = default ;
    RenewAppInstanceResponseBodyModule(const RenewAppInstanceResponseBodyModule &) = default ;
    RenewAppInstanceResponseBodyModule(RenewAppInstanceResponseBodyModule &&) = default ;
    RenewAppInstanceResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAppInstanceResponseBodyModule() = default ;
    RenewAppInstanceResponseBodyModule& operator=(const RenewAppInstanceResponseBodyModule &) = default ;
    RenewAppInstanceResponseBodyModule& operator=(RenewAppInstanceResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RenewAppInstanceResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
