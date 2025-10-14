// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BOOKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BookResponseBodyDataOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(order_list, orderList_);
    };
    friend void from_json(const Darabonba::Json& j, BookResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(order_list, orderList_);
    };
    BookResponseBodyData() = default ;
    BookResponseBodyData(const BookResponseBodyData &) = default ;
    BookResponseBodyData(BookResponseBodyData &&) = default ;
    BookResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookResponseBodyData() = default ;
    BookResponseBodyData& operator=(const BookResponseBodyData &) = default ;
    BookResponseBodyData& operator=(BookResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderList_ == nullptr; };
    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const vector<Models::BookResponseBodyDataOrderList> & orderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<Models::BookResponseBodyDataOrderList>) };
    inline vector<Models::BookResponseBodyDataOrderList> orderList() { DARABONBA_PTR_GET(orderList_, vector<Models::BookResponseBodyDataOrderList>) };
    inline BookResponseBodyData& setOrderList(const vector<Models::BookResponseBodyDataOrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline BookResponseBodyData& setOrderList(vector<Models::BookResponseBodyDataOrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


  protected:
    // order information list
    std::shared_ptr<vector<Models::BookResponseBodyDataOrderList>> orderList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
