// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
    };
    OrderDetailRequest() = default ;
    OrderDetailRequest(const OrderDetailRequest &) = default ;
    OrderDetailRequest(OrderDetailRequest &&) = default ;
    OrderDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailRequest() = default ;
    OrderDetailRequest& operator=(const OrderDetailRequest &) = default ;
    OrderDetailRequest& operator=(OrderDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr
        && return this->outOrderNum_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline OrderDetailRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // outOrderNum Field Functions 
    bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
    void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
    inline string outOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
    inline OrderDetailRequest& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


  protected:
    // order number created by book
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // external order number(customized by buyer when book)
    std::shared_ptr<string> outOrderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
