// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEQUERY_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/AlertRuleQueryQueries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleQuery& obj) { 
      DARABONBA_PTR_TO_JSON(checkAfterDataComplete, checkAfterDataComplete_);
      DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(firstJoin, firstJoin_);
      DARABONBA_PTR_TO_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(queries, queries_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
      DARABONBA_PTR_TO_JSON(secondJoin, secondJoin_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(checkAfterDataComplete, checkAfterDataComplete_);
      DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(firstJoin, firstJoin_);
      DARABONBA_PTR_FROM_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(queries, queries_);
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
      DARABONBA_PTR_FROM_JSON(secondJoin, secondJoin_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleQuery() = default ;
    AlertRuleQuery(const AlertRuleQuery &) = default ;
    AlertRuleQuery(AlertRuleQuery &&) = default ;
    AlertRuleQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleQuery() = default ;
    AlertRuleQuery& operator=(const AlertRuleQuery &) = default ;
    AlertRuleQuery& operator=(AlertRuleQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkAfterDataComplete_ != nullptr
        && this->dimensions_ != nullptr && this->duration_ != nullptr && this->expr_ != nullptr && this->firstJoin_ != nullptr && this->groupFieldList_ != nullptr
        && this->groupId_ != nullptr && this->groupType_ != nullptr && this->namespace_ != nullptr && this->queries_ != nullptr && this->relationType_ != nullptr
        && this->secondJoin_ != nullptr && this->type_ != nullptr; };
    // checkAfterDataComplete Field Functions 
    bool hasCheckAfterDataComplete() const { return this->checkAfterDataComplete_ != nullptr;};
    void deleteCheckAfterDataComplete() { this->checkAfterDataComplete_ = nullptr;};
    inline bool checkAfterDataComplete() const { DARABONBA_PTR_GET_DEFAULT(checkAfterDataComplete_, false) };
    inline AlertRuleQuery& setCheckAfterDataComplete(bool checkAfterDataComplete) { DARABONBA_PTR_SET_VALUE(checkAfterDataComplete_, checkAfterDataComplete) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<map<string, string>> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<map<string, string>>) };
    inline vector<map<string, string>> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<map<string, string>>) };
    inline AlertRuleQuery& setDimensions(const vector<map<string, string>> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline AlertRuleQuery& setDimensions(vector<map<string, string>> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline AlertRuleQuery& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string expr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline AlertRuleQuery& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // firstJoin Field Functions 
    bool hasFirstJoin() const { return this->firstJoin_ != nullptr;};
    void deleteFirstJoin() { this->firstJoin_ = nullptr;};
    inline const AlertRuleSlsQueryJoin & firstJoin() const { DARABONBA_PTR_GET_CONST(firstJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleSlsQueryJoin firstJoin() { DARABONBA_PTR_GET(firstJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleQuery& setFirstJoin(const AlertRuleSlsQueryJoin & firstJoin) { DARABONBA_PTR_SET_VALUE(firstJoin_, firstJoin) };
    inline AlertRuleQuery& setFirstJoin(AlertRuleSlsQueryJoin && firstJoin) { DARABONBA_PTR_SET_RVALUE(firstJoin_, firstJoin) };


    // groupFieldList Field Functions 
    bool hasGroupFieldList() const { return this->groupFieldList_ != nullptr;};
    void deleteGroupFieldList() { this->groupFieldList_ = nullptr;};
    inline const vector<string> & groupFieldList() const { DARABONBA_PTR_GET_CONST(groupFieldList_, vector<string>) };
    inline vector<string> groupFieldList() { DARABONBA_PTR_GET(groupFieldList_, vector<string>) };
    inline AlertRuleQuery& setGroupFieldList(const vector<string> & groupFieldList) { DARABONBA_PTR_SET_VALUE(groupFieldList_, groupFieldList) };
    inline AlertRuleQuery& setGroupFieldList(vector<string> && groupFieldList) { DARABONBA_PTR_SET_RVALUE(groupFieldList_, groupFieldList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AlertRuleQuery& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline AlertRuleQuery& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline AlertRuleQuery& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<AlertRuleQueryQueries> & queries() const { DARABONBA_PTR_GET_CONST(queries_, vector<AlertRuleQueryQueries>) };
    inline vector<AlertRuleQueryQueries> queries() { DARABONBA_PTR_GET(queries_, vector<AlertRuleQueryQueries>) };
    inline AlertRuleQuery& setQueries(const vector<AlertRuleQueryQueries> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline AlertRuleQuery& setQueries(vector<AlertRuleQueryQueries> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline AlertRuleQuery& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // secondJoin Field Functions 
    bool hasSecondJoin() const { return this->secondJoin_ != nullptr;};
    void deleteSecondJoin() { this->secondJoin_ = nullptr;};
    inline const AlertRuleSlsQueryJoin & secondJoin() const { DARABONBA_PTR_GET_CONST(secondJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleSlsQueryJoin secondJoin() { DARABONBA_PTR_GET(secondJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleQuery& setSecondJoin(const AlertRuleSlsQueryJoin & secondJoin) { DARABONBA_PTR_SET_VALUE(secondJoin_, secondJoin) };
    inline AlertRuleQuery& setSecondJoin(AlertRuleSlsQueryJoin && secondJoin) { DARABONBA_PTR_SET_RVALUE(secondJoin_, secondJoin) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleQuery& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> checkAfterDataComplete_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> dimensions_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> expr_ = nullptr;
    std::shared_ptr<AlertRuleSlsQueryJoin> firstJoin_ = nullptr;
    std::shared_ptr<vector<string>> groupFieldList_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupType_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<vector<AlertRuleQueryQueries>> queries_ = nullptr;
    std::shared_ptr<string> relationType_ = nullptr;
    std::shared_ptr<AlertRuleSlsQueryJoin> secondJoin_ = nullptr;
    // 查询类型
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
