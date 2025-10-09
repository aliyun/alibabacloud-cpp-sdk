// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONINSTANCETRANSFERFLUCTUATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONINSTANCETRANSFERFLUCTUATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate& obj) { 
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate& obj) { 
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
    };
    CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate(const CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate(CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate& operator=(const CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate& operator=(CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->percentage_ != nullptr
        && this->trend_ != nullptr; };
    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline string trend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
    inline CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


  protected:
    // The maximum percentage of fluctuation in the number of auto triggered node instances that are generated in your workspace. Valid values: [1-100].
    std::shared_ptr<int32_t> percentage_ = nullptr;
    // The way in which the number of auto triggered node instances that are generated in your workspace fluctuates. Valid values:
    // 
    // *   abs: the absolute value. The number of instances increases or decreases.
    // *   increase: The number of instances increases.
    // *   decrease: The number of instances decreases.
    std::shared_ptr<string> trend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
