// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyHybridMonitorTaskRequestSLSProcessConfigExpress.hpp>
#include <alibabacloud/models/ModifyHybridMonitorTaskRequestSLSProcessConfigFilter.hpp>
#include <alibabacloud/models/ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy.hpp>
#include <alibabacloud/models/ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorTaskRequestSLSProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorTaskRequestSLSProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Express, express_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorTaskRequestSLSProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Express, express_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    ModifyHybridMonitorTaskRequestSLSProcessConfig() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfig(const ModifyHybridMonitorTaskRequestSLSProcessConfig &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfig(ModifyHybridMonitorTaskRequestSLSProcessConfig &&) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorTaskRequestSLSProcessConfig() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfig& operator=(const ModifyHybridMonitorTaskRequestSLSProcessConfig &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfig& operator=(ModifyHybridMonitorTaskRequestSLSProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->express_ != nullptr
        && this->filter_ != nullptr && this->groupBy_ != nullptr && this->statistics_ != nullptr; };
    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigExpress> & express() const { DARABONBA_PTR_GET_CONST(express_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigExpress>) };
    inline vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigExpress> express() { DARABONBA_PTR_GET(express_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigExpress>) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setExpress(const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigExpress> & express) { DARABONBA_PTR_SET_VALUE(express_, express) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setExpress(vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigExpress> && express) { DARABONBA_PTR_SET_RVALUE(express_, express) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilter) };
    inline Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilter filter() { DARABONBA_PTR_GET(filter_, Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilter) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setFilter(const Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setFilter(Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy> & groupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy>) };
    inline vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy> groupBy() { DARABONBA_PTR_GET(groupBy_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy>) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setGroupBy(const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setGroupBy(vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics> & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics>) };
    inline vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics> statistics() { DARABONBA_PTR_GET(statistics_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics>) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setStatistics(const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfig& setStatistics(vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The extended fields that specify the results of basic operations performed on aggregation results.
    std::shared_ptr<vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigExpress>> express_ = nullptr;
    // The conditions that are used to filter logs imported from Simple Log Service.
    std::shared_ptr<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilter> filter_ = nullptr;
    // The dimension based on which data is aggregated. This parameter is equivalent to the GROUP BY clause in SQL.
    std::shared_ptr<vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy>> groupBy_ = nullptr;
    // None.
    std::shared_ptr<vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics>> statistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
