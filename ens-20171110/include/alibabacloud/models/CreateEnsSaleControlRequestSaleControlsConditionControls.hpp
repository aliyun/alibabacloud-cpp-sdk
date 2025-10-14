// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENSSALECONTROLREQUESTSALECONTROLSCONDITIONCONTROLS_HPP_
#define ALIBABACLOUD_MODELS_CREATEENSSALECONTROLREQUESTSALECONTROLSCONDITIONCONTROLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateEnsSaleControlRequestSaleControlsConditionControls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnsSaleControlRequestSaleControlsConditionControls& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
      DARABONBA_PTR_TO_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnsSaleControlRequestSaleControlsConditionControls& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
      DARABONBA_PTR_FROM_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
    };
    CreateEnsSaleControlRequestSaleControlsConditionControls() = default ;
    CreateEnsSaleControlRequestSaleControlsConditionControls(const CreateEnsSaleControlRequestSaleControlsConditionControls &) = default ;
    CreateEnsSaleControlRequestSaleControlsConditionControls(CreateEnsSaleControlRequestSaleControlsConditionControls &&) = default ;
    CreateEnsSaleControlRequestSaleControlsConditionControls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnsSaleControlRequestSaleControlsConditionControls() = default ;
    CreateEnsSaleControlRequestSaleControlsConditionControls& operator=(const CreateEnsSaleControlRequestSaleControlsConditionControls &) = default ;
    CreateEnsSaleControlRequestSaleControlsConditionControls& operator=(CreateEnsSaleControlRequestSaleControlsConditionControls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionControlModuleCode_ == nullptr
        && return this->conditionControlModuleValue_ == nullptr; };
    // conditionControlModuleCode Field Functions 
    bool hasConditionControlModuleCode() const { return this->conditionControlModuleCode_ != nullptr;};
    void deleteConditionControlModuleCode() { this->conditionControlModuleCode_ = nullptr;};
    inline string conditionControlModuleCode() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleCode_, "") };
    inline CreateEnsSaleControlRequestSaleControlsConditionControls& setConditionControlModuleCode(string conditionControlModuleCode) { DARABONBA_PTR_SET_VALUE(conditionControlModuleCode_, conditionControlModuleCode) };


    // conditionControlModuleValue Field Functions 
    bool hasConditionControlModuleValue() const { return this->conditionControlModuleValue_ != nullptr;};
    void deleteConditionControlModuleValue() { this->conditionControlModuleValue_ = nullptr;};
    inline string conditionControlModuleValue() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleValue_, "") };
    inline CreateEnsSaleControlRequestSaleControlsConditionControls& setConditionControlModuleValue(string conditionControlModuleValue) { DARABONBA_PTR_SET_VALUE(conditionControlModuleValue_, conditionControlModuleValue) };


  protected:
    std::shared_ptr<string> conditionControlModuleCode_ = nullptr;
    std::shared_ptr<string> conditionControlModuleValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
