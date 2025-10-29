// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished.hpp>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionError.hpp>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount.hpp>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage.hpp>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate.hpp>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionTimeout.hpp>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionUnFinished.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAlertRuleRequestTriggerConditionExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRuleRequestTriggerConditionExtension& obj) { 
      DARABONBA_PTR_TO_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_TO_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_TO_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UnFinished, unFinished_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRuleRequestTriggerConditionExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_FROM_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UnFinished, unFinished_);
    };
    UpdateAlertRuleRequestTriggerConditionExtension() = default ;
    UpdateAlertRuleRequestTriggerConditionExtension(const UpdateAlertRuleRequestTriggerConditionExtension &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtension(UpdateAlertRuleRequestTriggerConditionExtension &&) = default ;
    UpdateAlertRuleRequestTriggerConditionExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRuleRequestTriggerConditionExtension() = default ;
    UpdateAlertRuleRequestTriggerConditionExtension& operator=(const UpdateAlertRuleRequestTriggerConditionExtension &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtension& operator=(UpdateAlertRuleRequestTriggerConditionExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleUnfinished_ == nullptr
        && return this->error_ == nullptr && return this->instanceErrorCount_ == nullptr && return this->instanceErrorPercentage_ == nullptr && return this->instanceTransferFluctuate_ == nullptr && return this->timeout_ == nullptr
        && return this->unFinished_ == nullptr; };
    // cycleUnfinished Field Functions 
    bool hasCycleUnfinished() const { return this->cycleUnfinished_ != nullptr;};
    void deleteCycleUnfinished() { this->cycleUnfinished_ = nullptr;};
    inline const Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished & cycleUnfinished() const { DARABONBA_PTR_GET_CONST(cycleUnfinished_, Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished) };
    inline Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished cycleUnfinished() { DARABONBA_PTR_GET(cycleUnfinished_, Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setCycleUnfinished(const Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished & cycleUnfinished) { DARABONBA_PTR_SET_VALUE(cycleUnfinished_, cycleUnfinished) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setCycleUnfinished(Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished && cycleUnfinished) { DARABONBA_PTR_SET_RVALUE(cycleUnfinished_, cycleUnfinished) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const Models::UpdateAlertRuleRequestTriggerConditionExtensionError & error() const { DARABONBA_PTR_GET_CONST(error_, Models::UpdateAlertRuleRequestTriggerConditionExtensionError) };
    inline Models::UpdateAlertRuleRequestTriggerConditionExtensionError error() { DARABONBA_PTR_GET(error_, Models::UpdateAlertRuleRequestTriggerConditionExtensionError) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setError(const Models::UpdateAlertRuleRequestTriggerConditionExtensionError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setError(Models::UpdateAlertRuleRequestTriggerConditionExtensionError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // instanceErrorCount Field Functions 
    bool hasInstanceErrorCount() const { return this->instanceErrorCount_ != nullptr;};
    void deleteInstanceErrorCount() { this->instanceErrorCount_ = nullptr;};
    inline const Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount & instanceErrorCount() const { DARABONBA_PTR_GET_CONST(instanceErrorCount_, Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount) };
    inline Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount instanceErrorCount() { DARABONBA_PTR_GET(instanceErrorCount_, Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setInstanceErrorCount(const Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount & instanceErrorCount) { DARABONBA_PTR_SET_VALUE(instanceErrorCount_, instanceErrorCount) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setInstanceErrorCount(Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount && instanceErrorCount) { DARABONBA_PTR_SET_RVALUE(instanceErrorCount_, instanceErrorCount) };


    // instanceErrorPercentage Field Functions 
    bool hasInstanceErrorPercentage() const { return this->instanceErrorPercentage_ != nullptr;};
    void deleteInstanceErrorPercentage() { this->instanceErrorPercentage_ = nullptr;};
    inline const Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage() const { DARABONBA_PTR_GET_CONST(instanceErrorPercentage_, Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage) };
    inline Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage instanceErrorPercentage() { DARABONBA_PTR_GET(instanceErrorPercentage_, Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setInstanceErrorPercentage(const Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage) { DARABONBA_PTR_SET_VALUE(instanceErrorPercentage_, instanceErrorPercentage) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setInstanceErrorPercentage(Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage && instanceErrorPercentage) { DARABONBA_PTR_SET_RVALUE(instanceErrorPercentage_, instanceErrorPercentage) };


    // instanceTransferFluctuate Field Functions 
    bool hasInstanceTransferFluctuate() const { return this->instanceTransferFluctuate_ != nullptr;};
    void deleteInstanceTransferFluctuate() { this->instanceTransferFluctuate_ = nullptr;};
    inline const Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate() const { DARABONBA_PTR_GET_CONST(instanceTransferFluctuate_, Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate) };
    inline Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate instanceTransferFluctuate() { DARABONBA_PTR_GET(instanceTransferFluctuate_, Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setInstanceTransferFluctuate(const Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate) { DARABONBA_PTR_SET_VALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setInstanceTransferFluctuate(Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate && instanceTransferFluctuate) { DARABONBA_PTR_SET_RVALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline const Models::UpdateAlertRuleRequestTriggerConditionExtensionTimeout & timeout() const { DARABONBA_PTR_GET_CONST(timeout_, Models::UpdateAlertRuleRequestTriggerConditionExtensionTimeout) };
    inline Models::UpdateAlertRuleRequestTriggerConditionExtensionTimeout timeout() { DARABONBA_PTR_GET(timeout_, Models::UpdateAlertRuleRequestTriggerConditionExtensionTimeout) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setTimeout(const Models::UpdateAlertRuleRequestTriggerConditionExtensionTimeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setTimeout(Models::UpdateAlertRuleRequestTriggerConditionExtensionTimeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


    // unFinished Field Functions 
    bool hasUnFinished() const { return this->unFinished_ != nullptr;};
    void deleteUnFinished() { this->unFinished_ = nullptr;};
    inline const Models::UpdateAlertRuleRequestTriggerConditionExtensionUnFinished & unFinished() const { DARABONBA_PTR_GET_CONST(unFinished_, Models::UpdateAlertRuleRequestTriggerConditionExtensionUnFinished) };
    inline Models::UpdateAlertRuleRequestTriggerConditionExtensionUnFinished unFinished() { DARABONBA_PTR_GET(unFinished_, Models::UpdateAlertRuleRequestTriggerConditionExtensionUnFinished) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setUnFinished(const Models::UpdateAlertRuleRequestTriggerConditionExtensionUnFinished & unFinished) { DARABONBA_PTR_SET_VALUE(unFinished_, unFinished) };
    inline UpdateAlertRuleRequestTriggerConditionExtension& setUnFinished(Models::UpdateAlertRuleRequestTriggerConditionExtensionUnFinished && unFinished) { DARABONBA_PTR_SET_RVALUE(unFinished_, unFinished) };


  protected:
    // The configuration for an alert of the CycleUnfinished type.
    std::shared_ptr<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished> cycleUnfinished_ = nullptr;
    // The configuration for an alert of the Error type.
    std::shared_ptr<Models::UpdateAlertRuleRequestTriggerConditionExtensionError> error_ = nullptr;
    // The configuration for an alert of the InstanceErrorCount type.
    std::shared_ptr<Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount> instanceErrorCount_ = nullptr;
    // The configuration for an alert of the InstanceErrorPercentage type.
    std::shared_ptr<Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage> instanceErrorPercentage_ = nullptr;
    // The configuration for an alert of the InstanceTransferFluctuate type.
    std::shared_ptr<Models::UpdateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate> instanceTransferFluctuate_ = nullptr;
    // The configuration for an alert of the Timeout type.
    std::shared_ptr<Models::UpdateAlertRuleRequestTriggerConditionExtensionTimeout> timeout_ = nullptr;
    // The configuration for an alert of the UnFinished type.
    std::shared_ptr<Models::UpdateAlertRuleRequestTriggerConditionExtensionUnFinished> unFinished_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
