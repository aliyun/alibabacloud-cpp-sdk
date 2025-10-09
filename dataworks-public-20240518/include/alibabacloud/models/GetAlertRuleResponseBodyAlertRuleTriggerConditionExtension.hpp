// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODYALERTRULETRIGGERCONDITIONEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODYALERTRULETRIGGERCONDITIONEXTENSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& obj) { 
      DARABONBA_PTR_TO_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_TO_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_TO_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UnFinished, unFinished_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_FROM_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UnFinished, unFinished_);
    };
    GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension() = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension(const GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension &) = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension(GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension &&) = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension() = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& operator=(const GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension &) = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& operator=(GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleUnfinished_ != nullptr
        && this->error_ != nullptr && this->instanceErrorCount_ != nullptr && this->instanceErrorPercentage_ != nullptr && this->instanceTransferFluctuate_ != nullptr && this->timeout_ != nullptr
        && this->unFinished_ != nullptr; };
    // cycleUnfinished Field Functions 
    bool hasCycleUnfinished() const { return this->cycleUnfinished_ != nullptr;};
    void deleteCycleUnfinished() { this->cycleUnfinished_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished & cycleUnfinished() const { DARABONBA_PTR_GET_CONST(cycleUnfinished_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished cycleUnfinished() { DARABONBA_PTR_GET(cycleUnfinished_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setCycleUnfinished(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished & cycleUnfinished) { DARABONBA_PTR_SET_VALUE(cycleUnfinished_, cycleUnfinished) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setCycleUnfinished(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished && cycleUnfinished) { DARABONBA_PTR_SET_RVALUE(cycleUnfinished_, cycleUnfinished) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError & error() const { DARABONBA_PTR_GET_CONST(error_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError error() { DARABONBA_PTR_GET(error_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setError(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setError(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // instanceErrorCount Field Functions 
    bool hasInstanceErrorCount() const { return this->instanceErrorCount_ != nullptr;};
    void deleteInstanceErrorCount() { this->instanceErrorCount_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount & instanceErrorCount() const { DARABONBA_PTR_GET_CONST(instanceErrorCount_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount instanceErrorCount() { DARABONBA_PTR_GET(instanceErrorCount_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setInstanceErrorCount(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount & instanceErrorCount) { DARABONBA_PTR_SET_VALUE(instanceErrorCount_, instanceErrorCount) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setInstanceErrorCount(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount && instanceErrorCount) { DARABONBA_PTR_SET_RVALUE(instanceErrorCount_, instanceErrorCount) };


    // instanceErrorPercentage Field Functions 
    bool hasInstanceErrorPercentage() const { return this->instanceErrorPercentage_ != nullptr;};
    void deleteInstanceErrorPercentage() { this->instanceErrorPercentage_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage() const { DARABONBA_PTR_GET_CONST(instanceErrorPercentage_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage instanceErrorPercentage() { DARABONBA_PTR_GET(instanceErrorPercentage_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setInstanceErrorPercentage(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage) { DARABONBA_PTR_SET_VALUE(instanceErrorPercentage_, instanceErrorPercentage) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setInstanceErrorPercentage(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage && instanceErrorPercentage) { DARABONBA_PTR_SET_RVALUE(instanceErrorPercentage_, instanceErrorPercentage) };


    // instanceTransferFluctuate Field Functions 
    bool hasInstanceTransferFluctuate() const { return this->instanceTransferFluctuate_ != nullptr;};
    void deleteInstanceTransferFluctuate() { this->instanceTransferFluctuate_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate() const { DARABONBA_PTR_GET_CONST(instanceTransferFluctuate_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate instanceTransferFluctuate() { DARABONBA_PTR_GET(instanceTransferFluctuate_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setInstanceTransferFluctuate(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate) { DARABONBA_PTR_SET_VALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setInstanceTransferFluctuate(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate && instanceTransferFluctuate) { DARABONBA_PTR_SET_RVALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout & timeout() const { DARABONBA_PTR_GET_CONST(timeout_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout timeout() { DARABONBA_PTR_GET(timeout_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setTimeout(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setTimeout(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


    // unFinished Field Functions 
    bool hasUnFinished() const { return this->unFinished_ != nullptr;};
    void deleteUnFinished() { this->unFinished_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished & unFinished() const { DARABONBA_PTR_GET_CONST(unFinished_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished unFinished() { DARABONBA_PTR_GET(unFinished_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setUnFinished(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished & unFinished) { DARABONBA_PTR_SET_VALUE(unFinished_, unFinished) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension& setUnFinished(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished && unFinished) { DARABONBA_PTR_SET_RVALUE(unFinished_, unFinished) };


  protected:
    // The configuration for an alert of the CycleUnfinished type.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionCycleUnfinished> cycleUnfinished_ = nullptr;
    // The configuration for an alert of the Error type.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionError> error_ = nullptr;
    // The configuration for an alert of the InstanceErrorCount type.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorCount> instanceErrorCount_ = nullptr;
    // The configuration for an alert of the InstanceErrorPercentage type.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceErrorPercentage> instanceErrorPercentage_ = nullptr;
    // The configuration for an alert of the InstanceTransferFluctuate type.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionInstanceTransferFluctuate> instanceTransferFluctuate_ = nullptr;
    // The configuration for an alert of the Timeout type.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionTimeout> timeout_ = nullptr;
    // The configuration for an alert of the UnFinished type.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtensionUnFinished> unFinished_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
