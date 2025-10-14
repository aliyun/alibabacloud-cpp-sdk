// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeApplyResponseBodyDataChangeOrders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeApplyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(change_orders, changeOrders_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(change_orders, changeOrders_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    ChangeApplyResponseBodyData() = default ;
    ChangeApplyResponseBodyData(const ChangeApplyResponseBodyData &) = default ;
    ChangeApplyResponseBodyData(ChangeApplyResponseBodyData &&) = default ;
    ChangeApplyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyResponseBodyData() = default ;
    ChangeApplyResponseBodyData& operator=(const ChangeApplyResponseBodyData &) = default ;
    ChangeApplyResponseBodyData& operator=(ChangeApplyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrders_ == nullptr
        && return this->orderNum_ == nullptr; };
    // changeOrders Field Functions 
    bool hasChangeOrders() const { return this->changeOrders_ != nullptr;};
    void deleteChangeOrders() { this->changeOrders_ = nullptr;};
    inline const vector<Models::ChangeApplyResponseBodyDataChangeOrders> & changeOrders() const { DARABONBA_PTR_GET_CONST(changeOrders_, vector<Models::ChangeApplyResponseBodyDataChangeOrders>) };
    inline vector<Models::ChangeApplyResponseBodyDataChangeOrders> changeOrders() { DARABONBA_PTR_GET(changeOrders_, vector<Models::ChangeApplyResponseBodyDataChangeOrders>) };
    inline ChangeApplyResponseBodyData& setChangeOrders(const vector<Models::ChangeApplyResponseBodyDataChangeOrders> & changeOrders) { DARABONBA_PTR_SET_VALUE(changeOrders_, changeOrders) };
    inline ChangeApplyResponseBodyData& setChangeOrders(vector<Models::ChangeApplyResponseBodyDataChangeOrders> && changeOrders) { DARABONBA_PTR_SET_RVALUE(changeOrders_, changeOrders) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline ChangeApplyResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    std::shared_ptr<vector<Models::ChangeApplyResponseBodyDataChangeOrders>> changeOrders_ = nullptr;
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
