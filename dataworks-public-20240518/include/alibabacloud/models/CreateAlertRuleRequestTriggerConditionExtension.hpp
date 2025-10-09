// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionError.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionTimeout.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionUnFinished.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtension& obj) { 
      DARABONBA_PTR_TO_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_TO_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_TO_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UnFinished, unFinished_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_FROM_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UnFinished, unFinished_);
    };
    CreateAlertRuleRequestTriggerConditionExtension() = default ;
    CreateAlertRuleRequestTriggerConditionExtension(const CreateAlertRuleRequestTriggerConditionExtension &) = default ;
    CreateAlertRuleRequestTriggerConditionExtension(CreateAlertRuleRequestTriggerConditionExtension &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtension() = default ;
    CreateAlertRuleRequestTriggerConditionExtension& operator=(const CreateAlertRuleRequestTriggerConditionExtension &) = default ;
    CreateAlertRuleRequestTriggerConditionExtension& operator=(CreateAlertRuleRequestTriggerConditionExtension &&) = default ;
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
    inline const Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished & cycleUnfinished() const { DARABONBA_PTR_GET_CONST(cycleUnfinished_, Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished) };
    inline Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished cycleUnfinished() { DARABONBA_PTR_GET(cycleUnfinished_, Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setCycleUnfinished(const Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished & cycleUnfinished) { DARABONBA_PTR_SET_VALUE(cycleUnfinished_, cycleUnfinished) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setCycleUnfinished(Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished && cycleUnfinished) { DARABONBA_PTR_SET_RVALUE(cycleUnfinished_, cycleUnfinished) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const Models::CreateAlertRuleRequestTriggerConditionExtensionError & error() const { DARABONBA_PTR_GET_CONST(error_, Models::CreateAlertRuleRequestTriggerConditionExtensionError) };
    inline Models::CreateAlertRuleRequestTriggerConditionExtensionError error() { DARABONBA_PTR_GET(error_, Models::CreateAlertRuleRequestTriggerConditionExtensionError) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setError(const Models::CreateAlertRuleRequestTriggerConditionExtensionError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setError(Models::CreateAlertRuleRequestTriggerConditionExtensionError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // instanceErrorCount Field Functions 
    bool hasInstanceErrorCount() const { return this->instanceErrorCount_ != nullptr;};
    void deleteInstanceErrorCount() { this->instanceErrorCount_ = nullptr;};
    inline const Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount & instanceErrorCount() const { DARABONBA_PTR_GET_CONST(instanceErrorCount_, Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount) };
    inline Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount instanceErrorCount() { DARABONBA_PTR_GET(instanceErrorCount_, Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setInstanceErrorCount(const Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount & instanceErrorCount) { DARABONBA_PTR_SET_VALUE(instanceErrorCount_, instanceErrorCount) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setInstanceErrorCount(Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount && instanceErrorCount) { DARABONBA_PTR_SET_RVALUE(instanceErrorCount_, instanceErrorCount) };


    // instanceErrorPercentage Field Functions 
    bool hasInstanceErrorPercentage() const { return this->instanceErrorPercentage_ != nullptr;};
    void deleteInstanceErrorPercentage() { this->instanceErrorPercentage_ = nullptr;};
    inline const Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage() const { DARABONBA_PTR_GET_CONST(instanceErrorPercentage_, Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage) };
    inline Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage instanceErrorPercentage() { DARABONBA_PTR_GET(instanceErrorPercentage_, Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setInstanceErrorPercentage(const Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage) { DARABONBA_PTR_SET_VALUE(instanceErrorPercentage_, instanceErrorPercentage) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setInstanceErrorPercentage(Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage && instanceErrorPercentage) { DARABONBA_PTR_SET_RVALUE(instanceErrorPercentage_, instanceErrorPercentage) };


    // instanceTransferFluctuate Field Functions 
    bool hasInstanceTransferFluctuate() const { return this->instanceTransferFluctuate_ != nullptr;};
    void deleteInstanceTransferFluctuate() { this->instanceTransferFluctuate_ = nullptr;};
    inline const Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate() const { DARABONBA_PTR_GET_CONST(instanceTransferFluctuate_, Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate) };
    inline Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate instanceTransferFluctuate() { DARABONBA_PTR_GET(instanceTransferFluctuate_, Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setInstanceTransferFluctuate(const Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate) { DARABONBA_PTR_SET_VALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setInstanceTransferFluctuate(Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate && instanceTransferFluctuate) { DARABONBA_PTR_SET_RVALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline const Models::CreateAlertRuleRequestTriggerConditionExtensionTimeout & timeout() const { DARABONBA_PTR_GET_CONST(timeout_, Models::CreateAlertRuleRequestTriggerConditionExtensionTimeout) };
    inline Models::CreateAlertRuleRequestTriggerConditionExtensionTimeout timeout() { DARABONBA_PTR_GET(timeout_, Models::CreateAlertRuleRequestTriggerConditionExtensionTimeout) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setTimeout(const Models::CreateAlertRuleRequestTriggerConditionExtensionTimeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setTimeout(Models::CreateAlertRuleRequestTriggerConditionExtensionTimeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


    // unFinished Field Functions 
    bool hasUnFinished() const { return this->unFinished_ != nullptr;};
    void deleteUnFinished() { this->unFinished_ = nullptr;};
    inline const Models::CreateAlertRuleRequestTriggerConditionExtensionUnFinished & unFinished() const { DARABONBA_PTR_GET_CONST(unFinished_, Models::CreateAlertRuleRequestTriggerConditionExtensionUnFinished) };
    inline Models::CreateAlertRuleRequestTriggerConditionExtensionUnFinished unFinished() { DARABONBA_PTR_GET(unFinished_, Models::CreateAlertRuleRequestTriggerConditionExtensionUnFinished) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setUnFinished(const Models::CreateAlertRuleRequestTriggerConditionExtensionUnFinished & unFinished) { DARABONBA_PTR_SET_VALUE(unFinished_, unFinished) };
    inline CreateAlertRuleRequestTriggerConditionExtension& setUnFinished(Models::CreateAlertRuleRequestTriggerConditionExtensionUnFinished && unFinished) { DARABONBA_PTR_SET_RVALUE(unFinished_, unFinished) };


  protected:
    // The configuration for an alert of the CycleUnfinished type.
    std::shared_ptr<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished> cycleUnfinished_ = nullptr;
    // The configuration for an alert of the Error type.
    std::shared_ptr<Models::CreateAlertRuleRequestTriggerConditionExtensionError> error_ = nullptr;
    // The configuration for an alert of the InstanceErrorCount type.
    std::shared_ptr<Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorCount> instanceErrorCount_ = nullptr;
    // The configuration for an alert of the InstanceErrorPercentage type.
    std::shared_ptr<Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage> instanceErrorPercentage_ = nullptr;
    // The configuration for an alert of the InstanceTransferFluctuate type.
    std::shared_ptr<Models::CreateAlertRuleRequestTriggerConditionExtensionInstanceTransferFluctuate> instanceTransferFluctuate_ = nullptr;
    // The configuration for an alert of the Timeout type.
    std::shared_ptr<Models::CreateAlertRuleRequestTriggerConditionExtensionTimeout> timeout_ = nullptr;
    // The configuration for an alert of the UnFinished type.
    std::shared_ptr<Models::CreateAlertRuleRequestTriggerConditionExtensionUnFinished> unFinished_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
