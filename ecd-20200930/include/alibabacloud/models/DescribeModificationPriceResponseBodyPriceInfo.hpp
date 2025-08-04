// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFICATIONPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeModificationPriceResponseBodyPriceInfoPrice.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModificationPriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeModificationPriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModificationPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModificationPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeModificationPriceResponseBodyPriceInfo() = default ;
    DescribeModificationPriceResponseBodyPriceInfo(const DescribeModificationPriceResponseBodyPriceInfo &) = default ;
    DescribeModificationPriceResponseBodyPriceInfo(DescribeModificationPriceResponseBodyPriceInfo &&) = default ;
    DescribeModificationPriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModificationPriceResponseBodyPriceInfo() = default ;
    DescribeModificationPriceResponseBodyPriceInfo& operator=(const DescribeModificationPriceResponseBodyPriceInfo &) = default ;
    DescribeModificationPriceResponseBodyPriceInfo& operator=(DescribeModificationPriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->price_ != nullptr
        && this->rules_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribeModificationPriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribeModificationPriceResponseBodyPriceInfoPrice) };
    inline Models::DescribeModificationPriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribeModificationPriceResponseBodyPriceInfoPrice) };
    inline DescribeModificationPriceResponseBodyPriceInfo& setPrice(const Models::DescribeModificationPriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribeModificationPriceResponseBodyPriceInfo& setPrice(Models::DescribeModificationPriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeModificationPriceResponseBodyPriceInfoRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeModificationPriceResponseBodyPriceInfoRules>) };
    inline vector<Models::DescribeModificationPriceResponseBodyPriceInfoRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeModificationPriceResponseBodyPriceInfoRules>) };
    inline DescribeModificationPriceResponseBodyPriceInfo& setRules(const vector<Models::DescribeModificationPriceResponseBodyPriceInfoRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeModificationPriceResponseBodyPriceInfo& setRules(vector<Models::DescribeModificationPriceResponseBodyPriceInfoRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price information.
    std::shared_ptr<Models::DescribeModificationPriceResponseBodyPriceInfoPrice> price_ = nullptr;
    // The promotion rules.
    std::shared_ptr<vector<Models::DescribeModificationPriceResponseBodyPriceInfoRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
