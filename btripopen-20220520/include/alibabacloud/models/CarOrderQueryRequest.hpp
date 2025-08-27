// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CARORDERQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
    };
    CarOrderQueryRequest() = default ;
    CarOrderQueryRequest(const CarOrderQueryRequest &) = default ;
    CarOrderQueryRequest(CarOrderQueryRequest &&) = default ;
    CarOrderQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderQueryRequest() = default ;
    CarOrderQueryRequest& operator=(const CarOrderQueryRequest &) = default ;
    CarOrderQueryRequest& operator=(CarOrderQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->subOrderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CarOrderQueryRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline int64_t subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
    inline CarOrderQueryRequest& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


  protected:
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int64_t> subOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
