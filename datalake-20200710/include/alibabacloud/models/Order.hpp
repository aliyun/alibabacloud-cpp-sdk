// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDER_HPP_
#define ALIBABACLOUD_MODELS_ORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class Order : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Order& obj) { 
      DARABONBA_PTR_TO_JSON(Col, col_);
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, Order& obj) { 
      DARABONBA_PTR_FROM_JSON(Col, col_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    Order() = default ;
    Order(const Order &) = default ;
    Order(Order &&) = default ;
    Order(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Order() = default ;
    Order& operator=(const Order &) = default ;
    Order& operator=(Order &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->col_ == nullptr
        && return this->order_ == nullptr; };
    // col Field Functions 
    bool hasCol() const { return this->col_ != nullptr;};
    void deleteCol() { this->col_ = nullptr;};
    inline string col() const { DARABONBA_PTR_GET_DEFAULT(col_, "") };
    inline Order& setCol(string col) { DARABONBA_PTR_SET_VALUE(col_, col) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline Order& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


  protected:
    std::shared_ptr<string> col_ = nullptr;
    std::shared_ptr<int32_t> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
