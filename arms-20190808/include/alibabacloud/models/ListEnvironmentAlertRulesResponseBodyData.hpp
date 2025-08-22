// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTALERTRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTALERTRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentAlertRulesResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAlertRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAlertRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAlertRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEnvironmentAlertRulesResponseBodyData() = default ;
    ListEnvironmentAlertRulesResponseBodyData(const ListEnvironmentAlertRulesResponseBodyData &) = default ;
    ListEnvironmentAlertRulesResponseBodyData(ListEnvironmentAlertRulesResponseBodyData &&) = default ;
    ListEnvironmentAlertRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAlertRulesResponseBodyData() = default ;
    ListEnvironmentAlertRulesResponseBodyData& operator=(const ListEnvironmentAlertRulesResponseBodyData &) = default ;
    ListEnvironmentAlertRulesResponseBodyData& operator=(ListEnvironmentAlertRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groups_ != nullptr
        && this->rules_ != nullptr && this->total_ != nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<string> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
    inline vector<string> groups() { DARABONBA_PTR_GET(groups_, vector<string>) };
    inline ListEnvironmentAlertRulesResponseBodyData& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListEnvironmentAlertRulesResponseBodyData& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListEnvironmentAlertRulesResponseBodyDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListEnvironmentAlertRulesResponseBodyDataRules>) };
    inline vector<Models::ListEnvironmentAlertRulesResponseBodyDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListEnvironmentAlertRulesResponseBodyDataRules>) };
    inline ListEnvironmentAlertRulesResponseBodyData& setRules(const vector<Models::ListEnvironmentAlertRulesResponseBodyDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListEnvironmentAlertRulesResponseBodyData& setRules(vector<Models::ListEnvironmentAlertRulesResponseBodyDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListEnvironmentAlertRulesResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried alert groups.
    std::shared_ptr<vector<string>> groups_ = nullptr;
    // The queried rules.
    std::shared_ptr<vector<Models::ListEnvironmentAlertRulesResponseBodyDataRules>> rules_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
