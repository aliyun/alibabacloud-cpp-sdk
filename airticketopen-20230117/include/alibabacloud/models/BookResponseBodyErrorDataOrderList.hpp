// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKRESPONSEBODYERRORDATAORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_BOOKRESPONSEBODYERRORDATAORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BookResponseBodyErrorDataOrderListOrderAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookResponseBodyErrorDataOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookResponseBodyErrorDataOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(order_attribute, orderAttribute_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, BookResponseBodyErrorDataOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(order_attribute, orderAttribute_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    BookResponseBodyErrorDataOrderList() = default ;
    BookResponseBodyErrorDataOrderList(const BookResponseBodyErrorDataOrderList &) = default ;
    BookResponseBodyErrorDataOrderList(BookResponseBodyErrorDataOrderList &&) = default ;
    BookResponseBodyErrorDataOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookResponseBodyErrorDataOrderList() = default ;
    BookResponseBodyErrorDataOrderList& operator=(const BookResponseBodyErrorDataOrderList &) = default ;
    BookResponseBodyErrorDataOrderList& operator=(BookResponseBodyErrorDataOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderAttribute_ == nullptr
        && return this->orderNum_ == nullptr; };
    // orderAttribute Field Functions 
    bool hasOrderAttribute() const { return this->orderAttribute_ != nullptr;};
    void deleteOrderAttribute() { this->orderAttribute_ = nullptr;};
    inline const Models::BookResponseBodyErrorDataOrderListOrderAttribute & orderAttribute() const { DARABONBA_PTR_GET_CONST(orderAttribute_, Models::BookResponseBodyErrorDataOrderListOrderAttribute) };
    inline Models::BookResponseBodyErrorDataOrderListOrderAttribute orderAttribute() { DARABONBA_PTR_GET(orderAttribute_, Models::BookResponseBodyErrorDataOrderListOrderAttribute) };
    inline BookResponseBodyErrorDataOrderList& setOrderAttribute(const Models::BookResponseBodyErrorDataOrderListOrderAttribute & orderAttribute) { DARABONBA_PTR_SET_VALUE(orderAttribute_, orderAttribute) };
    inline BookResponseBodyErrorDataOrderList& setOrderAttribute(Models::BookResponseBodyErrorDataOrderListOrderAttribute && orderAttribute) { DARABONBA_PTR_SET_RVALUE(orderAttribute_, orderAttribute) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline BookResponseBodyErrorDataOrderList& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    std::shared_ptr<Models::BookResponseBodyErrorDataOrderListOrderAttribute> orderAttribute_ = nullptr;
    // order number
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
