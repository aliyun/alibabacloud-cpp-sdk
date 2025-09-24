// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RENEWINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class RenewInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    RenewInstanceResponseBodyData() = default ;
    RenewInstanceResponseBodyData(const RenewInstanceResponseBodyData &) = default ;
    RenewInstanceResponseBodyData(RenewInstanceResponseBodyData &&) = default ;
    RenewInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewInstanceResponseBodyData() = default ;
    RenewInstanceResponseBodyData& operator=(const RenewInstanceResponseBodyData &) = default ;
    RenewInstanceResponseBodyData& operator=(RenewInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RenewInstanceResponseBodyData& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
