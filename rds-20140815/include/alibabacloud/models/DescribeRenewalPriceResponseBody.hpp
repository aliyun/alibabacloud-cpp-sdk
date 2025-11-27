// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfo.hpp>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRenewalPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeRenewalPriceResponseBody() = default ;
    DescribeRenewalPriceResponseBody(const DescribeRenewalPriceResponseBody &) = default ;
    DescribeRenewalPriceResponseBody(DescribeRenewalPriceResponseBody &&) = default ;
    DescribeRenewalPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBody() = default ;
    DescribeRenewalPriceResponseBody& operator=(const DescribeRenewalPriceResponseBody &) = default ;
    DescribeRenewalPriceResponseBody& operator=(DescribeRenewalPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->rules_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeRenewalPriceResponseBodyPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeRenewalPriceResponseBodyPriceInfo) };
    inline DescribeRenewalPriceResponseBodyPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeRenewalPriceResponseBodyPriceInfo) };
    inline DescribeRenewalPriceResponseBody& setPriceInfo(const DescribeRenewalPriceResponseBodyPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeRenewalPriceResponseBody& setPriceInfo(DescribeRenewalPriceResponseBodyPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenewalPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribeRenewalPriceResponseBodyRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, DescribeRenewalPriceResponseBodyRules) };
    inline DescribeRenewalPriceResponseBodyRules rules() { DARABONBA_PTR_GET(rules_, DescribeRenewalPriceResponseBodyRules) };
    inline DescribeRenewalPriceResponseBody& setRules(const DescribeRenewalPriceResponseBodyRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeRenewalPriceResponseBody& setRules(DescribeRenewalPriceResponseBodyRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Details of price information.
    std::shared_ptr<DescribeRenewalPriceResponseBodyPriceInfo> priceInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the details of the promotion rule.
    std::shared_ptr<DescribeRenewalPriceResponseBodyRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
