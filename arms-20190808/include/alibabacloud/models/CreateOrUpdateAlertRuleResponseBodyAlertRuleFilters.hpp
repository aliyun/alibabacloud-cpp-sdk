// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEFILTERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters.hpp>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& obj) { 
      DARABONBA_PTR_TO_JSON(CustomSLSFilters, customSLSFilters_);
      DARABONBA_PTR_TO_JSON(CustomSLSGroupByDimensions, customSLSGroupByDimensions_);
      DARABONBA_PTR_TO_JSON(CustomSLSWheres, customSLSWheres_);
      DARABONBA_PTR_TO_JSON(DimFilters, dimFilters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomSLSFilters, customSLSFilters_);
      DARABONBA_PTR_FROM_JSON(CustomSLSGroupByDimensions, customSLSGroupByDimensions_);
      DARABONBA_PTR_FROM_JSON(CustomSLSWheres, customSLSWheres_);
      DARABONBA_PTR_FROM_JSON(DimFilters, dimFilters_);
    };
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters(const CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters(CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters &&) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& operator=(const CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& operator=(CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customSLSFilters_ != nullptr
        && this->customSLSGroupByDimensions_ != nullptr && this->customSLSWheres_ != nullptr && this->dimFilters_ != nullptr; };
    // customSLSFilters Field Functions 
    bool hasCustomSLSFilters() const { return this->customSLSFilters_ != nullptr;};
    void deleteCustomSLSFilters() { this->customSLSFilters_ = nullptr;};
    inline const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters> & customSLSFilters() const { DARABONBA_PTR_GET_CONST(customSLSFilters_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters>) };
    inline vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters> customSLSFilters() { DARABONBA_PTR_GET(customSLSFilters_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setCustomSLSFilters(const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters> & customSLSFilters) { DARABONBA_PTR_SET_VALUE(customSLSFilters_, customSLSFilters) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setCustomSLSFilters(vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters> && customSLSFilters) { DARABONBA_PTR_SET_RVALUE(customSLSFilters_, customSLSFilters) };


    // customSLSGroupByDimensions Field Functions 
    bool hasCustomSLSGroupByDimensions() const { return this->customSLSGroupByDimensions_ != nullptr;};
    void deleteCustomSLSGroupByDimensions() { this->customSLSGroupByDimensions_ = nullptr;};
    inline const vector<string> & customSLSGroupByDimensions() const { DARABONBA_PTR_GET_CONST(customSLSGroupByDimensions_, vector<string>) };
    inline vector<string> customSLSGroupByDimensions() { DARABONBA_PTR_GET(customSLSGroupByDimensions_, vector<string>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setCustomSLSGroupByDimensions(const vector<string> & customSLSGroupByDimensions) { DARABONBA_PTR_SET_VALUE(customSLSGroupByDimensions_, customSLSGroupByDimensions) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setCustomSLSGroupByDimensions(vector<string> && customSLSGroupByDimensions) { DARABONBA_PTR_SET_RVALUE(customSLSGroupByDimensions_, customSLSGroupByDimensions) };


    // customSLSWheres Field Functions 
    bool hasCustomSLSWheres() const { return this->customSLSWheres_ != nullptr;};
    void deleteCustomSLSWheres() { this->customSLSWheres_ = nullptr;};
    inline const vector<string> & customSLSWheres() const { DARABONBA_PTR_GET_CONST(customSLSWheres_, vector<string>) };
    inline vector<string> customSLSWheres() { DARABONBA_PTR_GET(customSLSWheres_, vector<string>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setCustomSLSWheres(const vector<string> & customSLSWheres) { DARABONBA_PTR_SET_VALUE(customSLSWheres_, customSLSWheres) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setCustomSLSWheres(vector<string> && customSLSWheres) { DARABONBA_PTR_SET_RVALUE(customSLSWheres_, customSLSWheres) };


    // dimFilters Field Functions 
    bool hasDimFilters() const { return this->dimFilters_ != nullptr;};
    void deleteDimFilters() { this->dimFilters_ = nullptr;};
    inline const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters> & dimFilters() const { DARABONBA_PTR_GET_CONST(dimFilters_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters>) };
    inline vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters> dimFilters() { DARABONBA_PTR_GET(dimFilters_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setDimFilters(const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters> & dimFilters) { DARABONBA_PTR_SET_VALUE(dimFilters_, dimFilters) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters& setDimFilters(vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters> && dimFilters) { DARABONBA_PTR_SET_RVALUE(dimFilters_, dimFilters) };


  protected:
    // The custom filter condition of the Browser Monitoring alert rule.
    std::shared_ptr<vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersCustomSLSFilters>> customSLSFilters_ = nullptr;
    // The information of the aggregation dimension.
    std::shared_ptr<vector<string>> customSLSGroupByDimensions_ = nullptr;
    // The details of the custom filter condition.
    std::shared_ptr<vector<string>> customSLSWheres_ = nullptr;
    // The information about each filter condition of the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFiltersDimFilters>> dimFilters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
