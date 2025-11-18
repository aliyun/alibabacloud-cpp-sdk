// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundApplyResponseBodyDataRefundResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(refund_results, refundResults_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(refund_results, refundResults_);
    };
    RefundApplyResponseBodyData() = default ;
    RefundApplyResponseBodyData(const RefundApplyResponseBodyData &) = default ;
    RefundApplyResponseBodyData(RefundApplyResponseBodyData &&) = default ;
    RefundApplyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyResponseBodyData() = default ;
    RefundApplyResponseBodyData& operator=(const RefundApplyResponseBodyData &) = default ;
    RefundApplyResponseBodyData& operator=(RefundApplyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr
        && return this->refundResults_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline RefundApplyResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // refundResults Field Functions 
    bool hasRefundResults() const { return this->refundResults_ != nullptr;};
    void deleteRefundResults() { this->refundResults_ = nullptr;};
    inline const vector<Models::RefundApplyResponseBodyDataRefundResults> & refundResults() const { DARABONBA_PTR_GET_CONST(refundResults_, vector<Models::RefundApplyResponseBodyDataRefundResults>) };
    inline vector<Models::RefundApplyResponseBodyDataRefundResults> refundResults() { DARABONBA_PTR_GET(refundResults_, vector<Models::RefundApplyResponseBodyDataRefundResults>) };
    inline RefundApplyResponseBodyData& setRefundResults(const vector<Models::RefundApplyResponseBodyDataRefundResults> & refundResults) { DARABONBA_PTR_SET_VALUE(refundResults_, refundResults) };
    inline RefundApplyResponseBodyData& setRefundResults(vector<Models::RefundApplyResponseBodyDataRefundResults> && refundResults) { DARABONBA_PTR_SET_RVALUE(refundResults_, refundResults) };


  protected:
    // Order number
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // List of refund application results
    std::shared_ptr<vector<Models::RefundApplyResponseBodyDataRefundResults>> refundResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
