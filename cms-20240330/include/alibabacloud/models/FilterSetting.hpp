// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERSETTING_HPP_
#define ALIBABACLOUD_MODELS_FILTERSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FilterSettingConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class FilterSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterSetting& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
    };
    friend void from_json(const Darabonba::Json& j, FilterSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
    };
    FilterSetting() = default ;
    FilterSetting(const FilterSetting &) = default ;
    FilterSetting(FilterSetting &&) = default ;
    FilterSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterSetting() = default ;
    FilterSetting& operator=(const FilterSetting &) = default ;
    FilterSetting& operator=(FilterSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->expression_ == nullptr && return this->relation_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<FilterSettingConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<FilterSettingConditions>) };
    inline vector<FilterSettingConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<FilterSettingConditions>) };
    inline FilterSetting& setConditions(const vector<FilterSettingConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline FilterSetting& setConditions(vector<FilterSettingConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline FilterSetting& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline FilterSetting& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


  protected:
    std::shared_ptr<vector<FilterSettingConditions>> conditions_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<string> relation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
