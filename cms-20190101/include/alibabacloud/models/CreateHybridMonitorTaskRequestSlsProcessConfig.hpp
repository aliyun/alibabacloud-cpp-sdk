// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHybridMonitorTaskRequestSLSProcessConfigExpress.hpp>
#include <alibabacloud/models/CreateHybridMonitorTaskRequestSLSProcessConfigFilter.hpp>
#include <alibabacloud/models/CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy.hpp>
#include <alibabacloud/models/CreateHybridMonitorTaskRequestSLSProcessConfigStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHybridMonitorTaskRequestSLSProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridMonitorTaskRequestSLSProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Express, express_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridMonitorTaskRequestSLSProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Express, express_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    CreateHybridMonitorTaskRequestSLSProcessConfig() = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfig(const CreateHybridMonitorTaskRequestSLSProcessConfig &) = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfig(CreateHybridMonitorTaskRequestSLSProcessConfig &&) = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridMonitorTaskRequestSLSProcessConfig() = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfig& operator=(const CreateHybridMonitorTaskRequestSLSProcessConfig &) = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfig& operator=(CreateHybridMonitorTaskRequestSLSProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->express_ == nullptr
        && return this->filter_ == nullptr && return this->groupBy_ == nullptr && return this->statistics_ == nullptr; };
    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline const vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigExpress> & express() const { DARABONBA_PTR_GET_CONST(express_, vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigExpress>) };
    inline vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigExpress> express() { DARABONBA_PTR_GET(express_, vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigExpress>) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setExpress(const vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigExpress> & express) { DARABONBA_PTR_SET_VALUE(express_, express) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setExpress(vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigExpress> && express) { DARABONBA_PTR_SET_RVALUE(express_, express) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const Models::CreateHybridMonitorTaskRequestSLSProcessConfigFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, Models::CreateHybridMonitorTaskRequestSLSProcessConfigFilter) };
    inline Models::CreateHybridMonitorTaskRequestSLSProcessConfigFilter filter() { DARABONBA_PTR_GET(filter_, Models::CreateHybridMonitorTaskRequestSLSProcessConfigFilter) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setFilter(const Models::CreateHybridMonitorTaskRequestSLSProcessConfigFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setFilter(Models::CreateHybridMonitorTaskRequestSLSProcessConfigFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy> & groupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy>) };
    inline vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy> groupBy() { DARABONBA_PTR_GET(groupBy_, vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy>) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setGroupBy(const vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setGroupBy(vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigStatistics> & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigStatistics>) };
    inline vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigStatistics> statistics() { DARABONBA_PTR_GET(statistics_, vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigStatistics>) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setStatistics(const vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigStatistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig& setStatistics(vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigStatistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The extended fields that specify the results of basic operations performed on aggregation results.
    std::shared_ptr<vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigExpress>> express_ = nullptr;
    // The conditions that are used to filter logs imported from Simple Log Service.
    std::shared_ptr<Models::CreateHybridMonitorTaskRequestSLSProcessConfigFilter> filter_ = nullptr;
    // The dimension based on which data is aggregated. This parameter is equivalent to the GROUP BY clause in SQL.
    std::shared_ptr<vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigGroupBy>> groupBy_ = nullptr;
    // The method that is used to aggregate logs imported from Simple Log Service.
    std::shared_ptr<vector<Models::CreateHybridMonitorTaskRequestSLSProcessConfigStatistics>> statistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
