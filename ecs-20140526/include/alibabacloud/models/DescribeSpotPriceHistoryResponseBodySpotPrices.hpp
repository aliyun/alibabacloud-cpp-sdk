// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODYSPOTPRICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODYSPOTPRICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotPriceHistoryResponseBodySpotPrices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotPriceHistoryResponseBodySpotPrices& obj) { 
      DARABONBA_PTR_TO_JSON(SpotPriceType, spotPriceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotPriceHistoryResponseBodySpotPrices& obj) { 
      DARABONBA_PTR_FROM_JSON(SpotPriceType, spotPriceType_);
    };
    DescribeSpotPriceHistoryResponseBodySpotPrices() = default ;
    DescribeSpotPriceHistoryResponseBodySpotPrices(const DescribeSpotPriceHistoryResponseBodySpotPrices &) = default ;
    DescribeSpotPriceHistoryResponseBodySpotPrices(DescribeSpotPriceHistoryResponseBodySpotPrices &&) = default ;
    DescribeSpotPriceHistoryResponseBodySpotPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotPriceHistoryResponseBodySpotPrices() = default ;
    DescribeSpotPriceHistoryResponseBodySpotPrices& operator=(const DescribeSpotPriceHistoryResponseBodySpotPrices &) = default ;
    DescribeSpotPriceHistoryResponseBodySpotPrices& operator=(DescribeSpotPriceHistoryResponseBodySpotPrices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spotPriceType_ == nullptr; };
    // spotPriceType Field Functions 
    bool hasSpotPriceType() const { return this->spotPriceType_ != nullptr;};
    void deleteSpotPriceType() { this->spotPriceType_ = nullptr;};
    inline const vector<Models::DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType> & spotPriceType() const { DARABONBA_PTR_GET_CONST(spotPriceType_, vector<Models::DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType>) };
    inline vector<Models::DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType> spotPriceType() { DARABONBA_PTR_GET(spotPriceType_, vector<Models::DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType>) };
    inline DescribeSpotPriceHistoryResponseBodySpotPrices& setSpotPriceType(const vector<Models::DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType> & spotPriceType) { DARABONBA_PTR_SET_VALUE(spotPriceType_, spotPriceType) };
    inline DescribeSpotPriceHistoryResponseBodySpotPrices& setSpotPriceType(vector<Models::DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType> && spotPriceType) { DARABONBA_PTR_SET_RVALUE(spotPriceType_, spotPriceType) };


  protected:
    std::shared_ptr<vector<Models::DescribeSpotPriceHistoryResponseBodySpotPricesSpotPriceType>> spotPriceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
