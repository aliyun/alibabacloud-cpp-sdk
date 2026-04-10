// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALERTRULESRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYALERTRULESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleV2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class QueryAlertRulesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAlertRulesResult& obj) { 
      DARABONBA_PTR_TO_JSON(alertRules, alertRules_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAlertRulesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(alertRules, alertRules_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    QueryAlertRulesResult() = default ;
    QueryAlertRulesResult(const QueryAlertRulesResult &) = default ;
    QueryAlertRulesResult(QueryAlertRulesResult &&) = default ;
    QueryAlertRulesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAlertRulesResult() = default ;
    QueryAlertRulesResult& operator=(const QueryAlertRulesResult &) = default ;
    QueryAlertRulesResult& operator=(QueryAlertRulesResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRules_ == nullptr
        && this->totalCount_ == nullptr; };
    // alertRules Field Functions 
    bool hasAlertRules() const { return this->alertRules_ != nullptr;};
    void deleteAlertRules() { this->alertRules_ = nullptr;};
    inline const vector<AlertRuleV2> & getAlertRules() const { DARABONBA_PTR_GET_CONST(alertRules_, vector<AlertRuleV2>) };
    inline vector<AlertRuleV2> getAlertRules() { DARABONBA_PTR_GET(alertRules_, vector<AlertRuleV2>) };
    inline QueryAlertRulesResult& setAlertRules(const vector<AlertRuleV2> & alertRules) { DARABONBA_PTR_SET_VALUE(alertRules_, alertRules) };
    inline QueryAlertRulesResult& setAlertRules(vector<AlertRuleV2> && alertRules) { DARABONBA_PTR_SET_RVALUE(alertRules_, alertRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryAlertRulesResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 告警规则列表
    shared_ptr<vector<AlertRuleV2>> alertRules_ {};
    // 符合查询条件的总告警规则数
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
