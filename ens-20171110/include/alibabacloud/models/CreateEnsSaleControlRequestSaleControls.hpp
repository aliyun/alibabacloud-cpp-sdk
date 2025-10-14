// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENSSALECONTROLREQUESTSALECONTROLS_HPP_
#define ALIBABACLOUD_MODELS_CREATEENSSALECONTROLREQUESTSALECONTROLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEnsSaleControlRequestSaleControlsConditionControls.hpp>
#include <alibabacloud/models/CreateEnsSaleControlRequestSaleControlsModuleValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateEnsSaleControlRequestSaleControls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnsSaleControlRequestSaleControls& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionControls, conditionControls_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnsSaleControlRequestSaleControls& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionControls, conditionControls_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    CreateEnsSaleControlRequestSaleControls() = default ;
    CreateEnsSaleControlRequestSaleControls(const CreateEnsSaleControlRequestSaleControls &) = default ;
    CreateEnsSaleControlRequestSaleControls(CreateEnsSaleControlRequestSaleControls &&) = default ;
    CreateEnsSaleControlRequestSaleControls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnsSaleControlRequestSaleControls() = default ;
    CreateEnsSaleControlRequestSaleControls& operator=(const CreateEnsSaleControlRequestSaleControls &) = default ;
    CreateEnsSaleControlRequestSaleControls& operator=(CreateEnsSaleControlRequestSaleControls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionControls_ == nullptr
        && return this->description_ == nullptr && return this->moduleCode_ == nullptr && return this->moduleValue_ == nullptr && return this->operator_ == nullptr && return this->orderType_ == nullptr; };
    // conditionControls Field Functions 
    bool hasConditionControls() const { return this->conditionControls_ != nullptr;};
    void deleteConditionControls() { this->conditionControls_ = nullptr;};
    inline const vector<Models::CreateEnsSaleControlRequestSaleControlsConditionControls> & conditionControls() const { DARABONBA_PTR_GET_CONST(conditionControls_, vector<Models::CreateEnsSaleControlRequestSaleControlsConditionControls>) };
    inline vector<Models::CreateEnsSaleControlRequestSaleControlsConditionControls> conditionControls() { DARABONBA_PTR_GET(conditionControls_, vector<Models::CreateEnsSaleControlRequestSaleControlsConditionControls>) };
    inline CreateEnsSaleControlRequestSaleControls& setConditionControls(const vector<Models::CreateEnsSaleControlRequestSaleControlsConditionControls> & conditionControls) { DARABONBA_PTR_SET_VALUE(conditionControls_, conditionControls) };
    inline CreateEnsSaleControlRequestSaleControls& setConditionControls(vector<Models::CreateEnsSaleControlRequestSaleControlsConditionControls> && conditionControls) { DARABONBA_PTR_SET_RVALUE(conditionControls_, conditionControls) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEnsSaleControlRequestSaleControls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline CreateEnsSaleControlRequestSaleControls& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleValue Field Functions 
    bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
    void deleteModuleValue() { this->moduleValue_ = nullptr;};
    inline const Models::CreateEnsSaleControlRequestSaleControlsModuleValue & moduleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, Models::CreateEnsSaleControlRequestSaleControlsModuleValue) };
    inline Models::CreateEnsSaleControlRequestSaleControlsModuleValue moduleValue() { DARABONBA_PTR_GET(moduleValue_, Models::CreateEnsSaleControlRequestSaleControlsModuleValue) };
    inline CreateEnsSaleControlRequestSaleControls& setModuleValue(const Models::CreateEnsSaleControlRequestSaleControlsModuleValue & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
    inline CreateEnsSaleControlRequestSaleControls& setModuleValue(Models::CreateEnsSaleControlRequestSaleControlsModuleValue && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateEnsSaleControlRequestSaleControls& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateEnsSaleControlRequestSaleControls& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    std::shared_ptr<vector<Models::CreateEnsSaleControlRequestSaleControlsConditionControls>> conditionControls_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreateEnsSaleControlRequestSaleControlsModuleValue> moduleValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operator_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
