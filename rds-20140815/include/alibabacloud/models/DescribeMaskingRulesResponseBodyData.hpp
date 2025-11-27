// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMaskingRulesResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMaskingRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMaskingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMaskingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeMaskingRulesResponseBodyData() = default ;
    DescribeMaskingRulesResponseBodyData(const DescribeMaskingRulesResponseBodyData &) = default ;
    DescribeMaskingRulesResponseBodyData(DescribeMaskingRulesResponseBodyData &&) = default ;
    DescribeMaskingRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMaskingRulesResponseBodyData() = default ;
    DescribeMaskingRulesResponseBodyData& operator=(const DescribeMaskingRulesResponseBodyData &) = default ;
    DescribeMaskingRulesResponseBodyData& operator=(DescribeMaskingRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rules_ == nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeMaskingRulesResponseBodyDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeMaskingRulesResponseBodyDataRules>) };
    inline vector<Models::DescribeMaskingRulesResponseBodyDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeMaskingRulesResponseBodyDataRules>) };
    inline DescribeMaskingRulesResponseBodyData& setRules(const vector<Models::DescribeMaskingRulesResponseBodyDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeMaskingRulesResponseBodyData& setRules(vector<Models::DescribeMaskingRulesResponseBodyDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<vector<Models::DescribeMaskingRulesResponseBodyDataRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
