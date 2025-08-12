// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLISTSLSPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLISTSLSPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress.hpp>
#include <alibabacloud/models/DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter.hpp>
#include <alibabacloud/models/DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy.hpp>
#include <alibabacloud/models/DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Express, express_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Express, express_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig(const DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig(DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig &&) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& operator=(const DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& operator=(DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->express_ != nullptr
        && this->filter_ != nullptr && this->groupBy_ != nullptr && this->statistics_ != nullptr; };
    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress> & express() const { DARABONBA_PTR_GET_CONST(express_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress>) };
    inline vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress> express() { DARABONBA_PTR_GET(express_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress>) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setExpress(const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress> & express) { DARABONBA_PTR_SET_VALUE(express_, express) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setExpress(vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress> && express) { DARABONBA_PTR_SET_RVALUE(express_, express) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter) };
    inline Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter filter() { DARABONBA_PTR_GET(filter_, Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setFilter(const Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setFilter(Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy> & groupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy>) };
    inline vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy> groupBy() { DARABONBA_PTR_GET(groupBy_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy>) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setGroupBy(const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setGroupBy(vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics> & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics>) };
    inline vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics> statistics() { DARABONBA_PTR_GET(statistics_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics>) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setStatistics(const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig& setStatistics(vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The extended fields that indicate the results of basic operations that are performed on aggregation results.
    std::shared_ptr<vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress>> express_ = nullptr;
    // The conditions that are used to filter logs imported from Log Service.
    std::shared_ptr<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigFilter> filter_ = nullptr;
    // The dimensions based on which data is aggregated. This parameter is equivalent to the GROUP BY clause in SQL.
    std::shared_ptr<vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigGroupBy>> groupBy_ = nullptr;
    // The methods that are used to aggregate logs imported from Log Service.
    std::shared_ptr<vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigStatistics>> statistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
