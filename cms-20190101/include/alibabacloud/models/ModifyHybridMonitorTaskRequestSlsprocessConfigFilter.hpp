// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGFILTER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorTaskRequestSLSProcessConfigFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorTaskRequestSLSProcessConfigFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorTaskRequestSLSProcessConfigFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
    };
    ModifyHybridMonitorTaskRequestSLSProcessConfigFilter() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigFilter(const ModifyHybridMonitorTaskRequestSLSProcessConfigFilter &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigFilter(ModifyHybridMonitorTaskRequestSLSProcessConfigFilter &&) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorTaskRequestSLSProcessConfigFilter() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigFilter& operator=(const ModifyHybridMonitorTaskRequestSLSProcessConfigFilter &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigFilter& operator=(ModifyHybridMonitorTaskRequestSLSProcessConfigFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filters_ != nullptr
        && this->relation_ != nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters>) };
    inline vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters>) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigFilter& setFilters(const vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigFilter& setFilters(vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigFilter& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


  protected:
    // None.
    std::shared_ptr<vector<Models::ModifyHybridMonitorTaskRequestSLSProcessConfigFilterFilters>> filters_ = nullptr;
    // The relationship between multiple filter conditions. Valid values:
    // 
    // *   and (default): Logs are processed only if all filter conditions are met.
    // *   or: Logs are processed if one of the filter conditions is met.
    std::shared_ptr<string> relation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
