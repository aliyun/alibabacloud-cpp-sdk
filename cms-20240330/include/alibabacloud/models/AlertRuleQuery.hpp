// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEQUERY_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/AlertRuleQueryEntityFilter.hpp>
#include <alibabacloud/models/AlertRuleSlsQueryJoin.hpp>
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
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(entityFilter, entityFilter_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(firstJoin, firstJoin_);
      DARABONBA_PTR_TO_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(metricSet, metricSet_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(queries, queries_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
      DARABONBA_PTR_TO_JSON(secondJoin, secondJoin_);
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(checkAfterDataComplete, checkAfterDataComplete_);
      DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(entityFilter, entityFilter_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(firstJoin, firstJoin_);
      DARABONBA_PTR_FROM_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(metricSet, metricSet_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(queries, queries_);
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
      DARABONBA_PTR_FROM_JSON(secondJoin, secondJoin_);
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
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
    virtual bool empty() const override { return this->checkAfterDataComplete_ == nullptr
        && return this->dimensions_ == nullptr && return this->domain_ == nullptr && return this->duration_ == nullptr && return this->entityFilter_ == nullptr && return this->expr_ == nullptr
        && return this->firstJoin_ == nullptr && return this->groupFieldList_ == nullptr && return this->groupId_ == nullptr && return this->groupType_ == nullptr && return this->metric_ == nullptr
        && return this->metricSet_ == nullptr && return this->namespace_ == nullptr && return this->queries_ == nullptr && return this->relationType_ == nullptr && return this->secondJoin_ == nullptr
        && return this->serviceIds_ == nullptr && return this->type_ == nullptr; };
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


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AlertRuleQuery& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline AlertRuleQuery& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // entityFilter Field Functions 
    bool hasEntityFilter() const { return this->entityFilter_ != nullptr;};
    void deleteEntityFilter() { this->entityFilter_ = nullptr;};
    inline const AlertRuleQueryEntityFilter & entityFilter() const { DARABONBA_PTR_GET_CONST(entityFilter_, AlertRuleQueryEntityFilter) };
    inline AlertRuleQueryEntityFilter entityFilter() { DARABONBA_PTR_GET(entityFilter_, AlertRuleQueryEntityFilter) };
    inline AlertRuleQuery& setEntityFilter(const AlertRuleQueryEntityFilter & entityFilter) { DARABONBA_PTR_SET_VALUE(entityFilter_, entityFilter) };
    inline AlertRuleQuery& setEntityFilter(AlertRuleQueryEntityFilter && entityFilter) { DARABONBA_PTR_SET_RVALUE(entityFilter_, entityFilter) };


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


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline AlertRuleQuery& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricSet Field Functions 
    bool hasMetricSet() const { return this->metricSet_ != nullptr;};
    void deleteMetricSet() { this->metricSet_ = nullptr;};
    inline string metricSet() const { DARABONBA_PTR_GET_DEFAULT(metricSet_, "") };
    inline AlertRuleQuery& setMetricSet(string metricSet) { DARABONBA_PTR_SET_VALUE(metricSet_, metricSet) };


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


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<string> & serviceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<string>) };
    inline vector<string> serviceIds() { DARABONBA_PTR_GET(serviceIds_, vector<string>) };
    inline AlertRuleQuery& setServiceIds(const vector<string> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline AlertRuleQuery& setServiceIds(vector<string> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleQuery& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> checkAfterDataComplete_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> dimensions_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<AlertRuleQueryEntityFilter> entityFilter_ = nullptr;
    std::shared_ptr<string> expr_ = nullptr;
    std::shared_ptr<AlertRuleSlsQueryJoin> firstJoin_ = nullptr;
    std::shared_ptr<vector<string>> groupFieldList_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupType_ = nullptr;
    std::shared_ptr<string> metric_ = nullptr;
    std::shared_ptr<string> metricSet_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<vector<AlertRuleQueryQueries>> queries_ = nullptr;
    std::shared_ptr<string> relationType_ = nullptr;
    std::shared_ptr<AlertRuleSlsQueryJoin> secondJoin_ = nullptr;
    std::shared_ptr<vector<string>> serviceIds_ = nullptr;
    // 查询类型
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
