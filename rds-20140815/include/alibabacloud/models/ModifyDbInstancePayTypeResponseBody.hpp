// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEPAYTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEPAYTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstancePayTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstancePayTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstancePayTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    ModifyDBInstancePayTypeResponseBody() = default ;
    ModifyDBInstancePayTypeResponseBody(const ModifyDBInstancePayTypeResponseBody &) = default ;
    ModifyDBInstancePayTypeResponseBody(ModifyDBInstancePayTypeResponseBody &&) = default ;
    ModifyDBInstancePayTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstancePayTypeResponseBody() = default ;
    ModifyDBInstancePayTypeResponseBody& operator=(const ModifyDBInstancePayTypeResponseBody &) = default ;
    ModifyDBInstancePayTypeResponseBody& operator=(ModifyDBInstancePayTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ModifyDBInstancePayTypeResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The order ID.
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
