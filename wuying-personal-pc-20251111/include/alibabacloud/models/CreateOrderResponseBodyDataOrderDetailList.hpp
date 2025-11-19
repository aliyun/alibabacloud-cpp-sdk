// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODYDATAORDERDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODYDATAORDERDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class CreateOrderResponseBodyDataOrderDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderResponseBodyDataOrderDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderResponseBodyDataOrderDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    CreateOrderResponseBodyDataOrderDetailList() = default ;
    CreateOrderResponseBodyDataOrderDetailList(const CreateOrderResponseBodyDataOrderDetailList &) = default ;
    CreateOrderResponseBodyDataOrderDetailList(CreateOrderResponseBodyDataOrderDetailList &&) = default ;
    CreateOrderResponseBodyDataOrderDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderResponseBodyDataOrderDetailList() = default ;
    CreateOrderResponseBodyDataOrderDetailList& operator=(const CreateOrderResponseBodyDataOrderDetailList &) = default ;
    CreateOrderResponseBodyDataOrderDetailList& operator=(CreateOrderResponseBodyDataOrderDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && return this->orderId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateOrderResponseBodyDataOrderDetailList& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateOrderResponseBodyDataOrderDetailList& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateOrderResponseBodyDataOrderDetailList& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
