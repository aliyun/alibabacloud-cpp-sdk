// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMultiPriceResponseBodyPriceInfoPrice.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultiPriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeMultiPriceResponseBodyPriceInfo() = default ;
    DescribeMultiPriceResponseBodyPriceInfo(const DescribeMultiPriceResponseBodyPriceInfo &) = default ;
    DescribeMultiPriceResponseBodyPriceInfo(DescribeMultiPriceResponseBodyPriceInfo &&) = default ;
    DescribeMultiPriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceResponseBodyPriceInfo() = default ;
    DescribeMultiPriceResponseBodyPriceInfo& operator=(const DescribeMultiPriceResponseBodyPriceInfo &) = default ;
    DescribeMultiPriceResponseBodyPriceInfo& operator=(DescribeMultiPriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->price_ != nullptr
        && this->rules_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribeMultiPriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribeMultiPriceResponseBodyPriceInfoPrice) };
    inline Models::DescribeMultiPriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribeMultiPriceResponseBodyPriceInfoPrice) };
    inline DescribeMultiPriceResponseBodyPriceInfo& setPrice(const Models::DescribeMultiPriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribeMultiPriceResponseBodyPriceInfo& setPrice(Models::DescribeMultiPriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeMultiPriceResponseBodyPriceInfoRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoRules>) };
    inline vector<Models::DescribeMultiPriceResponseBodyPriceInfoRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeMultiPriceResponseBodyPriceInfoRules>) };
    inline DescribeMultiPriceResponseBodyPriceInfo& setRules(const vector<Models::DescribeMultiPriceResponseBodyPriceInfoRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeMultiPriceResponseBodyPriceInfo& setRules(vector<Models::DescribeMultiPriceResponseBodyPriceInfoRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<Models::DescribeMultiPriceResponseBodyPriceInfoPrice> price_ = nullptr;
    std::shared_ptr<vector<Models::DescribeMultiPriceResponseBodyPriceInfoRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
