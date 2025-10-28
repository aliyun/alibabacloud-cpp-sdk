// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetSqlConcurrencyControlRulesHistoryResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConcurrencyControlRulesHistoryResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConcurrencyControlRulesHistoryResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(rules, rules_);
    };
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataList() = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataList(const GetSqlConcurrencyControlRulesHistoryResponseBodyDataList &) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataList(GetSqlConcurrencyControlRulesHistoryResponseBodyDataList &&) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConcurrencyControlRulesHistoryResponseBodyDataList() = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataList& operator=(const GetSqlConcurrencyControlRulesHistoryResponseBodyDataList &) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataList& operator=(GetSqlConcurrencyControlRulesHistoryResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rules_ == nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules>) };
    inline vector<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules>) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataList& setRules(const vector<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataList& setRules(vector<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<vector<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
