// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKRESPONSEBODYERRORDATA_HPP_
#define ALIBABACLOUD_MODELS_BOOKRESPONSEBODYERRORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BookResponseBodyErrorDataOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookResponseBodyErrorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookResponseBodyErrorData& obj) { 
      DARABONBA_PTR_TO_JSON(order_list, orderList_);
    };
    friend void from_json(const Darabonba::Json& j, BookResponseBodyErrorData& obj) { 
      DARABONBA_PTR_FROM_JSON(order_list, orderList_);
    };
    BookResponseBodyErrorData() = default ;
    BookResponseBodyErrorData(const BookResponseBodyErrorData &) = default ;
    BookResponseBodyErrorData(BookResponseBodyErrorData &&) = default ;
    BookResponseBodyErrorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookResponseBodyErrorData() = default ;
    BookResponseBodyErrorData& operator=(const BookResponseBodyErrorData &) = default ;
    BookResponseBodyErrorData& operator=(BookResponseBodyErrorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderList_ == nullptr; };
    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const vector<Models::BookResponseBodyErrorDataOrderList> & orderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<Models::BookResponseBodyErrorDataOrderList>) };
    inline vector<Models::BookResponseBodyErrorDataOrderList> orderList() { DARABONBA_PTR_GET(orderList_, vector<Models::BookResponseBodyErrorDataOrderList>) };
    inline BookResponseBodyErrorData& setOrderList(const vector<Models::BookResponseBodyErrorDataOrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline BookResponseBodyErrorData& setOrderList(vector<Models::BookResponseBodyErrorDataOrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


  protected:
    // order information list. When the same input parameters are used to repeat a Book, if the booking has already been successful, the order number will be returned.
    std::shared_ptr<vector<Models::BookResponseBodyErrorDataOrderList>> orderList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
