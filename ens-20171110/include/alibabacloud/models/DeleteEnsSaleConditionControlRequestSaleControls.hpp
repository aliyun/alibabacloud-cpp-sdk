// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENSSALECONDITIONCONTROLREQUESTSALECONTROLS_HPP_
#define ALIBABACLOUD_MODELS_DELETEENSSALECONDITIONCONTROLREQUESTSALECONTROLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteEnsSaleConditionControlRequestSaleControlsConditionControls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteEnsSaleConditionControlRequestSaleControls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnsSaleConditionControlRequestSaleControls& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionControls, conditionControls_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnsSaleConditionControlRequestSaleControls& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionControls, conditionControls_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    DeleteEnsSaleConditionControlRequestSaleControls() = default ;
    DeleteEnsSaleConditionControlRequestSaleControls(const DeleteEnsSaleConditionControlRequestSaleControls &) = default ;
    DeleteEnsSaleConditionControlRequestSaleControls(DeleteEnsSaleConditionControlRequestSaleControls &&) = default ;
    DeleteEnsSaleConditionControlRequestSaleControls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnsSaleConditionControlRequestSaleControls() = default ;
    DeleteEnsSaleConditionControlRequestSaleControls& operator=(const DeleteEnsSaleConditionControlRequestSaleControls &) = default ;
    DeleteEnsSaleConditionControlRequestSaleControls& operator=(DeleteEnsSaleConditionControlRequestSaleControls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionControls_ == nullptr
        && return this->moduleCode_ == nullptr && return this->orderType_ == nullptr; };
    // conditionControls Field Functions 
    bool hasConditionControls() const { return this->conditionControls_ != nullptr;};
    void deleteConditionControls() { this->conditionControls_ = nullptr;};
    inline const vector<Models::DeleteEnsSaleConditionControlRequestSaleControlsConditionControls> & conditionControls() const { DARABONBA_PTR_GET_CONST(conditionControls_, vector<Models::DeleteEnsSaleConditionControlRequestSaleControlsConditionControls>) };
    inline vector<Models::DeleteEnsSaleConditionControlRequestSaleControlsConditionControls> conditionControls() { DARABONBA_PTR_GET(conditionControls_, vector<Models::DeleteEnsSaleConditionControlRequestSaleControlsConditionControls>) };
    inline DeleteEnsSaleConditionControlRequestSaleControls& setConditionControls(const vector<Models::DeleteEnsSaleConditionControlRequestSaleControlsConditionControls> & conditionControls) { DARABONBA_PTR_SET_VALUE(conditionControls_, conditionControls) };
    inline DeleteEnsSaleConditionControlRequestSaleControls& setConditionControls(vector<Models::DeleteEnsSaleConditionControlRequestSaleControlsConditionControls> && conditionControls) { DARABONBA_PTR_SET_RVALUE(conditionControls_, conditionControls) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DeleteEnsSaleConditionControlRequestSaleControls& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DeleteEnsSaleConditionControlRequestSaleControls& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::DeleteEnsSaleConditionControlRequestSaleControlsConditionControls>> conditionControls_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> moduleCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
