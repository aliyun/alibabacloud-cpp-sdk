// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCASHCOUPONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCASHCOUPONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCashCouponsResponseBodyDataCashCoupon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCashCouponsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCashCouponsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CashCoupon, cashCoupon_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCashCouponsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CashCoupon, cashCoupon_);
    };
    QueryCashCouponsResponseBodyData() = default ;
    QueryCashCouponsResponseBodyData(const QueryCashCouponsResponseBodyData &) = default ;
    QueryCashCouponsResponseBodyData(QueryCashCouponsResponseBodyData &&) = default ;
    QueryCashCouponsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCashCouponsResponseBodyData() = default ;
    QueryCashCouponsResponseBodyData& operator=(const QueryCashCouponsResponseBodyData &) = default ;
    QueryCashCouponsResponseBodyData& operator=(QueryCashCouponsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cashCoupon_ != nullptr; };
    // cashCoupon Field Functions 
    bool hasCashCoupon() const { return this->cashCoupon_ != nullptr;};
    void deleteCashCoupon() { this->cashCoupon_ = nullptr;};
    inline const vector<Models::QueryCashCouponsResponseBodyDataCashCoupon> & cashCoupon() const { DARABONBA_PTR_GET_CONST(cashCoupon_, vector<Models::QueryCashCouponsResponseBodyDataCashCoupon>) };
    inline vector<Models::QueryCashCouponsResponseBodyDataCashCoupon> cashCoupon() { DARABONBA_PTR_GET(cashCoupon_, vector<Models::QueryCashCouponsResponseBodyDataCashCoupon>) };
    inline QueryCashCouponsResponseBodyData& setCashCoupon(const vector<Models::QueryCashCouponsResponseBodyDataCashCoupon> & cashCoupon) { DARABONBA_PTR_SET_VALUE(cashCoupon_, cashCoupon) };
    inline QueryCashCouponsResponseBodyData& setCashCoupon(vector<Models::QueryCashCouponsResponseBodyDataCashCoupon> && cashCoupon) { DARABONBA_PTR_SET_RVALUE(cashCoupon_, cashCoupon) };


  protected:
    std::shared_ptr<vector<Models::QueryCashCouponsResponseBodyDataCashCoupon>> cashCoupon_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
