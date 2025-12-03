// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONSCOUPONTRADETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTRESPONSEBODYCOUPONSCOUPONTRADETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class DescribeCouponListResponseBodyCouponsCouponTradeTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponListResponseBodyCouponsCouponTradeTypes& obj) { 
      DARABONBA_PTR_TO_JSON(TradeType, tradeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponListResponseBodyCouponsCouponTradeTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(TradeType, tradeType_);
    };
    DescribeCouponListResponseBodyCouponsCouponTradeTypes() = default ;
    DescribeCouponListResponseBodyCouponsCouponTradeTypes(const DescribeCouponListResponseBodyCouponsCouponTradeTypes &) = default ;
    DescribeCouponListResponseBodyCouponsCouponTradeTypes(DescribeCouponListResponseBodyCouponsCouponTradeTypes &&) = default ;
    DescribeCouponListResponseBodyCouponsCouponTradeTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponListResponseBodyCouponsCouponTradeTypes() = default ;
    DescribeCouponListResponseBodyCouponsCouponTradeTypes& operator=(const DescribeCouponListResponseBodyCouponsCouponTradeTypes &) = default ;
    DescribeCouponListResponseBodyCouponsCouponTradeTypes& operator=(DescribeCouponListResponseBodyCouponsCouponTradeTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tradeType_ == nullptr; };
    // tradeType Field Functions 
    bool hasTradeType() const { return this->tradeType_ != nullptr;};
    void deleteTradeType() { this->tradeType_ = nullptr;};
    inline const vector<string> & tradeType() const { DARABONBA_PTR_GET_CONST(tradeType_, vector<string>) };
    inline vector<string> tradeType() { DARABONBA_PTR_GET(tradeType_, vector<string>) };
    inline DescribeCouponListResponseBodyCouponsCouponTradeTypes& setTradeType(const vector<string> & tradeType) { DARABONBA_PTR_SET_VALUE(tradeType_, tradeType) };
    inline DescribeCouponListResponseBodyCouponsCouponTradeTypes& setTradeType(vector<string> && tradeType) { DARABONBA_PTR_SET_RVALUE(tradeType_, tradeType) };


  protected:
    std::shared_ptr<vector<string>> tradeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
