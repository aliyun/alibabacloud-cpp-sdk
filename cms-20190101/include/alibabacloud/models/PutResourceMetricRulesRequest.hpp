// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutResourceMetricRulesRequestRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    PutResourceMetricRulesRequest() = default ;
    PutResourceMetricRulesRequest(const PutResourceMetricRulesRequest &) = default ;
    PutResourceMetricRulesRequest(PutResourceMetricRulesRequest &&) = default ;
    PutResourceMetricRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesRequest() = default ;
    PutResourceMetricRulesRequest& operator=(const PutResourceMetricRulesRequest &) = default ;
    PutResourceMetricRulesRequest& operator=(PutResourceMetricRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rules_ != nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<PutResourceMetricRulesRequestRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PutResourceMetricRulesRequestRules>) };
    inline vector<PutResourceMetricRulesRequestRules> rules() { DARABONBA_PTR_GET(rules_, vector<PutResourceMetricRulesRequestRules>) };
    inline PutResourceMetricRulesRequest& setRules(const vector<PutResourceMetricRulesRequestRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline PutResourceMetricRulesRequest& setRules(vector<PutResourceMetricRulesRequestRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The threshold-triggered alert rules.
    // 
    // Valid values of N: 1 to 500.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutResourceMetricRulesRequestRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
