// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAVINGSPLANSINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESAVINGSPLANSINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateSavingsPlansInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSavingsPlansInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSavingsPlansInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    CreateSavingsPlansInstanceResponseBodyData() = default ;
    CreateSavingsPlansInstanceResponseBodyData(const CreateSavingsPlansInstanceResponseBodyData &) = default ;
    CreateSavingsPlansInstanceResponseBodyData(CreateSavingsPlansInstanceResponseBodyData &&) = default ;
    CreateSavingsPlansInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSavingsPlansInstanceResponseBodyData() = default ;
    CreateSavingsPlansInstanceResponseBodyData& operator=(const CreateSavingsPlansInstanceResponseBodyData &) = default ;
    CreateSavingsPlansInstanceResponseBodyData& operator=(CreateSavingsPlansInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateSavingsPlansInstanceResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The ID of the order.
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
