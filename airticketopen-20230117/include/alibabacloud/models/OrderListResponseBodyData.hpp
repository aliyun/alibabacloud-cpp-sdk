// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderListResponseBodyDataList.hpp>
#include <alibabacloud/models/OrderListResponseBodyDataPagination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
    };
    friend void from_json(const Darabonba::Json& j, OrderListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
    };
    OrderListResponseBodyData() = default ;
    OrderListResponseBodyData(const OrderListResponseBodyData &) = default ;
    OrderListResponseBodyData(OrderListResponseBodyData &&) = default ;
    OrderListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderListResponseBodyData() = default ;
    OrderListResponseBodyData& operator=(const OrderListResponseBodyData &) = default ;
    OrderListResponseBodyData& operator=(OrderListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pagination_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::OrderListResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::OrderListResponseBodyDataList>) };
    inline vector<Models::OrderListResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::OrderListResponseBodyDataList>) };
    inline OrderListResponseBodyData& setList(const vector<Models::OrderListResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline OrderListResponseBodyData& setList(vector<Models::OrderListResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline const Models::OrderListResponseBodyDataPagination & pagination() const { DARABONBA_PTR_GET_CONST(pagination_, Models::OrderListResponseBodyDataPagination) };
    inline Models::OrderListResponseBodyDataPagination pagination() { DARABONBA_PTR_GET(pagination_, Models::OrderListResponseBodyDataPagination) };
    inline OrderListResponseBodyData& setPagination(const Models::OrderListResponseBodyDataPagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
    inline OrderListResponseBodyData& setPagination(Models::OrderListResponseBodyDataPagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


  protected:
    // order list
    std::shared_ptr<vector<Models::OrderListResponseBodyDataList>> list_ = nullptr;
    // information of pagination
    std::shared_ptr<Models::OrderListResponseBodyDataPagination> pagination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
