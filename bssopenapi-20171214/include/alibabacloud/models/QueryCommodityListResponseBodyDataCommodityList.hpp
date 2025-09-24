// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTRESPONSEBODYDATACOMMODITYLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMMODITYLISTRESPONSEBODYDATACOMMODITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCommodityListResponseBodyDataCommodityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCommodityListResponseBodyDataCommodityList& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCommodityListResponseBodyDataCommodityList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
    };
    QueryCommodityListResponseBodyDataCommodityList() = default ;
    QueryCommodityListResponseBodyDataCommodityList(const QueryCommodityListResponseBodyDataCommodityList &) = default ;
    QueryCommodityListResponseBodyDataCommodityList(QueryCommodityListResponseBodyDataCommodityList &&) = default ;
    QueryCommodityListResponseBodyDataCommodityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCommodityListResponseBodyDataCommodityList() = default ;
    QueryCommodityListResponseBodyDataCommodityList& operator=(const QueryCommodityListResponseBodyDataCommodityList &) = default ;
    QueryCommodityListResponseBodyDataCommodityList& operator=(QueryCommodityListResponseBodyDataCommodityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->commodityCode_ != nullptr && this->commodityName_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline QueryCommodityListResponseBodyDataCommodityList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QueryCommodityListResponseBodyDataCommodityList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline QueryCommodityListResponseBodyDataCommodityList& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


  protected:
    // The payment type. Valid values: POSTPAY (pay-as-you-go) and PREPAY (subscription).
    std::shared_ptr<string> chargeType_ = nullptr;
    // The code of the service, which is the same as that on the Billing Management page.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> commodityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
