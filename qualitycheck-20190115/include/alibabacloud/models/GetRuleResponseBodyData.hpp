// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    GetRuleResponseBodyData() = default ;
    GetRuleResponseBodyData(const GetRuleResponseBodyData &) = default ;
    GetRuleResponseBodyData(GetRuleResponseBodyData &&) = default ;
    GetRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyData() = default ;
    GetRuleResponseBodyData& operator=(const GetRuleResponseBodyData &) = default ;
    GetRuleResponseBodyData& operator=(GetRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rules_ != nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::GetRuleResponseBodyDataRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::GetRuleResponseBodyDataRules) };
    inline Models::GetRuleResponseBodyDataRules rules() { DARABONBA_PTR_GET(rules_, Models::GetRuleResponseBodyDataRules) };
    inline GetRuleResponseBodyData& setRules(const Models::GetRuleResponseBodyDataRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetRuleResponseBodyData& setRules(Models::GetRuleResponseBodyDataRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<Models::GetRuleResponseBodyDataRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
