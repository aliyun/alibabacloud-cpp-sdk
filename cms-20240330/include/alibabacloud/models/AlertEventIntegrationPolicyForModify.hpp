// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTEVENTINTEGRATIONPOLICYFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_ALERTEVENTINTEGRATIONPOLICYFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <vector>
#include <alibabacloud/models/TransformAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertEventIntegrationPolicyForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertEventIntegrationPolicyForModify& obj) { 
      DARABONBA_PTR_TO_JSON(alertEventIntegrationPolicyName, alertEventIntegrationPolicyName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(integrationSetting, integrationSetting_);
      DARABONBA_PTR_TO_JSON(transformerSetting, transformerSetting_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertEventIntegrationPolicyForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(alertEventIntegrationPolicyName, alertEventIntegrationPolicyName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(integrationSetting, integrationSetting_);
      DARABONBA_PTR_FROM_JSON(transformerSetting, transformerSetting_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertEventIntegrationPolicyForModify() = default ;
    AlertEventIntegrationPolicyForModify(const AlertEventIntegrationPolicyForModify &) = default ;
    AlertEventIntegrationPolicyForModify(AlertEventIntegrationPolicyForModify &&) = default ;
    AlertEventIntegrationPolicyForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertEventIntegrationPolicyForModify() = default ;
    AlertEventIntegrationPolicyForModify& operator=(const AlertEventIntegrationPolicyForModify &) = default ;
    AlertEventIntegrationPolicyForModify& operator=(AlertEventIntegrationPolicyForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertEventIntegrationPolicyName_ == nullptr
        && return this->description_ == nullptr && return this->filterSetting_ == nullptr && return this->integrationSetting_ == nullptr && return this->transformerSetting_ == nullptr && return this->type_ == nullptr; };
    // alertEventIntegrationPolicyName Field Functions 
    bool hasAlertEventIntegrationPolicyName() const { return this->alertEventIntegrationPolicyName_ != nullptr;};
    void deleteAlertEventIntegrationPolicyName() { this->alertEventIntegrationPolicyName_ = nullptr;};
    inline string alertEventIntegrationPolicyName() const { DARABONBA_PTR_GET_DEFAULT(alertEventIntegrationPolicyName_, "") };
    inline AlertEventIntegrationPolicyForModify& setAlertEventIntegrationPolicyName(string alertEventIntegrationPolicyName) { DARABONBA_PTR_SET_VALUE(alertEventIntegrationPolicyName_, alertEventIntegrationPolicyName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AlertEventIntegrationPolicyForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline AlertEventIntegrationPolicyForModify& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline AlertEventIntegrationPolicyForModify& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // integrationSetting Field Functions 
    bool hasIntegrationSetting() const { return this->integrationSetting_ != nullptr;};
    void deleteIntegrationSetting() { this->integrationSetting_ = nullptr;};
    inline string integrationSetting() const { DARABONBA_PTR_GET_DEFAULT(integrationSetting_, "") };
    inline AlertEventIntegrationPolicyForModify& setIntegrationSetting(string integrationSetting) { DARABONBA_PTR_SET_VALUE(integrationSetting_, integrationSetting) };


    // transformerSetting Field Functions 
    bool hasTransformerSetting() const { return this->transformerSetting_ != nullptr;};
    void deleteTransformerSetting() { this->transformerSetting_ = nullptr;};
    inline const vector<TransformAction> & transformerSetting() const { DARABONBA_PTR_GET_CONST(transformerSetting_, vector<TransformAction>) };
    inline vector<TransformAction> transformerSetting() { DARABONBA_PTR_GET(transformerSetting_, vector<TransformAction>) };
    inline AlertEventIntegrationPolicyForModify& setTransformerSetting(const vector<TransformAction> & transformerSetting) { DARABONBA_PTR_SET_VALUE(transformerSetting_, transformerSetting) };
    inline AlertEventIntegrationPolicyForModify& setTransformerSetting(vector<TransformAction> && transformerSetting) { DARABONBA_PTR_SET_RVALUE(transformerSetting_, transformerSetting) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertEventIntegrationPolicyForModify& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> alertEventIntegrationPolicyName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<string> integrationSetting_ = nullptr;
    std::shared_ptr<vector<TransformAction>> transformerSetting_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
