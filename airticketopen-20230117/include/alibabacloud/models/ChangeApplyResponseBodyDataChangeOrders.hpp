// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYRESPONSEBODYDATACHANGEORDERS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYRESPONSEBODYDATACHANGEORDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeApplyResponseBodyDataChangeOrdersPassengers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeApplyResponseBodyDataChangeOrders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyResponseBodyDataChangeOrders& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_TO_JSON(change_order_status, changeOrderStatus_);
      DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
      DARABONBA_PTR_TO_JSON(passengers, passengers_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyResponseBodyDataChangeOrders& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_FROM_JSON(change_order_status, changeOrderStatus_);
      DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
      DARABONBA_PTR_FROM_JSON(passengers, passengers_);
    };
    ChangeApplyResponseBodyDataChangeOrders() = default ;
    ChangeApplyResponseBodyDataChangeOrders(const ChangeApplyResponseBodyDataChangeOrders &) = default ;
    ChangeApplyResponseBodyDataChangeOrders(ChangeApplyResponseBodyDataChangeOrders &&) = default ;
    ChangeApplyResponseBodyDataChangeOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyResponseBodyDataChangeOrders() = default ;
    ChangeApplyResponseBodyDataChangeOrders& operator=(const ChangeApplyResponseBodyDataChangeOrders &) = default ;
    ChangeApplyResponseBodyDataChangeOrders& operator=(ChangeApplyResponseBodyDataChangeOrders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderNum_ == nullptr
        && return this->changeOrderStatus_ == nullptr && return this->failReason_ == nullptr && return this->passengers_ == nullptr; };
    // changeOrderNum Field Functions 
    bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
    void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
    inline int64_t changeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
    inline ChangeApplyResponseBodyDataChangeOrders& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


    // changeOrderStatus Field Functions 
    bool hasChangeOrderStatus() const { return this->changeOrderStatus_ != nullptr;};
    void deleteChangeOrderStatus() { this->changeOrderStatus_ = nullptr;};
    inline int32_t changeOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(changeOrderStatus_, 0) };
    inline ChangeApplyResponseBodyDataChangeOrders& setChangeOrderStatus(int32_t changeOrderStatus) { DARABONBA_PTR_SET_VALUE(changeOrderStatus_, changeOrderStatus) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline ChangeApplyResponseBodyDataChangeOrders& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // passengers Field Functions 
    bool hasPassengers() const { return this->passengers_ != nullptr;};
    void deletePassengers() { this->passengers_ = nullptr;};
    inline const vector<Models::ChangeApplyResponseBodyDataChangeOrdersPassengers> & passengers() const { DARABONBA_PTR_GET_CONST(passengers_, vector<Models::ChangeApplyResponseBodyDataChangeOrdersPassengers>) };
    inline vector<Models::ChangeApplyResponseBodyDataChangeOrdersPassengers> passengers() { DARABONBA_PTR_GET(passengers_, vector<Models::ChangeApplyResponseBodyDataChangeOrdersPassengers>) };
    inline ChangeApplyResponseBodyDataChangeOrders& setPassengers(const vector<Models::ChangeApplyResponseBodyDataChangeOrdersPassengers> & passengers) { DARABONBA_PTR_SET_VALUE(passengers_, passengers) };
    inline ChangeApplyResponseBodyDataChangeOrders& setPassengers(vector<Models::ChangeApplyResponseBodyDataChangeOrdersPassengers> && passengers) { DARABONBA_PTR_SET_RVALUE(passengers_, passengers) };


  protected:
    std::shared_ptr<int64_t> changeOrderNum_ = nullptr;
    std::shared_ptr<int32_t> changeOrderStatus_ = nullptr;
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<vector<Models::ChangeApplyResponseBodyDataChangeOrdersPassengers>> passengers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
