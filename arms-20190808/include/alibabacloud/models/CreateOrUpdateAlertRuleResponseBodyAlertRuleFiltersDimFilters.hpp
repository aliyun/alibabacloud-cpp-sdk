// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEFILTERSDIMFILTERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEFILTERSDIMFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& obj) { 
      DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_TO_JSON(FilterOpt, filterOpt_);
      DARABONBA_PTR_TO_JSON(FilterValues, filterValues_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_FROM_JSON(FilterOpt, filterOpt_);
      DARABONBA_PTR_FROM_JSON(FilterValues, filterValues_);
    };
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters(const CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters(CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters &&) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& operator=(const CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& operator=(CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterKey_ != nullptr
        && this->filterOpt_ != nullptr && this->filterValues_ != nullptr; };
    // filterKey Field Functions 
    bool hasFilterKey() const { return this->filterKey_ != nullptr;};
    void deleteFilterKey() { this->filterKey_ = nullptr;};
    inline string filterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


    // filterOpt Field Functions 
    bool hasFilterOpt() const { return this->filterOpt_ != nullptr;};
    void deleteFilterOpt() { this->filterOpt_ = nullptr;};
    inline string filterOpt() const { DARABONBA_PTR_GET_DEFAULT(filterOpt_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& setFilterOpt(string filterOpt) { DARABONBA_PTR_SET_VALUE(filterOpt_, filterOpt) };


    // filterValues Field Functions 
    bool hasFilterValues() const { return this->filterValues_ != nullptr;};
    void deleteFilterValues() { this->filterValues_ = nullptr;};
    inline const vector<string> & filterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, vector<string>) };
    inline vector<string> filterValues() { DARABONBA_PTR_GET(filterValues_, vector<string>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& setFilterValues(const vector<string> & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters& setFilterValues(vector<string> && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


  protected:
    // The key of the filter condition.
    std::shared_ptr<string> filterKey_ = nullptr;
    // The logical operator of the filter condition.
    std::shared_ptr<string> filterOpt_ = nullptr;
    // The details of the filter condition.
    std::shared_ptr<vector<string>> filterValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
