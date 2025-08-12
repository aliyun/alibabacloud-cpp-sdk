// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULESLSQUERYJOIN_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULESLSQUERYJOIN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleSlsQueryJoinConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleSlsQueryJoin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleSlsQueryJoin& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleSlsQueryJoin& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleSlsQueryJoin() = default ;
    AlertRuleSlsQueryJoin(const AlertRuleSlsQueryJoin &) = default ;
    AlertRuleSlsQueryJoin(AlertRuleSlsQueryJoin &&) = default ;
    AlertRuleSlsQueryJoin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleSlsQueryJoin() = default ;
    AlertRuleSlsQueryJoin& operator=(const AlertRuleSlsQueryJoin &) = default ;
    AlertRuleSlsQueryJoin& operator=(AlertRuleSlsQueryJoin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->type_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<AlertRuleSlsQueryJoinConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<AlertRuleSlsQueryJoinConditions>) };
    inline vector<AlertRuleSlsQueryJoinConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<AlertRuleSlsQueryJoinConditions>) };
    inline AlertRuleSlsQueryJoin& setConditions(const vector<AlertRuleSlsQueryJoinConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline AlertRuleSlsQueryJoin& setConditions(vector<AlertRuleSlsQueryJoinConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleSlsQueryJoin& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<AlertRuleSlsQueryJoinConditions>> conditions_ = nullptr;
    // 集合操作类型。
    //   ● CrossJoin： 笛卡尔积
    //   ● FullJoin：全联
    //   ● InnerJoin：内联
    //   ● LeftExclude： 左斥
    //   ● RightExclude：右斥
    //   ● LeftJoin：左联
    //   ● RightJoin：右联
    //   ● NoJoin：不合并
    //   ● Concat： 拼接
    //   https://help.aliyun.com/zh/sls/user-guide/set-query-statistics-statement
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
